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
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		NETWORK::_0xFD4272A137703449();
	}
	MISC::_GAME_TRANSITION_MANAGER_INIT(496295564);
	__LIB_17__::func_402(-1);
	__LIB_17__::func_399();
	__LIB_17__::func_426();
	__LIB_16__::func_327(1);
	__LIB_17__::func_403(1);
	__LIB_0__::func_867(0);
	__LIB_17__::func_380(0);
	if (NETWORK::_0xFC4165C9165C166F() && !__LIB_16__::func_302())
	{
		NETWORK::_0x5B9C6AC118FD4774();
	}
	bVar0 = true;
	while (bVar0)
	{
		func_9();
		if (REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
		{
			PLAYER::FORCE_CLEANUP(512);
			func_10();
			bVar0 = false;
		}
		if (func_11())
		{
			PLAYER::FORCE_CLEANUP(2);
			CAM::DO_SCREEN_FADE_OUT(0);
			__LIB_17__::func_427(0);
			bVar0 = false;
		}
		if (__LIB_10__::func_644() == 2)
		{
		}
		else
		{
			bVar0 = false;
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			bVar0 = false;
			bVar1 = true;
		}
		if (bVar0)
		{
			if (func_14())
			{
				PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE"), false);
				PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
			}
			func_15();
		}
		else if (!bVar1 || Global_0.f_14)
		{
			if (func_16() && func_17())
			{
			}
		}
		BUILTIN::WAIT(0);
	}
	if (bVar1 && !Global_0.f_14)
	{
		__LIB_11__::func_882();
	}
	while (__LIB_0__::func_65(&Global_0, 2))
	{
		func_9();
		func_17();
		BUILTIN::WAIT(0);
	}
	func_20();
	while (!func_21())
	{
		func_9();
		BUILTIN::WAIT(0);
	}
	if (__LIB_10__::func_644() == 3 && !REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
	{
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 5000f, 2442122);
	}
	__LIB_17__::func_399();
	func_22();
	MISC::_0x1096603B519C905F("");
	__LIB_0__::func_769();
	MISC::_GAME_TRANSITION_MANAGER_SHUTDOWN();
	UILOG::_0xDA0A30153FCC0FFD();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9()
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case 1355399116:
				break;
			case -1373301352:
				break;
			case 163683216:
				func_34();
				break;
			case 239947537:
				break;
			case -1688530399:
				break;
			case -1832939826:
				Var1 = { Var3 };
				if (SCRIPTS::GET_EVENT_DATA(1, iVar0, &Var1, 2))
				{
					switch (Var1)
					{
						case 0:
							func_34();
							break;
						case 1:
							func_34();
							break;
					}
				}
				break;
			case 1976253964:
				break;
		}
		iVar0++;
	}
}

void func_10()
{
	__LIB_0__::func_319(4);
	__LIB_17__::func_428(joaat("CLIP"), 0);
	__LIB_17__::func_384(4);
}

bool func_11()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case 239947537:
				return true;
		}
		iVar0++;
	}
	return false;
}

bool func_14()
{
	if (__LIB_0__::func_13(32))
	{
		return true;
	}
	if (_NAMESPACE77::_0xC5C395C60B542A3C(1))
	{
		return true;
	}
	return false;
}

void func_15()
{
	int iVar0;
	if (iLocal_18 > 0)
	{
		func_40();
	}
	if (!__LIB_0__::func_382(2))
	{
		__LIB_10__::func_30();
	}
	switch (iLocal_18)
	{
		case 0:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("main")) <= 0)
			{
				MISC::SET_FADE_IN_AFTER_LOAD(false);
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
				if (__LIB_0__::func_13(32))
				{
					if (__LIB_0__::func_13(8))
					{
						iVar0 = 1;
					}
					else if (__LIB_0__::func_13(16))
					{
						__LIB_10__::func_614(0);
						iVar0 = 0;
						__LIB_0__::func_7(&(Global_1347343.f_11), 512);
					}
					MISC::_COPY_MEMORY(&Global_40, &(Global_2621440[iVar0 /*12066*/]), 12066);
					MISC::_COPY_MEMORY(&Global_12106, &(Global_2645573[iVar0 /*5398*/]), 5398);
					MISC::_COPY_MEMORY(&Global_17504, &(Global_2656370[iVar0 /*3206*/]), 3206);
					MISC::_COPY_MEMORY(&Global_20710, &(Global_2662783[iVar0 /*2408*/]), 2408);
					MISC::_COPY_MEMORY(&Global_23118, &(Global_2667600[iVar0 /*1769*/]), 1769);
					MISC::_COPY_MEMORY(&Global_24887, &(Global_2671139[iVar0 /*1909*/]), 1909);
					MISC::_COPY_MEMORY(&Global_26796, &(Global_2674958[iVar0 /*777*/]), 777);
					MISC::_COPY_MEMORY(&Global_27573, &(Global_2676513[iVar0 /*4501*/]), 4501);
					MISC::_COPY_MEMORY(&Global_32074, &(Global_2685516[iVar0 /*4234*/]), 4234);
					if (iVar0 == 1)
					{
						if (MISC::_0x7CF96F1250EF3221(iVar0))
						{
							MISC::_0x6C7B68D3CE60E8DE(iVar0);
						}
						else if (MISC::_0x7CF96F1250EF3221(0))
						{
							MISC::_0x6C7B68D3CE60E8DE(0);
							__LIB_15__::func_108();
							iVar0 = 0;
						}
						if (__LIB_0__::func_13(32768))
						{
							SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_REPLAYING_MISSION"));
						}
					}
					else
					{
						if (MISC::_0x7CF96F1250EF3221(iVar0))
						{
							if (__LIB_0__::func_13(32768) && __LIB_0__::func_6(Global_1879514.f_1))
							{
								MISC::_0x627B68D9CE6EE8DE(iVar0);
							}
							else
							{
								MISC::_0x6C7B68D3CE60E8DE(iVar0);
							}
							__LIB_15__::func_108();
						}
						else if (MISC::_0x7CF96F1250EF3221(1))
						{
							MISC::_0x6C7B68D3CE60E8DE(1);
							iVar0 = 1;
						}
						if (__LIB_0__::func_13(32768))
						{
							__LIB_1__::func_84(32768);
							func_48();
							func_49();
							SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_REPLAYING_MISSION"));
							HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
							__LIB_16__::func_387(PLAYER::PLAYER_PED_ID());
							MISC::CLEAR_WEATHER_TYPE_PERSIST();
							func_52(__LIB_1__::func_613(Global_1879514.f_1));
							MISC::SET_RANDOM_WEATHER_TYPE(true, true);
							AUDIO::TRIGGER_MUSIC_EVENT("STOP_MUSIC_8S");
						}
						else if (!__LIB_0__::func_13(2))
						{
							MISC::CLEAR_WEATHER_TYPE_PERSIST();
							MISC::SET_RANDOM_WEATHER_TYPE(true, true);
						}
					}
					func_53(iVar0);
					__LIB_1__::func_84(24);
				}
				else if (func_54())
				{
					func_55();
					__LIB_17__::func_404(1);
				}
				func_57();
				if ((!__LIB_0__::func_13(32) && __LIB_0__::func_28()) && !Global_40)
				{
					CLOCK::SET_CLOCK_DATE(1, 0, 1898);
				}
				__LIB_17__::func_405();
				func_22();
				func_60(1);
				func_61(1);
				__LIB_4__::func_839();
				func_63();
				func_64();
				MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(true, 0);
				MISC::_0x1096603B519C905F("");
				__LIB_0__::func_769();
				GRAPHICS::_0xA21AF60C9F99CCC5();
				__LIB_10__::func_592(1);
			}
			break;
		case 1:
			if (__LIB_17__::func_406("main", 1024, &(Global_23[0])))
			{
				func_67();
				__LIB_10__::func_592(2);
			}
			break;
		case 2:
			func_68();
			__LIB_10__::func_592(3);
			break;
		case 3:
			if (Global_43889)
			{
				Global_43889 = 0;
				PLAYER::FORCE_CLEANUP(2);
				__LIB_10__::func_592(4);
			}
			break;
		case 4:
			func_20();
			__LIB_10__::func_592(5);
			break;
		case 5:
			if (func_21())
			{
				if (__LIB_0__::func_13(4096))
				{
					__LIB_10__::func_593(4);
				}
				__LIB_10__::func_592(0);
			}
			break;
	}
}

int func_16()
{
	if (Global_1572887.f_12 == -1)
	{
		if (!__LIB_0__::func_28())
		{
			return 0;
		}
		else if (!__LIB_1__::func_185(0))
		{
			return 0;
		}
		else if (__LIB_8__::func_974())
		{
			return 0;
		}
	}
	if (!Global_21 & 64 != 0)
	{
		return 0;
	}
	if (__LIB_0__::func_13(32898))
	{
		return 0;
	}
	if (__LIB_0__::func_6(Global_1572864.f_8))
	{
		return 0;
	}
	if (Global_1572864.f_21 != 0)
	{
		return 0;
	}
	if (__LIB_0__::func_65(&Global_0, 32))
	{
		if (__LIB_0__::func_65(&Global_0, 2))
		{
			return 1;
		}
		if (__LIB_0__::func_65(&Global_0, 64))
		{
			return 1;
		}
	}
	if (__LIB_0__::func_296(0, 1, 1))
	{
		return 0;
	}
	if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 0))
	{
		return 0;
	}
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		return 0;
	}
	if (MISC::_0x1B065A2BF7953815(0) == 1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (_NAMESPACE77::_0xC5C395C60B542A3C(1))
	{
		return 0;
	}
	if (__LIB_10__::func_644() != 2 && __LIB_10__::func_644() != 3)
	{
		return 0;
	}
	if (__LIB_0__::func_383())
	{
		return 0;
	}
	return 1;
}

int func_17()
{
	if (!__LIB_0__::func_65(&Global_0, 2))
	{
		if (Global_1572887.f_10)
		{
			__LIB_0__::func_380(&Global_0, 1);
			return 0;
		}
		if (!__LIB_0__::func_28())
		{
			__LIB_0__::func_380(&Global_0, 1);
			return 0;
		}
		if (__LIB_0__::func_6(__LIB_0__::func_298(0)))
		{
			return 0;
		}
		if (Global_1879534)
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (__LIB_0__::func_1(Global_1935630, 2048) || __LIB_0__::func_13(38))
		{
			return 0;
		}
		if (MISC::_0x1B065A2BF7953815(0) == 1)
		{
			return 0;
		}
		if (SAVE::_0x3CF46F55C6585590())
		{
			return 0;
		}
		if (Global_1935630.f_2 != Global_40.f_39 || (!Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39))
		{
			return 0;
		}
		if (Global_40.f_7729 != Global_1905941)
		{
			return 0;
		}
		if (__LIB_0__::func_65(&Global_0, 16))
		{
			__LIB_0__::func_380(&Global_0, 16);
			return 0;
		}
		if (Global_1914319.f_18941.f_17)
		{
			return 0;
		}
		if (STREAMING::_0x99F92061EFE908BA())
		{
			return 0;
		}
		func_78(0);
	}
	if (SAVE::_0x3CF46F55C6585590())
	{
		return 0;
	}
	if (MISC::_0x1B065A2BF7953815(0) == 1)
	{
		return 0;
	}
	func_79(0, 0);
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 };
	Global_0.f_14 = 0;
	__LIB_0__::func_47(&Global_0, 4);
	__LIB_0__::func_380(&Global_0, 2);
	__LIB_0__::func_380(&Global_0, 32);
	__LIB_0__::func_380(&Global_0, 64);
	return 1;
}

void func_20()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_23[iVar0], false) && !SCRIPTS::_0x30BED53646C86D11(Global_23[iVar0]))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_23[iVar0]);
		}
		iVar0++;
	}
}

bool func_21()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_23[iVar1], false))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_22()
{
	int iVar0;
	__LIB_10__::func_732(512);
	iVar0 = 0;
	while (iVar0 < 25)
	{
		func_83(iVar0);
		iVar0++;
	}
	DATAFILE::_0x3168BA5D6DECE323();
}

void func_34()
{
	Global_1898077 = 1;
}

void func_40()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;
	int iVar9;
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	switch (iLocal_19)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Global_35 = iVar0;
			}
			func_87(1);
			if (func_88())
			{
				vVar2 = { func_89(&fVar1) };
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					ENTITY::SET_ENTITY_COORDS(iVar0, vVar2, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(iVar0, fVar1);
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				}
				else
				{
					return;
				}
				STREAMING::_0x513F8AA5BF2F17CF(vVar2, 75f, 1);
				iLocal_20 = 0;
				__LIB_10__::func_593(1);
			}
			else
			{
				__LIB_10__::func_593(3);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Global_35 = iVar0;
			}
			if (STREAMING::_0xCF45DF50C7775F2A() || iLocal_20 >= 100)
			{
				iLocal_20 = 0;
				__LIB_10__::func_593(2);
			}
			else
			{
				iLocal_20++;
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Global_35 = iVar0;
			}
			if ((STREAMING::_0xCF45DF50C7775F2A() && STREAMING::_0x0909F71B5C070797()) || iLocal_20 >= 100)
			{
				STREAMING::_0x5A8B01199C3E79C3();
				__LIB_10__::func_593(3);
			}
			else
			{
				iLocal_20++;
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Global_35 = iVar0;
			}
			else
			{
				return;
			}
			if ((__LIB_0__::func_28() && Global_40) && Global_40.f_39 != 0)
			{
				if (func_90(Global_40.f_39))
				{
					__LIB_10__::func_593(4);
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("PLAYER_ZERO") || func_90(joaat("PLAYER_ZERO")))
			{
				__LIB_10__::func_593(4);
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return;
			}
			Global_35 = iVar0;
			__LIB_19__::func_25();
			if (!__LIB_17__::func_407())
			{
				if (__LIB_1__::func_195())
				{
					func_94();
				}
			}
			if (func_88())
			{
				__LIB_10__::func_614(4096);
				__LIB_10__::func_593(5);
			}
			else if (__LIB_0__::func_382(256))
			{
				func_95();
				func_96();
				Global_1894899.f_8 = 1;
				if (func_97(__LIB_0__::func_382(32768)))
				{
					func_99(__LIB_0__::func_61(), &vVar5, &uVar8);
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), vVar5) > 5f)
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar5, false, false, true, true);
					}
					if (func_100(__LIB_0__::func_61()))
					{
						func_101(1, __LIB_0__::func_61());
						__LIB_10__::func_614(4096);
						__LIB_10__::func_593(5);
					}
				}
				else
				{
					iVar9 = __LIB_1__::func_447(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
					if (func_100(iVar9))
					{
						func_101(0, iVar9);
						__LIB_10__::func_614(4096);
						__LIB_10__::func_593(5);
					}
				}
			}
			break;
		case 5:
			if (!Global_40 && !__LIB_0__::func_382(4))
			{
				__LIB_19__::func_417();
			}
			break;
	}
}

void func_48()
{
	func_106();
	func_107();
	__LIB_5__::func_857();
	func_109();
}

void func_49()
{
	Global_1327590.f_9 = -1;
	Global_1327590.f_10.f_11 = 0;
	StringCopy(&(Global_1327590.f_10.f_1), "", 64);
}

void func_52(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (!Global_1879514.f_11)
	{
		iVar0 = __LIB_1__::func_753();
		iVar1 = MISC::GET_HASH_KEY(&cParam0);
		if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
		{
			if (__LIB_0__::func_700(Global_1879514.f_1) == 1)
			{
				__LIB_3__::func_720(5, 1);
			}
			else if (__LIB_0__::func_700(Global_1879514.f_1) == 8 && (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(Global_1879514.f_1) /*49*/].f_12, 1) || __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(Global_1879514.f_1) /*49*/].f_12, 33554432)))
			{
				__LIB_3__::func_720(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), 3);
	}
}

void func_53(int iParam0)
{
	__LIB_3__::func_98(Global_2621440[iParam0 /*12066*/].f_9.f_14);
	LAW::_SET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
	LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
	COMPAPP::_0xCCB4635A071FB62D();
	if (Global_40.f_9.f_20 > 0)
	{
		LAW::_0x0E3BDEED21BEB945(PLAYER::GET_PLAYER_INDEX(), Global_40.f_9.f_20);
	}
}

bool func_54()
{
	if (__LIB_0__::func_13(8192))
	{
		return true;
	}
	return false;
}

void func_55()
{
	func_119();
	func_120();
	func_121();
	__LIB_11__::func_891();
	func_123();
	func_124();
	func_125();
	func_126();
	func_127();
}

void func_57()
{
	func_128(&(Global_40.f_40));
}

void func_60(bool bParam0)
{
	func_22();
	if (bParam0)
	{
		func_130(3, 488600546, 18006);
		func_130(5, joaat("POST_OFFICE"), 18112);
		func_130(6, -1662293291, 18342);
		func_130(7, 1515062182, 19014);
		func_130(9, joaat("AMBIENTVIGNETTES"), 19388);
		func_130(10, -1408350261, 19685);
		func_130(11, -1226891409, 19768);
		func_130(13, 2146271685, 19985);
		func_130(12, joaat("TRAIN_ROUTES"), 20428);
		func_130(15, -798635963, 20659);
		func_130(16, -1516564258, 21706);
		func_130(17, joaat("COLLECTIBLES"), 21912);
		func_130(18, joaat("SATCHEL_ELEMENTS"), 22382);
		func_130(19, -1393214753, 22486);
		func_130(20, -898400110, 23564);
		func_130(21, -1132418307, 25070);
		func_130(22, -1336593721, 25235);
		func_130(23, 1308589725, 25592);
	}
	__LIB_10__::func_614(512);
}

void func_61(int iParam0)
{
	bool bVar0;
	var uVar1[150];
	var uVar152[150];
	var uVar303[150];
	int iVar454;
	bVar0 = __LIB_0__::func_2() == -1;
	__LIB_10__::func_732(65536);
	if (bVar0)
	{
		func_148();
	}
	if (__LIB_0__::func_58())
	{
		return;
	}
	func_150();
	func_151();
	func_152();
	VOLUME::_0x748C5F51A18CB8F0(0);
	func_153(&uVar1, &(Global_1894899.f_172), " ");
	func_153(&uVar152, &(Global_1894899.f_173), " - Town");
	func_153(&uVar303, &(Global_1894899.f_174), " - Wanted");
	VOLUME::_0x748C5F51A18CB8F0(1);
	func_154(1);
	if (__LIB_0__::func_2() == -1)
	{
		func_155(&(Global_1894899.f_170));
		func_156();
		func_157(&(Global_1894899.f_171));
		func_158();
	}
	func_159();
	VOLUME::_0x748C5F51A18CB8F0(0);
	Global_1894899.f_176 = 0;
	Global_1894899.f_177 = 0;
	Global_1894899.f_178 = 0;
	Global_1894899.f_179 = 0;
	Global_1894899.f_180 = 0;
	Global_1894899.f_181 = 0;
	iVar454 = 0;
	while (iVar454 < 130)
	{
		func_160(&(Global_1894899.f_170), iVar454, uVar1[iVar454], uVar152[iVar454], uVar303[iVar454]);
		func_161(&(Global_1894899.f_171), iVar454);
		iVar454++;
	}
	func_162();
	VOLUME::_0x748C5F51A18CB8F0(1);
	__LIB_17__::func_408(&(Global_1894899.f_170));
	__LIB_17__::func_408(&(Global_1894899.f_171));
	func_165();
	func_166();
	__LIB_10__::func_614(65536);
}

void func_63()
{
	__LIB_0__::func_22(256);
}

void func_64()
{
	func_168();
	func_169(0);
	func_169(-538880323);
	func_169(1497516462);
	func_169(405586984);
	func_169(356365161);
	func_169(1177464213);
	func_169(-1674179981);
	func_169(1376646519);
	func_169(1822001510);
	func_169(1306158345);
	func_169(-1414537028);
	func_169(-1666278201);
	func_169(-150493654);
	func_169(-1524512402);
	func_169(198200492);
	func_169(-1164215952);
	func_169(-1236261996);
	func_169(817925178);
	func_169(1151197909);
	func_169(-1556423728);
	func_169(-144653976);
	func_169(-351362068);
	func_169(-939114198);
	func_169(-1318987693);
	func_169(-853383233);
	func_169(-1824738758);
	func_169(-2020023971);
	func_169(1216784232);
	func_169(2019386373);
	func_169(-1831552326);
	func_169(-1151084372);
	func_169(-644722288);
	func_169(-1717960576);
	func_169(-545450213);
	func_169(-919512195);
	func_169(1954026328);
	func_169(-524145696);
	func_169(-1764522338);
	func_169(-333135263);
	func_169(1766284049);
	func_169(-1825294305);
	func_169(1500064347);
	func_169(-789397228);
	func_169(-978957786);
	func_169(945612176);
	func_169(1522511407);
	func_169(704802028);
	func_169(-75024673);
	func_169(1250636944);
	func_169(522677506);
	func_170(1691618738);
	func_170(657241756);
	func_171();
	func_170(1582370975);
	func_170(-330120947);
}

void func_67()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	SCRIPTS::REQUEST_SCRIPT("long_update");
	SCRIPTS::REQUEST_SCRIPT("medium_update");
	SCRIPTS::REQUEST_SCRIPT("short_update");
	SCRIPTS::REQUEST_SCRIPT("flow_controller");
	SCRIPTS::REQUEST_SCRIPT("player_horse");
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	while (!bVar0)
	{
		if (!bVar1)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("long_update"))
			{
				Global_23[1] = SCRIPTS::START_NEW_SCRIPT("long_update", 1300);
				bVar1 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("long_update");
			}
		}
		if (!bVar2)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("medium_update"))
			{
				Global_23[2] = SCRIPTS::START_NEW_SCRIPT("medium_update", 1300);
				bVar2 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("medium_update");
			}
		}
		if (!bVar3)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("short_update"))
			{
				Global_23[3] = SCRIPTS::START_NEW_SCRIPT("short_update", 1300);
				bVar3 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("short_update");
			}
		}
		if (!bVar4)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("flow_controller"))
			{
				Global_23[4] = SCRIPTS::START_NEW_SCRIPT("flow_controller", 1024);
				bVar4 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("flow_controller");
			}
		}
		if (!bVar5)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("player_horse"))
			{
				Global_23[5] = SCRIPTS::START_NEW_SCRIPT("player_horse", 1024);
				bVar5 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("player_horse");
			}
		}
		if (Global_1572887.f_12 == -1)
		{
			if ((((bVar1 && bVar2) && bVar3) && bVar4) && bVar5)
			{
				bVar0 = true;
			}
		}
		else if ((((bVar1 && bVar2) && bVar3) && bVar4) && bVar5)
		{
			bVar0 = true;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("long_update");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("medium_update");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("short_update");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("flow_controller");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("player_horse");
}

void func_68()
{
	BRAIN::_0xA32B0B05EFF75730();
	Global_43889 = 0;
}

void func_78(bool bParam0)
{
	if (!__LIB_0__::func_65(&Global_0, 2))
	{
		func_176(0, 0);
		SAVE::_0x62C9EB51656D68CE(-189896212);
		__LIB_0__::func_47(&Global_0, 2);
		if (bParam0)
		{
			__LIB_0__::func_47(&Global_0, 32);
		}
		__LIB_0__::func_380(&Global_0, 1);
	}
}

void func_79(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (iParam0 == 0 && __LIB_0__::func_13(32768))
	{
		return;
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_176(1, bParam1);
	}
	MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
	MISC::_COPY_MEMORY(&(Global_2621440[iParam0 /*12066*/]), &Global_40, 12066);
	MISC::_COPY_MEMORY(&(Global_2645573[iParam0 /*5398*/]), &Global_12106, 5398);
	MISC::_COPY_MEMORY(&(Global_2656370[iParam0 /*3206*/]), &Global_17504, 3206);
	MISC::_COPY_MEMORY(&(Global_2662783[iParam0 /*2408*/]), &Global_20710, 2408);
	MISC::_COPY_MEMORY(&(Global_2667600[iParam0 /*1769*/]), &Global_23118, 1769);
	MISC::_COPY_MEMORY(&(Global_2671139[iParam0 /*1909*/]), &Global_24887, 1909);
	MISC::_COPY_MEMORY(&(Global_2674958[iParam0 /*777*/]), &Global_26796, 777);
	MISC::_COPY_MEMORY(&(Global_2676513[iParam0 /*4501*/]), &Global_27573, 4501);
	MISC::_COPY_MEMORY(&(Global_2685516[iParam0 /*4234*/]), &Global_32074, 4234);
	if (__LIB_0__::func_13(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = __LIB_0__::func_23();
	}
}

void func_83(int iParam0)
{
	if (!__LIB_0__::func_66(iParam0))
	{
		return;
	}
	if (Global_1914270[iParam0] != 0)
	{
		DATAFILE::_DATAFILE_UNLOAD(Global_1914270[iParam0]);
		Global_1914270[iParam0] = 0;
	}
}

void func_87(bool bParam0)
{
	Global_1934765.f_20 = 0;
	Global_1934765 = 0;
	Global_1934765.f_287 = 0;
	while (!func_179(1, bParam0))
	{
	}
	__LIB_10__::func_735();
	Global_1934765 = 0;
}

bool func_88()
{
	if (__LIB_0__::func_13(128) && !__LIB_0__::func_13(4096))
	{
		return true;
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(__LIB_10__::func_733(joaat("BENCHMARK"))))
	{
		return true;
	}
	if (__LIB_0__::func_13(32))
	{
		return false;
	}
	if (Global_40)
	{
		return false;
	}
	return true;
}

Vector3 func_89(float fParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_175(Global_40.f_9.f_7, 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 1))
	{
		*fParam0 = Global_40.f_9.f_13;
		return Global_40.f_9.f_7;
	}
	if (__LIB_0__::func_28())
	{
		if (__LIB_0__::func_13(2))
		{
			*fParam0 = __LIB_17__::func_430();
			return __LIB_17__::func_431();
		}
		else
		{
			return Global_40.f_9.f_7;
		}
	}
	else if (__LIB_0__::func_13(32))
	{
		*fParam0 = Global_40.f_9.f_13;
		return Global_40.f_9.f_7;
	}
	return vVar0;
}

bool func_90(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			PED::_REMOVE_PED_FROM_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), true, false);
			return false;
		}
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return false;
	}
	PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), iParam0, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	func_185(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0);
	__LIB_12__::func_5(iParam0, -1);
	Global_40.f_39 = iParam0;
	Global_1935630.f_2 = iParam0;
	__LIB_5__::func_801(2, 0, 2, 0, 0);
	return true;
}

void func_94()
{
	Global_1900383.f_443 = 1;
}

void func_95()
{
	bool bVar0;
	int iVar1;
	if (__LIB_0__::func_58())
	{
		return;
	}
	__LIB_1__::func_511(8);
	__LIB_17__::func_432(Global_1897952.f_35);
	__LIB_19__::func_418(Global_1897952.f_35);
	Global_1897952.f_35++;
	if (Global_1897952.f_35 >= 17)
	{
		Global_1897952.f_35 = 0;
		bVar0 = true;
	}
	if (Global_1897952.f_36 != -1)
	{
		if (Global_1897952.f_36 != __LIB_1__::func_898())
		{
			func_196(Global_1897952.f_36);
		}
		return;
	}
	if (bVar0)
	{
		iVar1 = __LIB_0__::func_979(Global_36);
		if (iVar1 < 0 || iVar1 >= 17)
		{
			return;
		}
		if (__LIB_1__::func_898() != iVar1)
		{
			Global_1897952.f_37 = 1;
			if (func_196(iVar1))
			{
				return;
			}
		}
		if ((!Global_1897952.f_37 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1897952.f_42, false)) && __LIB_1__::func_898() != -1)
		{
			func_196(__LIB_1__::func_898());
		}
		Global_1897952.f_37 = 0;
	}
}

void func_96()
{
	if (__LIB_0__::func_2() == -1)
	{
		if (func_198())
		{
			__LIB_6__::func_215();
		}
	}
	if (Global_1894899 & 64 != 0)
	{
		__LIB_17__::func_445();
		__LIB_0__::func_300(0);
	}
	func_202();
	__LIB_19__::func_419();
	__LIB_19__::func_26();
}

bool func_97(bool bParam0)
{
	if (!Global_40)
	{
		return false;
	}
	if (!__LIB_0__::func_28())
	{
		return false;
	}
	if (__LIB_0__::func_58())
	{
		return false;
	}
	if (__LIB_0__::func_13(2))
	{
		return false;
	}
	if (bParam0)
	{
		return false;
	}
	if (!__LIB_1__::func_441())
	{
		return false;
	}
	if (__LIB_1__::func_195())
	{
		return false;
	}
	if (_NAMESPACE77::_0xC5C395C60B542A3C(1))
	{
		return false;
	}
	if (Global_1572864.f_21 != 0)
	{
		return false;
	}
	if (Global_40.f_9 == 6 || Global_40.f_9 == 3)
	{
		return false;
	}
	return true;
}

void func_99(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	if (!__LIB_0__::func_20(iParam0))
	{
		*uParam1 = { Global_36 };
		if (!Global_1935630.f_12)
		{
			*uParam2 = ENTITY::GET_ENTITY_HEADING(Global_35);
		}
		return;
	}
	switch (iParam0)
	{
		case 40:
			*uParam1 = { -600.8126f, 2679.079f, 323.538f };
			*uParam2 = 279.6308f;
			return;
		case 56:
			*uParam1 = { 486f, 2215.8f, 246.9f };
			*uParam2 = 84.159f;
			return;
		case 78:
			*uParam1 = { 2928.327f, 1356.631f, 43.5035f };
			*uParam2 = 261.1208f;
			return;
		case 82:
			*uParam1 = { 2560.459f, 777.5193f, 82.2433f };
			*uParam2 = 291.2065f;
			return;
		case 38:
			*uParam1 = { -800.244f, -1269.308f, 42.5502f };
			*uParam2 = 174.6141f;
			return;
		case 37:
			*uParam1 = { -1692.456f, -1425.278f, 88.5471f };
			*uParam2 = 44.6246f;
			return;
		case 95:
			*uParam1 = { 1698.547f, -1393.736f, 44.893f };
			*uParam2 = 289.3106f;
			return;
		case 105:
			*uParam1 = { 1274.799f, -1279.981f, 74.8681f };
			*uParam2 = 245.3242f;
			return;
		case 93:
			*uParam1 = { 1015.804f, -1316.683f, 55.1469f };
			*uParam2 = 181.2442f;
			return;
		case 5:
			*uParam1 = { 2557.408f, -1202.299f, 53.0907f };
			*uParam2 = 261.1247f;
			return;
		case 8:
			*uParam1 = { 3289.2f, -1275.795f, 44.6127f };
			*uParam2 = 163f;
			return;
		case 35:
			*uParam1 = { 353.8f, 1473f, 179.7f };
			*uParam2 = 46.6903f;
			return;
		case 92:
			*uParam1 = { 2983.202f, 441.7647f, 51.6148f };
			*uParam2 = 27.5833f;
			return;
		case 76:
			*uParam1 = { -250.1652f, 789.0698f, 118.9147f };
			*uParam2 = 88.1256f;
			return;
		case 65:
			*uParam1 = { 482.1f, 660.2f, 117.4f };
			*uParam2 = 144.2493f;
			return;
		case 68:
			*uParam1 = { -805.894f, 305.9081f, 94.4141f };
			*uParam2 = 28.5394f;
			return;
		case 69:
			*uParam1 = { 1429.8f, 319.9f, 88.6f };
			*uParam2 = 280.9084f;
			return;
		case 75:
			*uParam1 = { -365.4675f, -333.9249f, 87.8648f };
			*uParam2 = 239.3198f;
			return;
		case 26:
			*uParam1 = { -1780.331f, -426.5923f, 154.897f };
			*uParam2 = 74.77f;
			return;
		case 22:
			*uParam1 = { -2557.081f, 491.937f, 142.7487f };
			*uParam2 = 177.5235f;
			return;
		case 110:
			*uParam1 = { -1966.645f, -1574.229f, 115.4183f };
			*uParam2 = 177.3636f;
			return;
		case 32:
			*uParam1 = { 3343.871f, -629.7566f, 43.894f };
			*uParam2 = 197.4755f;
			return;
		case 57:
			*uParam1 = { 1471f, -7120f, 77f };
			*uParam2 = 331.1575f;
			return;
		case 120:
			*uParam1 = { -3716.447f, -2622.405f, -14.9813f };
			*uParam2 = 312.5245f;
			return;
		case 115:
			*uParam1 = { -5607f, -3059.301f, 1.8f };
			*uParam2 = -44.3f;
			return;
		case 117:
			*uParam1 = { -5239.2f, -3472.7f, -21.7f };
			*uParam2 = 90f;
			return;
		case 43:
			*uParam1 = { -1320.65f, 2424.004f, 307.8811f };
			*uParam2 = 69.8643f;
			return;
		case 71:
			*uParam1 = { -118.6397f, -32.2501f, 94.7409f };
			*uParam2 = 91.0078f;
			return;
		case 58:
			*uParam1 = { 1418.897f, -7329.16f, 80.562f };
			*uParam2 = 26.5179f;
			return;
		case 98:
			*uParam1 = { 689.6768f, -1222.049f, 43.7435f };
			*uParam2 = 167.6425f;
			return;
		case 6:
			*uParam1 = { 2048.825f, -852.7946f, 41.6127f };
			*uParam2 = 89.9021f;
			return;
		case 18:
			*uParam1 = { -1715.61f, -84.36f, 181.88f };
			*uParam2 = 0f;
			return;
		case 19:
			*uParam1 = { -1515.809f, -477.6617f, 142.8707f };
			*uParam2 = 108.7463f;
			return;
		case 23:
			*uParam1 = { -1066.092f, -584.9856f, 80.8338f };
			*uParam2 = 170.7164f;
			return;
		case 24:
			*uParam1 = { -2455.33f, 831.4f, 140.4909f };
			*uParam2 = 30.7991f;
			return;
		case 27:
			*uParam1 = { -1929.773f, 291.1429f, 166.0626f };
			*uParam2 = 1.2131f;
			return;
		case 49:
			*uParam1 = { -1838.605f, 1312.883f, 220.5665f };
			*uParam2 = 54.1507f;
			return;
		case 30:
			*uParam1 = { 2488.379f, -438.0566f, 40.7284f };
			*uParam2 = 3.9426f;
			return;
		case 31:
			*uParam1 = { 2863.12f, -218.5451f, 41.4376f };
			*uParam2 = 26.5179f;
			return;
		case 122:
			*uParam1 = { -3404.329f, -3293.104f, -6.8233f };
			*uParam2 = 227.0484f;
			return;
		case 33:
			*uParam1 = { 584.8f, 1683f, 187.7f };
			*uParam2 = 26.5179f;
			return;
		case 34:
			*uParam1 = { 223.3f, 996.3f, 189.7f };
			*uParam2 = 218.9453f;
			return;
		case 83:
			*uParam1 = { 2520.18f, 2266.464f, 177.2689f };
			*uParam2 = 170f;
			return;
		case 55:
			*uParam1 = { 1691.5f, 1508f, 146.6f };
			*uParam2 = 297.128f;
			return;
		case 116:
			*uParam1 = { -5213.7f, -2140.6f, 11.8f };
			*uParam2 = 286.744f;
			return;
		case 39:
			*uParam1 = { -1212.897f, -1940.406f, 41.5543f };
			*uParam2 = 271.54f;
			return;
		case 50:
			*uParam1 = { 688.6671f, 2229.267f, 221.7181f };
			*uParam2 = 28.1904f;
			return;
		case 52:
			*uParam1 = { 537.9389f, 3004.24f, 485.7947f };
			*uParam2 = 91.2925f;
			return;
		case 54:
			*uParam1 = { 1942.625f, 1965.863f, 261.5498f };
			*uParam2 = 151.5668f;
			return;
		case 45:
			*uParam1 = { -1396.671f, 1149.936f, 223.108f };
			*uParam2 = 24.5906f;
			return;
		case 46:
			*uParam1 = { -1968.04f, 2158.48f, 328.57f };
			*uParam2 = 0f;
			return;
		case 48:
			*uParam1 = { 718.4495f, 3508.114f, 587.7103f };
			*uParam2 = 249.96f;
			return;
		case 59:
			*uParam1 = { 971.3845f, -6763.39f, 42.8703f };
			*uParam2 = 346.4123f;
			return;
		case 60:
			*uParam1 = { 1178.995f, -7233.543f, 78.9764f };
			*uParam2 = 153.8034f;
			return;
		case 28:
			*uParam1 = { -1304.624f, 406.447f, 95.5907f };
			*uParam2 = 255.3416f;
			return;
		case 62:
			*uParam1 = { 724.3393f, -443.4879f, 78.9597f };
			*uParam2 = 236.3249f;
			return;
		case 66:
			*uParam1 = { 1122f, 482.2f, 94.7f };
			*uParam2 = 42.3615f;
			return;
		case 70:
			*uParam1 = { -76.048f, -401.04f, 70.225f };
			*uParam2 = 316.8146f;
			return;
		case 74:
			*uParam1 = { -600.4578f, 523.9606f, 96.2824f };
			*uParam2 = 79.6536f;
			return;
		case 80:
			*uParam1 = { 2852.53f, 1666.46f, 128.67f };
			*uParam2 = 135.3297f;
			return;
		case 81:
			*uParam1 = { 2641.525f, 2223.522f, 158.1051f };
			*uParam2 = 312.4187f;
			return;
		case 87:
			*uParam1 = { 2313.349f, 353.842f, 65.0149f };
			*uParam2 = 0f;
			return;
		case 119:
			*uParam1 = { -4690.065f, -3731.79f, 11.9774f };
			*uParam2 = 197.302f;
			return;
		case 94:
			*uParam1 = { 1455.848f, -1812.212f, 54.8037f };
			*uParam2 = 304.2492f;
			return;
		case 97:
			*uParam1 = { 677.98f, -821.6f, 48.3f };
			*uParam2 = 0f;
			return;
		case 99:
			*uParam1 = { 1263.5f, -385.8f, 98.6f };
			*uParam2 = 241.3119f;
			return;
		case 100:
			*uParam1 = { 1371.805f, -858.002f, 68.513f };
			*uParam2 = 35.9944f;
			return;
		case 101:
			*uParam1 = { 1185.041f, -212.0238f, 101.1f };
			*uParam2 = 114.1645f;
			return;
		case 1:
			*uParam1 = { 1888f, -745.2f, 41.8f };
			*uParam2 = 155.9022f;
			return;
		case 2:
			*uParam1 = { 1945.44f, -688.74f, 50.83f };
			*uParam2 = 127.4476f;
			return;
		case 104:
			*uParam1 = { 1117.25f, -1315.29f, 64.328f };
			*uParam2 = 0f;
			return;
		case 106:
			*uParam1 = { 1379.382f, -2087.341f, 51.5847f };
			*uParam2 = 255.7824f;
			return;
		case 107:
			*uParam1 = { -2574.174f, -1366.599f, 149.3313f };
			*uParam2 = 175.5364f;
			return;
		case 111:
			*uParam1 = { -1669.9f, -2097.6f, 45.0918f };
			*uParam2 = 0f;
			return;
		case 112:
			*uParam1 = { -2371.444f, -1604.031f, 152.6511f };
			*uParam2 = 10.8752f;
			return;
		case 79:
			*uParam1 = { 2376.457f, 1287.451f, 110.0213f };
			*uParam2 = 14.4916f;
			return;
		case 109:
			if (NETWORK::NETWORK_IS_IN_SESSION())
			{
				*uParam1 = { -2354.916f, -808.9133f, 157.759f };
				*uParam2 = 100.556f;
			}
			else
			{
				*uParam1 = { -2408.241f, -939.9655f, 160.1905f };
				*uParam2 = 157.281f;
			}
			return;
		case 16:
			*uParam1 = { -2145.34f, 599.7288f, 117.0818f };
			*uParam2 = 24.052f;
			return;
		case 4:
			*uParam1 = { 2331.1f, -739.5853f, 41.62f };
			*uParam2 = 121f;
			return;
		case 9:
			*uParam1 = { 1825.357f, -1813.989f, 47.0702f };
			*uParam2 = 218.5782f;
			return;
		case 36:
			*uParam1 = { -32.4394f, 1129.326f, 167.0201f };
			*uParam2 = 353f;
			return;
		case 127:
			*uParam1 = { -1484.448f, -2344.049f, 42.0182f };
			*uParam2 = 295.5278f;
			return;
		case 125:
			*uParam1 = { -3970.96f, -2227.629f, -7.9601f };
			*uParam2 = 4.8f;
			return;
		case 118:
			*uParam1 = { -4107.593f, -3315.498f, 36.3123f };
			*uParam2 = 148.2941f;
			return;
		case 129:
			*uParam1 = { -5300.958f, -3608.817f, -14.6678f };
			*uParam2 = 71.7035f;
			return;
		case 114:
			*uParam1 = { -6028.044f, -3379.058f, -14.9946f };
			*uParam2 = 5.5075f;
			return;
		case 77:
			*uParam1 = { 1797.451f, -96.17f, 55.2f };
			*uParam2 = 64.7894f;
			return;
		case 96:
			*uParam1 = { 1350.713f, -2253.611f, 50.6595f };
			*uParam2 = 132.3174f;
			return;
		case 29:
			*uParam1 = { -1792.309f, 628.2485f, 128.1326f };
			*uParam2 = 39.9216f;
			return;
		case 126:
			*uParam1 = { -2534.852f, -2474.868f, 62.043f };
			*uParam2 = 300.0005f;
			return;
		case 42:
			*uParam1 = { -404.0206f, 1711.73f, 214.8277f };
			*uParam2 = 24.0467f;
			return;
		case 64:
			*uParam1 = { 787.7f, 851.3f, 118.5f };
			*uParam2 = 71.0275f;
			return;
		case 72:
			*uParam1 = { 895.032f, 255.553f, 119.95f };
			*uParam2 = 0f;
			return;
		case 89:
			*uParam1 = { 2962.063f, 2204.987f, 165.3194f };
			*uParam2 = 230.7887f;
			return;
		case 91:
			*uParam1 = { 2819.17f, 301.7715f, 48.8212f };
			*uParam2 = 191.6095f;
			return;
		case 86:
			*uParam1 = { 2244.984f, -140.6945f, 46.6572f };
			*uParam2 = 110.0301f;
			return;
		case 51:
			*uParam1 = { 1988.3f, 1187.8f, 171f };
			*uParam2 = 0f;
			return;
		case 53:
			*uParam1 = { 1599.169f, 2198.761f, 321.9284f };
			*uParam2 = 117.4739f;
			return;
		case 73:
			*uParam1 = { 1472.249f, 802.5236f, 99.2177f };
			*uParam2 = 41.9282f;
			return;
		case 84:
			*uParam1 = { 1902.7f, 294.6f, 75.7f };
			*uParam2 = 34.0605f;
			return;
		case 25:
			*uParam1 = { -1570.748f, 247.7129f, 111.5785f };
			*uParam2 = 304.563f;
			return;
		default:
			break;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
	{
		*uParam1 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3) };
		vVar0 = { VOLUME::_GET_VOLUME_ROTATION(Global_1888801[iParam0 /*35*/].f_3) };
		*uParam2 = vVar0.z;
	}
}

