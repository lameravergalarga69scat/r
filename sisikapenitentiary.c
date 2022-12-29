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
	var uLocal_14[1] = { 0 };
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	char* sLocal_23 = NULL;
	bool bLocal_24 = false;
	bool bLocal_25 = false;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_24 = true;
	iLocal_26 = 20000;
	iLocal_29 = vScriptParam_0.x;
	iLocal_27 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_28 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_28)
		{
			iLocal_28 = 0;
			__LIB_1__::func_947(iLocal_29, &iLocal_27);
			switch (iLocal_27)
			{
				case 0:
					iLocal_27 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_29);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_29)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_29), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_29));
					iVar1 = __LIB_1__::func_885(iLocal_29);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_30 = (MISC::GET_GAME_TIMER() + iLocal_26);
					iLocal_27 = 2;
					break;
				case 2:
					if (func_11() || iLocal_30 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_29);
						iLocal_30 = (MISC::GET_GAME_TIMER() + iLocal_26);
						iLocal_27 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_29) || iLocal_30 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_29);
						iLocal_30 = (MISC::GET_GAME_TIMER() + iLocal_26);
						iLocal_27 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_29) || iLocal_30 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_29);
						iLocal_30 = (iLocal_26 + MISC::GET_GAME_TIMER());
						iLocal_27 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_29)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_29), 4) && !iLocal_30 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_29) || iLocal_30 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_29, 4);
								iLocal_30 = (iLocal_26 + MISC::GET_GAME_TIMER());
								iLocal_27 = 7;
							}
							Jump @791; //curOff = 459
							if (iLocal_30 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_29);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_29);
								__LIB_1__::func_886(iLocal_29);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_27 = 8;
							}
							Jump @791; //curOff = 558
							__LIB_1__::func_886(iLocal_29);
							__LIB_0__::func_18();
							iLocal_27 = 9;
							Jump @791; //curOff = 575
							__LIB_1__::func_889(&Global_1898004);
							func_34(iLocal_29, &Global_1898004);
							iLocal_27 = 10;
							Jump @791; //curOff = 600
							__LIB_2__::func_749(iLocal_29);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_29, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_27 = 11;
							Jump @791; //curOff = 670
							if (func_38(iLocal_29))
							{
								iLocal_28 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_29);
							__LIB_1__::func_891(iLocal_29);
							__LIB_0__::func_24(iLocal_29, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_29 /*35*/].f_10);
							if (Global_1888801[iLocal_29 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_29 /*35*/].f_11);
							}
							Jump @791; //curOff = 772
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_29 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_29 /*35*/].f_12);
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
	int iVar0;
	int iVar1;
	iLocal_16 = Global_1888801[32 /*35*/].f_4;
	iLocal_17 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3350.781f, -675.869f, 63.768f, 0f, 0f, 0f, 116.5f, 87.5f, 50f, "Sisika - m_volGTower");
	iVar0 = POPULATION::_CREATE_POPZONE_FROM_VOLUME(iLocal_17);
	POPULATION::SET_POPZONE_POPULATION_SET(iVar0, joaat("SIS_GUARD"));
	POPULATION::_0x7E6BC0B94F5928F0(iVar0, 16, 16);
	POPULATION::_0x0F1861101C9A9944(iVar0, true);
	POPULATION::_0x08892122769770D5(iVar0, true);
	POPULATION::_0x578E2FA64E847C60(iVar0, 0);
	iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Sisika - m_volGBridge");
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 3321.868f, -610.395f, 48.57418f, 0f, 0f, 40f, 15f, 75f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 3319.213f, -584.038f, 47.83653f, 0f, 0f, 40f, 15f, 29f, 20f);
	iVar1 = POPULATION::_CREATE_POPZONE_FROM_VOLUME(iLocal_18);
	POPULATION::SET_POPZONE_POPULATION_SET(iVar1, joaat("SIS_GUARD"));
	POPULATION::_0x7E6BC0B94F5928F0(iVar1, 3, 3);
	POPULATION::_0x0F1861101C9A9944(iVar1, true);
	POPULATION::_0x08892122769770D5(iVar1, true);
	POPULATION::_0x578E2FA64E847C60(iVar1, 0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Sisika - m_volGuardThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_21, 3353.973f, -672.1495f, 63.768f, 0f, 0f, 14.62307f, 68.21951f, 54.663f, 50f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_21, 3315.974f, -656.2813f, 75.25407f, 0f, 0f, 40.4587f, 4.165449f, 4.203612f, 25.19653f);
		VOLUME::_0x39816F6F94F385AD(iLocal_21, 3382.837f, -665.3976f, 63.76801f, 0f, 0f, -59.89402f, 51.37444f, 37.32103f, 50f);
		VOLUME::_0x39816F6F94F385AD(iLocal_21, 3381f, -693.5285f, 48.96563f, 0f, 0f, 50.13634f, 11.37222f, 36.9617f, 50f);
		VOLUME::_0x39816F6F94F385AD(iLocal_21, 3364.015f, -686.8185f, 63.76801f, 0f, 0f, 60.3014f, 66.63422f, 46.65413f, 50f);
		VOLUME::_0x39816F6F94F385AD(iLocal_21, 3376.356f, -691.6537f, 63.76801f, 0f, 0f, 50.13634f, 65.99199f, 37.71349f, 50f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_21, 3328.904f, -704.5117f, 75.25407f, 0f, 0f, 40.4587f, 4.165449f, 5.205996f, 25.19653f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_21, 3368.851f, -726.5292f, 75.25407f, 0f, 0f, 40.4587f, 4.165449f, 4.203612f, 25.19653f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_21, 3410.578f, -679.0173f, 75.25407f, 0f, 0f, 40.45871f, 4.165449f, 4.203612f, 25.19653f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_21, 3386.604f, -637.0076f, 75.25407f, 0f, 0f, 40.45871f, 4.165449f, 4.203612f, 25.19653f);
		iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Sisika - m_volGuardRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_20, iLocal_21);
		VOLUME::_0xBCE668AAF83608BE(iLocal_20, 3187.881f, -392.378f, 59.70001f, 0f, 0f, -60.2991f, 106.109f, 89.50376f, 100f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_20, 3203.627f, -637.6728f, 59.70001f, 0f, 0f, -63.6916f, 207.2567f, 107.2578f, 100f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_20, 3186.952f, -695.6421f, 59.70001f, 0f, 0f, -63.6916f, 129.2146f, 107.2578f, 100f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_20, 3297.383f, -592.1081f, 59.70001f, 0f, 0f, -63.6916f, 173.9582f, 92.46152f, 100f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_20, 3375.808f, -710.6785f, 59.7f, 0f, 0f, -61.08491f, 129.6087f, 116.591f, 100f);
		iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Sisika - m_volGuardWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_22, iLocal_20);
		iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Sisika - m_volGuardRegistration Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_19, iLocal_22);
		sLocal_23 = "SISIKA";
		LAW::_CREATE_GUARD_ZONE(sLocal_23);
		LAW::_0x8C598A930F471938(sLocal_23, iLocal_19);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_23, iLocal_22);
		LAW::_0x35815F372D43E1E5(sLocal_23, iLocal_20);
		LAW::_0xA1B0E6301E2E02A6(sLocal_23, iLocal_21);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_23, 3355.869f, -676.4202f, 49.5715f);
		LAW::_0xA8A74AA79FB67159(sLocal_23, iLocal_19);
	}
	return true;
}

