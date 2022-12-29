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
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	func_3();
	__LIB_9__::func_430(&uLocal_14, 4);
	iVar4 = 0;
	iVar0[0] = VOLUME::_CREATE_VOLUME_CYLINDER(224.4328f, 1906.671f, 203.5702f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	iVar0[1] = VOLUME::_CREATE_VOLUME_CYLINDER(191.766f, 1831.39f, 198.4614f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	iVar0[2] = VOLUME::_CREATE_VOLUME_CYLINDER(129.107f, 1878.372f, 198.1505f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	bVar5 = true;
	while (bVar5)
	{
		__LIB_14__::func_282(&uLocal_14);
		BUILTIN::WAIT(0);
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iVar0[iVar4]))
		{
			VOLUME::_DELETE_VOLUME(iVar0[iVar4]);
		}
		iVar4++;
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
	iLocal_34 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLawSpawn_Blocking Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_34, 876.182f, 1657.932f, 195.6166f, 0f, 0f, 38.34586f, 200f, 18.62544f, 17.04508f);
	VOLUME::_0x39816F6F94F385AD(iLocal_34, 1125.173f, 1763.45f, 195.6166f, 0f, 0f, 23.33992f, 509.4832f, 82.88351f, 17.04508f);
	uLocal_35 = MISC::_0xA2D5A26208421426(iLocal_34);
}

void func_3()
{
	iLocal_26 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-382.5f, 1917.5f, 225f, 0f, 0f, 0f, 65f, 65f, 40f, "m_volChezPorter_Restriction");
	__LIB_3__::func_457(iLocal_26, 1);
	iLocal_27 = func_8(iLocal_27);
	func_9(iLocal_27, 0, 0, 1);
	iLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(465f, 2215f, 250f, 0f, 0f, 0f, 110f, 110f, 50f, "m_volWapiti_Restriction");
	__LIB_3__::func_457(iLocal_28, 1);
	iLocal_29 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(749.1984f, 1823.562f, 245.6922f, 0f, 0f, 45f, 12.5f, 10f, 30f, "m_volChelonianHut_Restriction");
	__LIB_9__::func_266(iLocal_29, 0, 0, 1);
	iLocal_30 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1701.532f, 1509.786f, 147.5539f, 0f, 0f, 8.3768f, 10.10543f, 7.489669f, 5.494266f, "m_volVeteransHomestead_Restriction");
	__LIB_4__::func_858(iLocal_30, 0, 0, 1);
	iLocal_31 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	__LIB_3__::func_457(iLocal_31, 1);
	iLocal_32 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(615.3494f, 2147.322f, 222.6459f, 0f, 0f, -47.56889f, 19.68541f, 7.633937f, 7.877471f, "m_volAquatic_Restriction");
	__LIB_4__::func_934(iLocal_32, 1);
	iLocal_33 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volCotorraSprings_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_33, 176.0662f, 1810.708f, 197.5317f, 0f, 0f, 0f, 8.206045f, 8.641531f, 7.990109f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_33, 144.9528f, 1867.019f, 197.9786f, 0f, 0f, 0f, 6.17023f, 6.166595f, 6.148633f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_33, 234.8607f, 1943.437f, 199.2335f, 0f, 0f, 0f, 13.36673f, 12.17811f, 11.10495f);
	__LIB_4__::func_859(iLocal_33, 0, 0, 0);
	if (__LIB_0__::func_2() == -1)
	{
		func_15();
	}
}

void func_6()
{
	__LIB_9__::func_427(&uLocal_14);
	func_28();
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_9__::func_423();
	}
}

int func_8(int iParam0)
{
	iParam0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RIVER_RESTRICTION_GRZ_EAST");
	VOLUME::_0x39816F6F94F385AD(iParam0, 65.5f, 1660f, 115f, 0f, 0f, 6f, 50f, 215f, 200f);
	VOLUME::_0x39816F6F94F385AD(iParam0, 162.5f, 1645f, 115f, 0f, 0f, -7f, 200f, 225f, 200f);
	VOLUME::_0x39816F6F94F385AD(iParam0, 265f, 1645f, 115f, 0f, 0f, 45f, 200f, 150f, 200f);
	VOLUME::_0x39816F6F94F385AD(iParam0, 387.5f, 1750f, 115f, 0f, 0f, 11f, 200f, 75f, 200f);
	VOLUME::_0x39816F6F94F385AD(iParam0, 410f, 1722.5f, 115f, 0f, 0f, 33f, 150f, 75f, 200f);
	return iParam0;
}

void func_9(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		__LIB_0__::func_516(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_15()
{
	int iVar0;
	iVar0 = 7;
	uLocal_24[0] = VOLUME::_0x00BBF7CEAE8C666A(1989.044f, 1799.889f, 193.131f, 20f, iVar0, 16384);
}

void func_28()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_34))
	{
		MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(uLocal_35);
	}
}

