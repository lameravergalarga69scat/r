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
	struct<28> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<216> Local_50 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8000, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	struct<9> Local_274[16];
	struct<9> Local_419[4];
	struct<9> Local_456[6];
	var uLocal_511 = 1;
	var uLocal_512 = 0;
	var uLocal_513 = 5;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	char* sLocal_519[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_526[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_541 = 4;
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
	struct<14> Local_578[1];
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
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
	int iLocal_621 = 0;
	int iLocal_622[5] = { 0, 0, 0, 0, 0 };
	int iLocal_628 = 0;
	var uLocal_629 = 0;
	float fLocal_630 = 0f;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	var uLocal_637[2] = { 0, 0 };
	int iLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	int iLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	bool bLocal_659 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_43 = joaat("WORLD_HUMAN_GUARD_LEAN_WALL");
	iLocal_44 = joaat("WORLD_HUMAN_GUARD_SCOUT");
	iLocal_45 = joaat("WORLD_HUMAN_STAND_WAITING");
	iLocal_46 = joaat("WORLD_HUMAN_LEAN_BACK_WALL_DRINKING");
	iLocal_47 = joaat("WORLD_HUMAN_BADASS");
	iLocal_48 = joaat("WORLD_HUMAN_HAMMER_KNEEL");
	iLocal_49 = joaat("WORLD_HUMAN_SMOKE");
	iLocal_636 = 1;
	iLocal_658 = vScriptParam_0.x;
	iLocal_656 = vScriptParam_0.z;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	}
	func_2();
	while (__LIB_9__::func_579())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_657)
		{
			iLocal_657 = MISC::GET_GAME_TIMER() + 1000;
			iVar0 = iLocal_656;
			__LIB_1__::func_947(iLocal_658, &iLocal_656);
			switch (iLocal_656)
			{
				case 0:
					if (!Global_1879534.f_1)
					{
						bLocal_659 = !__LIB_9__::func_648(iLocal_658, 1);
						if (bLocal_659)
						{
						}
						iLocal_656 = 1;
					}
					break;
				case 1:
					iLocal_656 = 2;
					break;
				case 2:
					if (func_6(bLocal_659))
					{
						iLocal_656 = 4;
					}
					break;
				case 4:
					iLocal_656 = 6;
					break;
				case 6:
					if (__LIB_9__::func_618(iLocal_658, -1, -1, 0))
					{
						__LIB_0__::func_24(iLocal_658, 4);
						iLocal_656 = 7;
					}
					break;
				case 7:
					iLocal_656 = 8;
					break;
				case 8:
					__LIB_1__::func_886(iLocal_658);
					iLocal_656 = 9;
					break;
				case 9:
					if (iLocal_658 != 5)
					{
						__LIB_1__::func_889(&Global_1898004);
						__LIB_9__::func_715(iLocal_658, &Global_1898004, bLocal_659);
					}
					__LIB_0__::func_24(iLocal_658, 8);
					iLocal_656 = 10;
					break;
				case 10:
					if (!bLocal_659)
					{
						func_12();
						if (__LIB_1__::func_890(32))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							__LIB_0__::func_22(32);
						}
						iLocal_656 = 3;
					}
					else
					{
						iLocal_656 = 3;
					}
					break;
				case 3:
					if (!STREAMING::_0xCF45DF50C7775F2A())
					{
						if (__LIB_0__::func_0(bLocal_659))
						{
							iLocal_656 = 11;
						}
					}
					break;
				case 11:
					if (!bLocal_659)
					{
						if (!func_16(iLocal_658))
						{
							iLocal_657 = 0;
						}
					}
					__LIB_6__::func_414(&Global_1898004, iLocal_658);
					break;
				case 12:
					func_18();
					break;
			}
			if (iVar0 != iLocal_656)
			{
				iLocal_657 = 0;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_18();
}

void func_2()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_18();
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		else
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	}
}

bool func_6(bool bParam0)
{
	func_42();
	Local_50.f_215 = Local_15.f_3;
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_27))
	{
		PATHFIND::_0x19C7567D2F2287D6(Local_15.f_27, 7);
	}
	return true;
}

void func_12()
{
	if (__LIB_3__::func_751(66) || __LIB_9__::func_598(128))
	{
		func_53(256);
	}
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Hanging_Dog_Ranch", true, true);
	func_54();
	func_55();
	func_56();
	__LIB_0__::func_11();
	func_58();
	__LIB_9__::func_661(&Local_50, 16, &sLocal_519, 30);
	__LIB_1__::func_397(&(Local_50.f_155), 1);
	__LIB_1__::func_393(&(Local_50.f_155), 0);
	__LIB_1__::func_399(&(Local_50.f_155), 1);
	__LIB_2__::func_829(&(Local_50.f_155), 0);
	__LIB_1__::func_400(&(Local_50.f_155), 0);
	__LIB_1__::func_413(&(Local_50.f_155), 1);
}

bool func_16(int iParam0)
{
	switch (Local_50)
	{
		case 0:
			if (__LIB_9__::func_656(&Local_50, &uLocal_511, &uLocal_513, "HANGING", 0))
			{
				__LIB_9__::func_580(&Local_578);
				__LIB_1__::func_649(&Local_50, 1);
			}
			break;
		case 1:
			if (__LIB_18__::func_199(&Local_50, &Local_274, joaat("REL_GANG_LARAMIE_GANG"), 0, iLocal_631))
			{
				Local_50.f_197 = 0;
				__LIB_1__::func_649(&Local_50, 2);
			}
			break;
		case 2:
			if (__LIB_18__::func_199(&Local_50, &Local_419, joaat("REL_DOMESTICATED_ANIMAL"), 0, 3))
			{
				Local_50.f_197 = 0;
				__LIB_1__::func_649(&Local_50, 3);
			}
			break;
		case 3:
			if (__LIB_18__::func_199(&Local_50, &Local_456, joaat("REL_DOMESTICATED_ANIMAL"), 0, 5))
			{
				Local_50.f_197 = 0;
				func_70(0);
				if (!func_71(256))
				{
					if (func_71(128))
					{
						func_72();
					}
				}
				func_73();
				func_74();
				__LIB_9__::func_619(&Local_50, &Local_274, 0, iLocal_631);
				__LIB_9__::func_619(&Local_50, &Local_419, 0, 3);
				__LIB_9__::func_619(&Local_50, &Local_456, 0, 5);
				iLocal_640 = GRAPHICS::CREATE_TRACKED_POINT();
				GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_640, -2216.052f, 730.4907f, 123.6852f, 3f);
				__LIB_1__::func_649(&Local_50, 7);
			}
			break;
		case 7:
			__LIB_9__::func_657(&Local_50, &Local_274);
			func_77();
			break;
	}
	if (!__LIB_9__::func_581(&Local_50, 4))
	{
		func_79();
	}
	func_80();
	__LIB_9__::func_679(&Local_50);
	__LIB_0__::func_11();
	return false;
}

void func_18()
{
	__LIB_0__::func_11(bLocal_659);
	__LIB_0__::func_11(bLocal_659);
	if (__LIB_0__::func_2() == -1)
	{
		if (iLocal_658 != 5)
		{
			__LIB_2__::func_755(iLocal_658);
		}
	}
	if (iLocal_658 != 5)
	{
		__LIB_2__::func_819(iLocal_658);
		__LIB_0__::func_25(iLocal_658, 4);
		__LIB_0__::func_25(iLocal_658, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
	}
	__LIB_9__::func_582(0);
	if (__LIB_0__::func_61() == iLocal_658)
	{
		__LIB_6__::func_409(0);
	}
	if (__LIB_1__::func_25(__LIB_4__::func_6(iLocal_658), 1))
	{
		__LIB_1__::func_408(__LIB_9__::func_583(iLocal_658), 1, 0);
	}
	func_108(iLocal_658);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_42()
{
	Local_15 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15, -2215.921f, 715.4277f, 108.5499f, 0f, 0f, -60.71788f, 61.12918f, 71.4177f, 40f);
	VOLUME::_0x39816F6F94F385AD(Local_15, -2185.79f, 719.8107f, 125.9173f, 0f, 0f, -49.6687f, 78.42181f, 29.96664f, 40f);
	VOLUME::_0x39816F6F94F385AD(Local_15, -2207.069f, 698.5532f, 125.9173f, 0f, 0f, 18.13125f, 57.41941f, 55.58218f, 40f);
	VOLUME::_0x39816F6F94F385AD(Local_15, -2243.9f, 698.0834f, 125.9173f, 0f, 0f, 157.6347f, 53.98835f, 35.64567f, 40f);
	Local_15.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER(-2162.379f, 697.5178f, 124.2176f, 0f, 0f, 117.2988f, 7.23474f, 10.33556f, 10f);
	Local_15.f_2 = VOLUME::_CREATE_VOLUME_BOX(-2176.081f, 718.1721f, 123.1325f, 0f, 0f, -65.64973f, 13.25763f, 11.35147f, 3.617907f);
	Local_15.f_3 = VOLUME::_CREATE_VOLUME_CYLINDER(-2205.058f, 704.8635f, 107.6184f, 0f, 0f, 0f, 100f, 51f, 55f);
	Local_15.f_4 = VOLUME::_CREATE_VOLUME_BOX(-2179.158f, 718.7728f, 125.696f, 0f, 0f, 25.73497f, 2.51749f, 8.753881f, 1.420768f);
	Local_15.f_5 = VOLUME::_CREATE_VOLUME_BOX(-2181.856f, 703.3795f, 125.5378f, 0f, 0f, 31.8471f, 25.59958f, 28.61663f, 14f);
	Local_15.f_6 = VOLUME::_CREATE_VOLUME_BOX(-2184.401f, 716.2277f, 125.5378f, 0f, 0f, 31.8471f, 46.04769f, 32.37297f, 14f);
	Local_15.f_7 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_7, -2195.499f, 704.8807f, 123.1368f, 0f, 0f, 30.40001f, 18.83077f, 12f, 10f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_7, -2198.667f, 710.2791f, 123.1368f, 0f, 0f, 30.40001f, 32.91431f, 12f, 10f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_7, -2203.972f, 709.9851f, 123.1368f, 0f, 0f, -15.61009f, 12f, 12f, 10f);
	Local_15.f_8 = VOLUME::_CREATE_VOLUME_BOX(-2177.229f, 719.6956f, 126.3739f, 0f, 0f, 25.68904f, 55.78278f, 26.5051f, 13.80155f);
	Local_15.f_9 = VOLUME::_CREATE_VOLUME_BOX(-2174.92f, 720.5648f, 122.894f, 0f, 0f, 25.00888f, 4.885302f, 15.48536f, 2.756113f);
	Local_15.f_10 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_10, -2238.242f, 733.6033f, 132.643f, 0f, 0f, 13.43939f, 3.288061f, 3.232871f, 12.02643f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_10, -2238.109f, 733.6352f, 128.3968f, 0f, 0f, 13.43939f, 5.500687f, 5.320982f, 3.092754f);
	Local_15.f_11 = VOLUME::_CREATE_VOLUME_BOX(-2219.658f, 736.7062f, 123.6755f, 0f, 0f, 29.83443f, 7.807473f, 10.42084f, 3f);
	Local_15.f_12 = VOLUME::_CREATE_VOLUME_BOX(-2209.769f, 719.3145f, 122.5114f, 0f, 0f, 29.49112f, 18.56119f, 13.66177f, 5f);
	Local_15.f_13 = VOLUME::_CREATE_VOLUME_BOX(-2174.108f, 723.7501f, 122.7633f, 0f, 0f, 24.88236f, 0.753009f, 1.679469f, 2.345157f);
	Local_15.f_14 = VOLUME::_CREATE_VOLUME_BOX(-2172.26f, 719.765f, 122.7633f, 0f, 0f, 24.88236f, 0.753009f, 3.028282f, 2.345157f);
	Local_15.f_15 = VOLUME::_CREATE_VOLUME_BOX(-2182.887f, 718.5485f, 122.7633f, 0f, 0f, 24.88236f, 0.753009f, 1.910376f, 2.345157f);
	Local_15.f_16 = VOLUME::_CREATE_VOLUME_BOX(-2180.633f, 713.69f, 122.7633f, 0f, 0f, 24.88236f, 0.753009f, 2.099462f, 2.345157f);
	Local_15.f_17 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_17, -2213.416f, 724.3344f, 126.4249f, 0f, 0f, 120.7389f, 12.5758f, 14.00233f, 16.17389f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_17, -2219.67f, 734.8531f, 126.4249f, 0f, 0f, 120.7389f, 21.75996f, 19.71248f, 16.17389f);
	Local_15.f_18 = VOLUME::_CREATE_VOLUME_BOX(-2217.485f, 732.937f, 123.3117f, 0f, 0f, 120.7389f, 15.10671f, 14.00233f, 3.046946f);
	Local_15.f_19 = VOLUME::_CREATE_VOLUME_BOX(-2217.907f, 733.649f, 123.3117f, 0f, 0f, 120.7389f, 18.05849f, 21.12796f, 3.046946f);
	Local_15.f_20 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_20, -2225.716f, 701.6668f, 119.2689f, 0f, 0f, 26.89523f, 9.995893f, 16.37919f, 14.88079f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_20, -2241.587f, 694.2487f, 119.2689f, 0f, 0f, 40.89367f, 13.73913f, 47.38847f, 14.88079f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_20, -2233.069f, 692.6113f, 119.2689f, 0f, 0f, 26.89523f, 13.60186f, 59.31243f, 14.88079f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_20, -2245.768f, 688.1744f, 119.2689f, 0f, 0f, 58.93462f, 18.14353f, 47.38847f, 14.88079f);
	Local_15.f_21 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_21, -2241.104f, 690.2465f, 119.9667f, 0f, 0f, -50.30847f, 10.47053f, 23.45253f, 11.39182f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_21, -2244.537f, 708.3721f, 119.9667f, 0f, 0f, 117.5792f, 41.35089f, 20.1097f, 11.39182f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_21, -2255.364f, 700.6849f, 119.9667f, 0f, 0f, 157.6347f, 30.40379f, 32.45269f, 11.39182f);
	Local_15.f_22 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_22, -2229.781f, 701.3605f, 119.2689f, 0f, 0f, 26.89523f, 2.753997f, 20.84027f, 14.88079f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_22, -2230.22f, 689.3765f, 119.2689f, 0f, 0f, 135.7285f, 2.753997f, 12.30992f, 14.88079f);
	Local_15.f_23 = VOLUME::_CREATE_VOLUME_BOX(-2151.21f, 617.5656f, 139.3943f, 0f, 0f, -14.07312f, 180f, 180f, 80.57575f);
	Local_15.f_24 = VOLUME::_CREATE_VOLUME_BOX(-2291.843f, 653.1472f, 139.3943f, 0f, 0f, -14.07311f, 180f, 180f, 80.57575f);
	Local_15.f_25 = VOLUME::_CREATE_VOLUME_BOX(-2254.409f, 800.5667f, 139.3943f, 0f, 0f, -14.07311f, 180f, 180f, 80.57575f);
	Local_15.f_26 = VOLUME::_CREATE_VOLUME_BOX(-2113.777f, 764.9851f, 139.3943f, 0f, 0f, -14.07312f, 180f, 180f, 80.57575f);
	Local_15.f_27 = VOLUME::_CREATE_VOLUME_BOX(-2175.111f, 722.58f, 122.09f, 0f, 0f, 115f, 2.5f, 1.2f, 1f);
}

