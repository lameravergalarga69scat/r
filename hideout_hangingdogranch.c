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
	struct<25> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<216> Local_40 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8000, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	struct<9> Local_264[20];
	var uLocal_445 = 1;
	var uLocal_446 = 0;
	var uLocal_447 = 7;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	char* sLocal_455[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	struct<9> Local_462[2];
	struct<9> Local_481[4];
	struct<14> Local_518[2];
	var uLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	var uLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
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
	var uLocal_578[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_587[2] = { 0, 0 };
	int iLocal_590 = 0;
	int iLocal_591[5] = { 0, 0, 0, 0, 0 };
	int iLocal_597 = 0;
	var uLocal_598 = 0;
	float fLocal_599 = 0f;
	float fLocal_600[5] = { 0f, 0f, 0f, 0f, 0f };
	bool bLocal_606 = false;
	int iLocal_607 = 0;
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	vector3 vLocal_613 = { 0f, 0f, 0f };
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	int iLocal_623 = 0;
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
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	bool bLocal_640 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_612 = 1;
	vLocal_613 = { -2209.862f, 721.4012f, 126.6772f };
	iLocal_639 = vScriptParam_0.x;
	iLocal_637 = vScriptParam_0.z;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	}
	func_2();
	while (__LIB_9__::func_579())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_638)
		{
			iLocal_638 = MISC::GET_GAME_TIMER() + 1000;
			iVar0 = iLocal_637;
			__LIB_1__::func_947(iLocal_639, &iLocal_637);
			switch (iLocal_637)
			{
				case 0:
					if (!Global_1879534.f_1)
					{
						bLocal_640 = !__LIB_9__::func_648(iLocal_639, 1);
						if (bLocal_640)
						{
						}
						iLocal_637 = 1;
					}
					break;
				case 1:
					iLocal_637 = 2;
					break;
				case 2:
					if (func_6(bLocal_640))
					{
						iLocal_637 = 4;
					}
					break;
				case 4:
					iLocal_637 = 6;
					break;
				case 6:
					if (__LIB_9__::func_618(iLocal_639, -1, -1, 0))
					{
						__LIB_0__::func_24(iLocal_639, 4);
						iLocal_637 = 7;
					}
					break;
				case 7:
					iLocal_637 = 8;
					break;
				case 8:
					__LIB_1__::func_886(iLocal_639);
					iLocal_637 = 9;
					break;
				case 9:
					if (iLocal_639 != 5)
					{
						__LIB_1__::func_889(&Global_1898004);
						func_11(iLocal_639, &Global_1898004, bLocal_640);
					}
					__LIB_0__::func_24(iLocal_639, 8);
					iLocal_637 = 10;
					break;
				case 10:
					if (!bLocal_640)
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
						iLocal_637 = 3;
					}
					else
					{
						iLocal_637 = 3;
					}
					break;
				case 3:
					if (!STREAMING::_0xCF45DF50C7775F2A())
					{
						if (__LIB_0__::func_0(bLocal_640))
						{
							iLocal_637 = 11;
						}
					}
					break;
				case 11:
					if (!bLocal_640)
					{
						if (!func_16(iLocal_639))
						{
							iLocal_638 = 0;
						}
					}
					func_17(&Global_1898004, iLocal_639);
					break;
				case 12:
					func_18();
					break;
			}
			if (iVar0 != iLocal_637)
			{
				iLocal_638 = 0;
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
	Local_40.f_215 = Local_15.f_8;
	return true;
}

void func_11(int iParam0, var uParam1, bool bParam2)
{
	__LIB_2__::func_766(uParam1, Local_40.f_215, 1);
}

void func_12()
{
	func_51();
	func_52();
	func_53();
	func_54();
	func_55();
	func_56();
	func_57();
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Hanging_Dog_Ranch", true, true);
	__LIB_9__::func_661(&Local_40, 16, &sLocal_455, 30);
	__LIB_1__::func_397(&(Local_40.f_155), 1);
	__LIB_2__::func_829(&(Local_40.f_155), 0);
	__LIB_1__::func_400(&(Local_40.f_155), 1);
	__LIB_9__::func_262(&(Local_40.f_155), 0);
}

bool func_16(int iParam0)
{
	switch (Local_40)
	{
		case 0:
			if (__LIB_9__::func_656(&Local_40, &uLocal_445, &uLocal_447, "HANGING", 0))
			{
				__LIB_1__::func_649(&Local_40, 1);
			}
			break;
		case 1:
			if (!func_65(262144))
			{
				__LIB_9__::func_580(&Local_518);
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(Local_518[1 /*14*/].f_8, 0);
				ENTITY::SET_ENTITY_LOD_DIST(Local_518[1 /*14*/].f_8, 200);
			}
			__LIB_1__::func_649(&Local_40, 2);
			break;
		case 2:
			if (__LIB_9__::func_663(&Local_40, &Local_264, joaat("REL_GANG_ODRISCOLL"), 0, 16))
			{
				Local_40.f_197 = 0;
				func_68(0);
				__LIB_1__::func_649(&Local_40, 3);
			}
			break;
		case 3:
			__LIB_9__::func_619(&Local_40, &Local_264, 0, 16);
			func_70();
			func_71();
			if (!func_65(262144))
			{
				func_72();
			}
			__LIB_1__::func_649(&Local_40, 7);
			break;
		case 6:
			break;
		case 7:
			__LIB_9__::func_657(&Local_40, &Local_264);
			func_74();
			break;
	}
	if (!__LIB_9__::func_581(&Local_40, 4))
	{
		if (Local_40 >= 3)
		{
			__LIB_9__::func_657(&Local_40, &Local_264);
			func_76();
		}
	}
	func_77();
	__LIB_9__::func_679(&Local_40);
	__LIB_0__::func_11();
	return false;
}

void func_17(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || __LIB_0__::func_1(Global_1935630, 16384)) || __LIB_0__::func_1(Global_1935630, 8388608))
	{
		return;
	}
	if (__LIB_1__::func_896(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = __LIB_1__::func_927();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((uParam0[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::_DOES_VOLUME_EXIST((*uParam0)[iVar3 /*3*/]))
				{
					if (VOLUME::_IS_POSITION_INSIDE_VOLUME((*uParam0)[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!__LIB_0__::func_65(uParam0[iVar3 /*3*/], 1) && __LIB_1__::func_120(iParam1)) && !__LIB_1__::func_897(iParam1, 16))
							{
								func_87(iParam1, __LIB_1__::func_898(), -1, 0, -1, 0);
								__LIB_0__::func_47(uParam0[iVar3 /*3*/], 1);
							}
							func_89(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (func_90() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			__LIB_1__::func_924();
			__LIB_1__::func_309(Global_1310750.f_16071, 0, iVar4, 0, 0);
		}
	}
	__LIB_1__::func_899(bVar0);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_900((iParam1 == __LIB_0__::func_61() && bVar0));
	}
}

void func_18()
{
	__LIB_0__::func_11(bLocal_640);
	__LIB_0__::func_11(bLocal_640);
	if (__LIB_0__::func_2() == -1)
	{
		if (iLocal_639 != 5)
		{
			__LIB_2__::func_755(iLocal_639);
		}
	}
	if (iLocal_639 != 5)
	{
		__LIB_2__::func_819(iLocal_639);
		__LIB_0__::func_25(iLocal_639, 4);
		__LIB_0__::func_25(iLocal_639, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
	}
	__LIB_9__::func_582(0);
	if (__LIB_0__::func_61() == iLocal_639)
	{
		__LIB_6__::func_409(0);
	}
	if (__LIB_1__::func_25(__LIB_4__::func_6(iLocal_639), 1))
	{
		__LIB_1__::func_408(__LIB_9__::func_583(iLocal_639), 1, 0);
	}
	func_105(iLocal_639);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_42()
{
	Local_15 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15, -2215.921f, 715.4277f, 108.5499f, 0f, 0f, -60.71788f, 61.12918f, 71.4177f, 40f);
	VOLUME::_0x39816F6F94F385AD(Local_15, -2185.79f, 719.8107f, 125.9173f, 0f, 0f, -49.66869f, 78.42181f, 29.96664f, 40f);
	VOLUME::_0x39816F6F94F385AD(Local_15, -2207.069f, 698.5532f, 125.9173f, 0f, 0f, 18.13125f, 57.41941f, 55.58218f, 40f);
	VOLUME::_0x39816F6F94F385AD(Local_15, -2243.9f, 698.0834f, 125.9173f, 0f, 0f, 157.6347f, 53.98835f, 35.64567f, 40f);
	Local_15.f_1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_1, -2195.499f, 704.8807f, 123.1368f, 0f, 0f, 30.4f, 18.83077f, 12f, 10f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_1, -2198.667f, 710.2791f, 123.1368f, 0f, 0f, 30.4f, 32.91431f, 12f, 10f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_1, -2203.972f, 709.9851f, 123.1368f, 0f, 0f, -15.61006f, 12f, 12f, 10f);
	Local_15.f_2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_2, -2238.242f, 733.6033f, 132.643f, 0f, 0f, 13.43941f, 3.288061f, 3.232871f, 12.02643f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_2, -2238.109f, 733.6352f, 128.3968f, 0f, 0f, 13.43941f, 5.500687f, 5.320982f, 3.092754f);
	Local_15.f_3 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_3, -2213.416f, 724.3344f, 126.4249f, 0f, 0f, 120.7389f, 12.5758f, 14.00233f, 16.17389f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_3, -2218.295f, 735.6706f, 126.4249f, 0f, 0f, 77.82641f, 21.75996f, 23.15428f, 16.17389f);
	Local_15.f_4 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_4, -2233.069f, 692.6113f, 119.2689f, 0f, 0f, 26.89521f, 13.60186f, 59.31243f, 14.88079f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_4, -2245.768f, 688.1744f, 119.2689f, 0f, 0f, 58.93462f, 18.14353f, 47.38847f, 14.88079f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_4, -2241.587f, 694.2487f, 119.2689f, 0f, 0f, 40.89366f, 13.73913f, 47.38847f, 14.88079f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_4, -2225.716f, 701.6668f, 119.2689f, 0f, 0f, 26.89521f, 9.995893f, 16.37919f, 14.88079f);
	Local_15.f_5 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_5, -2185.79f, 719.8107f, 125.9173f, 0f, 0f, -49.66869f, 78.42181f, 29.96664f, 40f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_5, -2243.9f, 698.0834f, 125.9173f, 0f, 0f, 157.6347f, 53.98835f, 35.64567f, 40f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_5, -2215.921f, 715.4277f, 108.5499f, 0f, 0f, -60.71788f, 61.12918f, 71.4177f, 40f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_5, -2207.069f, 698.5532f, 125.9173f, 0f, 0f, 18.13125f, 57.41941f, 55.58218f, 40f);
	Local_15.f_6 = VOLUME::_CREATE_VOLUME_CYLINDER(-2162.379f, 697.5178f, 124.2176f, 0f, 0f, 117.2988f, 7.23474f, 10.33556f, 10f);
	Local_15.f_7 = VOLUME::_CREATE_VOLUME_BOX(-2176.081f, 718.1721f, 123.1325f, 0f, 0f, -65.64973f, 13.25763f, 11.35147f, 3.617907f);
	Local_15.f_8 = VOLUME::_CREATE_VOLUME_CYLINDER(-2205.058f, 704.8635f, 107.6184f, 0f, 0f, 0f, 100f, 100f, 55f);
	Local_15.f_9 = VOLUME::_CREATE_VOLUME_BOX(-2179.158f, 718.7728f, 125.696f, 0f, 0f, 25.73497f, 2.51749f, 8.753881f, 1.420768f);
	Local_15.f_10 = VOLUME::_CREATE_VOLUME_BOX(-2181.856f, 703.3795f, 125.5378f, 0f, 0f, 31.84711f, 25.59958f, 28.61663f, 14f);
	Local_15.f_11 = VOLUME::_CREATE_VOLUME_BOX(-2184.401f, 716.2277f, 125.5378f, 0f, 0f, 31.84711f, 46.04769f, 32.37297f, 14f);
	Local_15.f_12 = VOLUME::_CREATE_VOLUME_BOX(-2179.2f, 718.7476f, 126.3739f, 0f, 0f, 25.68902f, 25.76206f, 26.5051f, 13.80155f);
	Local_15.f_13 = VOLUME::_CREATE_VOLUME_BOX(-2175.911f, 721.6743f, 122.894f, 0f, 0f, 25.00886f, 5.707779f, 15.48536f, 2.940435f);
	Local_15.f_14 = VOLUME::_CREATE_VOLUME_BOX(-2219.658f, 736.7062f, 123.6755f, 0f, 0f, 29.83442f, 7.807473f, 10.42084f, 3f);
	Local_15.f_15 = VOLUME::_CREATE_VOLUME_BOX(-2209.769f, 719.3145f, 122.5114f, 0f, 0f, 29.49111f, 18.56119f, 13.66177f, 5f);
	Local_15.f_16 = VOLUME::_CREATE_VOLUME_BOX(-2174.108f, 723.7501f, 122.7633f, 0f, 0f, 24.88235f, 0.753009f, 1.679469f, 2.345157f);
	Local_15.f_17 = VOLUME::_CREATE_VOLUME_BOX(-2172.26f, 719.765f, 122.7633f, 0f, 0f, 24.88235f, 0.753009f, 3.028282f, 2.345157f);
	Local_15.f_18 = VOLUME::_CREATE_VOLUME_BOX(-2182.887f, 718.5485f, 122.7633f, 0f, 0f, 24.88235f, 0.753009f, 1.910376f, 2.345157f);
	Local_15.f_19 = VOLUME::_CREATE_VOLUME_BOX(-2180.633f, 713.69f, 122.7633f, 0f, 0f, 24.88235f, 0.753009f, 2.099462f, 2.345157f);
	Local_15.f_20 = VOLUME::_CREATE_VOLUME_BOX(-2217.485f, 732.937f, 123.3117f, 0f, 0f, 120.7389f, 15.10671f, 14.00233f, 3.046946f);
	Local_15.f_21 = VOLUME::_CREATE_VOLUME_BOX(-2217.907f, 733.649f, 123.3117f, 0f, 0f, 120.7389f, 18.05849f, 21.12796f, 3.046946f);
	Local_15.f_22 = VOLUME::_CREATE_VOLUME_BOX(-2218.787f, 735.3565f, 127.9376f, 0f, 0f, 30.39472f, 13.31781f, 11.7553f, 2.381363f);
	Local_15.f_23 = VOLUME::_CREATE_VOLUME_BOX(-2176.977f, 717.8536f, 125.6246f, 0f, 0f, 25.36805f, 13.22988f, 14.86482f, 8.285974f);
	Local_15.f_24 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_24, -2243.9f, 698.0834f, 120.3619f, 0f, 0f, 157.6347f, 53.98835f, 35.64567f, 3.523202f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_24, -2207.069f, 698.5532f, 120.7016f, 0f, 0f, 18.13125f, 57.41941f, 55.58218f, 3.523202f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_24, -2185.79f, 719.8107f, 120.3619f, 0f, 0f, -49.66869f, 78.42181f, 29.96664f, 3.523202f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_24, -2215.921f, 715.4277f, 120.7374f, 0f, 2.365027f, -60.71788f, 61.12918f, 71.4177f, 4.394218f);
}