void func_14(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		func_46();
	}
}

void func_34(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	__LIB_2__::func_766(uParam1, iLocal_16, 1);
}

bool func_38(int iParam0)
{
	iParam0 = iParam0;
	func_54();
	if (__LIB_0__::func_2() == -1 && !__LIB_0__::func_296(0, 0, 1))
	{
		func_56();
	}
	return true;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_29, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_29, 4);
		__LIB_0__::func_25(iLocal_29, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_76(iLocal_29);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_29);
		__LIB_2__::func_819(iLocal_29);
		__LIB_2__::func_755(iLocal_29);
		if (!__LIB_2__::func_756(iLocal_29, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_46()
{
	int iVar0;
	iVar0 = 7;
	uLocal_14[0] = VOLUME::_0x00BBF7CEAE8C666A(3360.208f, -678.505f, 41.488f, 60f, iVar0, 16384);
}

void func_54()
{
	if (bLocal_25)
	{
		if (LAW::_0xAD401C63158ACBAA(PLAYER::PLAYER_ID()))
		{
			PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		}
	}
	else if (LAW::_0x0DBACA9C38C9A686(sLocal_23))
	{
		bLocal_25 = true;
		LAW::_0x75CBF20BA47E4F89(Global_36, joaat("LAW_LOCAL_SISIKA"));
	}
}

void func_56()
{
	if (bLocal_24)
	{
		__LIB_3__::func_123(-1136876394, 1);
		__LIB_3__::func_123(-1913501694, 1);
		bLocal_24 = false;
	}
}

void func_76(int iParam0)
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_23);
	iParam0 = iParam0;
	if (__LIB_0__::func_2() == -1)
	{
		func_125();
	}
}

void func_125()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uLocal_14[iVar0]))
		{
			VOLUME::_0xFDFECC6EE4491E11(uLocal_14[iVar0]);
		}
		iVar0++;
	}
}

