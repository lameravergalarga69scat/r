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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24[1] = { 0 };
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_26 = 7f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	fLocal_29 = 100f;
	fLocal_30 = 100f;
	fLocal_31 = 0f;
	func_1();
	func_2();
	func_3();
	__LIB_9__::func_430(&uLocal_14, 3);
	if (__LIB_0__::func_2() != -1)
	{
	}
	else
	{
		PERSCHAR::_0x187D65F3AEC5D679(joaat("GLO_WILDERNESS_TRAPPER"), "BigValley/BGV_Trapper_1");
		if (PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER"))))
		{
			PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER")));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		__LIB_14__::func_282(&uLocal_14);
		func_7();
		BUILTIN::WAIT(0);
	}
	func_8();
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
		func_8();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { fLocal_26, fLocal_27, fLocal_28 };
	vVar3 = { fLocal_29, fLocal_30, fLocal_31 };
	FLOCK::_0xF2CCA7B68CFAB2B9(joaat("SPECIES_BIRD_CROW"), -1927.953f, 412.0278f, 180f, vVar0, vVar3, 9.5f, 50f, 1f, 6f);
}

void func_3()
{
	iLocal_32 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFortRiggsRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_32, -1560f, -935f, 85f, 0f, 0f, 0f, 50f, 55f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_32, -1567.5f, -907.5f, 85f, 0f, 0f, 40f, 50f, 40f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_32, -1605f, -882.5f, 85f, 0f, 0f, 0f, 50f, 30f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_32, -1577f, -885.5f, 85f, 0f, 0f, -25.5f, 21f, 30f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_32, -1602.5f, -917.5f, 85f, 0f, 0f, 0f, 35f, 40f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_32, -1592.5f, -935.5f, 85f, 0f, 0f, 55f, 35f, 43f, 20f);
	__LIB_4__::func_858(iLocal_32, 0, 0, 1);
	iLocal_33 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2212.354f, 708.9626f, 124.4049f, 0f, 0f, 11.49984f, 68.16475f, 52.09315f, 21.00951f, "m_volHangingDogRanchRestriction");
	__LIB_4__::func_858(iLocal_33, 0, 0, 1);
	iLocal_34 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-865f, -760f, 75f, 0f, 0f, 0f, 60f, 60f, 30f, "m_volLoneMuleSteadRestriction");
	__LIB_4__::func_858(iLocal_34, 0, 0, 1);
	iLocal_35 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1898f, -238.5f, 188f, 0f, 0f, 16.5f, 14f, 59f, 24.5f, "m_volMountainRiverRestriction");
	__LIB_4__::func_858(iLocal_35, 0, 0, 1);
	iLocal_36 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1897.5f, 1370f, 215f, 0f, 0f, 0f, 75f, 75f, 25f, "m_volNorthernMiningTownRestriction");
	__LIB_4__::func_858(iLocal_36, 0, 0, 1);
	iLocal_37 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-617f, -40.2f, 80f, 0f, 0f, 0f, 43.7f, 43.7f, 13f, "m_volPaintedSkyRestriction");
	__LIB_4__::func_858(iLocal_37, 0, 0, 1);
	iLocal_38 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1825f, 655f, 120f, 0f, 0f, 0f, 45f, 45f, 20f, "m_volWatsonsCabinRestriction");
	__LIB_4__::func_858(iLocal_38, 0, 0, 1);
	iLocal_39 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1554f, 257.4f, 116f, 0f, 0f, 14f, 45f, 45f, 25f, "m_volShepherdsRiseRestriction");
	__LIB_4__::func_858(iLocal_39, 0, 0, 1);
	iLocal_40 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStrawberryRestriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_40, -1820f, -365f, 170f, 0f, 0f, 0f, 80f, 80f, 50f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_40, -1765f, -420f, 170f, 0f, 0f, 0f, 80f, 80f, 50f);
	__LIB_6__::func_671(iLocal_40, 1);
	iLocal_41 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1813.34f, -580.26f, 150f, 0f, 0f, 65f, 52f, 31f, 25f, "m_volStrawberryHorseShopRestriction");
	__LIB_6__::func_671(iLocal_41, 1);
	if (__LIB_0__::func_181())
	{
		iLocal_42 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volPronghornRanchRestriction");
		VOLUME::_0xBCE668AAF83608BE(iLocal_42, -2530.598f, 340.663f, 153f, 0f, 0f, 0f, 22f, 22f, 15f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_42, -2530.057f, 471.4158f, 153f, 0f, 0f, 0f, 30f, 30f, 15f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_42, -2590.521f, 470.2267f, 153f, 0f, 0f, 0f, 30f, 30f, 15f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_42, -2572.795f, 343.0885f, 153f, 0f, 0f, 0f, 31f, 31f, 15f);
		VOLUME::_0x39816F6F94F385AD(iLocal_42, -2541.964f, 408.2656f, 153f, 0f, 0f, -3.75f, 75f, 132f, 30f);
		VOLUME::_0x39816F6F94F385AD(iLocal_42, -2574.994f, 411.635f, 153f, 0f, 0f, 7.5f, 75f, 128f, 30f);
		VOLUME::_0x39816F6F94F385AD(iLocal_42, -2555.338f, 340.0247f, 153f, 0f, 0f, 9.25f, 43f, 50f, 30f);
		VOLUME::_0x39816F6F94F385AD(iLocal_42, -2559.616f, 476.0391f, 153f, 0f, 0f, 1.5f, 61f, 50f, 30f);
		__LIB_4__::func_858(iLocal_42, 0, 0, 1);
	}
	iLocal_43 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1301.288f, 403.2579f, 102.4782f, 0f, 0f, -27f, 15f, 25f, 15f, "m_volWallaceStationRestriction");
	__LIB_4__::func_858(iLocal_43, 0, 0, 1);
	iLocal_44 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIslandRestriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_44, 237.213f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.4307f, 81.38799f, 25.72252f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_44, -401.9616f, -1012.638f, 42.9804f, 0f, 0f, -51.00734f, 240.5335f, 103.688f, 24.89919f);
	VOLUME::_0x39816F6F94F385AD(iLocal_44, 440.3216f, -1462.027f, 55.90892f, 0f, 0f, 13.40226f, 421.2939f, 982.8425f, 99.70844f);
	__LIB_9__::func_421(iLocal_44, 0, 0, 1);
	iLocal_45 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2172.987f, -253.5375f, 195f, 0f, 0f, -6f, 11f, 15f, 10f, "m_volRockCarvingsRestriction");
	__LIB_4__::func_858(iLocal_45, 0, 0, 1);
	iLocal_46 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBardsCrossingRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_46, -730.6474f, -548.0654f, 77.02292f, 0f, 0f, 27f, 353.0691f, 8.967957f, 13.35221f);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, -892.4706f, -627.4682f, 77.26994f, 0f, 0f, 18.91964f, 20.99991f, 7.632857f, 11.3815f);
	__LIB_4__::func_859(iLocal_46, 0, 0, 1);
	if (__LIB_0__::func_2() == -1)
	{
		func_14();
	}
}

