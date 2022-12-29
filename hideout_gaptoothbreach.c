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
	struct<25> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_40[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_49 = 1;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	struct<216> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8000, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	struct<9> Local_277[19];
	struct<9> Local_449[4];
	struct<9> Local_486[5];
	struct<9> Local_532[4];
	struct<9> Local_569[4];
	struct<9> Local_606[3];
	struct<9> Local_634[4];
	struct<14> Local_671[16];
	var uLocal_896 = 16;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	vector3 vLocal_915[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_928 = 0;
	var uLocal_929[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_949[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_960[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	bool bLocal_980 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_979 = vScriptParam_0.x;
	iLocal_977 = vScriptParam_0.z;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	}
	func_2();
	while (__LIB_9__::func_579())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_978)
		{
			iLocal_978 = MISC::GET_GAME_TIMER() + 1000;
			iVar0 = iLocal_977;
			__LIB_1__::func_947(iLocal_979, &iLocal_977);
			switch (iLocal_977)
			{
				case 0:
					if (!Global_1879534.f_1)
					{
						bLocal_980 = !__LIB_9__::func_648(iLocal_979, 1);
						if (bLocal_980)
						{
						}
						iLocal_977 = 1;
					}
					break;
				case 1:
					iLocal_977 = 2;
					break;
				case 2:
					if (func_6(bLocal_980))
					{
						iLocal_977 = 4;
					}
					break;
				case 4:
					iLocal_977 = 6;
					break;
				case 6:
					if (__LIB_9__::func_618(iLocal_979, -1, -1, 0))
					{
						__LIB_0__::func_24(iLocal_979, 4);
						iLocal_977 = 7;
					}
					break;
				case 7:
					iLocal_977 = 8;
					break;
				case 8:
					__LIB_1__::func_886(iLocal_979);
					iLocal_977 = 9;
					break;
				case 9:
					if (iLocal_979 != 5)
					{
						__LIB_1__::func_889(&Global_1898004);
						func_11(iLocal_979, &Global_1898004, bLocal_980);
					}
					__LIB_0__::func_24(iLocal_979, 8);
					iLocal_977 = 10;
					break;
				case 10:
					if (!bLocal_980)
					{
						func_12();
						if (__LIB_1__::func_890(32))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							__LIB_0__::func_22(32);
						}
						iLocal_977 = 3;
					}
					else
					{
						iLocal_977 = 3;
					}
					break;
				case 3:
					if (!STREAMING::_0xCF45DF50C7775F2A())
					{
						if (__LIB_0__::func_0(bLocal_980))
						{
							iLocal_977 = 11;
						}
					}
					break;
				case 11:
					if (!bLocal_980)
					{
						if (!func_16(iLocal_979))
						{
							iLocal_978 = 0;
						}
					}
					__LIB_6__::func_414(&Global_1898004, iLocal_979);
					break;
				case 12:
					func_18();
					break;
			}
			if (iVar0 != iLocal_977)
			{
				iLocal_978 = 0;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_18();
}

void func_2()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_18();
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		else
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	}
}

bool func_6(bool bParam0)
{
	func_42();
	Local_53.f_215 = Local_15;
	return true;
}

void func_11(int iParam0, var uParam1, bool bParam2)
{
	__LIB_2__::func_766(uParam1, Local_53.f_215, 1);
}

void func_12()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Gaptooth_Breach", true, true);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	Local_53.f_189 = 1;
	func_51();
	func_52();
	__LIB_9__::func_661(&Local_53, 114, &sLocal_40, 30);
	__LIB_1__::func_397(&(Local_53.f_155), 1);
	__LIB_2__::func_829(&(Local_53.f_155), 0);
	__LIB_1__::func_404(&(Local_53.f_155), 1);
	__LIB_1__::func_405(&(Local_53.f_155), 1);
	__LIB_2__::func_619(&(Local_53.f_155), 1);
	__LIB_2__::func_906(&(Local_53.f_155), 67);
}

bool func_16(int iParam0)
{
	switch (Local_53)
	{
		case 0:
			if (__LIB_9__::func_656(&Local_53, &uLocal_49, &uLocal_896, "", 0))
			{
				__LIB_1__::func_649(&Local_53, 1);
				func_62(0);
			}
			break;
		case 1:
			if (__LIB_9__::func_663(&Local_53, &Local_277, joaat("REL_GANG_SMUGGLERS"), iLocal_51, iLocal_52))
			{
				Local_53.f_197 = 0;
				__LIB_9__::func_580(&Local_671);
				ENTITY::SET_ENTITY_LOD_DIST(Local_671[10 /*14*/].f_8, 200);
				ENTITY::SET_ENTITY_LOD_DIST(Local_671[11 /*14*/].f_8, 200);
				func_65();
				func_66();
				func_67(0);
				__LIB_1__::func_649(&Local_53, 5);
			}
			break;
		case 5:
			__LIB_9__::func_619(&Local_53, &Local_277, iLocal_51, iLocal_52);
			func_69();
			func_70();
			func_71();
			__LIB_1__::func_649(&Local_53, 6);
			break;
		case 6:
			if (__LIB_9__::func_633(&Local_53))
			{
				__LIB_1__::func_649(&Local_53, 7);
			}
			break;
		case 7:
			func_73();
			break;
	}
	if (!__LIB_9__::func_581(&Local_53, 4) && Local_53 >= 6)
	{
		__LIB_9__::func_657(&Local_53, &Local_277);
		func_76();
	}
	__LIB_9__::func_679(&Local_53);
	__LIB_0__::func_11();
	return false;
}

void func_18()
{
	__LIB_0__::func_11(bLocal_980);
	__LIB_0__::func_11(bLocal_980);
	if (__LIB_0__::func_2() == -1)
	{
		if (iLocal_979 != 5)
		{
			__LIB_2__::func_755(iLocal_979);
		}
	}
	if (iLocal_979 != 5)
	{
		__LIB_2__::func_819(iLocal_979);
		__LIB_0__::func_25(iLocal_979, 4);
		__LIB_0__::func_25(iLocal_979, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
	}
	__LIB_9__::func_582(0);
	if (__LIB_0__::func_61() == iLocal_979)
	{
		__LIB_6__::func_409(0);
	}
	if (__LIB_1__::func_25(__LIB_4__::func_6(iLocal_979), 1))
	{
		__LIB_1__::func_408(__LIB_9__::func_583(iLocal_979), 1, 0);
	}
	func_104(iLocal_979);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_42()
{
	Local_15 = VOLUME::_CREATE_VOLUME_CYLINDER(-6015.963f, -3221.075f, 5.477402f, 0f, 0f, 8.231914f, 103.2476f, 128.0119f, 32.16178f);
	Local_15.f_1 = VOLUME::_CREATE_VOLUME_BOX(-5993.75f, -3302.167f, -20.4037f, 0f, 0f, 164.0207f, 15.68308f, 5.572576f, 5.988273f);
	Local_15.f_2 = VOLUME::_CREATE_VOLUME_BOX(-5943.543f, -3253.425f, -20.35016f, 0f, 0f, 121.3799f, 15.68308f, 5.572576f, 5.988273f);
	Local_15.f_3 = VOLUME::_CREATE_VOLUME_BOX(-5966.413f, -3177.383f, -5.280525f, 0f, 0f, 82.5057f, 15.68308f, 5.572576f, 5.988273f);
	Local_15.f_4 = VOLUME::_CREATE_VOLUME_BOX(-6042.647f, -3164.355f, -2.598232f, 0f, 0f, 170.8428f, 15.68308f, 5.572576f, 5.988273f);
	Local_15.f_5 = VOLUME::_CREATE_VOLUME_CYLINDER(-6017.228f, -3229.362f, 7.522789f, 0f, 0f, 34.35484f, 61.36032f, 72.11572f, 36.73005f);
	Local_15.f_6 = VOLUME::_CREATE_VOLUME_BOX(-5998.218f, -3323.628f, -20.34215f, 0f, 0f, 0f, 21.32604f, 13.56147f, 9.973339f);
	Local_15.f_7 = VOLUME::_CREATE_VOLUME_BOX(-5881.042f, -3218.959f, -15.44589f, 0f, 0f, 74.92592f, 21.32604f, 13.56147f, 9.973339f);
	Local_15.f_8 = VOLUME::_CREATE_VOLUME_BOX(-5876.711f, -3149.372f, -9.501493f, 0f, 0f, 104.2459f, 21.32604f, 13.56147f, 9.973339f);
	Local_15.f_9 = VOLUME::_CREATE_VOLUME_BOX(-5837.319f, -3051.653f, 1.287254f, 0f, 0f, 104.2459f, 21.32604f, 13.56147f, 9.973339f);
	Local_15.f_10 = VOLUME::_CREATE_VOLUME_BOX(-6109.601f, -3091.054f, -1.660588f, 0f, 0f, -117.187f, 21.32604f, 13.56147f, 9.973339f);
	Local_15.f_11 = VOLUME::_CREATE_VOLUME_BOX(-6041.907f, -3189.583f, -5.67214f, 0f, 0f, 0f, 27.35614f, 11.07137f, 10.5163f);
	Local_15.f_12 = VOLUME::_CREATE_VOLUME_BOX(-6067.006f, -3215.767f, -15.18151f, 0f, 0f, 0.680502f, 53.12082f, 11.07137f, 10.5163f);
	Local_15.f_13 = VOLUME::_CREATE_VOLUME_BOX(-5989.605f, -3202.528f, -11.66756f, 0f, 0f, 12.35864f, 15.84745f, 11.07137f, 10.5163f);
	Local_15.f_14 = VOLUME::_CREATE_VOLUME_BOX(-5963.547f, -3199.468f, -21.19596f, 0f, 0f, 0f, 6.269929f, 5.876063f, 3.050249f);
	Local_15.f_15 = VOLUME::_CREATE_VOLUME_BOX(-5959.344f, -3179.787f, -22.51089f, -0.429661f, -1.907835f, 12.69503f, 4.399466f, 3.602086f, 2.916013f);
	Local_15.f_16 = VOLUME::_CREATE_VOLUME_BOX(-6045.726f, -3259.385f, -17.65259f, 0f, 0f, -55.9609f, 11.5631f, 5.343231f, 3.419743f);
	Local_15.f_17 = VOLUME::_CREATE_VOLUME_BOX(-6008.875f, -3179.579f, -1.719009f, 0f, 0f, -145.287f, 85.40104f, 4.251016f, 14.37743f);
	Local_15.f_18 = VOLUME::_CREATE_VOLUME_BOX(-6050.428f, -3194.773f, -6.777281f, 0f, 0f, 0.262644f, 9.936897f, 11.50332f, 12.29366f);
	Local_15.f_19 = VOLUME::_CREATE_VOLUME_BOX(-6073.619f, -3184.029f, -18.81422f, 0f, 0f, 0f, 29.98069f, 52.28811f, 19.08086f);
	Local_15.f_20 = VOLUME::_CREATE_VOLUME_BOX(-6048.434f, -3236.142f, -17.80457f, 0f, 0f, 0f, 52.57047f, 30.81339f, 16.99766f);
	Local_15.f_21 = VOLUME::_CREATE_VOLUME_BOX(-6038.128f, -3164.445f, -3.297509f, 0f, 0f, 37.21997f, 23.95005f, 5.847722f, 5.5198f);
	Local_15.f_22 = VOLUME::_CREATE_VOLUME_BOX(-6006.56f, -3193.336f, -4.569776f, 0f, 0f, -156.7605f, 45.3052f, 8.484719f, 5.5198f);
	Local_15.f_23 = VOLUME::_CREATE_VOLUME_BOX(-5973f, -3167.668f, -25.77539f, 0f, 0f, -33.81001f, 2.308513f, 5.346044f, 4.619395f);
	Local_15.f_24 = VOLUME::_CREATE_VOLUME_BOX(-6019.014f, -3138.68f, 4.572118f, 0f, 0f, 31.20514f, 92.81116f, 61.2044f, 23.50832f);
}

void func_51()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Local_671[iVar0 /*14*/] = { func_131(1, iVar0) };
		Local_671[iVar0 /*14*/].f_6 = func_132(1, iVar0);
		Local_671[iVar0 /*14*/].f_12 = 0;
		iVar0++;
	}
	Local_671[0 /*14*/].f_7 = joaat("P_CHUCKWAGONBREAK01X");
	Local_671[0 /*14*/].f_3 = { 0f, 0f, -175.43f };
	Local_671[1 /*14*/].f_7 = joaat("P_CHUCKWAGONBREAK01X");
	Local_671[3 /*14*/].f_7 = joaat("P_BROKENPARTS02X");
	Local_671[2 /*14*/].f_7 = joaat("P_WAGONPARTS03X");
	Local_671[9 /*14*/].f_7 = joaat("P_WAGONPARTS03X");
	Local_671[9 /*14*/].f_3 = { 0f, 0f, -95f };
	Local_671[6 /*14*/].f_7 = joaat("P_CRATE04X");
	Local_671[4 /*14*/].f_7 = joaat("P_CRATESTACK02BX");
	Local_671[5 /*14*/].f_7 = joaat("P_LOGSTACK01X");
	Local_671[8 /*14*/].f_7 = joaat("P_LOGSTACK01X");
	Local_671[8 /*14*/].f_3 = { 0f, 0f, -154.12f };
	Local_671[7 /*14*/].f_7 = joaat("P_LOGSTACK01X");
	Local_671[7 /*14*/].f_3 = { 0f, 0f, -90.53f };
	Local_671[10 /*14*/].f_7 = joaat("P_CRATETNT01X");
	Local_671[10 /*14*/].f_12 = 1;
	Local_671[10 /*14*/].f_3 = { 0f, 0f, 92.86f };
	Local_671[11 /*14*/].f_7 = joaat("P_CRATETNT01X");
	Local_671[11 /*14*/].f_12 = 1;
	Local_671[11 /*14*/].f_3 = { 0f, 0f, 123.69f };
	Local_671[12 /*14*/].f_7 = joaat("P_CRATETNT01X");
	Local_671[12 /*14*/].f_12 = 1;
	Local_671[12 /*14*/].f_3 = { 0f, 0f, 92.86f };
	Local_671[13 /*14*/].f_7 = joaat("P_CRATETNT01XA");
	Local_671[13 /*14*/].f_3 = { 0f, 0f, -72.77f };
	Local_671[14 /*14*/].f_7 = joaat("P_CRATETNT02XA");
	Local_671[14 /*14*/].f_3 = { 0f, 0f, 36.1f };
	Local_671[14 /*14*/].f_12 = 1;
	__LIB_9__::func_584(&uLocal_896, joaat("P_CHUCKWAGONBREAK01X"));
	__LIB_9__::func_584(&uLocal_896, joaat("P_WAGONPARTS03X"));
	__LIB_9__::func_584(&uLocal_896, joaat("P_BROKENPARTS02X"));
	__LIB_9__::func_584(&uLocal_896, joaat("P_CRATESTACK02BX"));
	__LIB_9__::func_584(&uLocal_896, joaat("P_LOGSTACK01X"));
	__LIB_9__::func_584(&uLocal_896, joaat("P_CRATE04X"));
	__LIB_9__::func_584(&uLocal_896, joaat("P_CRATETNT01X"));
	__LIB_9__::func_584(&uLocal_896, joaat("P_CRATETNT01XA"));
	__LIB_9__::func_584(&uLocal_896, joaat("P_CRATETNT02XA"));
}

