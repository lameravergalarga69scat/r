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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 24;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	var uLocal_40 = 0;
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
	var uLocal_60 = 0;
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
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	struct<45> Local_117[1];
	int iLocal_163 = 0;
	char* sLocal_164 = NULL;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_168 = 20000;
	iLocal_171 = vScriptParam_0.x;
	iLocal_169 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_170 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_170)
		{
			iLocal_170 = 0;
			__LIB_1__::func_947(iLocal_171, &iLocal_169);
			switch (iLocal_169)
			{
				case 0:
					iLocal_169 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_171);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_171)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_171), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_171));
					iVar1 = __LIB_1__::func_885(iLocal_171);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_172 = (MISC::GET_GAME_TIMER() + iLocal_168);
					iLocal_169 = 2;
					break;
				case 2:
					if (func_11() || iLocal_172 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_171);
						iLocal_172 = (MISC::GET_GAME_TIMER() + iLocal_168);
						iLocal_169 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_171) || iLocal_172 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_171);
						iLocal_172 = (MISC::GET_GAME_TIMER() + iLocal_168);
						iLocal_169 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_171) || iLocal_172 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_171);
						iLocal_172 = (iLocal_168 + MISC::GET_GAME_TIMER());
						iLocal_169 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_171)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_171), 4) && !iLocal_172 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_171) || iLocal_172 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_171, 4);
								iLocal_172 = (iLocal_168 + MISC::GET_GAME_TIMER());
								iLocal_169 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_172 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_171);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_765(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_171);
								func_28(iLocal_171);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_169 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_171);
							__LIB_0__::func_18();
							iLocal_169 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							func_34(iLocal_171, &Global_1898004);
							iLocal_169 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_171);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_171, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_169 = 11;
							Jump @788; //curOff = 667
							if (__LIB_19__::func_460(iLocal_171))
							{
								iLocal_170 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_171);
							__LIB_1__::func_891(iLocal_171);
							__LIB_0__::func_24(iLocal_171, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_171 /*35*/].f_10);
							if (Global_1888801[iLocal_171 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_171 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_171 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_171 /*35*/].f_12);
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
	iLocal_163 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-606.3235f, -34.1014f, 89.13992f, 0f, 0f, -2.960119f, 91.8399f, 128.2035f, 27.99896f, "Painted Sky - m_volTown");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_167 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Painted Sky - m_volRancherThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_167, -615.0529f, -8.683389f, 84.73939f, 0f, 0f, -61.07222f, 13.06188f, 14.76316f, 9.1551f);
		VOLUME::_0x39816F6F94F385AD(iLocal_167, -630.0898f, -64.73701f, 84.73939f, 0f, 0f, -84.96833f, 20.24605f, 11.7424f, 9.1551f);
		VOLUME::_0x39816F6F94F385AD(iLocal_167, -610.8533f, -30.41994f, 84.73939f, 0f, 0f, -69.27884f, 18.54069f, 7.558324f, 9.1551f);
		VOLUME::_0x39816F6F94F385AD(iLocal_167, -607.0614f, -55.91715f, 84.36602f, 0f, 0f, -86.2037f, 1.607721f, 1.071148f, 2.286196f);
		VOLUME::_0x39816F6F94F385AD(iLocal_167, -615.6726f, -33.24317f, 84.73939f, 0f, 0f, 20.71626f, 3.79069f, 17.96073f, 9.1551f);
		VOLUME::_0x39816F6F94F385AD(iLocal_167, -618.952f, -32.05656f, 84.73939f, 0f, 0f, -69.27884f, 14.59728f, 1.46241f, 9.1551f);
		VOLUME::_0x39816F6F94F385AD(iLocal_167, -619.0227f, -36.83093f, 84.73939f, 0f, 0f, -69.27884f, 5.661715f, 1.862059f, 9.1551f);
		VOLUME::_0x39816F6F94F385AD(iLocal_167, -619.5566f, -25.02375f, 84.73939f, 0f, 0f, -60.00019f, 1.92512f, 5.056171f, 9.1551f);
		iLocal_166 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Painted Sky - m_volRancherRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_166, iLocal_167);
		VOLUME::_0xBCE668AAF83608BE(iLocal_166, -618.1764f, -35.07673f, 84.00621f, 0f, 0f, -116.2442f, 43.7f, 24.97202f, 13f);
		iLocal_165 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Painted Sky - m_volRancherWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_165, iLocal_166);
		VOLUME::_0xBCE668AAF83608BE(iLocal_165, -618.1764f, -35.07673f, 84.00621f, 0f, 0f, -116.2442f, 52.7998f, 35.21894f, 13f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_165, -589.9137f, -38.42014f, 87.95631f, 0f, 0f, 28.26761f, 18.40042f, 17.08066f, 7.654564f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_165, -584.0537f, -0.019895f, 87.95631f, 0f, 0f, 28.26761f, 21.42276f, 31.19608f, 7.654564f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_165, -595.9303f, -72.77682f, 87.95631f, 0f, 0f, 28.26761f, 35.98802f, 20.27966f, 7.654564f);
		sLocal_164 = "PAINTED_SKY";
		LAW::_CREATE_GUARD_ZONE(sLocal_164);
		LAW::_0x8C598A930F471938(sLocal_164, iLocal_163);
		LAW::_0xA1B0E6301E2E02A6(sLocal_164, iLocal_167);
		LAW::_0x35815F372D43E1E5(sLocal_164, iLocal_166);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_164, iLocal_165);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_164, -611.6139f, -28.3574f, 86.919f);
		LAW::_0xA8A74AA79FB67159(sLocal_164, iLocal_165);
	}
	return true;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
	if (__LIB_0__::func_2() == -1)
	{
		func_46();
	}
}

