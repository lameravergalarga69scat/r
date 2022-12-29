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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_20 = 20000;
	iLocal_23 = vScriptParam_0.x;
	iLocal_21 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_22 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_22)
		{
			iLocal_22 = 0;
			__LIB_1__::func_947(iLocal_23, &iLocal_21);
			switch (iLocal_21)
			{
				case 0:
					iLocal_21 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_23);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_23)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_23), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_23));
					iVar1 = __LIB_1__::func_885(iLocal_23);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_24 = (MISC::GET_GAME_TIMER() + iLocal_20);
					iLocal_21 = 2;
					break;
				case 2:
					if (func_11() || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_23);
						iLocal_24 = (MISC::GET_GAME_TIMER() + iLocal_20);
						iLocal_21 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_23) || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_23);
						iLocal_24 = (MISC::GET_GAME_TIMER() + iLocal_20);
						iLocal_21 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_23) || iLocal_24 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_23);
						iLocal_24 = (iLocal_20 + MISC::GET_GAME_TIMER());
						iLocal_21 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_23)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_23), 4) && !iLocal_24 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_23) || iLocal_24 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_23, 4);
								iLocal_24 = (iLocal_20 + MISC::GET_GAME_TIMER());
								iLocal_21 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_24 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_23);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_23);
								func_28(iLocal_23);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_21 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_23);
							__LIB_0__::func_18();
							iLocal_21 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							func_34(iLocal_23, &Global_1898004);
							iLocal_21 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_23);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_23, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_21 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_23))
							{
								iLocal_22 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_23);
							__LIB_1__::func_891(iLocal_23);
							__LIB_0__::func_24(iLocal_23, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_23 /*35*/].f_10);
							if (Global_1888801[iLocal_23 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_23 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_23 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_23 /*35*/].f_12);
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
	iLocal_14 = Global_1888801[68 /*35*/].f_4;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Down's Ranch - m_volThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -861.1559f, 337.3949f, 97.83562f, 0f, 0f, -10.52764f, 11.36256f, 15.17971f, 10.22759f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -864.7891f, 321.0681f, 94.98614f, 0f, 0f, -10.52764f, 8.645713f, 12.50398f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -62.5439f, -392.4335f, 72.1382f, 0f, 0f, 29.04495f, 7.979648f, 6.063315f, 6.900121f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -851.4187f, 361.481f, 97.83562f, 0f, 0f, -13.36656f, 0.863879f, 8.798125f, 5.594934f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -846.2698f, 364.2993f, 96.90186f, 0f, 0f, -7.59012f, 9.607594f, 16.13778f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -854.8633f, 319.2234f, 94.98614f, 0f, 0f, -10.52763f, 11.77066f, 11.27451f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -790.8695f, 346.954f, 98.00078f, 0f, 0f, -8.615136f, 13.37762f, 8.146093f, 7.736006f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -797.3005f, 347.9039f, 98.69241f, -178.9669f, -86.9581f, 158.5464f, 6.802914f, 7.671669f, 3.322031f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -817.6839f, 353.5158f, 98.00078f, 0f, 0f, -9.719018f, 10.09804f, 10.20509f, 7.736006f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -874.6434f, 323.2318f, 94.98614f, 0f, 0f, -10.52763f, 12.96012f, 12.50398f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -883.0225f, 334.1583f, 94.98614f, 0f, 0f, -23.19702f, 8.645713f, 14.33108f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -857.598f, 357.7791f, 94.98614f, 0f, 0f, -4.378916f, 9.184352f, 2.478699f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -868.0872f, 338.0298f, 94.98614f, 0f, 0f, -10.52763f, 22.80199f, 22.79938f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -859.0131f, 352.2604f, 94.98614f, 0f, 0f, -10.52763f, 9.726913f, 9.194143f, 4.525191f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_19, -868.4409f, 352.2944f, 95.5f, 0f, 0f, 121.5158f, 4.6843f, 11.06676f, 5.382992f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_19, -879.6567f, 344.2453f, 95.5f, 0f, 0f, -38.53438f, 2.935173f, 7.713624f, 5.382992f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_19, -882.3352f, 327.0211f, 95.5f, 0f, 0f, 156.2253f, 7.625237f, 7.713624f, 5.382992f);
		VOLUME::_0x39816F6F94F385AD(iLocal_19, -810.5886f, 353.7103f, 98.00078f, 0f, 0f, -9.719017f, 3.779373f, 6.791281f, 7.736006f);
		iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Down's Ranch - m_volRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_18, iLocal_19);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, -858.1369f, 346.6224f, 95.5f, 0f, 0f, -0.107f, 36.56057f, 35.55415f, 44f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, -815.7545f, 352.5984f, 105.6908f, 0f, 0f, -12.06673f, 85.78142f, 37.62513f, 28.168f);
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Down's Ranch - m_volWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_17, iLocal_18);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, -834.0826f, 345.0585f, 95.5f, 0f, 0f, -0.107f, 73.14397f, 44.90614f, 45.70249f);
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Down's Ranch - m_volRegistration Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_16, iLocal_17);
		sLocal_15 = "DOWNS_RANCH";
		LAW::_CREATE_GUARD_ZONE(sLocal_15);
		LAW::_0x8C598A930F471938(sLocal_15, iLocal_16);
		LAW::_0x35815F372D43E1E5(sLocal_15, iLocal_18);
		LAW::_0xA1B0E6301E2E02A6(sLocal_15, iLocal_19);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_15, iLocal_17);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_15, -818.1168f, 354.8587f, 98.5042f);
		LAW::_0xA8A74AA79FB67159(sLocal_15, iLocal_16);
	}
	return true;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
	if (__LIB_0__::func_13(32768))
	{
		if (!__LIB_1__::func_185(43))
		{
			__LIB_0__::func_123(565, 32);
		}
	}
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = 565;
	iVar1 = __LIB_1__::func_334(iVar0);
	if (!__LIB_0__::func_255(iVar1, 0))
	{
		__LIB_2__::func_812(iVar0, iLocal_18, 1);
		__LIB_2__::func_812(564, iLocal_18, 0);
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_18, 3, 1);
		VOLUME::_0x53D05D60E5F5B40C(iLocal_18, 3, 1, __LIB_0__::func_120(564));
	}
}

