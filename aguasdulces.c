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
	bool bLocal_16 = false;
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
	__LIB_18__::func_224();
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
						__LIB_1__::func_886(iLocal_20);
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
								__LIB_1__::func_886(iLocal_20);
								__LIB_1__::func_886(iLocal_20);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_18 = 8;
							}
							Jump @788; //curOff = 555
							func_31(iLocal_20);
							__LIB_0__::func_18();
							iLocal_18 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_5__::func_252(iLocal_20, &Global_1898004);
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
							Jump @788; //curOff = 769
							__LIB_10__::func_850(iVar0);
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
						while (!__LIB_10__::func_850(iVar0))
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
	iLocal_14 = Global_1888801[57 /*35*/].f_4;
	iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER(1411.869f, -7032.472f, 71.50774f, 0f, 0f, -25.35288f, 142.4495f, 133.1683f, 45.87774f);
	return true;
}

void func_31(int iParam0)
{
	__LIB_2__::func_759(0.8f, 0.2f, 0f, 0f);
	func_51(iParam0, 0);
}

bool func_38(int iParam0)
{
	func_51(iParam0, 1);
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_1__::func_948(600328988, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(917663984, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(2103662619, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1028100880, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(935758146, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1241853375, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(475714155, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(782268150, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-8447820, 1, 0, 0, 0, 0, 0, 0);
		}
		else if (__LIB_2__::func_774(40))
		{
			__LIB_1__::func_948(600328988, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(917663984, 0, 0, 0, 1, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(600328988, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(917663984, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(2103662619, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1028100880, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(935758146, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1241853375, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(475714155, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(782268150, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-8447820, 0, 0, 0, 1, 0, 0, 0);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_15))
	{
		if (__LIB_0__::func_21(57, 33554432))
		{
			if (!bLocal_16)
			{
				PATHFIND::_0xF2A2177AC848B3A8(iLocal_15, 0, 1);
				bLocal_16 = true;
			}
		}
		else if (bLocal_16)
		{
			PATHFIND::_0xF2A2177AC848B3A8(iLocal_15, 1, 1);
			bLocal_16 = false;
		}
	}
	return false;
}

void func_51(int iParam0, bool bParam1)
{
	struct<16> Var0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (PLAYER::_0x5B7B97E99F84138B(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (Global_1415404)
	{
		if (!__LIB_1__::func_929("region_town_lockdown_generic"))
		{
			Global_1415404 = SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("REGION_TOWN_LOCKDOWN_GENERIC")) > 0;
		}
		return;
	}
	if (Global_1935630.f_22 || Global_1934266.f_61)
	{
		return;
	}
	if (func_90(iParam0))
	{
		if (!bParam1)
		{
		}
		Global_1415404 = 1;
		StringCopy(&(Var0.f_10), "region_town_lockdown_generic", 32);
		Var0.f_15 = 1;
		Var0 = iParam0;
		Var0.f_3 = bParam1;
		Var0.f_14 = 1024;
		__LIB_4__::func_709(Var0, 0);
	}
}

bool func_90(int iParam0)
{
	if (((((!(__LIB_0__::func_21(iParam0, 8) || __LIB_0__::func_21(iParam0, 2)) || !__LIB_1__::func_205(Global_35, __LIB_0__::func_559(iParam0), 1, 0)) || !__LIB_0__::func_730(iParam0)) || __LIB_4__::func_497()) || Global_1934266.f_56) || ((iParam0 != 38 || __LIB_0__::func_293(45)) && (__LIB_2__::func_806(1, 0) || __LIB_2__::func_806(8, 0))))
	{
		return false;
	}
	return true;
}