void func_52()
{
	int iVar0;
	Local_53.f_199 = 19;
	Local_53.f_201 = Local_53.f_199;
	iLocal_51 = 0;
	iLocal_52 = 18;
	iVar0 = iLocal_51;
	while (iVar0 <= iLocal_52)
	{
		Local_277[iVar0 /*9*/] = joaat("G_M_M_UNIBANDITOS_01");
		iVar0++;
	}
	__LIB_9__::func_584(&uLocal_896, Local_277[0 /*9*/]);
	func_134();
}

void func_62(bool bParam0)
{
	if (!bParam0)
	{
		PATHFIND::_0xC1799FAFD2FDF52B(Local_15.f_6, 0, 0, 0);
		PATHFIND::_0xC1799FAFD2FDF52B(Local_15.f_7, 0, 0, 0);
		PATHFIND::_0xC1799FAFD2FDF52B(Local_15.f_8, 0, 0, 0);
		PATHFIND::_0xC1799FAFD2FDF52B(Local_15.f_9, 0, 0, 0);
		PATHFIND::_0xC1799FAFD2FDF52B(Local_15.f_10, 0, 0, 0);
	}
	else
	{
		PATHFIND::_0xD17672447692478E(Local_15.f_6, 0);
		PATHFIND::_0xD17672447692478E(Local_15.f_7, 0);
		PATHFIND::_0xD17672447692478E(Local_15.f_8, 0);
		PATHFIND::_0xD17672447692478E(Local_15.f_9, 0);
		PATHFIND::_0xD17672447692478E(Local_15.f_10, 0);
	}
}

void func_65()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_960[0]))
	{
		uLocal_960[0] = TASK::CREATE_SCENARIO_POINT(joaat("FALL_OVER_WALL"), -6007.37f, -3144.1f, 10.8f, -141f, 5f, 0, 1);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_960[1]))
	{
		uLocal_960[1] = TASK::CREATE_SCENARIO_POINT(joaat("FALL_OVER_WALL"), -6009.23f, -3145.67f, 10.8f, -141f, 5f, 0, 1);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_960[2]))
	{
		uLocal_960[2] = TASK::CREATE_SCENARIO_POINT(joaat("FALL_OVER_WALL"), -6008.26f, -3144.86f, 10.8f, -141f, 5f, 0, 1);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_960[3]))
	{
		uLocal_960[3] = TASK::CREATE_SCENARIO_POINT(joaat("FALL_OVER_WALL"), -6007.44f, -3141.99f, 10.78f, -58f, 5f, 0, 1);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_960[4]))
	{
		uLocal_960[4] = TASK::CREATE_SCENARIO_POINT(joaat("FALL_OVER_WALL"), -6006.86f, -3142.68f, 10.76f, -58f, 5f, 0, 1);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_960[5]))
	{
		uLocal_960[5] = TASK::CREATE_SCENARIO_POINT(joaat("FALL_OVER_WALL"), -6008.08f, -3141.25f, 10.79f, -58f, 5f, 0, 1);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_960[6]))
	{
		uLocal_960[6] = TASK::CREATE_SCENARIO_POINT(joaat("FALL_OVER_WALL"), -6011.48f, -3142.88f, 10.79f, 33f, 5f, 0, 1);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_960[7]))
	{
		uLocal_960[7] = TASK::CREATE_SCENARIO_POINT(joaat("FALL_OVER_WALL"), -6010.55f, -3142.08f, 10.8f, 33f, 5f, 0, 1);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_960[8]))
	{
		uLocal_960[8] = TASK::CREATE_SCENARIO_POINT(joaat("FALL_OVER_WALL"), -6009.46f, -3141.19f, 10.79f, 33f, 5f, 0, 1);
	}
}

int func_66()
{
	int iVar0;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_949[0]))
	{
		uLocal_949[0] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_PICKUP_MONEY_STACK_80CM"), -6046.82f, -3257.8f, -15.31f, 0f, 1.5f, 0, 0);
		TASK::_SET_SCENARIO_POINT_FLAG(uLocal_949[0], 45, true);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_949[1]))
	{
		uLocal_949[1] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_PICKUP_MONEY_STACK_80CM"), -6046.93f, -3257.93f, -15.31f, 0f, 1.5f, 0, 0);
		TASK::_SET_SCENARIO_POINT_FLAG(uLocal_949[1], 45, true);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_949[2]))
	{
		uLocal_949[2] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_PICKUP_MONEY_STACK_80CM"), -6046.82f, -3257.8f, -15.31f, 0f, 1.5f, 0, 0);
		TASK::_SET_SCENARIO_POINT_FLAG(uLocal_949[2], 45, true);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_949[3]))
	{
		uLocal_949[3] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_TAKE_MONEY_PILE_TABLE"), -6046.93f, -3257.93f, -15.31f, 0f, 1.5f, 0, 0);
		TASK::_SET_SCENARIO_POINT_FLAG(uLocal_949[3], 45, true);
	}
	iVar0 = 13;
	while (iVar0 <= 18)
	{
		__LIB_2__::func_463(Local_277[iVar0 /*9*/].f_5, joaat("PROVISION_GOLD_NUGGET"), 1, 0);
		iVar0++;
	}
	return 1;
}

void func_67(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_53.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_277[iVar0 /*9*/].f_5, 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_277[iVar0 /*9*/].f_5, bParam0);
			PED::SET_PED_CONFIG_FLAG(Local_277[iVar0 /*9*/].f_5, 130, bParam0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_277[iVar0 /*9*/].f_5, 7, 0, 1);
		}
		iVar0++;
	}
}

void func_69()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_53.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_277[iVar0 /*9*/].f_5, 0, 1))
		{
			__LIB_2__::func_22(&(Local_53.f_155), Local_277[iVar0 /*9*/].f_5);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_277[iVar0 /*9*/].f_5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_277[iVar0 /*9*/].f_5, 57, false);
			PED::SET_PED_HEARING_RANGE(Local_277[iVar0 /*9*/].f_5, 10f);
			PED::SET_PED_COMBAT_MOVEMENT(Local_277[iVar0 /*9*/].f_5, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_277[iVar0 /*9*/].f_5, true, false), 5f, 0, 0, 0);
			PED::SET_PED_COMBAT_RANGE(Local_277[iVar0 /*9*/].f_5, 0);
			switch (iVar0)
			{
				case 0:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_277[iVar0 /*9*/].f_5, true, false), 5f, 0, 0, 0);
					break;
				case 1:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_277[iVar0 /*9*/].f_5, true, false), 10f, 0, 0, 0);
					break;
				case 2:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_277[iVar0 /*9*/].f_5, true, false), 10f, 0, 0, 0);
					break;
				case 3:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_277[iVar0 /*9*/].f_5, true, false), 2f, 0, 0, 0);
					break;
				case 4:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_277[iVar0 /*9*/].f_5, true, false), 2f, 0, 0, 0);
					break;
				case 5:
					PED::SET_COMBAT_FLOAT(Local_277[iVar0 /*9*/].f_5, 2, 70f);
					break;
				case 9:
					PED::SET_COMBAT_FLOAT(Local_277[iVar0 /*9*/].f_5, 2, 60f);
					break;
				case 11:
					PED::SET_COMBAT_FLOAT(Local_277[iVar0 /*9*/].f_5, 2, 70f);
					break;
				case 6:
					PED::SET_COMBAT_FLOAT(Local_277[iVar0 /*9*/].f_5, 2, 60f);
					break;
				case 7:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[iVar0 /*9*/].f_5, -6041.98f, -3263.55f, -19.01f, 3f, 0, 0, 0);
					break;
				case 12:
					PED::SET_COMBAT_FLOAT(Local_277[iVar0 /*9*/].f_5, 2, 90f);
					break;
			}
		}
		iVar0++;
	}
}