void func_34(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	__LIB_2__::func_766(uParam1, iLocal_14, 1);
	if (__LIB_1__::func_187(59))
	{
		__LIB_3__::func_229(554);
	}
}

bool func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_2() == -1)
	{
		func_62();
		iVar0 = 564;
		iVar1 = __LIB_1__::func_334(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(iVar1)))
		{
			func_63(iVar1);
		}
	}
	return true;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_23, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_23, 4);
		__LIB_0__::func_25(iLocal_23, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_83(iLocal_23);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_23);
		__LIB_2__::func_819(iLocal_23);
		__LIB_2__::func_755(iLocal_23);
		if (!__LIB_2__::func_756(iLocal_23, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_62()
{
	int iVar0;
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("DOR_HUSBAND"));
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, true);
		}
	}
	else if (PERSCHAR::_0xEB98B38CA60742D7(iVar0))
	{
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, true);
		}
	}
	else if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
	}
}

void func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 565;
	iVar1 = __LIB_1__::func_334(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		PED::_0x931B241409216C1F(iVar1, iParam0, 0);
	}
}

void func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
	LAW::_REMOVE_GUARD_ZONE(sLocal_15);
	__LIB_0__::func_172(iLocal_16);
	__LIB_0__::func_172(iLocal_17);
	__LIB_0__::func_172(iLocal_19);
	iVar0 = 564;
	iVar1 = __LIB_1__::func_334(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		PED::_0xBCC76708E5677E1D(iVar1, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_18))
	{
		VOLUME::_0x998202B206872672(iLocal_18);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_18);
		VOLUME::_DELETE_VOLUME(iLocal_18);
	}
}