void func_51()
{
	int iVar0;
	if ((__LIB_0__::func_627(64, 0) || __LIB_0__::func_627(65, 0)) || __LIB_9__::func_598(128))
	{
	}
	if (!__LIB_0__::func_724(iLocal_591[0]))
	{
		iVar0 = joaat("DOOR_HAN_01_PROPS_15");
		iLocal_591[0] = iVar0;
		__LIB_1__::func_948(iLocal_591[0], 0, -0.9f, 1, 0, 0, 0, 0);
		if (__LIB_0__::func_30(iLocal_591[0]))
		{
		}
	}
	if (!__LIB_0__::func_724(iLocal_591[1]))
	{
		iVar0 = joaat("DOOR_HAN_01_PROPS_16");
		iLocal_591[1] = iVar0;
		__LIB_1__::func_948(iLocal_591[1], 0, 1f, 1, 0, 0, 0, 0);
		if (__LIB_0__::func_30(iLocal_591[1]))
		{
		}
	}
	if (!__LIB_0__::func_724(iLocal_591[2]))
	{
		iVar0 = -2123724066;
		iLocal_591[2] = iVar0;
		__LIB_1__::func_948(iLocal_591[2], 0, 0f, 0, 1, 0, 0, 0);
		if (__LIB_0__::func_30(iLocal_591[2]))
		{
		}
	}
	if (!__LIB_0__::func_724(iLocal_591[3]))
	{
		iVar0 = joaat("DOOR_HAN_01_PROPS_11");
		iLocal_591[3] = iVar0;
		__LIB_1__::func_948(iLocal_591[3], 0, 0f, 0, 1, 0, 0, 0);
		if (__LIB_0__::func_30(iLocal_591[3]))
		{
		}
	}
	if (!__LIB_0__::func_724(iLocal_591[4]))
	{
		iVar0 = -1624567095;
		iLocal_591[4] = iVar0;
		__LIB_1__::func_948(iLocal_591[4], 0, 0f, 0, 1, 0, 0, 0);
		if (__LIB_0__::func_30(iLocal_591[4]))
		{
		}
	}
	if (!__LIB_0__::func_724(iLocal_597))
	{
		iVar0 = joaat("DOOR_HAN_DOG_RANCH_FRONT01");
		iLocal_597 = iVar0;
		__LIB_1__::func_948(iLocal_597, 1, 0f, 0, 0, 0, 0, 0);
		if (__LIB_0__::func_30(iLocal_597))
		{
		}
	}
}

void func_52()
{
	int iVar0;
	int iVar1;
	if (func_65(262144))
	{
		Local_40.f_189 = 1;
		Local_40.f_199 = 4;
		Local_40.f_201 = (Local_40.f_199 + __LIB_1__::func_976());
	}
	else
	{
		Local_40.f_189 = 3;
		Local_40.f_199 = 20;
		Local_40.f_201 = (Local_40.f_199 + __LIB_1__::func_976());
	}
	func_137();
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (iVar1 == 0)
		{
			Local_264[iVar0 /*9*/] = joaat("G_M_M_UNIDUSTER_01");
		}
		else if (iVar1 == 1)
		{
			Local_264[iVar0 /*9*/] = joaat("G_M_M_UNIDUSTER_02");
		}
		else if (iVar1 == 2)
		{
			Local_264[iVar0 /*9*/] = joaat("G_M_M_UNIDUSTER_01");
		}
		iVar1++;
		iVar1 = (iVar1 % 3);
		iVar0++;
	}
	func_138();
	Local_40.f_207 = "CALLOUT_LETS_GET_OUTTA_HERE_NEUTRAL";
	__LIB_9__::func_584(&uLocal_447, Local_264[0 /*9*/]);
	__LIB_9__::func_584(&uLocal_447, Local_264[1 /*9*/]);
	__LIB_9__::func_584(&uLocal_447, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
}

void func_53()
{
	int iVar0;
	var uVar1;
	iVar0 = 0;
	while (iVar0 < Local_462)
	{
		Local_462[iVar0 /*9*/].f_7 = 30;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_462)
	{
		func_140(&(Local_462[iVar0 /*9*/].f_1), &uVar1, 5, iVar0);
		iVar0++;
	}
}

void func_54()
{
	sLocal_455[0] = "HIDEOUT2_COMBAT1";
	sLocal_455[1] = "HIDEOUT2_COMBAT2";
	sLocal_455[2] = "HIDEOUT2_COMBAT3";
	sLocal_455[3] = "HIDEOUT2_COMBAT4";
	sLocal_455[4] = "HIDEOUT2_COMBAT5";
	sLocal_455[5] = "HIDEOUT2_COMBAT6";
}

void func_55()
{
	int iVar0;
	func_140(&(Local_481[0 /*9*/].f_1), &(Local_481[0 /*9*/].f_4), 6, 0);
	Local_481[0 /*9*/].f_5 = 0;
	Local_481[0 /*9*/].f_6 = 3;
	Local_481[0 /*9*/].f_7 = 1;
	func_140(&(Local_481[1 /*9*/].f_1), &(Local_481[1 /*9*/].f_4), 6, 1);
	Local_481[1 /*9*/].f_5 = 0;
	Local_481[1 /*9*/].f_6 = 3;
	Local_481[1 /*9*/].f_7 = 1;
	func_140(&(Local_481[2 /*9*/].f_1), &(Local_481[2 /*9*/].f_4), 6, 2);
	Local_481[2 /*9*/].f_5 = 0;
	Local_481[2 /*9*/].f_6 = 3;
	Local_481[2 /*9*/].f_7 = 1;
	func_140(&(Local_481[3 /*9*/].f_1), &(Local_481[3 /*9*/].f_4), 6, 3);
	Local_481[3 /*9*/].f_5 = 0;
	Local_481[3 /*9*/].f_6 = 3;
	Local_481[3 /*9*/].f_7 = 1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_9__::func_697(&(Local_481[iVar0 /*9*/]), 0);
		iVar0++;
	}
}

void func_56()
{
	int iVar0;
	Local_518[0 /*14*/] = { func_142(0, 2) };
	Local_518[0 /*14*/].f_6 = func_143(0, 2);
	Local_518[0 /*14*/].f_7 = joaat("GATLINGMAXIM02");
	Local_518[0 /*14*/].f_11 = 1;
	Local_518[0 /*14*/].f_12 = 1;
	Local_518[1 /*14*/] = { func_142(4, 0) };
	Local_518[1 /*14*/].f_6 = func_143(4, 0);
	Local_518[1 /*14*/].f_7 = joaat("P_CS_WAGON02X");
	iVar0 = 0 + 1;
	while (iVar0 <= 1)
	{
		if (Local_518[iVar0 /*14*/].f_7 == 0)
		{
			Local_518[iVar0 /*14*/].f_7 = joaat("P_CS_WAGON02XBROKEN");
		}
		Local_518[iVar0 /*14*/].f_3 = { 0f, 0f, Local_518[iVar0 /*14*/].f_6 };
		iVar0++;
	}
	__LIB_9__::func_584(&uLocal_447, Local_518[0 /*14*/].f_7);
	__LIB_9__::func_584(&uLocal_447, Local_518[1 /*14*/].f_7);
}

void func_57()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_587[0]))
	{
		uLocal_587[0] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2237.846f, 731.8396f, 135.3028f, 214.7357f, 2f, 0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_587[1]))
	{
		uLocal_587[1] = TASK::CREATE_SCENARIO_POINT(joaat("TEETER"), -2238.688f, 735.3594f, 135.3028f, 6.8992f, 2f, 0, 0);
	}
}

bool func_65(int iParam0)
{
	return (uLocal_598 && iParam0) != 0;
}

void func_68(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_40.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_264[iVar0 /*9*/].f_5, bParam0);
			PED::SET_PED_CONFIG_FLAG(Local_264[iVar0 /*9*/].f_5, 130, bParam0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_264[iVar0 /*9*/].f_5, 7, 0, 1);
		}
		iVar0++;
	}
}