void func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = joaat("WORLD_HUMAN_GUARD_SCOUT");
	iVar2 = joaat("WORLD_HUMAN_GUARD_MILITARY");
	iVar3 = joaat("WORLD_HUMAN_SMOKE_CARRYING");
	iVar0 = 0;
	while (iVar0 <= (Local_53.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_277[iVar0 /*9*/].f_5, 0, 1))
		{
			__LIB_4__::func_7(Local_277[iVar0 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			PED::SET_PED_CONFIG_FLAG(Local_277[iVar0 /*9*/].f_5, 113, true);
			switch (iVar0)
			{
				case 0:
					uLocal_929[iVar0] = TASK::CREATE_SCENARIO_POINT(iVar1, Local_277[iVar0 /*9*/].f_1, Local_277[iVar0 /*9*/].f_4, 0f, 0, 1);
					TASK::_TASK_USE_SCENARIO_POINT(Local_277[iVar0 /*9*/].f_5, uLocal_929[iVar0], 0, -1, false, true, 0, false, -1f, false);
					PED::_0xF1C03A5352243A30(Local_277[iVar0 /*9*/].f_5);
					break;
				case 1:
					uLocal_929[iVar0] = TASK::CREATE_SCENARIO_POINT(iVar3, Local_277[iVar0 /*9*/].f_1, Local_277[iVar0 /*9*/].f_4, 0f, 0, 1);
					TASK::_TASK_USE_SCENARIO_POINT(Local_277[iVar0 /*9*/].f_5, uLocal_929[iVar0], 0, -1, false, true, 0, false, -1f, false);
					PED::_0xF1C03A5352243A30(Local_277[iVar0 /*9*/].f_5);
					break;
				case 2:
					uLocal_929[iVar0] = TASK::CREATE_SCENARIO_POINT(iVar1, Local_277[iVar0 /*9*/].f_1, Local_277[iVar0 /*9*/].f_4, 0f, -1f, 1);
					TASK::_TASK_USE_SCENARIO_POINT(Local_277[iVar0 /*9*/].f_5, uLocal_929[iVar0], 0, -1, false, true, 0, false, -1f, false);
					PED::_0xF1C03A5352243A30(Local_277[iVar0 /*9*/].f_5);
					PED::_0xF1C03A5352243A30(Local_277[iVar0 /*9*/].f_5);
					break;
				case 3:
					uLocal_929[iVar0] = TASK::CREATE_SCENARIO_POINT(iVar2, Local_277[iVar0 /*9*/].f_1, Local_277[iVar0 /*9*/].f_4, 0f, -1f, 1);
					TASK::_TASK_USE_SCENARIO_POINT(Local_277[iVar0 /*9*/].f_5, uLocal_929[iVar0], 0, -1, false, true, 0, false, -1f, false);
					PED::_0xF1C03A5352243A30(Local_277[iVar0 /*9*/].f_5);
					break;
				case 5:
					uLocal_929[iVar0] = TASK::CREATE_SCENARIO_POINT(iVar2, Local_277[iVar0 /*9*/].f_1, Local_277[iVar0 /*9*/].f_4, 0f, -1f, 1);
					TASK::_TASK_USE_SCENARIO_POINT(Local_277[iVar0 /*9*/].f_5, uLocal_929[iVar0], 0, -1, false, true, 0, false, -1f, false);
					PED::_0xF1C03A5352243A30(Local_277[iVar0 /*9*/].f_5);
					break;
				case 9:
					break;
				case 10:
					TASK::TASK_WANDER_IN_VOLUME(Local_277[iVar0 /*9*/].f_5, Local_15.f_21, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
					break;
				case 11:
					TASK::TASK_WANDER_IN_VOLUME(Local_277[iVar0 /*9*/].f_5, Local_15.f_22, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
					break;
			}
		}
		iVar0++;
	}
}

void func_71()
{
	sLocal_40[0] = "GANG_TAUNT_GEN";
	sLocal_40[1] = "GANG_TAUNT_GEN";
	sLocal_40[2] = "GANG_TAUNT_GEN";
	sLocal_40[3] = "TAUNT_GEN_MALE";
	sLocal_40[4] = "TAUNT_GEN_MALE";
	sLocal_40[5] = "TAUNT_GEN_MALE";
	sLocal_40[6] = "TAUNT_GEN_MALE";
	sLocal_40[7] = "TAUNT_GEN_MALE";
}

void func_73()
{
	float fVar0;
	switch (Local_53.f_3)
	{
		case 0:
			if (func_162())
			{
				if (__LIB_2__::func_284(5, 100))
				{
					func_164();
				}
				else
				{
					__LIB_9__::func_587(&Local_53, 1);
					func_166();
				}
				AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_START");
			}
			else if (func_167())
			{
				func_168(1);
				__LIB_9__::func_587(&Local_53, 1);
			}
			break;
		case 1:
			if (!func_169(1))
			{
				if (func_170())
				{
					__LIB_2__::func_303(Local_53.f_192, 0, "FINAL_WARNING", "", -1f, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_53.f_192, Global_35, -1, false, 1);
					__LIB_9__::func_587(&Local_53, 2);
					__LIB_1__::func_148(&(vLocal_915[0 /*3*/]));
				}
			}
			else if (func_173())
			{
				func_164();
			}
			break;
		case 2:
			if (func_167())
			{
				func_168(1);
				__LIB_2__::func_303(Local_53.f_192, 0, "TAUNT_GEN_LOCATION", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_164();
			}
			if (!TASK::IS_PED_STILL(Global_35))
			{
				if (!PED::IS_PED_FACING_PED(Global_35, Local_53.f_192, 50f))
				{
					__LIB_1__::func_148(&(vLocal_915[0 /*3*/]));
				}
			}
			fVar0 = __LIB_0__::func_665(Local_53.f_192, Global_35, 1, 1);
			if (((((fVar0 < 35f && __LIB_9__::func_638(&(vLocal_915[0 /*3*/])) > 5f) || __LIB_0__::func_665(Local_277[0 /*9*/].f_5, Global_35, 1, 1) < 10f) || __LIB_0__::func_665(Local_277[1 /*9*/].f_5, Global_35, 1, 1) < 10f) || __LIB_0__::func_665(Local_277[2 /*9*/].f_5, Global_35, 1, 1) < 10f) || __LIB_0__::func_665(Local_277[3 /*9*/].f_5, Global_35, 1, 1) < 10f)
			{
				func_164();
			}
			break;
		case 4:
			break;
		case 5:
			func_176();
			func_177();
			if (!func_169(2))
			{
				if (__LIB_9__::func_638(&(vLocal_915[3 /*3*/])) > 20f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_ACTION");
					func_168(2);
				}
			}
			if (func_178() == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
				__LIB_9__::func_587(&Local_53, 7);
			}
			break;
		case 7:
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Gaptooth_Breach", false, true);
			__LIB_9__::func_587(&Local_53, 8);
			break;
		case 8:
			__LIB_9__::func_587(&Local_53, 9);
			break;
		case 9:
			if (func_179(&Local_53, &Local_277, 85, 1, 1))
			{
				__LIB_9__::func_587(&Local_53, 10);
				PERSISTENCE::_0x9D16896F0DBE78A2(-6046.94f, -3257.18f, -14.49f, 2f);
			}
			break;
		case 10:
			break;
	}
	if (Local_53.f_3 <= 5)
	{
		__LIB_9__::func_695(&Local_277, &Local_53);
	}
	if (!__LIB_9__::func_581(&Local_53, 5))
	{
		if (__LIB_9__::func_649(&Local_53, &Local_277, Local_53.f_199, 0, 0))
		{
			func_164();
		}
	}
	else if (Local_53.f_3 > 8)
	{
		__LIB_9__::func_692(&Local_277, &Local_53, 100, 1084227584 /* Float: 5f */);
	}
}

void func_76()
{
	int iVar0;
	if (__LIB_0__::func_51(&(Local_53.f_5), 131072))
	{
		return;
	}
	if (!__LIB_0__::func_51(&(Local_53.f_5), 65536))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_53.f_199)
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 10:
			case 11:
			case 12:
				if (__LIB_2__::func_1(Local_277[iVar0 /*9*/].f_5, 0, 1))
				{
					__LIB_9__::func_609(&(Local_277[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), -662251075);
				}
				break;
		}
		iVar0++;
	}
	__LIB_0__::func_7(&(Local_53.f_5), 131072);
}

void func_104(int iParam0)
{
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_62(1);
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Gaptooth_Breach", false, true);
	func_236(&Local_277, &Local_53, &uLocal_896, SCRIPTS::GET_ID_OF_THIS_THREAD(), "");
}

Vector3 func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -5994.78f, -3295.566f, -22.9304f;
				case 1:
					return -5994.626f, -3293.373f, -22.7704f;
				case 2:
					return -6009.853f, -3259.521f, -22.6386f;
				case 3:
					return -5943.046f, -3257.157f, -22.6494f;
				case 4:
					return -5949.3f, -3245.594f, -21.0443f;
				case 5:
					return -5970.502f, -3173.165f, -6.6127f;
				case 6:
					return -6047.486f, -3255.701f, -15.3004f;
				case 7:
					return -6044.106f, -3264.498f, -19.0042f;
				case 8:
					return -6048.333f, -3257.987f, -19.0089f;
				case 9:
					return -5995.205f, -3212.656f, -15.2816f;
				case 10:
					return -6027.822f, -3158.539f, -3.2483f;
				case 11:
					return -5977.957f, -3175.313f, -6.951f;
				case 12:
					return -6007.867f, -3143.479f, 9.7211f;
				case 13:
					return -5964.056f, -3195.126f, -22.6217f;
				case 14:
					return -5956.37f, -3179.091f, -23.5603f;
				case 15:
					return -5979.761f, -3162.904f, -27.6416f;
				case 16:
					return -5984.143f, -3165.374f, -27.6052f;
				case 17:
					return -5964.305f, -3170.76f, -24.5898f;
				case 18:
					return -5963.592f, -3193.326f, -22.6499f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -5996.683f, -3294.602f, -22.786f;
				case 1:
					return -5969.158f, -3175.646f, -6.7305f;
				case 2:
					return -5985.121f, -3295.569f, -22.6758f;
				case 3:
					return -5986.578f, -3295.001f, -22.7935f;
				case 4:
					return -6012.75f, -3282.421f, -22.7454f;
				case 5:
					return -6018.794f, -3272.492f, -22.6514f;
				case 6:
					return -5967.78f, -3277.83f, -22.26f;
				case 7:
					return -5992.48f, -3260.54f, -22.62f;
				case 8:
					return -5990.23f, -3258.37f, -22.62f;
				case 9:
					return -5969.77f, -3277.09f, -22.41f;
				case 10:
					return -5996.81f, -3296.27f, -21.58f;
				case 11:
					return -5996.38f, -3295.61f, -21.58f;
				case 12:
					return -5996.97f, -3295.077f, -21.576f;
				case 13:
					return -6010.14f, -3257.09f, -22.45f;
				case 14:
					return -5980.35f, -3162.14f, -27.57f;
				case 15:
					return -5963.948f, -3206.042f, -22.4966f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -6064.136f, -3191.151f, -13.4273f;
				case 1:
					return -6034.563f, -3221.325f, -19.5974f;
				case 2:
					return -6066.291f, -3189.978f, -14.1766f;
				case 3:
					return -6026.644f, -3227.671f, -22.0698f;
				case 4:
					return -6023.458f, -3216.977f, -15.1692f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -5979.196f, -3218.474f, -22.3966f;
				case 1:
					return -5980.838f, -3218.294f, -22.2474f;
				case 2:
					return -5981.471f, -3216.707f, -22.2335f;
				case 3:
					return -5979.24f, -3216.169f, -22.2722f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -6020.266f, -3152.18f, -2.9403f;
				case 1:
					return -6018.129f, -3159.934f, -2.5245f;
				case 2:
					return -6011.542f, -3165.221f, -0.0543f;
				case 3:
					return -6005.002f, -3143.971f, -2.6024f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -5967.784f, -3214.934f, -22.6121f;
				case 1:
					return -5960.206f, -3210.808f, -20.974f;
				case 2:
					return -5983.126f, -3206.03f, -17.9536f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -6022.599f, -3198.637f, -5.9506f;
				case 1:
					return -6021.863f, -3200.279f, -5.9065f;
				case 2:
					return -6040.657f, -3174.553f, -5.0185f;
				case 3:
					return -6042.119f, -3175.666f, -5.6859f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -6014.466f, -3246.291f, -22.1478f;
				case 1:
					return -5961.132f, -3242.535f, -22.6415f;
				case 2:
					return -5963.075f, -3194.605f, -22.6051f;
				case 3:
					return -5982.579f, -3217.802f, -22.2025f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_132(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -10.08f;
				case 1:
					return 185.04f;
				case 2:
					return 192.96f;
				case 3:
					return -36f;
				case 4:
					return 272.16f;
				case 5:
					return 255.6f;
				case 6:
					return 211.68f;
				case 7:
					return -79.92f;
				case 8:
					return 161.0123f;
				case 9:
					return 283.0176f;
				case 10:
					return 112.32f;
				case 11:
					return 101.52f;
				case 12:
					return 157.0711f;
				case 13:
					return 200.88f;
				case 14:
					return 151.2f;
				case 15:
					return 222.48f;
				case 16:
					return 268.4956f;
				case 17:
					return 198.5859f;
				case 18:
					return 330.305f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 72f;
				case 1:
					return -118.08f;
				case 2:
					return 286.6271f;
				case 3:
					return 286.6271f;
				case 4:
					return 357.6347f;
				case 5:
					return 59.76f;
				case 6:
					return 343.44f;
				case 7:
					return 5.5075f;
				case 8:
					return 5.5075f;
				case 9:
					return 1.721f;
				case 10:
					return 334.0228f;
				case 11:
					return 334.0228f;
				case 12:
					return 326.9676f;
				case 13:
					return 338.928f;
				case 14:
					return 56.1608f;
				case 15:
					return 338.0645f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 187.5892f;
				case 1:
					return 187.5892f;
				case 2:
					return 187.5892f;
				case 3:
					return 187.5892f;
				case 4:
					return 183.7235f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 187.5892f;
				case 1:
					return 187.5892f;
				case 2:
					return 187.5892f;
				case 3:
					return 187.5892f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 112.32f;
				case 1:
					return 275.0004f;
				case 2:
					return 275.0004f;
				case 3:
					return 275.0004f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 5.5075f;
				case 1:
					return 5.5075f;
				case 2:
					return 5.5075f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 86.1832f;
				case 1:
					return 86.1832f;
				case 2:
					return 86.1832f;
				case 3:
					return 0.9025f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 341.8893f;
				case 1:
					return 341.8893f;
				case 2:
					return 298.1962f;
				case 3:
					return 298.1962f;
			}
			break;
	}
	return 0f;
}

