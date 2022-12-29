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
	bool bLocal_15 = false;
	bool bLocal_16 = false;
	bool bLocal_17 = false;
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
								__LIB_1__::func_886(iLocal_21);
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
							__LIB_2__::func_747(iLocal_21, &Global_1898004);
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
							Jump @788; //curOff = 769
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
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(207.2673f, 990.9026f, 190.0828f, 0f, 0f, 0f, 28.40839f, 27.79798f, 6.675867f, "volDeborahWorkingAudio");
	return true;
}

bool func_38(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_205(Global_35, iLocal_14, 1, 0))
		{
			if (!bLocal_15)
			{
				if (AUDIO::LOAD_STREAM("DINO_MIDSTAGE", "267765497_leadin_front"))
				{
					bLocal_15 = true;
				}
				return false;
			}
			if (__LIB_1__::func_187(39) && !__LIB_10__::func_643(4))
			{
				if (bLocal_16)
				{
					if (PED::IS_PED_SHOOTING(Global_35))
					{
						if (!bLocal_17)
						{
							AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_Dino_Lady_Working_In_Barn", false, true);
							if (AUDIO::IS_STREAM_PLAYING(AUDIO::_0x0556C784FA056628("DINO_MIDSTAGE", "267765497_leadin_front")))
							{
								AUDIO::STOP_STREAM(AUDIO::_0x0556C784FA056628("DINO_MIDSTAGE", "267765497_leadin_front"));
							}
							bLocal_17 = true;
						}
					}
					else if (bLocal_17)
					{
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_Dino_Lady_Working_In_Barn", true, true);
						bLocal_17 = false;
					}
				}
				if (!__LIB_0__::func_181())
				{
					if (__LIB_0__::func_895(__LIB_12__::func_609(39)) < 1)
					{
						AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_Dino_Lady_Working_In_Barn", true, true);
						AUDIO::PLAY_STREAM_FROM_POSITION(Global_1347702[40 /*49*/].f_24, AUDIO::_0x0556C784FA056628("DINO_MIDSTAGE", "267765497_leadin_front"));
						bLocal_16 = true;
						__LIB_1__::func_532(__LIB_12__::func_609(39), 1);
					}
				}
				else if (__LIB_5__::func_297(__LIB_12__::func_609(39)) < 1)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_Dino_Lady_Working_In_Barn", true, true);
					AUDIO::PLAY_STREAM_FROM_POSITION(Global_1347702[40 /*49*/].f_24, AUDIO::_0x0556C784FA056628("DINO_MIDSTAGE", "267765497_leadin_front"));
					bLocal_16 = true;
					__LIB_7__::func_448(__LIB_12__::func_609(39), 1);
				}
			}
		}
	}
	return false;
}