void func_53(int iParam0)
{
	uLocal_629 = (uLocal_629 || iParam0);
}

void func_54()
{
	int iVar0;
	if (!__LIB_0__::func_724(iLocal_622[0]))
	{
		iVar0 = joaat("DOOR_HAN_01_PROPS_15");
		iLocal_622[0] = iVar0;
		__LIB_1__::func_948(iLocal_622[0], 1, 0f, 0, 0, 0, 0, 0);
		if (__LIB_0__::func_30(iLocal_622[0]))
		{
		}
	}
	if (!__LIB_0__::func_724(iLocal_622[1]))
	{
		iVar0 = joaat("DOOR_HAN_01_PROPS_16");
		iLocal_622[1] = iVar0;
		__LIB_1__::func_948(iLocal_622[1], 1, 0f, 0, 0, 0, 0, 0);
		if (__LIB_0__::func_30(iLocal_622[1]))
		{
		}
	}
	if (!__LIB_0__::func_724(iLocal_622[2]))
	{
		iVar0 = -2123724066;
		iLocal_622[2] = iVar0;
		__LIB_1__::func_948(iLocal_622[2], 0, 0f, 0, 1, 0, 0, 0);
		if (__LIB_0__::func_30(iLocal_622[2]))
		{
		}
	}
	if (!__LIB_0__::func_724(iLocal_622[3]))
	{
		iVar0 = joaat("DOOR_HAN_01_PROPS_11");
		iLocal_622[3] = iVar0;
		__LIB_1__::func_948(iLocal_622[3], 0, 0f, 0, 1, 0, 0, 0);
		if (__LIB_0__::func_30(iLocal_622[3]))
		{
		}
	}
	if (!__LIB_0__::func_724(iLocal_622[4]))
	{
		iVar0 = -1624567095;
		iLocal_622[4] = iVar0;
		__LIB_1__::func_948(iLocal_622[4], 0, 0f, 0, 1, 0, 0, 0);
		if (__LIB_0__::func_30(iLocal_622[4]))
		{
		}
	}
	if (!__LIB_0__::func_724(iLocal_628))
	{
		iVar0 = joaat("DOOR_HAN_DOG_RANCH_FRONT01");
		iLocal_628 = iVar0;
		__LIB_1__::func_948(iLocal_628, 0, 0f, 0, 0, 0, 0, 0);
		if (__LIB_0__::func_30(iLocal_628))
		{
		}
	}
}

void func_55()
{
	int iVar0;
	if (func_71(256))
	{
		Local_50.f_189 = 1;
		Local_50.f_199 = 5;
		Local_50.f_201 = (Local_50.f_199 + __LIB_9__::func_665());
	}
	else
	{
		Local_50.f_189 = 3;
		Local_50.f_199 = 16;
		Local_50.f_201 = (Local_50.f_199 + __LIB_9__::func_665());
	}
	func_140();
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		Local_274[iVar0 /*9*/] = joaat("G_M_M_UNIRANCHERS_01");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_419)
	{
		Local_419[iVar0 /*9*/] = joaat("A_C_HORSE_MORGAN_BAYROAN");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_456)
	{
		if (iVar0 < 1)
		{
			Local_456[iVar0 /*9*/] = joaat("A_C_BULL_01");
		}
		else
		{
			Local_456[iVar0 /*9*/] = joaat("A_C_COW");
		}
		iVar0++;
	}
	func_141();
	Local_50.f_207 = "CALLOUT_LETS_GET_OUTTA_HERE_NEUTRAL";
	__LIB_9__::func_584(&uLocal_513, Local_274[0 /*9*/]);
	__LIB_9__::func_584(&uLocal_513, Local_419[0 /*9*/]);
	__LIB_9__::func_584(&uLocal_513, Local_456[0 /*9*/]);
	__LIB_9__::func_584(&uLocal_513, Local_456[(Local_456 - 1) /*9*/]);
}

void func_56()
{
	sLocal_519[0] = "HIDEOUT_COMBAT1";
	sLocal_519[1] = "HIDEOUT_COMBAT2";
	sLocal_519[2] = "HIDEOUT_COMBAT3";
	sLocal_519[3] = "HIDEOUT_COMBAT4";
	sLocal_519[4] = "HIDEOUT_COMBAT5";
	sLocal_519[5] = "HIDEOUT_COMBAT6";
}

void func_58()
{
	int iVar0;
	Local_578[0 /*14*/] = { func_143(4, 1) };
	Local_578[0 /*14*/].f_6 = func_144(4, 1);
	Local_578[0 /*14*/].f_7 = joaat("S_WAGONPARKED01X");
	Local_578[0 /*14*/].f_3 = { 0f, 0f, Local_578[iVar0 /*14*/].f_6 };
	__LIB_9__::func_584(&uLocal_513, Local_578[0 /*14*/].f_7);
}

void func_70(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_50.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274[iVar0 /*9*/].f_5, bParam0);
			PED::SET_PED_CONFIG_FLAG(Local_274[iVar0 /*9*/].f_5, 130, bParam0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_274[iVar0 /*9*/].f_5, 7, 0, 1);
		}
		iVar0++;
	}
}

bool func_71(int iParam0)
{
	return (uLocal_629 && iParam0) != 0;
}

void func_72()
{
	int iVar0;
	iVar0 = 11;
	if (!ENTITY::IS_ENTITY_DEAD(Local_274[iVar0 /*9*/].f_5))
	{
		DECORATOR::DECOR_SET_BOOL(Local_274[iVar0 /*9*/].f_5, "proc_bounty_target", true);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(Local_274[iVar0 /*9*/].f_5, false);
		func_169();
		__LIB_10__::func_57(&(Local_274[iVar0 /*9*/].f_5));
	}
}

void func_73()
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 1))
		{
			sVar1 = func_171(iVar0);
			__LIB_2__::func_133(Local_274[iVar0 /*9*/].f_5, sVar1, 0);
			PED::SET_PED_CONFIG_FLAG(Local_274[iVar0 /*9*/].f_5, 246, true);
			PED::_0xF1C03A5352243A30(Local_274[iVar0 /*9*/].f_5);
			__LIB_9__::func_666(&(Local_274[iVar0 /*9*/]), 0);
			TASK::TASK_LOOK_AT_ENTITY(Local_274[iVar0 /*9*/].f_5, Global_35, -1, 0, 51, 0);
			__LIB_2__::func_132(0, Local_274[iVar0 /*9*/].f_5);
		}
		iVar0++;
	}
	__LIB_4__::func_7(Local_274[0 /*9*/].f_5, joaat("WEAPON_UNARMED"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_4__::func_7(Local_274[1 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
}

void func_74()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	func_176(0, iLocal_44);
	func_176(1, iLocal_43);
	func_176(2, iLocal_47);
	func_176(3, iLocal_45);
	func_176(4, iLocal_48);
	if (!func_71(256))
	{
		func_176(5, iLocal_46);
		func_176(9, iLocal_49);
		func_176(10, iLocal_49);
		if (__LIB_2__::func_1(Local_274[12 /*9*/].f_5, 0, 1))
		{
			TASK::_TASK_START_SCENARIO_IN_PLACE(Local_274[12 /*9*/].f_5, joaat("WORLD_HUMAN_SMOKE_CIGAR"), 0, false, 0, -1f, false);
			__LIB_9__::func_588(&(Local_274[12 /*9*/].f_7), 256, 0);
		}
		if (__LIB_2__::func_1(Local_274[13 /*9*/].f_5, 0, 1))
		{
			TASK::_TASK_START_SCENARIO_IN_PLACE(Local_274[13 /*9*/].f_5, joaat("WORLD_HUMAN_SMOKE_CIGAR"), 0, false, 0, -1f, false);
			__LIB_9__::func_588(&(Local_274[13 /*9*/].f_7), 256, 0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 0))
		{
			if (!__LIB_0__::func_51(&(Local_274[iVar0 /*9*/].f_7), 256))
			{
				__LIB_9__::func_667(Local_274[iVar0 /*9*/].f_5, Local_274[iVar0 /*9*/].f_1, 3f, 3, 0, 0, 0);
			}
		}
		iVar0++;
	}
	if (!func_71(256))
	{
		if (func_71(128))
		{
			if (__LIB_2__::func_1(Local_274[11 /*9*/].f_5, 0, 1))
			{
				vVar1 = { -2215.501f, 728.9337f, 121.9681f };
				fVar4 = 204.9706f;
				if (__LIB_2__::func_1(Local_419[0 /*9*/].f_5, 0, 1))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_419[0 /*9*/].f_5, vVar1, fVar4, true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_274[11 /*9*/].f_5, vVar1, fVar4, true, false, true);
					PED::_SET_PED_ON_MOUNT(Local_274[11 /*9*/].f_5, Local_419[0 /*9*/].f_5, -1, true);
				}
			}
		}
	}
	func_180(0);
	func_180(1);
	func_180(2);
	func_180(3);
	func_180(4);
	func_180(5);
}