void func_7()
{
	var uVar0;
	var uVar1;
	var uVar2;
	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	if (__LIB_14__::func_437(8))
	{
		uVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BGV_PAI_RANCHHAND_01"));
		uVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("PAI_RANCHHAND_02"));
		if (!PERSCHAR::_0x800DF3FC913355F3(uVar0) || !PERSCHAR::_0x800DF3FC913355F3(uVar1))
		{
			return;
		}
		if (PERSCHAR::_0xEB98B38CA60742D7(uVar0) && PERSCHAR::_0xEB98B38CA60742D7(uVar1))
		{
			if (!__LIB_0__::func_898(976539083))
			{
				if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(71064384, Global_36))
				{
					__LIB_0__::func_803(976539083);
				}
			}
		}
		else if (__LIB_0__::func_898(976539083))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(71064384, Global_36))
			{
				__LIB_0__::func_804(976539083);
			}
		}
	}
	else
	{
		uVar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("PAI_RANCHHAND_02"));
		if (!PERSCHAR::_0x800DF3FC913355F3(uVar2))
		{
			return;
		}
		if (PERSCHAR::_0xEB98B38CA60742D7(uVar2))
		{
			if (!__LIB_0__::func_898(976539083))
			{
				if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(71064384, Global_36))
				{
					__LIB_0__::func_803(976539083);
				}
			}
		}
		else if (__LIB_0__::func_898(976539083))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(71064384, Global_36))
			{
				__LIB_0__::func_804(976539083);
			}
		}
	}
}

void func_8()
{
	__LIB_9__::func_427(&uLocal_14);
	FLOCK::_0xFB16F08F47B83B4C(joaat("SPECIES_BIRD_CROW"));
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_9__::func_423();
	}
}

void func_14()
{
	int iVar0;
	iVar0 = 7;
	uLocal_24[0] = VOLUME::_0x00BBF7CEAE8C666A(-771.731f, -7.501f, 75.411f, 8f, iVar0, 16384);
}

