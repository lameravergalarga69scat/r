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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_16 = 1;
	iLocal_17 = 20000;
	iLocal_20 = vScriptParam_0.x;
	iLocal_18 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_19 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_19)
		{
			iLocal_19 = 0;
			__LIB_1__::func_947(iLocal_20, &iLocal_18);
			switch (iLocal_18)
			{
				case 0:
					iLocal_18 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_20);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_20)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_20), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_20));
					iVar1 = __LIB_1__::func_885(iLocal_20);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_21 = (MISC::GET_GAME_TIMER() + iLocal_17);
					iLocal_18 = 2;
					break;
				case 2:
					if (func_11() || iLocal_21 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_20);
						iLocal_21 = (MISC::GET_GAME_TIMER() + iLocal_17);
						iLocal_18 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_20) || iLocal_21 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_20);
						iLocal_21 = (MISC::GET_GAME_TIMER() + iLocal_17);
						iLocal_18 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_20) || iLocal_21 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_20);
						iLocal_21 = (iLocal_17 + MISC::GET_GAME_TIMER());
						iLocal_18 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_20)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_20), 4) && !iLocal_21 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_20) || iLocal_21 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_20, 4);
								iLocal_21 = (iLocal_17 + MISC::GET_GAME_TIMER());
								iLocal_18 = 7;
							}
							Jump @791; //curOff = 459
							if (iLocal_21 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_20);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_20);
								__LIB_1__::func_886(iLocal_20);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_18 = 8;
							}
							Jump @791; //curOff = 558
							__LIB_5__::func_251(iLocal_20);
							__LIB_0__::func_18();
							iLocal_18 = 9;
							Jump @791; //curOff = 575
							__LIB_1__::func_889(&Global_1898004);
							__LIB_5__::func_252(iLocal_20, &Global_1898004);
							iLocal_18 = 10;
							Jump @791; //curOff = 600
							__LIB_2__::func_749(iLocal_20);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_20, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_18 = 11;
							Jump @791; //curOff = 670
							if (func_38(iLocal_20))
							{
								iLocal_19 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_20);
							__LIB_1__::func_891(iLocal_20);
							__LIB_0__::func_24(iLocal_20, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_20 /*35*/].f_10);
							if (Global_1888801[iLocal_20 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_20 /*35*/].f_11);
							}
							Jump @791; //curOff = 772
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_20 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_20 /*35*/].f_12);
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
	iLocal_14 = Global_1888801[35 /*35*/].f_4;
	VOLUME::_0xB469CFD9E065EB99(iLocal_14, 8);
	iLocal_15 = POPULATION::_CREATE_POPZONE_FROM_VOLUME(iLocal_14);
	POPULATION::SET_POPZONE_POPULATION_SET(iLocal_15, joaat("OFW_ENLISTED_MIX"));
	POPULATION::_0x7E6BC0B94F5928F0(iLocal_15, 19, 19);
	POPULATION::_0x08892122769770D5(iLocal_15, true);
	POPULATION::_0x0F1861101C9A9944(iLocal_15, true);
	return true;
}

void func_14(int iParam0)
{
	__LIB_9__::func_707(1223148325, 1);
}

bool func_38(int iParam0)
{
	iParam0 = iParam0;
	if (__LIB_0__::func_2() == -1)
	{
		func_55();
		if (__LIB_9__::func_19(35) || __LIB_0__::func_730(35))
		{
			if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				LAW::_0xC310239ACCCF5579();
			}
		}
	}
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_20, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_20, 4);
		__LIB_0__::func_25(iLocal_20, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_78(iLocal_20);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_20);
		__LIB_2__::func_819(iLocal_20);
		__LIB_2__::func_755(iLocal_20);
		if (!__LIB_2__::func_756(iLocal_20, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_55()
{
	if (__LIB_3__::func_751(52) || __LIB_2__::func_774(52))
	{
		if (iLocal_16 == 1)
		{
			__LIB_1__::func_948(385812466, 0, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1201452352, 0, 0, 0, 0, 0, 0, 0);
			iLocal_16 = 0;
		}
	}
	else if (iLocal_16 == 1)
	{
		__LIB_1__::func_948(385812466, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(-1201452352, 1, 0, 0, 0, 0, 0, 0);
		iLocal_16 = 0;
	}
}

void func_78(int iParam0)
{
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
	if (POPULATION::_IS_POPZONE_VALID(iLocal_15))
	{
		POPULATION::_DELETE_SCRIPT_POPZONE(iLocal_15);
	}
	iParam0 = iParam0;
}