void func_77()
{
	if (!__LIB_9__::func_581(&Local_50, 9))
	{
		Local_50.f_198 = __LIB_9__::func_608(&Local_274, Local_50.f_199, Local_50.f_199);
	}
	switch (Local_50.f_3)
	{
		case 0:
			if (func_188())
			{
				if (__LIB_2__::func_284(4, 100))
				{
					func_190();
				}
				else
				{
					__LIB_9__::func_587(&Local_50, 1);
					func_192();
				}
				AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_START");
			}
			else if (func_193())
			{
				func_53(8);
				__LIB_9__::func_587(&Local_50, 1);
			}
			break;
		case 1:
			if (!func_71(8))
			{
				if (func_194())
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_50.f_192, Global_35, -1, false, 1);
					__LIB_9__::func_587(&Local_50, 2);
				}
			}
			else if (func_195())
			{
				func_196();
				func_190();
			}
			break;
		case 2:
			if (__LIB_9__::func_709(-5.5f, 1, 0, 0))
			{
				func_196();
				if (!func_71(256))
				{
					func_198(1);
				}
				if (!func_71(512))
				{
					func_199();
					func_53(512);
					__LIB_9__::func_640(&uLocal_618, 1);
				}
				if (func_193())
				{
					func_53(8);
					__LIB_2__::func_303(Local_50.f_192, 0, "ARRIVAL_COMBAT_RAID_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_190();
				}
			}
			break;
		case 5:
			func_196();
			if (func_202())
			{
			}
			if (!func_71(256))
			{
				func_198(0);
			}
			if (func_203())
			{
				if (__LIB_9__::func_638(&uLocal_609) > 20f)
				{
					__LIB_9__::func_587(&Local_50, 7);
					AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
				}
			}
			break;
		case 7:
			if (Local_50.f_198 < Local_50.f_189)
			{
				func_205();
			}
			if (__LIB_18__::func_205(&Local_50, &Local_274, -1))
			{
				func_207();
				__LIB_9__::func_587(&Local_50, 8);
			}
			break;
		case 8:
			if (func_208())
			{
				__LIB_9__::func_587(&Local_50, 9);
			}
			break;
		case 9:
			if (func_209(&Local_50, &Local_274, 1000, 1, 1))
			{
				__LIB_9__::func_587(&Local_50, 10);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Hanging_Dog_Ranch", false, true);
			}
			break;
		case 10:
			if (__LIB_9__::func_681(&Local_50))
			{
				func_211(0);
			}
			break;
	}
	if (Local_50.f_3 <= 5)
	{
		__LIB_9__::func_695(&Local_274, &Local_50);
	}
	if (!__LIB_9__::func_581(&Local_50, 5))
	{
		func_213();
		if (__LIB_9__::func_694(&Local_50, &Local_274, Local_50.f_199, 0, 0))
		{
			func_190();
		}
	}
	else if (Local_50.f_3 > 8)
	{
		__LIB_9__::func_692(&Local_274, &Local_50, 200, 1084227584 /* Float: 5f */);
	}
}

void func_79()
{
	int iVar0;
	if (__LIB_0__::func_51(&(Local_50.f_5), 131072))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(Local_50.f_5), 65536))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
				if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 1))
				{
					__LIB_9__::func_637(&(Local_274[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), -662251075);
				}
				break;
		}
		iVar0++;
	}
	__LIB_0__::func_7(&(Local_50.f_5), 131072);
}

void func_80()
{
	vector3 vVar0;
	switch (iLocal_595)
	{
		case 0:
			vVar0 = { VOLUME::_GET_VOLUME_COORDS(Local_15.f_2) };
			iLocal_621 = INTERIOR::GET_INTERIOR_AT_COORDS(vVar0);
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_621))
			{
				func_217(1);
			}
			break;
		case 1:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_621))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_621);
				func_217(2);
			}
			break;
		case 2:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_621))
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_621))
				{
					if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_621, "han_int_tables_upright"))
					{
						INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_621, "han_int_tables_upright", 0);
					}
					func_217(4);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_108(int iParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_621))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_621);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_22))
	{
		if (PATHFIND::_0xDE0EA444735C1368(Local_15.f_22))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Local_15.f_22);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_27))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_15.f_27);
	}
	if (Local_50.f_205 != iParam0)
	{
		Local_50.f_205 = iParam0;
	}
	if (iLocal_640 != -1)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_640);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Hanging_Dog_Ranch", false, true);
	func_211(1);
}

void func_140()
{
	if (func_71(256))
	{
		iLocal_631 = (Local_50.f_199 - 1);
		iLocal_633 = -1;
		iLocal_632 = -1;
		iLocal_634 = -1;
	}
	else
	{
		iLocal_631 = 13;
		if (!func_279())
		{
			iLocal_633 = 2;
			iLocal_632 = iLocal_631 + 1;
			iLocal_634 = ((iLocal_632 + iLocal_633) - 1);
		}
		else
		{
			iLocal_633 = 0;
			iLocal_632 = -1;
			iLocal_634 = -1;
		}
	}
}

void func_141()
{
	int iVar0;
	func_280(&(Local_274[0 /*9*/].f_1), &(Local_274[0 /*9*/].f_4), 0, 7);
	func_280(&(Local_274[1 /*9*/].f_1), &(Local_274[1 /*9*/].f_4), 0, 8);
	func_280(&(Local_274[5 /*9*/].f_1), &(Local_274[5 /*9*/].f_4), 0, 9);
	func_280(&(Local_274[2 /*9*/].f_1), &(Local_274[2 /*9*/].f_4), 0, 2);
	func_280(&(Local_274[3 /*9*/].f_1), &(Local_274[3 /*9*/].f_4), 0, 3);
	func_280(&(Local_274[4 /*9*/].f_1), &(Local_274[4 /*9*/].f_4), 0, 10);
	func_280(&(Local_274[6 /*9*/].f_1), &(Local_274[6 /*9*/].f_4), 0, 4);
	func_280(&(Local_274[7 /*9*/].f_1), &(Local_274[7 /*9*/].f_4), 0, 5);
	func_280(&(Local_274[8 /*9*/].f_1), &(Local_274[8 /*9*/].f_4), 0, 6);
	func_280(&(Local_274[9 /*9*/].f_1), &(Local_274[9 /*9*/].f_4), 0, 12);
	func_280(&(Local_274[10 /*9*/].f_1), &(Local_274[10 /*9*/].f_4), 0, 13);
	func_280(&(Local_274[11 /*9*/].f_1), &(Local_274[11 /*9*/].f_4), 0, 11);
	func_280(&(Local_274[12 /*9*/].f_1), &(Local_274[12 /*9*/].f_4), 0, 0);
	func_280(&(Local_274[13 /*9*/].f_1), &(Local_274[13 /*9*/].f_4), 0, 1);
	if (iLocal_632 >= 0)
	{
		iVar0 = iLocal_632;
		while (iVar0 <= iLocal_634)
		{
			func_281(&(Local_274[iVar0 /*9*/].f_1), &(Local_274[iVar0 /*9*/].f_4), 2, (iVar0 - iLocal_632));
			iVar0++;
		}
	}
	func_280(&(Local_419[0 /*9*/].f_1), &(Local_419[0 /*9*/].f_4), 5, 0);
	func_280(&(Local_419[1 /*9*/].f_1), &(Local_419[1 /*9*/].f_4), 5, 1);
	func_280(&(Local_419[2 /*9*/].f_1), &(Local_419[2 /*9*/].f_4), 5, 2);
	func_280(&(Local_419[3 /*9*/].f_1), &(Local_419[3 /*9*/].f_4), 5, 3);
	func_280(&(Local_456[0 /*9*/].f_1), &(Local_456[0 /*9*/].f_4), 5, 4);
	func_280(&(Local_456[1 /*9*/].f_1), &(Local_456[1 /*9*/].f_4), 5, 5);
	func_280(&(Local_456[2 /*9*/].f_1), &(Local_456[2 /*9*/].f_4), 5, 6);
	func_280(&(Local_456[3 /*9*/].f_1), &(Local_456[3 /*9*/].f_4), 5, 7);
	func_280(&(Local_456[4 /*9*/].f_1), &(Local_456[4 /*9*/].f_4), 5, 8);
	func_280(&(Local_456[5 /*9*/].f_1), &(Local_456[5 /*9*/].f_4), 5, 9);
}

Vector3 func_143(int iParam0, int iParam1)
{
	return func_282(iParam0, iParam1);
}

float func_144(int iParam0, int iParam1)
{
	return func_283(iParam0, iParam1);
}

void func_169()
{
	func_53(128);
}

char* func_171(int iParam0)
{
	int iVar0;
	iVar0 = (iParam0 % 3);
	switch (iVar0)
	{
		case 0:
			return "0711_G_M_M_UniRanchers_01_WHITE_01";
		case 1:
			return "0712_G_M_M_UniRanchers_01_WHITE_02";
		case 2:
			return "0713_G_M_M_UniRanchers_01_WHITE_03";
		default:
			break;
	}
	return "0711_G_M_M_UniRanchers_01_WHITE_01";
}

void func_176(int iParam0, int iParam1)
{
	if (__LIB_2__::func_1(Local_274[iParam0 /*9*/].f_5, 0, 1))
	{
		__LIB_0__::func_634(&(Local_274[iParam0 /*9*/].f_1), 1, 10, 0);
		uLocal_526[iParam0] = TASK::CREATE_SCENARIO_POINT(iParam1, Local_274[iParam0 /*9*/].f_1, Local_274[iParam0 /*9*/].f_4, 0f, 0f, 1);
		TASK::_TASK_USE_SCENARIO_POINT(Local_274[iParam0 /*9*/].f_5, uLocal_526[iParam0], 0, 0, false, true, 0, false, -1f, false);
		__LIB_9__::func_588(&(Local_274[iParam0 /*9*/].f_7), 256, 0);
	}
}

void func_180(int iParam0)
{
	if (__LIB_2__::func_1(Local_456[iParam0 /*9*/].f_5, 0, 1))
	{
		__LIB_0__::func_634(&(Local_456[iParam0 /*9*/].f_1), 1, 10, 0);
		TASK::TASK_WANDER_IN_AREA(Local_456[iParam0 /*9*/].f_5, Local_456[iParam0 /*9*/].f_1, 5f, 30f, 100f, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_456[iParam0 /*9*/].f_5, false);
		__LIB_2__::func_487(Local_456[iParam0 /*9*/].f_5, Local_15.f_22);
	}
}