bool func_100(int iParam0)
{
	if (__LIB_0__::func_58())
	{
		return true;
	}
	if (!__LIB_0__::func_20(iParam0))
	{
		return true;
	}
	if (__LIB_1__::func_972(iParam0) == 4)
	{
		if (iParam0 != __LIB_0__::func_61())
		{
			return true;
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1888801[iParam0 /*35*/].f_23)))
	{
		return true;
	}
	if (__LIB_1__::func_220(iParam0))
	{
		return true;
	}
	else
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
		{
			if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[iParam0 /*35*/].f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false)))
			{
			}
		}
		if (__LIB_0__::func_21(iParam0, 2))
		{
		}
		if (__LIB_0__::func_21(iParam0, 1))
		{
		}
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iParam0 /*35*/].f_9, false))
		{
		}
	}
	return false;
}

void func_101(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	struct<55> Var6;
	struct<10> Var75;
	struct<16> Var85;
	struct<16> Var101;
	if (__LIB_1__::func_195())
	{
		return;
	}
	if (bParam0 || Global_40.f_9 == 3)
	{
		if ((Global_40.f_9 == 1 || Global_40.f_9 == 2) || Global_40.f_9 == 0)
		{
			vVar2 = { func_212(__LIB_5__::func_864(iParam1), &uVar0, &uVar1) };
			if (!__LIB_0__::func_86(vVar2))
			{
				__LIB_0__::func_322(vVar2);
				Global_40.f_9.f_15 = iParam1;
				__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
				__LIB_5__::func_116();
				__LIB_0__::func_320(6);
				__LIB_0__::func_319(4096);
				__LIB_10__::func_614(16384);
				__LIB_10__::func_732(8192);
				__LIB_0__::func_7(&Global_1935630, 131072);
			}
			else
			{
				iVar5 = __LIB_7__::func_821(iParam1);
				if (__LIB_0__::func_69(iVar5))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(Global_1395601.f_5[iVar5 /*28*/].f_23))
					{
						__LIB_10__::func_732(8192);
						__LIB_10__::func_614(131072);
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1395601.f_5[iVar5 /*28*/].f_24, false))
						{
							__LIB_6__::func_59(iVar5, 524288);
							SCRIPTS::REQUEST_SCRIPT("property_use_core");
							while (!SCRIPTS::HAS_SCRIPT_LOADED("property_use_core"))
							{
								BUILTIN::WAIT(0);
							}
							__LIB_0__::func_7(&Global_1935630, 16384);
							Var6.f_5 = 8;
							Var6.f_14 = -1;
							Var6.f_22 = -1082130432;
							Var6.f_23 = -1;
							Var6.f_34 = 6;
							Var6.f_54.f_4 = 1;
							Var6.f_54.f_5 = 1;
							Var6.f_2 = Global_1395601.f_5[iVar5 /*28*/].f_23;
							Var6.f_15 = 1;
							Global_1395601.f_5[iVar5 /*28*/].f_24 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("property_use_core", &Var6, 69, 6096);
							SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("property_use_core");
							__LIB_0__::func_7(&Global_1935630, 131072);
						}
					}
				}
			}
		}
		else if (Global_40.f_9 == 3)
		{
			__LIB_10__::func_732(8192);
			if (!__LIB_1__::func_929("player_camp"))
			{
				Var75 = 536871424;
				Var85 = { Var75 };
				StringCopy(&(Var85.f_10), "player_camp", 32);
				Var85.f_14 = 6096;
				Var85.f_15 = 1;
				__LIB_4__::func_709(Var85, 0);
				__LIB_0__::func_7(&Global_1935630, 131072);
			}
		}
		else if (Global_40.f_9 == 4)
		{
			if (__LIB_0__::func_979(Global_40.f_9.f_7) != 8)
			{
				__LIB_10__::func_732(8192);
				if (!__LIB_1__::func_929("ambient_load"))
				{
					StringCopy(&(Var101.f_10), "ambient_load", 32);
					Var101.f_14 = 1024;
					Var101.f_15 = 0;
					__LIB_4__::func_709(Var101, 0);
					__LIB_0__::func_7(&Global_1935630, 131072);
				}
			}
			else
			{
				__LIB_0__::func_319(4096);
			}
		}
		if (__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_10__::func_732(8192);
			MISC::_0xA565FAC215CBC77D();
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
	}
	else
	{
		__LIB_0__::func_319(4096);
		if (Global_40)
		{
			__LIB_0__::func_7(&Global_1935630, 131072);
		}
	}
	if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		__LIB_3__::func_98(Global_40.f_9.f_14);
	}
	if (((((((Global_40 && __LIB_0__::func_28()) && __LIB_1__::func_441()) || __LIB_0__::func_13(4096)) && !__LIB_0__::func_382(16384)) && !__LIB_0__::func_382(32768)) && !__LIB_0__::func_382(131072)) && Global_40.f_9 != 3)
	{
		__LIB_1__::func_954(1);
		__LIB_5__::func_116();
		__LIB_0__::func_320(6);
		__LIB_0__::func_319(4096);
	}
}

void func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_5__::func_869(iVar0))
		{
			iVar1 = __LIB_6__::func_90(iVar0);
			if (__LIB_0__::func_30(iVar1))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar1))
				{
					STREAMING::_REMOVE_IMAP(iVar1);
				}
			}
			iVar2 = 0;
			while (iVar2 <= 2)
			{
				if (__LIB_5__::func_992(iVar0, iVar2))
				{
					iVar1 = __LIB_6__::func_100(iVar0, iVar2);
					__LIB_5__::func_993(iVar1, 0);
					if (__LIB_0__::func_30(iVar1))
					{
						if (STREAMING::_IS_IMAP_ACTIVE(iVar1))
						{
							STREAMING::_REMOVE_IMAP(iVar1);
						}
					}
				}
				iVar2++;
			}
			iVar5 = 0;
			while (iVar5 < 27)
			{
				iVar3 = __LIB_6__::func_529(iVar0, iVar5, 0);
				iVar4 = __LIB_6__::func_529(iVar0, iVar5, 1);
				if (__LIB_0__::func_30(iVar3))
				{
					if (STREAMING::_IS_IMAP_ACTIVE(iVar3))
					{
						STREAMING::_REMOVE_IMAP(iVar3);
					}
				}
				if (__LIB_0__::func_30(iVar4))
				{
					if (STREAMING::_IS_IMAP_ACTIVE(iVar4))
					{
						STREAMING::_REMOVE_IMAP(iVar4);
					}
				}
				iVar5++;
			}
		}
		iVar6 = -1;
		__LIB_19__::func_28(-1, 0, 0);
		func_244(-1, &iVar6, 0, 0, 0);
		iVar0++;
	}
}

void func_107()
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	if (PATHFIND::_0x5AC0944C156E5F44("dewclm_nav_camp_00"))
	{
		PATHFIND::_0x527B97C203BB8606("dewclm_nav_camp_00");
	}
	if (PATHFIND::_0x5AC0944C156E5F44("shb_nav_camp_00"))
	{
		PATHFIND::_0x527B97C203BB8606("shb_nav_camp_00");
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_5__::func_869(iVar0))
		{
			iVar9 = 0;
			while (iVar9 <= 2)
			{
				if (__LIB_5__::func_992(iVar0, iVar9))
				{
					Var1 = { __LIB_6__::func_504(iVar0, iVar9) };
					if (PATHFIND::_0x5AC0944C156E5F44(&Var1))
					{
						PATHFIND::_0x527B97C203BB8606(&Var1);
					}
				}
				iVar9++;
			}
		}
		iVar0++;
	}
}

void func_109()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		__LIB_6__::func_424(iVar0, __LIB_1__::func_953(iVar0), 0, 0);
		iVar0++;
	}
}

void func_119()
{
	MISC::_COPY_MEMORY(&Global_40, &Global_2693985, 12066);
}

void func_120()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 771)
	{
		Global_12106[iVar0 /*7*/].f_2 = 0;
		Global_12106[iVar0 /*7*/].f_3 = 0;
		Global_12106[iVar0 /*7*/].f_4 = 0;
		Global_12106[iVar0 /*7*/].f_6 = -15;
		iVar0++;
	}
}

void func_121()
{
	MISC::_COPY_MEMORY(&Global_17504, &Global_2711449, 3206);
}

void func_123()
{
	MISC::_COPY_MEMORY(&Global_23118, &Global_2717063, 1769);
}

void func_124()
{
	MISC::_COPY_MEMORY(&Global_24887, &Global_2718832, 1909);
}

void func_125()
{
	MISC::_COPY_MEMORY(&Global_26796, &Global_2720741, 777);
}

void func_126()
{
	MISC::_COPY_MEMORY(&Global_27573, &Global_2721518, 4501);
}

void func_127()
{
	MISC::_COPY_MEMORY(&Global_32074, &Global_2726019, 4234);
}

void func_128(var uParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (!Global_40)
		{
			return;
		}
		if (!__LIB_0__::func_28())
		{
			return;
		}
	}
	else if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	MISC::_COPY_MEMORY(&(Global_1879534.f_7301), uParam0, 243);
}

void func_129()
{
	var uVar0;
	if (!__LIB_0__::func_720(3, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2017996124, "cashtags/cashtag(name=%x):value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1732391141, "cashtags/modifierTags/modifierTag(name=%x):value");
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_0__::func_66(iParam0))
	{
		return;
	}
	Global_1914270[iParam0] = DATAFILE::_0xCA56DD6AB7A39F64(iParam1);
	if (Global_1914270[iParam0] == 0)
	{
		return;
	}
	Call_Loc(iParam2);
}

void func_131()
{
	var uVar0;
	if (!__LIB_0__::func_720(5, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 192444604, "postOffice/trackedParcels/parcel(name=%x)/parcelItem");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 833374898, "postOffice/trackedParcels/parcel(name=%x)/parcelItem(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1392893044, ":itemID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1214284824, ":itemCnt");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -122991295, "postOffice/trackedParcels/parcel(name=%x)/positiveRepItem(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1902296053, "postOffice/trackedParcels/parcel(name=%x)/negativeRepItem(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 396654621, "postOffice/trackedParcels/parcel(name=%x)/positiveRepItem");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1450050975, "postOffice/trackedParcels/parcel(name=%x)/negativeRepItem");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 724542304, "postOffice/trackedParcels/parcel(name=%x)/flags:isCardSet");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1842227093, "postOffice/trackedParcels/parcel(name=%x)/flags:isLegendaryFish");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1203822305, "postOffice/trackedParcels/parcel(name=%x)/collectibleID:collectibleID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 51132409, "postOffice/trackedParcels/parcel(name=%x)/bit0:CardSet");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1601599279, "postOffice/trackedParcels/parcel(name=%x)/parcelDesc:desc");
}

void func_132()
{
	var uVar0;
	if (!__LIB_0__::func_720(6, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 465794448, func_265(465794448));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -815325344, func_265(-815325344));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -764679122, func_265(-764679122));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1893576372, func_265(-1893576372));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 549615901, func_265(549615901));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 656138654, func_265(656138654));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1661050588, func_265(-1661050588));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -860974647, func_265(-860974647));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 53142323, func_265(53142323));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1970263451, func_265(-1970263451));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -101978662, func_265(-101978662));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 521381610, "region(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2073822671, ":shop");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 701084451, "shelfObj");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -412700030, "shelfObj(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2042406626, "shelfObj(inventoryItem=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2123036120, ":entitySet");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1712903544, ":cabinetSet");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1792709277, ":worldIPL");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 932018906, ":inventoryItem");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1247398698, ":inventoryItemOverride");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2067444527, ":OpenOnly");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2125553816, ":EnforcePickup");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1037227702, ":TargetPosition");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -788806526, "dressingObj");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 791653025, "dressingObj(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1218877676, "dressingObj(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -205647334, ":inventoryItemUnlock");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1986163665, func_265(1986163665));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1976824961, func_265(1976824961));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -199231160, func_265(-199231160));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -908395502, func_265(-908395502));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 421691991, func_265(421691991));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1400723349, func_265(-1400723349));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -562246383, func_265(-562246383));
}

void func_133()
{
	var uVar0;
	if (!__LIB_0__::func_720(7, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1655936658, "campingLocationLists/campingLocationList(district=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1058386141, "campingLocation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -738381918, "campingLocation(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 170329912, ":type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1808799200, ":name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 519988399, "campPos");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -518277907, ":x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1363423190, ":y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 861329762, ":z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1425398587, ":heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1381741405, "campingReqs");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1310625191, ":reqCampMap");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1212650007, "camData");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1692540711, ":camDict");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 506092813, ":shotName");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1800728046, ":camName");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 353205560, ":camHeading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -175720391, "todData");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1980941829, ":time");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1359035379, ":weather");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1067565689, ":horsePos");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -596203594, ":horseHeading");
}

void func_134()
{
	var uVar0;
	if (!__LIB_0__::func_720(9, &Global_1415419))
	{
		return;
	}
	uVar0 = Global_1415419;
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 217083545, "ambientVignettes/authoredLocations"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1275853848, "ambientVignette(%i)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -596571389, "ambientVignette(id=%x)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 165653806, "ambientVignettes/authoredLocations/ambientVignette(id=%x)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -713081767, ":id"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -971201246, "ambientVignettes/authoredLocations/ambientVignette(id=%x)/district(id=%x)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2135093769, "ambientVignettes/authoredLocations/ambientVignette(%i)/district(id=%x)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -641542860, "district(id=%x)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 121239534, "district(%i)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1696282352, "authoredLocation(%i)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1983241935, ":rotation"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1119853910, ":position"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -143463129, ":variation"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1341709093, ":seenDelayHours"))
	{
	}
}

void func_135()
{
	var uVar0;
	if (!__LIB_0__::func_720(10, &(Global_1415419.f_1)))
	{
		return;
	}
	uVar0 = Global_1415419.f_1;
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 0, "ambientVignettes/ambientVignette(id=%x)/tunings(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1, ":triggerDist");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2, ":triggerTime");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 3, ":triggerClose");
}

void func_136()
{
	if (!__LIB_0__::func_720(11, &(Global_1327590.f_19720)))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590.f_19720, 1604180342, "vignetteData/vignettes/vignette(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590.f_19720, -657975000, ":scriptFile");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590.f_19720, 1085469397, ":TODStart");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590.f_19720, -1535977529, ":TODEnd");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590.f_19720, -1060281697, ":size");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590.f_19720, -1800491381, ":weight");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590.f_19720, 35230954, "tag:name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590.f_19720, -1556005224, "companion(%i):hash");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590.f_19720, 1185638752, "required_listeners:num");
}

void func_137()
{
	var uVar0;
	if (!__LIB_0__::func_720(13, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 0, "itemset/item(id=%x)/components/component:category");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1, "itemset/item(id=%x)/components/component:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2, "itemset/item(id=%x)/components/component/texture(type=%x):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 3, "itemset/item(id=%x)/components/component/palette:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 4, "itemset/item(id=%x)/components/component/tint1:val");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 5, "itemset/item(id=%x)/components/component/tint2:val");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 6, "itemset/item(id=%x)/components/component/tint3:val");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1170159957, func_266(1170159957));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -956415585, func_266(-956415585));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1063445323, func_266(1063445323));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1574188157, func_266(-1574188157));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1752779714, func_266(-1752779714));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1004470061, func_266(1004470061));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1218801571, func_266(-1218801571));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1580989022, func_266(-1580989022));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -641661298, func_266(-641661298));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1179965762, func_266(-1179965762));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2059916790, func_266(-2059916790));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1574347650, func_266(-1574347650));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 503961584, func_266(503961584));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -612355112, func_266(-612355112));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 71109396, func_266(71109396));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1918885948, func_266(-1918885948));
}

void func_138()
{
	var uVar0;
	if (!__LIB_0__::func_720(12, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -608279732, "train_routes/junctions/track(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -870751591, "Item(%i)/junction:position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -853103500, "Item(%i)/junction:name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1956866776, "train_routes/train(name=%x)/junction(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1817584937, ":switch");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1830263756, "train_routes/train_stations/train(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 530786772, "Item(%i)/station:track");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1642930494, "Item(%i)/station:position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -959168135, "Item(%i)/station:direction");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1804008182, "Item(%i)/station:isStation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1008236233, "train_routes/train_stations/train(name=%x)/Item(%i)/times");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1882285204, "time(%i)/departure:hour");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 674301239, "time(%i)/departure:minute");
}

void func_139()
{
	var uVar0;
	if (!__LIB_0__::func_720(15, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 723128514, "respawnLocationData/locationList");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 185256713, "respawnLocationData/locationList/Item(%i)/name:locationName");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1748960728, "respawnLocationData/locationList/Item(%i)/name:establisher");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -125049320, "respawnLocationData/locationList/Item(%i)/name:caravan");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 303248275, "respawnLocationData/locationList/Item(%i)/name:isShop");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -786414325, "respawnLocationData/locationList/Item(%i)/playerPos:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1756016266, "respawnLocationData/locationList/Item(%i)/playerPos:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1264284652, "respawnLocationData/locationList/Item(%i)/playerPos:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -566397848, "respawnLocationData/locationList/Item(%i)/animations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 599260570, "animation(%i):ID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1368867264, "animation(%i):dictionary");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -544081353, "respawnLocationData/respawnAnimList");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1783498894, "respawnLocationData/respawnAnimList/anim(%i):name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1222062814, "respawnLocationData/respawnAnimList/anim(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 824674748, "flags:useLooping");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1565562604, "flags:useAction");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -233815074, "flags:useSecondaryUpper");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -477049661, "flags:loopAsSecondary");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -899679477, "flags:disablePhysics");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -62070419, "flags:disableLegIK");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1689379704, "flags:usesHat");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 660059998, "flags:useIdles");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1854764018, "flags:prop");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -391550498, "flags:prop2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1625090004, "flags:rifleLH");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 76128139, "flags:rifleRH");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1148228754, "flags:useHorse");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 939842437, "flags:needInventory");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2055089342, "flags:walkTillBreakout");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1514205951, "idle:dict");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1597176581, "idle:count");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1726340653, "animOverride:loopingDic");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2000223992, "alternateAnimation:dictionary");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1571721931, "respawnLocationData/locationList/Item(%i)/animations/animation(ID=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1999103282, "respawnLocationData/locationList/Item(%i)/animations/animation(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1148748386, "respawnLocationData/locationList/Item(%i)/animations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1737068032, "respawnLocationData/locationList/Item(%i)/animations/animation(%i):ID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -495185473, "playerPos:vector");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1276360309, "playerHeading:float");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1081618208, "camPosition:vector");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1993680615, "camRotation:vector");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 151706215, "camFov:float");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1075437165, "horsePos:vector");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 482880665, "horsePos:heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1818584824, "horsePos:hitched");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2009151738, "time:min");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1565059035, "time:max");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1786497406, "quickCamExit:value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2069884107, "time:weather");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 383290544, "shop:name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -182204340, "tracks:waypointRecording");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2016118713, "tracks:waypointHorse");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1563492982, "flow:before");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1975530226, "flow:after");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 108838230, "flow:beforeRCM");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 181294442, "flow:afterRCM");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1374679209, "respawnLocationData/respawnAnimList/anim(name=%x)/startAnimations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 805008619, "startAnim(%i):name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 908023140, "respawnLocationData/respawnAnimList/anim(name=%x)/idleAnimations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1100654060, "idleAnim(%i):name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 669343399, "respawnLocationData/respawnAnimList/anim(name=%x)/exitAnimations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1312010450, "exitAnim(%i):name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1814582423, "respawnLocationData/regionEstablishers/regionEstablisher(district=%x):establisher");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1318367208, "respawnLocationData/regionEstablishers/regionEstablisher(region=%x):establisher");
}

void func_140()
{
	if (!__LIB_0__::func_720(16, &(Global_1935183.f_30)))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183.f_30, 0, "root/town(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183.f_30, 1, "townStateTag(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183.f_30, 2, "scenarioGroups");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183.f_30, 3, "scenarioGroup(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183.f_30, 4, ":id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183.f_30, 5, ":enable");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183.f_30, 6, "iplGroups");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183.f_30, 7, "iplGroup(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183.f_30, 8, ":id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183.f_30, 9, ":enable");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183.f_30, 10, "schedules/perschar(id=%x):schedule");
}

void func_141()
{
	var uVar0;
	if (!__LIB_0__::func_720(17, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 0, "collectibles/name(id=%x):modelName0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1, "collectibles/name(id=%x):modelName1");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2, "collectibles/name(id=%x):modelName2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 3, "collectibles/name(id=%x):modelName3");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 4, "collectibles/name(id=%x):modelName4");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 5, "collectibles/name(id=%x):inventoryItem0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 6, "collectibles/name(id=%x):inventoryItem1");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 7, "collectibles/name(id=%x):inventoryItem2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 8, "collectibles/name(id=%x):inventoryItem3");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 9, "collectibles/name(id=%x):inventoryItem4");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 10, "collectibles/name(id=%x):inventoryItem5");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 11, "collectibles/name(id=%x):text0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 12, "collectibles/name(id=%x):text1");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 13, "collectibles/name(id=%x):text2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 14, "collectibles/name(id=%x):text3");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 15, "collectibles/name(id=%x):int0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 16, "collectibles/name(id=%x):int1");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 17, "collectibles/name(id=%x):int2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 18, "collectibles/name(id=%x):int3");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 19, "collectibles/name(id=%x):int4");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 20, "collectibles/name(id=%x):int5");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 21, "collectibles/name(id=%x):scenarioType");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 22, "collectibles/name(id=%x):trackedparcels");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 23, "collectibles/name(id=%x):cashTag");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 24, "collectibles/name(id=%x):lootableDef");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 25, "collectibles/name(id=%x):bit0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 26, "collectibles/name(id=%x):bool0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 27, "collectibles/name(id=%x):vector0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 28, "collectibles/name(id=%x):vector1");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 29, "collectibles/name(id=%x):vector2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 30, "collectibles/name(id=%x):vector3");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 31, "collectibles/name(id=%x):heading0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 32, "collectibles/name(id=%x):heading1");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 33, "collectibles/name(id=%x):heading2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 34, "collectibles/name(id=%x):heading3");
}

void func_143()
{
	if (!__LIB_0__::func_720(19, &(Global_1357549.f_576)))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 29309381, "camps/camp(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 1032438694, "tag(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 367288306, ":priority");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1875502208, "camps/tagData/tag(id=%x):priority");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 1250625855, "camps/tagData/tag(id=%x):persistence");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 70005598, "camps/tagData/tag(id=%x):category");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 2065727156, "camps/tagData/tag(id=%x):camp");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -416772466, "camps/tagData/tag(id=%x):duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 38091777, "events");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -2121542775, "event(%i):type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 1703567845, "event(%i):tagID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 1635537271, "event(%i):persistence");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -881673417, "event(%i):priority");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1520535178, "event(%i):duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 131366045, "schedules");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1811142696, "greets");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1717836031, "moods");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 1770089518, "activities");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1671282280, "scouts");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -23319581, "miniExchanges");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 1390301875, "vignetteInfo");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1715662773, "category(%i):name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -99632347, "category(%i):slots");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 290349293, "category(%i):weight");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 1192477482, "category(%i):visitMax");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 550828398, "category(%i):totalMax");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -176494405, "category(%i):delayMin");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 1087786295, "category(%i):delayMax");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 1066925324, "category(%i):delayInc");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 730646859, "vignettes");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 161473965, "vignette(%i):name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -407988477, "vignette(%i):effect");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1756408348, "moods/mood(id=%x):moodID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1648808149, "moods/mood(id=%x):duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 1461397771, "moods/mood(%i):moodID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 151697783, "moods/mood(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 824852062, "moods/mood(%i):duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1949665568, "moods/mood(%i):player");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1378669256, "moods/mood(%i):remove");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -913813077, "greets/greet(%i):greetRule");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 1526752584, "greets/greet(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1740164857, "greets/greet(%i):duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 1289919464, "greets/greet(%i):remove");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 132295407, "greets/greet(%i):tempdisable");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -606763260, "greets/greet(%i):immediate");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 1007407053, "greets/greet(%i):player");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1309341906, "activities/activity(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1682013963, "miniExchanges/miniExchange(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, 132559829, "miniExchanges/miniExchange(%i):enabled");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549.f_576, -1651099034, "schedules/schedule(id=%x):scheduleID");
}

void func_144()
{
	if (!__LIB_0__::func_720(20, &(Global_1359489.f_21)))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 429892159, "activities/camp(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -904684498, "activities");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 149448507, "activity(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1699652051, "activity(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 13127246, "activity(instanceID=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -1688140176, ":enabled");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 191541852, ":id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -286179123, ":instanceID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -12317914, ":location");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 482834189, ":heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -620745170, ":customActivityUpdate");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1946033125, ":scriptToLaunch");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1371217890, ":stackSize");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -2015824487, "participants");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 287603469, "participants/participant(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 919971448, "participants/participant(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -2137406745, ":minCampLevel");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 429172948, "timeblocks");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -1857445163, "timeblock(%i):start");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1738420189, "timeblock(%i):end");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -431208529, ":shouldLaunchScriptEarly");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -547065739, ":launchScript");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 693772275, ":prerequisiteActivity");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 950875968, ":autoAddParticipants");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1023837085, ":requireAllParticipants");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -350109401, ":hostShouldLead");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -1153145259, ":useSimpleVolume");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -768200779, ":activityVolRadius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -972717455, "activity(instanceID=%x):ipl");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -1140954353, "activity(instanceID=%x):speechRuleset");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1749910275, ":horseStartLocation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -240512847, ":horseStartHeading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -1498558552, ":hostWaitLocation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -950402515, ":hostWaitHeading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1156974471, ":invitePos");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -102247125, ":launchSceneType");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 879932920, "assets/anims:looseAnimScene");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -665861927, "assets/dialogue:beatDialogue");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 2090390096, "assets/anims:playbackListAnimScene");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 886360362, "assets/scenarios:scenarioCallovers");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1524147455, "assets/scenarios/scenario(type=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -320556862, "assets/scenarios/scenario(type=%x):position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1394784022, "assets/scenarios/scenario(type=%x):heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -808176988, "assets/scenarios/scenario(type=%x):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -2112723510, "assets/dialogue");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 35939498, "assets/dialogue:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 738913608, "assets/music:musicFileName");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1202064540, "activity(instanceID=%x)/assets/anims/anim(type=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1449499638, "activity(instanceID=%x)/assets/anims/anim(type=%x):hostPedHandle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -561019962, "activity(instanceID=%x)/assets/anims/anim(type=%x):playerPedHandle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 954609930, "assets/anims/anim(type=%x):hostPedHandle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1080121180, "assets/anims/anim(type=%x):playerPedHandle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -1643627018, "activity(instanceID=%x)/assets/anims/anim(type=%x):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 899481067, "assets/anims/anim(type=%x):idle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 366733363, "assets/anims/anim(type=%x):invite");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 61184076, "assets/anims/anim(type=%x):callover");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1746427169, "assets/anims/anim(type=%x):calloverLeft");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -1746252387, "assets/anims/anim(type=%x):calloverRight");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 708078506, "assets/anims:dontanimatePlayer");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 770042177, "assets/anims:playerUpperbodyOnly");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -1903557952, "assets/anims:registerPlayerForLeadin");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 2072518271, "activities/activity(instanceID=%x)/assets/dialogue/line(type=%x):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1445554035, "assets/cutscenes/scene(type=%x):hostPedHandle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 443199092, "participants/participant(id=%x):pedHandle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -2047775528, "activity(instanceID=%x)/assets/cutscenes/scene(type=%x):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -1102408038, "activity(instanceID=%x)/assets/cutscenes/scene(type=%x):position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -1750702392, "activity(instanceID=%x)/assets/cutscenes/scene(type=%x):heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 909172229, "activity(instanceID=%x)/assets/props");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 809005032, "prop(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -2077191478, ":id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 2029403190, ":isVehicle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1932515175, ":position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, 1283690869, ":rotation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_21, -145970252, ":propHandle");
}

void func_145()
{
	if (!__LIB_0__::func_720(21, &(Global_1359489.f_361.f_195)))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_361.f_195, 0, "Items");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_361.f_195, 2, "Item(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_361.f_195, 6, ":itemRequest");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_361.f_195, 7, ":inventoryItem");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_361.f_195, 3, ":region");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_361.f_195, 8, ":position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489.f_361.f_195, 9, ":rotation");
}

void func_146()
{
	var uVar0;
	if (!__LIB_0__::func_720(22, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1023752283, func_267(-1023752283));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1076906043, func_267(-1076906043));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -153135980, func_267(-153135980));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 12851681, func_267(12851681));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1386325051, func_267(1386325051));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 43722464, func_267(43722464));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -581476215, func_267(-581476215));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1906982261, func_267(-1906982261));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1035806543, func_267(-1035806543));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1579284209, func_267(1579284209));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1172613177, func_267(-1172613177));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 495869290, func_267(495869290));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1382561665, func_267(-1382561665));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 684071069, func_267(684071069));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1357371535, func_267(1357371535));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1221865546, func_267(-1221865546));
}

void func_147()
{
	var uVar0;
	if (!__LIB_0__::func_720(23, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1781729525, func_268(1781729525));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2103982008, func_268(-2103982008));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -57097983, func_268(-57097983));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2027336698, func_268(2027336698));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 316053773, func_268(316053773));
}

void func_148()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			VOLUME::_0xFDFECC6EE4491E11(iVar1);
			Global_1911670[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_150()
{
	__LIB_3__::func_123(1416977006, 1);
	__LIB_3__::func_123(1731133409, 1);
	__LIB_3__::func_123(-227771192, 1);
	__LIB_3__::func_123(-522528347, 1);
	__LIB_3__::func_123(1446885586, 1);
	__LIB_3__::func_123(1208032345, 1);
}

void func_151()
{
	int iVar0;
	VOLUME::_0x748C5F51A18CB8F0(0);
	__LIB_1__::func_312(1);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		func_271(iVar0);
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_152()
{
	if (__LIB_0__::func_2() == -1)
	{
		Global_1894899.f_172 = DATAFILE::_0xD97D8D905F1562F2(-2002867003);
		Global_1894899.f_173 = DATAFILE::_0xD97D8D905F1562F2(-858572145);
		Global_1894899.f_174 = DATAFILE::_0xD97D8D905F1562F2(1814852958);
		while ((!DATAFILE::_0x603AC35FD4602C76(Global_1894899.f_172) || !DATAFILE::_0x603AC35FD4602C76(Global_1894899.f_173)) || !DATAFILE::_0x603AC35FD4602C76(Global_1894899.f_174))
		{
			BUILTIN::WAIT(0);
		}
		func_272();
		func_273();
		func_274();
	}
}

void func_153(var uParam0, var uParam1, char* sParam2)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	int iVar24;
	bool bVar25;
	int iVar26;
	char cVar27[64];
	iVar0 = MISC::GET_FRAME_COUNT();
	Var2 = *uParam1;
	Var2.f_2 = -244250050;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
	{
	}
	Var2.f_2 = 0;
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var2, Var2.f_1) > iVar26)
	{
		bVar25 = false;
		Var2.f_3 = iVar26;
		Var2.f_2 = -734680005;
		DATAFILE::_DATAFILE_GET_STRING(&uVar16, &Var2);
		iVar1 = __LIB_9__::func_29(MISC::GET_HASH_KEY(&uVar16));
		if (iVar1 == -1)
		{
			Var2.f_2 = -1285134888;
			DATAFILE::_DATAFILE_GET_STRING(&uVar16, &Var2);
			iVar1 = __LIB_9__::func_29(MISC::GET_HASH_KEY(&uVar16));
			bVar25 = true;
			if (iVar1 == -1)
			{
			}
		}
		if (iVar1 != -1)
		{
			Var2.f_2 = -177723663;
			DATAFILE::_DATAFILE_GET_FLOAT(&vVar7, &Var2);
			Var2.f_2 = -968243019;
			DATAFILE::_DATAFILE_GET_FLOAT(&(vVar7.f_1), &Var2);
			Var2.f_2 = -646025442;
			DATAFILE::_DATAFILE_GET_FLOAT(&(vVar7.f_2), &Var2);
			Var2.f_2 = 1397255209;
			DATAFILE::_DATAFILE_GET_FLOAT(&vVar10, &Var2);
			Var2.f_2 = 503447965;
			DATAFILE::_DATAFILE_GET_FLOAT(&(vVar10.f_1), &Var2);
			Var2.f_2 = 800892178;
			DATAFILE::_DATAFILE_GET_FLOAT(&(vVar10.f_2), &Var2);
			Var2.f_2 = 1348766134;
			DATAFILE::_DATAFILE_GET_FLOAT(&vVar13, &Var2);
			Var2.f_2 = 1572185176;
			DATAFILE::_DATAFILE_GET_FLOAT(&(vVar13.f_1), &Var2);
			Var2.f_2 = -1543393037;
			DATAFILE::_DATAFILE_GET_FLOAT(&(vVar13.f_2), &Var2);
			Var2.f_2 = 1958238202;
			DATAFILE::_DATAFILE_GET_STRING(&uVar16, &Var2);
			iVar24 = MISC::GET_HASH_KEY(&uVar16);
			StringCopy(&cVar27, __LIB_4__::func_546(iVar1), 64);
			StringConCat(&cVar27, sParam2, 64);
			if (!bVar25)
			{
				switch (iVar24)
				{
					case joaat("VOLCYLINDER"):
						(*uParam0)[iVar1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar7, vVar10, vVar13, &cVar27);
						break;
					case joaat("VOLBOX"):
						(*uParam0)[iVar1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar7, vVar10, vVar13, &cVar27);
						break;
				}
			}
			else
			{
				if (!VOLUME::_DOES_VOLUME_EXIST((*uParam0)[iVar1]))
				{
					(*uParam0)[iVar1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(&cVar27);
				}
				switch (iVar24)
				{
					case joaat("VOLCYLINDER"):
						VOLUME::_0xBCE668AAF83608BE((*uParam0)[iVar1], vVar7, vVar10, vVar13);
						break;
					case joaat("VOLBOX"):
						VOLUME::_0x39816F6F94F385AD((*uParam0)[iVar1], vVar7, vVar10, vVar13);
						break;
				}
			}
		}
		iVar26++;
	}
}

