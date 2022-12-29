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
	fLocal_7 = 1f;
	fLocal_8 = 1f;
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
					__LIB_0__::func_11(iLocal_18);
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
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								func_25();
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
							__LIB_0__::func_11(iLocal_18, &Global_1898004);
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

void func_25()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_19__::func_67(5, 1);
}

bool func_38(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	func_53();
	func_54();
	return false;
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
		func_74(iLocal_18);
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
	int iVar0;
	bool bVar1;
	if (__LIB_0__::func_768(5, 4))
	{
		return;
	}
	if (__LIB_0__::func_768(5, 32))
	{
		return;
	}
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_4__::func_55(5));
	bVar1 = false;
	if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		return;
	}
	if (__LIB_19__::func_66(5) && !(__LIB_0__::func_770(3, 16) && !__LIB_0__::func_113()))
	{
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "Lights"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "Lights", 0);
			bVar1 = true;
		}
	}
	else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "Lights"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "Lights", true);
		bVar1 = true;
	}
	if (bVar1)
	{
		__LIB_6__::func_661(5, 4);
	}
	else
	{
		__LIB_6__::func_661(5, 32);
	}
}

void func_54()
{
	if (__LIB_0__::func_768(5, 64))
	{
		return;
	}
	if (__LIB_19__::func_66(5) && !(__LIB_0__::func_770(3, 16) && !__LIB_0__::func_113()))
	{
		__LIB_0__::func_401(-2035177903);
		__LIB_0__::func_401(-1147247388);
		__LIB_1__::func_948(-19313405, 1, 0f, 0, 0, 0, 0, 0);
	}
	else
	{
		__LIB_0__::func_400(-2035177903);
		__LIB_0__::func_400(-1147247388);
		__LIB_1__::func_948(-19313405, 0, 0f, 0, 0, 0, 0, 0);
	}
	__LIB_6__::func_661(5, 64);
}

void func_74(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_6__::func_660(5, 4);
	__LIB_6__::func_660(5, 32);
	__LIB_6__::func_660(5, 64);
}