bool func_188()
{
	int iVar0;
	int iVar1;
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_311(), Global_36, false) >= 25f)
	{
		return false;
	}
	Local_50.f_190 = __LIB_18__::func_200(&Local_274, &Local_50, 0, 0, 0, 1);
	if (Local_50.f_190 < 0)
	{
		return false;
	}
	Local_50.f_190 = 0;
	Local_50.f_192 = Local_274[Local_50.f_190 /*9*/].f_5;
	__LIB_9__::func_637(&(Local_274[Local_50.f_190 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
	iVar0 = Local_274[1 /*9*/].f_5;
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15, true, 0))
	{
		if (__LIB_2__::func_284(4, 100))
		{
			__LIB_2__::func_303(Local_50.f_192, 0, "ITS_MALE_EXTREME_RECOGNIZE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_303(Local_50.f_192, 0, "HEADS_UP_HIDEOUT", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		__LIB_9__::func_640(&uLocal_603, 0);
	}
	__LIB_2__::func_357(Local_50.f_192, Global_36, 3, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 8000, false, 1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 6000, -1f, -1f, -1f);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_50.f_192, true, false), 30f, 0, false, false, false, false);
	__LIB_1__::func_474(Local_50.f_192, &iVar1, 0, 0, 1, 1);
	func_314(&Local_274, Local_50.f_190, Global_35, 3, 2, -1f);
	if (__LIB_2__::func_1(iVar0, 0, 1))
	{
		func_315(iVar0, Global_35, 3, 2, 2000f);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2172.143f, 687.5095f, 119.6322f, 1f, 20000, 0.25f, 0, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 15000, -1f, -1f, -1f);
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 5f, 0, false, false, false, false);
		__LIB_1__::func_474(iVar0, &iVar1, 1f, 0, 1, 1);
		PED::SET_PED_USING_ACTION_MODE(iVar0, true, 15000, 0);
	}
	fLocal_630 = __LIB_0__::func_94(Local_50.f_192, Global_36, 1);
	__LIB_9__::func_594(Local_50.f_205);
	__LIB_0__::func_105(1);
	return true;
}

void func_190()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (func_320(iVar0))
		{
		}
		iVar0++;
	}
	__LIB_0__::func_325(&iLocal_602);
	__LIB_9__::func_640(&(Local_50.f_184), 1);
	__LIB_9__::func_640(&uLocal_609, 1);
	Local_50.f_187 = 16500;
	__LIB_1__::func_948(iLocal_622[2], 0, 0f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(iLocal_622[3], 0, 0f, 0, 0, 0f, 0, 0);
	func_70(1);
	__LIB_9__::func_587(&Local_50, 5);
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_ACTION");
}

void func_192()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_50.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_274[iVar0 /*9*/].f_5, 3, 0, 1);
		}
		iVar0++;
	}
}

bool func_193()
{
	if (!__LIB_1__::func_205(Global_35, Local_15, 1, 0))
	{
		return false;
	}
	Local_50.f_190 = __LIB_18__::func_200(&Local_274, &Local_50, 0, 0, 0, 8);
	if (Local_50.f_190 < 0)
	{
		return false;
	}
	Local_50.f_192 = Local_274[Local_50.f_190 /*9*/].f_5;
	return true;
}

bool func_194()
{
	float fVar0;
	if (func_71(8))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15, true, 0))
	{
		if (func_323())
		{
			return true;
		}
	}
	else
	{
		fVar0 = __LIB_0__::func_94(Local_50.f_192, Global_36, 1);
		if (__LIB_9__::func_709(-2f, 1, 0, 0))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_274[1 /*9*/].f_6))
			{
				__LIB_9__::func_637(&(Local_274[1 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
			}
			if (!MAP::DOES_BLIP_EXIST(Local_274[0 /*9*/].f_6))
			{
				__LIB_9__::func_637(&(Local_274[0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
			}
			if (fVar0 < (fLocal_630 - 15f) || fVar0 < 6f)
			{
				return true;
			}
		}
		if (__LIB_9__::func_709(0, 1, 0, 0) && __LIB_9__::func_658(&uLocal_603, 16f))
		{
			if ((fVar0 < (fLocal_630 + 2f) && PED::IS_PED_FACING_PED(Global_35, Local_50.f_192, 80f)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_50.f_192))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_195()
{
	int iVar0;
	switch (iLocal_596)
	{
		case 0:
			if (__LIB_2__::func_1(Local_50.f_192, 0, 1))
			{
				__LIB_2__::func_45(Local_50.f_192, Global_35, -1);
				__LIB_9__::func_640(&uLocal_618, 1);
				func_326(1);
			}
			break;
		case 1:
			if (PED::IS_PED_FACING_PED(Local_50.f_192, Global_35, 60f) || __LIB_9__::func_658(&uLocal_618, 2f))
			{
				__LIB_1__::func_148(&uLocal_618);
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_50.f_192, Global_35, 8000, false, 1);
				__LIB_2__::func_303(Local_50.f_192, 0, "ARRIVAL_COMBAT_RAID_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_9__::func_637(&(Local_274[Local_50.f_190 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
				func_326(2);
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				__LIB_9__::func_668(&Local_50, &Local_274, iVar0, "", "", 0, 1, 0, 0);
				iVar0++;
			}
			if (__LIB_9__::func_658(&uLocal_618, 2f))
			{
				func_326(3);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_196()
{
	int iVar0;
	if (__LIB_9__::func_658(&uLocal_609, 6f))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (func_329(iVar0))
		{
			PED::SET_PED_RESET_FLAG(Local_274[iVar0 /*9*/].f_5, 27, true);
		}
		iVar0++;
	}
}

void func_198(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3[24];
	if (bParam0)
	{
		PATHFIND::_0x19C7567D2F2287D6(Local_15.f_20, 15);
		iVar1 = Local_50.f_199;
	}
	else
	{
		iVar1 = 2;
	}
	fVar2 = 0.2f;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iLocal_635 >= Local_50.f_199)
		{
			iLocal_635 = 0;
		}
		if (func_332(iLocal_635))
		{
			iLocal_635++;
		}
		else
		{
			if (__LIB_2__::func_1(Local_274[iLocal_635 /*9*/].f_5, 0, 1) && PED::IS_PED_IN_COMBAT(Local_274[iLocal_635 /*9*/].f_5, 0))
			{
				StringCopy(&cVar3, "Ped ", 24);
				StringIntConCat(&cVar3, iLocal_635, 24);
				StringConCat(&cVar3, " ", 24);
				if (__LIB_0__::func_51(&(Local_274[iLocal_635 /*9*/].f_7), 4096))
				{
					StringConCat(&cVar3, "Flag set", 24);
					if (__LIB_1__::func_205(Local_274[iLocal_635 /*9*/].f_5, Local_15.f_20, 1, 0) || !__LIB_1__::func_205(Global_35, Local_15, 1, 0))
					{
						__LIB_0__::func_8(&(Local_274[iLocal_635 /*9*/].f_7), 4096);
						PED::SET_PED_COMBAT_MOVEMENT(Local_274[iLocal_635 /*9*/].f_5, 2);
						PED::SET_PED_COMBAT_RANGE(Local_274[iLocal_635 /*9*/].f_5, 0);
					}
				}
				else if (!__LIB_0__::func_51(&(Local_274[iLocal_635 /*9*/].f_7), 4096))
				{
					if (!__LIB_1__::func_205(Local_274[iLocal_635 /*9*/].f_5, Local_15.f_20, 1, 0))
					{
						StringConCat(&cVar3, "Flag NOT set", 24);
						__LIB_9__::func_588(&(Local_274[iLocal_635 /*9*/].f_7), 4096, 0);
					}
				}
			}
			iLocal_635++;
		}
		iVar0++;
	}
}

void func_199()
{
	int iVar0;
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		__LIB_0__::func_202(Local_274[1 /*9*/].f_5, 1);
		TASK::TASK_GRAPPLE(Local_274[1 /*9*/].f_5, Global_35, 0, 1, 1065353216 /* Float: 1f */, 1, 0);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -2178.507f, 678.9174f, 119.1548f, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
		__LIB_1__::func_474(Local_274[1 /*9*/].f_5, &iVar0, 0, 0, 1, 1);
	}
}

bool func_202()
{
	if (func_71(1))
	{
		return true;
	}
	if (!__LIB_0__::func_270())
	{
		func_53(1);
	}
	return false;
}

bool func_203()
{
	int iVar0;
	var uVar1;
	if (!func_71(256))
	{
		func_337();
		func_338();
		func_339();
		if (!func_279())
		{
			func_340();
			func_341();
		}
		func_342();
	}
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		__LIB_18__::func_201(&Local_50, &Local_274, iVar0, &uVar1, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
		iVar0++;
	}
	switch (iLocal_594)
	{
		case 0:
			func_344(1);
			break;
		case 1:
			func_344(2);
			break;
		case 2:
			if (func_345(Local_50.f_199, &Local_274, "CALLOUT_JUST_KILL_EM_NEUTRAL", Local_50.f_198, 5, 0))
			{
				func_346();
				func_344(3);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_205()
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (!__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 1))
		{
		}
		else
		{
			fVar1 = __LIB_0__::func_94(Local_274[iVar0 /*9*/].f_5, Global_36, 1);
			if (fVar1 < 5f)
			{
				__LIB_9__::func_588(&(Local_274[iVar0 /*9*/].f_7), 1, 0);
			}
		}
		iVar0++;
	}
}

void func_207()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 1))
		{
			if (__LIB_9__::func_604(&(Local_274[iVar0 /*9*/])))
			{
				func_351(Local_274[iVar0 /*9*/].f_5, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 4f, 4f, 3f);
			}
		}
		iVar0++;
	}
}

bool func_208()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 1))
		{
			if (__LIB_0__::func_51(&(Local_274[iVar0 /*9*/].f_7), 1) && MAP::DOES_BLIP_EXIST(Local_274[iVar0 /*9*/].f_6))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_209(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!__LIB_9__::func_641(iParam1, iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_5), 256))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		__LIB_9__::func_626(iParam0);
		__LIB_9__::func_622(iParam0);
		if (bParam4)
		{
			func_355(iParam0->f_205, bParam3, 0);
		}
		__LIB_9__::func_607(iParam0, 0);
		__LIB_0__::func_7(&(iParam0->f_5), 256);
		__LIB_0__::func_7(&(iParam0->f_5), 8);
	}
	return true;
}

void func_211(bool bParam0)
{
	func_358();
	if (bParam0)
	{
		__LIB_9__::func_680(&Local_274, &Local_50, &uLocal_513, SCRIPTS::GET_ID_OF_THIS_THREAD(), "HANGING");
	}
}

void func_213()
{
	vector3 vVar0;
	vVar0 = { __LIB_2__::func_114(Global_35, 1f) };
	if (__LIB_2__::func_157(Local_15.f_23, vVar0))
	{
		iLocal_601 = 1;
	}
	else if (__LIB_2__::func_157(Local_15.f_25, vVar0))
	{
		iLocal_601 = 2;
	}
	else if (__LIB_2__::func_157(Local_15.f_24, vVar0))
	{
		iLocal_601 = 3;
	}
	else if (__LIB_2__::func_157(Local_15.f_26, vVar0))
	{
		iLocal_601 = 4;
	}
}

void func_217(int iParam0)
{
	iLocal_595 = iParam0;
}

bool func_279()
{
	return func_71(128);
}

void func_280(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = iParam3;
	func_281(uParam0, uParam1, iParam2, iVar0);
}

void func_281(var uParam0, var uParam1, int iParam2, int iParam3)
{
	*uParam0 = { func_282(iParam2, iParam3) };
	*uParam1 = func_283(iParam2, iParam3);
}

