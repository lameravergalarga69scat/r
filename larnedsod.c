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
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	vector3 vLocal_26 = { 0f, 0f, 0f };
	bool bLocal_29 = false;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_26 = { 905.7465f, 269.0549f, 115.0637f };
	iLocal_30 = 20000;
	iLocal_33 = vScriptParam_0.x;
	iLocal_31 = vScriptParam_0.z;
	func_1();
	__LIB_0__::func_11();
	iLocal_32 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_32)
		{
			iLocal_32 = 0;
			__LIB_1__::func_947(iLocal_33, &iLocal_31);
			switch (iLocal_31)
			{
				case 0:
					iLocal_31 = 1;
					break;
				case 1:
					func_5(iLocal_33);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_33)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_33), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_33));
					iVar1 = __LIB_1__::func_885(iLocal_33);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_34 = (MISC::GET_GAME_TIMER() + iLocal_30);
					iLocal_31 = 2;
					break;
				case 2:
					if (func_11() || iLocal_34 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_33);
						iLocal_34 = (MISC::GET_GAME_TIMER() + iLocal_30);
						iLocal_31 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_33) || iLocal_34 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_33);
						iLocal_34 = (MISC::GET_GAME_TIMER() + iLocal_30);
						iLocal_31 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_33) || iLocal_34 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_33);
						iLocal_34 = (iLocal_30 + MISC::GET_GAME_TIMER());
						iLocal_31 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_33)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_33), 4) && !iLocal_34 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_33) || iLocal_34 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_33, 4);
								iLocal_34 = (iLocal_30 + MISC::GET_GAME_TIMER());
								iLocal_31 = 7;
							}
							Jump @807; //curOff = 475
							if (iLocal_34 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_33);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_33);
								func_28(iLocal_33);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_31 = 8;
							}
							Jump @807; //curOff = 574
							__LIB_1__::func_886(iLocal_33);
							__LIB_0__::func_18();
							iLocal_31 = 9;
							Jump @807; //curOff = 591
							__LIB_1__::func_889(&Global_1898004);
							__LIB_5__::func_252(iLocal_33, &Global_1898004);
							iLocal_31 = 10;
							Jump @807; //curOff = 616
							__LIB_2__::func_749(iLocal_33);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_33, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_31 = 11;
							Jump @807; //curOff = 686
							if (func_38(iLocal_33))
							{
								iLocal_32 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_33);
							__LIB_1__::func_891(iLocal_33);
							__LIB_0__::func_24(iLocal_33, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_33 /*35*/].f_10);
							if (Global_1888801[iLocal_33 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_33 /*35*/].f_11);
							}
							Jump @807; //curOff = 788
							func_42(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_33 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_33 /*35*/].f_12);
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

void func_5(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_1__::func_948(-327351684, 1, -1f, 1, 1, 0, 0, 0);
	__LIB_1__::func_948(406215150, 1, 1f, 1, 1, 0, 0, 0);
	__LIB_0__::func_68(1934463007, 0, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(1934463007, 0);
}

bool func_11()
{
	iLocal_14 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(894.7135f, 260.2712f, 129.5878f, 0f, 0f, -0.492423f, 88.10741f, 65.87466f, 39.61107f, "Larned Sod - m_volTown");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Larned Sod - m_volTenantOwner_Threat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 901.97f, 261.5441f, 115.7395f, 0f, 0f, -0.825771f, 12.77186f, 7.290863f, 4.182421f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 886.826f, 258.2958f, 120.034f, 0f, 0f, 0f, 6.865234f, 13.71682f, 18.96277f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 887.2566f, 258.3552f, 121.8763f, 0f, 0f, -0.580099f, 4.594322f, 6.421996f, 6.34872f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 889.3727f, 250.7424f, 120.034f, 0f, 0f, -71.9487f, 5.361883f, 5.311553f, 18.96277f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 884.868f, 250.9919f, 120.034f, 0f, 0f, -31.54634f, 3.975522f, 1.561551f, 18.96277f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 886.9943f, 250.5041f, 120.034f, 0f, 0f, -51.34731f, 3.201982f, 2.32918f, 18.96277f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 943.6283f, 240.538f, 120.034f, 0f, 0f, 36.22269f, 2.583991f, 1.168234f, 18.96277f);
		iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Larned Sod - m_volTenantOwner_Restricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_15, iLocal_16);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 899.733f, 262.0444f, 121.8763f, 0f, 0f, -8.182039f, 26.6654f, 26.8703f, 20f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 943.883f, 240.5778f, 121.8763f, 0f, 0f, -8.182041f, 4.201227f, 4.104132f, 20f);
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Larned Sod - m_volTenantOwner_Warning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_17, iLocal_15);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 895.8494f, 261.3904f, 121.8763f, 0f, 0f, -8.182039f, 38.88291f, 38.47965f, 20f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 940.5317f, 241.0733f, 121.8763f, 0f, 0f, -8.182038f, 10.83869f, 7.036053f, 20f);
		iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Larned Sod - m_volTenantOwner_Registration Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_18, iLocal_17);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, 895.8494f, 261.3904f, 121.8763f, 0f, 0f, -8.182039f, 46.9045f, 46.40221f, 20f);
		sLocal_19 = "LARNED_SOD";
		LAW::_CREATE_GUARD_ZONE(sLocal_19);
		LAW::_0x8C598A930F471938(sLocal_19, iLocal_18);
		LAW::_0x35815F372D43E1E5(sLocal_19, iLocal_15);
		LAW::_0xA1B0E6301E2E02A6(sLocal_19, iLocal_16);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_19, iLocal_17);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_19, 901.2f, 262.7f, 116.4f);
		LAW::_0xA8A74AA79FB67159(sLocal_19, iLocal_14);
	}
	return true;
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = 733;
	iVar1 = __LIB_1__::func_334(iVar0);
	if (!__LIB_0__::func_255(iVar1, 0))
	{
		__LIB_2__::func_812(iVar0, iLocal_15, 1);
		__LIB_2__::func_812(735, iLocal_15, 0);
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_15, 3, 1);
		VOLUME::_0x53D05D60E5F5B40C(iLocal_15, 3, 1, __LIB_0__::func_120(iVar0));
		VOLUME::_0x53D05D60E5F5B40C(iLocal_15, 3, 1, __LIB_0__::func_120(735));
		PED::_0x931B241409216C1F(__LIB_1__::func_334(iVar0), __LIB_1__::func_334(735), 0);
	}
}

