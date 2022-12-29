#region Local Var
	bool bLocal_0 = false;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	float fLocal_8 = 0f;
	float fLocal_9 = 0f;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	iLocal_15 = 20000;
	iLocal_18 = vScriptParam_0.x;
	iLocal_16 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_17 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_17)
		{
			iLocal_17 = 0;
			__LIB_1__::func_947(iLocal_18, &iLocal_16);
			switch (iLocal_16)
			{
				case 0:
					iLocal_16 = 1;
					break;
				case 1:
					func_5(iLocal_18);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_18)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_18), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_18));
					iVar1 = __LIB_1__::func_885(iLocal_18);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_19 = (MISC::GET_GAME_TIMER() + iLocal_15);
					iLocal_16 = 2;
					break;
				case 2:
					if (__LIB_0__::func_0() || iLocal_19 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_18);
						iLocal_19 = (MISC::GET_GAME_TIMER() + iLocal_15);
						iLocal_16 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_18) || iLocal_19 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_18);
						iLocal_19 = (MISC::GET_GAME_TIMER() + iLocal_15);
						iLocal_16 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_18) || iLocal_19 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_18);
						iLocal_19 = (iLocal_15 + MISC::GET_GAME_TIMER());
						iLocal_16 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_18)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_18), 4) && !iLocal_19 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_18) || iLocal_19 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_18, 4);
								iLocal_19 = (iLocal_15 + MISC::GET_GAME_TIMER());
								iLocal_16 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_19 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_18);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_765(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_18);
								__LIB_1__::func_886(iLocal_18);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_16 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_18);
							__LIB_0__::func_18();
							iLocal_16 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_2__::func_747(iLocal_18, &Global_1898004);
							iLocal_16 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_18);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_18, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_16 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_18))
							{
								iLocal_17 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_18);
							__LIB_1__::func_891(iLocal_18);
							__LIB_0__::func_24(iLocal_18, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_18 /*35*/].f_10);
							if (Global_1888801[iLocal_18 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_18 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_18 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_18 /*35*/].f_12);
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

void func_5(int iParam0)
{
	iParam0 = iParam0;
	__LIB_4__::func_389(2051127971, 1, 1);
}

bool func_38(int iParam0)
{
	iParam0 = iParam0;
	func_53();
	return true;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_18, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_18, 4);
		__LIB_0__::func_25(iLocal_18, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		__LIB_1__::func_886(iLocal_18);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_18);
		__LIB_2__::func_819(iLocal_18);
		__LIB_2__::func_755(iLocal_18);
		if (!__LIB_2__::func_756(iLocal_18, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_53()
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_0__::func_898(356365161) || __LIB_0__::func_898(-1187950766))
	{
		bVar0 = true;
	}
	if (bVar0 != bLocal_0)
	{
		if (bVar0)
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(-739334986))
			{
				STREAMING::_REQUEST_IMAP(-739334986);
			}
		}
		else if (STREAMING::_IS_IMAP_ACTIVE(-739334986))
		{
			STREAMING::_REMOVE_IMAP(-739334986);
		}
		bLocal_0 = bVar0;
	}
}