Vector3 func_282(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -2223.761f, 737.5955f, 126.7442f;
				case 1:
					return -2218.971f, 741.9222f, 126.756f;
				case 2:
					return -2211.783f, 701.7747f, 120.9748f;
				case 3:
					return -2210.994f, 701.0175f, 120.9435f;
				case 4:
					return -2183.596f, 716.9006f, 121.2168f;
				case 5:
					return -2175.707f, 720.9724f, 121.6612f;
				case 6:
					return -2176.155f, 719.3885f, 121.5661f;
				case 7:
					return -2190.877f, 673.5523f, 118.9156f;
				case 8:
					return -2172.297f, 689.7922f, 119.7469f;
				case 9:
					return -2171.377f, 712.2957f, 121.1564f;
				case 10:
					return -2227.709f, 696.103f, 120.4979f;
				case 11:
					return -2215.684f, 737.365f, 122.3088f;
				case 12:
					return -2178.598f, 728.0159f, 121.6136f;
				case 13:
					return -2175.62f, 712.2767f, 125.2048f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -2172.399f, 704.8712f, 120.7081f;
				case 1:
					return -2203.452f, 703.8745f, 121.0022f;
				case 2:
					return -2189.793f, 729.2222f, 121.9009f;
				case 3:
					return -2199.363f, 698.4965f, 120.7474f;
				case 4:
					return -2211.82f, 727.1941f, 126.7459f;
				case 5:
					return -2182.918f, 718.5294f, 121.6174f;
				case 6:
					return -2179.823f, 711.8821f, 121.6257f;
				case 7:
					return -2201.024f, 683.3922f, 119.938f;
				case 8:
					return -2174.062f, 723.76f, 121.6155f;
				case 9:
					return -2172.435f, 720.2062f, 121.6158f;
				case 10:
					return -2215.8f, 737.1833f, 122.2836f;
				case 11:
					return -2217.199f, 738.8154f, 126.7635f;
				case 12:
					return -2221.781f, 734.1628f, 126.7485f;
				case 13:
					return -2176.991f, 719.4493f, 121.6153f;
				case 14:
					return -2175.45f, 716.213f, 121.6169f;
				case 15:
					return -2180.139f, 700.8182f, 120.7541f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2214.603f, 727.0795f, 121.8915f;
				case 1:
					return -2214.49f, 729.858f, 121.9972f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -2212.305f, 721.037f, 121.6195f;
				case 1:
					return -2206.981f, 720.8355f, 121.5673f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2181.971f, 700.0224f, 120.5177f;
				case 1:
					return -2196.003f, 717.3415f, 121.4383f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -2221.359f, 727.8313f, 121.8606f;
				case 1:
					return -2222.58f, 730.9521f, 122.1194f;
				case 2:
					return -2224.084f, 734.0168f, 122.2665f;
				case 3:
					return -2225.753f, 697.7101f, 120.6569f;
				case 4:
					return -2253.492f, 693.5522f, 120.7491f;
				case 5:
					return -2244.597f, 683.2422f, 118.5429f;
				case 6:
					return -2248.638f, 714.8721f, 121.2831f;
				case 7:
					return -2258.504f, 705.4272f, 121.1243f;
				case 8:
					return -2234.935f, 694.1183f, 119.9569f;
				case 9:
					return -2238.572f, 709.6912f, 121.0358f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_283(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 213.3486f;
				case 1:
					return 214.3606f;
				case 2:
					return 644.6668f;
				case 3:
					return 359.2667f;
				case 4:
					return 110.9196f;
				case 5:
					return 129.1174f;
				case 6:
					return -18.8163f;
				case 7:
					return 564.6566f;
				case 8:
					return 212.1663f;
				case 9:
					return 204.1663f;
				case 10:
					return 300.6566f;
				case 11:
					return 191.0894f;
				case 12:
					return 24.9915f;
				case 13:
					return -63.0085f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 114.052f;
				case 1:
					return -148.1992f;
				case 2:
					return 191.2408f;
				case 3:
					return 212.052f;
				case 4:
					return -147.9481f;
				case 5:
					return 116.0519f;
				case 6:
					return 114.0519f;
				case 7:
					return 202.1844f;
				case 8:
					return -64.351f;
				case 9:
					return -64.351f;
				case 10:
					return -156.9106f;
				case 11:
					return 164.2908f;
				case 12:
					return -99.7092f;
				case 13:
					return 114.9915f;
				case 14:
					return 114.9915f;
				case 15:
					return 180.9118f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 211.4397f;
				case 1:
					return 207.4397f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -167.4217f;
				case 1:
					return -131.4217f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 417.4069f;
				case 1:
					return 331.4069f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -58.1243f;
				case 1:
					return 305.8757f;
				case 2:
					return -60.1243f;
				case 3:
					return 209.8757f;
				case 4:
					return 137.7796f;
				case 5:
					return 23.7796f;
				case 6:
					return -30.2204f;
				case 7:
					return 35.7796f;
				case 8:
					return 1.7796f;
				case 9:
					return 67.7796f;
			}
			break;
	}
	return 0f;
}

Vector3 func_311()
{
	return -2178.5f, 676.5f, 119.7f;
}

void func_314(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	if (iParam1 < 0 || iParam1 >= *iParam0)
	{
		return;
	}
	func_315((iParam0[iParam1 /*9*/])->f_5, iParam2, iParam3, iParam4, fParam5);
}

void func_315(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	struct<23> Var0;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	TASK::_0xE7FA07624574B79A(iParam0, iParam1, iParam2, iParam3, fParam4, 1, 0, 0, 0);
	TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, BUILTIN::FLOOR(fParam4), 0, 51, 0);
	__LIB_2__::func_281(&Var0, iParam1, 0, -1, 3, 3, 2, 1, 0, 0, 0, 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
}

