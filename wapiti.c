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
	bool bLocal_19 = false;
	bool bLocal_20 = false;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	struct<16> Local_23 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_39 = 0;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	struct<4> Local_47 = { 0, 0, 0, 0 } ;
	var uLocal_51 = 0;
	var uLocal_52 = 20;
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
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_118 = 20000;
	iLocal_121 = vScriptParam_0.x;
	iLocal_119 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_120 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_120)
		{
			iLocal_120 = 0;
			__LIB_1__::func_947(iLocal_121, &iLocal_119);
			switch (iLocal_119)
			{
				case 0:
					iLocal_119 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_121);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_121)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_121), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_121));
					iVar1 = __LIB_1__::func_885(iLocal_121);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_122 = (MISC::GET_GAME_TIMER() + iLocal_118);
					iLocal_119 = 2;
					break;
				case 2:
					if (func_11() || iLocal_122 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_121);
						iLocal_122 = (MISC::GET_GAME_TIMER() + iLocal_118);
						iLocal_119 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_121) || iLocal_122 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_121);
						iLocal_122 = (MISC::GET_GAME_TIMER() + iLocal_118);
						iLocal_119 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_121) || iLocal_122 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_121);
						iLocal_122 = (iLocal_118 + MISC::GET_GAME_TIMER());
						iLocal_119 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_121)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_121), 4) && !iLocal_122 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_121) || iLocal_122 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_121, 4);
								iLocal_122 = (iLocal_118 + MISC::GET_GAME_TIMER());
								iLocal_119 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_122 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_121);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_765(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_121);
								__LIB_1__::func_886(iLocal_121);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_119 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_5__::func_251(iLocal_121);
							__LIB_0__::func_18();
							iLocal_119 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_5__::func_252(iLocal_121, &Global_1898004);
							iLocal_119 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_121);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_121, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_119 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_121))
							{
								iLocal_120 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_6__::func_414(&Global_1898004, iLocal_121);
							__LIB_1__::func_891(iLocal_121);
							__LIB_0__::func_24(iLocal_121, 8);
							if (__LIB_4__::func_66())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_121 /*35*/].f_10);
							if (Global_1888801[iLocal_121 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_121 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_121 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_121 /*35*/].f_12);
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
	iLocal_14 = Global_1888801[56 /*35*/].f_4;
	VOLUME::_0xB469CFD9E065EB99(iLocal_14, 14);
	if (__LIB_0__::func_113())
	{
		bLocal_41 = true;
	}
	if (bLocal_41)
	{
		__LIB_17__::func_696(&iLocal_16, 442.5149f, 2226.488f, 246.2888f, 0f, 0f, 14.49999f, 37f, 44f, 30f, 3, joaat("VOLCYLINDER"), 0, 0);
		__LIB_17__::func_696(&iLocal_17, 459.0011f, 2219.182f, 242.6092f, 0f, 0f, 14.49999f, 51f, 60f, 30f, 4, joaat("VOLCYLINDER"), 0, 0);
		__LIB_17__::func_696(&iLocal_18, 469.3768f, 2216.321f, 246.2888f, 0f, 0f, 14.49999f, 64f, 72f, 30f, 5, joaat("VOLCYLINDER"), 0, 0);
		iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(446.3674f, 2219.606f, 246.2888f, 0f, 0f, 14.5f, 40f, 53f, 30f, "Wapiti - m_volNoHorseWhistle");
		POPULATION::_0x74C2B3DC0B294102(iLocal_14);
		POPULATION::_0xA1CFB35069D23C23(iLocal_14);
	}
	else
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_14, 12519, 18432, 0, -1, -1, 2);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_14, 12775, 18432, 0, -1, -1, 0);
		POPULATION::_0x2161278C6322F740(12775, 18432, 0, -1, -1, iLocal_14);
		__LIB_0__::func_566(iLocal_14, 0);
	}
	return true;
}

void func_14(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (bLocal_41)
		{
			__LIB_0__::func_24(iParam0, 16);
		}
		else
		{
			__LIB_0__::func_25(iParam0, 16);
		}
	}
	if (!__LIB_0__::func_181())
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 1);
	}
}