void func_70()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(Local_264[iVar0 /*9*/].f_5, 246, true);
			__LIB_9__::func_666(&(Local_264[iVar0 /*9*/]), 0);
			PED::_0x9238A3D970BBB0A9(Local_264[iVar0 /*9*/].f_5, -820192119);
		}
		iVar0++;
	}
	__LIB_4__::func_7(Local_264[0 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_4__::func_7(Local_264[1 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	if (!func_65(262144))
	{
		__LIB_4__::func_7(Local_264[7 /*9*/].f_5, joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_4__::func_7(Local_264[6 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_4__::func_7(Local_264[12 /*9*/].f_5, joaat("GROUP_REVOLVER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	}
	if (__LIB_2__::func_1(Local_264[4 /*9*/].f_5, 0, 1))
	{
		__LIB_2__::func_279(Local_264[4 /*9*/].f_5, 1);
	}
	if (__LIB_2__::func_1(Local_264[5 /*9*/].f_5, 0, 1))
	{
		PED::SET_PED_COMBAT_MOVEMENT(Local_264[5 /*9*/].f_5, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_264[5 /*9*/].f_5, 1, false);
		WEAPON::REMOVE_ALL_PED_WEAPONS(Local_264[5 /*9*/].f_5, true, true);
	}
}

void func_71()
{
	int iVar0;
	int iVar1[4];
	float fVar6;
	iVar1[0] = joaat("WORLD_HUMAN_GUARD_LAZY");
	iVar1[1] = joaat("WORLD_HUMAN_SMOKE");
	iVar1[2] = joaat("WORLD_HUMAN_GUARD_MILITARY");
	iVar1[3] = joaat("WORLD_HUMAN_GUARD_SCOUT");
	if (__LIB_2__::func_1(Local_264[0 /*9*/].f_5, 0, 1))
	{
		uLocal_578[0] = TASK::CREATE_SCENARIO_POINT(iVar1[2], Local_264[0 /*9*/].f_1, Local_264[0 /*9*/].f_4, 0f, 0, 1);
		TASK::_TASK_USE_SCENARIO_POINT(Local_264[0 /*9*/].f_5, uLocal_578[0], "", 0, false, true, 0, false, -1f, false);
		PED::_0xF1C03A5352243A30(Local_264[0 /*9*/].f_5);
		__LIB_9__::func_588(&(Local_264[0 /*9*/].f_7), 256, 0);
	}
	if (__LIB_2__::func_1(Local_264[1 /*9*/].f_5, 0, 1))
	{
		TASK::_TASK_START_SCENARIO_IN_PLACE(Local_264[1 /*9*/].f_5, joaat("WORLD_HUMAN_GUARD_SCOUT"), -1, false, 0, -1f, false);
		PED::_0xF1C03A5352243A30(Local_264[1 /*9*/].f_5);
		__LIB_9__::func_588(&(Local_264[1 /*9*/].f_7), 256, 0);
	}
	if (__LIB_2__::func_1(Local_264[7 /*9*/].f_5, 0, 1))
	{
		uLocal_578[3] = TASK::CREATE_SCENARIO_POINT(iVar1[3], Local_264[7 /*9*/].f_1, Local_264[7 /*9*/].f_4, 0f, 0, 1);
		TASK::_TASK_USE_SCENARIO_POINT(Local_264[7 /*9*/].f_5, uLocal_578[3], "", 0, false, true, 0, false, -1f, false);
		__LIB_9__::func_588(&(Local_264[7 /*9*/].f_7), 256, 0);
	}
	if (__LIB_2__::func_1(Local_264[6 /*9*/].f_5, 0, 1))
	{
		TASK::TASK_WANDER_IN_AREA(Local_264[6 /*9*/].f_5, -2214.539f, 695.5394f, 121.706f, 20f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
		__LIB_9__::func_588(&(Local_264[6 /*9*/].f_7), 256, 0);
	}
	if (__LIB_2__::func_1(Local_264[2 /*9*/].f_5, 0, 1))
	{
		TASK::TASK_WANDER_IN_AREA(Local_264[2 /*9*/].f_5, -2207.076f, 702.7548f, 121.9932f, 15f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
		__LIB_9__::func_588(&(Local_264[2 /*9*/].f_7), 256, 0);
	}
	if (__LIB_2__::func_1(Local_264[3 /*9*/].f_5, 0, 1))
	{
		TASK::TASK_WANDER_IN_AREA(Local_264[3 /*9*/].f_5, -2204.292f, 701.1174f, 121.9064f, 15f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
		__LIB_9__::func_588(&(Local_264[3 /*9*/].f_7), 256, 0);
	}
	if (!func_65(262144))
	{
		if (__LIB_2__::func_1(Local_264[12 /*9*/].f_5, 0, 1))
		{
			uLocal_578[2] = TASK::CREATE_SCENARIO_POINT(iVar1[1], Local_264[12 /*9*/].f_1, Local_264[12 /*9*/].f_4, 0f, 0, 1);
			TASK::_TASK_USE_SCENARIO_POINT(Local_264[12 /*9*/].f_5, uLocal_578[2], "", 0, false, true, 0, false, -1f, false);
			__LIB_9__::func_588(&(Local_264[12 /*9*/].f_7), 256, 0);
			PED::_0xF1C03A5352243A30(Local_264[12 /*9*/].f_5);
		}
		if (__LIB_2__::func_1(Local_264[4 /*9*/].f_5, 0, 1))
		{
			fVar6 = __LIB_0__::func_152(Local_264[4 /*9*/].f_1, Global_36, 1);
			fVar6 = __LIB_2__::func_709((fVar6 + 180f));
			TASK::_TASK_START_SCENARIO_IN_PLACE(Local_264[4 /*9*/].f_5, joaat("WORLD_HUMAN_SMOKE"), -1, false, 0, -1f, false);
			__LIB_9__::func_588(&(Local_264[4 /*9*/].f_7), 256, 0);
			__LIB_2__::func_279(Local_264[4 /*9*/].f_5, 1);
		}
		if (__LIB_2__::func_1(Local_264[15 /*9*/].f_5, 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_264[15 /*9*/].f_5, true, 0, false);
		}
		if (__LIB_2__::func_1(Local_264[16 /*9*/].f_5, 0, 1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Local_264[16 /*9*/].f_5, true, 0, false);
		}
		if (__LIB_2__::func_1(Local_264[10 /*9*/].f_5, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(Local_264[10 /*9*/].f_5, 234, true);
		}
		if (__LIB_2__::func_1(Local_264[11 /*9*/].f_5, 0, 1))
		{
			TASK::TASK_WANDER_IN_AREA(Local_264[11 /*9*/].f_5, -2248.725f, 699.6807f, 120.7643f, 20f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			PED::SET_PED_CONFIG_FLAG(Local_264[11 /*9*/].f_5, 234, true);
			__LIB_9__::func_588(&(Local_264[11 /*9*/].f_7), 256, 0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 0))
		{
			if (!__LIB_0__::func_51(&(Local_264[iVar0 /*9*/].f_7), 256))
			{
				__LIB_9__::func_667(Local_264[iVar0 /*9*/].f_5, Local_264[iVar0 /*9*/].f_1, 3f, 3, 0, 0, 0);
			}
			__LIB_2__::func_133(Local_264[iVar0 /*9*/].f_5, func_176(Local_264[iVar0 /*9*/]), 0);
		}
		iVar0++;
	}
}

void func_72()
{
	if ((__LIB_2__::func_1(Local_264[5 /*9*/].f_5, 0, 1) && ENTITY::DOES_ENTITY_EXIST(Local_518[0 /*14*/].f_9)) && !ENTITY::IS_ENTITY_DEAD(Local_518[0 /*14*/].f_9))
	{
		__LIB_2__::func_279(Local_264[5 /*9*/].f_5, 1);
		ENTITY::SET_ENTITY_COORDS(Local_264[5 /*9*/].f_5, -2224.648f, 738.5237f, 126.754f, true, false, true, true);
	}
}

void func_74()
{
	int iVar0;
	if (!__LIB_9__::func_581(&Local_40, 9))
	{
		Local_40.f_198 = __LIB_9__::func_608(&Local_264, Local_40.f_199, Local_40.f_199);
	}
	if (__LIB_1__::func_200(65) && __LIB_9__::func_598(256))
	{
		if (!func_65(1048576))
		{
			__LIB_9__::func_587(&Local_40, 10);
			iVar0 = 0;
			while (iVar0 < Local_264)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_264[iVar0 /*9*/].f_5))
				{
					PED::DELETE_PED(&(Local_264[iVar0 /*9*/].f_5));
				}
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_518[0 /*14*/].f_9))
			{
				__LIB_2__::func_919(Local_518[0 /*14*/].f_9, 1, 1);
				VEHICLE::DELETE_VEHICLE(&(Local_518[0 /*14*/].f_9));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_518[1 /*14*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_518[1 /*14*/].f_8));
			}
			func_187(1048576);
		}
	}
	switch (Local_40.f_3)
	{
		case 0:
			if (func_188())
			{
				if (__LIB_2__::func_284(0, 100))
				{
					func_190();
				}
				else
				{
					__LIB_9__::func_587(&Local_40, 1);
					func_191();
				}
			}
			else if (func_192())
			{
				func_187(32768);
				__LIB_9__::func_587(&Local_40, 1);
			}
			break;
		case 1:
			if (!func_65(32768))
			{
				if (func_193())
				{
					func_194(Local_40.f_192, 0, "ACFGO_DOAA", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_40.f_192, Global_35, 4000, false, 1);
					__LIB_9__::func_587(&Local_40, 2);
				}
			}
			else if (func_195())
			{
				func_196();
				func_190();
			}
			break;
		case 2:
			func_196();
			if (!func_65(262144))
			{
				func_197(1);
			}
			func_190();
			break;
		case 5:
			func_196();
			if (func_198())
			{
			}
			if (!func_65(262144))
			{
				func_199();
			}
			if (func_200())
			{
				if (__LIB_9__::func_638(&uLocal_627) >= 20f)
				{
					__LIB_9__::func_587(&Local_40, 7);
					AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
				}
			}
			break;
		case 7:
			if (Local_40.f_198 < 3)
			{
				func_202();
				if (func_203(&Local_40, &Local_264, -1))
				{
					func_187(524288);
					__LIB_9__::func_587(&Local_40, 8);
				}
			}
			if (!func_65(262144))
			{
				func_199();
			}
			break;
		case 8:
			if (func_204())
			{
				__LIB_9__::func_587(&Local_40, 9);
			}
			break;
		case 9:
			if (func_205(&Local_40, &Local_264, 1000, 1, 1))
			{
				__LIB_9__::func_587(&Local_40, 10);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Hanging_Dog_Ranch", false, true);
				MISC::_0xCC3EDC5614B03F61(23);
			}
			break;
		case 10:
			if (!__LIB_9__::func_598(256))
			{
				if (__LIB_9__::func_681(&Local_40))
				{
					func_207(0);
				}
			}
			break;
	}
	if (Local_40.f_3 <= 5)
	{
		func_208(&Local_264, &Local_40);
	}
	if (!__LIB_9__::func_581(&Local_40, 5))
	{
		if (__LIB_9__::func_694(&Local_40, &Local_264, Local_40.f_199, 0, 0))
		{
			func_190();
		}
	}
	else if (Local_40.f_3 > 8)
	{
		__LIB_9__::func_692(&Local_264, &Local_40, 200, 1084227584 /* Float: 5f */);
	}
}

void func_76()
{
	int iVar0;
	if (__LIB_0__::func_51(&(Local_40.f_5), 131072))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(Local_40.f_5), 65536))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
				if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 1))
				{
					__LIB_9__::func_637(&(Local_264[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), -662251075);
				}
				break;
		}
		iVar0++;
	}
	__LIB_0__::func_7(&(Local_40.f_5), 131072);
}

void func_77()
{
	vector3 vVar0;
	switch (iLocal_549)
	{
		case 0:
			vVar0 = { VOLUME::_GET_VOLUME_COORDS(Local_15.f_7) };
			iLocal_590 = INTERIOR::GET_INTERIOR_AT_COORDS(vVar0);
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_590))
			{
				func_212(1);
			}
			break;
		case 1:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_590))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_590);
				func_212(2);
			}
			break;
		case 2:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_590))
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_590))
				{
					if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_590, "han_int_tables_flipped"))
					{
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_590, "han_int_tables_flipped", true);
					}
					if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_590, "han_int_tables_upright"))
					{
						INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_590, "han_int_tables_upright", 0);
					}
					if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_590, "HAN_WIN_LOCK"))
					{
						INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_590, "HAN_WIN_LOCK", 0);
					}
					func_212(4);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_87(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];
	if (!__LIB_2__::func_757())
	{
		return;
	}
	sVar1 = func_222(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!__LIB_0__::func_630(iParam4))
	{
		if (__LIB_0__::func_20(iParam0))
		{
			iParam4 = __LIB_1__::func_905(__LIB_1__::func_882(iParam0));
		}
		else
		{
			iParam4 = __LIB_1__::func_905(iParam1);
		}
	}
	if (__LIB_0__::func_630(iParam4))
	{
		iVar3 = __LIB_1__::func_931(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = __LIB_1__::func_907(__LIB_1__::func_906(iParam2));
	}
	else if ((__LIB_0__::func_622(iParam1, 2) || __LIB_1__::func_932(iParam4, 2)) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899.f_9 = 1;
	}
	else if ((__LIB_0__::func_20(iParam0) && __LIB_0__::func_21(iParam0, 16777216)) && !Global_1894899.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899.f_9 = 1;
	}
	else
	{
		iVar4 = __LIB_0__::func_41(__LIB_0__::func_23());
		iVar5 = __LIB_0__::func_42(__LIB_0__::func_23());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = __LIB_1__::func_908(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, __LIB_1__::func_925(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, __LIB_1__::func_925(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = __LIB_1__::func_908(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, __LIB_1__::func_925(&cVar6, joaat("COLOR_PURE_WHITE")), __LIB_1__::func_925(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899.f_9 = 0;
	}
	Global_1934266.f_148 = __LIB_1__::func_909(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_89(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && __LIB_0__::func_2() == 0)
	{
		return;
	}
	if (__LIB_0__::func_13(128))
	{
		return;
	}
	if (!__LIB_1__::func_950(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_21(iParam0, 32))
	{
		return;
	}
	__LIB_0__::func_24(iParam0, 32);
	__LIB_0__::func_7(&Global_1935630, 8192);
	__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (__LIB_1__::func_882(iParam0))
	{
		case 0:
		case 2:
		case 11:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		case 29:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			Jump @1640; //curOff = 1031
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			Jump @1640; //curOff = 1043
			MAP::_0xD8C7162AB2E2AF45(929640770);
			Jump @1640; //curOff = 1055
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			Jump @1640; //curOff = 1067
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			Jump @1640; //curOff = 1079
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			Jump @1640; //curOff = 1091
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			Jump @1640; //curOff = 1103
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			Jump @1640; //curOff = 1115
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			Jump @1640; //curOff = 1127
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			Jump @1640; //curOff = 1139
			MAP::_0xD8C7162AB2E2AF45(462373845);
			Jump @1640; //curOff = 1151
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			Jump @1640; //curOff = 1163
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			Jump @1640; //curOff = 1175
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			Jump @1640; //curOff = 1187
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			Jump @1640; //curOff = 1199
			MAP::_0xD8C7162AB2E2AF45(893855320);
			Jump @1640; //curOff = 1211
			MAP::_0xD8C7162AB2E2AF45(326709244);
			Jump @1640; //curOff = 1223
			MAP::_0xD8C7162AB2E2AF45(653799702);
			Jump @1640; //curOff = 1235
			MAP::_0xD8C7162AB2E2AF45(415864829);
			Jump @1640; //curOff = 1247
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			Jump @1640; //curOff = 1259
			MAP::_0xD8C7162AB2E2AF45(648073069);
			Jump @1640; //curOff = 1271
			MAP::_0xD8C7162AB2E2AF45(770074951);
			Jump @1640; //curOff = 1283
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			Jump @1640; //curOff = 1295
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			Jump @1640; //curOff = 1307
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			Jump @1640; //curOff = 1319
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			Jump @1640; //curOff = 1331
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			Jump @1640; //curOff = 1343
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			Jump @1640; //curOff = 1355
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			Jump @1640; //curOff = 1367
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			Jump @1640; //curOff = 1397
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			Jump @1640; //curOff = 1427
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			Jump @1640; //curOff = 1439
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			Jump @1640; //curOff = 1451
			MAP::_0xD8C7162AB2E2AF45(121074776);
			Jump @1640; //curOff = 1463
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			Jump @1640; //curOff = 1475
			MAP::_0xD8C7162AB2E2AF45(458479023);
			Jump @1640; //curOff = 1487
			MAP::_0xD8C7162AB2E2AF45(85299473);
			Jump @1640; //curOff = 1499
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			Jump @1640; //curOff = 1511
			MAP::_0xD8C7162AB2E2AF45(759314201);
			Jump @1640; //curOff = 1523
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			Jump @1640; //curOff = 1535
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			Jump @1640; //curOff = 1547
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			Jump @1640; //curOff = 1559
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			Jump @1640; //curOff = 1580
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			Jump @1640; //curOff = 1592
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			Jump @1640; //curOff = 1604
			MAP::_0xD8C7162AB2E2AF45(820139809);
			Jump @1640; //curOff = 1616
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			if (bParam1)
			{
				__LIB_0__::func_24(iParam0, 64);
			}
		}
bool func_90()
{
	return (Global_1894899 & 1 != 0 && __LIB_0__::func_12() != -1);
}

void func_105(int iParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_590))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_590);
	}
	if (Local_40.f_205 != iParam0)
	{
		Local_40.f_205 = iParam0;
	}
	func_207(1);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Hanging_Dog_Ranch", false, true);
}

void func_137()
{
	if (func_65(262144))
	{
		iLocal_607 = (Local_40.f_199 - 1);
		iLocal_609 = 0;
		iLocal_608 = -1;
		iLocal_610 = -1;
	}
	else
	{
		iLocal_609 = 2;
		iLocal_607 = 16;
		iLocal_608 = iLocal_607 + 1;
		iLocal_610 = ((iLocal_608 + iLocal_609) - 1);
	}
}

void func_138()
{
	int iVar0;
	func_274(&(Local_264[4 /*9*/].f_1), &(Local_264[4 /*9*/].f_4), 0, 0);
	func_274(&(Local_264[5 /*9*/].f_1), &(Local_264[5 /*9*/].f_4), 0, 2);
	func_274(&(Local_264[0 /*9*/].f_1), &(Local_264[0 /*9*/].f_4), 0, 9);
	func_274(&(Local_264[1 /*9*/].f_1), &(Local_264[1 /*9*/].f_4), 0, 10);
	func_274(&(Local_264[7 /*9*/].f_1), &(Local_264[7 /*9*/].f_4), 0, 11);
	func_274(&(Local_264[2 /*9*/].f_1), &(Local_264[2 /*9*/].f_4), 0, 3);
	func_274(&(Local_264[3 /*9*/].f_1), &(Local_264[3 /*9*/].f_4), 0, 4);
	func_274(&(Local_264[6 /*9*/].f_1), &(Local_264[6 /*9*/].f_4), 0, 12);
	func_274(&(Local_264[8 /*9*/].f_1), &(Local_264[8 /*9*/].f_4), 0, 6);
	func_274(&(Local_264[9 /*9*/].f_1), &(Local_264[9 /*9*/].f_4), 0, 5);
	func_274(&(Local_264[10 /*9*/].f_1), &(Local_264[10 /*9*/].f_4), 0, 7);
	func_274(&(Local_264[11 /*9*/].f_1), &(Local_264[11 /*9*/].f_4), 0, 8);
	func_274(&(Local_264[12 /*9*/].f_1), &(Local_264[12 /*9*/].f_4), 0, 13);
	func_274(&(Local_264[13 /*9*/].f_1), &(Local_264[13 /*9*/].f_4), 0, 14);
	func_274(&(Local_264[14 /*9*/].f_1), &(Local_264[14 /*9*/].f_4), 0, 15);
	func_274(&(Local_264[15 /*9*/].f_1), &(Local_264[15 /*9*/].f_4), 0, 16);
	func_274(&(Local_264[16 /*9*/].f_1), &(Local_264[16 /*9*/].f_4), 0, 17);
	if (!func_65(262144))
	{
		iVar0 = iLocal_608;
		while (iVar0 <= iLocal_610)
		{
			func_140(&(Local_264[iVar0 /*9*/].f_1), &(Local_264[iVar0 /*9*/].f_4), 2, (iVar0 - iLocal_608));
			iVar0++;
		}
	}
}

void func_140(var uParam0, var uParam1, int iParam2, int iParam3)
{
	*uParam0 = { func_275(iParam2, iParam3) };
	*uParam1 = func_276(iParam2, iParam3);
}

Vector3 func_142(int iParam0, int iParam1)
{
	return func_275(iParam0, iParam1);
}

float func_143(int iParam0, int iParam1)
{
	return func_276(iParam0, iParam1);
}

char* func_176(int iParam0)
{
	switch (iParam0)
	{
		case joaat("G_M_M_UNIDUSTER_01"):
			return "0355_G_M_M_UniDuster_01_WHITE_01";
		case joaat("G_M_M_UNIDUSTER_02"):
			return "0357_G_M_M_UniDuster_02_WHITE_01";
		case joaat("G_M_M_UNIDUSTER_03"):
			return "0361_G_M_M_UniDuster_03_WHITE_01";
		default:
			break;
	}
	return "0355_G_M_M_UniDuster_01_WHITE_01";
}

void func_187(int iParam0)
{
	uLocal_598 = (uLocal_598 || iParam0);
}

bool func_188()
{
	int iVar0;
	int iVar1;
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_303(), Global_36, false) >= 25f)
	{
		return false;
	}
	Local_40.f_190 = __LIB_18__::func_200(&Local_264, &Local_40, 0, 0, 0, 1);
	if (Local_40.f_190 < 0)
	{
		return false;
	}
	Local_40.f_190 = 1;
	Local_40.f_192 = Local_264[Local_40.f_190 /*9*/].f_5;
	__LIB_9__::func_637(&(Local_264[Local_40.f_190 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
	iVar0 = Local_264[0 /*9*/].f_5;
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15, true, 0))
	{
		if (__LIB_2__::func_284(0, 100))
		{
			func_194(Local_40.f_192, 0, "ITS_MALE_EXTREME_RECOGNIZE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			func_194(Local_40.f_192, 0, "HEADS_UP_HIDEOUT", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		__LIB_9__::func_640(&uLocal_557, 0);
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 8000, false, 1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 6000, -1f, -1f, -1f);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_40.f_192, true, false), 30f, 0, false, false, false, false);
	__LIB_1__::func_474(Local_40.f_192, &iVar1, 0, 0, 1, 1);
	func_306(Local_40.f_192, 10000);
	if (__LIB_2__::func_1(iVar0, 0, 1))
	{
		__LIB_2__::func_357(iVar0, Global_36, 3, 1, 1);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
		__LIB_1__::func_474(iVar0, &iVar1, 0, 0, 1, 1);
		func_306(iVar0, 2000);
		PED::SET_PED_USING_ACTION_MODE(iVar0, true, 2000, 0);
	}
	fLocal_599 = __LIB_0__::func_94(Local_40.f_192, Global_36, 1);
	__LIB_9__::func_594(Local_40.f_205);
	__LIB_0__::func_105(1);
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_START");
	return true;
}

void func_190()
{
	int iVar0;
	iLocal_555 = 1;
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (func_312(iVar0))
		{
		}
		iVar0++;
	}
	__LIB_0__::func_325(&iLocal_556);
	__LIB_9__::func_640(&(Local_40.f_184), 1);
	__LIB_9__::func_640(&uLocal_566, 1);
	Local_40.f_187 = 16500;
	__LIB_1__::func_948(iLocal_591[2], 0, 0f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(iLocal_591[3], 0, 0f, 0, 0, 0f, 0, 0);
	__LIB_9__::func_587(&Local_40, 5);
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_ACTION");
	__LIB_1__::func_148(&uLocal_627);
	func_68(1);
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_23))
	{
		if (PATHFIND::_0x19C7567D2F2287D6(Local_15.f_23, 7))
		{
		}
	}
}

void func_191()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_40.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_264[iVar0 /*9*/].f_5, 3, 0, 1);
		}
		iVar0++;
	}
}