void func_154(bool bParam0)
{
	struct<4> Var0;
	var uVar5;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar23;
	if (bParam0)
	{
		if (__LIB_0__::func_2() == -1)
		{
			Global_1894899.f_175 = DATAFILE::_0xD97D8D905F1562F2(90230079);
			while (!DATAFILE::_0x603AC35FD4602C76(Global_1894899.f_175))
			{
				BUILTIN::WAIT(0);
			}
			func_277();
		}
	}
	else
	{
		Global_1894899.f_175 = DATAFILE::_0xCA56DD6AB7A39F64(90230079);
		func_277();
	}
	Var0 = Global_1894899.f_175;
	Var0.f_2 = -258890676;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	Var0.f_2 = 0;
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1) > iVar23)
	{
		Var0.f_3 = iVar23;
		Var0.f_2 = 1489686829;
		DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0);
		iVar13 = __LIB_9__::func_29(MISC::GET_HASH_KEY(&uVar5));
		if (__LIB_0__::func_20(iVar13))
		{
			Var0.f_2 = 596301644;
			DATAFILE::_DATAFILE_GET_FLOAT(&uVar14, &Var0);
			Global_1888801[iVar13 /*35*/].f_10 = uVar14;
			Var0.f_2 = 325957282;
			DATAFILE::_DATAFILE_GET_FLOAT(&uVar14, &Var0);
			Global_1888801[iVar13 /*35*/].f_11 = uVar14;
			Var0.f_2 = 426139466;
			DATAFILE::_DATAFILE_GET_STRING(&uVar15, &Var0);
			Global_1888801[iVar13 /*35*/].f_12 = MISC::GET_HASH_KEY(&uVar15);
		}
		iVar23++;
	}
	DATAFILE::_DATAFILE_UNLOAD(Global_1894899.f_175);
}

void func_155(var uParam0)
{
	*uParam0 = DATAFILE::_0xD97D8D905F1562F2(joaat("REGIONS"));
	while (!DATAFILE::_0x603AC35FD4602C76(*uParam0))
	{
		BUILTIN::WAIT(0);
	}
}

void func_156()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_170, 1276999770, "regions/region(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_170, 1459980739, ":script");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_170, -158797272, ":prefix");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_170, -1484939920, ":type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_170, 2028394285, ":mpType");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_170, 670069251, ":richPresence");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_170, 1422201736, ":lockSessioning");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_170, 865021745, ":guama");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_170, 2078335853, ":mpGhosttown");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_170, -2025494336, ":mpTypeOverride");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_170, 899379634, ":noGPS");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_170, 414670492, ":hideName");
}

void func_157(var uParam0)
{
	*uParam0 = DATAFILE::_0xD97D8D905F1562F2(-1412413887);
	while (!DATAFILE::_0x603AC35FD4602C76(*uParam0))
	{
		BUILTIN::WAIT(0);
	}
}

void func_158()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_171, 1252559615, "regions/region(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_171, 1711029673, "bCanBeRestricted:value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_171, 1758612600, "bUseStoredBountyForWanted:value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_171, 115903213, "iBountyForWanted:value");
}

void func_159()
{
	DATAFILE::_DATAFILE_UNLOAD(Global_1894899.f_172);
	DATAFILE::_DATAFILE_UNLOAD(Global_1894899.f_173);
	DATAFILE::_DATAFILE_UNLOAD(Global_1894899.f_174);
}

void func_160(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	struct<20> Var0;
	if (iParam1 > 150)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
	}
	if (!func_278(uParam0, iParam1, &Var0))
	{
		return;
	}
	Global_1888801[iParam1 /*35*/].f_3 = iParam2;
	Global_1888801[iParam1 /*35*/].f_4 = uParam3;
	Global_1888801[iParam1 /*35*/].f_5 = uParam4;
	Global_1888801[iParam1 /*35*/].f_6 = { VOLUME::_GET_VOLUME_COORDS(iParam2) };
	MemCopy(&(Global_1888801[iParam1 /*35*/].f_23), {Var0}, 3);
	MemCopy(&(Global_1888801[iParam1 /*35*/].f_22), {Var0.f_8}, 1);
	Global_1888801[iParam1 /*35*/].f_30 = MISC::GET_HASH_KEY(&(Global_1888801[iParam1 /*35*/].f_22));
	Global_1888801[iParam1 /*35*/].f_20 = Var0.f_16;
	Global_1888801[iParam1 /*35*/].f_9 = 0;
	Global_1888801[iParam1 /*35*/].f_1 = 0;
	Global_1888801[iParam1 /*35*/].f_15 = { func_279(iParam1) };
	__LIB_0__::func_25(iParam1, 15);
	func_281(iParam1, Var0.f_18);
	if (__LIB_1__::func_897(iParam1, 64))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam2))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iParam2, 0, 1);
		}
	}
	if (__LIB_0__::func_2() != -1)
	{
		if (__LIB_1__::func_897(iParam1, 32))
		{
			if (Var0.f_19 != 0)
			{
				Global_1888801[iParam1 /*35*/].f_20 = Var0.f_19;
			}
		}
	}
	switch (Var0.f_16)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 9:
			break;
		default:
			break;
	}
	if (__LIB_0__::func_2() == -1)
	{
		switch (__LIB_1__::func_882(iParam1))
		{
			case 0:
			case 2:
			case 11:
				Global_1894899.f_176++;
				break;
			case 1:
			case 5:
			case 6:
			case 7:
			case 12:
				Global_1894899.f_178++;
				break;
			case 3:
			case 10:
				Global_1894899.f_177++;
				break;
			case 4:
			case 9:
				Global_1894899.f_179++;
				break;
			case 8:
				Global_1894899.f_180++;
				break;
			case 13:
			case 14:
			case 15:
			case 16:
				Global_1894899.f_181++;
				break;
		}
	}
}

void func_161(var uParam0, int iParam1)
{
	var uVar0;
	if (iParam1 > 150)
	{
		return;
	}
	if (!func_284(uParam0, iParam1, &uVar0))
	{
		return;
	}
	Global_1888801[iParam1 /*35*/].f_31 = uVar0;
}

void func_162()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (__LIB_0__::func_20(iVar0))
		{
			if (__LIB_0__::func_730(iVar0) && __LIB_9__::func_27(iVar0))
			{
				__LIB_10__::func_843(iVar0, 1, 350);
			}
			else
			{
				__LIB_10__::func_843(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
}

void func_165()
{
	int iVar0;
	Global_1894899.f_161 = 0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (__LIB_1__::func_120(iVar0) && VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iVar0 /*35*/].f_3))
		{
			Global_1894899.f_10[Global_1894899.f_161] = iVar0;
			Global_1894899.f_161++;
		}
		iVar0++;
	}
}

void func_166()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10[16];
	int iVar27[4];
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = 0;
	func_288();
	iVar8 = 0;
	while (iVar8 < 16)
	{
		iVar9 = 0;
		while (iVar9 < 50)
		{
			Global_1894065[iVar8 /*51*/][iVar9] = -1;
			iVar9++;
		}
		Global_1894882[iVar8] = 0;
		iVar8++;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iVar0 /*35*/].f_3))
		{
			VOLUME::_GET_VOLUME_BOUNDS(Global_1888801[iVar0 /*35*/].f_3, &vVar1, &vVar4);
			iVar8 = 0;
			while (iVar8 < 16)
			{
				iVar10[iVar8] = 1;
				iVar8++;
			}
			iVar7 = 0;
			while (iVar7 < 4)
			{
				iVar27[iVar7] = 1;
				iVar7++;
			}
			func_289(vVar1, vVar4, 0f, 0f, &iVar27, 0, 2);
			iVar7 = 0;
			while (iVar7 < 4)
			{
				if (iVar27[iVar7])
				{
					func_289(vVar1, vVar4, Global_1894052[iVar7 /*3*/].f_1, Global_1894052[iVar7 /*3*/].f_2, &iVar10, Global_1894052[iVar7 /*3*/], 4);
				}
				else
				{
					func_290(&iVar10, Global_1894052[iVar7 /*3*/], 4);
				}
				iVar7++;
			}
			iVar8 = 0;
			while (iVar8 < 16)
			{
				if (iVar10[iVar8])
				{
					if (Global_1894882[iVar8] >= 50)
					{
					}
					Global_1894065[iVar8 /*51*/][Global_1894882[iVar8]] = iVar0;
					Global_1894882[iVar8]++;
				}
				iVar8++;
			}
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
	iVar8 = 0;
	while (iVar8 < 16)
	{
		iVar9 = 0;
		while (iVar9 < Global_1894882[iVar8])
		{
			iVar9++;
		}
		iVar8++;
	}
}

void func_168()
{
	struct<202> Var0;
	Var0 = 100;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = 1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Global_1934765.f_69 = { Var0 };
}

void func_169(int iParam0)
{
	func_291(iParam0, 1);
}

void func_170(int iParam0)
{
	func_291(iParam0, 0);
}

void func_171()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		__LIB_17__::func_433(iVar0);
		iVar0++;
	}
}