bool func_38(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		if (bLocal_41)
		{
			func_59();
			if (!bLocal_42)
			{
				Local_47 = ITEMSET::CREATE_ITEMSET(true);
				func_60(&uLocal_51);
				bLocal_42 = true;
			}
			else
			{
				__LIB_5__::func_803(&uLocal_51);
			}
			__LIB_14__::func_275(iParam0, iLocal_14, &uLocal_43);
			if (!__LIB_0__::func_296(0, 0, 1))
			{
				func_64();
				if (__LIB_2__::func_157(iLocal_15, Global_36))
				{
					__LIB_1__::func_538(0);
				}
				if (!bLocal_19)
				{
					iLocal_21 = __LIB_0__::func_42(__LIB_0__::func_23());
					iLocal_22 = iLocal_21 + 42;
					MISC::_0xFDF38E2B711BF78E(&Local_23, 17);
					bLocal_19 = true;
				}
				if ((bLocal_19 && !bLocal_40) && __LIB_0__::func_42(__LIB_0__::func_23()) > iLocal_21 + 10)
				{
					bLocal_40 = true;
				}
				if (__LIB_0__::func_42(__LIB_0__::func_23()) > iLocal_22 && !bLocal_20)
				{
					PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 1);
					bLocal_20 = true;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 154, true);
				iVar0 = PED::GET_MOUNT(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					PED::SET_PED_RESET_FLAG(iVar0, 154, true);
				}
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
		__LIB_0__::func_24(iLocal_121, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_121, 4);
		__LIB_0__::func_25(iLocal_121, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_87(iLocal_121);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_121);
		__LIB_2__::func_819(iLocal_121);
		__LIB_2__::func_755(iLocal_121);
		if (!__LIB_2__::func_756(iLocal_121, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_59()
{
	int iVar0;
	int iVar1;
	if ((MISC::GET_FRAME_COUNT() % 10) != 0)
	{
		return;
	}
	iVar0 = 706;
	while (iVar0 <= 708)
	{
		iVar1 = __LIB_1__::func_334(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!PED::GET_PED_CONFIG_FLAG(iVar1, 441, false))
			{
				PED::SET_PED_CONFIG_FLAG(iVar1, 441, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 1, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 54, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 121, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 302, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 136, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 419, true);
			}
		}
		iVar0++;
	}
}

void func_60(var uParam0)
{
	struct<2> Var0;
	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(uParam0, &Var0, 65);
	__LIB_5__::func_813(uParam0, 0, 13349, 13357, 13515);
	__LIB_5__::func_813(uParam0, 2, 13648, 13667, 13349);
	__LIB_6__::func_268(uParam0, 0);
}

void func_64()
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_205(Global_35, iLocal_14, 1, 0))
	{
		if (__LIB_0__::func_27(iLocal_116, 32))
		{
			if (__LIB_0__::func_163(Global_35, -208384378))
			{
				return;
			}
			else
			{
				ENTITY::_0x18FF3110CF47115D(iLocal_117, 0, 0);
				ENTITY::_0x18FF3110CF47115D(iLocal_117, 2, 0);
				ENTITY::_0x18FF3110CF47115D(iLocal_117, 3, 0);
				iLocal_117 = 0;
				__LIB_1__::func_681(&iLocal_116, 32);
			}
		}
		if (!__LIB_0__::func_27(iLocal_116, 1) && PED::_IS_PED_CARRYING(Global_35))
		{
			iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
			if (ENTITY::IS_ENTITY_A_PED(iVar0) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				iLocal_117 = iVar0;
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_117, 0f, 0f, 0f, 2f, 1);
				__LIB_1__::func_683(&iLocal_116, 32);
				return;
			}
			__LIB_1__::func_683(&iLocal_116, 1);
		}
		else
		{
			__LIB_1__::func_683(&iLocal_116, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_LASSO_TARGET(Global_35)))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 295, true);
		}
		if (!__LIB_0__::func_27(iLocal_116, 2))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iVar1 = PED::GET_MOUNT(Global_35);
				if (__LIB_1__::func_205(iVar1, iLocal_14, 1, 0))
				{
					iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar1);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
					{
						PED::_0xED00D72F81CF7278(iVar0, 0, 0);
						ENTITY::_0x18FF3110CF47115D(iVar0, 0, 0);
						ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
						ENTITY::_0x18FF3110CF47115D(iVar0, 3, 0);
					}
					__LIB_1__::func_683(&iLocal_116, 2);
				}
				else
				{
					__LIB_1__::func_681(&iLocal_116, 2);
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_116, 4))
		{
			if (TASK::_0xEFC4303DDC6E60D3(Global_35))
			{
				iVar1 = TASK::_0xED1F514AF4732258(Global_35);
				if (__LIB_1__::func_205(iVar1, iLocal_14, 1, 0))
				{
					iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar1);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
					{
						PED::_0xED00D72F81CF7278(iVar0, 0, 0);
						ENTITY::_0x18FF3110CF47115D(iVar0, 0, 0);
						ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
						ENTITY::_0x18FF3110CF47115D(iVar0, 3, 0);
					}
					__LIB_1__::func_683(&iLocal_116, 4);
				}
				else
				{
					__LIB_1__::func_681(&iLocal_116, 4);
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_116, 4))
		{
			iVar1 = __LIB_0__::func_398(0);
			if (!__LIB_0__::func_272(iVar1, 0))
			{
				return;
			}
			if (__LIB_1__::func_205(iVar1, iLocal_14, 1, 0))
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar1);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
				{
					PED::_0xED00D72F81CF7278(iVar0, 0, 0);
					ENTITY::_0x18FF3110CF47115D(iVar0, 0, 0);
					ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
					ENTITY::_0x18FF3110CF47115D(iVar0, 3, 0);
				}
				__LIB_1__::func_683(&iLocal_116, 4);
			}
			else
			{
				__LIB_1__::func_681(&iLocal_116, 4);
			}
		}
		if (!__LIB_0__::func_27(iLocal_116, 16))
		{
			iVar1 = __LIB_0__::func_398(1);
			if (!__LIB_0__::func_272(iVar1, 0))
			{
				return;
			}
			if (__LIB_1__::func_205(iVar1, iLocal_14, 1, 0))
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar1);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
				{
					PED::_0xED00D72F81CF7278(iVar0, 0, 0);
					ENTITY::_0x18FF3110CF47115D(iVar0, 0, 0);
					ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
					ENTITY::_0x18FF3110CF47115D(iVar0, 3, 0);
				}
				__LIB_1__::func_683(&iLocal_116, 16);
			}
			else
			{
				__LIB_1__::func_681(&iLocal_116, 16);
			}
		}
		ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, 1);
	}
	else
	{
		__LIB_1__::func_681(&iLocal_116, 1);
		__LIB_1__::func_681(&iLocal_116, 2);
		__LIB_1__::func_681(&iLocal_116, 4);
		__LIB_1__::func_681(&iLocal_116, 4);
		__LIB_1__::func_681(&iLocal_116, 16);
	}
}