bool func_38(int iParam0)
{
	func_59();
	func_60();
	if (__LIB_0__::func_2() == -1)
	{
		func_61();
	}
	return true;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_33, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_33, 4);
		__LIB_0__::func_25(iLocal_33, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		func_81(iLocal_33);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_33);
		__LIB_2__::func_819(iLocal_33);
		__LIB_2__::func_755(iLocal_33);
		if (!__LIB_2__::func_756(iLocal_33, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_59()
{
	if (!__LIB_0__::func_86(vLocal_26))
	{
		func_103(&uLocal_20, vLocal_26, 2, -1082130432 /* Float: -1f */);
	}
}

void func_60()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (__LIB_0__::func_272(__LIB_1__::func_334(735), 0) && !bLocal_29)
	{
		PED::_0x24C82EF607105FAA(__LIB_1__::func_334(735), joaat("GUARDDOG"));
		bLocal_29 = true;
	}
	else if (!__LIB_0__::func_272(__LIB_1__::func_334(735), 0) && bLocal_29)
	{
		bLocal_29 = false;
	}
}

void func_61()
{
	int iVar0;
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("LAR_TENANT_01"));
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, true);
		}
	}
	else if (PERSCHAR::_0xEB98B38CA60742D7(iVar0))
	{
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, true);
		}
	}
	else if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
	}
}

void func_81(int iParam0)
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_19);
	__LIB_0__::func_172(iLocal_17);
	__LIB_0__::func_172(iLocal_16);
	__LIB_10__::func_26(&uLocal_20, 106);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_15))
	{
		VOLUME::_0x998202B206872672(iLocal_15);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_15);
		VOLUME::_DELETE_VOLUME(iLocal_15);
	}
}

int func_103(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	char* sVar0;
	if (__LIB_0__::func_1(uParam0->f_1, 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_1, 16))
			{
				__LIB_4__::func_114(uParam0, vParam1, iParam4, iParam5);
			}
			else
			{
				__LIB_13__::func_119(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return 1;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
	{
		if (!__LIB_0__::func_1(uParam0->f_1, 8))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = __LIB_3__::func_965(MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam1, true));
				uParam0->f_3 = __LIB_3__::func_965(__LIB_3__::func_713(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = __LIB_3__::func_714(iParam4);
				uParam0->f_5 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::FLOOR((uParam0->f_5 - 15f)), BUILTIN::FLOOR((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sVar0, vParam1, 0f, 0f, 0f, __LIB_3__::func_715(iParam4), false, false, false, false);
				uParam0->f_4 = MISC::GET_FRAME_COUNT();
				if (__LIB_1__::func_874(vParam1, 1) > (CAM::GET_GAMEPLAY_CAM_FOV() + 15f))
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 1f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					__LIB_0__::func_7(&(uParam0->f_1), 16);
				}
				else
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_2);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 0f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				__LIB_0__::func_7(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

