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
	iLocal_15 = -1;
	iLocal_16 = 20000;
	iLocal_19 = vScriptParam_0.x;
	iLocal_17 = vScriptParam_0.z;
	func_1();
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
						func_14(iLocal_19);
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
							Jump @791; //curOff = 459
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
								__LIB_1__::func_886(iLocal_19);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_17 = 8;
							}
							Jump @791; //curOff = 558
							__LIB_5__::func_251(iLocal_19);
							__LIB_0__::func_18();
							iLocal_17 = 9;
							Jump @791; //curOff = 575
							__LIB_1__::func_889(&Global_1898004);
							__LIB_5__::func_252(iLocal_19, &Global_1898004);
							iLocal_17 = 10;
							Jump @791; //curOff = 600
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
							Jump @791; //curOff = 670
							if (func_38(iLocal_19))
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
							Jump @791; //curOff = 772
							func_42(iVar0);
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

bool func_11()
{
	iLocal_14 = Global_1888801[93 /*35*/].f_4;
	if (__LIB_0__::func_298(0) == __LIB_5__::func_436(26) || __LIB_0__::func_298(0) == __LIB_5__::func_436(22))
	{
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-679384918))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-679384918, false);
		}
	}
	else if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-679384918))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-679384918, true);
	}
	if (__LIB_0__::func_298(0) == __LIB_5__::func_436(22))
	{
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(472704883))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(472704883, false);
		}
	}
	else if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(472704883))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(472704883, true);
	}
	return true;
}

void func_14(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_298(0) == Global_1835011[26 /*74*/].f_1)
		{
			return;
		}
	}
	else if (func_48(93, 255))
	{
		return;
	}
	iLocal_15 = AUDIO::GET_SOUND_ID();
	if (iLocal_15 == -1)
	{
	}
	bVar0 = true;
	if (__LIB_0__::func_2() != -1)
	{
		bVar0 = false;
	}
	__LIB_1__::func_948(1595076728, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(1439227364, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-1072865219, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(1620578985, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(1606293329, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(1913469935, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-1664744776, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-1375427275, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(1970779164, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-2018125672, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(530930529, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(1299101427, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(23338719, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(785447352, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-461544174, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-764395272, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-368185289, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-656945717, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(248030525, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(606588923, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(825059846, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-964389706, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-152106360, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(473912616, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-1099020037, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(1799856783, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(1518993684, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(426802898, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-908387367, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(1909255102, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-415917122, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(409697833, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-1649837912, bVar0, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-1874862635, bVar0, 0f, 0, 0, 0, 1, 0);
	iVar1 = VOLUME::_CREATE_VOLUME_BOX(1010.465f, -1772.747f, 54.474f, 0f, 0f, 0f, 46.182f, 45.55f, 29.43f);
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = ENTITY::_0x84CCF9A12942C83D(iVar1, iVar2, 3, 1, joaat("P_WIN_JTXL_DIRTY01X"), 0);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2);
		PHYSICS::SET_DISABLE_FRAG_DAMAGE(iVar5, true);
		PHYSICS::SET_DISABLE_BREAKING(iVar5, true);
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
}

bool func_38(int iParam0)
{
	if (iLocal_15 != -1)
	{
		if (__LIB_0__::func_898(473295046) && !__LIB_0__::func_293(45))
		{
			if (__LIB_1__::func_205(Global_35, iLocal_14, 0, 0))
			{
				if (AUDIO::_0x84848E1C0FC67DBB(iLocal_15))
				{
					AUDIO::_0xDCF5BA95BBF0FABA(iLocal_15, "MAIN_LOOP", 1011.224f, -1766.506f, 46.5833f, "FIRE_SMOLDER_LARGE_SOUNDSET", 0, 0, 0);
				}
			}
			else if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_15))
			{
				AUDIO::_0x3210BCB36AF7621B(iLocal_15);
			}
		}
	}
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_19, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_19, 4);
		__LIB_0__::func_25(iLocal_19, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_80(iLocal_19);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_19);
		__LIB_2__::func_819(iLocal_19);
		__LIB_2__::func_755(iLocal_19);
		if (!__LIB_2__::func_756(iLocal_19, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

bool func_48(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	iVar0 = func_86(&(Global_1146941[iParam1 /*12*/].f_4), iParam0, 30, 1, 7);
	if (iVar0 == 1)
	{
		return true;
	}
	return false;
}

void func_80(int iParam0)
{
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_14))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_14);
		POPULATION::_0xA1CFB35069D23C23(iLocal_14);
	}
	if (iLocal_15 != -1)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_15))
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_15);
		}
		AUDIO::RELEASE_SOUND_ID(iLocal_15);
	}
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-679384918))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-679384918, false);
	}
	iParam0 = iParam0;
}

int func_86(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = (iParam1 / iParam2);
	iVar1 = (iParam1 % iParam2);
	iVar2 = (BUILTIN::SHIFT_LEFT(1, iParam3) - 1);
	iVar3 = 0;
	iVar4 = (iParam3 * iVar1);
	iVar3 = ((*uParam0)[iVar0] && BUILTIN::SHIFT_LEFT(iVar2, iVar4));
	iVar3 = BUILTIN::SHIFT_RIGHT(iVar3, iVar4);
	return iVar3;
}

