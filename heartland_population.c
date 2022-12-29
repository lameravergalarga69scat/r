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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 6;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 6;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 6;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 6;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 4;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 3;
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
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	vector3 vLocal_92 = { 0f, 0f, 0f };
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_75 = -791673850;
	iLocal_76 = joaat("S_VALERIANROOT01X");
	vLocal_78 = { -350.6435f, 288.2812f, 97.46367f };
	fLocal_81 = 7f;
	fLocal_82 = 0f;
	fLocal_83 = 0f;
	fLocal_84 = 100f;
	fLocal_85 = 100f;
	fLocal_86 = 0f;
	iLocal_87 = joaat("UI_NOTE_DUTCH");
	iLocal_88 = joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
	vLocal_92 = { -129.1927f, -68.5704f, 90.6221f };
	func_1();
	func_2();
	func_3();
	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(-128f, 153f, 92.509f, 0f, 0f, 0f, 7.5f, 7.5f, 10f);
	if (__LIB_5__::func_846() != 1)
	{
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1554291097))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1554291097, true);
		}
		PATHFIND::_0xD17672447692478E(iVar0, 0);
	}
	else
	{
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1554291097))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1554291097, false);
		}
		PATHFIND::_0xC1799FAFD2FDF52B(iVar0, 0, 0, 0);
	}
	bVar1 = true;
	while (bVar1)
	{
		if (!__LIB_0__::func_1(Global_40.f_10991.f_37, 8))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(iLocal_75))
			{
				func_6();
			}
		}
		func_7();
		func_8();
		BUILTIN::WAIT(0);
	}
	func_9();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
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
		func_9();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { fLocal_81, fLocal_82, fLocal_83 };
	vVar3 = { fLocal_84, fLocal_85, fLocal_86 };
	FLOCK::_0xF2CCA7B68CFAB2B9(joaat("SPECIES_BIRD_CROW"), 725.8305f, -468.8784f, 149f, vVar0, vVar3, 9.5f, 50f, 1f, 6f);
}

