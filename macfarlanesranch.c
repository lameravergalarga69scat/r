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
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_19 = 20000;
	iLocal_22 = vScriptParam_0.x;
	iLocal_20 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_21 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_21)
		{
			iLocal_21 = 0;
			__LIB_1__::func_947(iLocal_22, &iLocal_20);
			switch (iLocal_20)
			{
				case 0:
					iLocal_20 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_22);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_22)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_22), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_22));
					iVar1 = __LIB_1__::func_885(iLocal_22);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_23 = (MISC::GET_GAME_TIMER() + iLocal_19);
					iLocal_20 = 2;
					break;
				case 2:
					if (func_11() || iLocal_23 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_22);
						iLocal_23 = (MISC::GET_GAME_TIMER() + iLocal_19);
						iLocal_20 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_22) || iLocal_23 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_22);
						iLocal_23 = (MISC::GET_GAME_TIMER() + iLocal_19);
						iLocal_20 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_22) || iLocal_23 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_22);
						iLocal_23 = (iLocal_19 + MISC::GET_GAME_TIMER());
						iLocal_20 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_22)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_22), 4) && !iLocal_23 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_22) || iLocal_23 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_22, 4);
								iLocal_23 = (iLocal_19 + MISC::GET_GAME_TIMER());
								iLocal_20 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_23 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_22);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_22);
								func_28(iLocal_22);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_20 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_6__::func_927(iLocal_22);
							__LIB_0__::func_18();
							iLocal_20 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_5__::func_252(iLocal_22, &Global_1898004);
							iLocal_20 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_22);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_22, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_20 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_22))
							{
								iLocal_21 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_22);
							__LIB_1__::func_891(iLocal_22);
							__LIB_0__::func_24(iLocal_22, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_22 /*35*/].f_10);
							if (Global_1888801[iLocal_22 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_22 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_22 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_22 /*35*/].f_12);
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
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2395.549f, -2409.981f, 35f, 0f, 0f, -2f, 115f, 87f, 50f, "m_volMacFarlanesRanch");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MacFarlanes' Ranch - m_volLivestockOwnership Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_18, -2397.539f, -2380.358f, 63.54964f, 0f, 0f, 69.87278f, 9.356425f, 9.762298f, 16.92971f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, -2454.959f, -2384.037f, 35f, 0f, 0f, 25.5349f, 24.66208f, 30.76534f, 39.15789f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, -2411.945f, -2374.556f, 63.25839f, 0f, 0f, -16.81672f, 11.05804f, 16.78223f, 9.688599f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, -2465.952f, -2383.441f, 27.18244f, 0f, 0f, 21.15438f, 14.65817f, 21.71472f, 39.15789f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, -2455.885f, -2398.27f, 43.6138f, 0f, 0f, 31.47044f, 15.61658f, 17.41739f, 30.62743f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, -2453.473f, -2398.197f, 43.6138f, 0f, 0f, 31.47043f, 16.73191f, 17.41739f, 30.62743f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, -2457.314f, -2396.39f, 43.6138f, 0f, 0f, 44.06578f, 16.73191f, 17.41739f, 30.62743f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, -2432.721f, -2360.609f, 66.342f, 0f, 0f, -59.51217f, 44.12811f, 56.53022f, 19.75536f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, -2429.221f, -2392.539f, 64.86296f, 0f, 0f, 30.36721f, 35.19614f, 20.94381f, 14.33946f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, -2405.119f, -2471.914f, 63.25839f, 0f, 0f, 16.82132f, 13.84418f, 7.762568f, 9.688599f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, -2418.703f, -2436.631f, 63.54964f, 0f, 0f, 18.87025f, 14.41697f, 14.95155f, 16.92971f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, -2407.512f, -2449.14f, 64.5022f, 0f, 0f, 48.91291f, 13.99343f, 21.49771f, 12.90299f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, -2416.311f, -2452.443f, 64.20742f, 0f, 0f, 3.371748f, 14.65324f, 19.53584f, 12.77374f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, -2399.068f, -2464.15f, 64.86296f, 0f, 0f, 18.69488f, 16.30252f, 23.22957f, 14.33946f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, -2414.51f, -2467.064f, 61.83258f, 0f, 0f, -78.00346f, 14.14975f, 15.2253f, 17.07607f);
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MacFarlanes' Ranch - m_volRancherThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_17, -2367.028f, -2392.284f, 62.65725f, 0f, 0f, 80.66904f, 7.899721f, 3.250947f, 3.33819f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, -2397.539f, -2380.358f, 63.54964f, 0f, 0f, 69.87278f, 9.356425f, 9.762298f, 16.92971f);
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MacFarlanes' Ranch - m_volRancherRegistration Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_16, iLocal_17);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, -2395.549f, -2409.981f, 35f, 0f, 0f, -2f, 115f, 87f, 50f);
		sLocal_15 = "MACFARLANES_RANCH";
		LAW::_CREATE_GUARD_ZONE(sLocal_15);
		LAW::_0xA8A74AA79FB67159(sLocal_15, iLocal_14);
		LAW::_0x8C598A930F471938(sLocal_15, iLocal_16);
		LAW::_0xA1B0E6301E2E02A6(sLocal_15, iLocal_17);
		LAW::_0x35815F372D43E1E5(sLocal_15, iLocal_17);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_15, iLocal_17);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_15, -2397.539f, -2380.358f, 63.54964f);
	}
	return true;
}

