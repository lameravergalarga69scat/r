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
	var uLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_219 = 20000;
	iLocal_222 = vScriptParam_0.x;
	iLocal_220 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_221 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_221)
		{
			iLocal_221 = 0;
			__LIB_1__::func_947(iLocal_222, &iLocal_220);
			switch (iLocal_220)
			{
				case 0:
					iLocal_220 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_222);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_222)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_222), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_222));
					iVar1 = __LIB_1__::func_885(iLocal_222);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_223 = (MISC::GET_GAME_TIMER() + iLocal_219);
					iLocal_220 = 2;
					break;
				case 2:
					if (func_11() || iLocal_223 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_222);
						iLocal_223 = (MISC::GET_GAME_TIMER() + iLocal_219);
						iLocal_220 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_222) || iLocal_223 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_222);
						iLocal_223 = (MISC::GET_GAME_TIMER() + iLocal_219);
						iLocal_220 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_222) || iLocal_223 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_222);
						iLocal_223 = (iLocal_219 + MISC::GET_GAME_TIMER());
						iLocal_220 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_222)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_222), 4) && !iLocal_223 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_222) || iLocal_223 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_222, 4);
								iLocal_223 = (iLocal_219 + MISC::GET_GAME_TIMER());
								iLocal_220 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_223 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_222);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									func_24();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								func_27(iLocal_222);
								func_28(iLocal_222);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_220 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_6__::func_927(iLocal_222);
							__LIB_0__::func_18();
							iLocal_220 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							func_34(iLocal_222, &Global_1898004);
							iLocal_220 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_222);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_222, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_220 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_222))
							{
								iLocal_221 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_222);
							__LIB_1__::func_891(iLocal_222);
							__LIB_0__::func_24(iLocal_222, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_222 /*35*/].f_10);
							if (Global_1888801[iLocal_222 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_222 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_222 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_222 /*35*/].f_12);
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
	iLocal_208 = Global_1888801[69 /*35*/].f_4;
	VOLUME::_0xB469CFD9E065EB99(iLocal_208, 17);
	iLocal_211 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Emerald - m_volPostOfficeOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_211, 1522f, 442.664f, 91.328f, 0f, 0f, 89.95493f, 5.041f, 4.081f, 3.9f);
	VOLUME::_0x39816F6F94F385AD(iLocal_211, 1521.951f, 438.992f, 91.328f, 0f, 0f, 89.95493f, 2.586f, 2.534f, 3.9f);
	VOLUME::_0x39816F6F94F385AD(iLocal_211, 1525.561f, 442.571f, 91.328f, 0f, 0f, 89.95493f, 2.417f, 2.096f, 3.9f);
	iLocal_213 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Emerald - m_volPostOfficeOfflimits");
	VOLUME::_0x39816F6F94F385AD(iLocal_213, 1522.286f, 442.6286f, 91.09468f, 0f, 0f, 0.127711f, 3.924281f, 4.586129f, 2.884516f);
	VOLUME::_0x39816F6F94F385AD(iLocal_213, 1524.154f, 443.6188f, 91.33035f, 0f, 0f, -40.52857f, 0.901248f, 0.812041f, 3.364722f);
	VOLUME::_0x39816F6F94F385AD(iLocal_213, 1524.148f, 441.6273f, 91.32803f, 0f, 0f, 41.59158f, 0.901248f, 0.812041f, 3.361498f);
	VOLUME::_0x39816F6F94F385AD(iLocal_213, 1524.171f, 442.5686f, 91.33483f, 0f, 0f, 89.87004f, 2.182719f, 0.812041f, 3.355471f);
	iLocal_212 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Emerald - m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_212, 1521.928f, 439.418f, 91.598f, 0f, 0f, 89.87004f, 1.421f, 1.98f, 3.9f);
	VOLUME::_0x39816F6F94F385AD(iLocal_212, 1525.299f, 442.591f, 91.598f, 0f, 0f, 0.50203f, 1.421f, 1.902f, 3.9f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_211, 10052);
	iLocal_214 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1416.919f, 275.628f, 89.84f, 0f, 0f, 13.744f, 4.796f, 10.102f, 3.23f, "Emerald - Fence Shop Volume");
	VOLUME::_0xB469CFD9E065EB99(iLocal_214, 10050);
	iLocal_215 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1407.474f, 273.397f, 90f, 0f, 0f, 16f, 14f, 11f, 5f, "Emerald - Fence Barn");
	iLocal_216 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1412.049f, 265.164f, 90f, 0f, 0f, 16f, 9.5f, 7.5f, 5f, "Emerald - Fence Move Wagon");
	iLocal_217 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Emerald - m_volHorsePen Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_217, 1392.317f, 341.5652f, 89.24782f, 0f, 0f, 12.46095f, 34.19419f, 40.64669f, 5.552397f);
	VOLUME::_0x39816F6F94F385AD(iLocal_217, 1406.395f, 342.4568f, 89.58327f, 0f, 0f, 39.45417f, 18.04731f, 26.06224f, 4.902727f);
	VOLUME::_0x39816F6F94F385AD(iLocal_217, 1416.681f, 332.729f, 89.86327f, 0f, 0f, 85.96169f, 12.0553f, 10.04752f, 5.028452f);
	func_46();
	return true;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
	__LIB_14__::func_358(2);
	TASK::_0x6C269F673C47031E(-736104133);
}