bool func_192()
{
	if (!__LIB_1__::func_205(Global_35, Local_15, 1, 0))
	{
		return false;
	}
	Local_40.f_190 = __LIB_18__::func_200(&Local_264, &Local_40, 0, 0, 4, 16);
	if (Local_40.f_190 < 0)
	{
		return false;
	}
	Local_40.f_192 = Local_264[Local_40.f_190 /*9*/].f_5;
	return true;
}

bool func_193()
{
	float fVar0;
	if (func_65(32768))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15, true, 0))
	{
		if (func_316())
		{
			return true;
		}
	}
	else
	{
		fVar0 = __LIB_0__::func_94(Local_40.f_192, Global_36, 1);
		if (__LIB_9__::func_709(-2f, 1, 0, 0))
		{
			if (fVar0 < (fLocal_599 - 15f) || fVar0 < 6f)
			{
				return true;
			}
		}
		if (__LIB_9__::func_709(0, 1, 0, 0) && __LIB_9__::func_658(&uLocal_557, 16f))
		{
			if ((fVar0 < (fLocal_599 + 2f) && PED::IS_PED_FACING_PED(Global_35, Local_40.f_192, 80f)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_40.f_192))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_194(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_319(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_195()
{
	int iVar0;
	int iVar1;
	switch (iLocal_550)
	{
		case 0:
			if (__LIB_2__::func_1(Local_40.f_192, 0, 1))
			{
				__LIB_2__::func_45(Local_40.f_192, Global_35, -1);
				__LIB_9__::func_640(&uLocal_575, 1);
				func_321(1);
			}
			break;
		case 1:
			if (PED::IS_PED_FACING_PED(Local_40.f_192, Global_35, 60f) || __LIB_9__::func_658(&uLocal_575, 2f))
			{
				__LIB_1__::func_148(&uLocal_575);
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_40.f_192, Global_35, 8000, false, 1);
				func_194(Local_40.f_192, 0, "CALLOUT_JUST_KILL_EM_MALE", "", -1f, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_9__::func_637(&(Local_264[Local_40.f_190 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
				func_321(2);
			}
			break;
		case 2:
			if (!func_65(262144))
			{
				iVar1 = 12;
			}
			else
			{
				iVar1 = (Local_40.f_199 - 1);
			}
			iVar0 = 0;
			while (iVar0 <= iVar1)
			{
				iVar0++;
			}
			if (__LIB_9__::func_658(&uLocal_575, 2f))
			{
				func_321(3);
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
	if (__LIB_9__::func_658(&uLocal_566, 6f))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (func_322(iVar0))
		{
			PED::SET_PED_RESET_FLAG(Local_264[iVar0 /*9*/].f_5, 27, true);
		}
		iVar0++;
	}
}

void func_197(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3[24];
	if (bParam0)
	{
		PATHFIND::_0x19C7567D2F2287D6(Local_15.f_4, 15);
		iVar1 = Local_40.f_199;
	}
	else
	{
		iVar1 = 2;
	}
	fVar2 = 0.2f;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iLocal_611 >= Local_40.f_199)
		{
			iLocal_611 = 0;
		}
		if (func_323(iLocal_611))
		{
			iLocal_611++;
		}
		else
		{
			if (__LIB_2__::func_1(Local_264[iLocal_611 /*9*/].f_5, 0, 1) && PED::IS_PED_IN_COMBAT(Local_264[iLocal_611 /*9*/].f_5, 0))
			{
				StringCopy(&cVar3, "Ped ", 24);
				StringIntConCat(&cVar3, iLocal_611, 24);
				StringConCat(&cVar3, " ", 24);
				if (__LIB_0__::func_51(&(Local_264[iLocal_611 /*9*/].f_7), 4096))
				{
					StringConCat(&cVar3, "Flag set", 24);
					if (__LIB_1__::func_205(Local_264[iLocal_611 /*9*/].f_5, Local_15.f_4, 1, 0) || !__LIB_1__::func_205(Global_35, Local_15, 1, 0))
					{
						__LIB_0__::func_8(&(Local_264[iLocal_611 /*9*/].f_7), 4096);
						PED::SET_PED_COMBAT_MOVEMENT(Local_264[iLocal_611 /*9*/].f_5, 1);
						PED::SET_PED_COMBAT_RANGE(Local_264[iLocal_611 /*9*/].f_5, 0);
					}
				}
				else if (!__LIB_0__::func_51(&(Local_264[iLocal_611 /*9*/].f_7), 4096))
				{
					if (!__LIB_1__::func_205(Local_264[iLocal_611 /*9*/].f_5, Local_15.f_4, 1, 0))
					{
						StringConCat(&cVar3, "Flag NOT set", 24);
						__LIB_9__::func_588(&(Local_264[iLocal_611 /*9*/].f_7), 4096, 0);
					}
				}
			}
			iLocal_611++;
		}
		iVar0++;
	}
}

bool func_198()
{
	if (func_65(1))
	{
		return true;
	}
	if (!__LIB_0__::func_270())
	{
		func_187(1);
	}
	return false;
}

void func_199()
{
	if (!func_65(16))
	{
		if (func_325(5))
		{
			func_187(16);
		}
	}
}

bool func_200()
{
	int iVar0;
	var uVar1;
	if (!func_65(262144))
	{
		func_326();
		func_327();
		func_328();
		func_329();
		func_330();
		func_331();
	}
	func_332();
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		__LIB_18__::func_201(&Local_40, &Local_264, iVar0, &uVar1, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
		iVar0++;
	}
	switch (iLocal_548)
	{
		case 0:
			__LIB_9__::func_651(1);
			break;
		case 1:
			__LIB_9__::func_651(2);
			break;
		case 2:
			if (func_335(Local_40.f_199, &Local_264, "CALLOUT_JUST_KILL_EM_NEUTRAL", Local_40.f_198, 4, 0))
			{
				__LIB_9__::func_651(3);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_202()
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (!__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 1))
		{
		}
		else
		{
			fVar1 = __LIB_0__::func_94(Local_264[iVar0 /*9*/].f_5, Global_36, 1);
			if (fVar1 < 1f)
			{
				__LIB_9__::func_588(&(Local_264[iVar0 /*9*/].f_7), 1, 0);
			}
		}
		iVar0++;
	}
}

bool func_203(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;
	if (iParam2 >= 0)
	{
		iVar0 = iParam2;
	}
	else
	{
		iVar0 = iParam0->f_198;
	}
	if (iVar0 < iParam0->f_189)
	{
		switch (iParam0->f_205)
		{
			case 79:
				vVar3 = { 2279.824f, 1490.092f, 83.44096f };
				break;
			case 16:
				vVar3 = { -2142.385f, 797.8377f, 135.6134f };
				break;
			case 36:
				vVar3 = { -50.2002f, 1267.741f, 171.5688f };
				break;
		}
		iVar1 = 0;
		while (iVar1 < iParam0->f_199)
		{
			func_339(iParam1[iVar1 /*9*/], iParam0->f_207, &uVar2, iVar1, vVar3);
			iVar1++;
		}
		if (!__LIB_9__::func_611(&(iParam0->f_211)))
		{
			__LIB_9__::func_640(&(iParam0->f_211), 0);
		}
		__LIB_0__::func_7(&(iParam0->f_5), 128);
		return true;
	}
	return false;
}

bool func_204()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_40.f_199)
	{
		if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 1))
		{
			if (__LIB_0__::func_51(&(Local_264[iVar0 /*9*/].f_7), 1) && MAP::DOES_BLIP_EXIST(Local_264[iVar0 /*9*/].f_6))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_205(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			func_343(iParam0->f_205, bParam3, 0);
		}
		__LIB_9__::func_607(iParam0, 0);
		__LIB_0__::func_7(&(iParam0->f_5), 256);
		__LIB_0__::func_7(&(iParam0->f_5), 8);
	}
	return true;
}

void func_207(bool bParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_23))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_15.f_23);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
	func_346();
	func_347();
	if (bParam0)
	{
		Local_40.f_205 = 16;
		__LIB_9__::func_680(&Local_264, &Local_40, &uLocal_447, SCRIPTS::GET_ID_OF_THIS_THREAD(), "HANGING");
	}
}

