#region Local Var
	int iLocal_0[4] = { 0, 0, 0, 0 };
	char* sLocal_5[4] = { NULL, NULL, NULL, NULL };
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_17 = 1f;
	fLocal_18 = 1f;
	iLocal_24 = 20000;
	iLocal_27 = vScriptParam_0.x;
	iLocal_25 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_26 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_26)
		{
			iLocal_26 = 0;
			__LIB_1__::func_947(iLocal_27, &iLocal_25);
			switch (iLocal_25)
			{
				case 0:
					iLocal_25 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_27);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_27)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_27), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_27));
					iVar1 = __LIB_1__::func_885(iLocal_27);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_28 = (MISC::GET_GAME_TIMER() + iLocal_24);
					iLocal_25 = 2;
					break;
				case 2:
					if (__LIB_0__::func_0() || iLocal_28 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_27);
						iLocal_28 = (MISC::GET_GAME_TIMER() + iLocal_24);
						iLocal_25 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_27) || iLocal_28 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_27);
						iLocal_28 = (MISC::GET_GAME_TIMER() + iLocal_24);
						iLocal_25 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_27) || iLocal_28 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_27);
						iLocal_28 = (iLocal_24 + MISC::GET_GAME_TIMER());
						iLocal_25 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_27)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_27), 4) && !iLocal_28 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_27) || iLocal_28 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_27, 4);
								iLocal_28 = (iLocal_24 + MISC::GET_GAME_TIMER());
								iLocal_25 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_28 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_27);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_27);
								__LIB_1__::func_886(iLocal_27);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_25 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_27);
							__LIB_0__::func_18();
							iLocal_25 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_2__::func_747(iLocal_27, &Global_1898004);
							iLocal_25 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_27);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_27, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_25 = 11;
							Jump @788; //curOff = 667
							if (__LIB_0__::func_58(iLocal_27))
							{
								iLocal_26 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_27);
							__LIB_1__::func_891(iLocal_27);
							__LIB_0__::func_24(iLocal_27, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_27 /*35*/].f_10);
							if (Global_1888801[iLocal_27 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_27 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_27 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_27 /*35*/].f_12);
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
	__LIB_0__::func_68(-1382959706, 0, 0);
	__LIB_0__::func_68(-76557983, 0, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(-1382959706, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(-76557983, 0);
	iLocal_0[0] = INTERIOR::GET_INTERIOR_AT_COORDS(-1420.278f, 1171.593f, 226.7f);
	iLocal_0[1] = INTERIOR::GET_INTERIOR_AT_COORDS(-1440.127f, 1189.548f, 226.4f);
	iLocal_0[2] = INTERIOR::GET_INTERIOR_AT_COORDS(-1418.762f, 1197.32f, 225.4f);
	iLocal_0[3] = INTERIOR::GET_INTERIOR_AT_COORDS(-1393.259f, 1181.42f, 222.2f);
	sLocal_5[0] = "mil_cave_lights_01";
	sLocal_5[1] = "mil_cave_lights_02";
	sLocal_5[2] = "mil_cave_lights_03";
	sLocal_5[3] = "mil_cave_lights_04";
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_27, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_27, 4);
		__LIB_0__::func_25(iLocal_27, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		__LIB_0__::func_11(iLocal_27);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_27);
		__LIB_2__::func_819(iLocal_27);
		__LIB_2__::func_755(iLocal_27);
		if (!__LIB_2__::func_756(iLocal_27, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