void func_134()
{
	int iVar0;
	struct<4> Var1;
	iVar0 = 0;
	while (iVar0 < Local_53.f_199)
	{
		Var1 = { func_246(0, iVar0) };
		Local_277[iVar0 /*9*/].f_1 = { Var1 };
		Local_277[iVar0 /*9*/].f_4 = Var1.f_3;
		iVar0++;
	}
}

bool func_162()
{
	int iVar0;
	if (!func_272() && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_24, true, 0))
	{
		return false;
	}
	Local_53.f_190 = __LIB_9__::func_647(&Local_277, &Local_53, 0, 0, 0, 18);
	if (Local_53.f_190 < 0 || PED::_0x7F9B9791D4CB71F6(Local_277[Local_53.f_190 /*9*/].f_5, Global_35, 1, 0) != 1)
	{
		return false;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_1), Global_36, false) < 25f)
	{
		Local_53.f_190 = 0;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_2), Global_36, false) < 25f)
	{
		Local_53.f_190 = 3;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_3), Global_36, false) < 25f)
	{
		Local_53.f_190 = 5;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_4), Global_36, false) < 25f)
	{
		Local_53.f_190 = 10;
	}
	Local_53.f_192 = Local_277[Local_53.f_190 /*9*/].f_5;
	MISC::_0x870708A6E147A9AD(Local_53.f_192, "", 24f, 0, 8, 0, 0, 0, 0, -1);
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_5, true, 0))
	{
		if (__LIB_2__::func_284(5, 100))
		{
			__LIB_2__::func_303(Local_53.f_192, Global_35, "ITS_MALE_EXTREME_RECOGNIZE", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_303(Local_53.f_192, 0, "HEADS_UP_HIDEOUT", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_9__::func_640(&(vLocal_915[0 /*3*/]), 0);
		}
	}
	if (Local_53.f_190 == 3)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -5943.6f, -3255.5f, -21.8f, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
		__LIB_1__::func_474(Local_53.f_192, &iVar0, 0, 0, 1, 1);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -5947f, -3249.2f, -21f, Global_35, 1.5f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
		__LIB_1__::func_474(Local_277[4 /*9*/].f_5, &iVar0, 1.5f, 2f, 1, 1);
	}
	else if (Local_53.f_190 == 12)
	{
		func_168(1);
		return true;
	}
	else
	{
		if (Local_53.f_190 == 0)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::CLEAR_PED_TASKS(0, true, false);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -5993.04f, -3292.59f, -22.96f, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
			__LIB_1__::func_474(Local_277[1 /*9*/].f_5, &iVar0, 1.5f, 2f, 1, 1);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		WEAPON::SET_CURRENT_PED_WEAPON(0, joaat("GROUP_REPEATER"), false, 0, false, false);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 3000, -1f, -1f, -1f);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
		__LIB_1__::func_474(Local_53.f_192, &iVar0, 0, 0, 1, 1);
	}
	__LIB_9__::func_594(Local_53.f_205);
	return true;
}

void func_164()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_53.f_199)
	{
		if (func_279(iVar0))
		{
		}
		iVar0++;
	}
	__LIB_1__::func_148(&(vLocal_915[0 /*3*/]));
	__LIB_1__::func_148(&(vLocal_915[3 /*3*/]));
	func_67(1);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_1), Global_36, false) < 40f)
	{
		func_168(256);
	}
	else
	{
		func_168(512);
	}
	__LIB_9__::func_587(&Local_53, 5);
}

void func_166()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_53.f_199 - 1))
	{
		if (__LIB_2__::func_1(Local_277[iVar0 /*9*/].f_5, 0, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_277[iVar0 /*9*/].f_5, 3, 0, 1);
		}
		iVar0++;
	}
}

bool func_167()
{
	if (!__LIB_1__::func_205(Global_35, Local_15.f_5, 1, 0))
	{
		return false;
	}
	Local_53.f_190 = __LIB_9__::func_647(&Local_277, &Local_53, 0, 0, 0, 18);
	if (Local_53.f_190 < 0)
	{
		return false;
	}
	Local_53.f_192 = Local_277[Local_53.f_190 /*9*/].f_5;
	return true;
}

void func_168(int iParam0)
{
	__LIB_0__::func_7(&iLocal_928, iParam0);
}

bool func_169(int iParam0)
{
	return __LIB_0__::func_27(iLocal_928, iParam0);
}

bool func_170()
{
	float fVar0;
	if (func_169(1))
	{
		return false;
	}
	if (__LIB_0__::func_393(Global_35, Local_15.f_5, 0, 1))
	{
		if (func_283())
		{
			return true;
		}
	}
	else
	{
		fVar0 = __LIB_0__::func_665(Local_53.f_192, Global_35, 1, 1);
		if (fVar0 < 10f || __LIB_9__::func_658(&(vLocal_915[0 /*3*/]), 10f))
		{
			return true;
		}
		if (__LIB_9__::func_658(&(vLocal_915[0 /*3*/]), 10f))
		{
			if ((fVar0 < 10f && PED::IS_PED_FACING_PED(Global_35, Local_53.f_192, 80f)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_53.f_192))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_173()
{
	int iVar0;
	int iVar1;
	switch (iLocal_913)
	{
		case 0:
			if (__LIB_2__::func_1(Local_53.f_192, 0, 1))
			{
				__LIB_2__::func_45(Local_53.f_192, Global_35, -1);
				__LIB_9__::func_640(&(vLocal_915[1 /*3*/]), 1);
				func_288(1);
			}
			break;
		case 1:
			if (PED::IS_PED_FACING_PED(Local_53.f_192, Global_35, 60f) || __LIB_9__::func_658(&(vLocal_915[1 /*3*/]), 1f))
			{
				__LIB_1__::func_148(&(vLocal_915[1 /*3*/]));
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_53.f_192, Global_35, 2000, false, 1);
				__LIB_2__::func_303(Local_53.f_192, 0, "HEADS_UP_THREATEN", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_9__::func_637(&(Local_277[Local_53.f_190 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
				func_288(2);
			}
			break;
		case 2:
			iVar1 = (Local_53.f_199 - 1);
			iVar0 = 0;
			while (iVar0 <= iVar1)
			{
				__LIB_9__::func_668(&Local_53, &Local_277, iVar0, "", "", 0, 1, 0, 0);
				iVar0++;
			}
			if (__LIB_9__::func_658(&(vLocal_915[1 /*3*/]), 2f))
			{
				func_288(3);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_176()
{
	if (!func_169(4))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_19, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_12, true, 0))
		{
			func_168(4);
		}
	}
	if (!func_169(64))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_11, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_17, true, 0))
		{
			func_168(64);
		}
	}
	if (!func_169(16))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_22, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_17, true, 0))
		{
			func_168(16);
		}
	}
	if (!func_169(128))
	{
		if (func_169(256) && (!__LIB_2__::func_1(Local_277[0 /*9*/].f_5, 0, 1) || !__LIB_2__::func_1(Local_277[1 /*9*/].f_5, 0, 1)))
		{
			if (func_294(7))
			{
				func_168(128);
			}
		}
	}
	if (!func_169(4))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_18, true, 0))
		{
			if (func_294(2))
			{
				func_168(4);
			}
		}
	}
	if (!func_169(8))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_17, true, 0))
		{
			if (func_294(3))
			{
				func_168(8);
			}
		}
	}
	if (!func_169(16))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_11, true, 0))
		{
			if (func_294(4))
			{
				func_168(16);
			}
		}
	}
	if (!func_169(32))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_23, true, 0) || (!__LIB_2__::func_1(Local_277[15 /*9*/].f_5, 0, 1) && !__LIB_2__::func_1(Local_277[16 /*9*/].f_5, 0, 1)))
		{
			if (func_294(5))
			{
				func_168(32);
			}
		}
	}
	if (!func_169(64))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_20, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_13, true, 0))
		{
			if (func_294(6))
			{
				func_168(64);
			}
		}
	}
}

void func_177()
{
	func_295();
}