void func_176(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_0__::func_991();
	}
	else
	{
		return;
	}
	__LIB_0__::func_591();
	Global_40.f_9.f_14 = __LIB_0__::func_23();
	Global_40.f_9.f_20 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (__LIB_0__::func_826())
		{
			__LIB_0__::func_322(Global_1310720.f_1);
		}
		else if (__LIB_0__::func_61() == __LIB_1__::func_447(Global_36, 1) && __LIB_0__::func_592() != 2)
		{
			__LIB_0__::func_322(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			__LIB_0__::func_322(Global_36);
		}
		__LIB_1__::func_627(Global_36, &vVar0, &uVar4);
		if (!__LIB_0__::func_826())
		{
			if (__LIB_0__::func_62(vVar0, Global_36) < __LIB_0__::func_62(Global_40.f_9.f_7, Global_36))
			{
				__LIB_0__::func_322(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = __LIB_1__::func_447(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		__LIB_1__::func_627(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		__LIB_0__::func_7(&Global_1935630, 8192);
	}
	func_300();
}

bool func_179(bool bParam0, bool bParam1)
{
	int iVar0;
	char cVar1[64];
	if (!bParam0)
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			return false;
		}
		if (__LIB_17__::func_446())
		{
			return false;
		}
		if (!Global_1934765.f_274 && !__LIB_0__::func_13(32768))
		{
			if (Global_1879534.f_1 || Global_1879534)
			{
				return false;
			}
		}
	}
	switch (Global_1934765)
	{
		case 0:
			__LIB_0__::func_401(666617953);
			__LIB_0__::func_401(1733948592);
			__LIB_0__::func_401(1700234797);
			__LIB_0__::func_401(1305074360);
			__LIB_0__::func_401(-436566493);
			__LIB_0__::func_401(-1995815064);
			__LIB_0__::func_401(-483649675);
			__LIB_0__::func_401(212587871);
			__LIB_0__::func_401(joaat("TAX_SHUTTERS_CLOSED"));
			__LIB_0__::func_401(1190076410);
			__LIB_0__::func_401(350100475);
			__LIB_0__::func_401(2033090463);
			__LIB_0__::func_401(-688011628);
			__LIB_0__::func_401(-787042507);
			__LIB_0__::func_401(1688216398);
			__LIB_0__::func_401(669655585);
			__LIB_0__::func_401(-895099271);
			__LIB_0__::func_401(556610581);
			__LIB_0__::func_401(joaat("ARM_05_CHOLERA"));
			if (__LIB_0__::func_313())
			{
				__LIB_0__::func_401(-693659956);
				__LIB_0__::func_401(joaat("SPPACK_A1SUP_OBELISK"));
				__LIB_0__::func_401(-400238535);
				__LIB_0__::func_401(1416512144);
			}
			__LIB_0__::func_401(joaat("SPPACK_A4SUP_AQUADUCT"));
			__LIB_0__::func_401(-846479900);
			__LIB_0__::func_401(-866774384);
			if (!Global_1934765.f_288)
			{
				__LIB_4__::func_495(229);
			}
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
			__LIB_19__::func_29();
			__LIB_18__::func_263();
			__LIB_10__::func_738();
			return false;
		case 1:
			__LIB_17__::func_453();
			__LIB_10__::func_738();
			return false;
		case 2:
			func_309();
			__LIB_10__::func_738();
			return false;
		case 3:
			break;
	}
	if (!__LIB_0__::func_898(514932331))
	{
		__LIB_0__::func_401(1892122519);
	}
	if (__LIB_0__::func_898(-1414537028))
	{
		if (!__LIB_0__::func_1(Global_1934765.f_20, 1))
		{
			__LIB_1__::func_883(5, 1);
			__LIB_1__::func_883(7, 1);
			__LIB_1__::func_883(6, 1);
			__LIB_1__::func_883(1, 1);
			__LIB_0__::func_7(&(Global_1934765.f_20), 1);
		}
	}
	else if (__LIB_0__::func_1(Global_1934765.f_20, 1))
	{
		__LIB_1__::func_883(5, 2);
		__LIB_1__::func_883(1, 2);
		__LIB_0__::func_8(&(Global_1934765.f_20), 1);
	}
	if (__LIB_0__::func_898(269047710))
	{
		__LIB_0__::func_400(382484708);
		__LIB_0__::func_401(-910880980);
	}
	else
	{
		__LIB_0__::func_400(-910880980);
		__LIB_0__::func_401(382484708);
	}
	if (__LIB_0__::func_898(-748969569))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", false);
	}
	if (__LIB_0__::func_898(618699440))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", false);
	}
	if (__LIB_0__::func_898(-1062490780))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", false);
	}
	if (__LIB_0__::func_898(-683458244))
	{
		__LIB_4__::func_524(203);
		__LIB_4__::func_495(204);
	}
	else
	{
		__LIB_4__::func_524(204);
		__LIB_4__::func_495(203);
	}
	__LIB_17__::func_434(273461605, 79, 2, 4096);
	__LIB_17__::func_434(-868076593, 9, 32, 4096);
	__LIB_17__::func_434(1205826474, 36, 64, 4096);
	if (__LIB_0__::func_898(373691918))
	{
		if (WATER::_GET_WORLD_WATER_TYPE() != 1)
		{
			WATER::_SET_WORLD_WATER_TYPE(1);
		}
		if (!Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(true);
			MAP::_0xA657EC9DBC6CC900(joaat("GUARMA"));
		}
		MAP::SET_MINIMAP_HIDE_FOW(true);
		MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(false, 0);
		Global_43891 = 1;
	}
	else
	{
		if (__LIB_0__::func_898(657241756))
		{
			if (WATER::_GET_WORLD_WATER_TYPE() != 1)
			{
				WATER::_SET_WORLD_WATER_TYPE(1);
			}
		}
		else if (WATER::_GET_WORLD_WATER_TYPE() != 0)
		{
			WATER::_SET_WORLD_WATER_TYPE(0);
		}
		if (Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
			MAP::_0xA657EC9DBC6CC900(joaat("WORLD"));
		}
		MAP::SET_MINIMAP_HIDE_FOW(false);
		if (!__LIB_0__::func_13(128))
		{
			MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(true, 0);
		}
		Global_43891 = 0;
	}
	if (__LIB_0__::func_898(-2058120606))
	{
		if (__LIB_0__::func_2() == -1)
		{
		}
	}
	else if (__LIB_0__::func_2() == -1)
	{
	}
	if (__LIB_0__::func_898(311708813))
	{
		__LIB_0__::func_401(-1786365097);
		__LIB_4__::func_495(178);
	}
	else
	{
		__LIB_0__::func_400(-1786365097);
		__LIB_4__::func_524(178);
	}
	if (!__LIB_0__::func_898(1399676951))
	{
		__LIB_0__::func_400(1934919499);
		__LIB_0__::func_400(993595204);
		__LIB_0__::func_400(-515396642);
		__LIB_0__::func_400(1291083725);
		__LIB_0__::func_400(joaat("DES_STR_JAIL"));
		if (__LIB_0__::func_898(-1524512402))
		{
			__LIB_0__::func_401(joaat("DES_STR_JAIL"));
			__LIB_4__::func_495(193);
		}
		else
		{
			iVar0 = __LIB_0__::func_895(__LIB_3__::func_918(11));
			if (__LIB_0__::func_27(iVar0, 1))
			{
				__LIB_0__::func_401(joaat("DES_STR_JAIL"));
				__LIB_4__::func_495(193);
			}
			else
			{
				__LIB_4__::func_524(193);
				if (__LIB_0__::func_27(iVar0, 2))
				{
					__LIB_0__::func_401(1291083725);
				}
				else if (__LIB_0__::func_27(iVar0, 4))
				{
					__LIB_0__::func_401(993595204);
				}
			}
		}
	}
	if (__LIB_0__::func_898(1497516462))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(68, 16);
			__LIB_0__::func_121(557, 32);
			__LIB_0__::func_121(563, 32);
			__LIB_0__::func_121(560, 32);
			__LIB_0__::func_121(561, 32);
			__LIB_0__::func_121(562, 32);
			__LIB_0__::func_123(565, 32);
			__LIB_10__::func_823(565, 0);
			__LIB_0__::func_123(564, 32);
			__LIB_10__::func_823(564, 0);
			__LIB_0__::func_123(554, 32);
			__LIB_10__::func_823(554, 0);
			__LIB_0__::func_123(555, 32);
			__LIB_10__::func_823(555, 0);
			__LIB_0__::func_123(556, 32);
			__LIB_10__::func_823(556, 0);
		}
		__LIB_4__::func_524(199);
		__LIB_4__::func_495(198);
	}
	else if (__LIB_0__::func_898(2016141805))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(68, 16);
			__LIB_0__::func_121(557, 32);
			__LIB_0__::func_121(563, 32);
			__LIB_0__::func_123(560, 32);
			__LIB_10__::func_823(560, 0);
			__LIB_0__::func_123(561, 32);
			__LIB_10__::func_823(561, 0);
			__LIB_0__::func_123(562, 32);
			__LIB_10__::func_823(562, 0);
			__LIB_0__::func_123(554, 32);
			__LIB_10__::func_823(554, 0);
			__LIB_0__::func_123(555, 32);
			__LIB_10__::func_823(555, 0);
			__LIB_0__::func_123(556, 32);
			__LIB_10__::func_823(556, 0);
			__LIB_0__::func_123(565, 32);
			__LIB_10__::func_823(565, 0);
			__LIB_0__::func_123(564, 32);
			__LIB_10__::func_823(564, 0);
		}
		__LIB_4__::func_524(199);
		__LIB_4__::func_524(198);
	}
	else if (__LIB_0__::func_898(1010885152))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_24(68, 16);
			__LIB_10__::func_823(554, 0);
			__LIB_10__::func_823(555, 0);
			__LIB_10__::func_823(556, 0);
			__LIB_10__::func_823(557, 0);
			__LIB_10__::func_823(563, 0);
			__LIB_10__::func_823(560, 0);
			__LIB_10__::func_823(561, 0);
			__LIB_10__::func_823(562, 0);
			__LIB_10__::func_823(565, 0);
			__LIB_10__::func_823(564, 0);
		}
		__LIB_4__::func_524(199);
		__LIB_4__::func_495(198);
	}
	else if (__LIB_0__::func_898(-502324015))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(68, 16);
			__LIB_0__::func_123(554, 32);
			__LIB_0__::func_123(555, 32);
			__LIB_0__::func_123(556, 32);
			__LIB_0__::func_123(557, 32);
			__LIB_0__::func_123(563, 32);
			__LIB_10__::func_823(554, 0);
			__LIB_10__::func_823(555, 0);
			__LIB_10__::func_823(556, 0);
			__LIB_10__::func_823(557, 0);
			__LIB_10__::func_823(563, 0);
			__LIB_0__::func_121(565, 32);
			__LIB_0__::func_121(564, 32);
			__LIB_0__::func_121(560, 32);
			__LIB_0__::func_121(561, 32);
			__LIB_0__::func_121(562, 32);
		}
		__LIB_4__::func_524(198);
		__LIB_4__::func_495(199);
	}
	if (__LIB_0__::func_898(440043364))
	{
		__LIB_0__::func_400(376665102);
	}
	else
	{
		__LIB_0__::func_401(376665102);
	}
	if (__LIB_0__::func_898(-1425209566))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_121(800, 32);
		}
	}
	else if (__LIB_0__::func_2() == -1)
	{
		__LIB_0__::func_123(800, 32);
		__LIB_10__::func_823(800, 0);
	}
	__LIB_10__::func_797();
	if (__LIB_0__::func_898(0))
	{
		__LIB_0__::func_401(1149195254);
		__LIB_0__::func_401(2016081133);
		__LIB_0__::func_401(363257921);
		__LIB_0__::func_401(58066174);
		__LIB_0__::func_401(-1521525254);
		__LIB_0__::func_401(-761186147);
		__LIB_0__::func_401(-1872939092);
		__LIB_0__::func_401(-964156415);
		__LIB_17__::func_435(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", false, true);
		__LIB_3__::func_124(-434746250, 1);
		if (__LIB_0__::func_898(-699277634))
		{
			__LIB_0__::func_401(-2137633069);
			__LIB_4__::func_495(121);
			__LIB_4__::func_495(123);
			__LIB_4__::func_495(125);
			if (__LIB_0__::func_2() == -1)
			{
				__LIB_0__::func_24(93, 16);
				__LIB_8__::func_922(93);
			}
			if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1) && !bParam1)
			{
				Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, 0, 15);
			}
		}
		else
		{
			__LIB_0__::func_401(1944013855);
			__LIB_4__::func_495(120);
			__LIB_4__::func_495(122);
			__LIB_4__::func_495(124);
			__LIB_0__::func_25(93, 16);
			if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
				Global_1934765.f_1 = 0;
			}
		}
	}
	else if (__LIB_0__::func_898(473295046))
	{
		__LIB_0__::func_401(-1643869063);
		__LIB_0__::func_401(-1108618313);
		__LIB_0__::func_401(-787678727);
		__LIB_17__::func_435(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		__LIB_3__::func_124(-434746250, 1);
		if (__LIB_0__::func_898(-699277634))
		{
			__LIB_5__::func_441("bra_man_burned_bra3");
		}
		else
		{
			__LIB_5__::func_441("bra_man_burned");
		}
		__LIB_0__::func_25(93, 16);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_121(621, 32);
			__LIB_0__::func_121(622, 32);
			__LIB_0__::func_121(623, 32);
			__LIB_0__::func_121(624, 32);
			__LIB_0__::func_123(909, 32);
			__LIB_10__::func_823(909, 0);
			__LIB_0__::func_123(910, 32);
			__LIB_10__::func_823(910, 0);
			__LIB_0__::func_123(911, 32);
			__LIB_10__::func_823(911, 0);
			__LIB_0__::func_123(912, 32);
			__LIB_10__::func_823(912, 0);
			__LIB_0__::func_123(913, 32);
			__LIB_10__::func_823(913, 0);
			__LIB_0__::func_123(914, 32);
			__LIB_10__::func_823(914, 0);
			__LIB_0__::func_123(617, 32);
			__LIB_10__::func_823(617, 0);
			__LIB_0__::func_123(618, 32);
			__LIB_10__::func_823(618, 0);
			__LIB_0__::func_123(619, 32);
			__LIB_10__::func_823(619, 0);
			__LIB_0__::func_123(620, 32);
			__LIB_10__::func_823(620, 0);
			__LIB_0__::func_123(915, 32);
			__LIB_10__::func_823(915, 0);
			__LIB_0__::func_123(916, 32);
			__LIB_10__::func_823(916, 0);
			__LIB_0__::func_123(917, 32);
			__LIB_10__::func_823(917, 0);
			__LIB_0__::func_123(625, 32);
			__LIB_10__::func_823(625, 0);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
			Global_1934765.f_1 = 0;
		}
	}
	else if (__LIB_0__::func_898(-1738165526))
	{
		__LIB_0__::func_401(-1643869063);
		__LIB_0__::func_401(622597018);
		__LIB_0__::func_401(1649275138);
		__LIB_17__::func_435(1);
		__LIB_5__::func_441("bra_man_endsum");
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, false);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		__LIB_3__::func_123(-434746250, 1);
		__LIB_0__::func_24(93, 16);
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1) && !bParam1)
		{
			Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, 0, 15);
		}
	}
	if (!__LIB_0__::func_898(-270094635))
	{
		__LIB_0__::func_401(1355914142);
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			Global_1934765.f_16 = VOLUME::_CREATE_VOLUME_CYLINDER(2846.517f, -1300.918f, 45.457f, 0f, 0f, -42f, 4.584f, 3.041f, 10.079f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765.f_16, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(1355914142);
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765.f_16);
			VOLUME::_DELETE_VOLUME(Global_1934765.f_16);
		}
	}
	if (__LIB_0__::func_898(-1666278201))
	{
		__LIB_0__::func_400(706203603);
		__LIB_0__::func_401(937192284);
	}
	else
	{
		__LIB_0__::func_400(937192284);
		__LIB_0__::func_401(706203603);
	}
	if (__LIB_0__::func_898(405586984))
	{
		__LIB_0__::func_400(-1052023588);
		__LIB_0__::func_400(-745087561);
		__LIB_5__::func_440("old_nav_wall_hole");
		__LIB_5__::func_440("old_nav_nts3_start");
		__LIB_5__::func_440("old_nav_nts3_end");
		__LIB_0__::func_401(944314155);
		__LIB_5__::func_441("old_nav_wall_fill");
	}
	else if (__LIB_0__::func_898(1509509592))
	{
		__LIB_0__::func_400(-1052023588);
		__LIB_5__::func_440("old_nav_wall_fill");
		__LIB_5__::func_440("old_nav_wall_hole");
		__LIB_5__::func_440("old_nav_nts3_end");
		__LIB_0__::func_401(944314155);
		__LIB_0__::func_401(-745087561);
		__LIB_5__::func_441("old_nav_nts3_start");
	}
	else if (__LIB_0__::func_898(-959357075))
	{
		__LIB_0__::func_400(944314155);
		__LIB_5__::func_440("old_nav_wall_fill");
		__LIB_5__::func_440("old_nav_nts3_start");
		__LIB_5__::func_440("old_nav_wall_hole");
		__LIB_0__::func_401(-1052023588);
		__LIB_0__::func_401(-745087561);
		__LIB_5__::func_441("old_nav_nts3_end");
	}
	else if (__LIB_0__::func_898(-1311865656))
	{
		__LIB_0__::func_400(944314155);
		__LIB_0__::func_400(-745087561);
		__LIB_5__::func_440("old_nav_wall_fill");
		__LIB_5__::func_440("old_nav_nts3_start");
		__LIB_5__::func_440("old_nav_nts3_end");
		__LIB_0__::func_401(-1052023588);
		__LIB_5__::func_441("old_nav_wall_hole");
	}
	if (__LIB_0__::func_898(2091701359))
	{
		__LIB_0__::func_401(joaat("VAN_02_HORSEBOAT"));
	}
	else
	{
		__LIB_0__::func_400(joaat("VAN_02_HORSEBOAT"));
	}
	if (__LIB_0__::func_898(1376646519))
	{
		__LIB_0__::func_400(-920505696);
		__LIB_0__::func_400(281772765);
		__LIB_0__::func_400(-516683274);
		__LIB_4__::func_524(135);
		__LIB_4__::func_524(136);
		__LIB_4__::func_524(137);
		__LIB_4__::func_524(138);
		__LIB_5__::func_440("nav_std_bank_start");
		__LIB_5__::func_440("nav_std_bank_shootout");
		__LIB_5__::func_440("nav_std_bank_dest");
		__LIB_4__::func_495(134);
		__LIB_0__::func_401(1017355491);
		__LIB_0__::func_401(-1004522372);
	}
	else if (__LIB_0__::func_898(931649776))
	{
		__LIB_0__::func_400(-920505696);
		__LIB_0__::func_400(-516683274);
		__LIB_4__::func_524(135);
		__LIB_4__::func_524(136);
		__LIB_4__::func_524(137);
		__LIB_4__::func_524(138);
		__LIB_5__::func_440("nav_std_bank_shootout");
		__LIB_5__::func_440("nav_std_bank_dest");
		__LIB_0__::func_401(-1004522372);
		__LIB_4__::func_495(134);
		__LIB_0__::func_401(1017355491);
		__LIB_0__::func_401(281772765);
		__LIB_5__::func_441("nav_std_bank_start");
	}
	else if (__LIB_0__::func_898(-434590080))
	{
		__LIB_0__::func_400(-920505696);
		__LIB_0__::func_400(-516683274);
		__LIB_4__::func_524(134);
		__LIB_4__::func_524(137);
		__LIB_5__::func_440("nav_std_bank_start");
		__LIB_5__::func_440("nav_std_bank_dest");
		__LIB_0__::func_401(-1004522372);
		__LIB_4__::func_495(135);
		__LIB_4__::func_495(136);
		__LIB_4__::func_495(138);
		__LIB_0__::func_401(1017355491);
		__LIB_0__::func_401(281772765);
		__LIB_5__::func_441("nav_std_bank_shootout");
	}
	else if (__LIB_0__::func_898(1743048395))
	{
		__LIB_0__::func_400(1017355491);
		__LIB_0__::func_400(281772765);
		__LIB_0__::func_400(-1004522372);
		__LIB_4__::func_524(134);
		__LIB_4__::func_524(135);
		__LIB_4__::func_495(137);
		__LIB_4__::func_495(138);
		__LIB_5__::func_440("nav_std_bank_start");
		__LIB_5__::func_440("nav_std_bank_shootout");
		__LIB_0__::func_401(-516683274);
		__LIB_0__::func_401(-920505696);
		__LIB_5__::func_441("nav_std_bank_dest");
	}
	else if (__LIB_0__::func_898(449774763))
	{
		__LIB_0__::func_400(1017355491);
		__LIB_0__::func_400(-516683274);
		__LIB_0__::func_400(281772765);
		__LIB_4__::func_524(134);
		__LIB_4__::func_524(135);
		__LIB_4__::func_524(136);
		__LIB_4__::func_524(138);
		__LIB_0__::func_401(-1004522372);
		__LIB_4__::func_495(137);
	}
	if (__LIB_0__::func_898(-764163380))
	{
		__LIB_4__::func_524(140);
		__LIB_4__::func_495(139);
	}
	else
	{
		__LIB_4__::func_524(139);
		__LIB_4__::func_495(140);
	}
	if (__LIB_0__::func_898(-349064220))
	{
		__LIB_0__::func_401(140744122);
		__LIB_0__::func_401(-1795618779);
		__LIB_5__::func_441("hso_post_caravan");
	}
	else
	{
		__LIB_0__::func_400(140744122);
		__LIB_0__::func_400(-1795618779);
		__LIB_5__::func_440("hso_post_caravan");
	}
	if (__LIB_0__::func_898(1776302352))
	{
		__LIB_0__::func_401(1691578074);
		__LIB_0__::func_401(-1936937394);
		__LIB_5__::func_441("dewclm_post_caravan");
	}
	else
	{
		__LIB_0__::func_400(1691578074);
		__LIB_0__::func_400(-1936937394);
		__LIB_5__::func_440("dewclm_post_caravan");
	}
	if (__LIB_0__::func_898(-523522517))
	{
		__LIB_0__::func_401(-1130111983);
		__LIB_0__::func_401(-1015786727);
	}
	else
	{
		__LIB_0__::func_400(-1130111983);
		__LIB_0__::func_400(-1015786727);
	}
	if (__LIB_0__::func_898(1591451572))
	{
		__LIB_0__::func_401(560821199);
	}
	else
	{
		__LIB_0__::func_400(560821199);
	}
	if (__LIB_0__::func_898(1177464213))
	{
		__LIB_0__::func_400(-313831898);
		__LIB_0__::func_400(634920011);
		__LIB_0__::func_401(1694736240);
		__LIB_0__::func_401(2035758463);
	}
	else
	{
		__LIB_0__::func_400(1694736240);
		__LIB_0__::func_400(2035758463);
		__LIB_0__::func_401(-313831898);
		__LIB_0__::func_401(634920011);
	}
	__LIB_10__::func_686();
	__LIB_10__::func_798();
	if (__LIB_0__::func_898(459290420))
	{
		__LIB_0__::func_401(474287981);
		__LIB_0__::func_401(-338553155);
		__LIB_0__::func_401(-1636879249);
		__LIB_0__::func_401(205214733);
		__LIB_0__::func_400(joaat("WEATHERVOL_CHPT1_SNOWSTORM"));
		__LIB_4__::func_495(186);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		__LIB_0__::func_804(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
		}
	}
	else if (__LIB_0__::func_898(1884271742))
	{
		__LIB_0__::func_401(867231253);
		__LIB_0__::func_401(-323126593);
		__LIB_0__::func_401(-1316886711);
		__LIB_0__::func_401(205214733);
		__LIB_0__::func_400(joaat("WEATHERVOL_CHPT1_SNOWSTORM"));
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
	}
	else if (__LIB_0__::func_898(-2038424081))
	{
		__LIB_0__::func_401(867231253);
		__LIB_0__::func_401(-1670453688);
		__LIB_0__::func_401(-323126593);
		__LIB_0__::func_401(-1316886711);
		__LIB_0__::func_401(205214733);
		__LIB_5__::func_441("col_nav_wint_end");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (__LIB_0__::func_898(753127042))
	{
		__LIB_0__::func_401(1248111234);
		__LIB_0__::func_401(-1670453688);
		__LIB_0__::func_401(-323126593);
		__LIB_0__::func_401(-1316886711);
		__LIB_0__::func_401(205214733);
		__LIB_5__::func_441("col_nav_wint2_post");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (__LIB_0__::func_898(-1187950766))
	{
		__LIB_0__::func_401(474287981);
		__LIB_0__::func_401(-1670453688);
		__LIB_0__::func_401(-1636879249);
		__LIB_0__::func_401(-338553155);
		__LIB_4__::func_495(186);
		__LIB_5__::func_441("col_nav_wint1_cabin_duringfire");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (__LIB_0__::func_898(356365161))
	{
		__LIB_0__::func_401(474287981);
		__LIB_0__::func_401(-1670453688);
		__LIB_0__::func_401(-338553155);
		__LIB_0__::func_401(-1636879249);
		__LIB_5__::func_441("col_nav_wint1_cabin_prefire");
		__LIB_4__::func_495(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (__LIB_0__::func_898(-939420910))
	{
		__LIB_0__::func_401(joaat("WIN1_INTRO_CUTSCENE"));
		__LIB_0__::func_401(474287981);
		__LIB_0__::func_401(-717025835);
		__LIB_0__::func_401(-338553155);
		__LIB_0__::func_401(-1636879249);
		__LIB_4__::func_495(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", true);
		__LIB_0__::func_804(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", false);
		if (__LIB_0__::func_28())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	if (__LIB_0__::func_898(-1170496998))
	{
		__LIB_0__::func_401(-1306375743);
		__LIB_0__::func_401(-743781837);
		__LIB_0__::func_401(2114706334);
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			Global_1934765.f_15 = VOLUME::_CREATE_VOLUME_CYLINDER(-1353.573f, 2424.476f, 306.385f, 0f, 0f, 0f, 0.4f, 0.4f, 1f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765.f_15, 7);
		}
		__LIB_4__::func_495(149);
		__LIB_4__::func_495(150);
		__LIB_4__::func_495(151);
		__LIB_4__::func_495(152);
	}
	else
	{
		__LIB_0__::func_400(-1306375743);
		__LIB_0__::func_400(-743781837);
		__LIB_0__::func_400(2114706334);
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765.f_15);
			VOLUME::_DELETE_VOLUME(Global_1934765.f_15);
		}
		__LIB_4__::func_524(149);
		__LIB_4__::func_524(150);
		__LIB_4__::func_524(151);
		__LIB_4__::func_524(152);
	}
	__LIB_10__::func_687();
	if (__LIB_0__::func_898(2080210939))
	{
		__LIB_0__::func_401(-1055748784);
	}
	else
	{
		__LIB_0__::func_400(-1055748784);
	}
	if (__LIB_0__::func_898(1485195808))
	{
		__LIB_4__::func_495(147);
		__LIB_4__::func_524(148);
	}
	else
	{
		__LIB_4__::func_524(147);
		__LIB_4__::func_495(148);
	}
	if (__LIB_0__::func_898(-1532284567))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", true);
		}
	}
	else if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", false);
	}
	if (__LIB_0__::func_898(2127577956))
	{
		__LIB_0__::func_401(joaat("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
		__LIB_0__::func_400(joaat("SHA_EXT_SHUTTERS_NORMAL"));
	}
	else
	{
		__LIB_0__::func_401(joaat("SHA_EXT_SHUTTERS_NORMAL"));
		__LIB_0__::func_400(joaat("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
	}
	if (__LIB_0__::func_898(-524145696))
	{
		__LIB_0__::func_401(809554858);
		__LIB_0__::func_401(1810083187);
		__LIB_0__::func_400(159921796);
		__LIB_0__::func_400(-1739900853);
		__LIB_0__::func_401(2113454609);
		__LIB_0__::func_401(-520163372);
		__LIB_0__::func_400(-90228526);
		__LIB_4__::func_524(17);
		__LIB_4__::func_524(2);
		__LIB_4__::func_524(4);
		__LIB_4__::func_495(1);
		__LIB_4__::func_495(5);
		__LIB_1__::func_948(931206119, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(1783003505, 1, 0, 0, 0, 0, 0, 0);
		__LIB_0__::func_401(-646014955);
		__LIB_5__::func_440("shb_nav_camp_running");
		__LIB_5__::func_440("shb_nav_camp_teardown");
		__LIB_0__::func_400(1265596420);
		__LIB_5__::func_440("shb_nav_camp_01");
		__LIB_5__::func_441("shb_nav_camp_00");
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", true);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	else
	{
		__LIB_5__::func_440("shb_nav_camp_00");
		__LIB_5__::func_440("shb_nav_camp_01");
		__LIB_0__::func_400(809554858);
		__LIB_0__::func_400(1265596420);
		__LIB_0__::func_400(1810083187);
		__LIB_1__::func_948(931206119, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(1783003505, 0, 0, 0, 1, 0, 0, 0);
		__LIB_0__::func_400(-646014955);
		if (__LIB_0__::func_898(282809459))
		{
			__LIB_4__::func_524(5);
			__LIB_4__::func_524(17);
			__LIB_4__::func_524(1);
			__LIB_4__::func_524(2);
			__LIB_4__::func_495(4);
			__LIB_0__::func_400(-520163372);
			__LIB_0__::func_401(-90228526);
			__LIB_0__::func_401(159921796);
			__LIB_0__::func_400(-1739900853);
			__LIB_0__::func_400(2113454609);
		}
		else if (__LIB_0__::func_898(1626481264))
		{
			__LIB_4__::func_524(5);
			__LIB_4__::func_524(4);
			__LIB_4__::func_524(1);
			__LIB_4__::func_524(2);
			__LIB_4__::func_495(17);
			__LIB_0__::func_400(-520163372);
			__LIB_0__::func_401(-90228526);
			__LIB_0__::func_401(159921796);
			__LIB_0__::func_401(-1739900853);
			__LIB_0__::func_400(2113454609);
		}
		else
		{
			__LIB_0__::func_400(-90228526);
			__LIB_0__::func_400(159921796);
			__LIB_0__::func_400(-1739900853);
			__LIB_0__::func_401(2113454609);
		}
		__LIB_4__::func_524(1);
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", false);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	if (__LIB_0__::func_898(-63926460))
	{
		__LIB_0__::func_400(1929440211);
		__LIB_0__::func_400(2126897368);
		__LIB_0__::func_401(-833857740);
		__LIB_0__::func_401(-825836321);
		if (__LIB_0__::func_898(1665756137))
		{
			__LIB_0__::func_401(-1718055184);
			__LIB_5__::func_440("han_nav_endless_summer");
			__LIB_5__::func_441("han_nav_endless_summer_marston4");
		}
		else
		{
			__LIB_0__::func_400(-1718055184);
			__LIB_5__::func_440("han_nav_endless_summer_marston4");
			__LIB_5__::func_441("han_nav_endless_summer");
		}
	}
	else
	{
		__LIB_0__::func_400(-833857740);
		__LIB_0__::func_400(-825836321);
		__LIB_0__::func_400(-1718055184);
		__LIB_5__::func_440("han_nav_endless_summer");
		__LIB_5__::func_440("han_nav_endless_summer_marston4");
		__LIB_0__::func_401(1929440211);
	}
	if (__LIB_0__::func_898(374115931))
	{
		__LIB_4__::func_495(164);
		__LIB_5__::func_441("bvh_nav_endless_summer");
	}
	else
	{
		__LIB_4__::func_524(164);
		__LIB_5__::func_440("bvh_nav_endless_summer");
	}
	if (__LIB_0__::func_898(1982676972))
	{
		__LIB_4__::func_495(20);
	}
	else
	{
		__LIB_4__::func_524(20);
	}
	if (__LIB_0__::func_898(-2034257789))
	{
		STREAMING::_REQUEST_IMAP(joaat("SIX_POINT_LIGHTS_ON"));
		__LIB_4__::func_524(22);
		__LIB_4__::func_524(24);
		__LIB_4__::func_495(21);
		__LIB_4__::func_495(23);
	}
	else
	{
		STREAMING::_REMOVE_IMAP(joaat("SIX_POINT_LIGHTS_ON"));
		__LIB_4__::func_524(21);
		__LIB_4__::func_524(23);
		__LIB_4__::func_495(22);
		__LIB_4__::func_495(24);
	}
	if (__LIB_0__::func_898(-1014145132))
	{
		__LIB_4__::func_495(200);
	}
	else
	{
		__LIB_4__::func_524(200);
	}
	if (__LIB_0__::func_898(-1840704908))
	{
		__LIB_4__::func_495(201);
	}
	else
	{
		__LIB_4__::func_524(201);
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_898(-1053549743))
		{
			__LIB_10__::func_739(65536, 1);
		}
		else
		{
			__LIB_10__::func_739(65536, 0);
		}
	}
	__LIB_10__::func_799();
	if (__LIB_0__::func_898(-2073072369))
	{
		__LIB_0__::func_401(1343484786);
		__LIB_0__::func_401(1989074279);
		__LIB_5__::func_441("sad3_nav_rhodes_shootout_00");
	}
	else if (__LIB_0__::func_898(-1674179981))
	{
		if (__LIB_0__::func_898(-1053549743))
		{
			__LIB_0__::func_401(1871051363);
			__LIB_0__::func_401(-2144587490);
			__LIB_0__::func_401(1033721560);
			__LIB_5__::func_441("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			__LIB_0__::func_401(1343484786);
			__LIB_0__::func_401(-1671953459);
			__LIB_0__::func_401(1871051363);
			__LIB_0__::func_401(-2144587490);
			__LIB_5__::func_441("rho_nav_grave_norm_gry3_off");
		}
	}
	else if (__LIB_0__::func_898(-1835851517))
	{
		if (__LIB_0__::func_898(-1053549743))
		{
			__LIB_0__::func_401(-2144587490);
			__LIB_0__::func_401(1033721560);
			__LIB_5__::func_441("rho_nav_grave_dug_gry3_on");
		}
		else
		{
			__LIB_0__::func_401(1343484786);
			__LIB_0__::func_401(-1671953459);
			__LIB_0__::func_401(-2144587490);
			__LIB_5__::func_441("rho_nav_grave_dug_gry3_off");
		}
	}
	else if (__LIB_0__::func_898(-1838352012))
	{
		if (__LIB_0__::func_898(-1053549743))
		{
			__LIB_0__::func_401(146746575);
			__LIB_0__::func_401(1033721560);
			__LIB_5__::func_441("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			__LIB_0__::func_401(1343484786);
			__LIB_0__::func_401(-1671953459);
			__LIB_0__::func_401(146746575);
			__LIB_5__::func_441("rho_nav_grave_norm_gry3_off");
		}
	}
	if (__LIB_0__::func_898(-644722288))
	{
		__LIB_0__::func_400(1882605165);
		__LIB_0__::func_401(869642051);
	}
	else
	{
		__LIB_0__::func_400(869642051);
		__LIB_0__::func_401(1882605165);
	}
	if (__LIB_0__::func_898(1691618738))
	{
		__LIB_0__::func_400(-184821200);
		__LIB_0__::func_401(-490818122);
		__LIB_0__::func_401(1412515639);
		__LIB_0__::func_401(-1377139506);
	}
	else
	{
		__LIB_0__::func_401(-184821200);
		__LIB_0__::func_400(-490818122);
		__LIB_0__::func_400(1412515639);
		__LIB_0__::func_400(-1377139506);
	}
	if (__LIB_0__::func_898(-741351766))
	{
		__LIB_4__::func_524(130);
		__LIB_4__::func_495(131);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12) && !bParam1)
		{
			Global_1934765.f_12 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1351.383f, -1380.619f, 84.314f, 1.5f, 3f, 1.5f, 347f, false, 7);
		}
	}
	else
	{
		__LIB_4__::func_524(131);
		__LIB_4__::func_495(130);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_12));
		}
	}
	if (__LIB_0__::func_898(-1717960576))
	{
		__LIB_4__::func_524(133);
		__LIB_4__::func_495(132);
	}
	else if (__LIB_0__::func_898(210001842))
	{
		__LIB_4__::func_524(132);
		__LIB_4__::func_495(133);
	}
	if (__LIB_0__::func_898(-1164215952))
	{
		__LIB_0__::func_400(1603294144);
		__LIB_0__::func_401(349486662);
		__LIB_4__::func_524(144);
		__LIB_4__::func_495(143);
	}
	else
	{
		__LIB_0__::func_400(349486662);
		__LIB_0__::func_401(1603294144);
		__LIB_4__::func_524(143);
		__LIB_4__::func_495(144);
	}
	if (__LIB_0__::func_898(-1236261996))
	{
		__LIB_0__::func_400(897455211);
		__LIB_0__::func_400(774477221);
		__LIB_0__::func_401(1136898294);
		__LIB_0__::func_401(1097534152);
		__LIB_4__::func_524(146);
		__LIB_4__::func_495(145);
	}
	else
	{
		__LIB_0__::func_400(1136898294);
		__LIB_0__::func_400(1097534152);
		__LIB_0__::func_401(897455211);
		__LIB_0__::func_401(774477221);
		__LIB_4__::func_524(145);
		__LIB_4__::func_495(146);
	}
	if (__LIB_0__::func_898(-1799960545))
	{
		__LIB_4__::func_524(170);
		__LIB_4__::func_495(169);
	}
	else
	{
		__LIB_4__::func_524(169);
		__LIB_4__::func_495(170);
	}
	if (__LIB_0__::func_898(-628542779))
	{
		__LIB_4__::func_495(180);
	}
	else
	{
		__LIB_4__::func_524(180);
	}
	if (__LIB_0__::func_898(1500064347))
	{
		__LIB_0__::func_401(724436573);
		__LIB_0__::func_400(-1475403379);
	}
	else
	{
		__LIB_0__::func_401(-1475403379);
		__LIB_0__::func_400(724436573);
	}
	if (__LIB_0__::func_898(-1741667789))
	{
		__LIB_4__::func_524(179);
	}
	else
	{
		__LIB_4__::func_495(179);
	}
	if (__LIB_0__::func_898(-853383233))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (!__LIB_0__::func_117(70, 32))
			{
				__LIB_0__::func_123(70, 32);
				__LIB_8__::func_783(70);
			}
		}
	}
	else if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_117(70, 32))
		{
			__LIB_0__::func_121(70, 32);
			__LIB_5__::func_458(70);
		}
	}
	if (__LIB_0__::func_898(-334729750))
	{
		__LIB_0__::func_401(1138093977);
		__LIB_5__::func_441("wat_nav_grave");
	}
	else
	{
		__LIB_0__::func_400(1138093977);
		__LIB_5__::func_440("wat_nav_grave");
	}
	if (__LIB_0__::func_898(1926308480))
	{
		__LIB_0__::func_400(1849913721);
		__LIB_0__::func_401(573576705);
	}
	else if (__LIB_0__::func_898(280705402))
	{
		__LIB_0__::func_401(1849913721);
		__LIB_0__::func_400(573576705);
	}
	else if (__LIB_0__::func_898(1766284049))
	{
		__LIB_0__::func_400(1849913721);
		__LIB_0__::func_400(573576705);
	}
	if (__LIB_0__::func_898(-150493654))
	{
		__LIB_0__::func_400(-848315456);
		__LIB_0__::func_400(105426297);
		__LIB_0__::func_400(2095421392);
		__LIB_0__::func_400(-1614141377);
		__LIB_0__::func_400(45121961);
		__LIB_0__::func_400(-7594117);
		__LIB_0__::func_400(1388161943);
		__LIB_0__::func_401(-642132908);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[2]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[3]));
		}
		__LIB_5__::func_440("utp2_nav_tree_fallen");
	}
	else if (__LIB_0__::func_898(-1271608261))
	{
		__LIB_0__::func_400(-642132908);
		__LIB_0__::func_400(105426297);
		__LIB_0__::func_400(-1614141377);
		__LIB_0__::func_400(45121961);
		__LIB_0__::func_400(-7594117);
		__LIB_0__::func_400(1388161943);
		__LIB_0__::func_401(2095421392);
		__LIB_0__::func_401(-848315456);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 42.664f, 1f, 13f, 1f, 15f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
		{
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
		}
		__LIB_5__::func_440("utp2_nav_tree_fallen");
	}
	else if (__LIB_0__::func_898(1846061697))
	{
		__LIB_0__::func_400(-642132908);
		__LIB_0__::func_400(2095421392);
		__LIB_0__::func_400(105426297);
		__LIB_0__::func_400(-7594117);
		__LIB_0__::func_401(45121961);
		__LIB_0__::func_401(-1614141377);
		__LIB_0__::func_401(-848315456);
		__LIB_0__::func_401(1388161943);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
		PATHFIND::_0xAFE2AE66F6251C66(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 41.664f, 1f, 13f, 3f, 15f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
		{
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
		}
		__LIB_5__::func_441("utp2_nav_tree_fallen");
	}
	else if (__LIB_0__::func_898(-1145519186))
	{
		__LIB_0__::func_400(-642132908);
		__LIB_0__::func_400(-848315456);
		__LIB_0__::func_400(-1614141377);
		__LIB_0__::func_400(45121961);
		__LIB_0__::func_400(2095421392);
		__LIB_0__::func_400(-7594117);
		__LIB_0__::func_400(1388161943);
		__LIB_0__::func_401(105426297);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[2]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[3]));
		}
		__LIB_5__::func_440("utp2_nav_tree_fallen");
	}
	if (!__LIB_2__::func_774(51))
	{
		if (__LIB_0__::func_898(1485494263))
		{
			__LIB_0__::func_400(1672215059);
			__LIB_0__::func_400(-1177027698);
			__LIB_0__::func_400(23211744);
			__LIB_0__::func_400(604668055);
			__LIB_0__::func_400(joaat("DES_NTVS2_TREEFALL"));
			__LIB_0__::func_401(1708195603);
			__LIB_5__::func_441("nts2_fallen_tree_ridge");
		}
		else
		{
			__LIB_0__::func_400(23211744);
			__LIB_0__::func_400(604668055);
			__LIB_0__::func_400(1708195603);
			__LIB_0__::func_401(joaat("DES_NTVS2_TREEFALL"));
			__LIB_0__::func_401(1672215059);
			__LIB_0__::func_401(-1177027698);
			__LIB_5__::func_440("nts2_fallen_tree_ridge");
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_898(-811637947))
		{
			if (__LIB_0__::func_117(497, 32))
			{
				__LIB_0__::func_121(497, 32);
				__LIB_5__::func_458(497);
			}
			if (__LIB_0__::func_117(498, 32))
			{
				__LIB_0__::func_121(498, 32);
				__LIB_5__::func_458(498);
			}
		}
		else
		{
			if (!__LIB_0__::func_117(497, 32))
			{
				__LIB_0__::func_123(497, 32);
				__LIB_8__::func_783(497);
			}
			if (!__LIB_0__::func_117(498, 32))
			{
				__LIB_0__::func_123(498, 32);
				__LIB_8__::func_783(498);
			}
		}
	}
	if (__LIB_0__::func_898(106479759))
	{
		__LIB_0__::func_400(-1403908542);
		__LIB_0__::func_400(1598834669);
		__LIB_0__::func_400(1299817544);
		__LIB_0__::func_400(1204787444);
		__LIB_0__::func_400(66523468);
		__LIB_0__::func_400(2040259178);
		__LIB_0__::func_400(1947806010);
		__LIB_5__::func_440("str_nav_construction_stage_0");
		__LIB_5__::func_440("str_nav_construction_stage_1");
		__LIB_5__::func_440("str_nav_construction_stage_2");
		__LIB_5__::func_440("str_nav_construction_stage_3");
		__LIB_0__::func_401(1924458218);
		__LIB_5__::func_441("utp1_bridge_cover");
	}
	else
	{
		__LIB_0__::func_400(1924458218);
		__LIB_5__::func_440("utp1_bridge_cover");
		if (__LIB_0__::func_898(198200492))
		{
			__LIB_0__::func_400(1299817544);
			__LIB_0__::func_400(1204787444);
			__LIB_0__::func_400(66523468);
			__LIB_0__::func_400(2040259178);
			__LIB_0__::func_400(1947806010);
			__LIB_5__::func_440("str_nav_construction_stage_1");
			__LIB_5__::func_440("str_nav_construction_stage_2");
			__LIB_5__::func_440("str_nav_construction_stage_3");
			__LIB_0__::func_401(-1403908542);
			__LIB_0__::func_401(1598834669);
			__LIB_5__::func_441("str_nav_construction_stage_0");
			if (__LIB_0__::func_2() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", false);
		}
		else if (__LIB_0__::func_898(-1124061431))
		{
			__LIB_0__::func_400(-1403908542);
			__LIB_0__::func_400(1598834669);
			__LIB_0__::func_400(1204787444);
			__LIB_0__::func_400(66523468);
			__LIB_0__::func_400(2040259178);
			__LIB_0__::func_400(1947806010);
			__LIB_5__::func_440("str_nav_construction_stage_0");
			__LIB_5__::func_440("str_nav_construction_stage_2");
			__LIB_5__::func_440("str_nav_construction_stage_3");
			__LIB_0__::func_401(1299817544);
			__LIB_5__::func_441("str_nav_construction_stage_1");
			if (__LIB_0__::func_2() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (__LIB_0__::func_898(52706132))
		{
			__LIB_0__::func_400(-1403908542);
			__LIB_0__::func_400(1598834669);
			__LIB_0__::func_400(1299817544);
			__LIB_0__::func_400(66523468);
			__LIB_0__::func_400(2040259178);
			__LIB_0__::func_400(1947806010);
			__LIB_5__::func_440("str_nav_construction_stage_0");
			__LIB_5__::func_440("str_nav_construction_stage_1");
			__LIB_5__::func_440("str_nav_construction_stage_3");
			__LIB_0__::func_401(1204787444);
			__LIB_5__::func_441("str_nav_construction_stage_2");
			if (__LIB_0__::func_2() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (__LIB_0__::func_898(-259123672))
		{
			__LIB_0__::func_400(-1403908542);
			__LIB_0__::func_400(1598834669);
			__LIB_0__::func_400(1299817544);
			__LIB_0__::func_400(1204787444);
			__LIB_5__::func_440("str_nav_construction_stage_0");
			__LIB_5__::func_440("str_nav_construction_stage_1");
			__LIB_5__::func_440("str_nav_construction_stage_2");
			__LIB_0__::func_401(66523468);
			__LIB_0__::func_401(2040259178);
			__LIB_0__::func_401(1947806010);
			__LIB_5__::func_441("str_nav_construction_stage_3");
			if (__LIB_0__::func_2() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
	}
	if (__LIB_0__::func_898(-356975260))
	{
		__LIB_0__::func_400(73781828);
		__LIB_0__::func_401(-391567710);
	}
	else
	{
		__LIB_0__::func_400(-391567710);
		__LIB_0__::func_401(73781828);
	}
	if (__LIB_0__::func_898(-2106214197))
	{
	}
	else if (__LIB_0__::func_898(-1029225159))
	{
	}
	if (__LIB_0__::func_898(757752139))
	{
		__LIB_4__::func_524(168);
	}
	else
	{
		__LIB_4__::func_495(168);
	}
	if (__LIB_0__::func_898(1609506757))
	{
		__LIB_0__::func_401(-205116461);
		__LIB_0__::func_401(-1490034522);
		__LIB_0__::func_400(-1473336090);
		__LIB_0__::func_400(-1013403664);
		if (!Global_1934765.f_289)
		{
			Global_1934765.f_401 = -1;
			Global_1934765.f_289 = 1;
		}
		__LIB_4__::func_524(158);
		if (!__LIB_2__::func_774(47))
		{
			__LIB_4__::func_495(159);
		}
		else
		{
			__LIB_4__::func_524(159);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_14));
		}
		if (__LIB_0__::func_898(439465264))
		{
			__LIB_4__::func_495(155);
			__LIB_4__::func_524(154);
			__LIB_4__::func_495(157);
			__LIB_4__::func_524(156);
		}
		else
		{
			__LIB_4__::func_495(156);
			__LIB_9__::func_925(156);
			__LIB_4__::func_495(154);
			__LIB_4__::func_524(155);
			__LIB_4__::func_524(157);
		}
	}
	else
	{
		__LIB_0__::func_401(-1473336090);
		__LIB_0__::func_401(-1013403664);
		__LIB_0__::func_400(-205116461);
		__LIB_0__::func_400(-1490034522);
		Global_1934765.f_289 = 0;
		__LIB_4__::func_524(154);
		__LIB_4__::func_524(155);
		__LIB_4__::func_524(157);
		__LIB_4__::func_524(156);
		__LIB_4__::func_524(159);
		__LIB_4__::func_495(158);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14) && !bParam1)
		{
			Global_1934765.f_14 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2698.198f, -1187.154f, 51.26f, 3.878f, 0.326f, 3.352f, __LIB_3__::func_745(-179f), false, 7);
		}
	}
	if (__LIB_0__::func_898(-2021582629) && __LIB_0__::func_181())
	{
		__LIB_0__::func_400(432272547);
		__LIB_0__::func_401(204868257);
		__LIB_5__::func_441("nav_sdn_fundraiser");
	}
	else
	{
		__LIB_0__::func_400(204868257);
		__LIB_0__::func_401(432272547);
		__LIB_5__::func_440("nav_sdn_fundraiser");
	}
	if (__LIB_0__::func_898(-1232809834))
	{
		__LIB_0__::func_400(206289712);
		__LIB_0__::func_401(-1225383143);
	}
	else
	{
		__LIB_0__::func_400(-1225383143);
		__LIB_0__::func_401(206289712);
	}
	if (__LIB_0__::func_898(141950038))
	{
		__LIB_0__::func_400(-473077489);
		__LIB_0__::func_401(619024057);
		__LIB_0__::func_401(-836433697);
		__LIB_3__::func_124(586229709, 1);
	}
	else
	{
		__LIB_0__::func_400(-836433697);
		__LIB_0__::func_400(619024057);
		__LIB_0__::func_401(-473077489);
		__LIB_3__::func_123(586229709, 1);
	}
	if (__LIB_0__::func_898(544152906))
	{
		__LIB_0__::func_400(1821956151);
		__LIB_0__::func_401(-704461521);
	}
	else
	{
		__LIB_0__::func_400(-704461521);
		__LIB_0__::func_401(1821956151);
	}
	if (__LIB_0__::func_898(26054262))
	{
		__LIB_4__::func_495(166);
	}
	else
	{
		__LIB_4__::func_524(166);
	}
	if (__LIB_0__::func_898(-503955743))
	{
		__LIB_4__::func_495(167);
	}
	else
	{
		__LIB_4__::func_524(167);
	}
	if (__LIB_0__::func_898(945612176))
	{
		__LIB_4__::func_495(161);
		__LIB_4__::func_495(163);
		__LIB_4__::func_524(160);
		__LIB_4__::func_524(162);
	}
	else
	{
		__LIB_4__::func_495(160);
		__LIB_4__::func_495(162);
		__LIB_4__::func_524(161);
		__LIB_4__::func_524(163);
	}
	if (__LIB_0__::func_898(-1706438978))
	{
		__LIB_4__::func_495(142);
		__LIB_4__::func_524(141);
	}
	else
	{
		__LIB_4__::func_524(141);
		__LIB_4__::func_524(142);
	}
	if (__LIB_0__::func_898(94263042))
	{
		__LIB_0__::func_401(-1499162505);
		__LIB_0__::func_401(joaat("AMB_CAMP_GRZ_FINALE2"));
		if (__LIB_0__::func_898(-2106445152))
		{
			__LIB_0__::func_400(-1832103801);
			__LIB_4__::func_524(230);
			__LIB_5__::func_440("fin2_micah_hideout");
			__LIB_5__::func_441("fin2_micah_hideout_abandon");
		}
		else
		{
			__LIB_0__::func_401(-1832103801);
			__LIB_4__::func_495(230);
			__LIB_5__::func_440("fin2_micah_hideout_abandon");
			__LIB_5__::func_441("fin2_micah_hideout");
		}
	}
	else
	{
		__LIB_0__::func_400(-1499162505);
		__LIB_0__::func_400(joaat("AMB_CAMP_GRZ_FINALE2"));
		__LIB_0__::func_400(-1832103801);
		__LIB_4__::func_524(230);
		__LIB_5__::func_440("fin2_micah_hideout");
		__LIB_5__::func_440("fin2_micah_hideout_abandon");
	}
	if (__LIB_0__::func_898(-25901845))
	{
		__LIB_0__::func_400(-468702164);
		__LIB_4__::func_524(192);
		__LIB_0__::func_401(-1436188587);
		__LIB_4__::func_495(191);
	}
	else
	{
		__LIB_0__::func_400(-1436188587);
		__LIB_4__::func_524(191);
		__LIB_0__::func_401(-468702164);
		__LIB_4__::func_495(192);
	}
	if (__LIB_0__::func_898(-75024673))
	{
		__LIB_0__::func_401(1573766063);
	}
	else
	{
		__LIB_0__::func_400(1573766063);
	}
	if (__LIB_0__::func_898(1250636944))
	{
		__LIB_0__::func_401(-892659042);
	}
	else
	{
		__LIB_0__::func_400(-892659042);
	}
	if (__LIB_0__::func_898(-1831552326))
	{
		__LIB_4__::func_495(194);
		__LIB_4__::func_524(195);
	}
	else
	{
		__LIB_4__::func_495(195);
		__LIB_4__::func_524(194);
	}
	if (__LIB_0__::func_898(-1151084372))
	{
		__LIB_4__::func_495(196);
	}
	else
	{
		__LIB_4__::func_524(196);
	}
	if (__LIB_0__::func_898(1064154891))
	{
		__LIB_4__::func_495(19);
		__LIB_4__::func_524(18);
	}
	else
	{
		__LIB_4__::func_495(18);
		__LIB_4__::func_524(19);
	}
	if (__LIB_0__::func_898(1822001510))
	{
	}
	else if (__LIB_0__::func_898(-1612662716))
	{
	}
	if (__LIB_0__::func_898(689930684))
	{
		__LIB_4__::func_495(176);
	}
	else
	{
		__LIB_4__::func_524(176);
	}
	if (__LIB_0__::func_898(-1957523409))
	{
		__LIB_4__::func_495(177);
	}
	else
	{
		__LIB_4__::func_524(177);
	}
	if (__LIB_0__::func_898(1306158345))
	{
		__LIB_0__::func_400(943998860);
		__LIB_0__::func_400(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_400(580700069);
		__LIB_0__::func_400(1347068672);
		__LIB_5__::func_440("HKK_Trashed_Wagons");
		__LIB_5__::func_440("HKK_Part_Fixed");
		__LIB_5__::func_440("HKK_Camp_Only");
		__LIB_10__::func_740(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (__LIB_0__::func_898(1952610440))
	{
		__LIB_0__::func_400(943998860);
		__LIB_0__::func_401(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_401(580700069);
		__LIB_0__::func_401(1347068672);
		__LIB_5__::func_440("HKK_Part_Fixed");
		__LIB_5__::func_440("HKK_Camp_Only");
		__LIB_5__::func_441("HKK_Trashed_Wagons");
		__LIB_10__::func_741(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (__LIB_0__::func_898(-223469678))
	{
		__LIB_0__::func_401(943998860);
		__LIB_0__::func_401(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_400(580700069);
		__LIB_0__::func_400(1347068672);
		__LIB_5__::func_440("HKK_Trashed_Wagons");
		__LIB_5__::func_440("HKK_Camp_Only");
		__LIB_5__::func_441("HKK_Part_Fixed");
		__LIB_10__::func_741(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (__LIB_0__::func_898(-404698347))
	{
		__LIB_0__::func_401(943998860);
		__LIB_0__::func_400(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_400(580700069);
		__LIB_0__::func_400(1347068672);
		__LIB_5__::func_440("HKK_Trashed_Wagons");
		__LIB_5__::func_440("HKK_Part_Fixed");
		__LIB_5__::func_441("HKK_Camp_Only");
		__LIB_10__::func_741(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (__LIB_0__::func_898(1517904467))
	{
		__LIB_0__::func_400(943998860);
		__LIB_0__::func_400(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		__LIB_0__::func_400(580700069);
		__LIB_0__::func_400(1347068672);
		__LIB_5__::func_440("HKK_Trashed_Wagons");
		__LIB_5__::func_440("HKK_Part_Fixed");
		__LIB_5__::func_440("HKK_Camp_Only");
		__LIB_10__::func_740(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	if (__LIB_0__::func_898(-1405998267))
	{
		__LIB_0__::func_401(2015532863);
	}
	else
	{
		__LIB_0__::func_400(2015532863);
	}
	if (__LIB_0__::func_898(-468693731))
	{
		__LIB_0__::func_400(-800942395);
		__LIB_0__::func_401(-741366935);
	}
	else
	{
		__LIB_0__::func_400(-741366935);
		__LIB_0__::func_401(-800942395);
	}
	if (__LIB_0__::func_898(-238080464))
	{
		__LIB_0__::func_401(-1579403437);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10) && !bParam1)
		{
			Global_1934765.f_10 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-304.439f, 783.08f, 117.11f, 1.909f, 4.17f, 3f, 9.6f, false, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(-1579403437);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_10));
		}
	}
	if (__LIB_0__::func_898(1607768502))
	{
		__LIB_0__::func_401(808576710);
		__LIB_0__::func_400(-775951892);
		__LIB_0__::func_400(1547403545);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(137316925);
		__LIB_0__::func_400(-660075384);
	}
	else if (__LIB_0__::func_898(-1852605133))
	{
		__LIB_0__::func_401(1547403545);
		__LIB_0__::func_400(-775951892);
		__LIB_0__::func_400(808576710);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(137316925);
		__LIB_0__::func_400(-660075384);
	}
	else if (__LIB_0__::func_898(-129643890))
	{
		__LIB_0__::func_401(-660075384);
		__LIB_0__::func_400(-775951892);
		__LIB_0__::func_400(1547403545);
		__LIB_0__::func_400(808576710);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(137316925);
	}
	else if (__LIB_0__::func_898(-1433686245))
	{
		__LIB_0__::func_401(137316925);
		__LIB_0__::func_400(-775951892);
		__LIB_0__::func_400(1547403545);
		__LIB_0__::func_400(808576710);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(-660075384);
	}
	else
	{
		__LIB_0__::func_401(-775951892);
		__LIB_0__::func_400(1547403545);
		__LIB_0__::func_400(808576710);
		__LIB_0__::func_400(1431947993);
		__LIB_0__::func_400(137316925);
		__LIB_0__::func_400(-660075384);
	}
	if (__LIB_0__::func_898(192515737))
	{
		__LIB_0__::func_401(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(-1617847332);
		__LIB_0__::func_400(317070801);
	}
	else if (__LIB_0__::func_898(426191476))
	{
		__LIB_0__::func_401(-2142987163);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(-1617847332);
		__LIB_0__::func_400(317070801);
	}
	else if (__LIB_0__::func_898(187862543))
	{
		__LIB_0__::func_401(1027093524);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(-1617847332);
		__LIB_0__::func_400(317070801);
	}
	else if (__LIB_0__::func_898(417081698))
	{
		__LIB_0__::func_401(1879779330);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(-1617847332);
		__LIB_0__::func_400(317070801);
	}
	else if (__LIB_0__::func_898(791041526))
	{
		__LIB_0__::func_401(-1617847332);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(317070801);
	}
	else
	{
		__LIB_0__::func_401(317070801);
		__LIB_0__::func_400(1104143966);
		__LIB_0__::func_400(-2142987163);
		__LIB_0__::func_400(1027093524);
		__LIB_0__::func_400(1879779330);
		__LIB_0__::func_400(-1617847332);
	}
	if (__LIB_0__::func_293(45))
	{
		if (__LIB_0__::func_898(-1838712533))
		{
			__LIB_0__::func_401(-771786794);
			__LIB_0__::func_400(-1267247536);
			__LIB_0__::func_400(-468635897);
			__LIB_0__::func_400(535384482);
			__LIB_0__::func_400(1088045886);
			__LIB_0__::func_400(-1678761663);
			__LIB_0__::func_400(1724413302);
			__LIB_0__::func_400(-626641013);
		}
		else if (__LIB_0__::func_898(1140218954))
		{
			__LIB_0__::func_401(-1267247536);
			__LIB_0__::func_400(-468635897);
			__LIB_0__::func_400(-771786794);
			__LIB_0__::func_400(535384482);
			__LIB_0__::func_400(1088045886);
			__LIB_0__::func_400(-1678761663);
			__LIB_0__::func_400(1724413302);
			__LIB_0__::func_400(-626641013);
		}
		else
		{
			__LIB_0__::func_401(-468635897);
			__LIB_0__::func_400(-771786794);
			__LIB_0__::func_400(-1267247536);
			__LIB_0__::func_400(535384482);
			__LIB_0__::func_400(1088045886);
			__LIB_0__::func_400(-1678761663);
			__LIB_0__::func_400(1724413302);
			__LIB_0__::func_400(-626641013);
		}
	}
	else if (__LIB_0__::func_898(-1257057567))
	{
		__LIB_0__::func_401(1088045886);
		__LIB_0__::func_400(-1678761663);
		__LIB_0__::func_400(1724413302);
		__LIB_0__::func_400(-626641013);
		__LIB_0__::func_400(535384482);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	else if (__LIB_0__::func_898(-1419919497))
	{
		__LIB_0__::func_401(-1678761663);
		__LIB_0__::func_400(1724413302);
		__LIB_0__::func_400(-626641013);
		__LIB_0__::func_400(535384482);
		__LIB_0__::func_400(1088045886);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	else if (__LIB_0__::func_898(-1718674470))
	{
		__LIB_0__::func_401(1724413302);
		__LIB_0__::func_400(-626641013);
		__LIB_0__::func_400(535384482);
		__LIB_0__::func_400(1088045886);
		__LIB_0__::func_400(-1678761663);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	else if (__LIB_0__::func_898(-35658630))
	{
		__LIB_0__::func_401(-626641013);
		__LIB_0__::func_400(535384482);
		__LIB_0__::func_400(1088045886);
		__LIB_0__::func_400(-1678761663);
		__LIB_0__::func_400(1724413302);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	else
	{
		__LIB_0__::func_401(535384482);
		__LIB_0__::func_400(1088045886);
		__LIB_0__::func_400(-1678761663);
		__LIB_0__::func_400(1724413302);
		__LIB_0__::func_400(-626641013);
		__LIB_0__::func_400(-771786794);
		__LIB_0__::func_400(-1267247536);
		__LIB_0__::func_400(-468635897);
	}
	if (__LIB_0__::func_898(-108307814))
	{
		__LIB_0__::func_400(-205505701);
		__LIB_0__::func_401(-51262018);
	}
	else
	{
		__LIB_0__::func_400(-51262018);
		__LIB_0__::func_401(-205505701);
	}
	if (__LIB_0__::func_898(-1123615607))
	{
		__LIB_0__::func_400(874022542);
		__LIB_0__::func_400(joaat("DES_DIS_ALCHEMIST"));
		__LIB_0__::func_401(552030279);
		__LIB_5__::func_441("disco_nav_alchemist_house_burnt");
	}
	else
	{
		__LIB_0__::func_400(552030279);
		__LIB_5__::func_440("disco_nav_alchemist_house_burnt");
		__LIB_0__::func_401(874022542);
		__LIB_0__::func_401(joaat("DES_DIS_ALCHEMIST"));
	}
	if (__LIB_0__::func_898(-261141318))
	{
		__LIB_0__::func_401(-531198053);
	}
	else
	{
		__LIB_0__::func_400(-531198053);
	}
	__LIB_0__::func_401(-791673850);
	__LIB_0__::func_401(-395621323);
	__LIB_0__::func_401(-1799943886);
	__LIB_0__::func_401(-1436313374);
	__LIB_0__::func_401(1473078398);
	__LIB_0__::func_400(-2116659774);
	__LIB_0__::func_401(-953275122);
	__LIB_0__::func_401(-893624314);
	__LIB_0__::func_401(1193359531);
	__LIB_0__::func_401(1145227353);
	__LIB_0__::func_401(1915867459);
	__LIB_0__::func_401(98482444);
	__LIB_0__::func_401(26932594);
	__LIB_0__::func_401(-1930879809);
	__LIB_0__::func_401(46370274);
	__LIB_0__::func_401(-1279036865);
	__LIB_0__::func_401(781058494);
	__LIB_0__::func_401(1467466015);
	__LIB_0__::func_401(-363626454);
	__LIB_0__::func_401(-1314125880);
	__LIB_0__::func_401(1763246099);
	__LIB_0__::func_401(-593457329);
	__LIB_0__::func_401(274045919);
	__LIB_0__::func_401(-1047394327);
	__LIB_0__::func_401(-1535282356);
	__LIB_0__::func_401(-1816233372);
	__LIB_0__::func_401(-551038153);
	__LIB_0__::func_401(-1022426685);
	__LIB_0__::func_401(-262759679);
	__LIB_0__::func_401(976641588);
	__LIB_0__::func_401(1601053042);
	__LIB_0__::func_400(453346329);
	__LIB_0__::func_401(-1233192626);
	__LIB_0__::func_400(-620856989);
	__LIB_0__::func_401(1262164851);
	__LIB_0__::func_401(-755250900);
	__LIB_5__::func_440("disco_nav_circus_wagon_off");
	__LIB_0__::func_401(658964321);
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_13) && !bParam1)
	{
		Global_1934765.f_13 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2813.128f, 991.613f, 54.6f, 9.375f, 3.243f, 7.954f, 30.906f, false, 7);
	}
	__LIB_4__::func_495(202);
	__LIB_4__::func_495(231);
	if (__LIB_0__::func_898(1015669983))
	{
		__LIB_0__::func_400(317070801);
		__LIB_0__::func_401(-763477089);
	}
	else
	{
		__LIB_0__::func_400(-763477089);
		__LIB_0__::func_401(317070801);
	}
	if (__LIB_0__::func_898(1867912207))
	{
		__LIB_4__::func_524(175);
		__LIB_4__::func_495(174);
	}
	else
	{
		__LIB_4__::func_524(174);
		__LIB_4__::func_495(175);
	}
	if (__LIB_0__::func_898(-534215902))
	{
		__LIB_4__::func_524(197);
	}
	else
	{
		__LIB_4__::func_495(197);
	}
	if (__LIB_0__::func_898(-9438024))
	{
		__LIB_4__::func_524(173);
		__LIB_4__::func_495(171);
		__LIB_4__::func_495(172);
	}
	else
	{
		__LIB_4__::func_495(173);
		__LIB_4__::func_524(171);
		__LIB_4__::func_524(172);
	}
	if (__LIB_0__::func_898(-1223121209))
	{
		__LIB_0__::func_400(1886602884);
		__LIB_0__::func_400(-1640200357);
		__LIB_0__::func_401(-1280884206);
	}
	else if (__LIB_0__::func_898(630808005))
	{
		__LIB_0__::func_400(-1280884206);
		__LIB_0__::func_401(1886602884);
		__LIB_0__::func_401(-1640200357);
	}
	else
	{
		__LIB_0__::func_400(-1280884206);
		__LIB_0__::func_400(-1640200357);
		__LIB_0__::func_401(1886602884);
	}
	if (__LIB_0__::func_898(1453909576))
	{
		__LIB_0__::func_400(-2127665186);
		__LIB_0__::func_400(-451832572);
		__LIB_0__::func_400(-689352221);
		__LIB_0__::func_400(1854980771);
		__LIB_0__::func_400(325677491);
		__LIB_0__::func_400(-391187090);
		__LIB_0__::func_400(1513363974);
		__LIB_0__::func_400(-1349539327);
		__LIB_0__::func_400(1963724330);
		__LIB_0__::func_401(-1902184438);
		__LIB_0__::func_401(1236921921);
		__LIB_0__::func_401(740012805);
	}
	else if (__LIB_0__::func_898(1643531967))
	{
		__LIB_0__::func_400(-1902184438);
		__LIB_0__::func_400(-689352221);
		__LIB_0__::func_400(1236921921);
		__LIB_0__::func_400(-391187090);
		__LIB_0__::func_400(740012805);
		__LIB_0__::func_400(1963724330);
		__LIB_0__::func_401(-2127665186);
		__LIB_0__::func_401(-451832572);
		__LIB_0__::func_401(1854980771);
		__LIB_0__::func_401(325677491);
		__LIB_0__::func_401(1513363974);
		__LIB_0__::func_401(-1349539327);
	}
	else
	{
		__LIB_0__::func_400(-1902184438);
		__LIB_0__::func_400(-451832572);
		__LIB_0__::func_400(1236921921);
		__LIB_0__::func_400(325677491);
		__LIB_0__::func_400(740012805);
		__LIB_0__::func_400(-1349539327);
		__LIB_0__::func_401(-2127665186);
		__LIB_0__::func_401(-689352221);
		__LIB_0__::func_401(1854980771);
		__LIB_0__::func_401(-391187090);
		__LIB_0__::func_401(1513363974);
		__LIB_0__::func_401(1963724330);
	}
	if (__LIB_0__::func_898(1164928979))
	{
		__LIB_0__::func_400(-1366431554);
		__LIB_0__::func_401(-960136064);
	}
	else
	{
		__LIB_0__::func_400(-960136064);
		__LIB_0__::func_401(-1366431554);
	}
	if (__LIB_0__::func_898(527226204))
	{
		__LIB_0__::func_400(-2122914678);
		__LIB_0__::func_401(-518004776);
	}
	else
	{
		__LIB_0__::func_400(-518004776);
		__LIB_0__::func_401(-2122914678);
	}
	if (__LIB_0__::func_898(1944170089))
	{
		__LIB_0__::func_401(1210820782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3) && !bParam1)
		{
			Global_1934765.f_3 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(665.03f, -1252.61f, 42.82f, 0.55f, 0.55f, 1f, 0f, false, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(1210820782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_3));
		}
	}
	if (__LIB_0__::func_898(1213993593))
	{
		__LIB_0__::func_401(-520400509);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4) && !bParam1)
		{
			Global_1934765.f_4 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-112.01f, -36.73f, 95.65f, 0.5f, 0.5f, 0.75f, 0f, false, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(-520400509);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_4));
		}
	}
	if (__LIB_0__::func_898(1216784232))
	{
		__LIB_0__::func_401(-1813544782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11) && !bParam1)
		{
			Global_1934765.f_11 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1593.796f, -181.753f, 138.934f, 6.212f, 2.801f, 5.068f, 220.2273f, false, 7);
		}
	}
	else
	{
		__LIB_0__::func_400(-1813544782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_11));
		}
	}
	if (__LIB_0__::func_898(1410198831))
	{
		__LIB_0__::func_401(joaat("REG_HRT_HUNTING02"));
		__LIB_10__::func_741(joaat("REG_HRT_HUNTING02"));
	}
	else
	{
		__LIB_0__::func_400(joaat("REG_HRT_HUNTING02"));
		__LIB_10__::func_740(joaat("REG_HRT_HUNTING02"));
	}
	if (__LIB_0__::func_898(-538889627))
	{
		if (__LIB_1__::func_533(536870912) == 0)
		{
			__LIB_5__::func_548(536870912);
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		__LIB_0__::func_400(1221694281);
		__LIB_0__::func_400(-1552951782);
		__LIB_0__::func_400(-1142569437);
		__LIB_0__::func_400(474113610);
		__LIB_0__::func_400(-297340751);
		__LIB_0__::func_400(1802934313);
		__LIB_0__::func_400(2108112010);
		__LIB_0__::func_400(1208537422);
		__LIB_0__::func_400(361734047);
		__LIB_0__::func_400(446554495);
		__LIB_0__::func_400(-118700196);
		__LIB_0__::func_400(-735136865);
		__LIB_0__::func_400(636278554);
		__LIB_5__::func_440("pro_empty_nav");
		__LIB_5__::func_440("pro_fence_fixed_nav");
		__LIB_5__::func_440("pro_burned_nav");
		__LIB_0__::func_401(1423681694);
		__LIB_0__::func_401(775893260);
		__LIB_0__::func_401(joaat("PRO_MANSION_INT_MILO"));
		__LIB_0__::func_401(joaat("PRO_BARN_INT_MILO"));
		__LIB_0__::func_401(1031662866);
		__LIB_0__::func_401(-1041976064);
		__LIB_0__::func_401(joaat("PRO_ES_01_WORKERHOUSE"));
		__LIB_0__::func_401(-436084091);
		__LIB_0__::func_401(-868830916);
		__LIB_0__::func_401(joaat("PRO_WRKSHP_INT_MILO"));
		__LIB_0__::func_401(-262959893);
		__LIB_0__::func_401(1049886174);
		__LIB_0__::func_401(-1042390616);
		__LIB_0__::func_401(2038589758);
		__LIB_5__::func_441("pro_fence_broken_nav");
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(22, 16);
			__LIB_8__::func_784(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (__LIB_0__::func_898(-1056767524))
	{
		if (__LIB_1__::func_533(536870912) == 0)
		{
			__LIB_5__::func_548(536870912);
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		__LIB_0__::func_400(-436084091);
		__LIB_0__::func_400(-1552951782);
		__LIB_0__::func_400(-1142569437);
		__LIB_0__::func_400(474113610);
		__LIB_0__::func_400(-297340751);
		__LIB_0__::func_400(1802934313);
		__LIB_0__::func_400(2108112010);
		__LIB_0__::func_400(1208537422);
		__LIB_0__::func_400(361734047);
		__LIB_0__::func_400(446554495);
		__LIB_0__::func_400(-118700196);
		__LIB_0__::func_400(-735136865);
		__LIB_0__::func_400(636278554);
		__LIB_5__::func_440("pro_empty_nav");
		__LIB_5__::func_440("pro_fence_broken_nav");
		__LIB_5__::func_440("pro_burned_nav");
		__LIB_0__::func_401(1423681694);
		__LIB_0__::func_401(775893260);
		__LIB_0__::func_401(-329355129);
		__LIB_0__::func_401(2117211184);
		__LIB_0__::func_401(joaat("PRO_MANSION_INT_MILO"));
		__LIB_0__::func_401(joaat("PRO_BARN_INT_MILO"));
		__LIB_0__::func_401(1031662866);
		__LIB_0__::func_401(-1041976064);
		__LIB_0__::func_401(joaat("PRO_ES_01_WORKERHOUSE"));
		__LIB_0__::func_401(1221694281);
		__LIB_0__::func_401(-868830916);
		__LIB_0__::func_401(joaat("PRO_WRKSHP_INT_MILO"));
		__LIB_0__::func_401(-262959893);
		__LIB_0__::func_401(1049886174);
		__LIB_0__::func_401(-1042390616);
		__LIB_0__::func_401(2038589758);
		__LIB_5__::func_441("pro_fence_fixed_nav");
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(22, 16);
			__LIB_8__::func_784(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (__LIB_0__::func_898(-182889087))
	{
		if (__LIB_1__::func_533(536870912) == 0)
		{
			__LIB_5__::func_548(536870912);
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		__LIB_0__::func_400(-436084091);
		__LIB_0__::func_400(-1552951782);
		__LIB_0__::func_400(-1142569437);
		__LIB_0__::func_400(474113610);
		__LIB_0__::func_400(-297340751);
		__LIB_0__::func_400(1802934313);
		__LIB_0__::func_400(2108112010);
		__LIB_0__::func_400(1208537422);
		__LIB_0__::func_400(361734047);
		__LIB_0__::func_400(446554495);
		__LIB_0__::func_400(-1042390616);
		__LIB_5__::func_440("pro_empty_nav");
		__LIB_5__::func_440("pro_fence_broken_nav");
		__LIB_5__::func_440("pro_fence_fixed_nav");
		__LIB_0__::func_401(1423681694);
		__LIB_0__::func_401(joaat("PRO_MANSION_INT_MILO"));
		__LIB_0__::func_401(joaat("PRO_BARN_INT_MILO"));
		__LIB_0__::func_401(1031662866);
		__LIB_0__::func_401(-1041976064);
		__LIB_0__::func_401(joaat("PRO_ES_01_WORKERHOUSE"));
		__LIB_0__::func_401(1221694281);
		__LIB_0__::func_401(-868830916);
		__LIB_0__::func_401(joaat("PRO_WRKSHP_INT_MILO"));
		__LIB_0__::func_401(-262959893);
		__LIB_0__::func_401(1049886174);
		__LIB_0__::func_401(-118700196);
		__LIB_0__::func_401(-735136865);
		__LIB_0__::func_401(636278554);
		__LIB_0__::func_401(2038589758);
		__LIB_5__::func_441("pro_burned_nav");
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_25(22, 16);
			__LIB_8__::func_784(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else
	{
		if (__LIB_1__::func_533(536870912))
		{
			__LIB_5__::func_547(536870912);
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_PRONGHORNRANCH"));
		}
		__LIB_0__::func_400(1423681694);
		__LIB_0__::func_400(joaat("PRO_MANSION_INT_MILO"));
		__LIB_0__::func_400(joaat("PRO_BARN_INT_MILO"));
		__LIB_0__::func_400(1031662866);
		__LIB_0__::func_400(-1041976064);
		__LIB_0__::func_400(joaat("PRO_ES_01_WORKERHOUSE"));
		__LIB_0__::func_400(1221694281);
		__LIB_0__::func_400(-436084091);
		__LIB_0__::func_400(joaat("PRO_WRKSHP_INT_MILO"));
		__LIB_0__::func_400(-262959893);
		__LIB_0__::func_400(1049886174);
		__LIB_0__::func_400(-1042390616);
		__LIB_0__::func_400(-118700196);
		__LIB_0__::func_400(-735136865);
		__LIB_0__::func_400(636278554);
		__LIB_0__::func_400(2038589758);
		__LIB_0__::func_400(775893260);
		__LIB_5__::func_440("pro_fence_broken_nav");
		__LIB_5__::func_440("pro_fence_fixed_nav");
		__LIB_5__::func_440("pro_burned_nav");
		__LIB_0__::func_401(-1552951782);
		__LIB_0__::func_401(-1142569437);
		__LIB_0__::func_401(474113610);
		__LIB_0__::func_401(-297340751);
		__LIB_0__::func_401(-868830916);
		__LIB_0__::func_401(1802934313);
		__LIB_0__::func_401(2108112010);
		__LIB_0__::func_401(1208537422);
		__LIB_0__::func_401(361734047);
		__LIB_0__::func_401(446554495);
		__LIB_5__::func_441("pro_empty_nav");
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_24(22, 16);
			__LIB_17__::func_447(22);
		}
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2) && !bParam1)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[22 /*35*/].f_3))
			{
				Global_1934765.f_2 = PED::_0x4C39C95AE5DB1329(Global_1888801[22 /*35*/].f_4, 0, 15);
			}
		}
	}
	if (__LIB_0__::func_898(2019386373))
	{
		__LIB_0__::func_400(-217646849);
		__LIB_0__::func_400(-694809996);
		__LIB_0__::func_400(-2053475031);
		__LIB_0__::func_401(-279703229);
		__LIB_0__::func_401(-623091266);
	}
	else if (__LIB_0__::func_898(-664252410))
	{
		__LIB_0__::func_400(-279703229);
		__LIB_0__::func_400(-2053475031);
		__LIB_0__::func_401(-217646849);
		__LIB_0__::func_401(-694809996);
		__LIB_0__::func_401(-623091266);
	}
	else if (__LIB_0__::func_898(2109952320))
	{
		__LIB_0__::func_400(-279703229);
		__LIB_0__::func_400(-217646849);
		__LIB_0__::func_400(-623091266);
		__LIB_0__::func_401(-694809996);
		__LIB_0__::func_401(-2053475031);
	}
	if (__LIB_0__::func_898(2024121624))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", false);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", true);
	}
	if (__LIB_0__::func_898(-1077783786))
	{
		__LIB_0__::func_400(-961488528);
		__LIB_0__::func_401(-1569624057);
	}
	else
	{
		__LIB_0__::func_400(-1569624057);
		__LIB_0__::func_401(-961488528);
	}
	if (__LIB_0__::func_898(-299522880))
	{
		__LIB_0__::func_401(131323483);
		__LIB_0__::func_400(-134556459);
	}
	else
	{
		__LIB_0__::func_400(131323483);
		__LIB_0__::func_401(-134556459);
	}
	if (__LIB_0__::func_293(45))
	{
		__LIB_0__::func_400(joaat("WAP_RAINSFALLS_BASE"));
		__LIB_0__::func_400(661576070);
		__LIB_0__::func_400(795060201);
		__LIB_0__::func_400(1003623269);
		__LIB_0__::func_400(-395621323);
		__LIB_0__::func_400(-924329535);
		__LIB_0__::func_401(739805687);
		__LIB_0__::func_401(-243627670);
		__LIB_0__::func_401(-198004806);
		__LIB_5__::func_441("nav_wapiti_es");
	}
	else
	{
		__LIB_0__::func_400(739805687);
		__LIB_0__::func_400(-243627670);
		__LIB_0__::func_400(-198004806);
		__LIB_5__::func_440("nav_wapiti_es");
		__LIB_0__::func_401(1003623269);
		__LIB_0__::func_401(-924329535);
		__LIB_0__::func_401(-395621323);
		if (__LIB_0__::func_898(-389056691))
		{
			__LIB_0__::func_400(661576070);
			__LIB_0__::func_401(joaat("WAP_RAINSFALLS_BASE"));
			__LIB_0__::func_401(795060201);
		}
		else
		{
			__LIB_0__::func_400(795060201);
			__LIB_0__::func_401(joaat("WAP_RAINSFALLS_BASE"));
			__LIB_0__::func_401(661576070);
		}
	}
	if (__LIB_0__::func_898(-1824738758))
	{
		__LIB_0__::func_401(1489268640);
	}
	else
	{
		__LIB_0__::func_400(1489268640);
	}
	__LIB_10__::func_800();
	if (__LIB_0__::func_898(1221801385))
	{
		if (!Global_1934765.f_297)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_HOUSEBOAT"), 2300f, -330f, 0, 0);
			Global_1934765.f_297 = 1;
		}
	}
	else if (Global_1934765.f_297)
	{
		MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_HOUSEBOAT"));
		Global_1934765.f_297 = 0;
	}
	if (__LIB_0__::func_898(-306246697))
	{
		if (!Global_1934765.f_298)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_VANHORNBOAT"), 3012.5f, 507.5f, 0, 0);
			Global_1934765.f_298 = 1;
		}
	}
	else if (Global_1934765.f_298)
	{
		MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_VANHORNBOAT"));
		Global_1934765.f_298 = 0;
	}
	if (__LIB_0__::func_898(-1847672446))
	{
		if (!Global_1934765.f_299)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_STDENISBOAT"), 2700f, -1600f, 0, 0);
			Global_1934765.f_299 = 1;
		}
	}
	else if (Global_1934765.f_299)
	{
		MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_STDENISBOAT"));
		Global_1934765.f_299 = 0;
	}
	if (!__LIB_0__::func_898(-789397228))
	{
		__LIB_0__::func_401(-614421509);
		__LIB_0__::func_401(604920544);
		__LIB_0__::func_401(joaat("SER_01_GRANDKOR3"));
		if (__LIB_0__::func_898(-2022369555))
		{
			__LIB_0__::func_401(-1716205818);
			__LIB_0__::func_400(-276259505);
		}
		else
		{
			__LIB_0__::func_401(-276259505);
			__LIB_0__::func_400(-1716205818);
		}
		if (!Global_1934765.f_295 && __LIB_3__::func_222(5))
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_GRANDKORRIGANBOAT"), 3290f, -1310f, 0, 0);
			Global_1934765.f_295 = 1;
			MAP::_0xD8C7162AB2E2AF45(1944800674);
		}
	}
	else
	{
		__LIB_0__::func_400(-614421509);
		__LIB_0__::func_400(604920544);
		__LIB_0__::func_400(joaat("SER_01_GRANDKOR3"));
		__LIB_0__::func_400(-276259505);
		__LIB_0__::func_400(-1716205818);
		if (Global_1934765.f_295)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_GRANDKORRIGANBOAT"));
			Global_1934765.f_295 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(1944800674);
		}
	}
	if (__LIB_0__::func_898(1358491857))
	{
		__LIB_0__::func_401(1056170594);
		__LIB_0__::func_401(-873881483);
		__LIB_0__::func_401(146172383);
		if (__LIB_0__::func_898(723021499))
		{
			__LIB_0__::func_401(joaat("NEW_BOATS_01_GRANDKOR3"));
			__LIB_0__::func_400(1157695860);
		}
		else
		{
			__LIB_0__::func_401(1157695860);
			__LIB_0__::func_400(joaat("NEW_BOATS_01_GRANDKOR3"));
		}
		if (!Global_1934765.f_294 && __LIB_3__::func_222(5))
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_GRANDKORRIGANBOATDOCKED"), 2870f, -1400f, 0, 0);
			Global_1934765.f_294 = 1;
			MAP::_0xD8C7162AB2E2AF45(-296815465);
		}
	}
	else
	{
		__LIB_0__::func_400(1056170594);
		__LIB_0__::func_400(-873881483);
		__LIB_0__::func_400(joaat("NEW_BOATS_01_GRANDKOR3"));
		__LIB_0__::func_400(1157695860);
		__LIB_0__::func_400(146172383);
		if (Global_1934765.f_294)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_GRANDKORRIGANBOATDOCKED"));
			Global_1934765.f_294 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(-296815465);
		}
	}
	__LIB_10__::func_742();
	StringCopy(&cVar1, "nav_sdn_docks_", 64);
	if (__LIB_0__::func_898(1358491857))
	{
		StringConCat(&cVar1, "korrigan_", 64);
	}
	if (__LIB_0__::func_898(-1825294305))
	{
		StringConCat(&cVar1, "antenor_", 64);
		__LIB_0__::func_401(-445068262);
		__LIB_0__::func_401(-1688366042);
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, false);
		}
	}
	else
	{
		__LIB_0__::func_400(-445068262);
		__LIB_0__::func_400(-1688366042);
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, true);
		}
	}
	if (__LIB_0__::func_898(522677506))
	{
		__LIB_0__::func_401(1048677741);
		__LIB_0__::func_401(-2035101386);
		__LIB_0__::func_401(1284188544);
		__LIB_0__::func_401(1520435387);
		__LIB_0__::func_401(876228895);
		StringConCat(&cVar1, "trains_", 64);
	}
	else
	{
		__LIB_0__::func_400(1048677741);
		__LIB_0__::func_400(-2035101386);
		__LIB_0__::func_400(1284188544);
		__LIB_0__::func_400(1520435387);
		__LIB_0__::func_400(876228895);
	}
	if (!__LIB_0__::func_293(45))
	{
		__LIB_0__::func_400(-274080837);
		__LIB_0__::func_400(-1036688493);
		__LIB_0__::func_400(-1512794226);
		__LIB_0__::func_400(913995529);
		__LIB_0__::func_401(481139295);
		__LIB_0__::func_401(165972019);
		__LIB_0__::func_401(1679182807);
		__LIB_0__::func_401(-1986089134);
		StringConCat(&cVar1, "pre_es", 64);
	}
	else
	{
		__LIB_0__::func_400(481139295);
		__LIB_0__::func_400(165972019);
		__LIB_0__::func_400(1679182807);
		__LIB_0__::func_400(-1986089134);
		__LIB_0__::func_401(-274080837);
		__LIB_0__::func_401(-1036688493);
		__LIB_0__::func_401(-1512794226);
		__LIB_0__::func_401(913995529);
		StringConCat(&cVar1, "es", 64);
	}
	__LIB_5__::func_441(&cVar1);
	if (__LIB_0__::func_898(171499483))
	{
		__LIB_0__::func_400(-890900091);
		__LIB_0__::func_401(-1758697759);
	}
	else
	{
		__LIB_0__::func_400(-1758697759);
		__LIB_0__::func_401(-890900091);
	}
	if (__LIB_0__::func_898(235928616))
	{
		__LIB_0__::func_400(joaat("COM_MULESHED"));
		__LIB_0__::func_400(1926336063);
		__LIB_0__::func_400(-800534102);
		__LIB_5__::func_440("nav_crn1_barn");
		__LIB_0__::func_401(-886310806);
		__LIB_5__::func_441("nav_crn1_barn_burnt");
	}
	else
	{
		__LIB_0__::func_400(-886310806);
		__LIB_5__::func_440("nav_crn1_barn_burnt");
		__LIB_0__::func_401(joaat("COM_MULESHED"));
		__LIB_0__::func_401(1926336063);
		__LIB_0__::func_401(-800534102);
		__LIB_5__::func_441("nav_crn1_barn");
	}
	if (__LIB_0__::func_898(345808947))
	{
		__LIB_4__::func_524(190);
		__LIB_4__::func_495(189);
	}
	else
	{
		__LIB_4__::func_524(189);
		__LIB_4__::func_495(190);
	}
	if (__LIB_0__::func_898(1167397384))
	{
		__LIB_0__::func_400(1736386364);
	}
	else
	{
		__LIB_0__::func_401(1736386364);
	}
	if (__LIB_0__::func_898(2024769126))
	{
		__LIB_0__::func_400(516817794);
	}
	else
	{
		__LIB_0__::func_401(516817794);
	}
	if (__LIB_0__::func_898(-154581735))
	{
		__LIB_0__::func_400(-262371610);
	}
	else
	{
		__LIB_0__::func_401(-262371610);
	}
	if (__LIB_0__::func_898(-1530132748))
	{
		__LIB_0__::func_400(-389510791);
	}
	else
	{
		__LIB_0__::func_401(-389510791);
	}
	if (__LIB_0__::func_898(976539083))
	{
		__LIB_0__::func_400(71064384);
	}
	else
	{
		__LIB_0__::func_401(71064384);
	}
	__LIB_0__::func_401(579127040);
	__LIB_0__::func_401(-2011620387);
	if (__LIB_0__::func_898(409602249))
	{
		__LIB_0__::func_401(677191274);
	}
	else
	{
		__LIB_0__::func_400(677191274);
	}
	if (__LIB_0__::func_898(651395116))
	{
		__LIB_0__::func_401(joaat("DIS_SCM_00_KIERAN_GRAVE"));
	}
	else
	{
		__LIB_0__::func_400(joaat("DIS_SCM_00_KIERAN_GRAVE"));
	}
	if (__LIB_0__::func_898(1488286867))
	{
		__LIB_0__::func_401(516308968);
	}
	else
	{
		__LIB_0__::func_400(516308968);
	}
	if (__LIB_0__::func_898(665676602))
	{
		__LIB_0__::func_401(1308321372);
	}
	else
	{
		__LIB_0__::func_400(1308321372);
	}
	if (__LIB_0__::func_898(8924991))
	{
		__LIB_0__::func_401(-449454773);
	}
	else
	{
		__LIB_0__::func_400(-449454773);
	}
	if (__LIB_0__::func_898(932909855))
	{
		__LIB_0__::func_401(-1754541271);
		__LIB_0__::func_401(-1363999915);
		__LIB_0__::func_401(-1116430120);
	}
	else
	{
		__LIB_0__::func_400(-1754541271);
		__LIB_0__::func_400(-1363999915);
		__LIB_0__::func_400(-1116430120);
	}
	if (__LIB_0__::func_898(2051822093))
	{
		__LIB_0__::func_401(-163883900);
	}
	else
	{
		__LIB_0__::func_400(-163883900);
	}
	if (__LIB_0__::func_898(-1241340344))
	{
		__LIB_0__::func_401(-1010679388);
	}
	else
	{
		__LIB_0__::func_400(-1010679388);
	}
	if (__LIB_0__::func_898(-1558439474))
	{
		__LIB_0__::func_401(1033367448);
	}
	else
	{
		__LIB_0__::func_400(1033367448);
	}
	if (__LIB_0__::func_898(2077022393))
	{
		__LIB_0__::func_400(391022529);
		__LIB_0__::func_400(-1560636071);
		__LIB_0__::func_400(1870870569);
		__LIB_0__::func_400(-904833761);
		__LIB_0__::func_400(1713084298);
		__LIB_0__::func_400(928528900);
		__LIB_0__::func_401(-2118853492);
		__LIB_0__::func_401(-597126658);
	}
	else
	{
		__LIB_0__::func_400(-2118853492);
		__LIB_0__::func_400(-597126658);
		if (__LIB_0__::func_898(1583012985))
		{
			__LIB_0__::func_400(391022529);
			__LIB_0__::func_400(-1560636071);
			__LIB_0__::func_401(1713084298);
		}
		else
		{
			__LIB_0__::func_400(1713084298);
			__LIB_0__::func_401(391022529);
			__LIB_0__::func_401(-1560636071);
		}
		if (__LIB_0__::func_898(479419429))
		{
			__LIB_0__::func_400(1870870569);
			__LIB_0__::func_400(-904833761);
			__LIB_0__::func_401(928528900);
		}
		else
		{
			__LIB_0__::func_400(928528900);
			__LIB_0__::func_401(1870870569);
			__LIB_0__::func_401(-904833761);
		}
	}
	if (__LIB_0__::func_898(-1556423728))
	{
		__LIB_0__::func_401(-1023331176);
	}
	else
	{
		__LIB_0__::func_400(-1023331176);
	}
	if (__LIB_0__::func_898(-144653976))
	{
		__LIB_0__::func_401(-1809571159);
	}
	else
	{
		__LIB_0__::func_400(-1809571159);
	}
	if (__LIB_0__::func_898(-351362068))
	{
		__LIB_0__::func_401(-2071756699);
	}
	else
	{
		__LIB_0__::func_400(-2071756699);
	}
	if (__LIB_0__::func_898(-939114198))
	{
		__LIB_0__::func_401(-1625703283);
	}
	else
	{
		__LIB_0__::func_400(-1625703283);
	}
	if (__LIB_0__::func_898(-1318987693))
	{
		__LIB_0__::func_401(-1696865897);
	}
	else
	{
		__LIB_0__::func_400(-1696865897);
	}
	if (__LIB_0__::func_898(-545450213))
	{
		__LIB_0__::func_400(-1950049852);
		__LIB_0__::func_401(-724913398);
	}
	else
	{
		__LIB_0__::func_400(-724913398);
		__LIB_0__::func_401(-1950049852);
	}
	__LIB_5__::func_440("railroad_stageMP");
	if (__LIB_0__::func_898(-2101264851))
	{
		__LIB_0__::func_401(1858796535);
		__LIB_0__::func_401(945532872);
		__LIB_0__::func_401(-2043326480);
		__LIB_0__::func_401(992791293);
		__LIB_0__::func_401(-1815023148);
		__LIB_0__::func_401(731209239);
		__LIB_0__::func_401(1531008020);
		__LIB_0__::func_401(-952533419);
		__LIB_0__::func_401(582879672);
		__LIB_0__::func_401(1750312025);
		__LIB_0__::func_401(-759698431);
		__LIB_0__::func_401(59954835);
		__LIB_0__::func_401(-1461922204);
		__LIB_0__::func_401(2079207010);
		__LIB_0__::func_401(-1360840312);
		__LIB_0__::func_401(-816857367);
	}
	else
	{
		__LIB_0__::func_400(1858796535);
		__LIB_0__::func_400(945532872);
		__LIB_0__::func_400(-2043326480);
		__LIB_0__::func_400(992791293);
		__LIB_0__::func_400(-1815023148);
		__LIB_0__::func_400(731209239);
		__LIB_0__::func_400(1531008020);
		__LIB_0__::func_400(-952533419);
		__LIB_0__::func_400(582879672);
		__LIB_0__::func_400(1750312025);
		__LIB_0__::func_400(-759698431);
		__LIB_0__::func_400(59954835);
		__LIB_0__::func_400(-1461922204);
		__LIB_0__::func_400(2079207010);
		__LIB_0__::func_400(-1360840312);
		__LIB_0__::func_400(-816857367);
	}
	if (__LIB_0__::func_898(434558613))
	{
		__LIB_0__::func_401(-715865581);
		__LIB_0__::func_400(-1387511711);
		__LIB_0__::func_400(1901132483);
		__LIB_0__::func_400(-2082345587);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", true);
		__LIB_5__::func_440("rmllr_cabin_normal");
		__LIB_5__::func_441("rmllr_cabin_burnt");
	}
	else
	{
		__LIB_0__::func_401(-1387511711);
		__LIB_0__::func_401(1901132483);
		__LIB_0__::func_400(-2082345587);
		__LIB_0__::func_400(-715865581);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", false);
		__LIB_5__::func_440("rmllr_cabin_burnt");
		__LIB_5__::func_441("rmllr_cabin_normal");
	}
	if (__LIB_0__::func_898(1186594126))
	{
		__LIB_0__::func_401(joaat("CVB_MURDERTREE"));
	}
	else
	{
		__LIB_0__::func_400(joaat("CVB_MURDERTREE"));
	}
	if (__LIB_0__::func_898(469053995))
	{
		__LIB_0__::func_401(joaat("M_07_P_MURDERROCK"));
	}
	else
	{
		__LIB_0__::func_400(joaat("M_07_P_MURDERROCK"));
	}
	if (__LIB_0__::func_898(476714362))
	{
		__LIB_0__::func_401(joaat("M_09_P_CAMPFIREMURDER"));
	}
	else
	{
		__LIB_0__::func_400(joaat("M_09_P_CAMPFIREMURDER"));
	}
	if (__LIB_0__::func_898(1947931439))
	{
		__LIB_0__::func_401(1628286919);
		__LIB_0__::func_400(joaat("NEW_COM_07_NOHOTEL"));
		__LIB_0__::func_400(joaat("NEW_COM_07_WIN"));
	}
	else
	{
		__LIB_0__::func_401(joaat("NEW_COM_07_NOHOTEL"));
		__LIB_0__::func_401(joaat("NEW_COM_07_WIN"));
		__LIB_0__::func_400(1628286919);
	}
	if (__LIB_0__::func_898(-879507474))
	{
		__LIB_0__::func_400(1928252407);
		__LIB_0__::func_401(-98843293);
	}
	else
	{
		__LIB_0__::func_400(-98843293);
		__LIB_0__::func_401(1928252407);
	}
	if (__LIB_0__::func_898(1050128548))
	{
		__LIB_0__::func_401(joaat("RE_SP_SAVAGEWARNING_01"));
	}
	else
	{
		__LIB_0__::func_400(joaat("RE_SP_SAVAGEWARNING_01"));
	}
	if (__LIB_0__::func_898(868326136))
	{
		__LIB_0__::func_401(joaat("RE_SP_SAVAGEWARNING_02"));
	}
	else
	{
		__LIB_0__::func_400(joaat("RE_SP_SAVAGEWARNING_02"));
	}
	if (__LIB_0__::func_898(-515561750))
	{
		__LIB_0__::func_400(-892659042);
		__LIB_0__::func_400(30201771);
		__LIB_0__::func_401(517553365);
		__LIB_5__::func_441("mud4_saloon_fight");
	}
	else if (__LIB_0__::func_898(26245360))
	{
		__LIB_5__::func_440("mud4_saloon_fight");
		__LIB_0__::func_400(30201771);
		__LIB_0__::func_401(-2083943324);
		__LIB_0__::func_401(517553365);
		__LIB_5__::func_441("mud4_saloon_fight_start");
	}
	else
	{
		__LIB_5__::func_440("mud4_saloon_fight_start");
		__LIB_5__::func_440("mud4_saloon_fight");
		__LIB_0__::func_400(517553365);
		__LIB_0__::func_400(-2083943324);
		__LIB_0__::func_401(30201771);
	}
	if (__LIB_0__::func_898(-1060078174))
	{
		if (__LIB_0__::func_293(45))
		{
			__LIB_0__::func_400(joaat("K_11_P_MARY1_CAMP"));
			__LIB_5__::func_440("MS_MARY1_CAMP");
			__LIB_0__::func_401(joaat("K_11_P_CHELONIAN_CAMP"));
			__LIB_5__::func_441("MS_CHELONIAN_CAMP");
		}
		else
		{
			__LIB_0__::func_400(joaat("K_11_P_CHELONIAN_CAMP"));
			__LIB_5__::func_440("MS_CHELONIAN_CAMP");
			__LIB_0__::func_401(joaat("K_11_P_MARY1_CAMP"));
			__LIB_5__::func_441("MS_MARY1_CAMP");
		}
		__LIB_10__::func_743(&(Global_1934765.f_17), 928.2264f, 1345.357f, 194.5221f, 4.5f);
		__LIB_10__::func_743(&(Global_1934765.f_18), 922.5641f, 1346.623f, 194.7151f, 3f);
		__LIB_10__::func_743(&(Global_1934765.f_19), 920.8331f, 1340.152f, 194.182f, 3.5f);
	}
	else
	{
		__LIB_0__::func_400(joaat("K_11_P_MARY1_CAMP"));
		__LIB_0__::func_400(joaat("K_11_P_CHELONIAN_CAMP"));
		func_355(&(Global_1934765.f_17), 1);
		func_355(&(Global_1934765.f_18), 1);
		func_355(&(Global_1934765.f_19), 1);
	}
	if (__LIB_0__::func_898(817925178))
	{
		__LIB_0__::func_401(-1417469821);
	}
	else
	{
		__LIB_0__::func_400(-1417469821);
	}
	if (__LIB_0__::func_898(-785605431))
	{
	}
	else
	{
		__LIB_0__::func_400(146172383);
	}
	if (__LIB_0__::func_898(1557082963))
	{
		__LIB_0__::func_400(joaat("C_13_NOTRAP_01"));
		__LIB_0__::func_400(765343099);
		__LIB_0__::func_401(-909306169);
	}
	else if (__LIB_0__::func_898(-350863510))
	{
		__LIB_0__::func_400(joaat("C_13_NOTRAP_01"));
		__LIB_0__::func_400(-909306169);
		__LIB_0__::func_401(765343099);
	}
	else
	{
		__LIB_0__::func_400(765343099);
		__LIB_0__::func_400(-909306169);
		__LIB_0__::func_401(joaat("C_13_NOTRAP_01"));
	}
	if (__LIB_0__::func_898(-1952856164))
	{
		__LIB_0__::func_400(-890900091);
		__LIB_0__::func_400(-1758697759);
		__LIB_0__::func_401(591001924);
	}
	else if (__LIB_0__::func_898(249726958))
	{
		__LIB_0__::func_400(-890900091);
		__LIB_0__::func_400(591001924);
		__LIB_0__::func_401(-1758697759);
	}
	else
	{
		__LIB_0__::func_400(-1758697759);
		__LIB_0__::func_400(591001924);
		__LIB_0__::func_401(-890900091);
	}
	if (__LIB_0__::func_898(-99303535))
	{
		__LIB_0__::func_400(-2092712551);
		__LIB_0__::func_401(-1307469679);
	}
	else if (__LIB_0__::func_898(1433244935))
	{
		__LIB_0__::func_400(-1307469679);
		__LIB_0__::func_401(-2092712551);
	}
	else
	{
		__LIB_0__::func_400(-2092712551);
		__LIB_0__::func_400(-1307469679);
	}
	__LIB_10__::func_801(1512816328, joaat("GANG_SKINAFTERMATH_LOC01_01"));
	__LIB_10__::func_801(1207048789, joaat("GANG_SKINAFTERMATH_LOC02_01"));
	__LIB_10__::func_801(-1230112817, joaat("GANG_SKINAFTERMATH_LOC03_01"));
	__LIB_10__::func_801(-1278074582, joaat("GANG_SKINAFTERMATH_LOC01_02"));
	__LIB_10__::func_801(-1436021162, joaat("GANG_SKINAFTERMATH_LOC02_02"));
	__LIB_10__::func_801(407136781, joaat("GANG_SKINAFTERMATH_LOC03_02"));
	if (__LIB_0__::func_898(-978957786))
	{
		__LIB_0__::func_401(1111220101);
		__LIB_0__::func_401(1372565859);
		__LIB_0__::func_401(1644962309);
		if (!Global_1934765.f_296 && __LIB_3__::func_222(127))
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_THIEVESLANDINGBOAT"), -1350f, -2300f, 0, 0);
			Global_1934765.f_296 = 1;
		}
	}
	else
	{
		__LIB_0__::func_400(1111220101);
		__LIB_0__::func_400(1372565859);
		__LIB_0__::func_400(1644962309);
		if (Global_1934765.f_296)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_THIEVESLANDINGBOAT"));
			Global_1934765.f_296 = 0;
		}
	}
	if (__LIB_0__::func_898(559573222))
	{
		__LIB_0__::func_400(1137646647);
		__LIB_0__::func_401(-898081380);
	}
	else
	{
		__LIB_0__::func_400(-898081380);
		__LIB_0__::func_401(1137646647);
	}
	if (__LIB_0__::func_898(-1818850842))
	{
		__LIB_0__::func_400(1584946069);
	}
	else
	{
		__LIB_0__::func_401(1584946069);
	}
	if (__LIB_0__::func_898(-792853067))
	{
		__LIB_0__::func_400(-1828030290);
		__LIB_0__::func_401(827269092);
	}
	else
	{
		__LIB_0__::func_401(-1828030290);
		__LIB_0__::func_400(827269092);
	}
	if (__LIB_0__::func_898(1151197909))
	{
		__LIB_4__::func_495(165);
	}
	else
	{
		__LIB_4__::func_524(165);
	}
	if (__LIB_0__::func_898(-828139293))
	{
		__LIB_0__::func_400(1364392658);
		__LIB_0__::func_401(-794503195);
		__LIB_5__::func_441("nts3_no_bridge");
		if (!Global_1934765.f_293)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BRIDGEDESTROYED"), 512f, 1756f, 0, 0);
			Global_1934765.f_293 = 1;
		}
	}
	else
	{
		__LIB_0__::func_400(-794503195);
		__LIB_0__::func_401(1364392658);
		__LIB_5__::func_440("nts3_no_bridge");
		if (Global_1934765.f_293)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BRIDGEDESTROYED"));
			Global_1934765.f_293 = 0;
		}
	}
	if (__LIB_0__::func_898(-464836488))
	{
		__LIB_0__::func_400(-1192199739);
		__LIB_0__::func_401(-65072454);
	}
	else
	{
		__LIB_0__::func_400(-65072454);
		__LIB_0__::func_401(-1192199739);
	}
	if (__LIB_0__::func_898(-233743613))
	{
		__LIB_0__::func_401(1692451176);
	}
	else
	{
		__LIB_0__::func_400(1692451176);
	}
	if (__LIB_0__::func_898(1203043430))
	{
		__LIB_0__::func_401(-102951407);
	}
	else
	{
		__LIB_0__::func_400(-102951407);
	}
	if (__LIB_0__::func_898(299694527))
	{
		__LIB_0__::func_401(1833824812);
	}
	else
	{
		__LIB_0__::func_400(1833824812);
	}
	if (__LIB_0__::func_317() == 2)
	{
		if (__LIB_0__::func_898(-1949204933))
		{
			__LIB_0__::func_400(1734859244);
			__LIB_0__::func_401(719147410);
		}
		else
		{
			__LIB_0__::func_401(1734859244);
			__LIB_0__::func_400(719147410);
		}
	}
	if (!__LIB_2__::func_774(4))
	{
		if (__LIB_0__::func_317() == 1 && __LIB_0__::func_592() == 1)
		{
			if (__LIB_0__::func_898(442317566))
			{
				__LIB_0__::func_400(1948051928);
				__LIB_0__::func_401(1453569688);
			}
			else
			{
				__LIB_0__::func_401(1948051928);
				__LIB_0__::func_400(1453569688);
			}
		}
		else
		{
			__LIB_0__::func_400(1453569688);
			__LIB_0__::func_400(1948051928);
		}
	}
	if (__LIB_0__::func_898(-736853952))
	{
		__LIB_0__::func_401(joaat("MISSION_SEAN_1"));
		__LIB_10__::func_741(joaat("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 0, 1);
	}
	else
	{
		__LIB_0__::func_400(joaat("MISSION_SEAN_1"));
		__LIB_10__::func_740(joaat("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 1, 1);
	}
	if (__LIB_0__::func_898(1478132521))
	{
		__LIB_0__::func_400(1759143160);
		__LIB_0__::func_401(398639187);
		__LIB_5__::func_440("reservation_abandoned");
		__LIB_5__::func_441("nav_sean1_camp");
	}
	else
	{
		__LIB_0__::func_400(398639187);
		__LIB_0__::func_401(1759143160);
	}
	if (__LIB_0__::func_898(-360036154))
	{
		__LIB_0__::func_400(1136457806);
		__LIB_0__::func_401(1255880931);
	}
	else
	{
		__LIB_0__::func_401(1136457806);
		__LIB_0__::func_400(1255880931);
	}
	if (__LIB_0__::func_898(2024383613))
	{
		__LIB_0__::func_400(-753844687);
		__LIB_0__::func_401(joaat("NAT_NATIVE1_COH_02"));
		__LIB_5__::func_441("ntv1_cohutta");
	}
	else
	{
		__LIB_0__::func_401(-753844687);
		__LIB_0__::func_400(joaat("NAT_NATIVE1_COH_02"));
		__LIB_5__::func_440("ntv1_cohutta");
	}
	if (__LIB_0__::func_898(-622554983))
	{
		__LIB_0__::func_401(joaat("NAT_NATIVE1_ARMY_01"));
		__LIB_5__::func_441("ntv1_armycamp");
		if (!Global_1934765.f_287)
		{
			__LIB_2__::func_862(798.2925f, 1509.681f, 203.7047f, 21f, "native1_camp", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
			Global_1934765.f_287 = 1;
		}
	}
	else
	{
		__LIB_0__::func_400(joaat("NAT_NATIVE1_ARMY_01"));
		__LIB_5__::func_440("ntv1_armycamp");
		if (Global_1934765.f_287)
		{
			__LIB_1__::func_222(798.2925f, 1509.681f, 203.7047f, 0);
			Global_1934765.f_287 = 0;
		}
	}
	if (__LIB_0__::func_898(1954026328))
	{
		__LIB_0__::func_401(-1835067413);
		__LIB_0__::func_400(-1392150519);
		__LIB_4__::func_495(226);
	}
	else
	{
		__LIB_0__::func_401(-1392150519);
		__LIB_0__::func_400(-1835067413);
		__LIB_4__::func_524(226);
	}
	if (__LIB_0__::func_898(-330120947))
	{
		__LIB_0__::func_401(joaat("SDS_WELL_COVER"));
	}
	else
	{
		__LIB_0__::func_400(joaat("SDS_WELL_COVER"));
	}
	if (__LIB_0__::func_898(-1764522338))
	{
		__LIB_0__::func_400(joaat("N_1114_WATERTOWER01_FEUD1"));
		__LIB_0__::func_401(joaat("N_1114_WATERTOWER01_DEFAULT"));
	}
	else
	{
		__LIB_0__::func_401(joaat("N_1114_WATERTOWER01_FEUD1"));
		__LIB_0__::func_400(joaat("N_1114_WATERTOWER01_DEFAULT"));
	}
	if (__LIB_0__::func_898(-76237062))
	{
		__LIB_0__::func_401(-1085363933);
		__LIB_0__::func_401(-537740003);
		__LIB_5__::func_441("trn1_nav_ann_shootout_00");
	}
	else
	{
		__LIB_0__::func_400(-1085363933);
		__LIB_0__::func_400(-537740003);
		__LIB_5__::func_440("trn1_nav_ann_shootout_00");
	}
	if (__LIB_0__::func_898(-333135263))
	{
		__LIB_0__::func_401(728046625);
	}
	else
	{
		__LIB_0__::func_400(728046625);
	}
	if (__LIB_0__::func_898(885203519))
	{
		__LIB_4__::func_495(228);
	}
	else
	{
		__LIB_4__::func_524(228);
	}
	if (__LIB_0__::func_898(-1080627546))
	{
		__LIB_4__::func_495(227);
	}
	else
	{
		__LIB_4__::func_524(227);
	}
	if (__LIB_0__::func_898(1522511407))
	{
		__LIB_0__::func_401(-929277449);
		__LIB_0__::func_401(-723094901);
		__LIB_0__::func_401(-801609437);
	}
	else
	{
		__LIB_0__::func_400(-929277449);
		__LIB_0__::func_400(-723094901);
		__LIB_0__::func_400(-801609437);
	}
	if (__LIB_0__::func_898(1446719356))
	{
		__LIB_0__::func_401(joaat("P_12P_BLACKWHITE_CAMP"));
	}
	else
	{
		__LIB_0__::func_400(joaat("P_12P_BLACKWHITE_CAMP"));
	}
	if (__LIB_0__::func_898(171107021))
	{
		__LIB_0__::func_401(joaat("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	else
	{
		__LIB_0__::func_400(joaat("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	return true;
}

void func_185(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_11__::func_940(iParam1);
	PED::_0xB285AD0EC870B2DF(iParam0, iVar0);
	__LIB_14__::func_218();
}

bool func_196(int iParam0)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	sVar0 = __LIB_16__::func_183(iParam0);
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1897952.f_42, false))
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1897952.f_42, 523);
				return true;
			}
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sVar0)) > 0)
			{
				__LIB_5__::func_234(sVar0, 523);
				return true;
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1897952.f_43)) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&(Global_1897952.f_43), Global_1897952.f_51, true, 0))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1897952.f_42);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
			return false;
		}
		Global_1897952.f_42 = SCRIPTS::START_NEW_SCRIPT(sVar0, 1024);
		StringCopy(&(Global_1897952.f_43), sVar0, 64);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
		bVar1 = __LIB_10__::func_38(iParam0);
		LAW::_0x5E6F375CA101C108(PLAYER::PLAYER_ID(), (bVar1 || __LIB_10__::func_853(__LIB_1__::func_905(iParam0))));
		if (__LIB_1__::func_905(iParam0) != __LIB_1__::func_905(__LIB_1__::func_898()) || bVar1)
		{
			__LIB_17__::func_436(__LIB_1__::func_898(), 0);
			iVar2 = __LIB_1__::func_447(Global_36, 1);
			if (!__LIB_1__::func_120(iVar2))
			{
				if (!__LIB_0__::func_1(Global_1935630, 16384) && !__LIB_1__::func_927())
				{
					if (__LIB_1__::func_931(__LIB_1__::func_905(iParam0)) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
					{
						__LIB_17__::func_450(-1, -1, -1, 0, __LIB_1__::func_905(iParam0), 0);
					}
					else if (bVar1)
					{
						__LIB_17__::func_450(-1, iParam0, -1, 0, -1, 0);
					}
				}
			}
			if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				__LIB_17__::func_457(iParam0);
			}
			else
			{
				__LIB_17__::func_436(iParam0, 1);
			}
		}
		if (__LIB_1__::func_898() != -1)
		{
			__LIB_19__::func_31(__LIB_1__::func_898());
			__LIB_19__::func_30(__LIB_1__::func_898());
		}
		__LIB_16__::func_193(iParam0);
		if (__LIB_16__::func_429(iParam0))
		{
			PLAYER::_0x14E57F88BA0A07FC(__LIB_16__::func_194(iParam0));
		}
		__LIB_17__::func_451(iParam0);
		__LIB_17__::func_448(iParam0);
		iVar3 = -1000;
		if (__LIB_0__::func_20(__LIB_0__::func_12()))
		{
			iVar3 = Global_1888801[__LIB_0__::func_12() /*35*/].f_1;
		}
		if (iVar3 < (MISC::GET_GAME_TIMER() - 1000))
		{
			iVar4 = __LIB_1__::func_447(Global_36, 1);
			if (__LIB_5__::func_235(iVar4, 1, 0) == 0)
			{
				__LIB_18__::func_951(__LIB_4__::func_929(iParam0, 1), __LIB_1__::func_905(iParam0));
			}
			__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
			__LIB_17__::func_449(iParam0);
		}
		if (8 == iParam0 != __LIB_0__::func_898(373691918))
		{
			__LIB_1__::func_408(373691918, 8 == iParam0, 0);
		}
		return true;
	}
	return false;
}

