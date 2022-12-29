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
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_18 = 20000;
	iLocal_21 = vScriptParam_0.x;
	iLocal_19 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_20 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_20)
		{
			iLocal_20 = 0;
			__LIB_1__::func_947(iLocal_21, &iLocal_19);
			switch (iLocal_19)
			{
				case 0:
					iLocal_19 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_21);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_21)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_21), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_21));
					iVar1 = __LIB_1__::func_885(iLocal_21);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_22 = (MISC::GET_GAME_TIMER() + iLocal_18);
					iLocal_19 = 2;
					break;
				case 2:
					if (func_11() || iLocal_22 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_21);
						iLocal_22 = (MISC::GET_GAME_TIMER() + iLocal_18);
						iLocal_19 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_21) || iLocal_22 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_21);
						iLocal_22 = (MISC::GET_GAME_TIMER() + iLocal_18);
						iLocal_19 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_21) || iLocal_22 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_21);
						iLocal_22 = (iLocal_18 + MISC::GET_GAME_TIMER());
						iLocal_19 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_21)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_21), 4) && !iLocal_22 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_21) || iLocal_22 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_21, 4);
								iLocal_22 = (iLocal_18 + MISC::GET_GAME_TIMER());
								iLocal_19 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_22 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_21);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_21);
								func_28(iLocal_21);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_19 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_21);
							__LIB_0__::func_18();
							iLocal_19 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_5__::func_252(iLocal_21, &Global_1898004);
							iLocal_19 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_21);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_21, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_19 = 11;
							Jump @788; //curOff = 667
							if (__LIB_0__::func_0(iLocal_21))
							{
								iLocal_20 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_21);
							__LIB_1__::func_891(iLocal_21);
							__LIB_0__::func_24(iLocal_21, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_21 /*35*/].f_10);
							if (Global_1888801[iLocal_21 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_21 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_21 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_21 /*35*/].f_12);
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
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5201.7f, -2134.3f, -13.7f, 0f, 0f, 0f, 116.361f, 111.159f, 70f, "m_volRathskellerFork");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rathskeller Fork - m_volRancherInner Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_17, -5193.958f, -2150.221f, 14.60039f, 0f, 0f, 43.94339f, 30.9764f, 20.35678f, 20.57744f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, -5183.694f, -2097.742f, 14.60039f, 0f, 0f, 44.16594f, 20.21152f, 34.85038f, 20.57744f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, -5158.286f, -2115.092f, 14.60039f, 0f, 0f, 47.64177f, 8.714133f, 1.633199f, 20.57744f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, -5230.49f, -2124.006f, 14.60039f, 0f, 0f, 44.16594f, 15.32629f, 8.306676f, 20.57744f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, -5157.303f, -2119.695f, 14.60039f, 0f, 0f, 44.16594f, 12.39145f, 8.306676f, 20.57744f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, -5213.393f, -2110.535f, 14.60039f, 0f, 0f, 44.16594f, 34.53635f, 13.98279f, 20.57744f);
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rathskeller Fork - m_volRancherWarn Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_16, iLocal_17);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, -67.73256f, -399.212f, 72.24845f, 0f, 0f, 52.56716f, 42.4006f, 47.27523f, 14.85572f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, -5186.615f, -2154.339f, 14.60039f, 0f, 0f, 46.12168f, 36.16204f, 4.894577f, 20.57744f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, -5194.527f, -2122.047f, 14.60039f, 0f, 0f, 43.94178f, 70.70334f, 56.27375f, 20.57744f);
		sLocal_15 = "RATHSKELLER_FORK";
		LAW::_CREATE_GUARD_ZONE(sLocal_15);
		LAW::_0x8C598A930F471938(sLocal_15, iLocal_14);
		LAW::_0x35815F372D43E1E5(sLocal_15, iLocal_17);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_15, iLocal_16);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_15, -5194.81f, -2107.68f, 11.39f);
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
	__LIB_2__::func_812(783, iLocal_16, 1);
	__LIB_2__::func_812(784, iLocal_16, 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_16, 2, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_16, 3, 1, __LIB_0__::func_120(784));
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_21, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_21, 4);
		__LIB_0__::func_25(iLocal_21, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_74(iLocal_21);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_21);
		__LIB_2__::func_819(iLocal_21);
		__LIB_2__::func_755(iLocal_21);
		if (!__LIB_2__::func_756(iLocal_21, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_74(int iParam0)
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_15);
}