bool func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[1];
	float fVar6[1];
	float fVar8[1];
	int iVar10;
	iVar0 = iParam0;
	if (!__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 1))
	{
		return false;
	}
	if (func_279())
	{
		if (func_424(Local_274[iVar0 /*9*/].f_5))
		{
			return false;
		}
	}
	switch (iVar0)
	{
		case 2:
			vVar2[0 /*3*/] = { func_143(1, 1) };
			switch (iLocal_601)
			{
				case 3:
					PED::SET_PED_COMBAT_RANGE(Local_274[iVar0 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_274[iVar0 /*9*/].f_5, 2);
					break;
				default:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274[iVar0 /*9*/].f_5, vVar2[0 /*3*/], 6.5f, 0, false, 0);
					break;
			}
			__LIB_9__::func_670(&(Local_274[iVar0 /*9*/]), 0, 0, 0, 0, 0);
			break;
		case 3:
			vVar2[0 /*3*/] = { func_143(1, 3) };
			fVar6[0] = func_144(1, 3);
			switch (iLocal_601)
			{
				case 1:
					iVar10 = TASK::ADD_COVER_POINT(vVar2[0 /*3*/], fVar6[0], 3, 0, 1, false);
					__LIB_2__::func_542(Local_274[iVar0 /*9*/].f_5, vVar2[0 /*3*/], 6f, 1, 0);
					break;
				case 3:
					__LIB_2__::func_542(Local_274[iVar0 /*9*/].f_5, Local_274[iVar0 /*9*/].f_1, 4f, 0, 0);
					break;
				case 4:
					__LIB_2__::func_542(Local_274[iVar0 /*9*/].f_5, vVar2[0 /*3*/], 6f, 0, 0);
					break;
				default:
					PED::SET_PED_COMBAT_RANGE(Local_274[iVar0 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_274[iVar0 /*9*/].f_5, 2);
					break;
			}
			__LIB_9__::func_670(&(Local_274[iVar0 /*9*/]), 1, __LIB_1__::func_985(), 1, __LIB_1__::func_985(), 0);
			break;
		case 4:
			switch (iLocal_601)
			{
				case 1:
					vVar2[0 /*3*/] = { func_143(1, 7) };
					__LIB_9__::func_670(&(Local_274[iVar0 /*9*/]), 0, 1, 0, 0, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274[iVar0 /*9*/].f_5, vVar2[0 /*3*/], 5f, 1, false, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_274[iVar0 /*9*/].f_5, 45, true);
					break;
				default:
					PED::SET_PED_COMBAT_RANGE(Local_274[iVar0 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_274[iVar0 /*9*/].f_5, 2);
					__LIB_9__::func_670(&(Local_274[iVar0 /*9*/]), 0, 1, 1, 0, 0);
					break;
			}
			break;
		case 6:
			switch (iLocal_601)
			{
				case 1:
				case 3:
					vVar2[0 /*3*/] = { func_143(1, 15) };
					fVar8[0] = 5.5f;
					break;
				default:
					vVar2[0 /*3*/] = { func_143(4, 1) };
					fVar8[0] = 4f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED_TIMED(0, Global_35, 2000, 0);
			TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, vVar2[0 /*3*/], fVar8[0]);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_274[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
			break;
		case 7:
			switch (iLocal_601)
			{
				case 4:
					vVar2[0 /*3*/] = { func_143(1, 8) };
					fVar6[0] = func_144(1, 8);
					break;
				default:
					vVar2[0 /*3*/] = { func_143(1, 5) };
					fVar6[0] = func_144(1, 5);
					break;
			}
			iVar10 = TASK::ADD_COVER_POINT(vVar2[0 /*3*/], fVar6[0], 2, 0, 1, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2[0 /*3*/], 2f, 2000, 0.25f, 0, fVar6[0]);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar2[0 /*3*/], 20, 0, 0f, 0, 0, iVar10, 1, 0, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_274[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
			__LIB_9__::func_588(&(Local_274[iVar0 /*9*/].f_7), 64, 0);
			break;
		case 8:
			switch (iLocal_601)
			{
				case 4:
					vVar2[0 /*3*/] = { func_143(1, 9) };
					fVar6[0] = func_144(1, 9);
					break;
				default:
					vVar2[0 /*3*/] = { func_143(1, 6) };
					fVar6[0] = func_144(1, 6);
					break;
			}
			iVar10 = TASK::ADD_COVER_POINT(vVar2[0 /*3*/], fVar6[0], 2, 0, 1, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2[0 /*3*/], 2f, 20000, 0.25f, 0, fVar6[0]);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar2[0 /*3*/], 20, 0, 0f, 0, 0, iVar10, 1, 0, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_274[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
			__LIB_9__::func_588(&(Local_274[iVar0 /*9*/].f_7), 64, 0);
			break;
		case 9:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_274[iVar0 /*9*/].f_5, -2177.095f, 721.5068f, 121.6187f, 258.8683f, true, false, true);
			__LIB_1__::func_766(Local_274[iVar0 /*9*/].f_5, joaat("WEAPON_REPEATER_HENRY"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 40, 0, 0, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2183.847f, 715.3598f, 121.2995f, 3f, -1, 0.25f, 0, 40000f);
			PED::FORCE_PED_MOTION_STATE(0, joaat("MOTIONSTATE_SPRINT"), false, 0, false);
			PED::SET_PED_COMBAT_RANGE(0, 1);
			PED::SET_PED_COMBAT_MOVEMENT(0, 2);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_274[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
			__LIB_9__::func_588(&(Local_274[iVar0 /*9*/].f_7), 64, 0);
			break;
		case 10:
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			PED::SET_PED_COMBAT_RANGE(Local_274[iVar0 /*9*/].f_5, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_274[iVar0 /*9*/].f_5, 2);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_274[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
			break;
		case 0:
			PED::SET_PED_COMBAT_RANGE(Local_274[iVar0 /*9*/].f_5, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_274[iVar0 /*9*/].f_5, 2);
			__LIB_9__::func_670(&(Local_274[iVar0 /*9*/]), 0, 0, 0, 0, 0);
			break;
		case 1:
			switch (iLocal_601)
			{
				case 1:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274[iVar0 /*9*/].f_5, Local_274[iVar0 /*9*/].f_1, 4f, 1, false, 0);
					__LIB_9__::func_670(&(Local_274[iVar0 /*9*/]), 0, 1, 1, 0, 0);
					break;
				default:
					__LIB_9__::func_670(&(Local_274[iVar0 /*9*/]), 0, 1, 1, 0, 0);
					break;
			}
			break;
		case 5:
			vVar2[0 /*3*/] = { func_143(1, 0) };
			fVar8[0] = 4f;
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274[iVar0 /*9*/].f_5, vVar2[0 /*3*/], fVar8[0], 1, false, 0);
			__LIB_9__::func_670(&(Local_274[iVar0 /*9*/]), 0, 1, 0, 0, 0);
			break;
		case 11:
			vVar2[0 /*3*/] = { func_143(1, 10) };
			fVar6[0] = func_144(1, 10);
			iVar10 = TASK::ADD_COVER_POINT(vVar2[0 /*3*/], fVar6[0], 3, 0, 1, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2[0 /*3*/], 2f, 20000, 0.25f, 0, fVar6[0]);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar2[0 /*3*/], 20, 1, 0f, 0, 0, iVar10, 1, 0, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			__LIB_1__::func_474(Local_274[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
			break;
		case 12:
			break;
		case 13:
			break;
		default:
			return false;
	}
	return true;
}

bool func_323()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_311(), Global_36, false) < 25f)
	{
		Local_50.f_190 = __LIB_18__::func_200(&Local_274, &Local_50, 0, 0, 0, 1);
		if (Local_50.f_190 < 0)
		{
			return false;
		}
		Local_50.f_190 = 1;
		Local_50.f_192 = Local_274[Local_50.f_190 /*9*/].f_5;
		__LIB_9__::func_637(&(Local_274[Local_50.f_190 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
		return true;
	}
	return false;
}

void func_326(int iParam0)
{
	iLocal_596 = iParam0;
}

bool func_329(int iParam0)
{
	float fVar0;
	if (!__LIB_2__::func_1(Local_274[iParam0 /*9*/].f_5, 0, 0))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_274[iParam0 /*9*/].f_5))
	{
		return false;
	}
	if (__LIB_0__::func_94(Local_274[iParam0 /*9*/].f_5, Global_36, 1) < 5f)
	{
		return false;
	}
	switch (iParam0)
	{
		case 2:
			fVar0 = 1f;
			break;
		case 3:
			fVar0 = 1f;
			break;
		case 4:
			fVar0 = 1.5f;
			break;
		case 6:
			fVar0 = 1f;
			break;
		case 7:
			fVar0 = 0f;
			break;
		case 8:
			fVar0 = 0f;
			break;
		case 0:
			fVar0 = 1.2f;
			break;
		case 1:
			fVar0 = 1.5f;
			break;
		case 5:
			fVar0 = 2f;
			break;
	}
	if (__LIB_9__::func_658(&uLocal_609, fVar0))
	{
		return false;
	}
	return true;
}

bool func_332(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 5:
		case 7:
		case 8:
		case 12:
		case 13:
			return true;
	}
	return false;
}

void func_337()
{
	bool bVar0;
	if (iLocal_599 < 4)
	{
		if (!__LIB_2__::func_1(Local_274[6 /*9*/].f_5, 0, 1))
		{
			func_438(4);
			return;
		}
	}
	switch (iLocal_599)
	{
		case 0:
			if (!__LIB_2__::func_1(Local_274[0 /*9*/].f_5, 0, 1) && !__LIB_2__::func_1(Local_274[1 /*9*/].f_5, 0, 1))
			{
				bVar0 = true;
			}
			if (__LIB_1__::func_205(Global_35, Local_15, 1, 0))
			{
				__LIB_9__::func_640(&uLocal_606, 0);
				if (__LIB_9__::func_658(&uLocal_606, 4f))
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				__LIB_1__::func_733(Local_274[6 /*9*/].f_5);
				PED::_0x1854217C640B39EC(Local_274[6 /*9*/].f_5, Global_35, 0f, 0f, 0f, 15f, 0, 0);
				__LIB_9__::func_640(&uLocal_606, 1);
				func_438(2);
			}
			break;
		case 2:
			if (__LIB_9__::func_658(&uLocal_606, 1.5f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_274[6 /*9*/].f_5, Global_35, 17) && __LIB_9__::func_709(-3f, 1, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_606);
					__LIB_2__::func_133(Local_274[6 /*9*/].f_5, func_171(6), 0);
					__LIB_2__::func_303(Local_274[6 /*9*/].f_5, 0, "SICK_BASTARD", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_438(3);
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_94(Local_274[6 /*9*/].f_5, Global_36, 1) < 15f && __LIB_9__::func_658(&uLocal_606, 3f))
			{
				__LIB_1__::func_733(Local_274[6 /*9*/].f_5);
				PED::SET_PED_COMBAT_RANGE(Local_274[6 /*9*/].f_5, 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_274[6 /*9*/].f_5, 2);
				func_438(4);
			}
			break;
		case 4:
			break;
	}
}

void func_338()
{
	if (func_71(4))
	{
		return;
	}
	if (!__LIB_2__::func_1(Local_274[5 /*9*/].f_5, 0, 1))
	{
		func_53(4);
		return;
	}
	if (__LIB_1__::func_205(Global_35, Local_15.f_5, 1, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_274[5 /*9*/].f_5))
	{
		__LIB_1__::func_733(Local_274[5 /*9*/].f_5);
		PED::SET_PED_COMBAT_RANGE(Local_274[5 /*9*/].f_5, 0);
		PED::SET_PED_COMBAT_MOVEMENT(Local_274[5 /*9*/].f_5, 2);
		func_53(4);
	}
}

void func_339()
{
	int iVar0;
	bool bVar2;
	func_440();
	if (!func_71(16))
	{
		if (func_441(&Global_35))
		{
			func_53(16);
		}
	}
	switch (iLocal_593)
	{
		case 0:
			func_442(1);
			break;
		case 1:
			if (__LIB_1__::func_205(Global_35, Local_15.f_8, 1, 0) || Local_50.f_198 < 7)
			{
				iVar0 = 7;
				while (iVar0 <= 8)
				{
					if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 1))
					{
						if (!bVar2)
						{
							if (__LIB_2__::func_303(Local_274[iVar0 /*9*/].f_5, 0, "CHALLENGE_THREATEN", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								bVar2 = true;
							}
							else
							{
								iVar0++;
							}
							if (bVar2)
							{
								iVar0 = 7;
								while (iVar0 <= 8)
								{
									if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 1))
									{
										__LIB_9__::func_637(&(Local_274[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
									}
									iVar0++;
								}
								func_442(2);
							}
							Jump @424; //curOff = 262
							if (__LIB_9__::func_709(-6f, 1, 0, 0) || func_441(&Global_35))
							{
								iVar0 = 7;
								while (iVar0 <= 8)
								{
									__LIB_9__::func_670(&(Local_274[iVar0 /*9*/]), 0, 0, 1, 0, 0);
									iVar0++;
								}
								if (func_443())
								{
									iLocal_648 = 2;
								}
								else
								{
									iLocal_648 = 1;
								}
								func_442(3);
							}
							Jump @424; //curOff = 352
							if (Local_50.f_198 < 6)
							{
								iVar0 = 7;
								while (iVar0 <= 8)
								{
									if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 1))
									{
										__LIB_1__::func_733(Local_274[iVar0 /*9*/].f_5);
									}
									iVar0++;
								}
								func_442(4);
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_340()
{
	int iVar0;
	vector3 vVar1;
	if (iLocal_597 >= 2 && iLocal_597 < 5)
	{
		if (__LIB_2__::func_1(Local_419[0 /*9*/].f_5, 0, 1))
		{
			AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_419[0 /*9*/].f_5, "AGITATED", false);
		}
		if (__LIB_2__::func_1(Local_419[1 /*9*/].f_5, 0, 1))
		{
			AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_419[1 /*9*/].f_5, "AGITATED", false);
		}
	}
	if (iLocal_597 >= 2)
	{
		if (__LIB_2__::func_1(Local_419[0 /*9*/].f_5, 0, 1))
		{
			if (!func_71(32))
			{
				if (__LIB_0__::func_94(Local_419[0 /*9*/].f_5, func_282(3, 0), 0) < 1f || uLocal_637[0] != 0)
				{
					if (func_444(Local_274[iLocal_632 /*9*/].f_5, &(uLocal_637[0]), 33, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
					{
						__LIB_9__::func_670(&(Local_274[iLocal_632 /*9*/]), 0, 0, 1, 0, 0);
						func_53(32);
					}
				}
			}
		}
		if (__LIB_2__::func_1(Local_419[1 /*9*/].f_5, 0, 1))
		{
			if (!func_71(64))
			{
				if (__LIB_0__::func_94(Local_419[1 /*9*/].f_5, func_282(3, 1), 0) < 1f || uLocal_637[1] != 0)
				{
					if (func_444(Local_274[iLocal_632 + 1 /*9*/].f_5, &(uLocal_637[1]), 9, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
					{
						__LIB_9__::func_670(&(Local_274[iLocal_632 + 1 /*9*/]), 0, 0, 1, 0, 0);
						func_53(64);
					}
				}
			}
		}
	}
	if (!func_71(1024))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_19, false, 0) || GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_640))
		{
			iLocal_597 = 5;
		}
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_7, false, 0))
		{
			iLocal_597 = 0;
			func_53(1024);
		}
	}
	switch (iLocal_597)
	{
		case 0:
			if (__LIB_0__::func_266(Global_35, -2213.7f, 725.9f, 123.7f, 40f, 1, 1))
			{
				func_446(-2210.994f, 722.6376f, 123.666f, &uLocal_641, &uLocal_646, &uLocal_647, 0.5f, 18f, 0, 0, 13f);
				iLocal_597 = 1;
			}
			break;
		case 1:
			if (__LIB_18__::func_199(&Local_50, &Local_274, joaat("REL_GUNSLINGERS"), iLocal_632, iLocal_634))
			{
				Local_50.f_197 = 0;
				__LIB_9__::func_619(&Local_50, &Local_274, iLocal_632, iLocal_634);
				if (__LIB_2__::func_1(Local_274[iLocal_632 /*9*/].f_5, 0, 1))
				{
					__LIB_4__::func_7(Local_274[iLocal_632 /*9*/].f_5, joaat("GROUP_RIFLE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					if (__LIB_2__::func_1(Local_419[0 /*9*/].f_5, 0, 1))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_419[0 /*9*/].f_5, Local_274[iLocal_632 /*9*/].f_1, Local_274[iLocal_632 /*9*/].f_4, true, false, true);
						PED::_SET_PED_ON_MOUNT(Local_274[iLocal_632 /*9*/].f_5, Local_419[0 /*9*/].f_5, -1, true);
					}
				}
				if (__LIB_2__::func_1(Local_274[iLocal_632 + 1 /*9*/].f_5, 0, 1))
				{
					__LIB_4__::func_7(Local_274[iLocal_632 + 1 /*9*/].f_5, joaat("GROUP_PISTOL"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					if (__LIB_2__::func_1(Local_419[1 /*9*/].f_5, 0, 1))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_419[1 /*9*/].f_5, Local_274[iLocal_632 + 1 /*9*/].f_1, Local_274[iLocal_632 + 1 /*9*/].f_4, true, false, true);
						PED::_SET_PED_ON_MOUNT(Local_274[iLocal_632 + 1 /*9*/].f_5, Local_419[1 /*9*/].f_5, -1, true);
					}
				}
				iVar0 = iLocal_632;
				while (iVar0 <= iLocal_634)
				{
					if (__LIB_9__::func_670(&(Local_274[iVar0 /*9*/]), 0, 0, 1, 0, 0))
					{
						vVar1 = { func_282(3, (iVar0 - iLocal_632)) };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274[iVar0 /*9*/].f_5, vVar1, 2f, 1, false, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_274[iVar0 /*9*/].f_5, 51, true);
					}
					iVar0++;
				}
				__LIB_1__::func_948(iLocal_622[2], 0, 0f, 0, 0, 0f, 0, 0);
				__LIB_1__::func_948(iLocal_622[3], 0, 0f, 0, 0, 0f, 0, 0);
				iLocal_597 = 2;
				AUDIO::_PLAY_SOUND_FROM_POSITION("OPEN_BARN_DOORS", __LIB_9__::func_659(iLocal_622[3]), "HIDEOUT_HDR_Sounds", false, 0, false, 0);
			}
			break;
		case 2:
			if (__LIB_4__::func_195(iLocal_622[3]) >= 0.5f)
			{
				__LIB_1__::func_148(&uLocal_615);
				iLocal_597 = 4;
			}
			break;
		case 3:
			if (__LIB_9__::func_658(&uLocal_615, 2f))
			{
				iVar0 = 2;
				while (iVar0 <= 3)
				{
					if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 1))
					{
						PED::_0xFC3DB99C8144CD81(Local_274[iVar0 /*9*/].f_5, Local_15.f_12, 0, 0, 0);
					}
					iVar0++;
				}
				__LIB_1__::func_148(&uLocal_615);
				iLocal_597 = 4;
			}
			break;
		case 4:
			if (__LIB_9__::func_658(&uLocal_615, 0f))
			{
				iVar0 = 2;
				while (iVar0 <= 3)
				{
					if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 1))
					{
						__LIB_1__::func_733(Local_274[iVar0 /*9*/].f_5);
						PED::SET_PED_COMBAT_RANGE(Local_274[iVar0 /*9*/].f_5, 0);
					}
					iVar0++;
				}
				iVar0 = iLocal_632;
				while (iVar0 <= iLocal_634)
				{
					if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 0))
					{
						__LIB_1__::func_733(Local_274[iVar0 /*9*/].f_5);
						PED::SET_PED_COMBAT_RANGE(Local_274[iVar0 /*9*/].f_5, 0);
					}
					iVar0++;
				}
				iLocal_597 = 5;
			}
			break;
		case 5:
			break;
	}
}