bool func_198()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	fVar2 = 4f;
	fVar3 = 3f;
	if ((Global_1357549.f_1641 >= 6 && Global_1357549.f_1641 != 10) || (Global_1357549.f_1641 == 10 && __LIB_0__::func_265(&(Global_1357549.f_1642)) < ((fVar2 + fVar3) + 6.75f)))
	{
		CAM::_0x71D71E08A7ED5BD7(1);
	}
	switch (Global_1357549.f_1641)
	{
		case 2:
		case 4:
		case 5:
		case 6:
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			break;
	}
	switch (Global_1357549.f_1641)
	{
		case 0:
			if (__LIB_1__::func_652() == 0 || __LIB_2__::func_776())
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (__LIB_0__::func_272(__LIB_0__::func_271(iVar0), 0))
				{
					iVar1 = PED::_0x89816B58C3466262(__LIB_0__::func_271(iVar0));
					if (iVar1 == 3)
					{
						Global_1357549.f_1645 = __LIB_19__::func_32(iVar0);
						PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_271(iVar0), 343, true);
						if ((Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(__LIB_0__::func_271(iVar0)))
						{
							__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1645), "KNOCKOUT_WARNING", 334581534, Global_35, 1, 0, 0, 1);
							Global_1357549.f_1646 = 1;
							Global_1357549.f_1647 = 1;
							Global_1357549.f_1641 = 1;
						}
					}
					else if (iVar1 == 1)
					{
						Global_1357549.f_1645 = __LIB_19__::func_32(iVar0);
						if ((Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(__LIB_0__::func_271(iVar0)))
						{
							if (Global_1357549.f_1646 == 1 || ENTITY::_0x9A100F1CF4546629(__LIB_0__::func_271(iVar0)))
							{
								if (ENTITY::_0x9A100F1CF4546629(__LIB_0__::func_271(iVar0)))
								{
									__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1645), "LEAVE_DOG_ALONE", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, 0, 0, 1);
									PED::_0xA7DC9266ED6A4E51(__LIB_0__::func_271(iVar0));
								}
								else
								{
									Global_1357549.f_1646 = 0;
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1645), "GENERIC_MOCK", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, 0, 0, 1);
									}
									else
									{
										__LIB_17__::func_437(iVar0);
									}
								}
							}
						}
					}
					else if (iVar1 == 2)
					{
						Global_1357549.f_1645 = __LIB_19__::func_32(iVar0);
						if (((Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(__LIB_0__::func_271(iVar0))) && !AUDIO::IS_ANY_SPEECH_PLAYING(__LIB_0__::func_271(Global_1357549.f_1645)))
						{
							if (Global_1357549.f_1647 == 1)
							{
								Global_1357549.f_1647 = 0;
								if (__LIB_5__::func_995(iVar0))
								{
									__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1645), "DISPUTE_INTERVENE_CAMP_MALE", 334581534, Global_35, 1, 0, 0, 1);
								}
								else
								{
									__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1645), "DISPUTE_INTERVENE_CAMP_FEMALE", 334581534, Global_35, 1, 0, 0, 1);
								}
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 1:
			__LIB_17__::func_409(Global_1357549.f_1635, &(Global_1357549.f_1637), &(Global_1357549.f_1640));
			if ((__LIB_1__::func_652() == 0 || __LIB_2__::func_776()) || __LIB_0__::func_86(Global_1357549.f_1637))
			{
				__LIB_17__::func_438();
				Global_1357549.f_1641 = 0;
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (__LIB_0__::func_272(__LIB_0__::func_271(iVar0), 0))
				{
					iVar1 = PED::_0x89816B58C3466262(__LIB_0__::func_271(iVar0));
					if (iVar1 == 4)
					{
						if (__LIB_0__::func_86(Global_1357549.f_1637) == 0)
						{
							if (PED::IS_PED_ON_MOUNT(Global_35) == 0)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) == 0 && PED::IS_PED_IN_MELEE_COMBAT(Global_35) == 0)
								{
									Global_1357549.f_1645 = __LIB_17__::func_452(iVar0, 1);
									if (__LIB_0__::func_31(Global_1357549.f_1645) && !AUDIO::IS_ANY_SPEECH_PLAYING(__LIB_0__::func_271(Global_1357549.f_1645)))
									{
										if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1357549.f_1636))
										{
											ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549.f_1636);
										}
										__LIB_17__::func_438();
										Global_1357549.f_1636 = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_17__::func_410(), 0, __LIB_17__::func_411(Global_1357549.f_1635), false, true);
										Global_1357549.f_1641 = 3;
									}
									else
									{
										__LIB_17__::func_438();
										Global_1357549.f_1641 = 0;
									}
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 3:
			ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549.f_1636);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Global_1357549.f_1636, __LIB_17__::func_411(Global_1357549.f_1635));
			Global_1357549.f_1641 = 2;
			break;
		case 2:
			if (__LIB_0__::func_699(Global_1357549.f_1645))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1357549.f_1636))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Global_1357549.f_1636, true, false))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Global_1357549.f_1636, __LIB_17__::func_411(Global_1357549.f_1635)))
						{
							TASK::CLEAR_PED_TASKS(__LIB_0__::func_271(Global_1357549.f_1645), true, false);
							__LIB_17__::func_439();
							__LIB_0__::func_82(0, 0, 0);
							Global_1357549.f_1641 = 4;
						}
					}
				}
			}
			else
			{
				func_416(Global_1357549.f_1645, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
			}
			break;
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1357549.f_1636, false))
			{
				if (__LIB_0__::func_272(Global_35, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				}
				__LIB_17__::func_440();
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_PLAYER_SLEEP_GROUND"), 15, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(__LIB_0__::func_271(Global_1357549.f_1645), true);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(__LIB_0__::func_271(Global_1357549.f_1645), false, false, true, false);
				__LIB_1__::func_265(__LIB_0__::func_271(Global_1357549.f_1645), __LIB_17__::func_412(), 272211449, Global_35, 1, 0, 0, 1);
				Global_1357549.f_1641 = 5;
			}
			else
			{
				__LIB_12__::func_999();
				ANIMSCENE::START_ANIM_SCENE(Global_1357549.f_1636);
			}
			break;
		case 5:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1357549.f_1636) > 0.15f)
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(Global_35, 0);
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1357549.f_1636) > 0.92f || (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_35) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1357549.f_1636) > 0.37f))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				ANIMSCENE::ABORT_ANIM_SCENE(Global_1357549.f_1636, false);
				__LIB_1__::func_283(&(Global_1357549.f_1642), 0);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(__LIB_0__::func_271(Global_1357549.f_1645), true, false, true, false);
				func_421(joaat("CSTAG_GRIEFING_KNOCKOUT_POST"), 1017034651, joaat("CSTAG_PRIORITY_CRITICAL"), 6, 1, 1, 0);
				Global_1357549.f_1641 = 6;
			}
			break;
		case 6:
			if (__LIB_0__::func_265(&(Global_1357549.f_1642)) > fVar2)
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, Global_1357549.f_1637, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, Global_1357549.f_1640);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(Global_1357549.f_1636, __LIB_17__::func_411(Global_1357549.f_1635));
				ANIMSCENE::RESET_ANIM_SCENE(Global_1357549.f_1636, 0);
				ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549.f_1636);
				CLOCK::ADD_TO_CLOCK_TIME(4, 0, 0);
				Global_1357549.f_1641 = 8;
				func_422(Global_1357549.f_1645, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				func_423();
				__LIB_19__::func_33(fVar3);
				return true;
			}
			break;
		case 8:
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_PLAYER_SLEEP_GROUND"), false))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
				{
					if (__LIB_0__::func_265(&(Global_1357549.f_1642)) > (fVar2 + 2.5f))
					{
						Global_1357549.f_1641 = 7;
					}
				}
			}
			break;
		case 7:
			Global_1357549.f_1635++;
			if (Global_1357549.f_1635 >= 4)
			{
				Global_1357549.f_1635 = 0;
			}
			PED::_0xC494C76A34266E82(Global_35, 3);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(250);
			}
			__LIB_16__::func_772();
			Global_1357549.f_1641 = 9;
			break;
		case 9:
			__LIB_17__::func_413();
			if (__LIB_0__::func_265(&(Global_1357549.f_1642)) > (fVar2 + fVar3))
			{
				Global_1357549.f_1641 = 10;
			}
			break;
		case 10:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) == 0)
			{
				if (__LIB_0__::func_272(Global_35, 0))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					}
				}
				__LIB_0__::func_37(&(Global_1357549.f_1642));
				STREAMING::_0x4EDDD9E9CA5AF985(joaat("WORLD_PLAYER_SLEEP_GROUND"));
				__LIB_4__::func_268(2, joaat("HONOR_EVENT_ANTAGONIZE"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				Global_1357549.f_1641 = 0;
			}
			break;
	}
	return false;
}

