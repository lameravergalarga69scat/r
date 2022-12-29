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
	iLocal_14 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-73.33932f, -398.9078f, 72.24845f, 0f, 0f, 66.15892f, 99.58835f, 86.51411f, 42.63912f, "Granger's Hoggery - m_volTown");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Granger's Hoggery - m_volRancherThreat Agg");
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, -68.82082f, -387.3279f, 72.49265f, 0f, 0f, 48.19205f, 0.916038f, 0.967821f, 6.513287f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, -77.56838f, -392.186f, 72.49265f, 0f, 0f, 48.19205f, 2.563069f, 2.387336f, 6.513287f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, -75.34951f, -388.4147f, 72.1382f, 0f, 0f, 22.97115f, 4.397328f, 4.863138f, 6.900121f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, -62.42026f, -409.1303f, 68.97523f, 0f, 0f, 13.57845f, 13.41282f, 8.335032f, 6.900121f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, -62.5439f, -392.4335f, 72.1382f, 0f, 0f, 29.04495f, 7.979648f, 6.063315f, 6.900121f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, -68.68666f, -377.174f, 72.1382f, 0f, 0f, 76.32537f, 1.587863f, 1.493361f, 5.424076f);
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Granger's Hoggery - m_volRancherRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_16, iLocal_17);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, -66.34515f, -395.8655f, 72.49265f, 0f, 0f, 20.19842f, 20.50491f, 22.65399f, 6.513287f);
		iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Granger's Hoggery - m_volRancherWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_18, iLocal_16);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, -66.34515f, -395.8655f, 72.49265f, 0f, 0f, 20.19842f, 44.28191f, 42.39419f, 6.513287f);
		sLocal_15 = "GRANGERS_HOGGERY";
		LAW::_CREATE_GUARD_ZONE(sLocal_15);
		LAW::_0x8C598A930F471938(sLocal_15, iLocal_14);
		LAW::_0x35815F372D43E1E5(sLocal_15, iLocal_16);
		LAW::_0xA1B0E6301E2E02A6(sLocal_15, iLocal_17);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_15, iLocal_18);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_15, -62.197f, -392.6637f, 72.1036f);
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
	if (!__LIB_1__::func_187(85) || __LIB_1__::func_187(88))
	{
		__LIB_0__::func_25(70, 16);
		__LIB_2__::func_812(751, iLocal_16, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_16, 3, 1);
		TASK::SET_SCENARIO_GROUP_ENABLED("Shack_GunslingerLivestock", true);
	}
	else
	{
		__LIB_0__::func_24(70, 16);
		TASK::SET_SCENARIO_GROUP_ENABLED("Shack_GunslingerLivestock", false);
	}
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

void func_56()
{
	int iVar0;
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("GRH_RANCH_HAND"));
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

void func_75(int iParam0)
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_15);
	__LIB_0__::func_172(iLocal_18);
	__LIB_0__::func_172(iLocal_17);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_16))
	{
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_16);
		VOLUME::_DELETE_VOLUME(iLocal_16);
	}
}

