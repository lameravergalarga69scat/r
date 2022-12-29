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
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	bool bLocal_227 = false;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	bool bLocal_233 = false;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_208 = 1;
	iLocal_236 = 20000;
	iLocal_239 = vScriptParam_0.x;
	iLocal_237 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_238 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_238)
		{
			iLocal_238 = 0;
			__LIB_1__::func_947(iLocal_239, &iLocal_237);
			switch (iLocal_237)
			{
				case 0:
					iLocal_237 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_239);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_239)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_239), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_239));
					iVar1 = __LIB_1__::func_885(iLocal_239);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_240 = (MISC::GET_GAME_TIMER() + iLocal_236);
					iLocal_237 = 2;
					break;
				case 2:
					if (func_11() || iLocal_240 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_239);
						iLocal_240 = (MISC::GET_GAME_TIMER() + iLocal_236);
						iLocal_237 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_239) || iLocal_240 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_239);
						iLocal_240 = (MISC::GET_GAME_TIMER() + iLocal_236);
						iLocal_237 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_239) || iLocal_240 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_239);
						iLocal_240 = (iLocal_236 + MISC::GET_GAME_TIMER());
						iLocal_237 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_239)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_239), 4) && !iLocal_240 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_239) || iLocal_240 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_239, 4);
								iLocal_240 = (iLocal_236 + MISC::GET_GAME_TIMER());
								iLocal_237 = 7;
							}
							Jump @791; //curOff = 459
							if (iLocal_240 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_239);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_765(2057, 0))
								{
									func_24();
								}
								__LIB_0__::func_11();
								func_26();
								func_27(iLocal_239);
								func_28(iLocal_239);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_237 = 8;
							}
							Jump @791; //curOff = 558
							__LIB_6__::func_927(iLocal_239);
							__LIB_0__::func_18();
							iLocal_237 = 9;
							Jump @791; //curOff = 575
							__LIB_1__::func_889(&Global_1898004);
							func_34(iLocal_239, &Global_1898004);
							iLocal_237 = 10;
							Jump @791; //curOff = 600
							__LIB_2__::func_749(iLocal_239);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_239, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_237 = 11;
							Jump @791; //curOff = 670
							if (func_38(iLocal_239))
							{
								iLocal_238 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_239);
							__LIB_1__::func_891(iLocal_239);
							__LIB_0__::func_24(iLocal_239, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_239 /*35*/].f_10);
							if (Global_1888801[iLocal_239 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_239 /*35*/].f_11);
							}
							Jump @791; //curOff = 772
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_239 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_239 /*35*/].f_12);
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
	iLocal_209 = Global_1888801[115 /*35*/].f_4;
	VOLUME::_0xB469CFD9E065EB99(iLocal_209, 28);
	iLocal_211 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5507.549f, -2965.196f, -0.228844f, 0f, 0f, 14.50012f, 5.533408f, 8.440951f, 3.311345f, "Tumbleweed - m_volGunsmith");
	iLocal_213 = VOLUME::_CREATE_VOLUME_BOX(-5508.212f, -2964.63f, -0.4536f, 0f, 0f, 15.48608f, 1.15206f, 1.211619f, 2.44214f);
	iLocal_214 = VOLUME::_CREATE_VOLUME_BOX(-5506.212f, -2964.24f, -0.546059f, 0f, 0f, 15.38209f, 1.208323f, 1.559606f, 2.24757f);
	iLocal_212 = VOLUME::_CREATE_VOLUME_BOX(-5508.861f, -2960.149f, -0.730614f, 0f, 0f, 14.06083f, 5.590748f, 1.871594f, 1.963433f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_211, 10108);
	iLocal_215 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Armadillo - m_volGeneral Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_215, -5486.887f, -2936.958f, -0.631974f, 0f, 0f, 37.50568f, 12.05108f, 6.394965f, 4.543615f);
	VOLUME::_0x39816F6F94F385AD(iLocal_215, -5479.758f, -2933.356f, -0.464321f, 0f, 0f, 37.59521f, 2.825781f, 2.131215f, 1.882721f);
	iLocal_216 = VOLUME::_CREATE_VOLUME_BOX(-5487.416f, -2939.017f, -0.416119f, 0f, 0f, 36.36512f, 1.251111f, 3.269273f, 2.026726f);
	iLocal_218 = VOLUME::_CREATE_VOLUME_BOX(-5485.543f, -2937.639f, -0.416119f, 0f, 0f, 36.36512f, 2.087f, 2.06f, 2.027f);
	iLocal_217 = VOLUME::_CREATE_VOLUME_BOX(-5492.82f, -2941.371f, -0.730614f, 0f, 0f, 127.4349f, 6.522694f, 1.871594f, 1.963433f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_215, 10107);
	iLocal_210 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5514.454f, -2910.941f, 0.196263f, 0f, 0f, 28.00368f, 12.9595f, 18.61485f, 9.427321f, "Tumbleweed - m_volBartender");
	iLocal_223 = VOLUME::_CREATE_VOLUME_BOX(-5507.816f, -2947.645f, -1.491075f, 0f, 0f, -17.45158f, 8.984022f, 7.283852f, 4.458558f);
	iLocal_224 = VOLUME::_CREATE_VOLUME_BOX(-5507.87f, -2947.629f, -1.491075f, 0f, 0f, -17.45158f, 1.750185f, 2.572302f, 2.75889f);
	iLocal_225 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5539.533f, -3039.824f, 2.031336f, 0f, 0f, 3.990272f, 17.4913f, 32.03522f, 11.8878f, "Tumbleweed - m_volHorseShopPen");
	iLocal_222 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5602.326f, -2982.253f, 2.901444f, 0f, 0f, 141.0062f, 3.082703f, 10.21471f, 4.224741f, "Tumbleweed - m_volHomeStable");
	if (__LIB_0__::func_2() == -1)
	{
		iLocal_220 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5519.228f, -3044.427f, -1.508f, 0f, 0f, 0f, 14.36317f, 12.10584f, 4.473f, "Tumbleweed Horse Shop - m_volHorseShop");
		iLocal_221 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5510.71f, -3044.394f, -1.897282f, 0f, 0f, 0f, 4.170004f, 4.757886f, 3.852559f, "Tumbleweed Horse Shop - m_volHorseShopOutsideDoor");
		__LIB_14__::func_344(9, iLocal_221);
		VOLUME::_0xB469CFD9E065EB99(iLocal_220, 10109);
	}
	else
	{
		iLocal_220 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5519.228f, -3044.427f, -1.40419f, 0f, 0f, 0f, 14.36317f, 12.10584f, 4.472662f, "Tumbleweed Horse Shop - m_volHorseShop");
		VOLUME::_0xB469CFD9E065EB99(iLocal_220, 10109);
	}
	iLocal_226 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Tumbleweed - JAIL");
	VOLUME::_0x39816F6F94F385AD(iLocal_226, -5529.713f, -2927.539f, -1.328089f, 0f, 0f, 24.83998f, 6.747131f, 6.870256f, 6.016601f);
	VOLUME::_0x39816F6F94F385AD(iLocal_226, -5534.146f, -2922.72f, -1.771596f, 0f, 0f, 24.83998f, 10.62026f, 7.054735f, 6.016601f);
	VOLUME::_0x3EFABB21E14A6BD1(iLocal_226, 5, 1);
	iLocal_234 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Tumbleweed - m_volGeneralWindowBlocking Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_234, -5493.421f, -2940.41f, 0.004f, 0f, 0f, 126f, 2.009f, 1.864f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_234, -5482.353f, -2931.596f, -0.675f, 0f, 0f, 126f, 3.034f, 1.23f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_234, -5480.939f, -2938.642f, -0.675f, 0f, 0f, -143f, 1.733f, 3.552f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_234, -5487.038f, -2942.457f, -0.675f, 0f, 0f, -143f, 1.5f, 2.219f, 3f);
	iLocal_235 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Tumbleweed - m_volGunsmithWindowBlocking Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_235, -5507.813f, -2960.458f, -1.20497f, 0f, 0f, 15f, 1f, 0.5f, 2.5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_235, -5503.76f, -2966.969f, -0.981304f, 0f, 0f, -74.5f, 1.5f, 0.5f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_235, -5504.707f, -2963.481f, -0.981304f, 0f, 0f, -74.5f, 1.5f, 0.5f, 3f);
	return true;
}