int func_202()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	if (Global_1572887.f_8)
	{
		return 1;
	}
	if ((Global_36 == 0f && Global_36.f_1 == 0f) && Global_36.f_2 == 0f)
	{
		return 1;
	}
	if (Global_1894899 & 264 != 0)
	{
		return 1;
	}
	if (Global_1572887.f_12 == -1 && __LIB_0__::func_382(64))
	{
		bVar0 = true;
	}
	else if (Global_1572887.f_12 == 0)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (__LIB_0__::func_20(Global_1894899.f_2))
	{
		bVar2 = VOLUME::_DOES_VOLUME_EXIST(Global_1888801[Global_1894899.f_2 /*35*/].f_3);
		bVar3 = true;
		if (bVar2)
		{
			bVar1 = VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[Global_1894899.f_2 /*35*/].f_3, Global_36);
		}
	}
	bVar4 = PED::IS_PED_INJURED(Global_35);
	bVar5 = __LIB_0__::func_296(0, 1, 1);
	if (bVar0 && !bVar4)
	{
		if (__LIB_0__::func_20(Global_1894899.f_2))
		{
			__LIB_18__::func_264(Global_1894899.f_2, Global_1894899.f_2, bVar5);
			if (Global_1894899.f_5 != Global_1894899.f_2)
			{
				__LIB_18__::func_264(Global_1894899.f_5, Global_1894899.f_2, bVar5);
			}
		}
		else
		{
			__LIB_18__::func_264(Global_1894899.f_5, Global_1894899.f_2, bVar5);
		}
	}
	Global_1894899.f_5++;
	if (Global_1894899.f_5 >= 130)
	{
		Global_1894899.f_5 = 0;
	}
	if (bVar3)
	{
		func_433(Global_1894899.f_2, bVar1, bVar2);
	}
	else
	{
		iVar6 = 0;
		iVar7 = (130 - 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			iVar8 = __LIB_1__::func_447(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
			if (__LIB_0__::func_20(iVar8))
			{
				iVar6 = iVar8;
				iVar7 = iVar8;
			}
		}
		else if (__LIB_1__::func_510(8))
		{
			if (__LIB_0__::func_69(Global_1897952.f_41))
			{
				if ((Global_1897952.f_41 == 5 || Global_1897952.f_41 == 6) || Global_1897952.f_41 == 7)
				{
					iVar6 = __LIB_17__::func_414(7);
					iVar7 = __LIB_17__::func_415(6);
				}
				else
				{
					iVar6 = __LIB_17__::func_414(Global_1897952.f_41);
					iVar7 = __LIB_17__::func_415(Global_1897952.f_41);
				}
			}
		}
		if (Global_1894899.f_4 < iVar6 || Global_1894899.f_4 > iVar7)
		{
			bVar10 = __LIB_17__::func_416(&bVar9);
			if (!bVar10)
			{
				Global_1894899.f_4 = iVar6;
			}
		}
		func_433(Global_1894899.f_4, bVar1, VOLUME::_DOES_VOLUME_EXIST(Global_1888801[Global_1894899.f_4 /*35*/].f_3));
		if (bVar9)
		{
			Global_1894899.f_4 = iVar6;
		}
		else if (!bVar10)
		{
			Global_1894899.f_4++;
		}
	}
	return 1;
}

Vector3 func_212(float fParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vVar0 = { func_443(Global_36, uParam1, uParam2, 1, 0, 0, 0, 0, 0, 0, fParam0, 10f) };
	return vVar0;
}

void func_244(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	iVar0 = __LIB_6__::func_196(16);
	fVar1 = __LIB_5__::func_941();
	if (!bParam4 || iParam0 == 1)
	{
		func_479(iParam0, iParam1, bParam2);
		__LIB_6__::func_303(iParam0, fVar1, bParam2);
	}
	if (!bParam4 || iParam0 == 2)
	{
		func_481(iParam0, iParam1, bParam2, bParam3);
		__LIB_6__::func_304(iParam0, fVar1, bParam2, bParam3);
	}
	if (!bParam4 || iParam0 == 3)
	{
		func_483(iParam0, iParam1, bParam2);
		__LIB_6__::func_306(iParam0, fVar1, bParam2);
	}
	__LIB_6__::func_307(iParam0, Global_40.f_4283.f_314);
	__LIB_6__::func_109(iParam0, iVar0);
}

char* func_265(int iParam0)
{
	switch (iParam0)
	{
		case 465794448:
			return "shopInventories/shelfType(id=%x)";
		case -815325344:
			return "shopInventories/shopSellableItems(shopType=%x)";
		case -764679122:
			return "invItem";
		case -1893576372:
			return "invItem(%i)";
		case 549615901:
			return "invItem(itemID=%x)";
		case 656138654:
			return "requirement";
		case -1661050588:
			return "requirement(%i)";
		case 53142323:
			return "invItem(itemID=%x)/variations";
		case -1970263451:
			return "item(%i)";
		case -101978662:
			return "variations(%i)";
		case 1986163665:
			return ":type";
		case 1976824961:
			return ":reqName";
		case -199231160:
			return ":state";
		case -908395502:
			return ":itemID";
		case 421691991:
			return ":itemCnt";
		case -1400723349:
			return ":itemStackSize";
		case -562246383:
			return "item(%i):itemID";
		default:
			break;
	}
	return "";
}

char* func_266(int iParam0)
{
	switch (iParam0)
	{
		case 1170159957:
			return "itemset";
		case -956415585:
			return "itemset/item(%i)";
		case 1063445323:
			return "itemset/item(id=%x)";
		case -1574188157:
			return "components";
		case -1752779714:
			return "component(%i)";
		case 1004470061:
			return "components/component(%i)";
		case -1218801571:
			return "texture(%i)";
		case -1864618971:
			return "category_sets";
		case 122953168:
			return "categories(%i)";
		case -225486300:
			return "type(%i)";
		case 902278251:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x)";
		case 72319938:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(%i)";
		case -950930560:
			return "METAPED_CLOTHING_LOGIC/HIDE_ACTIONS/HIDE_ACTION(id=%x)";
		case -1384491765:
			return "METAPED_CLOTHING_LOGIC/MOD_INFO/MOD(id=%x)";
		case -1995898785:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_REQUIREMENTS/REQUIREMENTS(id=%x)";
		case 1814477267:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_REQUIREMENTS/REQUIREMENTS(%i)";
		case 435382182:
			return "METAPED_CLOTHING_LOGIC/PERSIST_DEFAULTS/PERSIST_ITEMS(id=%x)";
		case 293643052:
			return "METAPED_CLOTHING_LOGIC/PERSIST_DEFAULTS/PERSIST_COMPONENT_ITEMS(id=%x)";
		case 371382169:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_TEMPLATE(id=%x)";
		case -1062209954:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i)";
		case 757000479:
			return "CLOTHING_TAGS/CLOTHING_TAG(tag=%x)";
		case 580624393:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i)/ITEM(%i)";
		case -616834454:
			return "CLOTHING_TAG(%i)";
		case 2124169410:
			return "ITEM(%i)";
		case -1167877887:
			return "ITEM(id=%x)";
		case -850610138:
			return "MOD_LIST";
		case 670821262:
			return "MOD_LIST/ITEM(mod=%x)";
		case -1330667583:
			return "PREREQ(%i)";
		case -684355284:
			return "VARIATION(%i)";
		case -1418665930:
			return "GLOBAL_REQUIREMENTS";
		case -1507835846:
			return "PREREQ(id=%x)";
		case -901251340:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_LISTS/ITEM_LIST(id=%x)";
		case 1786184768:
			return "NET_CLOTHING_OUTFITS/OUTFIT_SET(id=%x)";
		case 181728933:
			return "NET_CLOTHING_OUTFITS/OUTFIT_SET(%i)";
		case -929624153:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/OUTFIT_TINTS(id=%x)/TINT_SET(id=%x)";
		case -575241652:
			return "TINT_SET(id=%x)";
		case -1636119814:
			return "GENDER(id=%x)";
		case -1990973241:
			return "TINT(%i)";
		case 570854305:
			return "OUTFIT(%i)";
		case -441020063:
			return "METAPED_CLOTHING_LOGIC/MOD_ACTIONS/MOD_ACTION(id=%x)";
		case -621257950:
			return "ITEM_TYPE(%i)";
		case -180564037:
			return "MOD_ITEM(%i)";
		case 791623761:
			return "MOD_ITEM(conflicting_mod=%x)";
		case 1921232557:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(id=%x)";
		case -785467695:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(%i)";
		case 1645903593:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(id=%x)/ITEM(%i)";
		case -780950631:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT_GROUP(id=%x)";
		case -1516336530:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_MULTI_ITEM(id=%x)";
		case 1397673214:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_MULTI_ASSET(id=%x)";
		case -1894594100:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_COMPONENT_OUTFIT(id=%x)";
		case -1509637852:
			return "MOD_ACTION(%i)";
		case -1873083679:
			return "MOD_ACTION(id=%x)";
		case 18833337:
			return "ASSET_TINTS/ITEM(%i)";
		case 683611174:
			return "ASSET_TINTS/ITEM(tag=%x)";
		case 1495456772:
			return "ITEM(type=%x)";
		case -662697758:
			return "ITEM_TYPE(type=%x)/MOD_ITEM(switch_to_mod=%x)";
		case 532664358:
			return "METAPED_CLOTHING_LOGIC/PRIORITY_LISTS/PRIORITY_LIST(id=%x)";
		case 206913325:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM_GROUP(id=%x)";
		case -575695046:
			return "METAPED_CLOTHING_LOGIC/TAG_INFO/ITEM(id=%x)";
		case -902846119:
			return "METAPED_CLOTHING_LOGIC/TYPE_INFO/ITEM(id=%x)";
		case 1069236071:
			return "METAPED_CLOTHING_LOGIC/PED_EXPRESSION_INFO";
		case 294713880:
			return "METAPED_CLOTHING_LOGIC/META_COMPONENT_INFO";
		case 1895156137:
			return "INFO_FLAGS/ITEM(%i)";
		case -1580989022:
			return "CLOTHING_ITEM(id=%x)/CLOTHING_TAGS/CLOTHING_TAG/ITEM(id=%x):length";
		case -1119978610:
			return "META_TAG(%i)";
		case -641661298:
			return ":id";
		case -1179965762:
			return ":category";
		case -2059916790:
			return ":type";
		case 75574092:
			return ":label";
		case -1574347650:
			return ":name";
		case 503961584:
			return ":description";
		case -1761676834:
			return ":base";
		case -612355112:
			return ":tag";
		case 1650660506:
			return ":is_list";
		case 1422969767:
			return ":element";
		case -50676598:
			return ":conflicting_mod";
		case -274378420:
			return ":switch_to_mod";
		case -922450292:
			return ":debug_name";
		case -20900817:
			return ":weather_rating";
		case 1533929150:
			return ":modifiable";
		case 607361843:
			return ":palette_hash";
		case -914904147:
			return ":tint0";
		case -2114544496:
			return ":tint1";
		case -1925926132:
			return ":tint2";
		case 478480241:
			return ":action";
		case 1147691011:
			return ":mod";
		case -2108295561:
			return ":gender_type";
		case -2143122356:
			return ":group_id";
		case 595361980:
			return ":item_id";
		case -1872363127:
			return ":requirement";
		case -346222474:
			return ":player_type";
		case 1702953056:
			return ":male";
		case 1724971146:
			return ":female";
		case -2091945982:
			return ":model_male";
		case -1930670456:
			return ":model_female";
		case 139135334:
			return ":chin_length";
		case -377475286:
			return ":chops_length";
		case -1032429045:
			return ":stache_length";
		case -1310250464:
			return ":pdata_file";
		case 1140322086:
			return ":template";
		case 1257828006:
			return ":layer_type";
		case -1837131440:
			return ":drawable";
		case 416492924:
			return ":albedo";
		case -1391664603:
			return ":normal";
		case -589329400:
			return ":material";
		case 1983683828:
			return ":tex_alpha";
		case -1610948558:
			return ":blend_type";
		case -1316510272:
			return ":roughness";
		case 389725116:
			return ":sheet_grid_index";
		case -1840536550:
			return ":mod_texture";
		case -1991054358:
			return ":mod_channel";
		case -1933358492:
			return ":mod_alpha";
		case -1675772613:
			return ":base_layer";
		case -465134547:
			return ":partial";
		case 798674206:
			return ":none_item";
		case -850484704:
			return ":slot_id";
		case -616287568:
			return "ITEM(length=%x):id";
		case -649824246:
			return "ITEM(%i):override";
		case 1273576207:
			return "ITEM(%i):mod";
		case 668292726:
			return "ITEM(%i):tag";
		case 476944399:
			return "ITEM(%i):id";
		case 1246928384:
			return "ITEM(%i):element";
		case -2102005109:
			return "ITEM(%i):hide_mod";
		case 1893749034:
			return "ITEM(%i):type";
		case -1750442909:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i):base";
		case -2122922976:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i):tag";
		case 1047718714:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i)/ITEM(%i):id";
		case 71109396:
			return "itemset/item(id=%x):requirement";
		case -1918885948:
			return "itemset/item(id=%x):type";
		case 834216597:
			return "METAPED_CLOTHING_LOGIC/MOD_INFO/MOD(id=%x):requirement";
		case 436847552:
			return "METAPED_CLOTHING_LOGIC/MOD_INFO/MOD(id=%x):group_id";
		case 635931682:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x):template";
		case 1465270576:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x):requirement";
		case 523185636:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(%i):type";
		case 288969396:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x):player_type";
		case -138791404:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_MULTI_ITEM(id=%x):player_type";
		case 1959938229:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(id=%x):player_type";
		case 353841523:
			return "INFO_FLAGS/ITEM(%i):id";
		case 730116258:
			return "ITEM_TYPE(type=%x)/MOD_ITEM(conflicting_mod=%x):switch_to_mod";
		case -1991559626:
			return "META_TAG(%i):id";
		default:
			break;
	}
	return "invalid NET_CLOTHING_XML_REGISTERED_QUERIES";
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case -1023752283:
			return "shopProvisions/provision(inventoryItem=%x)";
		case -1076906043:
			return ":inventoryItem";
		case -153135980:
			return ":districtBAY";
		case 12851681:
			return ":districtBGV";
		case 1386325051:
			return ":districtBLU";
		case 43722464:
			return ":districtCML";
		case -581476215:
			return ":districtGRT";
		case -1906982261:
			return ":districtGRZ";
		case -1035806543:
			return ":districtHRT";
		case 1579284209:
			return ":districtROA";
		case -1172613177:
			return ":districtSCM";
		case 495869290:
			return ":districtTAL";
		case -1382561665:
			return ":districtHEN";
		case 684071069:
			return ":districtCHO";
		case 1357371535:
			return ":districtRIO";
		case -1221865546:
			return ":districtGAP";
		default:
			break;
	}
	return "";
}

