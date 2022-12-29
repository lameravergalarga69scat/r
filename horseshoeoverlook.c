#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	bool bLocal_3 = false;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	float fLocal_11 = 0f;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	iLocal_1 = -1;
	fLocal_11 = 1f;
	fLocal_12 = 1f;
	iLocal_18 = 20000;
	iLocal_21 = vScriptParam_0.x;
	iLocal_19 = vScriptParam_0.z;
	__LIB_6__::func_859();
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
					if (func_15(iLocal_21) || iLocal_22 < MISC::GET_GAME_TIMER())
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
							Jump @791; //curOff = 459
							if (iLocal_22 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_21);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_765(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_21);
								__LIB_1__::func_886(iLocal_21);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_19 = 8;
							}
							Jump @791; //curOff = 558
							__LIB_1__::func_886(iLocal_21);
							__LIB_0__::func_18();
							iLocal_19 = 9;
							Jump @791; //curOff = 575
							__LIB_1__::func_889(&Global_1898004);
							__LIB_2__::func_747(iLocal_21, &Global_1898004);
							iLocal_19 = 10;
							Jump @791; //curOff = 600
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
							Jump @791; //curOff = 670
							if (func_38(iLocal_21))
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
							Jump @791; //curOff = 772
							__LIB_6__::func_689(iVar0);
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
						while (!__LIB_6__::func_689(iVar0))
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
	iLocal_0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Horseshoe - m_volTown");
	VOLUME::_0xBCE668AAF83608BE(iLocal_0, -131.6045f, -34.30135f, 102.2093f, 0f, 0f, -24.47213f, 46.71921f, 37.52021f, 13.16044f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_0, -117.99f, -66.781f, 100f, 0f, 0f, 94f, 16.719f, 19.52f, 13.16044f);
	return true;
}

bool func_15(int iParam0)
{
	if (AUDIO::LOAD_STREAM("horseshoe_overlook", "es_camp_memory_sounds"))
	{
		iLocal_1 = AUDIO::_0x0556C784FA056628("horseshoe_overlook", "es_camp_memory_sounds");
		iLocal_2 = MISC::GET_GAME_TIMER() + 30000;
		return true;
	}
	return false;
}

bool func_38(int iParam0)
{
	if (((__LIB_1__::func_205(Global_35, iLocal_0, 1, 0) && iLocal_2 < MISC::GET_GAME_TIMER()) && __LIB_6__::func_688(__LIB_2__::func_954())) && __LIB_4__::func_503(6, 18))
	{
		AUDIO::PLAY_STREAM_FRONTEND(iLocal_1);
		AUDIO::SET_AMBIENT_ZONE_STATE("AZ_camp_horseshoe_overlook_Endless_Summer", true, true);
		bLocal_3 = true;
		iLocal_2 = MISC::GET_GAME_TIMER() + 30000;
	}
	if (bLocal_3)
	{
		if (!AUDIO::IS_STREAM_PLAYING(iLocal_1))
		{
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_camp_horseshoe_overlook_Endless_Summer", false, true);
			bLocal_3 = false;
		}
	}
	return true;
}