void func_14(int iParam0)
{
	int iVar0[6];
	iParam0 = iParam0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0[0] = joaat("DOOR_TUM_02_JAIL_CELL");
		iVar0[1] = joaat("DOOR_TUM_02_JAIL_CELL");
		iVar0[2] = -1616977847;
		iVar0[3] = -1616977847;
		iVar0[4] = -1310161700;
		iVar0[5] = -1310161700;
		__LIB_14__::func_269(115, &iVar0, 6);
		func_48();
		func_49();
	}
}

bool func_15(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		HUD::_TEXT_DATABASE_REQUEST("SCTDAUD");
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("SCTDAUD"))
		{
			return false;
		}
	}
	return true;
}

void func_24()
{
	vector3 vVar0;
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	__LIB_1__::func_65(31, &vVar0, 1);
	__LIB_1__::func_806(&vVar0, 1, 1);
}

void func_26()
{
	__LIB_9__::func_707(-2077467, 1);
	__LIB_9__::func_707(223504277, 1);
	__LIB_14__::func_273(0, -5514.454f, -2910.941f, 0.196263f, iLocal_210, 115);
}

void func_27(int iParam0)
{
	__LIB_7__::func_855(6, 365, iLocal_211, iParam0, iLocal_213, iLocal_214, 20, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_2__::func_807(6, 1880285656, 0, 0);
	__LIB_4__::func_898(6, iLocal_212);
	__LIB_2__::func_775(6, -5506.172f, -2957.387f, -2.65f, 76.3147f);
	__LIB_7__::func_855(3, 353, iLocal_215, iParam0, iLocal_216, iLocal_218, 12, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_2__::func_807(3, -460561996, 0, 0);
	__LIB_2__::func_807(3, 687453229, 0, 0);
	__LIB_4__::func_898(3, iLocal_217);
	__LIB_2__::func_775(3, -5485.011f, -2930.324f, -2.1296f, 136.731f);
	__LIB_7__::func_855(10, 352, iLocal_223, iParam0, iLocal_224, 0, 460, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_2__::func_782(iParam0);
	VOLUME::_0xB469CFD9E065EB99(iLocal_223, 10117);
	__LIB_7__::func_855(9, 347, iLocal_220, iParam0, 0, 0, 2, -1082130432 /* Float: -1f */, 0, 0);
	__LIB_5__::func_792(9, 1);
	__LIB_5__::func_792(9, 16384);
	__LIB_9__::func_894(9, 1);
	__LIB_2__::func_807(9, joaat("TUM_BARN_INT_DOOR_01"), 1f, 1);
	__LIB_2__::func_807(9, joaat("TUM_BARN_INT_DOOR_02"), -1f, 1);
	__LIB_2__::func_807(9, 1024322021, 0, 0);
	__LIB_2__::func_807(9, 111672606, 0, 0);
}

void func_28(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_2__::func_812(345, iLocal_222, 1);
	__LIB_2__::func_812(346, iLocal_222, 0);
	__LIB_2__::func_812(347, iLocal_225, 1);
	__LIB_2__::func_812(375, iLocal_225, 0);
	__LIB_2__::func_812(373, iLocal_225, 0);
	__LIB_2__::func_812(374, iLocal_225, 0);
}

void func_34(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	__LIB_2__::func_766(uParam1, iLocal_209, 1);
}

bool func_38(int iParam0)
{
	bool bVar0;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_19__::func_55(115);
		func_71();
		func_72();
		__LIB_17__::func_471(94, 372, iLocal_225, 5, &iLocal_208);
		bVar0 = __LIB_2__::func_776();
		if (!bVar0)
		{
			func_75();
		}
		__LIB_14__::func_265(iLocal_234);
		__LIB_14__::func_265(iLocal_235);
	}
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_239, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_239, 4);
		__LIB_0__::func_25(iLocal_239, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_96(iLocal_239);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_239);
		__LIB_2__::func_819(iLocal_239);
		__LIB_2__::func_755(iLocal_239);
		if (!__LIB_2__::func_756(iLocal_239, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_48()
{
	func_105();
}

void func_49()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_219))
	{
		iLocal_219 = VOLUME::_CREATE_VOLUME_BOX(-5514.326f, -2971.64f, 2.676027f, 0f, 0f, 14.88947f, 5.532164f, 5.257469f, 2.883436f);
	}
	__LIB_14__::func_361(16, -5514.267f, -2971.194f, 1.2343f, 0f, iLocal_219);
}

void func_71()
{
	if (!__LIB_0__::func_75(&uLocal_230))
	{
		__LIB_1__::func_148(&uLocal_230);
	}
	if (__LIB_1__::func_313(&uLocal_230, 0.25f))
	{
		if (!PERSCHAR::_0x800DF3FC913355F3(iLocal_228))
		{
			iLocal_228 = __LIB_0__::func_120(348);
			iLocal_229 = 0;
			bLocal_227 = false;
		}
		else if (PERSCHAR::_0xEB98B38CA60742D7(iLocal_228))
		{
			iLocal_229 = 0;
			bLocal_227 = false;
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_229))
		{
			iLocal_229 = PERSCHAR::_0x31C70A716CAE1FEE(iLocal_228);
			bLocal_227 = false;
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_229))
		{
			iLocal_229 = 0;
			bLocal_227 = false;
		}
		else if (!bLocal_227)
		{
			PED::_0xE1B3BE07D3AADDED(iLocal_229, 4, 1);
			bLocal_227 = true;
		}
	}
}

