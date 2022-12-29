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
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_167 = 20000;
	iLocal_170 = vScriptParam_0.x;
	iLocal_168 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_169 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_169)
		{
			iLocal_169 = 0;
			__LIB_1__::func_947(iLocal_170, &iLocal_168);
			switch (iLocal_168)
			{
				case 0:
					iLocal_168 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_170);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_170)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_170), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_170));
					iVar1 = __LIB_1__::func_885(iLocal_170);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_171 = (MISC::GET_GAME_TIMER() + iLocal_167);
					iLocal_168 = 2;
					break;
				case 2:
					if (func_11() || iLocal_171 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_170);
						iLocal_171 = (MISC::GET_GAME_TIMER() + iLocal_167);
						iLocal_168 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_170) || iLocal_171 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_170);
						iLocal_171 = (MISC::GET_GAME_TIMER() + iLocal_167);
						iLocal_168 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_170) || iLocal_171 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_170);
						iLocal_171 = (iLocal_167 + MISC::GET_GAME_TIMER());
						iLocal_168 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_170)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_170), 4) && !iLocal_171 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_170) || iLocal_171 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_170, 4);
								iLocal_171 = (iLocal_167 + MISC::GET_GAME_TIMER());
								iLocal_168 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_171 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_170);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_765(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								func_27(iLocal_170);
								func_28(iLocal_170);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_168 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_170);
							__LIB_0__::func_18();
							iLocal_168 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							func_34(iLocal_170, &Global_1898004);
							iLocal_168 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_170);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_170, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_168 = 11;
							Jump @788; //curOff = 667
							if (__LIB_19__::func_460(iLocal_170))
							{
								iLocal_169 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_170);
							__LIB_1__::func_891(iLocal_170);
							__LIB_0__::func_24(iLocal_170, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_170 /*35*/].f_10);
							if (Global_1888801[iLocal_170 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_170 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_170 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_170 /*35*/].f_12);
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
	iLocal_163 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5220.2f, -3472.4f, -20.6f, 0f, 0f, 0f, 100f, 125f, 70f, "m_volBenedictPoint");
	iLocal_164 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBenedictPostOffice Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_164, -5226.037f, -3468.296f, -19.99f, 0f, 0f, 0f, 6.727f, 3.065f, 3.5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_164, -5227.384f, -3470.978f, -19.99f, 0f, 0f, 0f, 2.011f, 2.184f, 3.5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_164, -5230.431f, -3468.341f, -20.375f, 0f, 0f, 0f, 2.753f, 2.804f, 4f);
	iLocal_165 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBenedictPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_165, -5227.361f, -3470.487f, -20.226f, 0f, 0f, 0f, 1.695f, 1.082f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_165, -5229.832f, -3468.299f, -20.656f, 0f, 0f, 0f, 1.109f, 2.187f, 3.106f);
	iLocal_166 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5226.061f, -3468.279f, -21.52f, 0f, 0f, 0f, 6.85f, 3.25f, 4f, "m_volBenedictPostOfficeOffLimits");
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

bool func_15(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		HUD::_TEXT_DATABASE_REQUEST("TWDRGAU");
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("TWDRGAU"))
		{
			return false;
		}
	}
	return true;
}

void func_27(int iParam0)
{
	__LIB_7__::func_855(2, 507, iLocal_164, iParam0, iLocal_165, iLocal_166, 491520, (12.5f * 2f), 0, 0);
	__LIB_2__::func_807(2, joaat("DOOR_BEN_TRAIN_INT_2"), 0, 0);
	__LIB_2__::func_807(2, joaat("DOOR_BEN_TRAIN_INT_4"), 0, 0);
	__LIB_2__::func_775(2, -5224.11f, -3465.51f, -21.52f, -146.961f);
}

void func_28(int iParam0)
{
	iParam0 = iParam0;
	__LIB_2__::func_812(507, iLocal_164, 1);
}

void func_34(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	__LIB_2__::func_766(uParam1, iLocal_164, 10);
	__LIB_2__::func_766(uParam1, iLocal_163, 5);
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_170, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_170, 4);
		__LIB_0__::func_25(iLocal_170, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_79(iLocal_170);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_170);
		__LIB_2__::func_819(iLocal_170);
		__LIB_2__::func_755(iLocal_170);
		if (!__LIB_2__::func_756(iLocal_170, 0))
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
	__LIB_4__::func_857(&Local_117, 507, &uVar0, 0, 0);
	Local_117[0 /*45*/].f_43 = 9116;
	Local_117[0 /*45*/].f_44 = 9292;
	__LIB_2__::func_811(&(Local_117[0 /*45*/]), 512);
}

void func_79(int iParam0)
{
	iParam0 = iParam0;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_11__::func_872();
		if (HUD::_DOES_TEXT_DATABASE_EXIST("TWDRGAU"))
		{
			if (HUD::_TEXT_DATABASE_HAS_LOADED("TWDRGAU"))
			{
				HUD::_TEXT_DATABASE_DELETE("TWDRGAU");
			}
		}
	}
}

Vector3 func_86(var uParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	if (__LIB_7__::func_853(uParam0, 5))
	{
		sVar1 = __LIB_0__::func_67(Global_1393529.f_288[2 /*8*/]);
		iVar2 = MISC::GET_HASH_KEY(sVar1);
		switch (iVar2)
		{
			case joaat("0832_S_M_M_TRAINSTATIONWORKER_01_WHITE_01"):
				uParam0->f_37 = "0832_TRAINWORKER";
				return __LIB_1__::func_344("TWDRG_TSW3SICK");
			case joaat("0833_S_M_M_TRAINSTATIONWORKER_01_WHITE_02"):
				uParam0->f_37 = "0833_TRAINWORKER";
				return __LIB_1__::func_344("TWDRG_TSW2SICK");
			case joaat("0834_S_M_M_TRAINSTATIONWORKER_01_WHITE_03"):
				uParam0->f_37 = "0834_TRAINWORKER";
				return __LIB_1__::func_344("TWDRG_TSW1SICK");
			default:
				break;
		}
	}
	return __LIB_1__::func_344("");
}

char* func_87(int iParam0)
{
	switch (iParam0)
	{
		case 507:
			return "0832_TRAINWORKER";
		default:
			break;
	}
	return "";
}

