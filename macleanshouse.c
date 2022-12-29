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
							__LIB_1__::func_886(iLocal_22);
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
							if (__LIB_4__::func_806(iLocal_22))
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
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2257.921f, -129.5337f, 51.985f, 0f, -1E-06f, 13.20028f, 82.29547f, 67.60979f, 21.17161f, "MacLean's Ranch - m_volTown");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MacLean's Ranch - m_volRancherThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2241.916f, -109.335f, 47.39677f, 0f, 0f, 81.00094f, 15.27625f, 30.5406f, 14.65559f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2242.125f, -118.91f, 49.79729f, 0f, 0f, -9.792401f, 22.84632f, 3.968585f, 11.03726f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2229.892f, -115.0595f, 50.13812f, 0f, 0f, -43.69167f, 7.061154f, 5.28716f, 10.09026f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2253.012f, -119.7667f, 49.20896f, 0f, 0f, -55.08507f, 2.867169f, 4.725968f, 9.455753f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2244.684f, -99.80244f, 49.79729f, 0f, 0f, -6.792556f, 27.39669f, 5.430289f, 11.03726f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2230.888f, -99.64697f, 49.20896f, 0f, 0f, -141.6504f, 5.207262f, 4.725968f, 9.455753f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2236.452f, -142.7769f, 50.13812f, 0f, 0f, -49.1528f, 7.766057f, 7.596688f, 10.09026f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2236.481f, -142.6387f, 47.39677f, 0f, 0f, 39.75399f, 7.495997f, 7.665227f, 14.65559f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2282.604f, -118.0235f, 45.6339f, 0f, 0f, -24.74522f, 3.359454f, 14.73906f, 12.52731f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2274.63f, -102.5251f, 46.93924f, 0f, 0f, -12.90716f, 17.48779f, 5.873432f, 15.33682f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2273.252f, -116.878f, 46.93924f, 0f, 0f, -9.949313f, 19.00171f, 22.66021f, 15.33682f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 2283.666f, -109.4251f, 44.44471f, 0f, 0f, 0f, 3.780884f, 6.839418f, 7.568232f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 2275.129f, -99.41361f, 44.81648f, 0f, 0f, -12.62545f, 8.420317f, 1f, 9.244777f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 2269.443f, -125.7176f, 44.44471f, 0f, 0f, 73.07793f, 3.302727f, 7.064869f, 7.568232f);
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MacLean's Ranch - m_volRancherRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_16, iLocal_17);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 2255.429f, -122.8375f, 51.985f, -1E-06f, 0f, 78.69922f, 38.29042f, 36.90052f, 21.17161f);
		iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MacLean's Ranch - m_volRancherWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_18, iLocal_16);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, 2254.417f, -126.5447f, 51.985f, -1E-06f, 0f, 78.69922f, 51.7244f, 47.73219f, 21.17161f);
		sLocal_15 = "MACLEANS_RANCH";
		LAW::_CREATE_GUARD_ZONE(sLocal_15);
		LAW::_0x8C598A930F471938(sLocal_15, iLocal_14);
		LAW::_0x35815F372D43E1E5(sLocal_15, iLocal_16);
		LAW::_0xA1B0E6301E2E02A6(sLocal_15, iLocal_17);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_15, iLocal_18);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_15, 2235.653f, -143.1516f, 47.8762f);
		LAW::_0xA8A74AA79FB67159(sLocal_15, iLocal_14);
	}
	return true;
}

void func_28(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_2__::func_812(905, iLocal_16, 1);
	__LIB_2__::func_812(772, iLocal_16, 0);
	__LIB_2__::func_812(906, iLocal_16, 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_16, 3, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_16, 3, 1, __LIB_0__::func_120(906));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_16, 3, 1, __LIB_0__::func_120(772));
	PED::_0x931B241409216C1F(__LIB_1__::func_334(905), __LIB_1__::func_334(772), 0);
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
		func_75(iLocal_22);
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

void func_75(int iParam0)
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_15);
	__LIB_0__::func_172(iLocal_18);
	__LIB_0__::func_172(iLocal_17);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_16))
	{
		VOLUME::_0x998202B206872672(iLocal_16);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_16);
		VOLUME::_DELETE_VOLUME(iLocal_16);
	}
}