void func_3()
{
	iLocal_95 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1800f, -65f, 58.316f, 0f, 0f, 0f, 50f, 50f, 10f, "m_volAberdeenPigFarm_Restriction");
	__LIB_3__::func_457(iLocal_95, 1);
	iLocal_96 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	__LIB_3__::func_457(iLocal_96, 1);
	iLocal_98 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("HRT_volCornwall_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_98, 557.5f, 585f, 120f, 0f, 0f, -16f, 60f, 100f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_98, 495f, 650f, 120f, 0f, 0f, 0f, 80f, 80f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_98, 582.5f, 695f, 120f, 0f, 0f, 0f, 25f, 25f, 15f);
	if (__LIB_0__::func_181())
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_98, 2238463, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_98, 2238463, 0, 0, -1, -1, 0);
	}
	else
	{
		__LIB_9__::func_266(iLocal_98, 0, 0, 1);
	}
	iLocal_99 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1120f, 432.5f, 94.789f, 0f, 0f, 45f, 150f, 135f, 20f, "m_volCropFarm_Restriction");
	__LIB_3__::func_457(iLocal_99, 1);
	iLocal_100 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(892.5f, 260f, 102.5f, 0f, 0f, 0f, 35f, 35f, 20f, "m_volLarnedSod_Restriction");
	__LIB_3__::func_457(iLocal_100, 1);
	iLocal_101 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-62.5f, -397.5f, 75f, 0f, 0f, 0f, 25f, 25f, 15f, "m_volSouthernShack_Restriction");
	__LIB_9__::func_266(iLocal_101, 0, 0, 1);
	iLocal_102 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-340.7f, -349.1f, 127.9f, 0f, 0f, 0f, 50f, 50f, 50f, "m_volFlatneckStation_Restriction");
	__LIB_3__::func_941(iLocal_102, 1);
	iLocal_103 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volValentine_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -205f, 670f, 115f, 0f, 0f, 0f, 125f, 125f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -330f, 795f, 115f, 0f, 0f, 0f, 125f, 125f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -205f, 820f, 130f, 0f, 0f, -55f, 125f, 50f, 20f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -385f, 655f, 115f, 0f, 0f, 0f, 100f, 100f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -390f, 920f, 115f, 0f, 0f, 0f, 60f, 60f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -250f, 935f, 130f, 0f, 0f, 0f, 70f, 70f, 20f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -330f, 970f, 125f, 0f, 0f, 0f, 60f, 60f, 15f);
	__LIB_6__::func_671(iLocal_103, 1);
	iLocal_105 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(311.33f, 301.2739f, 147.3381f, 0f, 0f, 0f, 25f, 25f, 50f, "m_volGiantRock_Restriction1");
	POPULATION::_0xB56D41A694E42E86(iLocal_105, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_105, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iLocal_105);
	iLocal_106 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(295.4558f, 335.8347f, 144.3733f, 0f, 0f, 0f, 7f, 7f, 5f, "m_volGiantRock_Restriction2");
	POPULATION::_0xB56D41A694E42E86(iLocal_106, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_106, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iLocal_106);
	iLocal_107 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(372.3861f, 149.449f, 144.5227f, 0f, 0f, 27.75f, 37.75f, 44.75f, 21.5f, "m_volGiantRock_Restriction3");
	POPULATION::_0xB56D41A694E42E86(iLocal_107, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_107, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iLocal_107);
	iLocal_104 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1520f, 440f, 92.5f, 0f, 0f, 0f, 20f, 50f, 10f, "m_volER_Trainstation_Restriction");
	__LIB_3__::func_457(iLocal_104, 1);
	iLocal_108 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-838f, 343f, 95.5f, 0f, 0f, 0f, 80f, 50f, 44f, "m_volDownesRanch_Restriction");
	__LIB_9__::func_266(iLocal_108, 0, 0, 1);
	iLocal_109 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1416.5f, 321.5f, 93f, 0f, 0f, -21f, 70f, 80f, 25f, "m_volEmeraldRanch_Restriction");
	__LIB_4__::func_858(iLocal_109, 0, 0, 1);
	iLocal_110 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1185.274f, -101.3631f, 105f, 0f, 0f, 0f, 15f, 10f, 30f, "m_volRuinsNorthOfHorseShop_Restriction");
	__LIB_9__::func_266(iLocal_110, 0, 0, 1);
	iLocal_111 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIsland_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_111, 237.213f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.4307f, 81.38799f, 25.72252f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_111, -401.9616f, -1012.638f, 42.9804f, 0f, 0f, -51.00734f, 240.5335f, 103.688f, 24.89919f);
	VOLUME::_0x39816F6F94F385AD(iLocal_111, 440.3216f, -1462.027f, 55.90892f, 0f, 0f, 13.40226f, 421.2939f, 982.8425f, 99.70844f);
	__LIB_9__::func_421(iLocal_111, 0, 0, 1);
	if (__LIB_0__::func_317() == 1)
	{
		iLocal_112 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volHorseShoeOverLook_Restriction");
		VOLUME::_0xBCE668AAF83608BE(iLocal_112, -118.5499f, -30.44764f, 110.3997f, 0f, 0f, 99f, 54f, 31f, 35f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_112, -140.179f, -28.55973f, 110.3997f, 0f, 0f, -15f, 49f, 38f, 41f);
		__LIB_4__::func_859(iLocal_112, 0, 0, 1);
	}
	iLocal_97 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-435.5f, 498f, 107f, 0f, 0f, -7f, 27f, 17f, 20f, "m_volCastorsPond_Restriction");
	__LIB_4__::func_858(iLocal_97, 0, 0, 1);
	iLocal_113 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSixPointCabin_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_113, -61.78288f, 1236.599f, 171.7316f, 0f, 0f, 30.49994f, 17.57404f, 11.67279f, 13.05081f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_113, -26.60302f, 1223.117f, 175.0363f, 0f, 0f, 0f, 17.60465f, 14.42418f, 5.206519f);
	__LIB_4__::func_859(iLocal_113, 0, 0, 1);
	iLocal_114 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBardsCrossing_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_114, -730.6474f, -548.0654f, 77.02292f, 0f, 0f, 27f, 353.0691f, 8.967957f, 13.35221f);
	VOLUME::_0x39816F6F94F385AD(iLocal_114, -892.4706f, -627.4682f, 77.26994f, 0f, 0f, 18.91964f, 20.99991f, 7.632857f, 11.3815f);
	__LIB_4__::func_859(iLocal_114, 0, 0, 1);
	iLocal_115 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLimpany_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -344.2052f, -155.7421f, 51.92712f, 0f, 0f, -25.599f, 7.007796f, 12.39152f, 9.160034f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -326.2495f, -151.1143f, 51.75295f, 0f, 0f, -40.79212f, 9.133691f, 7.226022f, 8.362908f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -337.7838f, -123.2315f, 49.78259f, 0f, 0f, -30.27581f, 12.47807f, 6.990203f, 9.129834f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -368.2776f, -141.5811f, 49.43251f, 0f, 0f, -25.07936f, 8.474558f, 7.734136f, 6.674875f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -381.1944f, -138.4523f, 48.6927f, 0f, 0f, -26.4314f, 10.54735f, 16.19453f, 11.17168f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -359.6013f, -115.6031f, 48.09516f, 0f, 0f, -36.89244f, 15.66171f, 18.04947f, 13.86367f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -317.6271f, -131.9343f, 51.76871f, 0f, 0f, 0f, 6.531308f, 7.349917f, 8.040896f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -314.7265f, -105.8513f, 50.30021f, 0f, 0f, 33.49742f, 11.55198f, 8.022533f, 6.21626f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -372.8026f, -109.9615f, 47.05131f, 0f, 0f, -34.51117f, 5.588199f, 6.904874f, 7.632836f);
	__LIB_4__::func_858(iLocal_115, 0, 0, 1);
	iLocal_116 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBurnedSettlement_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_116, -355f, -132.5f, 50f, 0f, 0f, -20f, 50f, 30f, 25f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_116, -320f, -115f, 50f, 0f, 0f, 0f, 20f, 20f, 25f);
	__LIB_9__::func_266(iLocal_116, 0, 0, 1);
	iLocal_117 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFishermansShack_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_117, 343.054f, -669.0029f, 42.165f, 0f, 0f, -31.01126f, 11.02041f, 15.73973f, 10.95584f);
	VOLUME::_0x39816F6F94F385AD(iLocal_117, 338.9478f, -681.7498f, 43.02779f, 0f, 0f, -31.24687f, 3.800817f, 10.34941f, 9.244935f);
	__LIB_4__::func_859(iLocal_117, 0, 0, 1);
}