int func_178()
{
	int iVar0;
	int iVar1;
	if (func_169(4))
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (__LIB_2__::func_1(Local_486[iVar1 /*9*/].f_5, 0, 1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_169(8))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (__LIB_2__::func_1(Local_532[iVar1 /*9*/].f_5, 0, 1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_169(16))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (__LIB_2__::func_1(Local_569[iVar1 /*9*/].f_5, 0, 1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_169(32))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (__LIB_2__::func_1(Local_606[iVar1 /*9*/].f_5, 0, 1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_169(64))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (__LIB_2__::func_1(Local_634[iVar1 /*9*/].f_5, 0, 1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	iVar0 = (iVar0 + __LIB_9__::func_608(&Local_277, Local_53.f_199, Local_53.f_199));
	Local_53.f_198 = iVar0;
	return Local_53.f_198;
}

bool func_179(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!__LIB_9__::func_641(iParam1, iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_5), 256))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		func_298(iParam0);
		__LIB_9__::func_622(iParam0);
		if (bParam4)
		{
			func_300(iParam0->f_205, bParam3, 0);
		}
		__LIB_9__::func_607(iParam0, 0);
		__LIB_0__::func_7(&(iParam0->f_5), 256);
		__LIB_0__::func_7(&(iParam0->f_5), 8);
	}
	return true;
}

void func_236(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!__LIB_0__::func_51(&(iParam1->f_5), 8) && !__LIB_0__::func_51(&(iParam1->f_5), 4))
	{
		iVar0 = __LIB_4__::func_6(iParam1->f_205);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_1__::func_44(iVar0))
			{
				if (!__LIB_0__::func_51(&(iParam1->f_5), 4096))
				{
					__LIB_9__::func_600(iParam1, 1);
					__LIB_0__::func_7(&(iParam1->f_5), 4096);
				}
				__LIB_9__::func_627(iParam1->f_205);
			}
		}
		else if (__LIB_1__::func_44(iVar0))
		{
			__LIB_9__::func_600(iParam1, 0);
			__LIB_9__::func_650(iParam1->f_205, iParam1->f_198);
			__LIB_0__::func_7(&(iParam1->f_5), 4);
		}
	}
	__LIB_9__::func_607(iParam1, 0);
	__LIB_9__::func_610(iParam1, 0);
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		__LIB_0__::func_325(&((iParam0[iVar1 /*9*/])->f_6));
		if ((CAM::IS_SCREEN_FADED_OUT() || (__LIB_0__::func_665((iParam0[iVar1 /*9*/])->f_5, Global_35, 0, 0) > 60f && ENTITY::IS_ENTITY_OCCLUDED((iParam0[iVar1 /*9*/])->f_5))) || __LIB_0__::func_665((iParam0[iVar1 /*9*/])->f_5, Global_35, 0, 0) > 100f)
		{
			__LIB_2__::func_426(&((iParam0[iVar1 /*9*/])->f_5));
		}
		iVar1++;
	}
	__LIB_1__::func_196(&(iParam1->f_214), 1, 1);
	__LIB_9__::func_601(uParam2);
	if (iParam1->f_201 > 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		HUD::_TEXT_DATABASE_DELETE(sParam4);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_358(&uVar2, 0);
	if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_215))
	{
		POPULATION::_0xA1CFB35069D23C23(iParam1->f_215);
		POPULATION::_0x74C2B3DC0B294102(iParam1->f_215);
		VOLUME::_DELETE_VOLUME(iParam1->f_215);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_216))
	{
		POPULATION::_0xA1CFB35069D23C23(iParam1->f_216);
		POPULATION::_0x74C2B3DC0B294102(iParam1->f_216);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(__LIB_0__::func_559(iParam1->f_205)))
	{
		POPULATION::_0xA1CFB35069D23C23(__LIB_0__::func_559(iParam1->f_205));
		POPULATION::_0x74C2B3DC0B294102(__LIB_0__::func_559(iParam1->f_205));
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
	__LIB_9__::func_639(iParam1, 0);
	__LIB_9__::func_654(0);
	__LIB_0__::func_8(&Global_1935630, 32);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

struct<4> func_246(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_131(iParam0, iParam1) };
	Var0.f_3 = func_132(iParam0, iParam1);
	return Var0;
}

bool func_272()
{
	if ((((MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_1), Global_36, false) > 25f && MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_2), Global_36, false) > 25f) && MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_3), Global_36, false) > 25f) && MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_4), Global_36, false) > 25f) && MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_5), Global_36, false) > 25f)
	{
		return false;
	}
	return true;
}

bool func_279(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 1:
			TASK::CLEAR_PED_TASKS(Local_277[iVar0 /*9*/].f_5, true, false);
			__LIB_9__::func_642(&(Local_277[iVar0 /*9*/]), 0, 0, 1, 0, 0);
			break;
		case 2:
			TASK::CLEAR_PED_TASKS(Local_277[iVar0 /*9*/].f_5, true, false);
			__LIB_9__::func_642(&(Local_277[iVar0 /*9*/]), 0, 0, 1, 0, 0);
			break;
		default:
			__LIB_9__::func_642(&(Local_277[iVar0 /*9*/]), 0, 0, 1, 0, 0);
			break;
	}
	return true;
}