void func_208(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_9__::func_620(iParam1->f_205) && !__LIB_0__::func_1(Global_1935630, 32))
	{
		iVar0 = 0;
		while (iVar0 < iParam1->f_199)
		{
			if (ENTITY::DOES_ENTITY_EXIST((iParam0[iVar0 /*9*/])->f_5))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((iParam0[iVar0 /*9*/])->f_5, Global_35, 1, 1))
				{
					func_350(iParam1->f_205);
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_212(int iParam0)
{
	iLocal_549 = iParam0;
}

char* func_222(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char* sVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
	{
		sVar0 = __LIB_0__::func_67(Global_1894899.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = __LIB_1__::func_911(func_369(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!__LIB_1__::func_912(iParam0) || __LIB_0__::func_293(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*bParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*bParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*bParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

void func_274(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = iParam3;
	func_140(uParam0, uParam1, iParam2, iVar0);
}

Vector3 func_275(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -2239.086f, 731.4213f, 126.8743f;
				case 1:
					return -2211.511f, 727.8998f, 126.7459f;
				case 2:
					return -2213.341f, 725.5923f, 127.8459f;
				case 3:
					return -2207.076f, 702.7548f, 120.9932f;
				case 4:
					return -2204.292f, 701.1174f, 120.9065f;
				case 5:
					return -2184.479f, 716.0485f, 121.365f;
				case 6:
					return -2182.99f, 713.1871f, 121.2193f;
				case 7:
					return -2197.853f, 748.804f, 122.682f;
				case 8:
					return -2241.76f, 709.5347f, 120.9811f;
				case 9:
					return -2181.485f, 674.349f, 118.9245f;
				case 10:
					return -2175.783f, 676.358f, 119.1763f;
				case 11:
					return -2154.695f, 703.457f, 120.4095f;
				case 12:
					return -2214.539f, 695.5394f, 120.7059f;
				case 13:
					return -2196.974f, 732.5887f, 121.893f;
				case 14:
					return -2220.024f, 737.211f, 122.3224f;
				case 15:
					return -2220.817f, 734.4677f, 122.2189f;
				case 16:
					return -2215.213f, 724.9563f, 126.6924f;
				case 17:
					return -2211.383f, 727.0737f, 126.694f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -2165.668f, 697.6175f, 120.1345f;
				case 1:
					return -2156.594f, 700.3184f, 120.1769f;
				case 2:
					return -2207.846f, 710.9598f, 121.2715f;
				case 3:
					return -2184.639f, 721.9179f, 121.6566f;
				case 4:
					return -2203.078f, 703.4612f, 120.9872f;
				case 5:
					return -2211.82f, 727.1941f, 126.7459f;
				case 6:
					return -2188.947f, 739.0814f, 122.7604f;
				case 7:
					return -2225.564f, 721.2993f, 121.6953f;
				case 8:
					return -2205.198f, 688.3999f, 120.2721f;
				case 9:
					return -2201.518f, 730.3251f, 121.8811f;
				case 10:
					return -2188.512f, 728.1428f, 121.5633f;
				case 11:
					return -2212.953f, 725.0867f, 126.7433f;
				case 12:
					return -2215.519f, 735.6501f, 126.7459f;
				case 13:
					return -2220.87f, 732.6031f, 126.7458f;
				case 14:
					return -2238.716f, 732.028f, 134.8867f;
				case 15:
					return -2215.8f, 737.1833f, 122.2836f;
				case 16:
					return -2223.617f, 736.6936f, 122.3548f;
				case 17:
					return -2217.507f, 740.1511f, 126.7459f;
				case 18:
					return -2221.892f, 734.0942f, 126.7458f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2214.278f, 726.3344f, 121.8427f;
				case 1:
					return -2213.874f, 728.0781f, 121.9102f;
				case 2:
					return -2213.294f, 732.6716f, 122.0753f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -2174.467f, 717.715f, 121.4657f;
				case 1:
					return -2174.198f, 722.3304f, 121.4641f;
				case 2:
					return -2178.391f, 719.8176f, 125.0021f;
				case 3:
					return -2172.199f, 715.5494f, 121.4657f;
				case 4:
					return -2178.231f, 714.4116f, 121.4658f;
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
					return -2214.143f, 722.3033f, 121.6883f;
				case 1:
					return -2212.281f, 724.3179f, 121.7576f;
				case 2:
					return -2210.563f, 721.6714f, 121.5998f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -2179.626f, 721.6503f, 125.2021f;
				case 1:
					return -2177.274f, 719.6866f, 125.2064f;
				case 2:
					return -2175.853f, 715.3982f, 125.1131f;
				case 3:
					return -2175.05f, 713.8082f, 125.2081f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_276(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 339.2611f;
				case 1:
					return 207.3486f;
				case 2:
					return 208.2606f;
				case 3:
					return 566.6668f;
				case 4:
					return 161.2667f;
				case 5:
					return 110.9196f;
				case 6:
					return 123.455f;
				case 7:
					return -45.36f;
				case 8:
					return -18.8163f;
				case 9:
					return 554.6566f;
				case 10:
					return 208.1663f;
				case 11:
					return 86.1663f;
				case 12:
					return 180.6566f;
				case 13:
					return -242.351f;
				case 14:
					return 163.0894f;
				case 15:
					return -64.9106f;
				case 16:
					return 30.2908f;
				case 17:
					return 30.191f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 200.052f;
				case 1:
					return 114.052f;
				case 2:
					return -148.1992f;
				case 3:
					return 205.2408f;
				case 4:
					return 156.052f;
				case 5:
					return -147.9481f;
				case 6:
					return 130.0519f;
				case 7:
					return 104.0519f;
				case 8:
					return 244.1844f;
				case 9:
					return 119.649f;
				case 10:
					return -66.351f;
				case 11:
					return -136.2232f;
				case 12:
					return 99.1534f;
				case 13:
					return 299.1534f;
				case 14:
					return -121.945f;
				case 15:
					return -156.9106f;
				case 16:
					return 213.0894f;
				case 17:
					return 106.2908f;
				case 18:
					return -99.7092f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 211.4397f;
				case 1:
					return 207.4397f;
				case 2:
					return 187.4397f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 322.5399f;
				case 1:
					return 218.9355f;
				case 2:
					return 202.1689f;
				case 3:
					return 46.9725f;
				case 4:
					return -343.3276f;
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
					return -167.4217f;
				case 1:
					return -149.4217f;
				case 2:
					return -141.4217f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -147.7302f;
				case 1:
					return -155.7302f;
				case 2:
					return -61.7302f;
				case 3:
					return -63.7302f;
			}
			break;
	}
	return 0f;
}

Vector3 func_303()
{
	return func_142(0, 9);
}

void func_306(int iParam0, int iParam1)
{
	struct<23> Var0;
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
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = Global_35;
	Var0.f_8 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_19 = 4;
	Var0.f_20 = 4;
	Var0.f_21 = 4;
	Var0.f_22 = 4;
	Var0.f_13 = 3;
	Var0.f_7 = iParam1;
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
}

bool func_312(int iParam0)
{
	int iVar0;
	vector3 vVar1[1];
	float fVar5[1];
	int iVar7;
	int iVar8;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 4:
			PED::_0xFC3DB99C8144CD81(Local_264[iVar0 /*9*/].f_5, Local_15.f_2, 0, 0, 0);
			__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 0, 0, 0, 0, 0);
			break;
		case 5:
			__LIB_9__::func_588(&(Local_264[iVar0 /*9*/].f_7), 64, 0);
			CAM::_0x986F7A51EE3E1F92(Local_264[iVar0 /*9*/].f_5, 1);
			break;
		case 2:
			vVar1[0 /*3*/] = { func_142(1, 2) };
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[iVar0 /*9*/].f_5, vVar1[0 /*3*/], 5.5f, 0, 0, 0);
			__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 0, 0, 0, 0, 0);
			break;
		case 3:
			vVar1[0 /*3*/] = { func_142(1, 4) };
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[iVar0 /*9*/].f_5, vVar1[0 /*3*/], 5f, 0, 0, 0);
			__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 1, __LIB_1__::func_985(), 1, __LIB_1__::func_985(), 0);
			break;
		case 6:
			switch (iLocal_555)
			{
				case 1:
					vVar1[0 /*3*/] = { func_142(1, 8) };
					__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 0, 1, 0, 0, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[iVar0 /*9*/].f_5, vVar1[0 /*3*/], 5f, 0, 0, 0);
					break;
				default:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[iVar0 /*9*/].f_5, vVar1[0 /*3*/], 5f, 0, 0, 0);
					__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 0, 1, 1, 0, 0);
					break;
			}
			break;
		case 8:
			PED::_0xFC3DB99C8144CD81(Local_264[iVar0 /*9*/].f_5, Local_15.f_24, 0, 0, 0);
			__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 0, 1, 1, 0, 0);
			PED::SET_PED_COMBAT_RANGE(Local_264[iVar0 /*9*/].f_5, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_264[iVar0 /*9*/].f_5, 1);
			break;
		case 9:
			switch (iLocal_555)
			{
				case 1:
					vVar1[0 /*3*/] = { func_142(1, 3) };
					__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 0, 1, 1, 0, 0);
					PED::_0xFC3DB99C8144CD81(Local_264[iVar0 /*9*/].f_5, Local_15.f_24, 0, 0, 0);
					PED::SET_PED_COMBAT_RANGE(Local_264[iVar0 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_264[iVar0 /*9*/].f_5, 1);
					break;
				default:
					PED::_0xFC3DB99C8144CD81(Local_264[iVar0 /*9*/].f_5, Local_15.f_24, 0, 0, 0);
					PED::SET_PED_COMBAT_RANGE(Local_264[iVar0 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_264[iVar0 /*9*/].f_5, 1);
					__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 0, 1, 1, 0, 0);
					break;
			}
			break;
		case 10:
			__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 0, 1, 1, 0, 0);
			PED::SET_PED_COMBAT_RANGE(Local_264[iVar0 /*9*/].f_5, 0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[iVar0 /*9*/].f_5, Local_264[iVar0 /*9*/].f_1, 10f, 0, 0, 0);
			__LIB_9__::func_588(&(Local_264[iVar0 /*9*/].f_7), 64, 0);
			break;
		case 11:
			__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 0, 1, 1, 0, 0);
			PED::SET_PED_COMBAT_RANGE(Local_264[iVar0 /*9*/].f_5, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_264[iVar0 /*9*/].f_5, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[iVar0 /*9*/].f_5, Local_264[iVar0 /*9*/].f_1, 15f, 0, 0, 0);
			__LIB_9__::func_588(&(Local_264[iVar0 /*9*/].f_7), 64, 0);
			break;
		case 12:
			switch (iLocal_555)
			{
				case 4:
					vVar1[0 /*3*/] = { func_142(1, 9) };
					fVar5[0] = func_143(1, 9);
					break;
				default:
					vVar1[0 /*3*/] = { func_142(1, 9) };
					fVar5[0] = func_143(1, 9);
					break;
			}
			iVar7 = TASK::ADD_COVER_POINT(vVar1[0 /*3*/], fVar5[0], 3, 1, 1, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar8);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1[0 /*3*/], 2f, 20000, 0.25f, 0, fVar5[0]);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar1[0 /*3*/], 2, 1, 0f, 0, 0, iVar7, 1, 0, 0);
			__LIB_1__::func_474(Local_264[iVar0 /*9*/].f_5, &iVar8, 0, 0, 1, 1);
			__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 1, 1, 1, 0, 0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[iVar0 /*9*/].f_5, Local_264[iVar0 /*9*/].f_1, 10f, 0, 0, 0);
			__LIB_9__::func_588(&(Local_264[iVar0 /*9*/].f_7), 64, 0);
			break;
		case 0:
		case 1:
			switch (iLocal_555)
			{
				case 1:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[iVar0 /*9*/].f_5, Local_264[iVar0 /*9*/].f_1, 6f, 0, 0, 0);
					__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 0, 0, 1, 0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_264[iVar0 /*9*/].f_5, 1);
					break;
				default:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[iVar0 /*9*/].f_5, Local_264[iVar0 /*9*/].f_1, 6f, 0, 0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_264[iVar0 /*9*/].f_5, 1);
					__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 0, 0, 1, 0, 0);
					break;
			}
			break;
		case 7:
			switch (iLocal_555)
			{
				case 1:
					vVar1[0 /*3*/] = { func_142(1, 0) };
					fVar5[0] = func_143(1, 0);
					iVar7 = TASK::ADD_COVER_POINT(vVar1[0 /*3*/], fVar5[0], 3, 1, 1, false);
					PED::SET_PED_COMBAT_MOVEMENT(Local_264[iVar0 /*9*/].f_5, 1);
					__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 1, 1, 0, 0, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[iVar0 /*9*/].f_5, vVar1[0 /*3*/], 6f, 0, 0, 0);
					break;
				case 3:
					vVar1[0 /*3*/] = { func_142(1, 1) };
					fVar5[0] = func_143(1, 1);
					iVar7 = TASK::ADD_COVER_POINT(vVar1[0 /*3*/], fVar5[0], 3, 1, 1, false);
					PED::SET_PED_COMBAT_MOVEMENT(Local_264[iVar0 /*9*/].f_5, 1);
					__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 1, 1, 0, 0, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[iVar0 /*9*/].f_5, vVar1[0 /*3*/], 6f, 0, 0, 0);
					break;
				default:
					PED::SET_PED_COMBAT_MOVEMENT(Local_264[iVar0 /*9*/].f_5, 1);
					__LIB_9__::func_670(&(Local_264[7 /*9*/]), 0, 1, 1, 0, 0);
					PED::_0xFC3DB99C8144CD81(Local_264[7 /*9*/].f_5, Local_15.f_6, 0, 0, 0);
					break;
			}
			break;
		case 13:
			vVar1[0 /*3*/] = { func_142(1, 15) };
			fVar5[0] = func_143(1, 15);
			iVar7 = TASK::ADD_COVER_POINT(vVar1[0 /*3*/], fVar5[0], 3, 0, 1, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar8);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1[0 /*3*/], 2f, 20000, 0.25f, 0, fVar5[0]);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar1[0 /*3*/], 3, 1, 0f, 0, 0, iVar7, 1, 0, 0);
			__LIB_1__::func_474(Local_264[iVar0 /*9*/].f_5, &iVar8, 0, 0, 1, 1);
			__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 1, 1, 1, 0, 0);
			PED::_0xFC3DB99C8144CD81(Local_264[iVar0 /*9*/].f_5, Local_15.f_21, 0, 0, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_264[iVar0 /*9*/].f_5, 1);
			break;
		case 14:
			vVar1[0 /*3*/] = { func_142(1, 16) };
			fVar5[0] = func_143(1, 16);
			iVar7 = TASK::ADD_COVER_POINT(vVar1[0 /*3*/], fVar5[0], 3, 0, 1, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar8);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1[0 /*3*/], 2f, 20000, 0.25f, 0, fVar5[0]);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar1[0 /*3*/], 3000, 1, 0f, 0, 0, iVar7, 1, 0, 0);
			__LIB_1__::func_474(Local_264[iVar0 /*9*/].f_5, &iVar8, 0, 0, 1, 1);
			__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 1, 1, 1, 0, 0);
			PED::_0xFC3DB99C8144CD81(Local_264[iVar0 /*9*/].f_5, Local_15.f_21, 0, 0, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_264[iVar0 /*9*/].f_5, 1);
			break;
		case 15:
			break;
		case 16:
			break;
		default:
			return false;
	}
	return true;
}

