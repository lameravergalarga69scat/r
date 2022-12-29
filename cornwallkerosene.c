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
	char* sLocal_15 = NULL;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = -1;
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
	var uLocal_41 = -1;
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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_61 = 20000;
	iLocal_64 = vScriptParam_0.x;
	iLocal_62 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_63 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_63)
		{
			iLocal_63 = 0;
			__LIB_1__::func_947(iLocal_64, &iLocal_62);
			switch (iLocal_62)
			{
				case 0:
					iLocal_62 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_64);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_64)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_64), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_64));
					iVar1 = __LIB_1__::func_885(iLocal_64);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_65 = (MISC::GET_GAME_TIMER() + iLocal_61);
					iLocal_62 = 2;
					break;
				case 2:
					if (func_11() || iLocal_65 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_64);
						iLocal_65 = (MISC::GET_GAME_TIMER() + iLocal_61);
						iLocal_62 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_64) || iLocal_65 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_64);
						iLocal_65 = (MISC::GET_GAME_TIMER() + iLocal_61);
						iLocal_62 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_64) || iLocal_65 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_64);
						iLocal_65 = (iLocal_61 + MISC::GET_GAME_TIMER());
						iLocal_62 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_64)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_64), 4) && !iLocal_65 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_64) || iLocal_65 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_64, 4);
								iLocal_65 = (iLocal_61 + MISC::GET_GAME_TIMER());
								iLocal_62 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_65 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_64);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_765(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_0__::func_11(iLocal_64);
								__LIB_1__::func_886(iLocal_64);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_62 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_6__::func_927(iLocal_64);
							__LIB_0__::func_18();
							iLocal_62 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_5__::func_252(iLocal_64, &Global_1898004);
							iLocal_62 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_64);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_64, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_62 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_64))
							{
								iLocal_63 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_64);
							__LIB_1__::func_891(iLocal_64);
							__LIB_0__::func_24(iLocal_64, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_64 /*35*/].f_10);
							if (Global_1888801[iLocal_64 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_64 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_64 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_64 /*35*/].f_12);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!func_42(iVar0))
						{
							iVar0++;
							BUILTIN::WAIT(0);
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
					default:
						break;
			}
		}
	}
}