void func_341()
{
	switch (iLocal_598)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(Local_274[11 /*9*/].f_6))
			{
				if (__LIB_9__::func_614(&Local_274) < 2)
				{
					__LIB_9__::func_637(&(Local_274[11 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
				}
			}
			if (__LIB_1__::func_205(Global_35, Local_15.f_17, 1, 0) || !__LIB_2__::func_1(Local_274[11 /*9*/].f_5, 0, 1))
			{
				if (__LIB_2__::func_1(Local_274[11 /*9*/].f_5, 0, 1))
				{
					__LIB_2__::func_133(Local_274[11 /*9*/].f_5, "0712_G_M_M_UniRanchers_01_WHITE_02", 0);
					__LIB_2__::func_303(Local_274[11 /*9*/].f_5, 0, "SURROUNDED", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_9__::func_637(&(Local_274[11 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
				}
				func_450(1);
			}
			break;
		case 1:
			if ((__LIB_9__::func_709(-5f, 1, 0, 0) || __LIB_1__::func_205(Global_35, Local_15.f_19, 1, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_274[11 /*9*/].f_5))
			{
				if (__LIB_9__::func_670(&(Local_274[11 /*9*/]), 0, 0, 1, 0, 0))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274[11 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_274[11 /*9*/].f_5, true, false), 1.5f, 1, false, 0);
				}
				__LIB_9__::func_640(&uLocal_649, 1);
				func_450(2);
			}
			break;
		case 2:
			if (__LIB_9__::func_658(&uLocal_649, 4f))
			{
				if (__LIB_2__::func_1(Local_274[11 /*9*/].f_5, 0, 1))
				{
					PED::_0xFC3DB99C8144CD81(Local_274[11 /*9*/].f_5, Local_15.f_18, 0, 0, 0);
				}
				__LIB_9__::func_640(&uLocal_649, 1);
				func_450(3);
			}
			break;
		case 3:
			if (__LIB_9__::func_658(&uLocal_649, 6f))
			{
				if (__LIB_2__::func_1(Local_274[11 /*9*/].f_5, 0, 1))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_274[11 /*9*/].f_5, Global_35, 17))
					{
						__LIB_2__::func_303(Local_274[11 /*9*/].f_5, 0, "CALLOUT_JUST_KILL_EM_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_733(Local_274[11 /*9*/].f_5);
						PED::SET_PED_COMBAT_MOVEMENT(Local_274[11 /*9*/].f_5, 2);
						func_450(4);
					}
				}
			}
			break;
		case 4:
			break;
	}
}

void func_342()
{
	vector3 vVar0;
	int iVar3;
	switch (iLocal_600)
	{
		case 0:
			if (func_451())
			{
				if (__LIB_2__::func_1(Local_274[12 /*9*/].f_5, 0, 1))
				{
					vVar0 = { func_143(1, 12) };
					PED::_SET_PED_CROUCH_MOVEMENT(Local_274[12 /*9*/].f_5, false, 0, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274[12 /*9*/].f_5, vVar0, 1f, 1, false, 0);
					__LIB_9__::func_637(&(Local_274[12 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar0, 3f, 20000, 1193033728 /* Float: 40000f */, 2f, 0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_274[12 /*9*/].f_5, &iVar3, 0, 0, 1, 1);
				}
				__LIB_9__::func_640(&uLocal_652, 0);
				func_452(1);
			}
			break;
		case 1:
			if (__LIB_9__::func_658(&uLocal_652, 0.5f))
			{
				if (__LIB_2__::func_1(Local_274[13 /*9*/].f_5, 0, 1))
				{
					vVar0 = { func_143(1, 11) };
					PED::_SET_PED_CROUCH_MOVEMENT(Local_274[13 /*9*/].f_5, false, 0, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_274[13 /*9*/].f_5, vVar0, 1f, 1, false, 0);
					__LIB_9__::func_637(&(Local_274[13 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar0, 3f, 20000, 1193033728 /* Float: 40000f */, 2f, 0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_274[13 /*9*/].f_5, &iVar3, 0, 0, 1, 1);
				}
				__LIB_1__::func_148(&uLocal_652);
				func_452(2);
			}
			break;
		case 2:
			if (__LIB_9__::func_658(&uLocal_652, 3f))
			{
				if (__LIB_2__::func_1(Local_274[13 /*9*/].f_5, 0, 1))
				{
					__LIB_1__::func_733(Local_274[13 /*9*/].f_5);
					PED::SET_PED_COMBAT_RANGE(Local_274[13 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_274[13 /*9*/].f_5, 2);
				}
				else if (__LIB_2__::func_1(Local_274[12 /*9*/].f_5, 0, 1))
				{
					__LIB_1__::func_733(Local_274[12 /*9*/].f_5);
					PED::SET_PED_COMBAT_RANGE(Local_274[12 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_274[12 /*9*/].f_5, 2);
				}
				__LIB_1__::func_148(&uLocal_652);
				func_452(3);
			}
			break;
		case 3:
			if (__LIB_9__::func_658(&uLocal_652, 1f))
			{
				if (__LIB_2__::func_1(Local_274[12 /*9*/].f_5, 0, 1))
				{
					__LIB_1__::func_733(Local_274[12 /*9*/].f_5);
					PED::SET_PED_COMBAT_RANGE(Local_274[12 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_274[12 /*9*/].f_5, 2);
				}
				if (__LIB_2__::func_1(Local_274[13 /*9*/].f_5, 0, 1))
				{
					__LIB_1__::func_733(Local_274[13 /*9*/].f_5);
					PED::SET_PED_COMBAT_RANGE(Local_274[13 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_274[13 /*9*/].f_5, 2);
				}
				__LIB_1__::func_148(&uLocal_652);
				func_452(4);
			}
			break;
		case 4:
			break;
	}
}

void func_344(int iParam0)
{
	iLocal_594 = iParam0;
}

bool func_345(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;
	if (iParam3 < iParam4)
	{
		iVar0 = iParam5;
		while (iVar0 <= ((iParam5 + iParam0) - 1))
		{
			func_455(&((iParam1[iVar0 /*9*/])->f_5), "");
			if (!bVar1)
			{
				if (__LIB_2__::func_1((iParam1[iVar0 /*9*/])->f_5, 0, 1))
				{
					bVar1 = true;
					__LIB_2__::func_303((iParam1[iVar0 /*9*/])->f_5, 0, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_346()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (__LIB_2__::func_1(Local_274[iVar0 /*9*/].f_5, 0, 0))
		{
			if (PED::_GET_PED_CROUCH_MOVEMENT(Local_274[iVar0 /*9*/].f_5))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Local_274[iVar0 /*9*/].f_5, false, 0, false);
			}
		}
		iVar0++;
	}
}

void func_351(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8)
{
	int iVar0;
	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(0f, 0f, 0f, vParam5, vParam8, "volDefAreaAttached");
	PED::_0x7C00CFC48A782DC0(iVar0, uParam1, vParam2, vParam5, 2, 1);
	PED::_0xFC3DB99C8144CD81(uParam0, iVar0, 0, 0, 0);
}

void func_355(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = __LIB_4__::func_6(iParam0);
	if (!__LIB_0__::func_6(iVar0))
	{
		return;
	}
	func_458(iVar0, 1, bParam1, 0, 1);
	__LIB_9__::func_615(iParam0, -1);
	if (bParam2)
	{
		if (__LIB_1__::func_268(iVar0) >= 1)
		{
			__LIB_9__::func_616(iVar0, (__LIB_1__::func_268(iVar0) - 1));
		}
	}
	else
	{
		__LIB_0__::func_703(0, 12);
		iVar1 = __LIB_9__::func_602(iParam0);
		if (__LIB_1__::func_268(iVar0) <= 1)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("GANG_HIDEOUT_COMPLETED")), 1);
		}
		if (iVar1 != -1)
		{
			iVar2 = Global_40.f_9571[iVar1 /*10*/].f_1;
			if (iVar2 == 2 || iVar2 == 1)
			{
				Global_1392050[iVar1 /*14*/].f_1 |= 2;
			}
			iVar3 = 0;
			iVar4 = 12;
			iVar5 = 0;
			if (iVar1 >= 0 && iVar1 < 6)
			{
				Global_1393237.f_192[iVar1] = (__LIB_0__::func_485() / 1000);
			}
			switch (iVar1)
			{
				case 2:
					iVar3 = 0;
					iVar4 = 25;
					iVar5 = 0;
					break;
				case 0:
					if (iParam0 == 36)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 4;
					}
					else if (iParam0 == 16)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 8;
					}
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 1:
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 4:
					break;
			}
			__LIB_9__::func_645(__LIB_2__::func_116(iParam0, 1), 350f, 0);
			__LIB_2__::func_304(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

void func_358()
{
	VOLUME::_DELETE_VOLUME(Local_15);
	VOLUME::_DELETE_VOLUME(Local_15.f_1);
	VOLUME::_DELETE_VOLUME(Local_15.f_2);
	VOLUME::_DELETE_VOLUME(Local_15.f_3);
	VOLUME::_DELETE_VOLUME(Local_15.f_4);
	VOLUME::_DELETE_VOLUME(Local_15.f_5);
	VOLUME::_DELETE_VOLUME(Local_15.f_6);
	VOLUME::_DELETE_VOLUME(Local_15.f_7);
	VOLUME::_DELETE_VOLUME(Local_15.f_8);
	VOLUME::_DELETE_VOLUME(Local_15.f_9);
	VOLUME::_DELETE_VOLUME(Local_15.f_10);
	VOLUME::_DELETE_VOLUME(Local_15.f_11);
	VOLUME::_DELETE_VOLUME(Local_15.f_12);
	VOLUME::_DELETE_VOLUME(Local_15.f_13);
	VOLUME::_DELETE_VOLUME(Local_15.f_14);
	VOLUME::_DELETE_VOLUME(Local_15.f_15);
	VOLUME::_DELETE_VOLUME(Local_15.f_16);
	VOLUME::_DELETE_VOLUME(Local_15.f_17);
	VOLUME::_DELETE_VOLUME(Local_15.f_18);
	VOLUME::_DELETE_VOLUME(Local_15.f_19);
	VOLUME::_DELETE_VOLUME(Local_15.f_20);
	VOLUME::_DELETE_VOLUME(Local_15.f_21);
	VOLUME::_DELETE_VOLUME(Local_15.f_22);
	VOLUME::_DELETE_VOLUME(Local_15.f_23);
	VOLUME::_DELETE_VOLUME(Local_15.f_24);
	VOLUME::_DELETE_VOLUME(Local_15.f_25);
	VOLUME::_DELETE_VOLUME(Local_15.f_26);
}

bool func_424(int iParam0)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		return DECORATOR::DECOR_GET_BOOL(iParam0, "proc_bounty_target");
	}
	return false;
}

void func_438(int iParam0)
{
	iLocal_599 = iParam0;
}

void func_440()
{
	vector3 vVar0;
	bool bVar3;
	switch (iLocal_648)
	{
		case 1:
			if (!func_443())
			{
				if (__LIB_2__::func_1(Local_274[7 /*9*/].f_5, 0, 1))
				{
					__LIB_1__::func_733(Local_274[7 /*9*/].f_5);
					vVar0 = { func_143(1, 8) };
					__LIB_2__::func_542(Local_274[7 /*9*/].f_5, vVar0, 1.5f, 1, 0);
				}
				if (__LIB_2__::func_1(Local_274[8 /*9*/].f_5, 0, 1))
				{
					__LIB_1__::func_733(Local_274[8 /*9*/].f_5);
					vVar0 = { func_143(1, 9) };
					__LIB_2__::func_542(Local_274[8 /*9*/].f_5, vVar0, 1.5f, 1, 0);
				}
				iLocal_648 = 4;
			}
			break;
		case 4:
			vVar0 = { func_143(1, 8) };
			if ((__LIB_2__::func_1(Local_274[7 /*9*/].f_5, 0, 1) && __LIB_0__::func_94(Local_274[7 /*9*/].f_5, vVar0, 0) < 1.5f) || !__LIB_2__::func_1(Local_274[7 /*9*/].f_5, 0, 1))
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				vVar0 = { func_143(1, 9) };
				if ((__LIB_2__::func_1(Local_274[8 /*9*/].f_5, 0, 1) && __LIB_0__::func_94(Local_274[8 /*9*/].f_5, vVar0, 0) < 1.5f) || !__LIB_2__::func_1(Local_274[8 /*9*/].f_5, 0, 1))
				{
					iLocal_648 = 2;
				}
			}
			break;
		case 2:
			if (func_443())
			{
				if (__LIB_2__::func_1(Local_274[7 /*9*/].f_5, 0, 1))
				{
					__LIB_1__::func_733(Local_274[7 /*9*/].f_5);
					vVar0 = { func_143(1, 5) };
					__LIB_2__::func_542(Local_274[7 /*9*/].f_5, vVar0, 1.5f, 1, 0);
				}
				if (__LIB_2__::func_1(Local_274[8 /*9*/].f_5, 0, 1))
				{
					__LIB_1__::func_733(Local_274[8 /*9*/].f_5);
					vVar0 = { func_143(1, 6) };
					__LIB_2__::func_542(Local_274[8 /*9*/].f_5, vVar0, 1.5f, 1, 0);
				}
				iLocal_648 = 3;
			}
			break;
		case 3:
			vVar0 = { func_143(1, 5) };
			if ((__LIB_2__::func_1(Local_274[7 /*9*/].f_5, 0, 1) && __LIB_0__::func_94(Local_274[7 /*9*/].f_5, vVar0, 0) < 1.5f) || !__LIB_2__::func_1(Local_274[7 /*9*/].f_5, 0, 1))
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				vVar0 = { func_143(1, 6) };
				if ((__LIB_2__::func_1(Local_274[8 /*9*/].f_5, 0, 1) && __LIB_0__::func_94(Local_274[8 /*9*/].f_5, vVar0, 0) < 1.5f) || !__LIB_2__::func_1(Local_274[8 /*9*/].f_5, 0, 1))
				{
					iLocal_648 = 1;
				}
			}
			break;
	}
}

bool func_441(var uParam0)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(*uParam0, Local_15.f_2, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(*uParam0, Local_15.f_4, true, 0))
	{
		return true;
	}
	return false;
}

void func_442(int iParam0)
{
	iLocal_593 = iParam0;
}

bool func_443()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, -2194.76f, 709.5738f, 121.1217f, false) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, -2157.75f, 727.7754f, 121.9189f, false))
	{
		return true;
	}
	return false;
}

bool func_444(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (__LIB_0__::func_27(*uParam1, 128))
	{
		if (!__LIB_0__::func_163(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_0__::func_27(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!__LIB_1__::func_865(iVar2))
			{
				return false;
			}
			if (!__LIB_0__::func_163(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (__LIB_1__::func_870(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!__LIB_0__::func_27(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((__LIB_0__::func_27(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			__LIB_1__::func_581(uParam1, 128);
			return false;
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	if (__LIB_0__::func_27(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*uParam1 = 0;
			return true;
		}
	}
	if (__LIB_0__::func_27(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!__LIB_1__::func_865(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!__LIB_0__::func_27(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!__LIB_0__::func_27(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (__LIB_0__::func_27(iParam2, 8192))
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return false;
		}
		if (__LIB_0__::func_27(*uParam1, 2336))
		{
			if (!__LIB_1__::func_865(iVar2))
			{
			}
			if (__LIB_1__::func_866(iVar2, *uParam1))
			{
				__LIB_1__::func_681(uParam1, 32);
				__LIB_1__::func_681(uParam1, 256);
				__LIB_1__::func_681(uParam1, 2048);
				__LIB_1__::func_581(uParam1, 512);
				__LIB_1__::func_581(uParam1, 1024);
				__LIB_1__::func_581(uParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (__LIB_0__::func_27(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!__LIB_1__::func_865(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return false;
			}
			else
			{
				__LIB_1__::func_681(uParam1, 64);
			}
		}
		if (__LIB_0__::func_27(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && __LIB_0__::func_27(iParam2, 1024))) || __LIB_0__::func_27(iParam2, 8)) && !__LIB_0__::func_27(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			__LIB_1__::func_581(uParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && __LIB_0__::func_27(iParam2, 4096)) && !__LIB_0__::func_27(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			__LIB_1__::func_581(uParam1, 2048);
			__LIB_1__::func_581(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && __LIB_0__::func_27(iParam2, 32)) && !__LIB_0__::func_27(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			__LIB_1__::func_581(uParam1, 256);
			__LIB_1__::func_581(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			__LIB_1__::func_581(uParam1, 64);
		}
		else if (!__LIB_0__::func_27(iParam2, 1))
		{
			if (!__LIB_0__::func_27(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (__LIB_1__::func_870(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!__LIB_0__::func_27(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			__LIB_1__::func_581(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			__LIB_1__::func_581(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			__LIB_1__::func_581(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	else if (!__LIB_0__::func_27(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		__LIB_1__::func_581(uParam1, 8);
	}
	return false;
}

int func_446(vector3 vParam0, var uParam3, int iParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10)
{
	float fVar0;
	if (fParam8 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam8)
		{
			return 0;
		}
	}
	fVar0 = __LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vParam0, 1);
	if (fVar0 < fParam7)
	{
		if (func_567(vParam0, 0, uParam3, iParam4, uParam5, fParam6, fParam7, fParam9, 0))
		{
			return 1;
		}
		if (fVar0 < fParam10)
		{
			*iParam4 = 0f;
			return 1;
		}
	}
	return 0;
}

void func_450(int iParam0)
{
	iLocal_598 = iParam0;
}

bool func_451()
{
	if (!__LIB_1__::func_205(Global_35, Local_15.f_19, 1, 0) && Local_50.f_198 > 6)
	{
		return false;
	}
	__LIB_9__::func_640(&uLocal_612, 0);
	if (__LIB_9__::func_658(&uLocal_612, 1.5f))
	{
		return true;
	}
	if (!__LIB_2__::func_1(Local_274[11 /*9*/].f_5, 0, 1))
	{
		if (__LIB_9__::func_658(&uLocal_612, 1f))
		{
			return true;
		}
	}
	return false;
}

void func_452(int iParam0)
{
	iLocal_600 = iParam0;
}

void func_455(var uParam0, char* sParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 780511057, true) == 1)
	{
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
		PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
	}
	if (!MISC::IS_STRING_NULL(sParam1) && __LIB_9__::func_709(0, 1, 0, 0))
	{
		__LIB_2__::func_303(*uParam0, Global_35, sParam1, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
}

void func_458(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			__LIB_9__::func_676();
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
						func_606(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_606(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_606(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_606(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_606(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_606(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_606(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_606(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_606(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_606(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_606(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_606(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_606(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_608();
						func_609(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_606(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_458(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_458(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_458(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_606(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_643();
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
							func_606(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

bool func_567(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam3))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam3);
			if (!PED::_0x5102307CE88798EB(iVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = __LIB_3__::func_441(iParam10);
				if (fVar2 < 0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_0x164CECC59E70DF86(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = __LIB_9__::func_706(uParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = __LIB_9__::func_673(uParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*fParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = __LIB_0__::func_36();
		}
		else if ((__LIB_0__::func_36() - *iParam5) > fParam7)
		{
			*iParam5 = 0f;
			return true;
		}
	}
	else if (*uParam4 == 2 && uParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0f;
		}
	}
	else
	{
		*fParam6 = 1;
	}
	return false;
}

bool func_606(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_606(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
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
		__LIB_5__::func_391(28);
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
			__LIB_1__::func_833(iParam0);
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
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_846(iParam0);
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
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, 0, 0, 0);
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
						func_606(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_606(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_606(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_606(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_606(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_606(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_606(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_5__::func_391(24);
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
					func_606(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_606(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_5__::func_507(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_6__::func_187(iParam0);
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
				func_606(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_608()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_891();
	func_892();
	func_893();
	func_894();
	func_895();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_609(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_898(iParam0, 1, 1, -142743235, 1);
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

void func_643()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_926(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
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

void func_891()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1116(0);
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
	func_1116(1);
}

void func_892()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_606(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_893()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1119(0);
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
	func_1119(1);
}

void func_894()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1119(0);
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
	func_1119(1);
}

void func_895()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_606(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_606(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_898(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_898(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_898(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_898(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_926(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1149(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_606(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1116(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_606(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1278(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_609(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_898(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1284(Var0);
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

void func_1119(bool bParam0)
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
		func_606(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_898(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_898(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_898(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_898(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_898(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_898(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_898(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_898(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_898(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_898(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_898(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1149(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1149(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1149(iVar63, -915411861, 1, 0, 0));
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

void func_1278(int iParam0)
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
	func_898(iParam0, 1, 1, -142743235, 1);
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
		func_898(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1284(struct<6> Param0)
{
	if (!func_1375(Param0.f_4, 1))
	{
	}
	if (!func_1375(Param0, 1))
	{
	}
	if (!func_1375(Param0.f_2, 1))
	{
	}
	if (!func_1375(Param0.f_5, 1))
	{
	}
	if (!func_1375(Param0.f_3, 1))
	{
	}
	if (!func_1375(Param0.f_1, 1))
	{
	}
}

bool func_1375(int iParam0, int iParam1)
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
				if (func_1375(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1375(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1375(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1375(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