bool func_15(int iParam0)
{
	if (!TASK::_0xF97F462779B31786(-736104133))
	{
		return false;
	}
	if (!__LIB_17__::func_603("EMRHAU"))
	{
		return false;
	}
	if (!__LIB_17__::func_603("SHOWFAU"))
	{
		return false;
	}
	if (__LIB_0__::func_2() == -1)
	{
		func_49();
	}
	return true;
}

void func_24()
{
	vector3 vVar0;
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	__LIB_1__::func_225(1);
	__LIB_1__::func_65(9, &vVar0, 1);
	__LIB_1__::func_806(&vVar0, 1, 1);
}

void func_27(int iParam0)
{
	__LIB_7__::func_855(2, 590, iLocal_211, iParam0, iLocal_212, iLocal_213, 491520, (12.5f * 2f), 0, 0);
	__LIB_2__::func_807(2, joaat("DOOR_EME_TRAINSTATION_1"), 0, 0);
	if (func_59())
	{
		PERSCHAR::_0x187D65F3AEC5D679(joaat("EMR_SON1"), "EmeraldRanch/Emr_Son1");
		__LIB_7__::func_855(4, 598, iLocal_214, iParam0, iLocal_214, 0, 44, -1082130432 /* Float: -1f */, 0, 0);
	}
	__LIB_3__::func_123(220516644, 1);
	__LIB_3__::func_123(-336949584, 1);
	__LIB_3__::func_123(-1304772442, 1);
	__LIB_3__::func_123(-1924401463, 1);
	__LIB_3__::func_123(-308659358, 1);
	__LIB_3__::func_123(-66987983, 1);
}

void func_28(int iParam0)
{
	iParam0 = iParam0;
	__LIB_2__::func_812(598, iLocal_214, 1);
	__LIB_2__::func_812(590, iLocal_211, 1);
	__LIB_2__::func_812(589, iLocal_217, 1);
	__LIB_2__::func_812(594, iLocal_217, 0);
	__LIB_2__::func_812(595, iLocal_217, 0);
	__LIB_2__::func_812(596, iLocal_217, 0);
	__LIB_2__::func_812(597, iLocal_217, 0);
	__LIB_2__::func_812(593, iLocal_217, 0);
	__LIB_2__::func_812(591, iLocal_217, 0);
	__LIB_2__::func_812(592, iLocal_217, 0);
}

void func_34(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	__LIB_2__::func_766(uParam1, iLocal_208, 1);
	__LIB_2__::func_766(uParam1, iLocal_214, 2);
	__LIB_2__::func_766(uParam1, iLocal_211, 10);
}

