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
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = 20000;
	iLocal_17 = vScriptParam_0.x;
	iLocal_15 = vScriptParam_0.z;
	__LIB_19__::func_48();
	__LIB_0__::func_11();
	iLocal_16 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_16)
		{
			iLocal_16 = 0;
			__LIB_1__::func_947(iLocal_17, &iLocal_15);
			switch (iLocal_15)
			{
				case 0:
					iLocal_15 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_17);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_17)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_17), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_17));
					iVar1 = __LIB_1__::func_885(iLocal_17);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_18 = (MISC::GET_GAME_TIMER() + iLocal_14);
					iLocal_15 = 2;
					break;
				case 2:
					if (__LIB_0__::func_0() || iLocal_18 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_17);
						iLocal_18 = (MISC::GET_GAME_TIMER() + iLocal_14);
						iLocal_15 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_17) || iLocal_18 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_17);
						iLocal_18 = (MISC::GET_GAME_TIMER() + iLocal_14);
						iLocal_15 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_17) || iLocal_18 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_17);
						iLocal_18 = (iLocal_14 + MISC::GET_GAME_TIMER());
						iLocal_15 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_17)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_17), 4) && !iLocal_18 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_17) || iLocal_18 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_17, 4);
								iLocal_18 = (iLocal_14 + MISC::GET_GAME_TIMER());
								iLocal_15 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_18 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_17);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_0__::func_11(iLocal_17);
								__LIB_1__::func_886(iLocal_17);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_15 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_17);
							__LIB_0__::func_18();
							iLocal_15 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_2__::func_747(iLocal_17, &Global_1898004);
							iLocal_15 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_17);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_17, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_15 = 11;
							Jump @788; //curOff = 667
							if (__LIB_0__::func_0(iLocal_17))
							{
								iLocal_16 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_17);
							__LIB_1__::func_891(iLocal_17);
							__LIB_0__::func_24(iLocal_17, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_17 /*35*/].f_10);
							if (Global_1888801[iLocal_17 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_17 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							__LIB_17__::func_499(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_17 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_17 /*35*/].f_12);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!__LIB_17__::func_499(iVar0))
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

void func_14(int iParam0)
{
	iParam0 = iParam0;
	__LIB_17__::func_498();
}

