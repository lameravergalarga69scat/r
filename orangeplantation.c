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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = -1;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = -1;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = -1;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = false;
	bool bLocal_82 = false;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_83 = 20000;
	iLocal_86 = vScriptParam_0.x;
	iLocal_84 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_85 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_85)
		{
			iLocal_85 = 0;
			__LIB_1__::func_947(iLocal_86, &iLocal_84);
			switch (iLocal_84)
			{
				case 0:
					iLocal_84 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_86);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_86)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_86), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_86));
					iVar1 = __LIB_1__::func_885(iLocal_86);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_87 = (MISC::GET_GAME_TIMER() + iLocal_83);
					iLocal_84 = 2;
					break;
				case 2:
					if (func_11() || iLocal_87 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_86);
						iLocal_87 = (MISC::GET_GAME_TIMER() + iLocal_83);
						iLocal_84 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_86) || iLocal_87 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_86);
						iLocal_87 = (MISC::GET_GAME_TIMER() + iLocal_83);
						iLocal_84 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_86) || iLocal_87 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_86);
						iLocal_87 = (iLocal_83 + MISC::GET_GAME_TIMER());
						iLocal_84 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_86)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_86), 4) && !iLocal_87 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_86) || iLocal_87 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_86, 4);
								iLocal_87 = (iLocal_83 + MISC::GET_GAME_TIMER());
								iLocal_84 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_87 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_86);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_765(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_86);
								__LIB_1__::func_886(iLocal_86);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_84 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_86);
							__LIB_0__::func_18();
							iLocal_84 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_5__::func_252(iLocal_86, &Global_1898004);
							iLocal_84 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_86);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_86, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_84 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_86))
							{
								iLocal_85 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_86);
							__LIB_1__::func_891(iLocal_86);
							__LIB_0__::func_24(iLocal_86, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_86 /*35*/].f_10);
							if (Global_1888801[iLocal_86 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_86 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_86 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_86 /*35*/].f_12);
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
	iLocal_14 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Orange Plantation - m_volTown Agg");
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, 2014.568f, -844.9777f, 44.706f, 0f, 0f, 0f, 69.6883f, 50.95198f, 16.54283f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, 1994.893f, -813.8496f, 44.706f, 0f, 0f, 32.02662f, 49.04269f, 28.47917f, 16.54283f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, 1968.462f, -859.535f, 44.706f, 0f, 0f, -0.583631f, 30.73095f, 51.93652f, 16.54283f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, 2050.994f, -804.7936f, 44.706f, 0f, 0f, 39.76538f, 38.38671f, 59.01843f, 16.54283f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, 2076.114f, -860.0187f, 44.706f, 0f, 0f, 0f, 38.38671f, 37.38729f, 16.54283f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, 2012.807f, -764.5793f, 44.706f, 0f, 0f, 39.76538f, 11.55689f, 14.41201f, 15.9332f);
	VOLUME::_0x39816F6F94F385AD(iLocal_14, 2040.947f, -887.8384f, 44.706f, 0f, 0f, 2.644386f, 138.1747f, 21.08713f, 16.54283f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, 2099.362f, -835.4238f, 44.706f, 0f, 0f, 38.97644f, 8.372574f, 17.93935f, 18.54283f);
	VOLUME::_0x39816F6F94F385AD(iLocal_14, 2106.672f, -874.8062f, 44.706f, 0f, 0f, 173.7751f, 15.22373f, 31.89837f, 18.54283f);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Orange Plantation - m_volThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2065.472f, -851.4658f, 42.55719f, 0f, 0f, 0f, 19.02366f, 13.64085f, 16.67954f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2019.272f, -774.1213f, 41.40026f, 0f, 0f, 37.13808f, 9.83179f, 10.20259f, 16.67954f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 2013.173f, -774.8469f, 41.40026f, 0f, 0f, 37.13808f, 4.350712f, 4.302257f, 16.67954f);
		iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Orange Plantation - m_volRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_15, iLocal_17);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 2076.114f, -860.0187f, 44.706f, 0f, 0f, 0f, 36.89741f, 35.70032f, 15.9332f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 2050.994f, -804.7936f, 44.706f, 0f, 0f, 39.76539f, 36.89741f, 57.33146f, 15.9332f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 2012.807f, -764.5793f, 44.706f, 0f, 0f, 39.76538f, 10.22549f, 13.5511f, 15.9332f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 1998.531f, -853.2407f, 44.706f, 0f, 0f, 0f, 45.40543f, 35.23671f, 15.9332f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 2099.362f, -835.4238f, 44.706f, 0f, 0f, 38.97644f, 6.372574f, 15.93935f, 16.54283f);
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Orange Plantation - m_volWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_16, iLocal_15);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 2014.568f, -844.9777f, 44.706f, 0f, 0f, 0f, 68.19901f, 49.26501f, 15.9332f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 1968.462f, -859.535f, 44.706f, 0f, 0f, -0.583632f, 29.24165f, 50.24955f, 15.9332f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 1994.893f, -813.8496f, 44.706f, 0f, 0f, 32.02662f, 47.55339f, 26.7922f, 15.9332f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2040.947f, -887.8384f, 44.706f, 0f, 0f, 2.644384f, 136.6854f, 19.40016f, 15.9332f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2106.672f, -874.8062f, 44.706f, 0f, 0f, 173.7751f, 13.22373f, 29.89837f, 16.54283f);
		sLocal_18 = "ORANGE_PLANTATION";
		LAW::_CREATE_GUARD_ZONE(sLocal_18);
		LAW::_0x8C598A930F471938(sLocal_18, iLocal_14);
		LAW::_0x35815F372D43E1E5(sLocal_18, iLocal_15);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_18, iLocal_16);
		LAW::_0xA1B0E6301E2E02A6(sLocal_18, iLocal_17);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_18, 2066.902f, -851.1766f, 43.3946f);
		LAW::_0xA8A74AA79FB67159(sLocal_18, iLocal_14);
	}
	return true;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_4__::func_919(&uLocal_19, 945, 3, "", joaat("CHUCKWAGON000X"), 2066.077f, -879.7555f, 42.3275f, -179.75f, joaat("PG_DELIVERY_ORANGE01X"), 0);
		__LIB_4__::func_919(&uLocal_39, 946, 5, "", joaat("CHUCKWAGON000X"), 2070.248f, -798.5662f, 42.3792f, -1.05f, joaat("PG_DELIVERY_ORANGE01X"), 0);
		__LIB_4__::func_919(&uLocal_59, 947, 5, "", joaat("CHUCKWAGON000X"), 2009.136f, -822.2015f, 42.3163f, -78f, joaat("PG_DELIVERY_ORANGE01X"), 0);
	}
}