char* func_268(int iParam0)
{
	switch (iParam0)
	{
		case 1781729525:
			return "honorItems";
		case -2103982008:
			return "item";
		case -57097983:
			return "item(%i)";
		case 2027336698:
			return ":inventoryItem";
		case 316053773:
			return ":unlockThreshold";
		default:
			break;
	}
	return "";
}

void func_271(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/] = -1;
	Global_1888801[iParam0 /*35*/].f_1 = 0;
	Global_1888801[iParam0 /*35*/].f_2 = 0;
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
	{
		DECORATOR::_DECOR_REMOVE_ALL(Global_1888801[iParam0 /*35*/].f_3);
		VOLUME::_DELETE_VOLUME(Global_1888801[iParam0 /*35*/].f_3);
	}
	Global_1888801[iParam0 /*35*/].f_3 = 0;
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_4))
	{
		DECORATOR::_DECOR_REMOVE_ALL(Global_1888801[iParam0 /*35*/].f_4);
		VOLUME::_DELETE_VOLUME(Global_1888801[iParam0 /*35*/].f_4);
	}
	Global_1888801[iParam0 /*35*/].f_4 = 0;
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_5))
	{
		DECORATOR::_DECOR_REMOVE_ALL(Global_1888801[iParam0 /*35*/].f_5);
		VOLUME::_DELETE_VOLUME(Global_1888801[iParam0 /*35*/].f_5);
	}
	Global_1888801[iParam0 /*35*/].f_5 = 0;
	Global_1888801[iParam0 /*35*/].f_9 = 0;
	Global_1888801[iParam0 /*35*/].f_10 = 1f;
	Global_1888801[iParam0 /*35*/].f_11 = -1f;
	Global_1888801[iParam0 /*35*/].f_13 = -1;
	Global_1888801[iParam0 /*35*/].f_14 = 0;
	Global_1888801[iParam0 /*35*/].f_15 = { 0f, 0f, 0f };
	Global_1888801[iParam0 /*35*/].f_20 = 0;
	StringCopy(&(Global_1888801[iParam0 /*35*/].f_22), "", 8);
	StringCopy(&(Global_1888801[iParam0 /*35*/].f_23), "", 24);
	StringCopy(&(Global_1888801[iParam0 /*35*/].f_26), "", 32);
	Global_1888801[iParam0 /*35*/].f_31 = 0;
	Global_1888801[iParam0 /*35*/].f_31.f_1 = 0;
	Global_1888801[iParam0 /*35*/].f_31.f_2 = 0;
	Global_1888801[iParam0 /*35*/].f_31.f_3 = 0;
}

void func_272()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_172, -244250050, "CVolumeEditor__VolumeDataArray/volumes");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_172, -734680005, "Item(%i)/name:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_172, -1285134888, "Item(%i)/parent:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_172, -177723663, "Item(%i)/position:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_172, -968243019, "Item(%i)/position:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_172, -646025442, "Item(%i)/position:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_172, 1397255209, "Item(%i)/orientation:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_172, 503447965, "Item(%i)/orientation:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_172, 800892178, "Item(%i)/orientation:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_172, 1348766134, "Item(%i)/scale:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_172, 1572185176, "Item(%i)/scale:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_172, -1543393037, "Item(%i)/scale:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_172, 1958238202, "Item(%i)/type:text");
}

void func_273()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_173, -244250050, "CVolumeEditor__VolumeDataArray/volumes");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_173, -734680005, "Item(%i)/name:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_173, -1285134888, "Item(%i)/parent:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_173, -177723663, "Item(%i)/position:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_173, -968243019, "Item(%i)/position:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_173, -646025442, "Item(%i)/position:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_173, 1397255209, "Item(%i)/orientation:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_173, 503447965, "Item(%i)/orientation:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_173, 800892178, "Item(%i)/orientation:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_173, 1348766134, "Item(%i)/scale:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_173, 1572185176, "Item(%i)/scale:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_173, -1543393037, "Item(%i)/scale:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_173, 1958238202, "Item(%i)/type:text");
}

void func_274()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_174, -244250050, "CVolumeEditor__VolumeDataArray/volumes");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_174, -734680005, "Item(%i)/name:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_174, -1285134888, "Item(%i)/parent:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_174, -177723663, "Item(%i)/position:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_174, -968243019, "Item(%i)/position:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_174, -646025442, "Item(%i)/position:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_174, 1397255209, "Item(%i)/orientation:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_174, 503447965, "Item(%i)/orientation:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_174, 800892178, "Item(%i)/orientation:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_174, 1348766134, "Item(%i)/scale:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_174, 1572185176, "Item(%i)/scale:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_174, -1543393037, "Item(%i)/scale:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_174, 1958238202, "Item(%i)/type:text");
}

void func_277()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_175, -258890676, "Regions");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_175, 1489686829, "Region(%i)/name:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_175, 596301644, "Region(%i)/fPedRangeMult:value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_175, 325957282, "Region(%i)/fScenarioRangeMult:value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899.f_175, 426139466, "Region(%i)/iScenarioPedDesinty:text");
}

bool func_278(var uParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	int iVar5;
	Var0 = *uParam0;
	Var0.f_2 = 1276999770;
	Var0.f_3 = __LIB_9__::func_28(iParam1);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1459980739;
		DATAFILE::_DATAFILE_GET_STRING(uParam2, &Var0);
		Var0.f_2 = -158797272;
		DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_8), &Var0);
		Var0.f_2 = -1484939920;
		DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0);
		uParam2->f_16 = func_507(iVar5);
		Var0.f_2 = 670069251;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_17), &Var0);
		uParam2->f_18 = 0;
		Var0.f_2 = 1422201736;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar5, &Var0))
		{
			if (iVar5 == 1)
			{
				uParam2->f_18 |= 8;
			}
		}
		Var0.f_2 = 865021745;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar5, &Var0))
		{
			if (iVar5 == 1)
			{
				uParam2->f_18 |= 1;
			}
		}
		Var0.f_2 = 2078335853;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar5, &Var0))
		{
			if (iVar5 == 1)
			{
				uParam2->f_18 |= 4;
			}
		}
		Var0.f_2 = 899379634;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar5, &Var0))
		{
			if (iVar5 == 1)
			{
				uParam2->f_18 |= 64;
			}
		}
		Var0.f_2 = 414670492;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar5, &Var0))
		{
			if (iVar5 == 1)
			{
				uParam2->f_18 |= 16;
			}
		}
		Var0.f_2 = -2025494336;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar5, &Var0))
		{
			if (iVar5 == 1)
			{
				uParam2->f_18 |= 32;
				Var0.f_2 = 2028394285;
				DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0);
				uParam2->f_19 = func_507(iVar5);
			}
			else
			{
				uParam2->f_19 = 0;
			}
		}
		else
		{
			uParam2->f_19 = 0;
		}
	}
	else
	{
		return false;
	}
	return true;
}

Vector3 func_279(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 9:
			return 1904.414f, -1861.146f, 46.3769f;
		case 11:
			return -1409.312f, -216.6785f, 104.2144f;
		case 109:
			return -2419.6f, -997f, 166.8f;
		case 79:
			return 2342.779f, 1359.049f, 106.3936f;
		case 43:
			return -1356.339f, 2443.121f, 308.1876f;
		case 98:
			return 654.1462f, -1245.725f, 43.7026f;
		case 71:
			return -125.85f, -39.599f, 96.0908f;
		case 4:
			return 2222.172f, -772.852f, 42.662f;
		case 22:
			return -2593.808f, 457.4836f, 146.9974f;
		case 37:
			return -1640.158f, -1361.486f, 84.5064f;
		case 125:
			return -3962.021f, -2137.957f, -5.9562f;
		case 127:
			return -1406.7f, -2308.9f, 42.5f;
		case 58:
			return 1422.625f, -7332.473f, 80.5977f;
		default:
			break;
	}
	return __LIB_2__::func_116(iParam0, 0);
}

void func_281(int iParam0, var uParam1)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_21 = (Global_1888801[iParam0 /*35*/].f_21 || uParam1);
}

bool func_284(var uParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	Var0 = *uParam0;
	Var0.f_2 = 1252559615;
	Var0.f_3 = __LIB_9__::func_28(iParam1);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1711029673;
		DATAFILE::_DATAFILE_GET_BOOL(uParam2, &Var0);
		Var0.f_2 = 1758612600;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam2->f_1), &Var0);
		Var0.f_2 = 115903213;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_2), &Var0);
	}
	else
	{
		return false;
	}
	return true;
}

void func_288()
{
	Global_1894052[0 /*3*/] = 0;
	Global_1894052[0 /*3*/].f_1 = -1500f;
	Global_1894052[0 /*3*/].f_2 = 1500f;
	Global_1894052[1 /*3*/] = 2;
	Global_1894052[1 /*3*/].f_1 = 1500f;
	Global_1894052[1 /*3*/].f_2 = 1500f;
	Global_1894052[2 /*3*/] = 8;
	Global_1894052[2 /*3*/].f_1 = -1500f;
	Global_1894052[2 /*3*/].f_2 = -1500f;
	Global_1894052[3 /*3*/] = 10;
	Global_1894052[3 /*3*/].f_1 = 1500f;
	Global_1894052[3 /*3*/].f_2 = -1500f;
}

void func_289(struct<2> Param0, float fParam2, struct<2> Param3, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam9 + 1;
	iVar1 = (iParam9 + iParam10);
	iVar2 = iVar1 + 1;
	if (Param0 > fParam6)
	{
		(*iParam8)[iParam9] = 0;
		(*iParam8)[iVar1] = 0;
	}
	if (Param3 < fParam6)
	{
		(*iParam8)[iVar0] = 0;
		(*iParam8)[iVar2] = 0;
	}
	if (Param0.f_1 > fParam7)
	{
		(*iParam8)[iVar1] = 0;
		(*iParam8)[iVar2] = 0;
	}
	if (Param3.f_1 < fParam7)
	{
		(*iParam8)[iParam9] = 0;
		(*iParam8)[iVar0] = 0;
	}
	if ((((*iParam8)[iParam9] == 0 && (*iParam8)[iVar1] == 0) && (*iParam8)[iVar0] == 0) && (*iParam8)[iVar2] == 0)
	{
	}
}

void func_290(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam1 + 1;
	iVar1 = (iParam1 + iParam2);
	iVar2 = iVar1 + 1;
	(*iParam0)[iParam1] = 0;
	(*iParam0)[iVar0] = 0;
	(*iParam0)[iVar1] = 0;
	(*iParam0)[iVar2] = 0;
}

void func_291(int iParam0, bool bParam1)
{
	if (Global_1934765.f_69.f_201 >= 100)
	{
		return;
	}
	Global_1934765.f_69[Global_1934765.f_69.f_201 /*2*/] = iParam0;
	Global_1934765.f_69[Global_1934765.f_69.f_201 /*2*/].f_1 = bParam1;
	Global_1934765.f_69.f_201++;
	if (bParam1)
	{
	}
}