bool func_283()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_1), Global_36, false) < 25f)
	{
		Local_53.f_190 = __LIB_9__::func_647(&Local_277, &Local_53, 0, 0, 0, 1);
	}
	else
	{
		Local_53.f_190 = __LIB_9__::func_647(&Local_277, &Local_53, 0, 0, 2, 3);
	}
	if (Local_53.f_190 < 0)
	{
		return false;
	}
	else
	{
		Local_53.f_192 = Local_277[Local_53.f_190 /*9*/].f_5;
		__LIB_9__::func_637(&(Local_277[Local_53.f_190 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
		return true;
	}
	return false;
}

void func_288(int iParam0)
{
	iLocal_913 = iParam0;
}

bool func_294(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 7:
			func_381(iParam0);
			if (__LIB_9__::func_663(&Local_53, &Local_449, joaat("REL_GANG_SMUGGLERS"), 0, 3))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (__LIB_2__::func_1(Local_449[iVar0 /*9*/].f_5, 0, 1))
					{
						__LIB_4__::func_7(Local_449[iVar0 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						PED::SET_PED_COMBAT_RANGE(Local_449[iVar0 /*9*/].f_5, 2);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_449[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_449[iVar0 /*9*/].f_5, true, false), 1f, 0, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_449[iVar0 /*9*/].f_5, 1);
						TASK::TASK_COMBAT_PED(Local_449[iVar0 /*9*/].f_5, Global_35, 0, 0);
						__LIB_9__::func_637(&(Local_449[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					}
					iVar0++;
				}
				Local_53.f_197 = 0;
				__LIB_9__::func_619(&Local_53, &Local_449, 0, 3);
				return true;
			}
			break;
		case 2:
			func_381(iParam0);
			if (__LIB_9__::func_663(&Local_53, &Local_486, joaat("REL_GANG_SMUGGLERS"), 0, 4))
			{
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (__LIB_2__::func_1(Local_486[iVar0 /*9*/].f_5, 0, 1))
					{
						__LIB_4__::func_7(Local_486[iVar0 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						PED::SET_PED_COMBAT_RANGE(Local_486[iVar0 /*9*/].f_5, 2);
						PED::_0xFC3DB99C8144CD81(Local_486[iVar0 /*9*/].f_5, Local_15.f_5, 0, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_486[iVar0 /*9*/].f_5, 1);
						TASK::TASK_COMBAT_PED(Local_486[iVar0 /*9*/].f_5, Global_35, 0, 0);
						__LIB_9__::func_637(&(Local_486[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					}
					iVar0++;
				}
				Local_53.f_197 = 0;
				__LIB_9__::func_619(&Local_53, &Local_486, 0, 4);
				return true;
			}
			break;
		case 3:
			func_381(iParam0);
			if (__LIB_9__::func_663(&Local_53, &Local_532, joaat("REL_GANG_SMUGGLERS"), 0, 3))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (__LIB_2__::func_1(Local_532[iVar0 /*9*/].f_5, 0, 1))
					{
						__LIB_4__::func_7(Local_532[iVar0 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						PED::SET_PED_COMBAT_RANGE(Local_532[iVar0 /*9*/].f_5, 2);
						PED::_0xFC3DB99C8144CD81(Local_532[iVar0 /*9*/].f_5, Local_15.f_5, 0, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_532[iVar0 /*9*/].f_5, 1);
						TASK::TASK_COMBAT_PED(Local_532[iVar0 /*9*/].f_5, Global_35, 0, 0);
						__LIB_9__::func_637(&(Local_532[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					}
					iVar0++;
				}
				Local_53.f_197 = 0;
				__LIB_9__::func_619(&Local_53, &Local_532, 0, 3);
				return true;
			}
			break;
		case 4:
			func_381(iParam0);
			if (__LIB_9__::func_663(&Local_53, &Local_569, joaat("REL_GANG_SMUGGLERS"), 0, 3))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (__LIB_2__::func_1(Local_569[iVar0 /*9*/].f_5, 0, 1))
					{
						__LIB_4__::func_7(Local_569[iVar0 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						PED::SET_PED_COMBAT_RANGE(Local_569[iVar0 /*9*/].f_5, 2);
						PED::_0xFC3DB99C8144CD81(Local_569[iVar0 /*9*/].f_5, Local_15.f_5, 0, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_569[iVar0 /*9*/].f_5, 1);
						TASK::TASK_COMBAT_PED(Local_569[iVar0 /*9*/].f_5, Global_35, 0, 0);
						__LIB_9__::func_637(&(Local_569[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					}
					iVar0++;
				}
				Local_53.f_197 = 0;
				__LIB_9__::func_619(&Local_53, &Local_569, 0, 3);
				return true;
			}
			break;
		case 5:
			func_381(iParam0);
			if (__LIB_9__::func_663(&Local_53, &Local_606, joaat("REL_GANG_SMUGGLERS"), 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (__LIB_2__::func_1(Local_606[iVar0 /*9*/].f_5, 0, 1))
					{
						__LIB_4__::func_7(Local_606[iVar0 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						PED::SET_PED_COMBAT_RANGE(Local_606[iVar0 /*9*/].f_5, 2);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_606[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_606[iVar0 /*9*/].f_5, true, false), 3f, 0, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_606[iVar0 /*9*/].f_5, 1);
						TASK::TASK_COMBAT_PED(Local_606[iVar0 /*9*/].f_5, Global_35, 0, 0);
						__LIB_9__::func_637(&(Local_606[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					}
					iVar0++;
				}
				Local_53.f_197 = 0;
				__LIB_9__::func_619(&Local_53, &Local_606, 0, 2);
				return true;
			}
			break;
		case 6:
			func_381(iParam0);
			if (__LIB_9__::func_663(&Local_53, &Local_634, joaat("REL_GANG_SMUGGLERS"), 0, 3))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (__LIB_2__::func_1(Local_634[iVar0 /*9*/].f_5, 0, 1))
					{
						__LIB_4__::func_7(Local_634[iVar0 /*9*/].f_5, joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						PED::SET_PED_COMBAT_RANGE(Local_634[iVar0 /*9*/].f_5, 2);
						PED::_0xFC3DB99C8144CD81(Local_634[iVar0 /*9*/].f_5, Local_15.f_5, 0, 0, 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_634[iVar0 /*9*/].f_5, 1);
						TASK::TASK_COMBAT_PED(Local_634[iVar0 /*9*/].f_5, Global_35, 0, 0);
						__LIB_9__::func_637(&(Local_634[iVar0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
					}
					iVar0++;
				}
				Local_53.f_197 = 0;
				__LIB_9__::func_619(&Local_53, &Local_634, 0, 3);
				return true;
			}
			break;
	}
	return false;
}

void func_295()
{
	switch (iLocal_914)
	{
		case 0:
			if (func_169(128) && (Local_53.f_192 == Local_277[0 /*9*/].f_5 || Local_53.f_192 == Local_277[1 /*9*/].f_5))
			{
				func_382(1);
			}
			else if (func_169(512))
			{
				func_382(9);
			}
			break;
		case 1:
			if (!__LIB_2__::func_1(Local_277[0 /*9*/].f_5, 0, 1) || !__LIB_2__::func_1(Local_277[1 /*9*/].f_5, 0, 1))
			{
				if (__LIB_2__::func_1(Local_277[3 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[3 /*9*/].f_5, -5968.23f, -3275.6f, -22.36f, 3f, 0, 0, 0);
				}
				if (__LIB_2__::func_1(Local_449[1 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_449[1 /*9*/].f_5, -5976.22f, -3257.31f, -22.58f, 6f, 0, 0, 0);
				}
				if (__LIB_2__::func_1(Local_449[2 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_449[2 /*9*/].f_5, -5993.12f, -3259.53f, -22.63f, 3f, 0, 0, 0);
				}
				if (__LIB_2__::func_1(Local_277[8 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[8 /*9*/].f_5, -6020.82f, -3270.25f, -22.65f, 3f, 0, 0, 0);
				}
				func_382(2);
			}
			break;
		case 2:
			if (!__LIB_2__::func_1(Local_449[1 /*9*/].f_5, 0, 1) && !__LIB_2__::func_1(Local_449[2 /*9*/].f_5, 0, 1))
			{
				if (__LIB_2__::func_1(Local_449[0 /*9*/].f_5, 0, 1))
				{
					PED::_0xFC3DB99C8144CD81(Local_449[0 /*9*/].f_5, Local_15.f_5, 0, 0, 0);
				}
				if (__LIB_2__::func_1(Local_449[3 /*9*/].f_5, 0, 1))
				{
					PED::_0xFC3DB99C8144CD81(Local_449[3 /*9*/].f_5, Local_15.f_5, 0, 0, 0);
				}
				if (__LIB_2__::func_1(Local_277[6 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[6 /*9*/].f_5, -6038.21f, -3262.7f, -19.26f, 3f, 0, 0, 0);
				}
				if (__LIB_2__::func_1(Local_277[13 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[13 /*9*/].f_5, -5965.56f, -3205.32f, -22.5f, 3f, 0, 0, 0);
				}
				func_382(3);
			}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 9:
			if (!__LIB_2__::func_1(Local_277[3 /*9*/].f_5, 0, 1) || !__LIB_2__::func_1(Local_277[4 /*9*/].f_5, 0, 1))
			{
				if (__LIB_2__::func_1(Local_277[0 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[0 /*9*/].f_5, -5968.23f, -3275.6f, -22.36f, 3f, 0, 0, 0);
				}
				if (__LIB_2__::func_1(Local_277[8 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[8 /*9*/].f_5, -6020.82f, -3270.25f, -22.65f, 3f, 0, 0, 0);
				}
				func_382(10);
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_1), Global_36, false) < 25f)
			{
				if (__LIB_2__::func_1(Local_277[3 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[3 /*9*/].f_5, -5968.23f, -3275.6f, -22.36f, 3f, 0, 0, 0);
				}
				if (__LIB_2__::func_1(Local_277[8 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[8 /*9*/].f_5, -6020.82f, -3270.25f, -22.65f, 3f, 0, 0, 0);
				}
				func_382(10);
			}
			break;
		case 10:
			if (!__LIB_2__::func_1(Local_277[0 /*9*/].f_5, 0, 1))
			{
				if (__LIB_2__::func_1(Local_277[6 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[6 /*9*/].f_5, -6038.21f, -3262.7f, -19.26f, 3f, 0, 0, 0);
				}
				if (__LIB_2__::func_1(Local_277[13 /*9*/].f_5, 0, 1))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_277[13 /*9*/].f_5, -5965.56f, -3205.32f, -22.5f, 3f, 0, 0, 0);
				}
				func_382(11);
			}
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			break;
	}
}

void func_298(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	iVar2 = 0;
	switch (iParam0->f_205)
	{
		case 9:
			iVar0 = 100;
			iVar1 = 150;
			iVar2 = joaat("EX_CONFED");
			break;
		case 16:
			iVar0 = 100;
			iVar1 = 150;
			if (!__LIB_0__::func_181())
			{
				iVar2 = joaat("ODRISCOLLS");
			}
			else
			{
				iVar2 = joaat("SAVAGES");
			}
			break;
		case 36:
			iVar0 = 75;
			iVar1 = 100;
			iVar2 = joaat("ODRISCOLLS");
			break;
		case 79:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = joaat("INBRED");
			break;
		case 125:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = joaat("BANDITOS");
			break;
		case 127:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = joaat("BANDITOS");
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 > 0)
	{
		Var4 = { __LIB_0__::func_38(joaat("KILLED"), iVar2) };
		STATS::STAT_ID_GET_INT(&Var4, &iVar3);
		if (iVar3 >= (iParam0->f_200 + iParam0->f_199))
		{
			func_384(iVar0, 1);
		}
		else
		{
			func_384(iVar1, 1);
		}
	}
}

void func_300(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = __LIB_4__::func_6(iParam0);
	if (!__LIB_0__::func_6(iVar0))
	{
		return;
	}
	func_386(iVar0, 1, bParam1, 0, 1);
	__LIB_9__::func_615(iParam0, -1);
	if (bParam2)
	{
		if (__LIB_1__::func_268(iVar0) >= 1)
		{
			__LIB_9__::func_616(iVar0, (__LIB_1__::func_268(iVar0) - 1));
		}
	}
	else
	{
		__LIB_0__::func_703(0, 12);
		iVar1 = __LIB_9__::func_602(iParam0);
		if (__LIB_1__::func_268(iVar0) <= 1)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("GANG_HIDEOUT_COMPLETED")), 1);
		}
		if (iVar1 != -1)
		{
			iVar2 = Global_40.f_9571[iVar1 /*10*/].f_1;
			if (iVar2 == 2 || iVar2 == 1)
			{
				Global_1392050[iVar1 /*14*/].f_1 |= 2;
			}
			iVar3 = 0;
			iVar4 = 12;
			iVar5 = 0;
			if (iVar1 >= 0 && iVar1 < 6)
			{
				Global_1393237.f_192[iVar1] = (__LIB_0__::func_485() / 1000);
			}
			switch (iVar1)
			{
				case 2:
					iVar3 = 0;
					iVar4 = 25;
					iVar5 = 0;
					break;
				case 0:
					if (iParam0 == 36)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 4;
					}
					else if (iParam0 == 16)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 8;
					}
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 1:
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 4:
					break;
			}
			__LIB_9__::func_645(__LIB_2__::func_116(iParam0, 1), 350f, 0);
			__LIB_2__::func_304(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

void func_358(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*uParam0, 8));
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*uParam0, 2) || __LIB_0__::func_1(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*uParam0, 32))
	{
		func_466(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		__LIB_1__::func_704(joaat("KIT_BANDANA"), 0);
	}
	func_468(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_381(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 7:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_487(&(Local_449[iVar0 /*9*/].f_1), &(Local_449[iVar0 /*9*/].f_4), 7, iVar0);
				Local_449[iVar0 /*9*/] = joaat("G_M_M_UNIBANDITOS_01");
				iVar0++;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_487(&(Local_486[iVar0 /*9*/].f_1), &(Local_486[iVar0 /*9*/].f_4), 2, iVar0);
				Local_486[iVar0 /*9*/] = joaat("G_M_M_UNIBANDITOS_01");
				iVar0++;
			}
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_487(&(Local_532[iVar0 /*9*/].f_1), &(Local_532[iVar0 /*9*/].f_4), 3, iVar0);
				Local_532[iVar0 /*9*/] = joaat("G_M_M_UNIBANDITOS_01");
				iVar0++;
			}
			break;
		case 4:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_487(&(Local_569[iVar0 /*9*/].f_1), &(Local_569[iVar0 /*9*/].f_4), 4, iVar0);
				Local_569[iVar0 /*9*/] = joaat("G_M_M_UNIBANDITOS_01");
				iVar0++;
			}
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_487(&(Local_606[iVar0 /*9*/].f_1), &(Local_606[iVar0 /*9*/].f_4), 5, iVar0);
				Local_606[iVar0 /*9*/] = joaat("G_M_M_UNIBANDITOS_01");
				iVar0++;
			}
			break;
		case 6:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_487(&(Local_634[iVar0 /*9*/].f_1), &(Local_634[iVar0 /*9*/].f_4), 6, iVar0);
				Local_634[iVar0 /*9*/] = joaat("G_M_M_UNIBANDITOS_01");
				iVar0++;
			}
			break;
	}
}

void func_382(int iParam0)
{
	iLocal_914 = iParam0;
}

void func_384(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (func_488(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (__LIB_0__::func_91())
	{
		iVar1 = 0;
	}
	__LIB_3__::func_418(iParam0, iVar1);
}

void func_386(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_746(iParam0) == 4)
	{
		__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam3)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_267(1);
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	bVar1 = __LIB_0__::func_2() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		__LIB_1__::func_421(0, 2);
		if (!bVar1 && bParam1)
		{
			__LIB_1__::func_755();
		}
	}
	else
	{
		__LIB_1__::func_142(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		__LIB_0__::func_870(iParam0);
	}
	else
	{
		Var2 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!__LIB_0__::func_13(32768))
		{
			Var4 = { __LIB_0__::func_14(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && __LIB_0__::func_291(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (__LIB_0__::func_76(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((__LIB_0__::func_76(iParam0) != 95 && __LIB_0__::func_76(iParam0) != 82) && !__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		__LIB_1__::func_641(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_1__::func_642(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = __LIB_1__::func_145(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_1__::func_629(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = __LIB_0__::func_308(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_300(1);
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				__LIB_0__::func_747(45, 0, 1);
				break;
			case 8:
				iVar10 = __LIB_0__::func_310(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (__LIB_0__::func_311(__LIB_0__::func_76(iParam0)))
				{
					__LIB_1__::func_715(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 2:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 6:
				__LIB_0__::func_747(__LIB_0__::func_312(__LIB_0__::func_872(iParam0)), 0, 1);
				break;
			case 5:
				__LIB_0__::func_747(120, 0, 1);
				break;
		}
	}
	__LIB_1__::func_144(iParam0, 1);
	__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
	__LIB_1__::func_470(iParam0);
	if ((!__LIB_0__::func_291(iParam0) == 0 && bParam1) && __LIB_0__::func_2() == -1)
	{
		iVar12 = __LIB_1__::func_24(iParam0);
		if (iVar12 != -1)
		{
			__LIB_0__::func_867(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = __LIB_1__::func_194();
			if (iVar12 != -1)
			{
				__LIB_0__::func_867(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (__LIB_0__::func_76(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
			case 8:
				if (__LIB_0__::func_76(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
		}
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		if (bParam3)
		{
			__LIB_1__::func_242(iParam0, 6);
		}
		else
		{
			__LIB_1__::func_242(iParam0, 5);
		}
		__LIB_1__::func_470(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						__LIB_0__::func_873();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_523(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_523(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_523(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_523(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_523(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_523(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_523(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_523(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_523(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_523(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_523(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_523(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_523(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_523(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_523(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_523(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_523(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_523(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_523(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_523(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_523(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_523(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_523(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_523(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_523(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525();
						func_526(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_523(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_386(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						__LIB_0__::func_875();
						break;
					case 26:
						__LIB_0__::func_876();
						break;
					case 17:
						func_534(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!__LIB_0__::func_878(joaat("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = __LIB_0__::func_23();
							__LIB_1__::func_446(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							__LIB_1__::func_612(joaat("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						__LIB_0__::func_879();
						break;
					case 37:
						__LIB_0__::func_880();
						if (__LIB_0__::func_26())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						__LIB_0__::func_881();
						break;
					case 43:
						__LIB_0__::func_882();
						break;
					case 44:
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_386(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_386(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						__LIB_0__::func_883();
						break;
					case 59:
						__LIB_0__::func_884();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						__LIB_0__::func_886();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							__LIB_1__::func_240(451, 0);
						}
						if (!__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_05")))
						{
							if (__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (__LIB_0__::func_315(4))
						{
							if (!__LIB_1__::func_707(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_523(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_523(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
						break;
					case 68:
						__LIB_0__::func_887();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						__LIB_0__::func_888();
						__LIB_1__::func_146(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						break;
					case 70:
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						break;
					case 71:
						__LIB_1__::func_146(-5500);
						break;
				}
				break;
			case 8:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						__LIB_0__::func_889();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						__LIB_0__::func_890();
						break;
					case 66:
						__LIB_0__::func_891();
						__LIB_1__::func_599();
						break;
					case 67:
						if (!__LIB_0__::func_892(6))
						{
							__LIB_0__::func_893(6);
						}
						if (!__LIB_0__::func_892(3))
						{
							__LIB_0__::func_893(3);
						}
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(46500);
						}
						break;
				}
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						switch (__LIB_0__::func_872(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		__LIB_0__::func_894(iParam0);
		func_560();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_1__::func_777(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_1__::func_777(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_1__::func_777(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_1__::func_777(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_1__::func_777(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_1__::func_777(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_1__::func_777(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_1__::func_777(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_1__::func_777(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_1__::func_777(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_523(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_1__::func_777(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_1__::func_777(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_1__::func_777(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_1__::func_777(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_1__::func_777(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 536870912))
				{
					__LIB_0__::func_896(11, 1);
				}
				switch (__LIB_0__::func_76(iParam0))
				{
					case 109:
						__LIB_1__::func_777(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_1__::func_777(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_1__::func_777(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_1__::func_777(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_1__::func_777(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!__LIB_0__::func_291(iParam0) == 0)
			{
				if (__LIB_0__::func_299(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						__LIB_1__::func_790(__LIB_1__::func_613(Global_1879514.f_1));
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			__LIB_0__::func_703(bParam2, iVar20);
		}
	}
	__LIB_0__::func_301(1);
	if ((bVar13 || __LIB_1__::func_195()) && (__LIB_0__::func_700(iParam0) == 1 || __LIB_0__::func_700(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

int func_466(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = func_651(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_653(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	__LIB_1__::func_467(1, (__LIB_0__::func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_1__::func_452(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_1__::func_452(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_1__::func_452(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_1__::func_452(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_1__::func_452(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_468(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bVar4 = __LIB_0__::func_2() != -1;
	Global_1946804.f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477.f_189 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477.f_189);
			}
			if ((Global_1946804.f_1 == -2125499975 || Global_1946804.f_1 == -449205311) && Global_1347477.f_190 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477.f_190);
			}
			__LIB_0__::func_155(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_664(iParam1, 29, bVar4, 1, 0);
			func_664(iParam1, 31, bVar4, 1, 0);
			func_664(iParam1, 30, bVar4, 1, 0);
			func_664(iParam1, 22, bVar4, 1, 0);
			func_664(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((__LIB_0__::func_156(32768) && __LIB_0__::func_555(1108822547, 8)) && __LIB_0__::func_157(10, iParam3))
	{
		func_667(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = Global_1946804.f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_668(iVar1, 1);
			if (__LIB_0__::func_555(iVar3, 8))
			{
			}
			else if (Global_1946804.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!__LIB_0__::func_157(iVar1, iParam3))
				{
				}
				else if ((__LIB_0__::func_555(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!__LIB_0__::func_555(iVar3, 1) || bParam2)
					{
						Global_1946804.f_857++;
						if (!bParam6)
						{
							func_664(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_669(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_2456[iVar1 /*2*/]) && uParam0->f_1[iVar1 /*3*/].f_1 == Global_1946804.f_2456[iVar1 /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
							{
								func_664(iParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946804.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (__LIB_0__::func_555(iVar3, 1))
							{
								__LIB_0__::func_550(iVar3, 1, 6);
							}
							Global_1946804.f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1 /*3*/].f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, uParam0->f_1[iVar1 /*3*/].f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804.f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

void func_487(var uParam0, var uParam1, int iParam2, int iParam3)
{
	*uParam0 = { func_131(iParam2, iParam3) };
	*uParam1 = func_132(iParam2, iParam3);
}

bool func_488(var uParam0)
{
	if (-1829635046 == func_690(81053684))
	{
		if (func_691(uParam0))
		{
			return true;
		}
	}
	else if (func_692(-525676072, uParam0))
	{
		if (func_691(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_523(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_1__::func_757(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_523(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		func_756(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_1__::func_842(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			func_762(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				__LIB_1__::func_796(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (__LIB_1__::func_709())
			{
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_846(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return false;
			}
			func_776(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_523(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_523(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_523(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_523(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_523(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_523(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				func_777(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_523(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				func_756(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_466(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_466(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_523(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_523(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_800(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_801(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_523(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_1__::func_157(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_525()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_814();
	func_815();
	func_816();
	func_817();
	func_818();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_526(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_821(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		__LIB_1__::func_798(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(func_824(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_827(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_827(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
				{
					__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
		{
			__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

int func_534(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = func_651(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	__LIB_0__::func_922(iParam3);
	return func_466(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_560()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if ((__LIB_0__::func_296(0, 0, 1) || __LIB_0__::func_383()) || __LIB_1__::func_195())
	{
		return;
	}
	iVar0 = __LIB_1__::func_194();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_846(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		__LIB_1__::func_103(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		__LIB_0__::func_703(0, -1);
	}
	if (iVar2 > 0)
	{
		__LIB_0__::func_45("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_385(1, 0);
	Global_1956575.f_4 = 1;
}

int func_651(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_668(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_653(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { __LIB_1__::func_615(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(func_651(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 866047851) && __LIB_0__::func_545(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((__LIB_0__::func_156(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		__LIB_0__::func_968(func_668(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	__LIB_1__::func_40(iParam2);
	__LIB_1__::func_41(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		__LIB_0__::func_47(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		__LIB_0__::func_47(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	__LIB_1__::func_455(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = func_907(iParam0, iParam2, iParam1, __LIB_0__::func_2() != -1);
	if (bParam4)
	{
		func_908(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		func_908(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				__LIB_0__::func_550(func_668(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_664(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = func_668(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = __LIB_0__::func_861(iParam4);
		}
		else if (iParam4 != Global_1946804.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_METAPED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(iParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::_SET_PED_COMPONENT_DISABLED(iParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0);
			}
			iVar0++;
		}
	}
}

void func_667(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 10;
	if (__LIB_0__::func_555(1108822547, 6))
	{
		if (bParam2)
		{
			func_664(iParam0, iVar0, __LIB_0__::func_2() != -1, 0, 0);
			func_669(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804.f_2776.f_1, Global_1946804.f_2776.f_3[0], Global_1946804.f_2776.f_3[1], Global_1946804.f_2776.f_3[2], Global_1946804.f_2776.f_8, Global_1946804.f_2776.f_9, Global_1946804.f_2776.f_10, Global_1946804.f_2776.f_11);
		__LIB_0__::func_550(1108822547, 1, 6);
	}
	Global_1946804.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

int func_668(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
			return 1900541263;
			return -1489346253;
			return -358215195;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}
void func_669(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[__LIB_0__::func_161(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[__LIB_0__::func_161(iParam0, 1) /*11*/].f_10 || iParam1);
}

int func_690(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_161(func_918(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_691(var uParam0)
{
	if (func_692(81053684, uParam0))
	{
		return true;
	}
	if (func_692(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_692(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_161(func_918(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (__LIB_0__::func_357(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

void func_756(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_967(iParam0);
}

void func_762(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_973(Global_35, iParam0, &uVar0))
		{
			func_466(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

void func_776(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				__LIB_1__::func_797(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			__LIB_1__::func_797(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			__LIB_1__::func_797(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			__LIB_1__::func_797(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			__LIB_1__::func_797(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			__LIB_1__::func_797(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			__LIB_1__::func_797(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COIN"):
			__LIB_1__::func_797(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINPURSE"):
			__LIB_1__::func_797(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSACK"):
			__LIB_1__::func_797(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSTACK"):
			__LIB_1__::func_797(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			__LIB_1__::func_797(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			Jump @947; //curOff = 572
			__LIB_1__::func_797(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			Jump @947; //curOff = 603
			if (!__LIB_1__::func_202())
			{
				__LIB_1__::func_797(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			Jump @947; //curOff = 642
			__LIB_1__::func_797(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			Jump @947; //curOff = 673
			__LIB_1__::func_797(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			Jump @947; //curOff = 704
			__LIB_1__::func_797(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			Jump @947; //curOff = 728
			__LIB_1__::func_797(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			Jump @947; //curOff = 752
			__LIB_1__::func_797(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			Jump @947; //curOff = 776
			__LIB_1__::func_797(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			Jump @947; //curOff = 800
			__LIB_1__::func_797(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			Jump @947; //curOff = 824
			__LIB_1__::func_797(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			Jump @947; //curOff = 848
			__LIB_1__::func_797(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			Jump @947; //curOff = 872
			__LIB_1__::func_797(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			Jump @947; //curOff = 896
			__LIB_1__::func_797(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			Jump @947; //curOff = 920
			__LIB_1__::func_797(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
		}
void func_777(int iParam0)
{
	if (__LIB_1__::func_154(41))
	{
		__LIB_1__::func_240(363, 0);
	}
	else
	{
		__LIB_1__::func_240(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_01"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_01"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_01"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_02"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_02"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_02"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_03"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_03"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_03"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_04"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_04"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_04"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_05"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_05"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_05"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_06"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_06"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_06"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_07"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_07"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_07"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_08"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_08"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_08"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_09"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_09"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_09"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_10"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_10"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_10"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_11"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_11"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_11"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_12"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_12"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_12"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_13"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_13"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_13"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_14"));
			__LIB_1__::func_409(joaat("LEGENDARY_FISHING_SPOT_14"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_800(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_335(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_466(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_756(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_801(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1023(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1023(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1023(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1023(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1023(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1023(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1023(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1023(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1023(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1023(-1, iParam0);
	}
}

void func_814()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1035(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			__LIB_1__::func_851();
		}
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	__LIB_1__::func_116();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_1035(1);
}

void func_815()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_523(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_816()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1038(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_1038(1);
}

void func_817()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1038(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	__LIB_1__::func_616(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1038(1);
}

void func_818()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_523(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(1))
			{
				__LIB_0__::func_368(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_523(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(2))
			{
				__LIB_0__::func_368(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !__LIB_0__::func_458(4))
		{
			__LIB_0__::func_368(4);
		}
		if (__LIB_0__::func_458(0))
		{
			__LIB_0__::func_459(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_821(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_821(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (__LIB_0__::func_458(1))
		{
			__LIB_0__::func_459(1);
		}
		if (__LIB_0__::func_458(2))
		{
			__LIB_0__::func_459(2);
		}
		if (__LIB_0__::func_458(4))
		{
			__LIB_0__::func_459(4);
		}
		if (!__LIB_0__::func_458(0))
		{
			__LIB_0__::func_368(0);
		}
	}
}

int func_821(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = __LIB_0__::func_937(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_821(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_824(int iParam0)
{
	struct<5> Var0;
	Var0 = { __LIB_1__::func_615(iParam0, 1, 0) };
	return func_651(Var0.f_4);
}

bool func_827(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	Var4 = __LIB_0__::func_790(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1052(uParam0, __LIB_0__::func_461(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = __LIB_0__::func_161(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946804.f_2612[Global_1946804.f_2652] = iVar1;
				Global_1946804.f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (__LIB_0__::func_948(iVar3) && __LIB_0__::func_220(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804.f_2652)
						{
							__LIB_1__::func_455(uParam0, uParam0->f_1[Global_1946804.f_2612[iVar1] /*3*/], Global_1946804.f_2612[iVar1], 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

int func_846(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_63(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	__LIB_0__::func_794(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (__LIB_0__::func_192(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { __LIB_1__::func_615(iVar0, 0, 1) };
	iVar10 = __LIB_1__::func_119(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1065(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_523(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_907(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = __LIB_0__::func_602(0);
	if (iParam2 != 0 && __LIB_0__::func_219(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (__LIB_0__::func_220(iParam0, func_668(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_908(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	bVar6 = __LIB_0__::func_2() != -1;
	iVar7 = __LIB_0__::func_602(0);
	if (__LIB_0__::func_156(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = Global_1946804.f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_668(iVar0, 1);
			if (__LIB_0__::func_555(iVar5, 8))
			{
			}
			else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (__LIB_0__::func_555(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = __LIB_0__::func_546(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = __LIB_0__::func_221(uParam0);
				if (iVar3 > 0)
				{
					if (!__LIB_0__::func_156(524288))
					{
						__LIB_0__::func_155(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = Global_1946804.f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_668(iVar0, 1);
							if (__LIB_0__::func_555(iVar5, 8))
							{
							}
							else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (__LIB_0__::func_555(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = __LIB_0__::func_546(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										__LIB_1__::func_41(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					__LIB_0__::func_194(524288);
				}
			}
		}
	}
}

int func_918(int iParam0)
{
	int iVar0;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_651(iVar0);
}

void func_967(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						__LIB_1__::func_825(iVar0, 1, 752097756);
					}
					func_466(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_1__::func_825(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					__LIB_1__::func_825(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1152();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

bool func_973(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	if (__LIB_0__::func_356(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = __LIB_0__::func_2() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (__LIB_0__::func_357(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_824(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (__LIB_0__::func_192(iParam1, 866047851))
	{
		iVar5 = __LIB_0__::func_161(iVar4, 1);
		if (__LIB_0__::func_545(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = __LIB_0__::func_357(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && __LIB_0__::func_192(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (func_692(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = __LIB_0__::func_546(iVar8, iVar4, iVar2, bVar1);
				iVar9 = __LIB_0__::func_546(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = __LIB_0__::func_357(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_1023(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_1183(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_1183(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

void func_1035(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_523(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_523(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_523(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1189(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_526(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_821(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1195(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		__LIB_1__::func_178(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (__LIB_0__::func_809(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				__LIB_0__::func_810(iVar6, iVar7);
				__LIB_0__::func_811(iVar6, iVar8);
				__LIB_0__::func_812(iVar6, iVar9);
				__LIB_0__::func_813(iVar6, 0);
				if (__LIB_1__::func_127(iVar6))
				{
					__LIB_1__::func_608(iVar6);
				}
				iVar10 = __LIB_0__::func_553(iVar8);
				__LIB_1__::func_820(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

void func_1038(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_523(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_523(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_523(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_523(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_523(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_523(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_523(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_523(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_523(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_523(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_523(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_821(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_821(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_821(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_821(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_821(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_821(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_821(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_821(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_821(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_821(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_821(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		__LIB_1__::func_178(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (__LIB_0__::func_809(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				__LIB_0__::func_810(iVar0, iVar1);
				__LIB_0__::func_811(iVar0, iVar2);
				__LIB_0__::func_812(iVar0, iVar3);
				__LIB_0__::func_813(iVar0, 0);
				if (__LIB_1__::func_127(iVar0))
				{
					__LIB_1__::func_608(iVar0);
				}
				iVar4 = __LIB_0__::func_553(iVar2);
				__LIB_1__::func_820(iVar0, iVar4);
			}
			iVar0++;
		}
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_1052(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (__LIB_0__::func_65(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			iVar7 = func_668(iVar0, 1);
			if (__LIB_0__::func_157(iVar0, iParam1))
			{
				vVar4 = { __LIB_0__::func_377(iVar0, -1) };
				if ((vVar4.x != Global_1946804.f_57[iVar0 /*11*/] && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (__LIB_0__::func_555(iVar7, 4))
				{
					__LIB_0__::func_550(iVar7, 4, 6);
				}
			}
			else
			{
				func_669(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = Global_1946804.f_57[iVar0 /*11*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

int func_1065(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	if (__LIB_0__::func_192(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = __LIB_0__::func_372(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = __LIB_0__::func_374(iVar62, iVar61);
					if (__LIB_0__::func_144(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1065(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1065(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

void func_1152()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1244();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_1183(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_756(50);
			}
			else
			{
				func_756(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_756(51);
			}
			else
			{
				func_756(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1253(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			func_756(24);
			if (bParam1)
			{
				if (!func_1253(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

void func_1189(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;
	func_821(iParam0, 1, 1, -142743235, 1);
	iVar34 = __LIB_1__::func_415(iParam0, &uVar18);
	__LIB_1__::func_82(iParam0, &uVar18, &iVar34, 1);
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	__LIB_0__::func_827(iParam0, &(Global_26796.f_627.f_121.f_20));
	__LIB_1__::func_798(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_821(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (__LIB_0__::func_357(uVar18[iVar36]))
		{
			case -2061583405:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		__LIB_1__::func_798(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(func_824(uVar18[iVar36]), 1);
		iVar36++;
	}
	__LIB_0__::func_608(&(Global_1946804.f_1616));
	func_827(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == __LIB_0__::func_780(iVar0[iVar36], iVar35))
			{
				__LIB_1__::func_798(__LIB_0__::func_998(iVar35), 1, 1);
				__LIB_0__::func_999(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!__LIB_0__::func_65(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946804.f_1497.f_1[iVar37 /*3*/] = { Global_1946804.f_1616.f_1[iVar37 /*3*/] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946804.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
	{
		if (!__LIB_0__::func_609(8))
		{
			if (__LIB_0__::func_241() == -2125499975)
			{
				if (bVar17)
				{
					func_827(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_827(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					__LIB_0__::func_828(Global_40.f_7729, 4096);
					__LIB_0__::func_806(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					func_1269(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_827(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	func_827(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946804.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946804.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946804.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946804.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946804.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946804.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946804.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946804.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946804.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946804.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946804.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

void func_1195(struct<6> Param0)
{
	if (!func_1280(Param0.f_4, 1))
	{
	}
	if (!func_1280(Param0, 1))
	{
	}
	if (!func_1280(Param0.f_2, 1))
	{
	}
	if (!func_1280(Param0.f_5, 1))
	{
	}
	if (!func_1280(Param0.f_3, 1))
	{
	}
	if (!func_1280(Param0.f_1, 1))
	{
	}
}

void func_1244()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_0__::func_840(Global_35, &uVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	__LIB_1__::func_828(0);
	func_1328(7);
	func_1329(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		func_1329(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_1329(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

bool func_1253(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_1__::func_707(func_1335(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

int func_1269(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_223(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = __LIB_0__::func_998(iParam1);
	}
	if ((bParam3 && __LIB_0__::func_805(iParam1, 4096)) && Global_1946804.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !__LIB_1__::func_87(iVar0, Global_1946804.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		__LIB_0__::func_828(Global_40.f_7729, 4096);
		__LIB_0__::func_806(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		__LIB_0__::func_207(iParam0);
	}
	__LIB_1__::func_10();
	if (!__LIB_0__::func_58(iParam1))
	{
		func_1342(iVar0, iParam0, __LIB_0__::func_846(iParam1), 1, 0, 1);
	}
	__LIB_0__::func_660(iParam0);
	return 1;
}

bool func_1280(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_703(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { __LIB_1__::func_124() };
	Var14 = { __LIB_0__::func_429(iParam0, Var10, iVar9, 0) };
	if (__LIB_1__::func_556(Var14, iParam1))
	{
		if (__LIB_0__::func_847(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_1280(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1280(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1280(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1280(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_1328(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_94(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_26796.f_20;
		Global_1946804.f_2657.f_21 = Global_26796.f_21;
		Global_1946804.f_2657.f_22 = Global_26796.f_22;
		Global_1946804.f_2657.f_23 = Global_26796.f_23;
		Global_1946804.f_2657.f_24 = Global_26796.f_24;
		Global_1946804.f_2657.f_25 = Global_26796.f_25;
		Global_1946804.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar2) != -999503751)
		{
			func_1368(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (__LIB_1__::func_701(iVar2, 0))
		{
			__LIB_1__::func_704(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1329(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_673(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_357(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1370(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1370(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1370(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1370(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1370(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1370(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == __LIB_0__::func_856(0))
	{
		__LIB_1__::func_705(iParam0, 1);
		if (__LIB_0__::func_241() == 1160113249)
		{
			__LIB_1__::func_705(__LIB_0__::func_856(-2125499975), 0);
		}
		else
		{
			__LIB_1__::func_705(__LIB_0__::func_856(1160113249), 0);
		}
	}
	__LIB_0__::func_460();
	if (__LIB_1__::func_18(iVar0))
	{
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), iParam0, 0);
	}
	__LIB_1__::func_704(iParam0, bParam3);
	if (bParam2)
	{
		__LIB_0__::func_719(0, 0);
	}
}

int func_1335(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return __LIB_0__::func_674(iParam0);
		case 1:
			return func_1375(iParam0);
		case 2:
			return func_1376(iParam0);
		case 3:
			return __LIB_0__::func_677(iParam0);
	}
	return 0;
}

void func_1342(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = __LIB_0__::func_449(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_0__::func_191();
	if (bParam5)
	{
		if (!func_1388(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (__LIB_0__::func_156(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		__LIB_0__::func_945();
	}
	__LIB_1__::func_443(iVar3, 1, 1, 1, 1, 1);
	__LIB_1__::func_452(31, 0, 0, 0, 0);
	__LIB_1__::func_36(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			__LIB_1__::func_452(2, iVar1, 2, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_468(&(Global_1946804.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_1368(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	func_1396(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

int func_1370(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	iVar1 = iParam0;
	if (Global_1946804.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (__LIB_0__::func_554(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !__LIB_1__::func_701(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		func_1368(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
			return 0;
		}
int func_1376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		default:
			break;
	}
	return 0;
}

bool func_1388(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_1__::func_138(uParam0, iParam3, iParam2) && !func_827(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (__LIB_0__::func_156(32768))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/]))
		{
			__LIB_0__::func_968(1108822547);
		}
		else
		{
			func_1399(1108822547);
		}
	}
	func_908(uParam0, 0, 0);
	__LIB_0__::func_245(iParam5);
	return true;
}

void func_1396(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(func_824(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		__LIB_1__::func_192(uParam0);
	}
}

void func_1399(int iParam0)
{
	func_669(iParam0, 8, 6);
}