void func_1()
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		iVar0 = 0;
		while (!func_42(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_11()
{
	iLocal_14 = Global_1888801[65 /*35*/].f_4;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_46())
		{
			iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Cornwall Factory - m_volThreat Agg");
			VOLUME::_0x39816F6F94F385AD(iLocal_18, 483.178f, 665.0614f, 120.433f, 0f, 0f, -93.35709f, 8.68444f, 49.20877f, 14.62346f);
			VOLUME::_0x39816F6F94F385AD(iLocal_18, 482.0916f, 681.5095f, 120.5672f, 0f, 0f, -94.03097f, 27.47987f, 53.5737f, 19.23399f);
			VOLUME::_0x39816F6F94F385AD(iLocal_18, 457.9885f, 669.1766f, 117.4853f, 0f, 0f, -94.12511f, 8.672241f, 4.046204f, 6.331274f);
			VOLUME::_0x39816F6F94F385AD(iLocal_18, 510.659f, 674.0203f, 119.3904f, 0f, 0f, -95.19305f, 28.2624f, 14.3714f, 11.82121f);
			iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Cornwall Factory - m_volGuardRestricted Agg");
			VOLUME::_0x6E0D3C3F828DA773(iLocal_17, iLocal_18);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 487.0584f, 658.134f, 120.433f, 0f, 0f, -93.35709f, 4.866049f, 58.9538f, 14.62346f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 512.4396f, 693.6117f, 119.3904f, 0f, 0f, -95.19305f, 11.77509f, 14.3714f, 11.82121f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 503.4485f, 696.999f, 115.9772f, 0f, 0f, 159.3044f, 15.9482f, 28.70993f, 3.623619f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 516.3637f, 679.5154f, 117.3018f, 0f, 0f, -92.51744f, 37.73529f, 11.09497f, 5.907578f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 511.5199f, 700.011f, 116.2709f, 0f, 0f, 113.6843f, 8.967957f, 14.12305f, 2.935638f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 480.135f, 701.7899f, 117.897f, 0f, 0f, -4.999341f, 41.32953f, 28.42523f, 10.07528f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 453.424f, 691.8083f, 117.5132f, 0f, 0f, -94.0647f, 40.29486f, 13.86865f, 13.54279f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 458.9319f, 701.6198f, 116.6065f, 0f, 0f, -155.9255f, 13.56885f, 23.8696f, 3.378769f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 554.0569f, 575.44f, 113.7167f, 0f, 0f, 136.48f, 13.64952f, 28.59466f, 13.59426f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 540.8279f, 571.681f, 113.7167f, 0f, 0f, 30.17271f, 14.61273f, 28.59466f, 13.59426f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 491.2278f, 613.2062f, 112.2075f, 0f, 0f, -4.999341f, 27.96813f, 34.23047f, 9.418887f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 552.5515f, 589.0593f, 119.3492f, 0f, 0f, 49.88169f, 13.64952f, 28.59466f, 25.66008f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 593.5602f, 645.5485f, 119.3492f, 0f, 0f, -58.69317f, 18.08833f, 22.27057f, 29.43435f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 462.6024f, 617.6337f, 112.2075f, 0f, 0f, -6.355762f, 13.44469f, 12.23929f, 9.418887f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 593.6999f, 568.3834f, 119.3492f, 0f, 0f, -51.107f, 9.175362f, 25.9578f, 19.576f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 480.8508f, 580.7621f, 111.2243f, 0f, 0f, 176.4701f, 6.750173f, 9.77781f, 9.26247f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 463.8926f, 603.6877f, 110.8859f, 0f, 0f, -1.895059f, 2.506407f, 1.922996f, 3.633349f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 498.4696f, 575.9198f, 110.5058f, 0f, 0f, -4.668038f, 8.271279f, 8.106345f, 10.34464f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 508.8746f, 561.9025f, 110.5058f, 0f, 0f, -2.831406f, 5.281865f, 5.289512f, 10.34464f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 518.0204f, 567.3162f, 111.2243f, 0f, 0f, -179.0915f, 4.385738f, 3.794377f, 9.26247f);
			VOLUME::_0x39816F6F94F385AD(iLocal_17, 517.9248f, 560.3237f, 111.2243f, 0f, 0f, 175.6013f, 5.138474f, 4.176085f, 9.26247f);
			iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Cornwall Factory - m_volGuardWarning Agg");
			VOLUME::_0x6E0D3C3F828DA773(iLocal_19, iLocal_17);
			VOLUME::_0x39816F6F94F385AD(iLocal_19, 452.2835f, 693.4625f, 116.6065f, 0f, 0f, 159.8359f, 35.04748f, 60.00959f, 10.54184f);
			VOLUME::_0x39816F6F94F385AD(iLocal_19, 452.5653f, 703.8395f, 117.4853f, 0f, 0f, -94.12511f, 44.30179f, 39.03862f, 12.83861f);
			VOLUME::_0x39816F6F94F385AD(iLocal_19, 523.2607f, 682.0091f, 116.6065f, 0f, 0f, 176.2527f, 24.05052f, 60.57968f, 14.66261f);
			VOLUME::_0x39816F6F94F385AD(iLocal_19, 530.3846f, 678.6536f, 116.6065f, 0f, 0f, 122.8065f, 27.48115f, 23.15778f, 14.66261f);
			VOLUME::_0x39816F6F94F385AD(iLocal_19, 490.2073f, 645.65f, 120.433f, 0f, 0f, -93.35709f, 19.97492f, 82.01701f, 22.90931f);
			VOLUME::_0x39816F6F94F385AD(iLocal_19, 543.405f, 598.4362f, 113.501f, 0f, 0f, 176.2527f, 158.188f, 75.22622f, 13.08774f);
			VOLUME::_0x39816F6F94F385AD(iLocal_19, 511.5711f, 544.4476f, 113.7875f, 0f, 0f, 176.2527f, 70.74225f, 51.73241f, 12.49486f);
			VOLUME::_0x39816F6F94F385AD(iLocal_19, 581.2699f, 545.9254f, 114.073f, 0f, 0f, 176.2527f, 70.74225f, 40.8134f, 11.93559f);
			VOLUME::_0x39816F6F94F385AD(iLocal_19, 467.4143f, 614.5461f, 113.2867f, 0f, 0f, 176.2527f, 25.77176f, 46.62182f, 13.5697f);
			VOLUME::_0x39816F6F94F385AD(iLocal_19, 592.3509f, 634.554f, 114.073f, 0f, 0f, -145.3082f, 48.81504f, 43.12697f, 11.93559f);
			iLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(533.1948f, 634.7332f, 111.7214f, 0f, 0f, 0f, 125.8112f, 137.9227f, 20.39024f, "Cornwall Factory - m_volGuardRegistration");
			sLocal_15 = "CORNWALL_KEROSENE";
			LAW::_CREATE_GUARD_ZONE(sLocal_15);
			LAW::_0x8C598A930F471938(sLocal_15, iLocal_16);
			LAW::_0x35815F372D43E1E5(sLocal_15, iLocal_17);
			LAW::_0xA1B0E6301E2E02A6(sLocal_15, iLocal_18);
			LAW::_0xAD3E07C37A7C1ADC(sLocal_15, iLocal_19);
			LAW::_SET_GUARD_ZONE_POSITION(sLocal_15, 479.7f, 675f, 118f);
			LAW::_0xA8A74AA79FB67159(sLocal_15, iLocal_16);
			iLocal_60 = 1;
		}
		if (__LIB_0__::func_293(45))
		{
			POPULATION::_0xB56D41A694E42E86(iLocal_14, 10208, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_14, 10208, 0, 0, -1, -1, 0);
		}
		else
		{
			POPULATION::_0x74C2B3DC0B294102(iLocal_14);
			POPULATION::_0xA1CFB35069D23C23(iLocal_14);
		}
	}
	return true;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
	if (__LIB_0__::func_2() == -1 && !__LIB_0__::func_898(664571177))
	{
		__LIB_4__::func_919(&uLocal_20, 943, 5, "", joaat("CART05"), 442.7123f, 667.0687f, 114.9347f, 8.68f, 0, 0);
		__LIB_4__::func_919(&uLocal_40, 944, 5, "", joaat("CART05"), 436.3587f, 671.5928f, 114.8581f, -28.76f, 0, 0);
	}
}