void func_72()
{
	int iVar0;
	int iVar1;
	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	iVar0 = 354;
	iVar1 = __LIB_1__::func_334(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (bLocal_233)
		{
			bLocal_233 = false;
		}
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		if (((!bLocal_233 && !__LIB_2__::func_763(iVar0, 0)) && AUDIO::_0xBE28DB99556FF8D9(iVar1) != 0) && PED::_IS_PED_USING_SCENARIO_HASH(iVar1, joaat("PROP_HUMAN_PIANO")))
		{
			AUDIO::_0x8E901B65206C2D3E(iVar1);
			AUDIO::_0xB93A769B8B726950(iVar1, -1044357807);
			AUDIO::_0xC4CFCE4C656EF480(iVar1);
			bLocal_233 = true;
		}
		else if (bLocal_233 && !PED::_IS_PED_USING_SCENARIO_HASH(iVar1, joaat("PROP_HUMAN_PIANO")))
		{
			bLocal_233 = false;
		}
	}
}

void func_75()
{
	func_170(&Local_117);
}

void func_96(int iParam0)
{
	__LIB_2__::func_759(0.775f, 0.2f, 0.025f, 0f);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_219))
	{
		VOLUME::_DELETE_VOLUME(iLocal_219);
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST("SCTDAUD"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("SCTDAUD"))
		{
			HUD::_TEXT_DATABASE_DELETE("SCTDAUD");
		}
	}
	func_200();
}

