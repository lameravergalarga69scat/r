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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = -1;
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
	var uLocal_40 = -1;
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
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_59 = 20000;
	iLocal_62 = vScriptParam_0.x;
	iLocal_60 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_61 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_61)
		{
			iLocal_61 = 0;
			__LIB_1__::func_947(iLocal_62, &iLocal_60);
			switch (iLocal_60)
			{
				case 0:
					iLocal_60 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_62);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_62)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_62), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_62));
					iVar1 = __LIB_1__::func_885(iLocal_62);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_63 = (MISC::GET_GAME_TIMER() + iLocal_59);
					iLocal_60 = 2;
					break;
				case 2:
					if (func_11() || iLocal_63 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_62);
						iLocal_63 = (MISC::GET_GAME_TIMER() + iLocal_59);
						iLocal_60 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_62) || iLocal_63 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_62);
						iLocal_63 = (MISC::GET_GAME_TIMER() + iLocal_59);
						iLocal_60 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_62) || iLocal_63 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_62);
						iLocal_63 = (iLocal_59 + MISC::GET_GAME_TIMER());
						iLocal_60 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_62)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_62), 4) && !iLocal_63 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_62) || iLocal_63 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_62, 4);
								iLocal_63 = (iLocal_59 + MISC::GET_GAME_TIMER());
								iLocal_60 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_63 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_62);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_765(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_62);
								__LIB_1__::func_886(iLocal_62);
								__LIB_0__::func_11();
								func_30();
								iLocal_60 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_62);
							__LIB_0__::func_18();
							iLocal_60 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_5__::func_252(iLocal_62, &Global_1898004);
							iLocal_60 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_62);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_62, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_60 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_62))
							{
								iLocal_61 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_62);
							__LIB_1__::func_891(iLocal_62);
							__LIB_0__::func_24(iLocal_62, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_62 /*35*/].f_10);
							if (Global_1888801[iLocal_62 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_62 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_62 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_62 /*35*/].f_12);
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
	iLocal_14 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Dairy Farm - m_volTown");
	VOLUME::_0xBCE668AAF83608BE(iLocal_14, 1446.658f, -888.688f, 61.14607f, 0f, 0f, -30.46523f, 38.831f, 28.399f, 35.021f);
	VOLUME::_0x39816F6F94F385AD(iLocal_14, 1407.375f, -859.71f, 59.085f, 0f, 0f, -90.621f, 63.166f, 105.945f, 86.732f);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Dairy Farm - m_volThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1372.365f, -874.1071f, 60.63414f, 0f, 0f, 105.3542f, 13.90285f, 14.67721f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1379.527f, -839.9418f, 70.09288f, 0f, 0f, 28.55685f, 26.50747f, 16.5324f, 20.06959f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1389.031f, -831.3408f, 67.95767f, 0f, 0f, 17.35302f, 5.587527f, 9.447437f, 11.73771f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1366.106f, -845.9993f, 67.95767f, 0f, 0f, 17.35302f, 4.930151f, 14.78831f, 11.73771f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 1368.879f, -851.3331f, 70.96919f, 0f, 0f, 0f, 3.971671f, 2.768736f, 7.919377f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1448.137f, -909.5335f, 58.70924f, 0f, 0f, 52.91796f, 9.811359f, 48.19019f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1464.168f, -883.314f, 59.08516f, 0f, 0f, 106.2223f, 38.17617f, 16.57248f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1451.656f, -880.889f, 59.08516f, 0f, 0f, 0f, 30.79945f, 37.44294f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1459.521f, -904.4871f, 58.70924f, 0f, 0f, 75.93813f, 23.5689f, 29.93386f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1414.417f, -868.4174f, 60.63414f, 0f, 0f, -160.2662f, 13.42301f, 10.60738f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1406.751f, -874.8239f, 60.63414f, 0f, 0f, 100.2132f, 11.28151f, 7.901964f, 37.7322f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 1427.325f, -884.8317f, 49.45563f, 0f, 0f, 1.967795f, 16.6387f, 14.40915f, 35.02085f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 1426.821f, -870.1688f, 49.45563f, 0f, 0f, 1.967794f, 16.6387f, 8.68586f, 35.02085f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1446.194f, -836.771f, 59.08516f, 0f, 0f, -74.26128f, 27.16599f, 24.853f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1428.484f, -833.5745f, 59.08516f, 0f, 0f, -90.62106f, 27.16599f, 39.94446f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1450.635f, -849.8392f, 59.08516f, 0f, 0f, -87.62164f, 4.481297f, 24.853f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1423.217f, -846.8712f, 59.08516f, 0f, 0f, -90.62106f, 10.00643f, 39.94446f, 37.7322f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 1408.666f, -831.0827f, 49.45563f, 0f, 0f, 1.967795f, 9.140027f, 9.551268f, 35.02085f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 1405.983f, -843.9208f, 70.19928f, 0f, 0f, 0f, 5.74873f, 11.05348f, 20.80677f);
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Dairy Farm - m_volRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_16, iLocal_17);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 1374.823f, -866.7698f, 49.45563f, 0f, 0f, -89.62331f, 28.03277f, 26.98123f, 35.02085f);
		iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Dairy Farm - m_volWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_15, iLocal_16);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 1445.876f, -840.8851f, 61.14609f, 0f, 0f, -94.3453f, 25.51381f, 23.81601f, 17.87893f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 1461.857f, -868.7903f, 61.14607f, 0f, 0f, -82.23228f, 39.60072f, 15.04517f, 35.021f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 1458.823f, -903.0386f, 61.14607f, 0f, 0f, -94.3453f, 29.6741f, 23.81601f, 35.021f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 1410.49f, -862.8301f, 61.14607f, 0f, 0f, -84.98452f, 45.42525f, 64.49104f, 35.021f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 1446.658f, -888.688f, 61.14607f, 0f, 0f, -30.46523f, 38.831f, 28.399f, 35.021f);
		sLocal_18 = "DAIRY_FARM";
		LAW::_CREATE_GUARD_ZONE(sLocal_18);
		LAW::_0x8C598A930F471938(sLocal_18, iLocal_15);
		LAW::_0x35815F372D43E1E5(sLocal_18, iLocal_16);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_18, iLocal_15);
		LAW::_0xA1B0E6301E2E02A6(sLocal_18, iLocal_17);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_18, 1372.172f, -874.3451f, 70.298f);
		LAW::_0xA8A74AA79FB67159(sLocal_18, iLocal_15);
	}
	return true;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_4__::func_919(&uLocal_19, 936, 0, "", joaat("WAGONDAIRY01X"), 1363.079f, -834.7169f, 70.945f, 114.51f, joaat("PG_DELIVERY_DAIRY01X"), 0);
		__LIB_4__::func_919(&uLocal_39, 937, 2, "", joaat("WAGONDAIRY01X"), 1398.492f, -851.074f, 65.6284f, -171.36f, joaat("PG_DELIVERY_DAIRY01X"), 0);
	}
}

