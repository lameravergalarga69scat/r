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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = -1;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 1;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = -1;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 1;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = -1;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 1;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_44 = 20000;
	iLocal_47 = vScriptParam_0.x;
	iLocal_45 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_46 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_46)
		{
			iLocal_46 = 0;
			__LIB_1__::func_947(iLocal_47, &iLocal_45);
			switch (iLocal_45)
			{
				case 0:
					iLocal_45 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_47);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_47)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_47), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_47));
					iVar1 = __LIB_1__::func_885(iLocal_47);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_48 = (MISC::GET_GAME_TIMER() + iLocal_44);
					iLocal_45 = 2;
					break;
				case 2:
					if (__LIB_0__::func_0() || iLocal_48 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_47);
						iLocal_48 = (MISC::GET_GAME_TIMER() + iLocal_44);
						iLocal_45 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_47) || iLocal_48 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_47);
						iLocal_48 = (MISC::GET_GAME_TIMER() + iLocal_44);
						iLocal_45 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_47) || iLocal_48 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_47);
						iLocal_48 = (iLocal_44 + MISC::GET_GAME_TIMER());
						iLocal_45 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_47)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_47), 4) && !iLocal_48 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_47) || iLocal_48 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_47, 4);
								iLocal_48 = (iLocal_44 + MISC::GET_GAME_TIMER());
								iLocal_45 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_48 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_47);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								func_27(iLocal_47);
								__LIB_1__::func_886(iLocal_47);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_45 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_47);
							__LIB_0__::func_18();
							iLocal_45 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_2__::func_747(iLocal_47, &Global_1898004);
							iLocal_45 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_47);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_47, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_45 = 11;
							Jump @788; //curOff = 667
							if (__LIB_4__::func_806(iLocal_47))
							{
								iLocal_46 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_47);
							__LIB_1__::func_891(iLocal_47);
							__LIB_0__::func_24(iLocal_47, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_47 /*35*/].f_10);
							if (Global_1888801[iLocal_47 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_47 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_47 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_47 /*35*/].f_12);
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

void func_14(int iParam0)
{
	iParam0 = iParam0;
	__LIB_3__::func_124(398241243, 1);
	__LIB_3__::func_124(90310950, 1);
	__LIB_3__::func_124(178754137, 1);
	__LIB_3__::func_124(441201058, 1);
	__LIB_3__::func_124(-1035861617, 1);
	__LIB_3__::func_124(-721377524, 1);
	__LIB_3__::func_124(-1514256248, 1);
	__LIB_3__::func_124(1381081784, 1);
	__LIB_3__::func_124(2145058250, 1);
	__LIB_3__::func_124(64259291, 1);
	OBJECT::_0x1BC47A9DEDC8DF5D(398241243, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(90310950, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(178754137, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(441201058, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(-1035861617, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(-721377524, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(-1514256248, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(1381081784, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(2145058250, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(64259291, 0);
}

void func_27(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_1__::func_948(-1217326873, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-382798750, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1907171172, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1603339033, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(612230150, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-215219869, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1624230601, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1473624189, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(104193638, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-221005918, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(34778421, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-263452248, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1194059083, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(638645553, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1120193049, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-2022127005, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1715573010, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1754631325, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(119948423, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(351789098, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(-1907171172, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1603339033, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1217326873, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-382798750, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(612230150, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-215219869, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1624230601, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1473624189, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(104193638, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-221005918, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(34778421, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-263452248, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1194059083, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(638645553, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1120193049, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-2022127005, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1715573010, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1754631325, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(119948423, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(351789098, 0, 0, 0, 1, 0, 0, 0);
		}
	}
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_47, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_47, 4);
		__LIB_0__::func_25(iLocal_47, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_74(iLocal_47);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_47);
		__LIB_2__::func_819(iLocal_47);
		__LIB_2__::func_755(iLocal_47);
		if (!__LIB_2__::func_756(iLocal_47, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_74(int iParam0)
{
	iParam0 = iParam0;
	func_128(0);
	__LIB_14__::func_490(&uLocal_14, 0);
	__LIB_14__::func_490(&uLocal_24, 0);
	__LIB_14__::func_490(&uLocal_34, 0);
}

void func_128(bool bParam0)
{
	__LIB_5__::func_800(238680582, bParam0);
	__LIB_5__::func_800(1555588463, bParam0);
	__LIB_5__::func_800(-1482639045, bParam0);
	__LIB_5__::func_800(254520182, bParam0);
	__LIB_5__::func_800(1335986638, bParam0);
	__LIB_5__::func_800(joaat("DOOR_STR_WHORE_INT_2"), bParam0);
	__LIB_5__::func_800(-1335647241, bParam0);
	__LIB_5__::func_800(1997650502, bParam0);
	__LIB_5__::func_800(1275780106, bParam0);
	__LIB_5__::func_800(-833560428, bParam0);
	__LIB_5__::func_800(-1601174253, bParam0);
	__LIB_5__::func_800(-1295111793, bParam0);
}