void func_300()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	if (!__LIB_0__::func_1(Global_1935630, 8192))
	{
		return;
	}
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_0__::func_8(&Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP1")))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP2")))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP3")))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP4")))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP5")))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP6")))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP7")))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP8")))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP9")))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(10f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS"))))));
	fVar0 = (fVar0 + (0.6f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(25f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("UNIQUE_BEATS_COMPLETED"))))));
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("GANG_AMBUSH_ENCOUNTERED"))))));
	fVar0 = (fVar0 + (0.3333333f * __LIB_0__::func_646(6f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("GANG_HIDEOUT_COMPLETED"))))));
	fVar0 = (fVar0 + (3f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("DISCOVERABLE_FOUND"))))));
	iVar1 = __LIB_0__::func_648();
	fVar0 = (fVar0 + (0.1111111f * __LIB_0__::func_646(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ACTRESSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ACTRESSES"))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_AMERICANS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_AMERICANS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ANIMALS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ANIMALS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ARTISTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ARTISTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GIRLS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GIRLS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GUNSLINGERS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GUNSLINGERS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_HORSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_HORSES")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_INVENTIONS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_INVENTIONS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_LANDMARKS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_LANDMARKS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_PLANTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_PLANTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_SPORTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_SPORTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_VEHICLES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_VEHICLES")))));
	fVar0 = (fVar0 + __LIB_0__::func_646(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * __LIB_0__::func_646(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(__LIB_1__::func_5()))));
	if (__LIB_1__::func_187(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 499813453)));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 666607663))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), -220219788))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 218622660))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 390004462))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 6410548))));
	fVar0 = (fVar0 + (1f * __LIB_0__::func_646(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SHACK_FOUND"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("KILLS"), joaat("LEGENDARY_ANIMALS"))))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("FISH")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(joaat("GANGS")));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HERBS")), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HORSES")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48)));
	__LIB_17__::func_455(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_838(joaat("HORSES_REACHED_MAX_BOND"))))));
	fVar5 = BUILTIN::TO_FLOAT(__LIB_1__::func_6());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("BLACKJACK"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("DOMINOES_HAND"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("FIVE_FINGER"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("POKER_HAND"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SPECIAL_PED_INTERACTION"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("BATHS_TAKEN"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SHOWS_SEEN"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("THEATRE_VISITS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("AMMO"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("FOOD"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("COACH"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("HOME"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("SHOP"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("TRAIN"))))));
	Var6 = { __LIB_0__::func_14(joaat("TOTAL_PROGRESS_MADE")) };
	fVar8 = __LIB_0__::func_650(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (__LIB_0__::func_6(Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < Global_1898329)
		{
			if (!__LIB_0__::func_6(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = __LIB_0__::func_291(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					__LIB_1__::func_722(Global_1898330[iVar61]);
				}
				else
				{
					__LIB_1__::func_130(iVar61, 0);
					if (__LIB_0__::func_700(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = __LIB_0__::func_299(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (Global_40.f_450[iVar63] > -1 && Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = __LIB_0__::func_299(Global_1347702[Global_40.f_450[iVar63] /*49*/].f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_TELEMETRY_GAME_PROGRESS(__LIB_0__::func_299(Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_309()
{
	vector3 vVar0;
	vector3 vVar10;
	if (__LIB_0__::func_898(-1215445344))
	{
		__LIB_0__::func_400(-661560211);
		__LIB_0__::func_401(joaat("VAL_02_LOCKDOWN_BANK"));
		__LIB_0__::func_401(-784156210);
		if (__LIB_0__::func_293(45))
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_441("nav_val_es_full_lockdown");
		}
		else
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_441("nav_val_full_lockdown");
		}
	}
	else
	{
		__LIB_0__::func_400(joaat("VAL_02_LOCKDOWN_BANK"));
		__LIB_0__::func_400(-784156210);
		__LIB_0__::func_401(-661560211);
		if (__LIB_0__::func_293(45))
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_441("nav_val_es");
		}
		else
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_440("nav_val_full_lockdown");
		}
	}
	if (__LIB_0__::func_898(-254562075))
	{
		__LIB_0__::func_400(-1049500949);
		__LIB_0__::func_401(-981203673);
		__LIB_0__::func_401(-2009766528);
	}
	else
	{
		__LIB_0__::func_400(-981203673);
		__LIB_0__::func_400(-2009766528);
		__LIB_0__::func_401(-1049500949);
	}
	if (__LIB_0__::func_898(320943355))
	{
		__LIB_0__::func_400(135886022);
		__LIB_0__::func_401(1228600352);
		__LIB_0__::func_401(406334892);
	}
	else
	{
		__LIB_0__::func_400(1228600352);
		__LIB_0__::func_400(406334892);
		__LIB_0__::func_401(135886022);
	}
	if (__LIB_0__::func_898(689024866))
	{
		__LIB_0__::func_400(-1933617196);
		__LIB_0__::func_401(joaat("VAL_02_LOCKDOWN_GUN"));
		__LIB_0__::func_401(-1905652203);
	}
	else
	{
		__LIB_0__::func_400(joaat("VAL_02_LOCKDOWN_GUN"));
		__LIB_0__::func_400(-1905652203);
		__LIB_0__::func_401(-1933617196);
	}
	if (__LIB_0__::func_898(1160698568))
	{
		__LIB_0__::func_400(-1588793465);
		__LIB_0__::func_401(joaat("VAL_02_LOCKDOWN_HOTEL"));
		__LIB_0__::func_401(1519091923);
		__LIB_1__::func_948(1879307167, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(540459374, 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		__LIB_0__::func_400(joaat("VAL_02_LOCKDOWN_HOTEL"));
		__LIB_0__::func_400(1519091923);
		__LIB_0__::func_401(-1588793465);
		__LIB_1__::func_948(1879307167, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(540459374, 0, 0, 0, 1, 0, 0, 0);
	}
	if (__LIB_0__::func_898(-1179948750))
	{
		__LIB_0__::func_400(joaat("VAL_03_DEFAULT_JAIL"));
		__LIB_0__::func_401(-1301569116);
		__LIB_0__::func_401(joaat("VAL_03_PROPS_LOCKDOWN_JAIL"));
	}
	else
	{
		__LIB_0__::func_400(-1301569116);
		__LIB_0__::func_400(joaat("VAL_03_PROPS_LOCKDOWN_JAIL"));
		__LIB_0__::func_401(joaat("VAL_03_DEFAULT_JAIL"));
	}
	if (__LIB_0__::func_898(1713221411))
	{
		__LIB_0__::func_400(924412185);
		__LIB_0__::func_401(joaat("VAL_02_LOCKDOWN_LAW"));
		__LIB_0__::func_401(-156313117);
	}
	else
	{
		__LIB_0__::func_400(joaat("VAL_02_LOCKDOWN_LAW"));
		__LIB_0__::func_400(-156313117);
		__LIB_0__::func_401(924412185);
	}
	if (__LIB_0__::func_898(300221584))
	{
		__LIB_0__::func_400(-1781246069);
		__LIB_0__::func_401(282485265);
		__LIB_0__::func_401(-1744253204);
	}
	else
	{
		__LIB_0__::func_400(282485265);
		__LIB_0__::func_400(-1744253204);
		__LIB_0__::func_401(-1781246069);
	}
	if (__LIB_0__::func_898(-220282381))
	{
		__LIB_0__::func_400(-1892595931);
		__LIB_0__::func_401(56708243);
	}
	else
	{
		__LIB_0__::func_400(56708243);
		__LIB_0__::func_401(-1892595931);
	}
	if (__LIB_0__::func_898(-1329135070))
	{
		__LIB_0__::func_400(-1158072415);
		__LIB_0__::func_401(199047531);
		__LIB_0__::func_401(192173299);
		__LIB_1__::func_861(32, 1);
	}
	else
	{
		__LIB_0__::func_400(199047531);
		__LIB_0__::func_400(192173299);
		__LIB_0__::func_401(-1158072415);
		if ((!__LIB_2__::func_765(9, 0) && !__LIB_5__::func_219(5)) && !__LIB_6__::func_92(5))
		{
			vVar0 = -1;
			vVar0.f_1 = -1;
			vVar0.f_2 = -1;
			__LIB_1__::func_65(32, &vVar0, 1);
			__LIB_1__::func_806(&vVar0, 1, 1);
		}
	}
	if (__LIB_0__::func_898(-1763509974))
	{
		__LIB_0__::func_401(-776975047);
		__LIB_0__::func_401(1385025009);
		if (!__LIB_0__::func_898(-1215445344))
		{
			if (__LIB_0__::func_293(45))
			{
				__LIB_5__::func_440("nav_val_saloon_lockdown");
				__LIB_5__::func_440("nav_val_full_lockdown");
				__LIB_5__::func_440("nav_val_es");
				__LIB_5__::func_440("nav_val_es_full_lockdown");
				__LIB_5__::func_441("nav_val_es_saloon_lockdown");
			}
			else
			{
				__LIB_5__::func_440("nav_val_saloon_lockdown");
				__LIB_5__::func_440("nav_val_es_saloon_lockdown");
				__LIB_5__::func_440("nav_val_full_lockdown");
				__LIB_5__::func_440("nav_val_es_full_lockdown");
				__LIB_5__::func_440("nav_val_es");
				__LIB_5__::func_441("nav_val_saloon_lockdown");
			}
		}
		__LIB_1__::func_948(-908482159, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(-1147728628, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(968874193, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(1154795503, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(583884620, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(261929195, 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x7F458B543006C8FE(-908482159, 28);
		OBJECT::_0x7F458B543006C8FE(-1147728628, 28);
		OBJECT::_0x7F458B543006C8FE(968874193, 28);
		OBJECT::_0x7F458B543006C8FE(1154795503, 28);
		OBJECT::_0x7F458B543006C8FE(583884620, 28);
		OBJECT::_0x7F458B543006C8FE(261929195, 28);
	}
	else
	{
		__LIB_0__::func_400(-776975047);
		__LIB_0__::func_400(1385025009);
		__LIB_1__::func_948(-908482159, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(-1147728628, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(968874193, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(1154795503, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(583884620, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(261929195, 0, 0, 0, 1, 0, 0, 0);
		OBJECT::_0x0C0A373D181BF900(-908482159);
		OBJECT::_0x0C0A373D181BF900(-1147728628);
		OBJECT::_0x0C0A373D181BF900(968874193);
		OBJECT::_0x0C0A373D181BF900(1154795503);
		OBJECT::_0x0C0A373D181BF900(583884620);
		OBJECT::_0x0C0A373D181BF900(261929195);
		if (__LIB_0__::func_293(45))
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_full_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_441("nav_val_es");
		}
		else
		{
			__LIB_5__::func_440("nav_val_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_saloon_lockdown");
			__LIB_5__::func_440("nav_val_es_full_lockdown");
			__LIB_5__::func_440("nav_val_es");
			__LIB_5__::func_440("nav_val_full_lockdown");
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_898(-1206122982))
		{
			__LIB_0__::func_123(450, 32);
			__LIB_0__::func_123(451, 32);
			__LIB_0__::func_123(452, 32);
			__LIB_0__::func_123(453, 32);
			__LIB_0__::func_123(466, 32);
			__LIB_0__::func_123(467, 32);
			__LIB_0__::func_123(471, 32);
			__LIB_0__::func_123(464, 32);
		}
		else
		{
			__LIB_0__::func_121(450, 32);
			__LIB_0__::func_121(451, 32);
			__LIB_0__::func_121(452, 32);
			__LIB_0__::func_121(453, 32);
			__LIB_0__::func_121(466, 32);
			__LIB_0__::func_121(467, 32);
			__LIB_0__::func_121(471, 32);
			__LIB_0__::func_121(464, 32);
		}
		if (__LIB_0__::func_898(-666014935))
		{
			__LIB_1__::func_948(-1069042457, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(244699522, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-590254598, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1425307025, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(-1069042457, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(244699522, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-590254598, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1425307025, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(1074873669))
		{
			__LIB_0__::func_123(433, 32);
		}
		else
		{
			__LIB_0__::func_121(433, 32);
		}
		if (__LIB_0__::func_898(-1579419919))
		{
			__LIB_1__::func_948(551601484, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1842720100, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-983069384, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-768760124, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1974086289, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(551601484, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1842720100, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-983069384, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-768760124, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1974086289, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(478884033))
		{
			__LIB_0__::func_123(83, 32);
			__LIB_0__::func_123(84, 32);
			__LIB_0__::func_123(85, 32);
			__LIB_0__::func_123(86, 32);
			__LIB_0__::func_123(87, 32);
			__LIB_0__::func_123(79, 32);
		}
		else
		{
			__LIB_0__::func_121(83, 32);
			__LIB_0__::func_121(84, 32);
			__LIB_0__::func_121(85, 32);
			__LIB_0__::func_121(86, 32);
			__LIB_0__::func_121(87, 32);
			__LIB_0__::func_121(79, 32);
		}
		if (__LIB_0__::func_898(-191424539))
		{
			__LIB_1__::func_948(-1247339802, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(2046695029, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(834296435, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1124531468, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-902483455, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-566797819, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1469250492, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(678501753, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1079073283, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-860602360, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(-1247339802, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(2046695029, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(834296435, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1124531468, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-902483455, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-566797819, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1469250492, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(678501753, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1079073283, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-860602360, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(-397760715))
		{
			__LIB_1__::func_948(1098854605, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1013933832, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_861(19, 1);
		}
		else
		{
			__LIB_1__::func_948(1098854605, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1013933832, 0, 0, 0, 1, 0, 0, 0);
			if ((!__LIB_2__::func_765(9, 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RCM_CALLAWAY1")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RCM_CALLAWAY12")) <= 0)
			{
				vVar10 = -1;
				vVar10.f_1 = -1;
				vVar10.f_2 = -1;
				__LIB_1__::func_65(19, &vVar10, 1);
				__LIB_1__::func_806(&vVar10, 1, 1);
			}
		}
		if (__LIB_0__::func_898(2639906))
		{
			__LIB_1__::func_948(-1334037078, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-1641377529, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-74215266, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(-1334037078, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-1641377529, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-74215266, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(1660024373))
		{
			__LIB_0__::func_123(320, 32);
			__LIB_0__::func_123(317, 32);
			__LIB_0__::func_123(318, 32);
			__LIB_0__::func_123(319, 32);
			__LIB_0__::func_123(250, 32);
		}
		else
		{
			__LIB_0__::func_121(320, 32);
			__LIB_0__::func_121(317, 32);
			__LIB_0__::func_121(318, 32);
			__LIB_0__::func_121(319, 32);
			__LIB_0__::func_121(250, 32);
		}
		if (__LIB_0__::func_898(-1063147448))
		{
			__LIB_1__::func_948(-399528504, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(804086151, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-923901632, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(-438789356, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(-399528504, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(804086151, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-923901632, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(-438789356, 0, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_0__::func_898(-80522843))
		{
			__LIB_0__::func_123(354, 32);
			__LIB_0__::func_123(367, 32);
			__LIB_0__::func_123(368, 32);
			__LIB_0__::func_123(369, 32);
			__LIB_0__::func_123(370, 32);
			__LIB_0__::func_123(371, 32);
			__LIB_0__::func_123(886, 32);
		}
		else
		{
			__LIB_0__::func_121(354, 32);
			__LIB_0__::func_121(367, 32);
			__LIB_0__::func_121(368, 32);
			__LIB_0__::func_121(86, 32);
			__LIB_0__::func_121(370, 32);
			__LIB_0__::func_121(371, 32);
			__LIB_0__::func_121(886, 32);
		}
		if (__LIB_0__::func_898(-1523910291))
		{
			__LIB_1__::func_948(2094297354, 1, 0, 0, 0, 0, 0, 0);
			__LIB_1__::func_948(1892085175, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_948(2094297354, 0, 0, 0, 1, 0, 0, 0);
			__LIB_1__::func_948(1892085175, 0, 0, 0, 1, 0, 0, 0);
		}
	}
}

void func_355(int iParam0, int iParam1)
{
	if (*iParam0 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(iParam0, iParam1);
		*iParam0 = -1;
	}
}

int func_416(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (__LIB_0__::func_287(iParam0, 2, 1))
			{
				__LIB_0__::func_290(iParam0, 2, 1);
			}
			if (__LIB_0__::func_273(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						__LIB_0__::func_288(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_422(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						__LIB_0__::func_712(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!__LIB_0__::func_287(iParam0, 44, 0))
			{
				__LIB_0__::func_288(iParam0, 44, 0);
			}
			if (func_626(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				__LIB_0__::func_201(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			__LIB_0__::func_290(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			__LIB_0__::func_707(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				__LIB_1__::func_296(iParam0, 0, 0, 1);
			}
			__LIB_0__::func_290(iParam0, 33, 1);
			__LIB_0__::func_290(iParam0, 34, 1);
			__LIB_0__::func_290(iParam0, 29, 1);
			if (!__LIB_0__::func_86(vVar0) && bParam7)
			{
				__LIB_0__::func_201(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_0__::func_712(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_629(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (__LIB_1__::func_201(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_1__::func_288(iParam0, iParam13, 0);
						__LIB_1__::func_558(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (__LIB_0__::func_287(iParam0, 25, 0))
						{
							__LIB_0__::func_290(iParam0, 25, 0);
						}
						__LIB_0__::func_288(iParam0, 66, 0);
						__LIB_0__::func_201(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					__LIB_0__::func_201(iParam0, 5);
				}
				__LIB_0__::func_288(iParam0, 28, 1);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				__LIB_0__::func_201(iParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					__LIB_1__::func_30(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					__LIB_0__::func_202(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			__LIB_0__::func_201(iParam0, 7);
		case 7:
			__LIB_0__::func_707(iParam0, bParam9, bParam15, 0);
			__LIB_0__::func_289(iParam0, 4, bParam11);
			__LIB_0__::func_706(iParam0);
			if (bParam20)
			{
				if (__LIB_0__::func_203(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			__LIB_3__::func_921(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			__LIB_0__::func_201(iParam0, 0);
			__LIB_0__::func_204(iParam0, 16, 1);
			__LIB_0__::func_290(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_421(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = __LIB_0__::func_910(iParam0);
	iVar3 = __LIB_0__::func_911(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = __LIB_0__::func_23();
				__LIB_1__::func_446(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_644(iParam0, 1);
			if (__LIB_0__::func_344(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_646(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					__LIB_0__::func_345(1, iParam0);
				}
				else
				{
					__LIB_0__::func_346(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_422(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_699(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		__LIB_0__::func_288(iParam0, 56, 1);
		__LIB_1__::func_283(&(Global_1359489.f_40), 1);
	}
	__LIB_0__::func_904(iParam0, 0);
	__LIB_0__::func_289(iParam0, 4, 0);
	__LIB_0__::func_745(iParam0);
	__LIB_0__::func_706(iParam0);
	__LIB_0__::func_290(iParam0, 37, 1);
	bVar0 = __LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_651(iParam0, 0);
	bVar2 = PERSCHAR::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (__LIB_0__::func_287(iParam0, 64, 1))
	{
		__LIB_0__::func_290(iParam0, 64, 1);
	}
	if (bParam3)
	{
		__LIB_0__::func_290(iParam0, 33, 1);
		__LIB_0__::func_290(iParam0, 34, 1);
		__LIB_1__::func_27(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		__LIB_0__::func_707(iParam0, 1, 1, 0);
		if (bParam6)
		{
			__LIB_0__::func_288(iParam0, 30, 1);
		}
		if (bParam7)
		{
			__LIB_0__::func_288(iParam0, 35, 1);
			if (bParam8)
			{
				__LIB_0__::func_288(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			__LIB_0__::func_705(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		__LIB_0__::func_290(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		__LIB_0__::func_288(iParam0, 33, 1);
		__LIB_0__::func_707(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			__LIB_1__::func_283(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			__LIB_0__::func_37(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			__LIB_0__::func_288(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_654(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (__LIB_0__::func_287(iParam0, 45, 1))
	{
		__LIB_0__::func_290(iParam0, 45, 1);
	}
	__LIB_0__::func_176(iParam0, 16, 1);
	__LIB_0__::func_290(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
		{
			__LIB_1__::func_463(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_423()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_271(iVar0), 0))
		{
			if (__LIB_1__::func_307(iVar0, 1, 1))
			{
				PERSCHAR::_0xD4B614179BCD0654(func_651(iVar0, 0));
			}
		}
		iVar0++;
	}
}

void func_433(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		if (__LIB_0__::func_21(iParam0, 2))
		{
			func_680(iParam0, Global_36);
		}
		else if (__LIB_0__::func_21(iParam0, 1))
		{
			__LIB_17__::func_460(iParam0, 0);
		}
		else
		{
			func_682(iParam0, Global_36, bParam1);
		}
	}
}

Vector3 func_443(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	fVar2 = 9999999f;
	__LIB_1__::func_456(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (__LIB_0__::func_479() == 0 && !__LIB_0__::func_795(0))
		{
			bVar14 = true;
		}
	}
	if (!__LIB_0__::func_720(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = __LIB_1__::func_699();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!__LIB_1__::func_120(Global_1310720.f_21))
	{
		fParam10 = iParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { __LIB_0__::func_953(iVar0, iVar1) };
			bVar11 = __LIB_0__::func_954(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (func_696(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}
}

void func_479(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;
	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0[15 /*5*/][0] = __LIB_1__::func_976();
	Var0[15 /*5*/][1] = __LIB_1__::func_976();
	Var0[15 /*5*/][2] = 1079303588;
	Var0[15 /*5*/][3] = 1079303588;
	Var0[10 /*5*/][0] = -937893311;
	Var0[10 /*5*/][1] = -937893311;
	Var0[10 /*5*/][2] = -937893311;
	Var0[10 /*5*/][3] = joaat("ABI1_ARRIVE");
	Var0[11 /*5*/][0] = __LIB_1__::func_976();
	Var0[11 /*5*/][1] = __LIB_1__::func_976();
	Var0[11 /*5*/][2] = __LIB_1__::func_976();
	Var0[11 /*5*/][3] = __LIB_1__::func_976();
	Var0[12 /*5*/][0] = __LIB_1__::func_976();
	Var0[12 /*5*/][1] = __LIB_1__::func_976();
	Var0[12 /*5*/][2] = __LIB_1__::func_976();
	Var0[12 /*5*/][3] = __LIB_1__::func_976();
	Var0[13 /*5*/][0] = __LIB_1__::func_976();
	Var0[13 /*5*/][1] = __LIB_1__::func_976();
	Var0[13 /*5*/][2] = __LIB_1__::func_976();
	Var0[13 /*5*/][3] = __LIB_1__::func_976();
	Var0[9 /*5*/][0] = -1365193577;
	Var0[9 /*5*/][1] = -1166561064;
	Var0[9 /*5*/][2] = -1166561064;
	Var0[9 /*5*/][3] = -1166561064;
	Var0[8 /*5*/][0] = -1620486708;
	Var0[8 /*5*/][1] = -1620486708;
	Var0[8 /*5*/][2] = -1620486708;
	Var0[8 /*5*/][3] = 163126540;
	Var0[7 /*5*/][0] = 1808508475;
	Var0[7 /*5*/][1] = 1808508475;
	Var0[7 /*5*/][2] = 1808508475;
	Var0[7 /*5*/][3] = 2015311123;
	Var0[6 /*5*/][0] = -1576393943;
	Var0[6 /*5*/][1] = -1576393943;
	Var0[6 /*5*/][2] = -1576393943;
	Var0[6 /*5*/][3] = -1920340119;
	Var0[5 /*5*/][0] = -1563072795;
	Var0[5 /*5*/][1] = -1563072795;
	Var0[5 /*5*/][2] = 607574432;
	Var0[5 /*5*/][3] = 607574432;
	Var0[4 /*5*/][0] = -1987982797;
	Var0[4 /*5*/][1] = -1987982797;
	Var0[4 /*5*/][2] = -1987982797;
	Var0[4 /*5*/][3] = -1933895237;
	Var0[3 /*5*/][0] = -182995231;
	Var0[3 /*5*/][1] = -182995231;
	Var0[3 /*5*/][2] = 1267297807;
	Var0[3 /*5*/][3] = 1267297807;
	Var0[0 /*5*/][0] = __LIB_1__::func_976();
	Var0[0 /*5*/][1] = -1150137955;
	Var0[0 /*5*/][2] = -1150137955;
	Var0[0 /*5*/][3] = -1150137955;
	Var0[1 /*5*/][0] = __LIB_1__::func_976();
	Var0[1 /*5*/][1] = __LIB_1__::func_976();
	Var0[1 /*5*/][2] = __LIB_1__::func_976();
	Var0[1 /*5*/][3] = __LIB_1__::func_976();
	Var0[2 /*5*/][0] = __LIB_1__::func_976();
	Var0[2 /*5*/][1] = __LIB_1__::func_976();
	Var0[2 /*5*/][2] = __LIB_1__::func_976();
	Var0[2 /*5*/][3] = __LIB_1__::func_976();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != __LIB_1__::func_976())
			{
				if ((iVar86 + 1 == __LIB_5__::func_862(iVar87, 1) && iParam0 == 1) && bParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_721(Var0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(__LIB_5__::func_862(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 1) || bParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_721(Var0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_481(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;
	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0[15 /*5*/][0] = __LIB_1__::func_976();
	Var0[15 /*5*/][1] = __LIB_1__::func_976();
	Var0[15 /*5*/][2] = -1147256587;
	Var0[15 /*5*/][3] = -1147256587;
	Var0[10 /*5*/][0] = -1247551347;
	Var0[10 /*5*/][1] = -1247551347;
	Var0[10 /*5*/][2] = -1247551347;
	Var0[10 /*5*/][3] = -1010466481;
	Var0[11 /*5*/][0] = __LIB_1__::func_976();
	Var0[11 /*5*/][1] = __LIB_1__::func_976();
	Var0[11 /*5*/][2] = __LIB_1__::func_976();
	Var0[11 /*5*/][3] = __LIB_1__::func_976();
	Var0[12 /*5*/][0] = __LIB_1__::func_976();
	Var0[12 /*5*/][1] = __LIB_1__::func_976();
	Var0[12 /*5*/][2] = __LIB_1__::func_976();
	Var0[12 /*5*/][3] = __LIB_1__::func_976();
	Var0[13 /*5*/][0] = __LIB_1__::func_976();
	Var0[13 /*5*/][1] = __LIB_1__::func_976();
	Var0[13 /*5*/][2] = __LIB_1__::func_976();
	Var0[13 /*5*/][3] = __LIB_1__::func_976();
	Var0[9 /*5*/][0] = -160392273;
	Var0[9 /*5*/][1] = 1049842342;
	Var0[9 /*5*/][2] = 1049842342;
	Var0[9 /*5*/][3] = 1049842342;
	Var0[8 /*5*/][0] = 1674800958;
	Var0[8 /*5*/][1] = 1674800958;
	Var0[8 /*5*/][2] = 1674800958;
	Var0[8 /*5*/][3] = 2728487;
	Var0[7 /*5*/][0] = 1636281938;
	Var0[7 /*5*/][1] = 1636281938;
	Var0[7 /*5*/][2] = 1636281938;
	Var0[7 /*5*/][3] = 1084869405;
	Var0[6 /*5*/][0] = -1451784475;
	Var0[6 /*5*/][1] = -1451784475;
	Var0[6 /*5*/][2] = -1451784475;
	Var0[6 /*5*/][3] = 1128417383;
	Var0[5 /*5*/][0] = -2016771661;
	Var0[5 /*5*/][1] = -2016771661;
	Var0[5 /*5*/][2] = 202127432;
	Var0[5 /*5*/][3] = 202127432;
	Var0[4 /*5*/][0] = -546137515;
	Var0[4 /*5*/][1] = -546137515;
	Var0[4 /*5*/][2] = -546137515;
	Var0[4 /*5*/][3] = 1679038623;
	if (bParam3)
	{
		__LIB_6__::func_238(1);
	}
	else
	{
		__LIB_6__::func_238(0);
	}
	Var0[3 /*5*/][0] = 1742990618;
	Var0[3 /*5*/][1] = 1742990618;
	Var0[3 /*5*/][2] = -751959361;
	Var0[3 /*5*/][3] = -751959361;
	Var0[0 /*5*/][0] = __LIB_1__::func_976();
	Var0[0 /*5*/][1] = __LIB_1__::func_976();
	Var0[0 /*5*/][2] = -2000080725;
	Var0[0 /*5*/][3] = -2000080725;
	Var0[1 /*5*/][0] = 2123887232;
	Var0[1 /*5*/][1] = 2123887232;
	Var0[1 /*5*/][2] = 2123887232;
	Var0[1 /*5*/][3] = 2123887232;
	Var0[2 /*5*/][0] = 102652153;
	Var0[2 /*5*/][1] = 102652153;
	Var0[2 /*5*/][2] = 102652153;
	Var0[2 /*5*/][3] = 102652153;
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != __LIB_1__::func_976())
			{
				if ((iVar86 + 1 == __LIB_5__::func_862(iVar87, 1) && iParam0 == 2) && bParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_721(Var0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(__LIB_5__::func_862(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 2) || bParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_721(Var0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_483(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;
	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0[10 /*5*/][0] = 2036492390;
	Var0[10 /*5*/][1] = 2036492390;
	Var0[10 /*5*/][2] = 2036492390;
	Var0[10 /*5*/][3] = 1865439665;
	Var0[11 /*5*/][0] = __LIB_1__::func_976();
	Var0[11 /*5*/][1] = __LIB_1__::func_976();
	Var0[11 /*5*/][2] = __LIB_1__::func_976();
	Var0[11 /*5*/][3] = __LIB_1__::func_976();
	Var0[12 /*5*/][0] = __LIB_1__::func_976();
	Var0[12 /*5*/][1] = __LIB_1__::func_976();
	Var0[12 /*5*/][2] = __LIB_1__::func_976();
	Var0[12 /*5*/][3] = __LIB_1__::func_976();
	Var0[13 /*5*/][0] = __LIB_1__::func_976();
	Var0[13 /*5*/][1] = __LIB_1__::func_976();
	Var0[13 /*5*/][2] = __LIB_1__::func_976();
	Var0[13 /*5*/][3] = __LIB_1__::func_976();
	Var0[9 /*5*/][0] = __LIB_1__::func_976();
	Var0[9 /*5*/][1] = __LIB_1__::func_976();
	Var0[9 /*5*/][2] = __LIB_1__::func_976();
	Var0[9 /*5*/][3] = __LIB_1__::func_976();
	Var0[8 /*5*/][0] = __LIB_1__::func_976();
	Var0[8 /*5*/][1] = __LIB_1__::func_976();
	Var0[8 /*5*/][2] = __LIB_1__::func_976();
	Var0[8 /*5*/][3] = __LIB_1__::func_976();
	Var0[7 /*5*/][0] = -621187540;
	Var0[7 /*5*/][1] = -621187540;
	Var0[7 /*5*/][2] = -621187540;
	Var0[7 /*5*/][3] = 1079213989;
	Var0[6 /*5*/][0] = -882188392;
	Var0[6 /*5*/][1] = -882188392;
	Var0[6 /*5*/][2] = -882188392;
	Var0[6 /*5*/][3] = 964593693;
	Var0[5 /*5*/][0] = __LIB_1__::func_976();
	Var0[5 /*5*/][1] = __LIB_1__::func_976();
	Var0[5 /*5*/][2] = __LIB_1__::func_976();
	Var0[5 /*5*/][3] = __LIB_1__::func_976();
	Var0[4 /*5*/][0] = -997495998;
	Var0[4 /*5*/][1] = -997495998;
	Var0[4 /*5*/][2] = -997495998;
	Var0[4 /*5*/][3] = -2147051362;
	Var0[3 /*5*/][0] = -1115840558;
	Var0[3 /*5*/][1] = -1115840558;
	Var0[3 /*5*/][2] = 1674493966;
	Var0[3 /*5*/][3] = 1674493966;
	Var0[0 /*5*/][0] = __LIB_1__::func_976();
	Var0[0 /*5*/][1] = -1618574684;
	Var0[0 /*5*/][2] = -1618574684;
	Var0[0 /*5*/][3] = -1618574684;
	Var0[1 /*5*/][0] = __LIB_1__::func_976();
	Var0[1 /*5*/][1] = __LIB_1__::func_976();
	Var0[1 /*5*/][2] = __LIB_1__::func_976();
	Var0[1 /*5*/][3] = __LIB_1__::func_976();
	Var0[2 /*5*/][0] = __LIB_1__::func_976();
	Var0[2 /*5*/][1] = __LIB_1__::func_976();
	Var0[2 /*5*/][2] = __LIB_1__::func_976();
	Var0[2 /*5*/][3] = __LIB_1__::func_976();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != __LIB_1__::func_976())
			{
				if ((iVar86 + 1 == __LIB_5__::func_862(iVar87, 1) && iParam0 == 3) && bParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_721(Var0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(__LIB_5__::func_862(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 3) || bParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_721(Var0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

int func_507(int iParam0)
{
	switch (iParam0)
	{
		case joaat("RT_NONE"):
			return 0;
		case joaat("RT_TOWN"):
			return 1;
		case joaat("RT_SETTLEMENT"):
			return 2;
		case joaat("RT_HIDEOUT"):
			return 3;
		case joaat("RT_CAMP"):
			return 4;
		case joaat("RT_LANDMARK"):
			return 5;
		case 1039465541:
			return 6;
		case joaat("RT_HOMESTEAD"):
			return 7;
		case joaat("RT_EVENT_AREA"):
			return 8;
		case joaat("RT_SHACK"):
			return 9;
		default:
			break;
	}
	return 0;
}

bool func_626(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("DEF_COMP_BRAIN"));
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				return false;
			}
			if (Global_1359489.f_9 != -1)
			{
				return false;
			}
			Global_1359489.f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_793(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (__LIB_0__::func_702(Global_1360165[iParam0 /*1157*/].f_4.f_2) || __LIB_1__::func_44(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_793(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && __LIB_0__::func_228(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!__LIB_0__::func_959(iParam0, 0))
					{
						__LIB_0__::func_288(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { __LIB_0__::func_229(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
			if (!bParam6)
			{
				__LIB_0__::func_290(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!__LIB_0__::func_272(__LIB_0__::func_271(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
				{
					return false;
				}
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_629(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_629(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_629(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_644(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	func_820(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
}

void func_646(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_644(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			__LIB_0__::func_345(2, *uParam0);
		}
		else
		{
			__LIB_0__::func_346(2, *uParam0);
		}
	}
	__LIB_0__::func_415(uParam0);
}

int func_651(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_0x800DF3FC913355F3(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_823(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

void func_654(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_699(iParam0))
	{
		if (!__LIB_1__::func_22(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (__LIB_0__::func_287(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_651(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	iVar1 = __LIB_0__::func_271(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && __LIB_0__::func_210(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		__LIB_0__::func_288(iParam0, 2, 1);
	}
	else
	{
		func_827(iParam0);
		__LIB_0__::func_288(iParam0, 1, 1);
	}
}

void func_680(int iParam0, vector3 vParam1)
{
	if (__LIB_17__::func_420(iParam0))
	{
		Global_1888801[iParam0 /*35*/].f_1 = MISC::GET_GAME_TIMER();
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iParam0 /*35*/].f_9, false) || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1888801[iParam0 /*35*/].f_26)))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
		{
			if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[iParam0 /*35*/].f_3, vParam1))
			{
				Global_1888801[iParam0 /*35*/].f_1 = MISC::GET_GAME_TIMER();
				__LIB_17__::func_421(iParam0);
				return;
			}
		}
		if (Global_1888801[iParam0 /*35*/].f_1 + 2500 > MISC::GET_GAME_TIMER())
		{
			return;
		}
	}
	if (Global_1888801[iParam0 /*35*/].f_9 != 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iParam0 /*35*/].f_9, false))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iParam0 /*35*/].f_9, 523);
				Global_1888801[iParam0 /*35*/].f_9 = 0;
			}
			else if (!SCRIPTS::_0x30BED53646C86D11(Global_1888801[iParam0 /*35*/].f_9))
			{
				SCRIPTS::_0x7DE4643157AD646C(Global_1888801[iParam0 /*35*/].f_9);
			}
		}
		if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1888801[iParam0 /*35*/].f_9))
		{
			Global_1888801[iParam0 /*35*/].f_9 = 0;
		}
		else
		{
			return;
		}
	}
	__LIB_0__::func_25(iParam0, 8);
	switch (Global_1888801[iParam0 /*35*/].f_20)
	{
		case 1:
		case 2:
			if (__LIB_0__::func_2() == -1)
			{
				if (Global_1327479.f_6 != iParam0)
				{
					__LIB_0__::func_3(-30, 0, 1);
					Global_1327479.f_6 = iParam0;
				}
			}
			break;
		case 3:
			break;
		case 7:
			break;
		case 4:
			break;
	}
	__LIB_0__::func_25(iParam0, 11);
	if (Global_23118[iParam0 /*11*/].f_10 < 10)
	{
		Global_23118[iParam0 /*11*/].f_10 = 0;
	}
	__LIB_19__::func_420(__LIB_5__::func_235(iParam0, 1, 1));
	if (iParam0 == Global_1894899.f_2)
	{
		__LIB_17__::func_421(-1);
		__LIB_1__::func_939();
	}
}

void func_682(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1572887.f_12 == -1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(iVar0))
		{
			return;
		}
		if (__LIB_0__::func_1(Global_1935630, 4096))
		{
			if (!__LIB_19__::func_34())
			{
				return;
			}
		}
	}
	if (!__LIB_17__::func_420(iParam0))
	{
		if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[iParam0 /*35*/].f_3, vParam1))
		{
			if (Global_1894899.f_2 == iParam0)
			{
				__LIB_17__::func_421(-1);
			}
			return;
		}
		if (__LIB_0__::func_20(Global_1894899.f_2))
		{
			if (SCRIPTS::_DOES_THREAD_EXIST(Global_1888801[Global_1894899.f_2 /*35*/].f_9))
			{
				if (bParam4)
				{
					__LIB_0__::func_24(Global_1894899.f_2, 2);
				}
				return;
			}
		}
	}
	MemCopy(&(Global_1888801[iParam0 /*35*/].f_26), {__LIB_19__::func_35(iParam0)}, 4);
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1888801[iParam0 /*35*/].f_26)) != 0)
	{
		SCRIPTS::REQUEST_SCRIPT(&(Global_1888801[iParam0 /*35*/].f_26));
	}
	else
	{
		__LIB_0__::func_24(iParam0, 2);
	}
	__LIB_0__::func_24(iParam0, 1);
	if (Global_1888801[iParam0 /*35*/].f_20 != 8)
	{
		__LIB_2__::func_758(iParam0, 0);
	}
	PLAYER::_0xFA7DAAE3959E6C7B(iVar0, __LIB_3__::func_256());
	if ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !CAM::IS_SCREEN_FADED_OUT())
	{
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_PLAYER_ARRIVAL"), Global_35, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	}
	__LIB_17__::func_421(iParam0);
	func_858(iParam0);
	__LIB_18__::func_951(__LIB_5__::func_235(iParam0, 1, 1), -1);
}

bool func_696(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	if (bParam5)
	{
		if (__LIB_0__::func_562(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || __LIB_1__::func_128(5))
	{
		if (__LIB_0__::func_978(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = __LIB_0__::func_979(vParam0);
	if (bParam6)
	{
		iVar1 = __LIB_1__::func_447(vParam0, 1);
		if (__LIB_0__::func_730(iVar1) || __LIB_0__::func_980(iVar0, 1))
		{
			return false;
		}
	}
	if (!__LIB_17__::func_456(iParam3, iParam4))
	{
		return false;
	}
	if (!__LIB_1__::func_689())
	{
		if (__LIB_0__::func_981(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam8))
	{
		if (!__LIB_1__::func_129(iVar0))
		{
			return false;
		}
		if (Global_1310720.f_23 >= 3)
		{
			if (Global_1310720.f_21 != -1)
			{
				if (Global_1310720.f_21 == __LIB_1__::func_447(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!__LIB_1__::func_460(iParam3, iParam4))
	{
		return false;
	}
	if (__LIB_0__::func_982(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!__LIB_0__::func_563(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (__LIB_0__::func_28())
	{
		if (VOLUME::_DOES_VOLUME_EXIST(bParam8))
		{
			if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(bParam8, vParam0))
			{
				return false;
			}
		}
		if (__LIB_1__::func_644(vParam0, iParam10) || __LIB_1__::func_624(vParam0, iParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

void func_721(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case -2000080725:
			if (bParam1)
			{
				*iParam2 = GRAPHICS::_0xFA50F79257745E74(701.0167f, -1247.185f, 43.9899f, 3f, 2, -1, 0);
			}
			else
			{
				GRAPHICS::_0x9CF1836C03FB67A2(iParam2, 0);
			}
			break;
	}
	switch (iParam0)
	{
		case -1563072795:
		case 607574432:
		case 825179479:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-125.9479f, -39.4579f, 94.6035f, 4f);
			break;
		case -2016771661:
		case 202127432:
		case 2072112547:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(653.7093f, -1244.043f, 42.6971f, 4f);
			break;
		case -782359587:
		case 2728487:
		case 1674800958:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(660.9469f, -1255.986f, 42.7088f, 4f);
			break;
		case -1642249622:
		case 1084869405:
		case 1636281938:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(674.1929f, -1266.091f, 42.984f, 4f);
			break;
		case -1451784475:
		case 1028224932:
		case 1128417383:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(673.2328f, -1239.627f, 43.1471f, 4f);
			break;
		case -1123811713:
		case -546137515:
		case 1679038623:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(658.2036f, -1233.099f, 43.2507f, 4f);
			break;
		case -1279618207:
		case -751959361:
		case 1742990618:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(678.267f, -1251.873f, 43.0153f, 4f);
			break;
		case -1620486708:
		case -223906810:
		case 163126540:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-118.3392f, -35.8852f, 94.7422f, 4f);
			break;
		case -379409079:
		case 1808508475:
		case 2015311123:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-111.4885f, -39.7478f, 94.8525f, 4f);
			break;
		case -1920340119:
		case -1576393943:
		case -413795019:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-123.9274f, -22.8559f, 95.0845f, 4f);
			break;
		case -1987982797:
		case -1933895237:
		case -104137172:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-147.6751f, -24.5264f, 95.2101f, 4f);
			break;
		case -1426249148:
		case -182995231:
		case 1267297807:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-142.3644f, -21.2133f, 95.0883f, 4f);
			break;
		case -638481378:
		case -621187540:
		case 1079213989:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1880.102f, -1880.512f, 41.9323f, 4f);
			break;
		case -882188392:
		case 773757120:
		case 964593693:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1870.625f, -1872.112f, 41.8191f, 4f);
			break;
		case -2147051362:
		case -997495998:
		case 266022415:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1887.52f, -1880.757f, 41.9442f, 4f);
			break;
		case -1910456812:
		case -1115840558:
		case 1674493966:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1877.485f, -1861f, 41.8078f, 4f);
			break;
	}
}

int func_793(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (__LIB_0__::func_252(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (__LIB_0__::func_273(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (__LIB_1__::func_25(Global_1347702[134 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (__LIB_1__::func_25(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_920(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = iVar1[iVar11];
	}
	if (!__LIB_1__::func_201(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

int func_820(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_947(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_823(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_948(iParam0);
		if (iVar0 != 0)
		{
			Global_1360165[iParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_1);
		}
		else
		{
			Global_1360165[iParam0 /*1157*/].f_1 = 0;
		}
	}
}

void func_827(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_0__::func_271(iParam0);
	iVar1 = func_651(iParam0, 0);
	__LIB_0__::func_294(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

void func_858(int iParam0)
{
	if (func_977(iParam0))
	{
		if (!__LIB_19__::func_36(iParam0) && !__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			if (!__LIB_0__::func_474(285))
			{
				__LIB_10__::func_905(285, 0);
			}
			__LIB_19__::func_37(iParam0, 1);
		}
		if (Global_1934266.f_69 != 0.75f && !__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			Global_1934266.f_69 = 0.75f;
			LAW::_0xFEC85339AACA2A35(PLAYER::PLAYER_ID(), Global_1934266.f_69);
		}
	}
	else if (Global_1934266.f_69 != 1f)
	{
		Global_1934266.f_69 = 1f;
		LAW::_0xFEC85339AACA2A35(PLAYER::PLAYER_ID(), Global_1934266.f_69);
	}
}

bool func_920(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		return func_1015(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_947(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
		case -2104294676:
			return 83;
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
		case -2033572567:
			return 92;
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
		case -1885734028:
			return 110;
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
		case -1818590041:
			return 246;
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
		case joaat("CSTAG_BCH_BASE"):
			return 10;
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
		case -1584659518:
			return 210;
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
		case -1565979762:
			return 507;
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
		case -1426009748:
			return 119;
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
		case -1235200494:
			return 165;
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
		case joaat("CSTAG_PRG_BASE"):
			return 9;
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
		case -1171086122:
			return 41;
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
		case -1152282847:
			return 33;
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
		case -1061998329:
			return 164;
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
		case -1045864225:
			return 510;
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
		case -978287173:
			return 12;
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
		case joaat("CSTAG_COL_BASE"):
			return 2;
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
		case -830432609:
			return 492;
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
		case -818926670:
			return 200;
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
		case joaat("CSTAG_HSO_BASE"):
			return 3;
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
		case -803062666:
			return 65;
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
		case -671103079:
			return 504;
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
		case -650501093:
			return 509;
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
		case -636774257:
			return 146;
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
		case -604891653:
			return 237;
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return 424;
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
		case -534913305:
			return 174;
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
		case -453449739:
			return 182;
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
		case -399703928:
			return 155;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
		case -381477663:
			return 37;
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
		case -317452243:
			return 128;
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
		case -98209688:
			return 55;
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
		case -58291054:
			return 201;
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
		case -21372580:
			return 46;
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
		case -8269375:
			return 137;
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
		case joaat("CSTAG_FLOW_TRN4_PRE"):
			return 321;
		case joaat("CSTAG_MOOD_BILL_BEAVER"):
			return 81;
		case joaat("CSTAG_MOOD_DUTCH_DRUNK"):
			return 51;
		case joaat("CSTAG_MOOD_DUTCH_BEAVER"):
			return 54;
		case joaat("CSTAG_MOOD_MOLLY_UPBEAT"):
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case joaat("CSTAG_FLOW_FUD1_POST"):
			return 408;
		case joaat("CSTAG_FLOW_RDST61_POST"):
			return 458;
		case joaat("CSTAG_VIG_RDOWN1_WNT"):
			return 358;
		case joaat("CSTAG_FLOW_MR53_POST"):
			return 476;
		case 121466883:
			return 498;
		case joaat("CSTAG_FLOW_BE22_POST"):
			return 477;
		case joaat("CSTAG_FLOW_MAR7_POST"):
			return 480;
		case joaat("CSTAG_FLOW_NTV3_POST"):
			return 455;
		case 132239274:
			return 494;
		case joaat("CSTAG_MOOD_MOLLY_DEFAULT"):
			return 184;
		case 137433874:
			return 227;
		case joaat("CSTAG_MOOD_JOHN_DRUNK"):
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"):
			return 279;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_POST"):
			return 282;
		case joaat("CSTAG_FLOW_RMOB01_POST"):
			return 433;
		case joaat("CSTAG_SUPPLY_LOW"):
			return 35;
		case 207369059:
			return 64;
		case joaat("CSTAG_FLOW_MOB2_PRE"):
			return 304;
		case joaat("CSTAG_MOOD_TILLY_DRUNK"):
			return 241;
		case joaat("CSTAG_MOOD_LENNY_COLTER"):
			return 134;
		case 228261307:
			return 74;
		case joaat("CSTAG_FLOW_MUD4_PRE"):
			return 270;
		case joaat("CSTAG_FLOW_UTP1_POST"):
			return 399;
		case joaat("CSTAG_FLOW_RXCF1_POST"):
			return 419;
		case joaat("CSTAG_VIG_SDB_ONLY"):
			return 364;
		case joaat("CSTAG_MOOD_TRELAWNY_DRUNK"):
			return 250;
		case joaat("CSTAG_MOOD_MICAH_DOWN"):
			return 103;
		case joaat("CSTAG_MOOD_UNCLE_BEAVER"):
			return 90;
		case joaat("CSTAG_MOOD_TILLY_ANNOYED"):
			return 240;
		case joaat("CSTAG_MOOD_PEARSON_DEFAULT"):
			return 193;
		case 319124397:
			return 506;
		case joaat("CSTAG_MOOD_UNCLE_DEFAULT"):
			return 84;
		case 388356689:
			return 101;
		case joaat("CSTAG_CAMP_MONEY_LOW"):
			return 335;
		case joaat("CSTAG_MOOD_JAVIER_COLTER"):
			return 71;
		case joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"):
			return 291;
		case 404260466:
			return 73;
		case joaat("CSTAG_MOOD_BILL_COLTER"):
			return 80;
		case joaat("CSTAG_MOOD_LENNY_DRUNK"):
			return 132;
		case joaat("CSTAG_FLOW_RGNG01_POST"):
			return 446;
		case joaat("CSTAG_CAMP_FOOD_HIGH"):
			return 332;
		case joaat("CSTAG_FLOW_RNATV2_POST"):
			return 436;
		case joaat("CSTAG_MOOD_KAREN_DEFAULT"):
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case joaat("CSTAG_VIG_PRIORITY_NINE"):
			return 370;
		case joaat("CSTAG_MOOD_ABIGAIL_BEAVER"):
			return 163;
		case joaat("CSTAG_GRIEFING_MAYHEM"):
			return 40;
		case joaat("CSTAG_FLOW_MAR1_POST"):
			return 471;
		case joaat("CSTAG_FLOW_NTS3_POST"):
			return 452;
		case joaat("CSTAG_MOOD_ABIGAIL_DRUNK"):
			return 160;
		case 531203229:
			return 245;
		case joaat("CSTAG_MOOD_STRAUSS_DOWN"):
			return 203;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DEBT_COLLECTED"):
			return 346;
		case joaat("CSTAG_FLOW_SAD4_POST"):
			return 488;
		case joaat("CSTAG_PLAYER_KILLING_INNOCENT"):
			return 349;
		case joaat("CSTAG_VIG_RHMRO_WNT"):
			return 360;
		case joaat("CSTAG_FLOW_SEN1_POST"):
			return 398;
		case joaat("CSTAG_MOOD_BILL_DRUNK"):
			return 78;
		case joaat("CSTAG_FLOW_TRE1_POST"):
			return 420;
		case joaat("CSTAG_FLOW_RDST2_POST"):
			return 389;
		case joaat("CSTAG_MOOD_MARYBETH_DRUNK"):
			return 178;
		case joaat("CSTAG_FLOW_CA_BR01_POST"):
			return 315;
		case joaat("CSTAG_FLOW_JOHN_RECOVER"):
			return 268;
		case joaat("CSTAG_MOOD_JAVIER_DEFAULT"):
			return 66;
		case joaat("CSTAG_FLOW_RODDF1_POST"):
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case joaat("CSTAG_BVH_BASE"):
			return 8;
		case joaat("CSTAG_MOOD_SUSAN_DEFAULT"):
			return 211;
		case joaat("CSTAG_MOOD_SEAN_BEAVER"):
			return 126;
		case joaat("CSTAG_MOOD_SUSAN_BEAVER"):
			return 217;
		case joaat("CSTAG_FLOW_TRN4_POST"):
			return 467;
		case joaat("CSTAG_MOOD_MARYBETH_ANNOYED"):
			return 177;
		case joaat("CSTAG_FLOW_CA_HR01_POST"):
			return 328;
		case joaat("CSTAG_VIG_BVH_BASE"):
			return 365;
		case joaat("CSTAG_FLOW_RBNP10_POST"):
			return 414;
		case joaat("CSTAG_MOOD_CHARLES_UPBEAT"):
			return 115;
		case joaat("CSTAG_MOOD_SADIE_COLTER"):
			return 153;
		case joaat("CSTAG_MOOD_ABIGAIL_DEFAULT"):
			return 157;
		case joaat("CSTAG_MOOD_DUTCH_ANNOYED"):
			return 50;
		case joaat("CSTAG_FLOW_MAR8_POST"):
			return 481;
		case joaat("CSTAG_VIG_NTV2_HONOR_HIGH"):
			return 367;
		case 761196368:
			return 218;
		case joaat("CSTAG_FLOW_FIRST_VISIT_BRT2_POST"):
			return 296;
		case joaat("CSTAG_ARRANGEMENT_SDB_TEARDOWN"):
			return 28;
		case joaat("CSTAG_LOITERING"):
			return 336;
		case joaat("CSTAG_MOOD_STRAUSS_DEFAULT"):
			return 202;
		case joaat("CSTAG_ARRANGEMENT_COL_SETUP"):
			return 14;
		case 812866778:
			return 355;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RXCF1_POST"):
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case joaat("CSTAG_MOOD_DUTCH_DOWN"):
			return 49;
		case 856952521:
			return 42;
		case joaat("CSTAG_CLM_BASE"):
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case joaat("CSTAG_FLOW_GRY3_POST"):
			return 412;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDOWN3_POST"):
			return 272;
		case joaat("CSTAG_FLOW_DST3_POST"):
			return 407;
		case joaat("CSTAG_MOOD_SUSAN_DOWN"):
			return 212;
		case joaat("CSTAG_MOOD_ABIGAIL_ANNOYED"):
			return 159;
		case joaat("CSTAG_MOOD_JAVIER_UPBEAT"):
			return 70;
		case joaat("CSTAG_CAMP_FOOD_LOW"):
			return 333;
		case joaat("CSTAG_GRIEFING_KNOCKOUT_POST"):
			return 38;
		case 1019519723:
			return 256;
		case joaat("CSTAG_MOOD_JACK_COLTER"):
			return 171;
		case joaat("CSTAG_FLOW_RDCH3_POST"):
			return 456;
		case joaat("CSTAG_VIG_HSO_BASE"):
			return 356;
		case joaat("CSTAG_MOOD_PEARSON_COLTER"):
			return 198;
		case joaat("CSTAG_FLOW_BRT3_PRE"):
			return 299;
		case joaat("CSTAG_FLOW_RCHRB_POST"):
			return 417;
		case joaat("CSTAG_MOOD_MOLLY_COLTER"):
			return 189;
		case joaat("CSTAG_FLOW_SEN1_PRE"):
			return 265;
		case joaat("CSTAG_MOOD_CHARLES_COLTER"):
			return 116;
		case joaat("CSTAG_FLOW_ODR4_PRE"):
			return 305;
		case joaat("CSTAG_FLOW_MUD3_PRE"):
			return 264;
		case joaat("CSTAG_FLOW_RSAD1_POST"):
			return 402;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RABI1_POST"):
			return 271;
		case joaat("CSTAG_FLOW_RSAD1_PRE"):
			return 286;
		case joaat("CSTAG_FLOW_HNT1_POST"):
			return 378;
		case joaat("CSTAG_FLOW_RMARY1_POST"):
			return 392;
		case joaat("CSTAG_VIG_BVH_ONLY"):
			return 366;
		case joaat("CSTAG_FLOW_NTS2_POST"):
			return 451;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDTC1_POST"):
			return 292;
		case joaat("CSTAG_VIG_SDB_BASE"):
			return 363;
		case joaat("CSTAG_MOOD_KAREN_UPBEAT"):
			return 224;
		case joaat("CSTAG_MOOD_UNCLE_DRUNK"):
			return 87;
		case joaat("CSTAG_FLOW_GRY1_POST"):
			return 410;
		case joaat("CSTAG_MOOD_SUSAN_DRUNK"):
			return 214;
		case joaat("CSTAG_MOOD_JACK_DEFAULT"):
			return 166;
		case joaat("CSTAG_FLOW_RSTR33_POST"):
			return 463;
		case joaat("CSTAG_FLOW_MRY3_POST"):
			return 428;
		case joaat("CSTAG_FLOW_NTS1_POST"):
			return 450;
		case joaat("CSTAG_LAK_BASE"):
			return 7;
		case 1267957796:
			return 32;
		case joaat("CSTAG_MOOD_SUSAN_UPBEAT"):
			return 215;
		case joaat("CSTAG_MOOD_MICAH_COLTER"):
			return 107;
		case joaat("CSTAG_MOOD_LENNY_DOWN"):
			return 130;
		case joaat("CSTAG_MOOD_ARTHUR_BEAVER"):
			return 45;
		case 1305416676:
			return 495;
		case joaat("CSTAG_MOOD_SEAN_ANNOYED"):
			return 122;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RPRSN_POST"):
			return 258;
		case joaat("CSTAG_MOOD_MICAH_DEFAULT"):
			return 102;
		case joaat("CSTAG_MOOD_TRELAWNY_DOWN"):
			return 248;
		case joaat("CSTAG_MOOD_SADIE_UPBEAT"):
			return 152;
		case joaat("CSTAG_FLOW_CA_HT06_POST"):
			return 314;
		case joaat("CSTAG_MOOD_JACK_ANNOYED"):
			return 168;
		case joaat("CSTAG_GUA_BASE"):
			return 6;
		case joaat("CSTAG_FLOW_RDTC2_ACTIVE"):
			return 300;
		case joaat("CSTAG_FLOW_MUD1_POST_EVENING"):
			return 267;
		case joaat("CSTAG_VIG_CAMP_ENTER"):
			return 368;
		case joaat("CSTAG_FLOW_GOONS_ARRIVE_POST"):
			return 322;
		case joaat("CSTAG_MOOD_UNCLE_DOWN"):
			return 85;
		case 1366067161:
			return 91;
		case joaat("CSTAG_MOOD_PEARSON_ANNOYED"):
			return 195;
		case joaat("CSTAG_MOOD_DUTCH_COLTER"):
			return 53;
		case joaat("CSTAG_MOOD_MARYBETH_BEAVER"):
			return 181;
		case joaat("CSTAG_FLOW_RDTC2_POST"):
			return 432;
		case joaat("CSTAG_FLOW_MAR6_POST"):
			return 479;
		case joaat("CSTAG_MOOD_SWANSON_DOWN"):
			return 230;
		case joaat("CSTAG_FLOW_FIRST_VISIT_ODR4_POST"):
			return 306;
		case joaat("CSTAG_MOOD_CHARLES_DEFAULT"):
			return 111;
		case 1441230304:
			return 502;
		case joaat("CSTAG_SP_TRELAWNY_FAMILY"):
			return 352;
		case joaat("CSTAG_MOOD_HOSEA_BEAVER"):
			return 99;
		case joaat("CSTAG_FLOW_IND1_POST"):
			return 421;
			return 397;
			return 69;
			return 394;
			return 434;
			return 48;
			return 79;
			return 301;
			return 216;
			return 63;
			return 75;
			return 144;
			return 462;
			return 339;
			return 44;
			return 503;
			return 478;
			return 20;
			return 278;
			return 281;
			return 109;
			return 334;
			return 209;
			return 263;
			return 207;
			return 167;
			return 161;
			return 262;
			return 183;
			return 162;
			return 72;
			return 468;
			return 231;
			return 340;
			return 384;
			return 143;
			return 31;
			return 117;
			return 100;
			return 379;
			return 390;
			return 276;
			return 449;
			return 307;
			return 274;
			return 191;
			return 447;
			return 508;
			return 235;
			return 388;
			return 430;
			return 176;
			return 448;
			return 475;
			return 459;
			return 62;
			return 226;
			return 491;
			return 453;
			return 500;
			return 154;
			return 123;
			return 221;
			return 36;
			return 381;
			return 82;
			return 319;
			return 121;
			return 497;
			return 348;
			return 347;
			return 213;
			return 5;
			return 15;
			return 386;
			return 416;
			return 465;
			if (iParam1 >= 1)
			{
			}
			return -1;
			if (iParam1 >= 1)
			{
			}
			return -1;
		}
int func_948(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("PERSCHAR_COMP_JOHN");
		case 0:
			return joaat("PERSCHAR_COMP_DUTCH");
		case 6:
			return joaat("PERSCHAR_COMP_MICAH");
		case 3:
			return joaat("PERSCHAR_COMP_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_CHARLES");
		case 4:
			return joaat("PERSCHAR_COMP_UNCLE");
		case 2:
			return joaat("PERSCHAR_COMP_JAVIER");
		case 5:
			return joaat("PERSCHAR_COMP_HOSEA");
		case 8:
			return joaat("PERSCHAR_COMP_SEAN");
		case 9:
			return joaat("PERSCHAR_COMP_LENNY");
		case 13:
			return joaat("PERSCHAR_COMP_ABIGAIL");
		case 14:
			return joaat("PERSCHAR_COMP_JACK");
		case 15:
			return joaat("PERSCHAR_COMP_MARYBETH");
		case 16:
			return joaat("PERSCHAR_COMP_MOLLY");
		case 17:
			return joaat("PERSCHAR_COMP_PEARSON");
		case 18:
			return joaat("PERSCHAR_COMP_STRAUSS");
		case 19:
			return joaat("PERSCHAR_COMP_GRIMSHAW");
		case 20:
			return joaat("PERSCHAR_COMP_KAREN");
		case 21:
			return joaat("PERSCHAR_COMP_SWANSON");
		case 22:
			return joaat("PERSCHAR_COMP_TILLY");
		case 23:
			return joaat("PERSCHAR_COMP_TRELAWNY");
		case 10:
			return joaat("PERSCHAR_COMP_KIERAN");
		case 24:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_1");
		case 25:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_2");
		case 26:
			return joaat("PERSCHAR_COMP_EAGLEFLIES");
		case 11:
			return joaat("PERSCHAR_COMP_SADIE");
		case 12:
			return joaat("PERSCHAR_COMP_DOG");
	}
	return 0;
}

bool func_977(int iParam0)
{
	struct<5> Var0;
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_4 = -15;
	__LIB_17__::func_423(iParam0, &Var0);
	return func_1035(&Var0);
}

bool func_1015(int iParam0)
{
	int iVar0;
	int iVar1;
	func_820(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

int func_1035(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	if (uParam0->f_4 == -15)
	{
		return 0;
	}
	if (*uParam0 != Global_40.f_7729)
	{
		bVar0 = true;
	}
	if (__LIB_12__::func_558(1, &iVar3))
	{
		if (uParam0->f_1 == iVar3)
		{
			bVar4 = true;
		}
	}
	else if (uParam0->f_1 == 0)
	{
		bVar4 = true;
	}
	if (__LIB_12__::func_558(1, &iVar3))
	{
		if (uParam0->f_2 == iVar3)
		{
			bVar5 = true;
		}
	}
	else if (uParam0->f_2 == 0)
	{
		bVar5 = true;
	}
	if (__LIB_12__::func_558(1, &iVar3))
	{
		if (uParam0->f_3 == iVar3)
		{
			bVar6 = true;
		}
	}
	else if (uParam0->f_3 == 0)
	{
		bVar6 = true;
	}
	if ((!bVar4 && !bVar5) && !bVar6)
	{
		bVar1 = true;
	}
	if (__LIB_0__::func_1(uParam0->f_5, 1) != func_1065(&uVar7))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (bVar0)
		{
			return 1;
		}
	}
	if (bVar0 && bVar1)
	{
		return 1;
	}
	return 0;
}

int func_1065(var uParam0)
{
	if (-1829635046 == __LIB_1__::func_548(81053684))
	{
		if (__LIB_3__::func_268(uParam0))
		{
			return 1;
		}
	}
	else if (__LIB_1__::func_182(-525676072, uParam0))
	{
		if (__LIB_3__::func_268(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