void func_87(int iParam0)
{
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
	if (bLocal_40)
	{
		Local_23.f_12 = 46;
		Local_23.f_13 = 14;
		Local_23 = Global_35;
		Local_23.f_15 = joaat("WAPITI_RESIDENTS");
		MISC::_0x88BC5F4AEF77FC4E(&Local_23, 17);
	}
	__LIB_11__::func_766(iLocal_14, &uLocal_43);
	if (!__LIB_0__::func_181())
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 0);
	}
	__LIB_0__::func_172(iLocal_16);
	__LIB_0__::func_172(iLocal_17);
	__LIB_0__::func_172(iLocal_18);
	ITEMSET::DESTROY_ITEMSET(Local_47);
	iParam0 = iParam0;
}

int func_103()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (PED::_0x5407B7288D0478B7(Global_35, 516) == 0)
	{
		return -1;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 100f, 512) == 0)
	{
		return -1;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return -1;
	}
	if (!Local_47.f_2)
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			__LIB_0__::func_45("WAP_LAW_WARN", 10000, 0, 0, 0, 1);
		}
		else
		{
			__LIB_0__::func_45("WAP_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		Local_47.f_2 = 1;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_14, 1, 0))
	{
		return 2;
	}
	return -1;
}

void func_104()
{
	if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
	{
		__LIB_3__::func_465(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "CAMP_LAW_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
	}
	else
	{
		__LIB_3__::func_465(2, joaat("HONOR_EVENT_WANTED_IN_CAMP"), 0, "CAMP_COMBAT_HON", 0, 0, 1065353216 /* Float: 1f */, 0);
	}
}

void func_106()
{
	Local_47.f_1 = MISC::GET_GAME_TIMER() + 300;
}

int func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar20;
	int iVar21;
	__LIB_1__::func_725();
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return 0;
	}
	iVar0 = func_178(Local_47);
	if (MISC::GET_GAME_TIMER() < Local_47.f_1)
	{
		return -1;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_47));
		if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, iVar2, 1, 1))
		{
			ENTITY::_SET_ENTITY_HEALTH(Global_35, 0, iVar2);
			return -1;
		}
		iVar1++;
	}
	if (!Local_47.f_3)
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar20 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_47));
			if (ENTITY::IS_ENTITY_DEAD(iVar20))
			{
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
				{
					case 0:
						iVar21 = 21030;
						break;
					case 1:
						iVar21 = 14284;
						break;
					case 2:
						iVar21 = 65478;
						break;
					case 3:
						iVar21 = 6884;
						break;
					case 4:
						iVar21 = 56200;
						break;
					case 5:
						iVar21 = 0;
						break;
				}
				Var3.f_14 = 1;
				Var3.f_6 = 0;
				Var3.f_4 = 1500;
				Var3.f_5 = 0;
				Var3.f_7 = 1;
				Var3.f_10 = 1;
				Var3.f_11 = 1f;
				Var3.f_1 = { PED::GET_PED_BONE_COORDS(Global_35, iVar21, 0f, 0f, 0f) };
				Var3.f_15 = 1;
				WEAPON::_0x5230D3F6EE56CFE6(iVar20, 0);
				TASK::TASK_SHOOT_WITH_WEAPON(iVar20, &Var3);
				Local_47.f_3 = 1;
			}
			iVar1++;
		}
	}
	return -1;
}

int func_178(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	ITEMSET::_CLEAR_ITEMSET(iParam0);
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	PED::_0x7BE607DAFF382FD2(Global_35, iParam0, 512);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 4, vVar0, 100f, iParam0);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 6, vVar0, 100f, iParam0);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 5, vVar0, 100f, iParam0);
	uVar3 = ITEMSET::GET_ITEMSET_SIZE(iParam0);
	return uVar3;
}