bool func_316()
{
	Local_40.f_190 = __LIB_18__::func_200(&Local_264, &Local_40, 0, 0, 0, 1);
	if (Local_40.f_190 < 0)
	{
		return false;
	}
	Local_40.f_192 = Local_264[Local_40.f_190 /*9*/].f_5;
	__LIB_9__::func_637(&(Local_264[Local_40.f_190 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
	return true;
}

int func_319(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;
	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_90())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (__LIB_2__::func_118(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = __LIB_0__::func_665(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			__LIB_1__::func_148(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (__LIB_2__::func_86(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = __LIB_0__::func_55(__LIB_2__::func_122(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_321(int iParam0)
{
	iLocal_550 = iParam0;
}

bool func_322(int iParam0)
{
	float fVar0;
	if (!__LIB_2__::func_1(Local_264[iParam0 /*9*/].f_5, 0, 0))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_264[iParam0 /*9*/].f_5))
	{
		return false;
	}
	if (__LIB_0__::func_94(Local_264[iParam0 /*9*/].f_5, Global_36, 1) < 5f)
	{
		return false;
	}
	switch (iParam0)
	{
		case 4:
			fVar0 = 3f;
			break;
		case 5:
			fVar0 = 2f;
			break;
		case 2:
			fVar0 = 2f;
			break;
		case 3:
			fVar0 = 2f;
			break;
		case 6:
			fVar0 = 1.5f;
			break;
		case 8:
			fVar0 = 1.24f;
			break;
		case 9:
			fVar0 = 1.2f;
			break;
		case 10:
			fVar0 = 1f;
			break;
		case 11:
			fVar0 = 1f;
			break;
		case 12:
			fVar0 = 1f;
			break;
		case 0:
			fVar0 = 1.2f;
			break;
		case 1:
			fVar0 = 1.5f;
			break;
		case 7:
			fVar0 = 1f;
			break;
	}
	if (__LIB_9__::func_658(&uLocal_566, fVar0))
	{
		return false;
	}
	return true;
}

bool func_323(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 7:
		case 10:
		case 11:
		case 12:
		case 15:
		case 16:
			return true;
	}
	return false;
}

bool func_325(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_2__::func_1(Local_264[iParam0 /*9*/].f_5, 0, 1))
	{
		return true;
	}
	if (func_65(524288))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::CLEAR_PED_TASKS(0, true, false);
		TASK::_TASK_FLEE_FROM_PED(0, Global_35, -2142.385f, 797.8377f, 135.6134f, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
		__LIB_1__::func_474(Local_264[iParam0 /*9*/].f_5, &iVar0, 0, 0, 1, 1);
		return true;
	}
	if (__LIB_1__::func_205(Global_35, Local_15.f_21, 1, 0) || __LIB_1__::func_205(Global_35, Local_15.f_22, 1, 0))
	{
		__LIB_4__::func_7(Local_264[iParam0 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::CLEAR_PED_TASKS(0, true, false);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		__LIB_1__::func_474(Local_264[iParam0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
		return true;
	}
	return false;
}

void func_326()
{
	if (func_65(4096))
	{
		return;
	}
	if (!__LIB_2__::func_1(Local_264[7 /*9*/].f_5, 0, 1))
	{
		func_187(4096);
		return;
	}
	if (__LIB_1__::func_205(Global_35, Local_15.f_10, 1, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_264[7 /*9*/].f_5))
	{
		PED::SET_PED_COMBAT_RANGE(Local_264[7 /*9*/].f_5, 0);
		PED::SET_PED_COMBAT_MOVEMENT(Local_264[7 /*9*/].f_5, 1);
		func_187(4096);
	}
}

void func_327()
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (!func_65(1024))
	{
		if (!__LIB_9__::func_611(&uLocal_560))
		{
			if (__LIB_1__::func_205(Global_35, Local_15.f_1, 1, 0) || Local_40.f_198 < 13)
			{
				iVar0 = -1;
				iVar0 = __LIB_9__::func_655(&Local_264, Global_35, 0, (Local_40.f_199 - 1), 90f, 1);
				if (iVar0 >= 0)
				{
					__LIB_9__::func_640(&uLocal_560, 0);
					func_194(Local_264[iVar0 /*9*/].f_5, 0, "CALLOUT_JUST_KILL_EM_MALE", 0, -1f, 1, 0, 1, 1, 0, 1, -500314840, 1, 0, 0);
					__LIB_9__::func_637(&(Local_264[5 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 580546400);
				}
				if (__LIB_2__::func_1(Local_264[15 /*9*/].f_5, 0, 1))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Local_264[15 /*9*/].f_5, false, 0, false);
					__LIB_9__::func_637(&(Local_264[15 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_264[15 /*9*/].f_5, 30, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					PED::SET_PED_COMBAT_ATTRIBUTES(0, 0, true);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_264[15 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
				}
			}
		}
		if (__LIB_9__::func_611(&uLocal_560))
		{
			fVar2 = __LIB_9__::func_638(&uLocal_560);
			if ((fVar2 * 1.25f) < 1f)
			{
			}
		}
		if (__LIB_9__::func_658(&uLocal_560, 1f))
		{
			func_418(5, 1);
			if (__LIB_2__::func_1(Local_264[5 /*9*/].f_5, 0, 1))
			{
			}
			__LIB_1__::func_148(&uLocal_560);
			func_187(1024);
			if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Local_518[0 /*14*/].f_9))
			{
				ENTITY::_0x445D7D8EA66E373E(Local_518[0 /*14*/].f_9, 0, ENTITY::GET_ENTITY_COORDS(Local_518[0 /*14*/].f_9, true, false), 0f, 0f, 0f, -1f, 1, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	else if (!func_65(65536))
	{
		if (__LIB_9__::func_658(&uLocal_560, 5f))
		{
			if (__LIB_2__::func_1(Local_264[5 /*9*/].f_5, 0, 1))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_264[5 /*9*/].f_5, 30, false);
				WEAPON::_0xA769D753922B031B(Local_264[5 /*9*/].f_5, 0.2f, 0.3f);
				PED::_0xFC3DB99C8144CD81(Local_264[5 /*9*/].f_5, Local_15.f_21, 0, 0, 0);
			}
			func_187(65536);
		}
	}
}

void func_328()
{
	int iVar0;
	float fVar1;
	switch (iLocal_551)
	{
		case 0:
			if (__LIB_9__::func_662(vLocal_613, &uLocal_616, &uLocal_621, &uLocal_622, 1.5f, 38f, 0, 0, 30f))
			{
				func_420(&Local_264, iLocal_608, iLocal_610, joaat("REL_GANG_ODRISCOLL"), 1);
				iVar0 = iLocal_608;
				while (iVar0 <= iLocal_610)
				{
					if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 0))
					{
						if (iVar0 == iLocal_608)
						{
							__LIB_4__::func_7(Local_264[iVar0 /*9*/].f_5, joaat("GROUP_RIFLE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						}
						else
						{
							__LIB_4__::func_7(Local_264[iVar0 /*9*/].f_5, joaat("GROUP_PISTOL"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						}
						PED::_0xFC3DB99C8144CD81(Local_264[iVar0 /*9*/].f_5, Local_15, 0, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_264[iVar0 /*9*/].f_5, 1);
						TASK::TASK_COMBAT_PED(Local_264[iVar0 /*9*/].f_5, Global_35, 0, 0);
						__LIB_2__::func_133(Local_264[iVar0 /*9*/].f_5, func_176(Local_264[iVar0 /*9*/]), 0);
					}
					iVar0++;
				}
				__LIB_1__::func_948(iLocal_591[2], 0, 0f, 0, 0, 0f, 0, 0);
				__LIB_1__::func_948(iLocal_591[3], 0, 0f, 0, 0, 0f, 0, 0);
				iLocal_551 = 1;
				AUDIO::_PLAY_SOUND_FROM_POSITION("OPEN_BARN_DOORS", __LIB_9__::func_659(iLocal_591[3]), "HIDEOUT_HDR_Sounds", false, 0, false, 0);
			}
			break;
		case 1:
			if (__LIB_4__::func_195(iLocal_591[3]) != 0f || __LIB_4__::func_195(iLocal_591[2]) != 0f)
			{
				if (!bLocal_606)
				{
					fLocal_600[3] = __LIB_4__::func_195(iLocal_591[3]);
					fLocal_600[2] = __LIB_4__::func_195(iLocal_591[2]);
					bLocal_606 = true;
				}
				__LIB_9__::func_640(&uLocal_572, 0);
				fVar1 = __LIB_9__::func_638(&uLocal_572);
				if (__LIB_4__::func_195(iLocal_591[3]) < 1.6f)
				{
					__LIB_1__::func_948(iLocal_591[2], 0, ((-fVar1 * 1.5f) + fLocal_600[2]), 1, 0, 0f, 0, 0);
					__LIB_1__::func_948(iLocal_591[3], 0, ((fVar1 * 1.5f) + fLocal_600[3]), 1, 0, 0f, 0, 0);
				}
				else
				{
					__LIB_1__::func_148(&uLocal_572);
					iLocal_551 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_9__::func_658(&uLocal_572, 2f))
			{
				iVar0 = 2;
				while (iVar0 <= 3)
				{
					if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 1))
					{
					}
					iVar0++;
				}
				__LIB_1__::func_148(&uLocal_572);
				iLocal_551 = 3;
			}
			break;
		case 3:
			if (__LIB_9__::func_658(&uLocal_572, 10f))
			{
				iVar0 = 2;
				while (iVar0 <= 3)
				{
					if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 1))
					{
						PED::SET_PED_COMBAT_RANGE(Local_264[iVar0 /*9*/].f_5, 0);
					}
					iVar0++;
				}
				iVar0 = iLocal_608;
				while (iVar0 <= iLocal_610)
				{
					if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 0))
					{
						PED::SET_PED_COMBAT_RANGE(Local_264[iVar0 /*9*/].f_5, 0);
					}
					iVar0++;
				}
				iLocal_551 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_329()
{
	int iVar0;
	vector3 vVar1[1];
	vector3 vVar5;
	if (!__LIB_2__::func_1(Local_264[4 /*9*/].f_5, 0, 1))
	{
		return;
	}
	switch (iLocal_623)
	{
		case 0:
			__LIB_9__::func_670(&(Local_264[4 /*9*/]), 0, 0, 1, 0, 0);
			func_423(1);
			break;
		case 1:
			__LIB_9__::func_640(&uLocal_624, 0);
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_264[4 /*9*/].f_5, Global_35, 17))
			{
				__LIB_1__::func_148(&uLocal_624);
			}
			else if (__LIB_9__::func_658(&uLocal_624, 2f))
			{
				vVar1[0 /*3*/] = { func_142(1, 14) };
				STREAMING::REQUEST_COLLISION_AT_COORD(-2235.835f, 732.9716f, 127.3328f);
				STREAMING::REQUEST_COLLISION_AT_COORD(-2236.81f, 732.5904f, 135.467f);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::SET_PED_PATH_CAN_USE_LADDERS(0, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1[0 /*3*/], 2f, 20000, (0.25f * 2f), 4, 40000f);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_264[4 /*9*/].f_5, &iVar0, 0, 0, 1, 1);
				__LIB_1__::func_148(&uLocal_624);
				func_423(2);
			}
			break;
		case 2:
			vVar1[0 /*3*/] = { func_142(1, 14) };
			vVar5 = { ENTITY::GET_ENTITY_COORDS(Local_264[4 /*9*/].f_5, true, false) };
			if (vVar5.z > (vVar1[0 /*3*/].f_2 - 0.5f))
			{
				__LIB_1__::func_148(&uLocal_624);
				func_423(3);
			}
			break;
		case 3:
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_264[4 /*9*/].f_5, Global_35, 17))
			{
				__LIB_1__::func_148(&uLocal_624);
			}
			else if (__LIB_9__::func_658(&uLocal_624, 2f))
			{
				__LIB_1__::func_733(Local_264[4 /*9*/].f_5);
				PED::SET_PED_COMBAT_MOVEMENT(Local_264[4 /*9*/].f_5, 0);
				PED::SET_PED_COMBAT_RANGE(Local_264[4 /*9*/].f_5, 2);
				__LIB_1__::func_148(&uLocal_624);
				func_423(4);
			}
			break;
		case 4:
			break;
	}
}

void func_330()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	switch (iLocal_552)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(Local_264[13 /*9*/].f_6) || !MAP::DOES_BLIP_EXIST(Local_264[14 /*9*/].f_6))
			{
				if (__LIB_9__::func_614(&Local_264) < 2)
				{
					__LIB_9__::func_637(&(Local_264[13 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					__LIB_9__::func_637(&(Local_264[14 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
				}
			}
			if ((__LIB_1__::func_205(Global_35, Local_15.f_1, 1, 0) || !__LIB_2__::func_1(Local_264[13 /*9*/].f_5, 0, 1)) || !__LIB_2__::func_1(Local_264[14 /*9*/].f_5, 0, 1))
			{
				iVar0 = 13;
				while (iVar0 <= 14)
				{
					if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 1))
					{
						if (!bVar1)
						{
							__LIB_2__::func_133(Local_264[iVar0 /*9*/].f_5, "0357_G_M_M_UniDuster_02_WHITE_01", 0);
							func_194(Local_264[iVar0 /*9*/].f_5, 0, "OPENS_FIRE", "", -1f, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							bVar1 = true;
						}
						__LIB_9__::func_637(&(Local_264[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					}
					iVar0++;
				}
				func_426(1);
			}
			break;
		case 1:
			iVar0 = 13;
			while (iVar0 <= 14)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_264[iVar0 /*9*/].f_5))
				{
					bVar2 = true;
				}
				else
				{
					iVar0++;
				}
			}
			if ((__LIB_9__::func_709(-5f, 1, 0, 0) || __LIB_1__::func_205(Global_35, Local_15.f_21, 1, 0)) || bVar2)
			{
				iVar0 = 13;
				while (iVar0 <= 14)
				{
					if (__LIB_9__::func_670(&(Local_264[iVar0 /*9*/]), 0, 0, 1, 0, 0))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_264[iVar0 /*9*/].f_5, true, false), 5.5f, 0, 0, 0);
					}
					iVar0++;
				}
				__LIB_9__::func_640(&uLocal_630, 1);
				func_426(2);
			}
			break;
		case 2:
			if (__LIB_9__::func_658(&uLocal_630, 4f))
			{
				iVar0 = 13;
				while (iVar0 <= 14)
				{
					if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 1))
					{
						PED::_0xFC3DB99C8144CD81(Local_264[iVar0 /*9*/].f_5, Local_15.f_20, 0, 0, 0);
					}
					iVar0++;
				}
				__LIB_9__::func_640(&uLocal_630, 1);
				func_426(3);
			}
			break;
		case 3:
			if (__LIB_9__::func_658(&uLocal_630, 6f))
			{
				iVar0 = 13;
				while (iVar0 <= 14)
				{
					if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 1))
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_264[iVar0 /*9*/].f_5, Global_35, 17))
						{
							bVar3 = true;
						}
					}
					iVar0++;
				}
				if (!bVar3)
				{
					iVar0 = 13;
					while (iVar0 <= 14)
					{
						if (__LIB_2__::func_1(Local_264[iVar0 /*9*/].f_5, 0, 1))
						{
							if (!bVar4)
							{
								__LIB_2__::func_133(Local_264[iVar0 /*9*/].f_5, "0357_G_M_M_UniDuster_02_WHITE_01", 0);
								func_194(Local_264[iVar0 /*9*/].f_5, 0, "OPENS_FIRE", "", -1f, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								bVar4 = true;
							}
							PED::SET_PED_COMBAT_MOVEMENT(Local_264[iVar0 /*9*/].f_5, 1);
							func_426(4);
						}
						iVar0++;
					}
				}
			}
			break;
		case 4:
			break;
	}
}

void func_331()
{
	vector3 vVar0;
	int iVar3;
	switch (iLocal_554)
	{
		case 0:
			if (func_427())
			{
				if (__LIB_2__::func_1(Local_264[15 /*9*/].f_5, 0, 1))
				{
					vVar0 = { func_142(1, 18) };
					PED::_SET_PED_CROUCH_MOVEMENT(Local_264[15 /*9*/].f_5, false, 0, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[15 /*9*/].f_5, vVar0, 5f, 0, 0, 0);
					__LIB_9__::func_637(&(Local_264[15 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar0, 2f, 20000, 1193033728 /* Float: 40000f */, 1.5f, 0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_264[15 /*9*/].f_5, &iVar3, 0, 0, 1, 1);
				}
				__LIB_9__::func_640(&uLocal_633, 0);
				__LIB_9__::func_652(1);
			}
			break;
		case 1:
			if (__LIB_9__::func_658(&uLocal_633, 1.25f))
			{
				if (__LIB_2__::func_1(Local_264[16 /*9*/].f_5, 0, 1))
				{
					vVar0 = { func_142(1, 17) };
					PED::_SET_PED_CROUCH_MOVEMENT(Local_264[16 /*9*/].f_5, false, 0, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_264[16 /*9*/].f_5, vVar0, 5f, 0, 0, 0);
					__LIB_9__::func_637(&(Local_264[16 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar0, 2f, 20000, 1193033728 /* Float: 40000f */, 1.5f, 0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					__LIB_1__::func_474(Local_264[16 /*9*/].f_5, &iVar3, 0, 0, 1, 1);
				}
				__LIB_1__::func_148(&uLocal_633);
				__LIB_9__::func_652(2);
			}
			break;
		case 2:
			if (__LIB_9__::func_658(&uLocal_633, 4.5f))
			{
				if (__LIB_2__::func_1(Local_264[16 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_COMBAT_RANGE(Local_264[16 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_264[16 /*9*/].f_5, 1);
				}
				if (__LIB_2__::func_1(Local_264[15 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_COMBAT_RANGE(Local_264[15 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_264[15 /*9*/].f_5, 1);
				}
				__LIB_1__::func_148(&uLocal_633);
				__LIB_9__::func_652(3);
			}
			break;
		case 3:
			if (__LIB_9__::func_658(&uLocal_633, 3.5f))
			{
				if (__LIB_2__::func_1(Local_264[15 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_COMBAT_RANGE(Local_264[15 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_264[15 /*9*/].f_5, 1);
				}
				if (__LIB_2__::func_1(Local_264[16 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_COMBAT_RANGE(Local_264[16 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_264[16 /*9*/].f_5, 1);
				}
				__LIB_1__::func_148(&uLocal_633);
				__LIB_9__::func_652(4);
			}
			break;
		case 4:
			break;
	}
}

void func_332()
{
	if (func_65(8192))
	{
		return;
	}
	if (!__LIB_2__::func_1(Local_264[9 /*9*/].f_5, 0, 1))
	{
		func_187(8192);
		return;
	}
	if ((__LIB_1__::func_205(Global_35, Local_15.f_11, 1, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_264[9 /*9*/].f_5)) || __LIB_1__::func_992(Local_264[9 /*9*/].f_5, Global_36, 1) < 484f)
	{
		PED::SET_PED_COMBAT_RANGE(Local_264[9 /*9*/].f_5, 0);
		PED::SET_PED_COMBAT_MOVEMENT(Local_264[9 /*9*/].f_5, 1);
		func_187(8192);
	}
}

bool func_335(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;
	if (iParam3 < iParam4)
	{
		iVar0 = iParam5;
		while (iVar0 <= ((iParam5 + iParam0) - 1))
		{
			func_432(&((iParam1[iVar0 /*9*/])->f_5), "");
			if (!bVar1)
			{
				if (__LIB_2__::func_1((iParam1[iVar0 /*9*/])->f_5, 0, 1))
				{
					bVar1 = true;
					func_194((iParam1[iVar0 /*9*/])->f_5, 0, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_339(var uParam0, char* sParam1, var uParam2, int iParam3, vector3 vParam4)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_5, 518218985, true) != 1)
		{
			if (!__LIB_9__::func_604(uParam0))
			{
				if (!__LIB_0__::func_86(vParam4))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::_TASK_FLEE_FROM_PED(0, Global_35, vParam4, -1f, -1, 5120, 1077936128 /* Float: 3f */, 0);
					__LIB_1__::func_474(uParam0->f_5, &iVar0, 0, 0, 1, 1);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					*uParam2 = 1;
				}
				if (!*uParam2)
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					func_194(uParam0->f_5, Global_35, sParam1, "", 70f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					*uParam2 = 1;
				}
			}
			PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
		}
	}
}

void func_343(int iParam0, bool bParam1, bool bParam2)
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
	func_437(iVar0, 1, bParam1, 0, 1);
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
			func_447(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

void func_346()
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
}

void func_347()
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-2177.448f, 716.6751f, 121.6206f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "HAN_WIN_LOCK", true);
		}
	}
}

void func_350(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_4__::func_6(iParam0);
	if (!__LIB_0__::func_6(iVar0))
	{
		return;
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	__LIB_7__::func_766(iParam0, 57, __LIB_2__::func_116(iParam0, 1), 0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	if (__LIB_0__::func_746(iVar0) != 4)
	{
		__LIB_0__::func_7(&Global_1935630, 32);
	}
	if (__LIB_1__::func_25(iVar0, 1))
	{
		__LIB_6__::func_778(iVar0);
	}
	iVar1 = __LIB_9__::func_602(iParam0);
	if (iVar1 != -1)
	{
		func_447(0, iVar1, 0, 12, 0);
	}
	__LIB_9__::func_603(iParam0);
	__LIB_1__::func_298(iVar0, 1);
	__LIB_1__::func_821(iVar0, 1, __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1));
	__LIB_9__::func_643(iParam0);
	__LIB_0__::func_703(0, 12);
}

int func_369(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_497(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_418(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_2__::func_1(Local_264[iParam0 /*9*/].f_5, 0, 1))
	{
		return 0;
	}
	if (bParam1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		PED::SET_PED_COMBAT_ATTRIBUTES(0, 27, false);
		TASK::TASK_ENTER_VEHICLE(0, Local_518[0 /*14*/].f_9, 20000, -1, 2f, 1, 0);
		TASK::TASK_VEHICLE_SHOOT_AT_PED(0, Global_35, 90f);
		__LIB_1__::func_474(Local_264[iParam0 /*9*/].f_5, &iVar0, 0, 0, 1, 1);
		PED::SET_PED_FIRING_PATTERN(Local_264[iParam0 /*9*/].f_5, joaat("FIRING_PATTERN_FULL_AUTO"));
		__LIB_9__::func_637(&(Local_264[iParam0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 580546400);
	}
	return 1;
}

void func_420(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		__LIB_9__::func_646(iParam0[iVar0 /*9*/], iParam3, 0);
		if (__LIB_2__::func_1((iParam0[iVar0 /*9*/])->f_5, 0, 1))
		{
			PED::SET_PED_COMBAT_MOVEMENT((iParam0[iVar0 /*9*/])->f_5, 2);
			PED::SET_PED_COMBAT_RANGE((iParam0[iVar0 /*9*/])->f_5, 1);
			if (bParam4)
			{
				__LIB_9__::func_609(iParam0[iVar0 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
			}
		}
		iVar0++;
	}
}

void func_423(int iParam0)
{
	iLocal_623 = iParam0;
}

void func_426(int iParam0)
{
	iLocal_552 = iParam0;
}

bool func_427()
{
	if (!__LIB_1__::func_205(Global_35, Local_15.f_21, 1, 0) && !__LIB_1__::func_205(Global_35, Local_15.f_22, 1, 0))
	{
		return false;
	}
	__LIB_9__::func_640(&uLocal_569, 0);
	if (__LIB_9__::func_658(&uLocal_569, 0.1f))
	{
		return true;
	}
	if (!__LIB_2__::func_1(Local_264[13 /*9*/].f_5, 0, 1) || !__LIB_2__::func_1(Local_264[14 /*9*/].f_5, 0, 1))
	{
		if (__LIB_9__::func_658(&uLocal_569, 3f))
		{
			return true;
		}
	}
	return false;
}

void func_432(var uParam0, char* sParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 780511057, true) == 1)
	{
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
		PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
	}
	if (!MISC::IS_STRING_NULL(sParam1) && __LIB_9__::func_709(0, 1, 0, 0))
	{
		func_194(*uParam0, Global_35, sParam1, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
}

void func_437(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_577(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_577(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_577(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_577(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_577(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_577(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_577(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_577(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_577(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_577(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_577(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_577(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_577(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_579();
						func_580(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_577(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_437(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_437(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_437(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_577(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_577(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_614();
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
							func_577(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_447(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	__LIB_0__::func_47(&Global_1393447, 1);
	__LIB_2__::func_175();
	__LIB_2__::func_176();
	__LIB_2__::func_30((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (__LIB_0__::func_485() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 = (Global_1392135.f_1 - Global_1392135.f_1 & 4);
		}
		__LIB_2__::func_177();
		if (iParam1 == -1)
		{
			if (__LIB_0__::func_27(iParam0, 1))
			{
				func_636(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (__LIB_0__::func_27(iParam0, 2))
			{
				func_636(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (__LIB_0__::func_27(iParam0, 4))
			{
				func_636(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			__LIB_2__::func_209(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		__LIB_1__::func_980(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		__LIB_1__::func_980((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_497(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;
	func_707(iParam3, &vVar0, &Var3, &uVar6);
	if (func_708(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_577(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_577(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_815(iParam0);
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
			if (func_816())
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
			func_815(iParam0);
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
						func_577(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_577(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_577(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_577(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_577(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_577(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_577(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_577(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_577(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_577(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_579()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_864();
	func_865();
	func_866();
	func_867();
	func_868();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_580(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_871(iParam0, 1, 1, -142743235, 1);
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

void func_614()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_899(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_636(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (__LIB_0__::func_1(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!__LIB_1__::func_982(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (__LIB_1__::func_983(iVar0) < func_924(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_925(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_707(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			Jump @2718; //curOff = 2114
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2159
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			Jump @2718; //curOff = 2208
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2253
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2298
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2343
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2388
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2433
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			Jump @2718; //curOff = 2482
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			Jump @2718; //curOff = 2531
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			Jump @2718; //curOff = 2580
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2625
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			Jump @2718; //curOff = 2670
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
		}
bool func_708(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

void func_815(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_192(iParam0, -2017733358);
	if (__LIB_1__::func_762() < 3)
	{
		if (bVar0)
		{
			if (__LIB_1__::func_763(__LIB_0__::func_432(iParam0), iParam0))
			{
				__LIB_1__::func_424(79, __LIB_0__::func_776(__LIB_0__::func_432(iParam0)), 1);
			}
			else
			{
				__LIB_1__::func_424(78, __LIB_0__::func_776(__LIB_0__::func_432(iParam0)), 1);
			}
		}
		else
		{
			__LIB_1__::func_424(80, __LIB_0__::func_776(func_1034(iParam0)), 1);
		}
	}
}

bool func_816()
{
	if (((((func_1035(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_1035(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_1035(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_1035(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_1035(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_1035(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

void func_864()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1090(0);
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
	func_1090(1);
}

void func_865()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_577(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_866()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1093(0);
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
	func_1093(1);
}

void func_867()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1093(0);
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
	func_1093(1);
}

void func_868()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_577(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_577(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_871(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_871(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_871(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_871(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_899(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1123(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_577(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_924(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			Jump @393; //curOff = 334
			fVar3 = 20f;
			Jump @393; //curOff = 344
			fVar3 = 25f;
			Jump @393; //curOff = 354
			fVar2 = -1f;
			Jump @393; //curOff = 360
			fVar3 = -5f;
			Jump @393; //curOff = 370
			fVar3 = -7f;
			Jump @393; //curOff = 380
			fVar3 = -8f;
			iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
			return iVar4;
		}
void func_925(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	__LIB_2__::func_115(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

int func_1034(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH");
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BISON_HORN");
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BUCK_ANTLER");
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COUGAR_FANG");
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COYOTE_FANG");
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_ELK_ANTLER");
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("PROVISION_TRINKET_FOX_CLAW");
		case joaat("PROVISION_LIONS_PAW"):
			return joaat("PROVISION_TRINKET_LION_PAW");
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER");
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PANTHER_EYE");
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER");
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_RAM_HORN");
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("PROVISION_TRINKET_WOLF_HEART");
			return 0;
		}
bool func_1035(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_437(iParam0);
	if (iVar0 != -15)
	{
		__LIB_1__::func_446(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !__LIB_1__::func_426(iVar0, 1);
	}
	return false;
}

void func_1090(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_577(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1252(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_580(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_871(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1258(Var0);
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

void func_1093(bool bParam0)
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
		func_577(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_577(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_871(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_871(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_871(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_871(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_871(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_871(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_871(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_871(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_871(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_871(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_871(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1123(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1123(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1123(iVar63, -915411861, 1, 0, 0));
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

void func_1252(int iParam0)
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
	func_871(iParam0, 1, 1, -142743235, 1);
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
		func_871(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1258(struct<6> Param0)
{
	if (!func_1349(Param0.f_4, 1))
	{
	}
	if (!func_1349(Param0, 1))
	{
	}
	if (!func_1349(Param0.f_2, 1))
	{
	}
	if (!func_1349(Param0.f_5, 1))
	{
	}
	if (!func_1349(Param0.f_3, 1))
	{
	}
	if (!func_1349(Param0.f_1, 1))
	{
	}
}

bool func_1349(int iParam0, int iParam1)
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
				if (func_1349(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1349(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1349(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1349(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