void func_30()
{
	func_51();
}

bool func_38(int iParam0)
{
	func_55();
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_6__::func_928(&uLocal_19);
		__LIB_6__::func_928(&uLocal_39);
		func_57();
	}
	return true;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_62, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_62, 4);
		__LIB_0__::func_25(iLocal_62, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_77(iLocal_62);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_62);
		__LIB_2__::func_819(iLocal_62);
		__LIB_2__::func_755(iLocal_62);
		if (!__LIB_2__::func_756(iLocal_62, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_51()
{
	ENTITY::CREATE_MODEL_HIDE(1399.447f, -844.6359f, 64.8634f, 5f, joaat("P_RUSSLINGGATELOCK02X"), true);
	ENTITY::CREATE_MODEL_HIDE(1399.883f, -847.0065f, 65.6747f, 1f, joaat("P_CS_CHAINLINK01X"), true);
}

void func_55()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_16))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(VOLUME::_0x7FD78DFD0C5D7B9B(iLocal_16)))
	{
		func_92();
	}
	iVar0 = 762;
	iVar1 = __LIB_1__::func_334(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(iVar1)))
	{
		func_94(iVar1);
	}
}

void func_57()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("DAI_RANCHER"));
	iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("DAI_RANCH_HAND"));
	iVar2 = 936;
	iVar3 = 937;
	iVar4 = __LIB_1__::func_334(iVar2);
	iVar5 = __LIB_1__::func_334(iVar3);
	if (!__LIB_0__::func_255(iVar4, 0) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
		return;
	}
	if (!__LIB_0__::func_255(iVar5, 0) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
		return;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		if (!PERSCHAR::_0xEB98B38CA60742D7(iVar0) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
			return;
		}
	}
	if (PERSCHAR::_0x800DF3FC913355F3(iVar1))
	{
		if (!PERSCHAR::_0xEB98B38CA60742D7(iVar1) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
		}
		else if (PERSCHAR::_0xEB98B38CA60742D7(iVar1) && !TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, true);
		}
	}
}

void func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	LAW::_REMOVE_GUARD_ZONE(sLocal_18);
	__LIB_0__::func_172(iLocal_17);
	__LIB_0__::func_172(iLocal_15);
	__LIB_7__::func_426();
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_16))
	{
		VOLUME::_0x998202B206872672(iLocal_16);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_16);
		__LIB_0__::func_172(iLocal_16);
	}
	iVar0 = 762;
	iVar1 = __LIB_1__::func_334(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		PED::_0xBCC76708E5677E1D(iVar1, 0);
	}
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_4__::func_909(&uLocal_19);
		__LIB_4__::func_909(&uLocal_39);
	}
}

void func_92()
{
	__LIB_2__::func_812(760, iLocal_16, 1);
	__LIB_2__::func_812(761, iLocal_16, 0);
	__LIB_2__::func_812(762, iLocal_16, 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_16, 3, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_16, 3, 1, __LIB_0__::func_120(761));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_16, 3, 1, __LIB_0__::func_120(762));
}

void func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 760;
	iVar1 = __LIB_1__::func_334(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		PED::_0x931B241409216C1F(iVar1, iParam0, 0);
	}
}