void func_28(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_2__::func_812(900, iLocal_18, 1);
	__LIB_2__::func_812(895, iLocal_18, 0);
	__LIB_2__::func_812(896, iLocal_18, 0);
	__LIB_2__::func_812(897, iLocal_18, 0);
	__LIB_2__::func_812(898, iLocal_18, 0);
	__LIB_2__::func_812(899, iLocal_18, 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_18, 3, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_18, 3, 1, __LIB_0__::func_120(899));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_18, 3, 1, __LIB_0__::func_120(895));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_18, 3, 1, __LIB_0__::func_120(896));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_18, 3, 1, __LIB_0__::func_120(897));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_18, 3, 1, __LIB_0__::func_120(898));
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
		__LIB_0__::func_24(iLocal_22, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_22, 4);
		__LIB_0__::func_25(iLocal_22, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_76(iLocal_22);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_22);
		__LIB_2__::func_819(iLocal_22);
		__LIB_2__::func_755(iLocal_22);
		if (!__LIB_2__::func_756(iLocal_22, 0))
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
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_BLACKSMITH"));
	iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCHER"));
	iVar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCH_HAND"));
	iVar3 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCH_HAND_2"));
	iVar4 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCH_HAND_3"));
	iVar5 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HEN_MFR_RANCH_HAND_4"));
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
			return;
		}
	}
	if (PERSCHAR::_0x800DF3FC913355F3(iVar2))
	{
		if (!PERSCHAR::_0xEB98B38CA60742D7(iVar2) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
			return;
		}
	}
	if (PERSCHAR::_0x800DF3FC913355F3(iVar3))
	{
		if (!PERSCHAR::_0xEB98B38CA60742D7(iVar3) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
			return;
		}
	}
	if (PERSCHAR::_0x800DF3FC913355F3(iVar4))
	{
		if (!PERSCHAR::_0xEB98B38CA60742D7(iVar4) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
			return;
		}
	}
	if (PERSCHAR::_0x800DF3FC913355F3(iVar5))
	{
		if (!PERSCHAR::_0xEB98B38CA60742D7(iVar5) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
		}
		else if (PERSCHAR::_0xEB98B38CA60742D7(iVar5) && !TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, true);
		}
	}
}

void func_76(int iParam0)
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_15);
	__LIB_0__::func_172(iLocal_17);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_18))
	{
		VOLUME::_0x998202B206872672(iLocal_18);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_18);
		VOLUME::_DELETE_VOLUME(iLocal_18);
	}
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
}