void func_105()
{
	var uVar0;
	var uVar6;
	uVar0 = 5;
	__LIB_4__::func_857(&Local_117, 365, &uVar0, 0, 0);
	Local_117[0 /*45*/].f_43 = 34281;
	Local_117[0 /*45*/].f_44 = 34560;
	__LIB_2__::func_811(&(Local_117[0 /*45*/]), 512);
	uVar6 = 5;
	__LIB_4__::func_857(&Local_117, 353, &uVar6, 1, 0);
	Local_117[1 /*45*/].f_43 = 34624;
	Local_117[1 /*45*/].f_44 = 34560;
	__LIB_2__::func_811(&(Local_117[1 /*45*/]), 512);
}

void func_170(var uParam0)
{
	if ((uParam0[iLocal_116 /*45*/])->f_29 == 1)
	{
		if (__LIB_12__::func_472(uParam0[iLocal_116 /*45*/], 1, 1))
		{
			__LIB_11__::func_874(uParam0[iLocal_116 /*45*/]);
		}
	}
	iLocal_116++;
	if (iLocal_116 >= 2)
	{
		iLocal_116 = 0;
	}
}

void func_200()
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
	Global_1935183.f_29 = 4;
}

Vector3 func_207(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_792(uParam0, 4))
	{
		return __LIB_1__::func_344("");
	}
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	iVar1 = 1;
	if (__LIB_17__::func_641(uParam0, 115, iVar1, 2, 4))
	{
		return __LIB_1__::func_344("TWDRG_GUN_MUD1");
	}
	if (__LIB_17__::func_641(uParam0, 115, iVar1, 4, 13))
	{
		return __LIB_1__::func_344("TWDRG_GUN_SEN1");
	}
	if (__LIB_17__::func_639(uParam0, 115, iVar1, 8, 87))
	{
		return __LIB_1__::func_344("TWDRG_GUN_GUN4");
	}
	if (__LIB_14__::func_267(90, 1, 0) && __LIB_17__::func_567(115, iVar1, 16, 1))
	{
		return __LIB_1__::func_344("TWDRG_GUN_SRGEN");
	}
	if (__LIB_14__::func_267(91, 1, 0) && __LIB_17__::func_567(115, iVar1, 32, 1))
	{
		return __LIB_1__::func_344("TWDRG_GUN_SRRGN");
	}
	if (__LIB_7__::func_853(uParam0, iVar1))
	{
		return __LIB_1__::func_344("STDRG_SHOSICK");
	}
	if (uParam0->f_21 < 0)
	{
		return __LIB_1__::func_344("");
	}
	return __LIB_1__::func_344("");
}

