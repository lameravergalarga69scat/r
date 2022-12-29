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
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
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
	iLocal_17 = 20000;
	iLocal_20 = vScriptParam_0.x;
	iLocal_18 = vScriptParam_0.z;
	__LIB_18__::func_782();
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
						__LIB_0__::func_11(iLocal_20);
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
							Jump @788; //curOff = 456
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
								__LIB_17__::func_488(iLocal_20);
								__LIB_0__::func_11(iLocal_20);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_18 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_20);
							__LIB_0__::func_18();
							iLocal_18 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_0__::func_11(iLocal_20, &Global_1898004);
							iLocal_18 = 10;
							Jump @788; //curOff = 597
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
							Jump @788; //curOff = 667
							if (__LIB_7__::func_427(iLocal_20))
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
							Jump @788; //curOff = 769
							__LIB_17__::func_487(iVar0);
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
						while (!__LIB_17__::func_487(iVar0))
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
	if (__LIB_0__::func_2() == -1)
	{
		iLocal_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2251.375f, -1915.508f, 117.618f, 0f, 0f, -66.588f, 7.714f, 7.649f, 7.583f, "Tall Trees Trapper - m_volTrapper");
		iLocal_10 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2250.752f, -1916.897f, 117.618f, 0f, 0f, -66.562f, 1.423f, 2.798f, 4.201f, "Tall Trees Trapper - m_volTrapperPrompt");
		iLocal_11 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2251.891f, -1914.261f, 117.618f, 0f, 0f, -66.562f, 2.755f, 4.58f, 4.201f, "Tall Trees Trapper - m_volTrapperOfflimits");
	}
	return true;
}