bool func_38(int iParam0)
{
	if (__LIB_0__::func_2() == -1 && !__LIB_0__::func_898(664571177))
	{
		__LIB_6__::func_928(&uLocal_20);
		__LIB_6__::func_928(&uLocal_40);
	}
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_64, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_64, 4);
		__LIB_0__::func_25(iLocal_64, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_78(iLocal_64);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_64);
		__LIB_2__::func_819(iLocal_64);
		__LIB_2__::func_755(iLocal_64);
		if (!__LIB_2__::func_756(iLocal_64, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

bool func_46()
{
	if (__LIB_0__::func_293(45))
	{
		return false;
	}
	if (__LIB_2__::func_774(58))
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1935630, 2048) && Global_1347343.f_2 == Global_1835011[58 /*74*/].f_1)
	{
		return false;
	}
	return true;
}

void func_78(int iParam0)
{
	MISC::_0xF569E33FB72ED28E();
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
	if (iLocal_60 == 1)
	{
		LAW::_REMOVE_GUARD_ZONE(sLocal_15);
		__LIB_0__::func_172(iLocal_19);
		__LIB_0__::func_172(iLocal_16);
		__LIB_0__::func_172(iLocal_18);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_17))
	{
		VOLUME::_0x998202B206872672(iLocal_17);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_17);
		__LIB_0__::func_172(iLocal_17);
	}
	if (__LIB_0__::func_2() == -1 && !__LIB_0__::func_898(664571177))
	{
		__LIB_4__::func_909(&uLocal_20);
		__LIB_4__::func_909(&uLocal_40);
	}
	iParam0 = iParam0;
}