void func_6()
{
	if (__LIB_0__::func_175(vLocal_78, Global_36, 50f, 1))
	{
		switch (iLocal_74)
		{
			case 0:
				if (func_21())
				{
					iLocal_74 = 1;
				}
				break;
			case 1:
				if (func_22())
				{
					iLocal_74 = 2;
				}
				break;
			case 2:
				func_23();
				break;
		}
	}
	else if (iLocal_74 != 0)
	{
		func_24();
	}
}

void func_7()
{
	var uVar0;
	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	uVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("HRT_CRD_TENANT_01"));
	if (!PERSCHAR::_0x800DF3FC913355F3(uVar0))
	{
		return;
	}
	if (PERSCHAR::_0xEB98B38CA60742D7(uVar0))
	{
		if (!__LIB_0__::func_898(-1530132748))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(-389510791, Global_36))
			{
				__LIB_0__::func_803(-1530132748);
			}
		}
	}
	else if (__LIB_0__::func_898(-1530132748))
	{
		if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(-389510791, Global_36))
		{
			__LIB_0__::func_804(-1530132748);
		}
	}
}

void func_8()
{
	__LIB_6__::func_351(&uLocal_89, &uLocal_91, &uLocal_90, vLocal_92, iLocal_87, -1209372002 /* GXTEntry: "Dutch\'s Speech Notes" */, iLocal_88);
}

void func_9()
{
	FLOCK::_0xFB16F08F47B83B4C(joaat("SPECIES_BIRD_CROW"));
	func_24();
}

bool func_21()
{
	STREAMING::REQUEST_MODEL(iLocal_76, false);
	return true;
}

bool func_22()
{
	if (STREAMING::HAS_MODEL_LOADED(iLocal_76))
	{
		iLocal_77 = OBJECT::CREATE_OBJECT(iLocal_76, vLocal_78, false, true, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_76);
		return true;
	}
	return false;
}

void func_23()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
	{
		if (__LIB_0__::func_175(vLocal_78, Global_36, 3f, 1))
		{
			if (__LIB_7__::func_495(joaat("CONSUMABLE_VALERIAN_ROOT")))
			{
				__LIB_0__::func_7(&(Global_40.f_10991.f_37), 8);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_77);
			}
		}
	}
}

void func_24()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
	{
		OBJECT::DELETE_OBJECT(&iLocal_77);
	}
	iLocal_74 = 0;
}

