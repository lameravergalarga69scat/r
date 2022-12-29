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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	char* sLocal_22 = NULL;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	func_3();
	func_4();
	iLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-62.722f, 1237.699f, 171.558f, 0f, 0f, -149.673f, 9.464f, 6.4f, 4.872f, "Six Point - m_volCabin");
	iLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-43.43f, 1218.674f, 178.511f, 0f, 0f, 64.393f, 78.051f, 80.713f, 30.156f, "Six Point - m_volCamp");
	iVar0 = 0;
	__LIB_0__::func_495(&iVar0, 5);
	__LIB_0__::func_495(&iVar0, 0);
	__LIB_0__::func_495(&iVar0, 11);
	iVar1 = 0;
	__LIB_0__::func_495(&iVar1, 5);
	__LIB_0__::func_495(&iVar1, 0);
	__LIB_0__::func_495(&iVar1, 17);
	__LIB_0__::func_495(&iVar1, 28);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_24, 2, iVar0);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_23, 2, iVar1);
	bVar2 = true;
	while (bVar2)
	{
		BUILTIN::WAIT(0);
	}
	func_6();
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
		func_6();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(352.5f, 1492.5f, 160f, 0f, 0f, 0f, 75f, 75f, 50f, "m_volOldFortWallace_Restriction");
	__LIB_3__::func_941(iLocal_14, 1);
	iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBacchusStation_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_15, 576.5f, 1692.5f, 190f, 0f, 0f, -45f, 40f, 22f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_15, 565f, 1713f, 190f, 0f, 0f, 0f, 33f, 33f, 15f);
	__LIB_4__::func_858(iLocal_15, 0, 0, 1);
	iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSixPointCabin_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_16, -61.78288f, 1236.599f, 171.7316f, 0f, 0f, 30.49994f, 17.57404f, 11.67279f, 13.05081f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_16, -26.60302f, 1223.117f, 175.0363f, 0f, 0f, 0f, 17.60465f, 14.42418f, 5.206519f);
	__LIB_4__::func_859(iLocal_16, 0, 0, 1);
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	__LIB_3__::func_457(iLocal_17, 1);
}

void func_3()
{
	if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !__LIB_2__::func_774(52)) && (!__LIB_0__::func_83(__LIB_16__::func_408()) && __LIB_16__::func_408() != 52))
	{
		iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volThreatVolume Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 343.4911f, 1484.906f, 183.6585f, 0f, 0f, 125.4594f, 50.44129f, 27.58693f, 15.20348f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 366.8338f, 1481.555f, 183.3052f, 0f, 0f, 70.84903f, 9.450991f, 11.24788f, 14.86582f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 361.6927f, 1499.326f, 183.0759f, 0f, 0f, 14.50761f, 15.72725f, 35.53953f, 16.71587f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 327.8768f, 1483.835f, 182.8865f, 0f, 0f, -11.76057f, 17.00056f, 10.34268f, 16.34857f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 319.2722f, 1495.286f, 184.5413f, 0f, 0f, -53.96134f, 23.05555f, 18.03384f, 21.16078f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 320.7645f, 1509.291f, 188.6127f, 0f, 0f, -25.21897f, 4.516489f, 7.110216f, 18.25474f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 324.6142f, 1502.853f, 184.9036f, 0f, 0f, -24.95285f, 14.96967f, 13.84794f, 21.22798f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 350.3736f, 1501.781f, 184.2531f, 0f, 0f, 33.49929f, 9.61958f, 30.69061f, 13.84341f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 352.1387f, 1513.729f, 182.7722f, 0f, 0f, 24.7492f, 10.80241f, 11.25904f, 15.89185f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 355.6973f, 1518.419f, 184.7034f, 0f, 0f, 0f, 1.984145f, 5.500231f, 12.25786f);
		VOLUME::_0x39816F6F94F385AD(iLocal_18, 357.9312f, 1517.985f, 184.7034f, 0f, 0f, -16.95034f, 4.391377f, 5.500231f, 12.25786f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, 362.5482f, 1516.343f, 182.8423f, 0f, 0f, 0f, 3.488632f, 3.541783f, 9.602388f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, 366.5602f, 1473.809f, 182.5569f, 0f, 0f, 0f, 4f, 4f, 7.516581f);
		iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volRestrictedVolume Agg");
		VOLUME::_0xBCE668AAF83608BE(iLocal_20, 345.1969f, 1487.955f, 182.5569f, 0f, 0f, 0f, 47.3f, 47.3f, 13.83329f);
		VOLUME::_0x6E0D3C3F828DA773(iLocal_20, iLocal_18);
		iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volWarningVolume Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_21, iLocal_20);
		VOLUME::_0xBCE668AAF83608BE(iLocal_21, 345.1969f, 1487.955f, 182.5569f, 0f, 0f, 0f, 63.65347f, 68.76788f, 13.83329f);
		iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volRegistrationVolume Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_19, iLocal_21);
		sLocal_22 = "OLD_FORT_WALLACE";
		LAW::_CREATE_GUARD_ZONE(sLocal_22);
		LAW::_0x8C598A930F471938(sLocal_22, iLocal_19);
		LAW::_0xA1B0E6301E2E02A6(sLocal_22, iLocal_18);
		LAW::_0x35815F372D43E1E5(sLocal_22, iLocal_20);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_22, iLocal_21);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_22, 346.9555f, 1488.217f, 182.0683f);
		LAW::_0xA8A74AA79FB67159(sLocal_22, iLocal_18);
	}
}

void func_4()
{
	__LIB_3__::func_123(160425541, 1);
	__LIB_3__::func_123(-1127035680, 1);
}

void func_6()
{
	COMPANION::_0x7274F84B1501B523(iLocal_24);
	COMPANION::_0x7274F84B1501B523(iLocal_23);
	LAW::_REMOVE_GUARD_ZONE(sLocal_22);
	__LIB_0__::func_172(iLocal_18);
	__LIB_0__::func_172(iLocal_20);
	__LIB_0__::func_172(iLocal_19);
	__LIB_0__::func_172(iLocal_21);
}