bool func_38(int iParam0)
{
	if (!bLocal_82)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_80))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_80))
			{
				if (!DECORATOR::DECOR_EXIST_ON(iLocal_80, "HAS_VOICE") || !DECORATOR::DECOR_GET_BOOL(iLocal_80, "HAS_VOICE"))
				{
					DECORATOR::DECOR_SET_BOOL(iLocal_80, "HAS_VOICE", true);
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_80, "0941_A_M_M_Foreman_White_AVOID_01");
					bLocal_82 = true;
				}
			}
		}
		else
		{
			iLocal_80 = __LIB_1__::func_334(657);
		}
	}
	if (!bLocal_81)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_79))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
			{
				if (!DECORATOR::DECOR_EXIST_ON(iLocal_79, "HAS_VOICE") || !DECORATOR::DECOR_GET_BOOL(iLocal_79, "HAS_VOICE"))
				{
					DECORATOR::DECOR_SET_BOOL(iLocal_79, "HAS_VOICE", true);
					AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_79, "0946_A_M_M_Guard_White_AGGRESSIVE_01");
					bLocal_81 = true;
				}
			}
		}
		else
		{
			iLocal_79 = __LIB_1__::func_334(658);
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_6__::func_928(&uLocal_19);
		__LIB_6__::func_928(&uLocal_39);
		__LIB_6__::func_928(&uLocal_59);
	}
	return true;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_86, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_86, 4);
		__LIB_0__::func_25(iLocal_86, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_75(iLocal_86);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_86);
		__LIB_2__::func_819(iLocal_86);
		__LIB_2__::func_755(iLocal_86);
		if (!__LIB_2__::func_756(iLocal_86, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_75(int iParam0)
{
	if (__LIB_0__::func_272(iLocal_80, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iLocal_80, "HAS_VOICE", false);
	}
	if (__LIB_0__::func_272(iLocal_79, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iLocal_79, "HAS_VOICE", false);
	}
	LAW::_REMOVE_GUARD_ZONE(sLocal_18);
	__LIB_0__::func_172(iLocal_15);
	__LIB_0__::func_172(iLocal_17);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_4__::func_909(&uLocal_19);
		__LIB_4__::func_909(&uLocal_39);
		__LIB_4__::func_909(&uLocal_59);
	}
}