bool func_38(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		func_66();
		func_67(iLocal_215, &uLocal_218);
		if (!__LIB_2__::func_776())
		{
			func_69(&Local_117);
		}
	}
	return true;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_222, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_222, 4);
		__LIB_0__::func_25(iLocal_222, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_89(iLocal_222);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_222);
		__LIB_2__::func_819(iLocal_222);
		__LIB_2__::func_755(iLocal_222);
		if (!__LIB_2__::func_756(iLocal_222, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_46()
{
	int iVar0;
	int iVar1;
	iLocal_209 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1447.295f, 374.5836f, 90.79878f, 0f, 0f, 90.25769f, 14.08716f, 11.61195f, 11.1284f, "Emerald - m_volSaloon");
	iLocal_210 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1438.955f, 374.4243f, 90.49152f, 0f, 0f, 90.25769f, 15.6469f, 8.493558f, 6.273991f, "Emerald - volMuster");
	iVar0 = 0;
	__LIB_0__::func_495(&iVar0, 5);
	__LIB_0__::func_495(&iVar0, 0);
	__LIB_0__::func_495(&iVar0, 6);
	iVar1 = 0;
	__LIB_0__::func_495(&iVar1, 4);
	__LIB_0__::func_495(&iVar1, 5);
	__LIB_0__::func_495(&iVar1, 0);
	__LIB_0__::func_495(&iVar1, 15);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_209, 2, iVar0);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_210, 2, iVar1);
}

void func_49()
{
	func_98();
}

bool func_59()
{
	if ((((((__LIB_5__::func_353(92) || __LIB_1__::func_200(92)) || __LIB_7__::func_852(92)) || __LIB_5__::func_353(94)) || __LIB_1__::func_200(94)) || __LIB_7__::func_852(94)) || !__LIB_1__::func_187(94))
	{
		return false;
	}
	return true;
}

void func_66()
{
	bool bVar0;
	if (!__LIB_10__::func_720(0))
	{
		return;
	}
	bVar0 = __LIB_3__::func_332(__LIB_7__::func_849(), 1) < 65f;
	if (bVar0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			if (!__LIB_7__::func_850(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(Global_35, false))))
			{
				if (Global_1415412.f_2 == 0)
				{
					Global_1415412.f_2 = __LIB_0__::func_45("TF_WAGON_FENCE_INVALID_WAGON", 10000, 0, 0, 0, 1);
				}
			}
		}
	}
	else if (Global_1415412.f_2 != 0)
	{
		UIFEED::_0x2F901291EF177B02(Global_1415412.f_2, 1);
		Global_1415412.f_2 = 0;
	}
}

void func_67(int iParam0, var uParam1)
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1415412.f_1, false))
	{
		if (__LIB_1__::func_205(Global_35, iParam0, 1, 0))
		{
			if (!*uParam1)
			{
				*uParam1 = 1;
				__LIB_1__::func_948(-308659358, 0, 0, 0, 0, 1f, 0, 0);
				__LIB_1__::func_948(-66987983, 0, 0, 0, 0, 1f, 0, 0);
			}
		}
		else if (*uParam1)
		{
			*uParam1 = 0;
			__LIB_1__::func_948(-308659358, 1, 0, 0, 0, 1f, 0, 0);
			__LIB_1__::func_948(-66987983, 1, 0, 0, 0, 1f, 0, 0);
		}
	}
}

void func_69(var uParam0)
{
	func_155(uParam0);
}

void func_89(int iParam0)
{
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
	func_184(iLocal_216, 1413.48f, 260.52f, 90.03f, -130f);
	__LIB_9__::func_320(2);
	func_186();
	__LIB_14__::func_349(2);
	__LIB_11__::func_123("EMRHAU");
	__LIB_11__::func_123("SHOWFAU");
	TASK::_0x9667CCE29BFA0780(-736104133);
	iParam0 = iParam0;
}

void func_98()
{
	var uVar0;
	var uVar6;
	uVar0 = 5;
	__LIB_4__::func_857(&Local_117, 598, &uVar0, 0, 0);
	Local_117[0 /*45*/].f_43 = 32689;
	Local_117[0 /*45*/].f_44 = 32904;
	__LIB_2__::func_811(&(Local_117[0 /*45*/]), 512);
	uVar6 = 5;
	__LIB_4__::func_857(&Local_117, 590, &uVar6, 1, 0);
	Local_117[1 /*45*/].f_43 = 32968;
	Local_117[1 /*45*/].f_44 = 32904;
	__LIB_2__::func_811(&(Local_117[1 /*45*/]), 512);
}

