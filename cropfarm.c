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
						__LIB_1__::func_886(iLocal_23);
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
							__LIB_5__::func_252(iLocal_23, &Global_1898004);
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
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1134.233f, 447.732f, 77.166f, 0f, 0f, 0f, 75f, 75f, 75f, "Guthrie Farm - m_volTown");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Guthrie Farm - m_volRancherThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 1119.103f, 491.625f, 94.789f, 0f, 0f, 40.29281f, 4.983408f, 12.47093f, 20f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 1116.402f, 489.3356f, 94.789f, 0f, 0f, 40.29281f, 11.85608f, 5.358582f, 20f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 1178.083f, 428.8635f, 93.85277f, 0f, 0f, 53.30451f, 6.700057f, 7.386477f, 11.96838f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 1122.726f, 433.0324f, 94.789f, 0f, 0f, 37.03593f, 4.563203f, 6.540945f, 8.78159f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 1117.072f, 440.526f, 94.789f, 0f, 0f, 37.03593f, 4.563203f, 6.540945f, 8.78159f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 1111.182f, 447.2959f, 94.789f, 0f, 0f, 37.03593f, 4.563203f, 6.540945f, 8.78159f);
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Guthrie Farm - m_volRancherRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_17, iLocal_18);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1158.519f, 410.6769f, 92.74591f, 0f, 0f, -42.87345f, 53.38902f, 36.78405f, 32.92925f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1183.084f, 409.2454f, 94.789f, 0f, 0f, 62.77261f, 47.98455f, 17.14376f, 15.40531f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1155.914f, 449.3743f, 96.1861f, 0f, 0f, 47.14103f, 50.95671f, 69.55695f, 12.92893f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 1195.093f, 434.533f, 81.04297f, 0f, 0f, 0f, 7.797928f, 12.21736f, 21.62953f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1170.392f, 385.8856f, 94.80865f, 0f, 0f, 21.33961f, 15.42121f, 9.785769f, 12.92893f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 1125.095f, 489.7792f, 81.04297f, 0f, 0f, 0f, 22.93393f, 22.40263f, 21.62953f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1116.016f, 455.3546f, 94.789f, 0f, 0f, 39.8431f, 36.45f, 74.7347f, 15.40531f);
		iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Guthrie Farm - m_volRancherWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_19, iLocal_17);
		VOLUME::_0xBCE668AAF83608BE(iLocal_19, 1125.095f, 466.7386f, 81.04297f, 0f, 0f, 31.95184f, 48.08396f, 52.23304f, 21.62953f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_19, 1151.546f, 440.5756f, 81.04297f, 0f, 0f, -44.24499f, 55.60196f, 50.99452f, 21.62953f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_19, 1158.093f, 392.0394f, 81.04297f, 0f, 0f, -24.17386f, 18.53472f, 13.09556f, 21.62953f);
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Guthrie Farm - m_volRancherRegistration Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_16, iLocal_19);
		sLocal_15 = "GUTHRIE_FARM";
		LAW::_CREATE_GUARD_ZONE(sLocal_15);
		LAW::_0x8C598A930F471938(sLocal_15, iLocal_16);
		LAW::_0x35815F372D43E1E5(sLocal_15, iLocal_17);
		LAW::_0xA1B0E6301E2E02A6(sLocal_15, iLocal_18);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_15, iLocal_19);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_15, 1117.13f, 490.0274f, 97.598f);
		LAW::_0xA8A74AA79FB67159(sLocal_15, iLocal_16);
	}
	return true;
}

void func_28(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_2__::func_812(745, iLocal_17, 1);
	__LIB_2__::func_812(746, iLocal_17, 0);
	__LIB_2__::func_812(748, iLocal_17, 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_17, 3, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_17, 3, 1, __LIB_0__::func_120(746));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_17, 3, 1, __LIB_0__::func_120(748));
	PED::_0x931B241409216C1F(__LIB_1__::func_334(745), __LIB_1__::func_334(748), 0);
}

bool func_38(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
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
		func_76(iLocal_23);
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

void func_56()
{
	int iVar0;
	int iVar1;
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CRO_RANCHER"));
	iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CRO_RANCH_HAND"));
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		if (!PERSCHAR::_0xEB98B38CA60742D7(iVar0) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
			return;
		}
	}
	if (PERSCHAR::_0x800DF3FC913355F3(iVar1))
	{
		if (!PERSCHAR::_0xEB98B38CA60742D7(iVar1) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
		}
		else if (PERSCHAR::_0xEB98B38CA60742D7(iVar1) && !TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, true);
		}
	}
}

void func_76(int iParam0)
{
	__LIB_0__::func_172(iLocal_16);
	__LIB_0__::func_172(iLocal_19);
	__LIB_0__::func_172(iLocal_18);
	LAW::_REMOVE_GUARD_ZONE(sLocal_15);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_17))
	{
		VOLUME::_0x998202B206872672(iLocal_17);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_17);
		VOLUME::_DELETE_VOLUME(iLocal_17);
	}
}

