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
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_16 = 20000;
	iLocal_19 = vScriptParam_0.x;
	iLocal_17 = vScriptParam_0.z;
	__LIB_17__::func_699();
	__LIB_0__::func_11();
	iLocal_18 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_18)
		{
			iLocal_18 = 0;
			__LIB_1__::func_947(iLocal_19, &iLocal_17);
			switch (iLocal_17)
			{
				case 0:
					iLocal_17 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_19);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_19)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_19), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_19));
					iVar1 = __LIB_1__::func_885(iLocal_19);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_20 = (MISC::GET_GAME_TIMER() + iLocal_16);
					iLocal_17 = 2;
					break;
				case 2:
					if (func_11() || iLocal_20 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_19);
						iLocal_20 = (MISC::GET_GAME_TIMER() + iLocal_16);
						iLocal_17 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_19) || iLocal_20 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_19);
						iLocal_20 = (MISC::GET_GAME_TIMER() + iLocal_16);
						iLocal_17 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_19) || iLocal_20 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_19);
						iLocal_20 = (iLocal_16 + MISC::GET_GAME_TIMER());
						iLocal_17 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_19)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_19), 4) && !iLocal_20 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_19) || iLocal_20 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_19, 4);
								iLocal_20 = (iLocal_16 + MISC::GET_GAME_TIMER());
								iLocal_17 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_20 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_19);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_19);
								func_28(iLocal_19);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_17 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_19);
							__LIB_0__::func_18();
							iLocal_17 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_5__::func_252(iLocal_19, &Global_1898004);
							iLocal_17 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_19);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_19, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_17 = 11;
							Jump @788; //curOff = 667
							if (__LIB_4__::func_806(iLocal_19))
							{
								iLocal_18 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_19);
							__LIB_1__::func_891(iLocal_19);
							__LIB_0__::func_24(iLocal_19, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_19 /*35*/].f_10);
							if (Global_1888801[iLocal_19 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_19 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							__LIB_14__::func_278(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_19 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_19 /*35*/].f_12);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!__LIB_14__::func_278(iVar0))
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

bool func_11()
{
	iLocal_14 = Global_1888801[124 /*35*/].f_4;
	iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Ridgewood - m_volHorsePens");
	VOLUME::_0xBCE668AAF83608BE(iLocal_15, -4793.275f, -2684.797f, -12.52667f, 0f, 0f, 2.828959f, 21.53875f, 14.61882f, 2.730403f);
	VOLUME::_0x39816F6F94F385AD(iLocal_15, -4827.138f, -2733.15f, -13.91682f, 0f, 0f, 53.75946f, 20.16043f, 53.09112f, 4.69964f);
	return true;
}

void func_28(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_2__::func_812(889, iLocal_15, 1);
	__LIB_2__::func_812(890, iLocal_15, 0);
	__LIB_2__::func_812(891, iLocal_15, 0);
	__LIB_2__::func_812(892, iLocal_15, 0);
}

