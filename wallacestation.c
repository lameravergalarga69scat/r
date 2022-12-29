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
	struct<45> Local_117[2];
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_215 = 20000;
	iLocal_218 = vScriptParam_0.x;
	iLocal_216 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_217 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_217)
		{
			iLocal_217 = 0;
			__LIB_1__::func_947(iLocal_218, &iLocal_216);
			switch (iLocal_216)
			{
				case 0:
					iLocal_216 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_218);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_218)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_218), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_218));
					iVar1 = __LIB_1__::func_885(iLocal_218);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_219 = (MISC::GET_GAME_TIMER() + iLocal_215);
					iLocal_216 = 2;
					break;
				case 2:
					if (func_11() || iLocal_219 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_218);
						iLocal_219 = (MISC::GET_GAME_TIMER() + iLocal_215);
						iLocal_216 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_218) || iLocal_219 < MISC::GET_GAME_TIMER())
					{
						__LIB_0__::func_11(iLocal_218);
						iLocal_219 = (MISC::GET_GAME_TIMER() + iLocal_215);
						iLocal_216 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_218) || iLocal_219 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_218);
						iLocal_219 = (iLocal_215 + MISC::GET_GAME_TIMER());
						iLocal_216 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_218)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_218), 4) && !iLocal_219 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_218) || iLocal_219 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_218, 4);
								iLocal_219 = (iLocal_215 + MISC::GET_GAME_TIMER());
								iLocal_216 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_219 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_218);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								func_27(iLocal_218);
								func_28(iLocal_218);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_216 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_218);
							__LIB_0__::func_18();
							iLocal_216 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							func_34(iLocal_218, &Global_1898004);
							iLocal_216 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_218);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_218, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_216 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_218))
							{
								iLocal_217 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_218);
							__LIB_1__::func_891(iLocal_218);
							__LIB_0__::func_24(iLocal_218, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_218 /*35*/].f_10);
							if (Global_1888801[iLocal_218 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_218 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_218 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_218 /*35*/].f_12);
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
	iLocal_209 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("WalStn-m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_209, -1301.158f, 398.81f, 95.65845f, 0f, 0f, 61.99999f, 1.32f, 1.421f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_209, -1299.192f, 402.038f, 95.658f, 0f, 0f, 61.99999f, 1.537f, 2.022f, 3f);
	iLocal_208 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("WalStn-m_volPostOfficeOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_208, -1301.045f, 400.748f, 95.8015f, 0f, 0f, 61.99999f, 2.173f, 5f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_208, -1301.309f, 398.458f, 95.8015f, 0f, 0f, 61.99999f, 2.173f, 2.006f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_208, -1298.877f, 402.661f, 95.8015f, 0f, 0f, 61.99999f, 3.035f, 2.644f, 3f);
	iLocal_210 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1301.071f, 400.6989f, 95.824f, 0f, 0f, 61.99999f, 2f, 5f, 3f, "WalStn-m_volPostOfficeOfflimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_208, 10047);
	iLocal_211 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("WalStn-m_volGeneralShop Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_211, -1302.8f, 395.115f, 95.824f, 0f, 0f, 61.99999f, 13.80803f, 7.2f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_211, -1296.613f, 397.2601f, 95.824f, 0f, 0f, 61.99999f, 3.88245f, 2.262934f, 3f);
	iLocal_212 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1303.289f, 394.199f, 95.824f, 0f, 0f, 62f, 2.042f, 1.5f, 3f, "WalStn-m_volGeneralShopPrompt");
	iLocal_213 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1307.855f, 397.8527f, 95.324f, 0f, 0f, 61.99999f, 4.5f, 4.5f, 4f, "WalStn-m_volGeneralShopPorch");
	iLocal_214 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1301.095f, 393.546f, 95.824f, 0f, 0f, 60f, 3.235947f, 2.050864f, 3f, "WalStn-m_volGeneralShopOff");
	VOLUME::_0xB469CFD9E065EB99(iLocal_211, 10112);
	return true;
}

bool func_15(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		HUD::_TEXT_DATABASE_REQUEST("TWDRGAU");
		HUD::_TEXT_DATABASE_REQUEST("WALLAUD");
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("TWDRGAU"))
		{
			return false;
		}
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("WALLAUD"))
		{
			return false;
		}
		func_46();
	}
	return true;
}