void func_155(var uParam0)
{
	if ((uParam0[iLocal_116 /*45*/])->f_29 == 1)
	{
		if (__LIB_12__::func_472(uParam0[iLocal_116 /*45*/], 1, 1))
		{
			__LIB_11__::func_874(uParam0[iLocal_116 /*45*/]);
			__LIB_2__::func_802(uParam0[iLocal_116 /*45*/], 1024);
		}
	}
	iLocal_116++;
	if (iLocal_116 >= 2)
	{
		iLocal_116 = 0;
		return;
	}
}

void func_184(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar2 = ENTITY::_0x886171A12F400B89(iParam0, iVar0, 2);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0);
		if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar3))
		{
			iVar4 = MISC::_GET_VEHICLE_FROM_INDEXED_ITEM(iVar3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				func_263(iVar4, vParam1, fParam4, 2, 1073741824 /* Float: 2f */);
				vParam1.x = (vParam1.x + 5f);
			}
		}
		iVar1++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_186()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_214))
	{
		VOLUME::_0x998202B206872672(iLocal_214);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_214);
		VOLUME::_DELETE_VOLUME(iLocal_214);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_211))
	{
		VOLUME::_0x998202B206872672(iLocal_211);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_211);
		VOLUME::_DELETE_VOLUME(iLocal_211);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_217))
	{
		VOLUME::_0x998202B206872672(iLocal_217);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_217);
		VOLUME::_DELETE_VOLUME(iLocal_217);
	}
}

Vector3 func_200(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	if (func_275(4))
	{
		return __LIB_1__::func_344("");
	}
	if (__LIB_0__::func_113())
	{
		if (!__LIB_4__::func_848(69, 0, 4))
		{
			if (__LIB_1__::func_187(94))
			{
				uParam0->f_21 = -1;
				__LIB_4__::func_849(69, 0, 4);
				if (!__LIB_9__::func_748())
				{
					return __LIB_1__::func_344("SHOWF_CRW_ALIVE");
				}
				else
				{
					return __LIB_1__::func_344("SHOWF_CRW_DEAD");
				}
			}
		}
		if (__LIB_7__::func_853(uParam0, 0))
		{
			return __LIB_1__::func_344("SHOWF_SMSSICK");
		}
	}
	else if (!__LIB_4__::func_848(69, 0, 8))
	{
		uParam0->f_21 = -1;
		__LIB_4__::func_849(69, 0, 8);
		return __LIB_1__::func_344("SHOWF_SMS_JOHN");
	}
	return __LIB_1__::func_344("");
}

char* func_201(int iParam0)
{
	switch (iParam0)
	{
		case 598:
			return "EMR_Son1";
		case 590:
			return "0832_TRAINWORKER";
		default:
			break;
	}
	return "";
}

Vector3 func_203(var uParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	if (__LIB_7__::func_853(uParam0, 1))
	{
		sVar1 = __LIB_0__::func_67(Global_1393529.f_288[1 /*8*/]);
		iVar2 = MISC::GET_HASH_KEY(sVar1);
		switch (iVar2)
		{
			case joaat("0832_S_M_M_TRAINSTATIONWORKER_01_WHITE_01"):
				uParam0->f_37 = "0832_TRAINWORKER";
				return __LIB_1__::func_344("EMRH_TSW3SICK");
			case joaat("0834_S_M_M_TRAINSTATIONWORKER_01_WHITE_03"):
				uParam0->f_37 = "0834_TRAINWORKER";
				return __LIB_1__::func_344("EMRH_TSW1SICK");
			default:
				break;
		}
	}
	return __LIB_1__::func_344("");
}

void func_263(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_263(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_263(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_275(int iParam0)
{
	return __LIB_0__::func_1(uLocal_14, iParam0);
}