char* func_208(int iParam0)
{
	switch (iParam0)
	{
		case 353:
			return "TUM_General_Store";
		case 365:
			return "TUM_Gunsmith";
		default:
			break;
	}
	return "";
}

Vector3 func_210(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_792(uParam0, 4))
	{
		return __LIB_1__::func_344("");
	}
	iVar0 = __LIB_1__::func_334(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return __LIB_1__::func_344("");
	}
	iVar1 = 0;
	if (__LIB_17__::func_641(uParam0, 115, iVar1, 2, 69))
	{
		return __LIB_1__::func_344("TWDRG_GEN_SAD2");
	}
	if (__LIB_17__::func_641(uParam0, 115, iVar1, 4, 71))
	{
		return __LIB_1__::func_344("TWDRG_GEN_SAD4");
	}
	if (__LIB_17__::func_639(uParam0, 115, iVar1, 8, 87))
	{
		return __LIB_1__::func_344("TWDRG_GEN_GUN4");
	}
	if (__LIB_14__::func_267(90, 1, 0) && __LIB_17__::func_567(115, iVar1, 16, 1))
	{
		return __LIB_1__::func_344("TWDRG_GEN_SRGEN");
	}
	if (uParam0->f_21 < 0)
	{
		return __LIB_1__::func_344("");
	}
	return __LIB_1__::func_344("");
}