void func_27(int iParam0)
{
	func_51(2, 802, iLocal_208, iParam0, iLocal_209, iLocal_210, 491520, (12.5f * 2f), 0, 0);
	__LIB_2__::func_807(2, 96424206, 0, 0);
	__LIB_2__::func_807(2, 381066979, 0, 0);
	__LIB_2__::func_775(2, -1301.726f, 401.6754f, 94.3517f, 241.9753f);
	func_51(3, 803, iLocal_211, iParam0, iLocal_212, iLocal_214, 12, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_2__::func_807(3, 96424206, 0, 0);
	__LIB_2__::func_807(3, 381066979, 0, 0);
	__LIB_4__::func_898(3, iLocal_213);
	__LIB_2__::func_775(3, -1296.13f, 397.8831f, 94.3517f, 134.2714f);
}

void func_28(int iParam0)
{
	iParam0 = iParam0;
	__LIB_2__::func_812(802, iLocal_208, 1);
	__LIB_2__::func_812(803, iLocal_211, 1);
}

void func_34(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	__LIB_2__::func_766(uParam1, iLocal_211, 2);
	__LIB_2__::func_766(uParam1, iLocal_208, 10);
}

bool func_38(int iParam0)
{
	bool bVar0;
	if (__LIB_0__::func_2() == -1)
	{
		bVar0 = __LIB_2__::func_776();
		if (!bVar0)
		{
			func_60(&Local_117);
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
		__LIB_0__::func_24(iLocal_218, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_218, 4);
		__LIB_0__::func_25(iLocal_218, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_80(iLocal_218);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_218);
		__LIB_2__::func_819(iLocal_218);
		__LIB_2__::func_755(iLocal_218);
		if (!__LIB_2__::func_756(iLocal_218, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_46()
{
	func_86();
}

void func_51(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = __LIB_0__::func_560(iParam3, iParam0);
	vVar1 = { __LIB_4__::func_846(iVar0) };
	vVar4 = { func_95(iVar0) };
	if (func_96(vVar1))
	{
		return;
	}
	if (!__LIB_2__::func_808(19, 16384))
	{
		if (!__LIB_0__::func_29(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	__LIB_2__::func_772(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	if (func_96(vVar4))
	{
		Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	}
	else
	{
		Global_1914319.f_15936[iVar0 /*6*/].f_2 = { vVar4 };
	}
	Global_1914319.f_3[iParam0 /*446*/].f_10 = iVar0;
	Global_1914319.f_3[iParam0 /*446*/].f_25 = iParam2;
	Global_1914319.f_3[iParam0 /*446*/].f_26 = iParam4;
	Global_1914319.f_3[iParam0 /*446*/].f_28 = iParam5;
	Global_1914319.f_3[iParam0 /*446*/].f_29 = iParam9;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = iParam3;
	Global_1914319.f_3[iParam0 /*446*/].f_409 = iParam8;
	if (__LIB_2__::func_779(iVar0) || __LIB_2__::func_780(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = joaat("SHOP_RHO_GUNSMITH");
				break;
			case 61:
				iVar7 = joaat("SHOP_STR_GENERAL_STORE");
				break;
			case 73:
				iVar7 = joaat("SHOP_VAL_DOCTOR");
				break;
			case 43:
				iVar7 = joaat("SHOP_SDN_GUNSMITH");
				break;
			case 41:
				iVar7 = joaat("SHOP_SDN_FENCE");
				break;
		}
		Global_1914319.f_3[iParam0 /*446*/].f_20 = __LIB_1__::func_293(5, Global_1914319.f_3[iParam0 /*446*/].f_10, 2, iVar7);
	}
	Global_1393529.f_114[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1393529.f_220[iParam0] = 0f;
	Global_1393529.f_569[iParam0] = 0;
	StringCopy(&(Global_1393529.f_288[iParam0 /*8*/]), "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = __LIB_2__::func_781(iParam0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_19 = fParam7;
	Global_1914319.f_3[iParam0 /*446*/].f_8 = iParam6;
	if (!__LIB_4__::func_853(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			__LIB_2__::func_820(iParam3);
			break;
		case 10:
			__LIB_2__::func_782(iParam3);
			break;
		case 18:
			__LIB_2__::func_783();
			break;
		case 9:
			__LIB_2__::func_784();
			break;
		case 22:
			__LIB_2__::func_785();
			break;
	}
	__LIB_2__::func_809(Global_1914319.f_3[iParam0 /*446*/].f_10);
	__LIB_1__::func_943(iParam0, 16);
	__LIB_2__::func_810(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_60(var uParam0)
{
	func_117(uParam0);
}

void func_80(int iParam0)
{
	iParam0 = iParam0;
	if (__LIB_0__::func_2() == -1)
	{
		func_147();
		if (HUD::_DOES_TEXT_DATABASE_EXIST("TWDRGAU"))
		{
			if (HUD::_TEXT_DATABASE_HAS_LOADED("TWDRGAU"))
			{
				HUD::_TEXT_DATABASE_DELETE("TWDRGAU");
			}
		}
		if (HUD::_DOES_TEXT_DATABASE_EXIST("WALLAUD"))
		{
			if (HUD::_TEXT_DATABASE_HAS_LOADED("WALLAUD"))
			{
				HUD::_TEXT_DATABASE_DELETE("WALLAUD");
			}
		}
	}
}

void func_86()
{
	var uVar0;
	int iVar6[5];
	uVar0 = 5;
	__LIB_17__::func_691(&Local_117, 802, &uVar0, 0, 0);
	Local_117[0 /*45*/].f_43 = 25984;
	Local_117[0 /*45*/].f_44 = 26214;
	iVar6[0] = 802;
	__LIB_17__::func_691(&Local_117, 803, &iVar6, 1, 0);
	Local_117[1 /*45*/].f_43 = 26259;
	Local_117[1 /*45*/].f_44 = 26214;
}

Vector3 func_95(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.927f, 46.2401f;
		case 2:
			return 2936.9f, 1281.7f, 43.6529f;
		case 3:
			return 2931.596f, 1282.839f, 44.6783f;
		case 99:
			return -5227.45f, -3468.19f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 10:
			return -753.4219f, -1285.01f, 43.20049f;
		case 7:
			return -785.1682f, -1324.179f, 46.3505f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.0186f, -1328.058f, 44.00846f;
		case 17:
			return -764.2743f, -1292.576f, 44.3442f;
		case 12:
			return -813.7f, -1374.1f, 44.2f;
			return 1417.288f, 273.5687f, 88.4881f;
			return 1522.305f, 442.8598f, 89.6785f;
			return 1525.407f, 442.7721f, 90.6467f;
			return 2161.5f, -618.5f, 43f;
			return -1092.88f, -575.69f, 81.41f;
			return -1094.41f, -577.51f, 81.41f;
			return 1294.084f, -1303.102f, 76.0418f;
			return 1297.423f, -1278.412f, 75.65752f;
			return 1319.43f, -1142.08f, 81.41f;
			return 1327.036f, -1292.386f, 77.2488f;
			return 1326.268f, -1323.129f, 78.1929f;
			return 1228.508f, -1296.796f, 77.6347f;
			return 1232.206f, -1300.197f, 77.8496f;
			return 1209.053f, -193.1814f, 101.9785f;
			return 2657.466f, -1180.96f, 53.2785f;
			return 2819.495f, -1331.29f, 45.514f;
			return 2721.24f, -1231.66f, 49.37f;
			return 2851.2f, -1202.3f, 49.046f;
			return 2828.087f, -1315.179f, 47.4196f;
			return 2714.586f, -1286.893f, 50.3211f;
			return 2508.212f, -1449.654f, 48.41523f;
			return 2747.906f, -1397.089f, 47.1107f;
			return 2746.599f, -1394.278f, 46.918f;
			return 2554.144f, -1166.025f, 54.3474f;
			return 2842.45f, -1227.66f, 46.66f;
			return 2817.64f, -1325.011f, 47.00512f;
			return 2836.992f, -1305.805f, 45.6964f;
			return 2832.02f, -1225.563f, 46.6422f;
			return 2734.174f, -1119.755f, 50.10792f;
			return -1753.404f, -392.557f, 155.2576f;
			return -1792.444f, -385.412f, 160.6924f;
			return -1812.343f, -370.618f, 161.8814f;
			return -1819.88f, -561.8194f, 157.2323f;
			return -1763.78f, -385.1118f, 156.7401f;
			return -307.9643f, 773.6048f, 117.7031f;
			return -308.18f, 812.19f, 117.99f;
			return 0f, 0f, 0f;
			return -338.8647f, 767.4334f, 115.5628f;
			return -286.9307f, 809.6714f, 120.6565f;
			return -323.5066f, 799.6924f, 118.973f;
			return -279.273f, 781.7448f, 118.7954f;
			return -369.4457f, 786.6935f, 115.9904f;
			return -176.3f, 630.1f, 115.331f;
			return -174.0662f, 633.9207f, 115.109f;
			return -272.7182f, 785.6115f, 117.4202f;
			return -326.1232f, 771.9214f, 116.436f;
			return 2947.64f, 1344.901f, 43.899f;
			return 2683.84f, -1399.642f, 45.37881f;
			return -805.72f, -1330.5f, 42.67f;
			return -1773.314f, -393.9122f, 155.5647f;
			return 1332.55f, -1298.679f, 75.35602f;
			return 3023.859f, 561.206f, 46.7352f;
			return 2986.003f, 567.9055f, 45.337f;
			return 2967.273f, 796.7416f, 52.5948f;
			return -1302.951f, 394.6608f, 94.3817f;
			return -1300.283f, 400.4247f, 94.3817f;
			return -1299.608f, 401.5503f, 94.97269f;
			return -5518.071f, -2906.217f, -2.7513f;
			return -5488.293f, -2937.662f, 0.6299f;
			return -5506.691f, -2968.343f, -1.2586f;
			return -5509.019f, -2947.435f, -2.8934f;
			return -5520.701f, -3044.427f, -1.40419f;
			return -3684.342f, -2626.877f, -12.5497f;
			return -2842.211f, 137.3398f, 183.8268f;
			return -1005.934f, -540.8262f, 97.9502f;
			return 2076.835f, 1000.829f, 111.4973f;
			return -2251.034f, -1916.911f, 115.9488f;
			return -142.072f, -23.5242f, 95.0883f;
			return 675.3091f, -1251.233f, 43.0152f;
			return 1875.2f, -1859.182f, 41.8f;
			return 2366.084f, 1347.122f, 105.1305f;
			return 0f, 0f, 0f;
		}
bool func_96(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_117(var uParam0)
{
	if ((uParam0[iLocal_116 /*45*/])->f_29 == 1)
	{
		if (__LIB_12__::func_472(uParam0[iLocal_116 /*45*/], 1, 1))
		{
			func_182(uParam0[iLocal_116 /*45*/]);
		}
	}
	iLocal_116++;
	if (iLocal_116 >= 2)
	{
		iLocal_116 = 0;
	}
}

void func_147()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_75(&(Local_117[iVar0 /*45*/].f_34)))
		{
			__LIB_0__::func_37(&(Local_117[iVar0 /*45*/].f_34));
		}
		__LIB_0__::func_172(Local_117[iVar0 /*45*/].f_38);
		__LIB_0__::func_172(Local_117[iVar0 /*45*/].f_39);
		iVar0++;
	}
}

Vector3 func_154(var uParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	if (__LIB_7__::func_853(uParam0, 0))
	{
		sVar1 = __LIB_0__::func_67(Global_1393529.f_288[2 /*8*/]);
		iVar2 = MISC::GET_HASH_KEY(sVar1);
		switch (iVar2)
		{
			case joaat("0832_S_M_M_TRAINSTATIONWORKER_01_WHITE_01"):
				uParam0->f_37 = "0832_TRAINWORKER";
				return __LIB_1__::func_344("WALLST_TSW3SICK");
			case joaat("0833_S_M_M_TRAINSTATIONWORKER_01_WHITE_02"):
				uParam0->f_37 = "0833_TRAINWORKER";
				return __LIB_1__::func_344("WALLST_TSW2SICK");
			case joaat("0834_S_M_M_TRAINSTATIONWORKER_01_WHITE_03"):
				uParam0->f_37 = "0834_TRAINWORKER";
				return __LIB_1__::func_344("WALLST_TSW1SICK");
			default:
				break;
		}
	}
	if ((AUDIO::IS_ANY_SPEECH_PLAYING(iVar0) || AUDIO::_0x2B101AD9F651243A()) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iVar0))
	{
		__LIB_2__::func_811(&(Local_117[1 /*45*/]), 16);
		__LIB_2__::func_811(&(Local_117[1 /*45*/]), 2048);
	}
	return __LIB_1__::func_344("");
}

char* func_155(int iParam0)
{
	switch (iParam0)
	{
		case 803:
			return "WAL_General_Store";
		case 802:
			return "0832_TRAINWORKER";
		default:
			break;
	}
	return "";
}

Vector3 func_156(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_334(*uParam0);
	iVar1 = __LIB_1__::func_334(802);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	iVar2 = 1;
	if (!__LIB_2__::func_792(uParam0, 4) && !__LIB_2__::func_792(uParam0, 16))
	{
		if (__LIB_17__::func_639(uParam0, 28, iVar2, 2, 62))
		{
			return __LIB_1__::func_344("WALL_GEN_DWN");
		}
		if (__LIB_17__::func_641(uParam0, 28, iVar2, 4, 59))
		{
			return __LIB_1__::func_344("WALL_GEN_FIN1");
		}
		if (__LIB_17__::func_641(uParam0, 28, iVar2, 8, 14))
		{
			return __LIB_1__::func_344("WALL_GEN_MUD4");
		}
		if (__LIB_17__::func_641(uParam0, 28, iVar2, 16, 11))
		{
			return __LIB_1__::func_344("WALL_GEN_UTP1");
		}
		if (__LIB_14__::func_267(61, 1, 0) && __LIB_17__::func_567(28, iVar2, 32, 1))
		{
			return __LIB_1__::func_344("WALL_GEN_SRSGEN");
		}
		if (__LIB_14__::func_267(73, 1, 0) && __LIB_17__::func_567(76, iVar2, 64, 1))
		{
			return __LIB_1__::func_344("WALL_GEN_SRVDOC");
		}
		if (__LIB_7__::func_853(uParam0, iVar2))
		{
			return __LIB_1__::func_344("TWALL_SHOPSICK1");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return __LIB_1__::func_344("");
	}
	if ((AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) || AUDIO::_0x2B101AD9F651243A()) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iVar1))
	{
		__LIB_2__::func_811(uParam0, 16);
	}
	if (__LIB_2__::func_792(uParam0, 16))
	{
		__LIB_2__::func_802(uParam0, 16);
		__LIB_2__::func_811(uParam0, 32);
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 14))
		{
			case 0:
				return __LIB_1__::func_344("TWALL_SHOP_CH_A");
			case 1:
				return __LIB_1__::func_344("TWALL_SHOP_CH_B");
			case 2:
				return __LIB_1__::func_344("TWALL_SHOP_CH_C");
			case 3:
				return __LIB_1__::func_344("TWALL_SHOP_CH_D");
			case 4:
				return __LIB_1__::func_344("TWALL_SHOP_CH_E");
			case 5:
				return __LIB_1__::func_344("TWALL_SHOP_CH_F");
			case 6:
				return __LIB_1__::func_344("TWALL_SHOP_CH_G");
			case 7:
				return __LIB_1__::func_344("TWALL_SHOP_CH_H");
			case 8:
				return __LIB_1__::func_344("TWALL_SHOP_CL_I");
			case 9:
				return __LIB_1__::func_344("TWALL_SHOP_CH_J");
			case 10:
				return __LIB_1__::func_344("TWALL_SHOP_CH_K");
			case 11:
				return __LIB_1__::func_344("TWALL_SHOP_CH_L");
			case 12:
				return __LIB_1__::func_344("TWALL_SHOP_CH_M");
			case 13:
				return __LIB_1__::func_344("TWALL_SHOP_CH_N");
			default:
				break;
		}
	}
	if (__LIB_2__::func_815(uParam0) && __LIB_2__::func_792(uParam0, 32))
	{
		__LIB_2__::func_802(uParam0, 32);
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
		{
			case 0:
				return __LIB_1__::func_344("TWALL_SHOP_PL_A");
			case 1:
				return __LIB_1__::func_344("TWALL_SHOP_PL_B");
			case 2:
				return __LIB_1__::func_344("TWALL_SHOP_PL_C");
			case 3:
				return __LIB_1__::func_344("TWALL_SHOP_PL_D");
			case 4:
				return __LIB_1__::func_344("TWALL_SHOP_PL_E");
			case 5:
				return __LIB_1__::func_344("TWALL_SHOP_PL_F");
			case 6:
				return __LIB_1__::func_344("TWALL_SHOP_PL_G");
			case 7:
				return __LIB_1__::func_344("TWALL_SHOP_PL_H");
			case 8:
				return __LIB_1__::func_344("TWALL_SHOP_PL_I");
			case 9:
				return __LIB_1__::func_344("TWALL_SHOP_PL_J");
			case 10:
				return __LIB_1__::func_344("TWALL_SHOP_PL_K");
			case 11:
				return __LIB_1__::func_344("TWALL_SHOP_PL_L");
			case 12:
				return __LIB_1__::func_344("TWALL_SHOP_PL_M");
			default:
				break;
		}
	}
	return __LIB_1__::func_344("");
}

void func_182(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	bool bVar7;
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_43);
	vVar0 = { StackVal, StackVal, StackVal };
	if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_0__::func_57(&vVar0)))
	{
		return;
	}
	iVar3 = __LIB_1__::func_334(*uParam0);
	if (!__LIB_0__::func_272(iVar3, 0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_37))
	{
		Stack.Push(*uParam0);
		Call_Loc(uParam0->f_44);
		uParam0->f_37 = StackVal;
	}
	__LIB_0__::func_928(&uLocal_18, iVar3, uParam0->f_37, 0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar3, true);
	uParam0->f_2 = 1;
	uParam0->f_37 = 0;
	if (!__LIB_2__::func_792(uParam0, 65536))
	{
		if (uParam0->f_21 < 0)
		{
			if (__LIB_0__::func_113())
			{
				__LIB_0__::func_928(&uLocal_18, Global_35, "ARTHUR", 0);
			}
			else
			{
				__LIB_0__::func_928(&uLocal_18, Global_35, "JOHN", 0);
			}
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
			uParam0->f_28 = 1;
		}
		else if (__LIB_2__::func_792(uParam0, 128))
		{
			iVar4 = uParam0->f_21;
			iVar5 = __LIB_1__::func_334(uParam0->f_3[iVar4 /*3*/]);
			if (!__LIB_0__::func_272(iVar5, 0))
			{
				return;
			}
			Stack.Push(uParam0->f_3[iVar4 /*3*/]);
			Call_Loc(uParam0->f_44);
			sVar6 = StackVal;
			__LIB_0__::func_928(&uLocal_18, iVar5, sVar6, 0);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar5, true);
			uParam0->f_3[iVar4 /*3*/].f_2 = 1;
		}
	}
	bVar7 = __LIB_2__::func_792(uParam0, 16384);
	if (func_245(&uLocal_18, vVar0, uParam0->f_40, bVar7, 0))
	{
		__LIB_2__::func_796(__LIB_4__::func_850());
		uParam0->f_30 = 1;
	}
	__LIB_7__::func_854(uParam0);
}

bool func_245(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		return true;
	}
	else if (__LIB_2__::func_813(uParam0, vParam1, iParam8, -1, 0, 0))
	{
		iVar0 = (*uParam0)[0 /*4*/];
		iVar1 = (*uParam0)[1 /*4*/];
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !__LIB_0__::func_255(iVar0, 0)) && (ENTITY::DOES_ENTITY_EXIST(iVar1) && !__LIB_0__::func_255(iVar1, 0)))
		{
			if (!func_96(vParam4))
			{
				TASK::TASK_LOOK_AT_COORD(iVar0, vParam4, 8000, 0, 51, 0);
				TASK::TASK_LOOK_AT_COORD(iVar1, vParam4, 8000, 0, 51, 0);
			}
			else if (bParam7)
			{
				PED::_0x62FDAD5E01D2DD47(iVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, Global_35, 4000, -1f, -1f, -1f);
			}
		}
		return true;
	}
	return false;
}