void func_28(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_165))
	{
		__LIB_2__::func_812(885, iLocal_165, 1);
		__LIB_2__::func_812(780, iLocal_165, 0);
		__LIB_2__::func_812(781, iLocal_165, 0);
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_165, 3, 1);
		VOLUME::_0x53D05D60E5F5B40C(iLocal_165, 3, 1, __LIB_0__::func_120(781));
		VOLUME::_0x53D05D60E5F5B40C(iLocal_165, 3, 1, __LIB_0__::func_120(780));
		if (__LIB_9__::func_783(8))
		{
			PED::_0x931B241409216C1F(__LIB_1__::func_334(885), __LIB_1__::func_334(781), 0);
		}
		else
		{
			PED::_0x931B241409216C1F(__LIB_1__::func_334(780), __LIB_1__::func_334(781), 0);
		}
	}
}

void func_34(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	__LIB_2__::func_766(uParam1, iLocal_163, 1);
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_171, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_171, 4);
		__LIB_0__::func_25(iLocal_171, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_79(iLocal_171);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_171);
		__LIB_2__::func_819(iLocal_171);
		__LIB_2__::func_755(iLocal_171);
		if (!__LIB_2__::func_756(iLocal_171, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_46()
{
	var uVar0;
	uVar0 = 5;
	__LIB_4__::func_857(&Local_117, 885, &uVar0, 0, 0);
	Local_117[0 /*45*/].f_43 = 8874;
	Local_117[0 /*45*/].f_44 = 9094;
	__LIB_2__::func_811(&(Local_117[0 /*45*/]), 512);
}

void func_79(int iParam0)
{
	__LIB_0__::func_172(iLocal_167);
	LAW::_REMOVE_GUARD_ZONE(sLocal_164);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_165))
	{
		VOLUME::_0x998202B206872672(iLocal_165);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_165);
		__LIB_0__::func_172(iLocal_165);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_166))
	{
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_166);
		__LIB_0__::func_172(iLocal_166);
	}
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_11__::func_872();
		if (HUD::_DOES_TEXT_DATABASE_EXIST("STRRGAU"))
		{
			if (HUD::_TEXT_DATABASE_HAS_LOADED("STRRGAU"))
			{
				HUD::_TEXT_DATABASE_DELETE("STRRGAU");
			}
		}
	}
}

Vector3 func_86(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	if (__LIB_2__::func_792(uParam0, 4))
	{
		return __LIB_1__::func_344("");
	}
	if (__LIB_0__::func_181() && __LIB_1__::func_185(70))
	{
		__LIB_2__::func_811(uParam0, 4);
		if (!__LIB_4__::func_848(26, 2, 2))
		{
			__LIB_4__::func_849(26, 2, 2);
			uParam0->f_21 = -1;
			return __LIB_1__::func_344("STRRG_RANWROB1");
		}
		else if (!__LIB_4__::func_848(26, 2, 4))
		{
			__LIB_4__::func_849(26, 2, 4);
			uParam0->f_21 = -1;
			return __LIB_1__::func_344("STRRG_RANWROB2");
		}
		else if (!__LIB_4__::func_848(26, 2, 8))
		{
			__LIB_4__::func_849(26, 2, 8);
			uParam0->f_21 = -1;
			return __LIB_1__::func_344("STRRG_RANWROB3");
		}
	}
	return __LIB_1__::func_344("");
}

char* func_87(int iParam0)
{
	switch (iParam0)
	{
		case 885:
			return "WROBEL";
		default:
			break;
	}
	return "";
}

