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
	char* sLocal_15 = NULL;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 24;
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
	var uLocal_116 = 0;
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
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								func_25();
								__LIB_0__::func_11();
								__LIB_1__::func_886(iLocal_121);
								func_28(iLocal_121);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_119 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_121);
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
							__LIB_4__::func_504(&Global_1898004, iLocal_121);
							__LIB_1__::func_891(iLocal_121);
							__LIB_0__::func_24(iLocal_121, 8);
							if (__LIB_1__::func_938())
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
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(787.8243f, 882.1937f, 119.7894f, 0f, 0f, 55f, 125.2023f, 100.3452f, 40f, "Carmody Dell - m_volTown");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Carmody Dell - m_volRancherThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 806.7073f, 912.1846f, 117.3476f, 0f, 0f, -35.32174f, 53.76932f, 60.14007f, 23.00237f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 780.8397f, 929.7451f, 119.7875f, 0f, 0f, 55.18388f, 26.30651f, 11.24122f, 11.33113f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 771.6188f, 914.839f, 119.356f, 0f, 0f, -16.63371f, 8.920543f, 13.65767f, 15.37034f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 795.0371f, 944.3275f, 119.356f, 0f, 0f, -64.24297f, 8.920543f, 19.18642f, 15.37034f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 816.5428f, 873.1447f, 119.356f, 0f, 0f, -21.77554f, 8.920543f, 2.767935f, 15.37034f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 829.7242f, 889.6086f, 119.7875f, 0f, 0f, 55.18388f, 41.18428f, 11.24122f, 11.33113f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 769.6929f, 907.6835f, 120.974f, 0f, 0f, 0f, 4.125297f, 4.231483f, 6.104111f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 839.9313f, 911.4315f, 119.4895f, 0f, 0f, 0f, 8.364783f, 12.69234f, 6.104111f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 832.4132f, 889.8692f, 119.4895f, 0f, 0f, 143.33f, 8.994324f, 22.29211f, 6.104111f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 822.2815f, 932.1641f, 119.4895f, 0f, 0f, -126.8662f, 8.994324f, 31.08295f, 6.104111f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 819.2129f, 855.7402f, 118.2282f, 0f, 0f, -13.96608f, 5.387506f, 5.559112f, 8.634696f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 820.7993f, 861.1673f, 118.2282f, 0f, 0f, -10.02887f, 5.561343f, 7.297987f, 8.634696f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 769.4434f, 876.2131f, 120.0194f, 0f, 0f, -25.51114f, 10.21165f, 6.687877f, 8.634696f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 766.2256f, 872.457f, 120.0194f, 0f, 0f, -25.51114f, 5.492983f, 4.760298f, 8.634696f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 777.969f, 848.5886f, 120.9221f, 0f, 0f, -73.17738f, 11.36973f, 8.455206f, 8.634696f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 772.6626f, 844.5665f, 118.6478f, 0f, 0f, -73.17738f, 6.30228f, 3.996295f, 8.634696f);
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Carmody Dell - m_volRancherRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_16, iLocal_17);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 797.8185f, 892.8757f, 117.3476f, 0f, 0f, -35.32174f, 90.11897f, 71.78452f, 23.00237f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 775.4374f, 864.7417f, 119.4895f, 0f, 0f, -125.795f, 37.58796f, 46.28559f, 7.161122f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 817.8414f, 923.5469f, 119.4895f, 0f, 0f, -125.795f, 37.58796f, 46.28559f, 7.161122f);
		iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Carmody Dell - m_volRancherWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_18, iLocal_16);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, 797.2189f, 892.9724f, 119.4895f, 0f, 0f, -125.795f, 87.08194f, 67.53848f, 13.34678f);
		sLocal_15 = "CARMODY_DELL";
		LAW::_CREATE_GUARD_ZONE(sLocal_15);
		LAW::_0x8C598A930F471938(sLocal_15, iLocal_14);
		LAW::_0x35815F372D43E1E5(sLocal_15, iLocal_16);
		LAW::_0xA1B0E6301E2E02A6(sLocal_15, iLocal_17);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_15, iLocal_18);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_15, 775.9428f, 849.0016f, 121.7797f);
		LAW::_0xA8A74AA79FB67159(sLocal_15, iLocal_14);
	}
	return true;
}

void func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	iParam0 = iParam0;
	__LIB_0__::func_68(883522755, 0, 0);
	__LIB_0__::func_68(1038094132, 0, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(883522755, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(1038094132, 0);
	iVar0 = 869;
	iVar1 = __LIB_1__::func_334(iVar0);
	if (__LIB_0__::func_255(iVar1, 0))
	{
		return;
	}
	if (__LIB_0__::func_113())
	{
		__LIB_0__::func_928(&uLocal_19, iVar1, "CRAWFORD_SR", 0);
		__LIB_0__::func_928(&uLocal_19, Global_35, "ARTHUR", 0);
	}
}

void func_25()
{
	__LIB_6__::func_662(1, 1);
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = 869;
	iVar1 = __LIB_1__::func_334(iVar0);
	if (!__LIB_0__::func_255(iVar1, 0))
	{
		__LIB_2__::func_812(iVar0, iLocal_16, 1);
		__LIB_2__::func_812(740, iLocal_16, 0);
		__LIB_2__::func_812(737, iLocal_16, 0);
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_16, 3, 1);
		VOLUME::_0x53D05D60E5F5B40C(iLocal_16, 3, 1, __LIB_0__::func_120(740));
		VOLUME::_0x53D05D60E5F5B40C(iLocal_16, 3, 1, __LIB_0__::func_120(737));
		PED::_0x931B241409216C1F(__LIB_1__::func_334(iVar0), __LIB_1__::func_334(737), 0);
	}
}

bool func_38(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	func_61();
	func_62();
	if (__LIB_0__::func_113())
	{
		func_63();
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
		func_83(iLocal_121);
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

void func_61()
{
	bool bVar0;
	if (func_102(1))
	{
		return;
	}
	if (__LIB_0__::func_770(1, 2))
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_627(94, 0) && !__LIB_1__::func_200(94))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if ((__LIB_6__::func_665(869) && __LIB_6__::func_665(740)) && __LIB_6__::func_665(737))
		{
			func_107(1);
		}
		else
		{
			func_108(1);
		}
	}
}

void func_62()
{
	int iVar0;
	bool bVar1;
	if (__LIB_0__::func_768(1, 4))
	{
		return;
	}
	if (__LIB_0__::func_768(1, 32))
	{
		return;
	}
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_4__::func_55(1));
	bVar1 = false;
	if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		return;
	}
	if (__LIB_4__::func_267(94) || __LIB_1__::func_200(94))
	{
		LAW::_REMOVE_GUARD_ZONE(sLocal_15);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_16))
		{
			VOLUME::_0x998202B206872672(iLocal_16);
			VOLUME::_0x6D5F9E69BA1BE783(iLocal_16);
			VOLUME::_DELETE_VOLUME(iLocal_16);
		}
	}
	if (__LIB_0__::func_770(1, 8))
	{
		func_112(269047710, 1, 0);
		func_113(&iVar0, "_car_house_int_after_ransack", &bVar1);
		func_114(&iVar0, "_car_house_int_before_ransack", &bVar1);
		func_114(&iVar0, "_car_house_int_lowvauleitems", &bVar1);
		func_114(&iVar0, "_car_house_int_night", &bVar1);
		func_114(&iVar0, "_car_house_int_night_pickup_whiskey", &bVar1);
		func_114(&iVar0, "_car_house_int_day", &bVar1);
		func_114(&iVar0, "_car_house_int_day_pickup_cheese", &bVar1);
		func_114(&iVar0, "_car_house_int_day_pickup_bread", &bVar1);
		func_114(&iVar0, "_car_house_int_day_pickup_whiskey", &bVar1);
		func_114(&iVar0, "_car_house_int_pickup_medicine", &bVar1);
		__LIB_5__::func_440("hmrb_crd_interior_night");
		__LIB_5__::func_440("hmrb_crd_interior_day");
		__LIB_5__::func_441("hmrb_crd_interior_ransacked");
	}
	else if (((__LIB_4__::func_267(94) || __LIB_1__::func_200(94)) || __LIB_0__::func_768(1, 8)) || __LIB_0__::func_768(1, 16))
	{
		if (__LIB_0__::func_768(1, 8) || ((!__LIB_0__::func_756(1, -2147483648) && CLOCK::GET_CLOCK_HOURS() >= 6) && CLOCK::GET_CLOCK_HOURS() < 21))
		{
			func_112(269047710, 0, 0);
			func_114(&iVar0, "_car_house_int_after_ransack", &bVar1);
			func_113(&iVar0, "_car_house_int_before_ransack", &bVar1);
			func_114(&iVar0, "_car_house_int_lowvauleitems", &bVar1);
			func_114(&iVar0, "_car_house_int_night", &bVar1);
			func_114(&iVar0, "_car_house_int_night_pickup_whiskey", &bVar1);
			func_113(&iVar0, "_car_house_int_day", &bVar1);
			func_113(&iVar0, "_car_house_int_day_pickup_cheese", &bVar1);
			func_113(&iVar0, "_car_house_int_day_pickup_bread", &bVar1);
			func_113(&iVar0, "_car_house_int_day_pickup_whiskey", &bVar1);
			func_113(&iVar0, "_car_house_int_pickup_medicine", &bVar1);
			__LIB_5__::func_440("hmrb_crd_interior_ransacked");
			__LIB_5__::func_440("hmrb_crd_interior_night");
			__LIB_5__::func_441("hmrb_crd_interior_day");
		}
		else
		{
			func_112(269047710, 0, 0);
			func_114(&iVar0, "_car_house_int_after_ransack", &bVar1);
			func_113(&iVar0, "_car_house_int_before_ransack", &bVar1);
			func_114(&iVar0, "_car_house_int_lowvauleitems", &bVar1);
			func_113(&iVar0, "_car_house_int_night", &bVar1);
			func_113(&iVar0, "_car_house_int_night_pickup_whiskey", &bVar1);
			func_113(&iVar0, "_car_house_int_pickup_medicine", &bVar1);
			func_114(&iVar0, "_car_house_int_day", &bVar1);
			func_114(&iVar0, "_car_house_int_day_pickup_cheese", &bVar1);
			func_114(&iVar0, "_car_house_int_day_pickup_bread", &bVar1);
			func_114(&iVar0, "_car_house_int_day_pickup_whiskey", &bVar1);
			__LIB_5__::func_440("hmrb_crd_interior_ransacked");
			__LIB_5__::func_440("hmrb_crd_interior_day");
			__LIB_5__::func_441("hmrb_crd_interior_night");
		}
	}
	else if (CLOCK::GET_CLOCK_HOURS() >= 6 && CLOCK::GET_CLOCK_HOURS() < 21)
	{
		func_112(269047710, 0, 0);
		func_114(&iVar0, "_car_house_int_after_ransack", &bVar1);
		func_113(&iVar0, "_car_house_int_before_ransack", &bVar1);
		func_114(&iVar0, "_car_house_int_night", &bVar1);
		func_114(&iVar0, "_car_house_int_night_pickup_whiskey", &bVar1);
		func_114(&iVar0, "_car_house_int_pickup_medicine", &bVar1);
		func_113(&iVar0, "_car_house_int_day", &bVar1);
		func_113(&iVar0, "_car_house_int_day_pickup_cheese", &bVar1);
		func_113(&iVar0, "_car_house_int_day_pickup_bread", &bVar1);
		func_113(&iVar0, "_car_house_int_day_pickup_whiskey", &bVar1);
		func_113(&iVar0, "_car_house_int_lowvauleitems", &bVar1);
		__LIB_5__::func_440("hmrb_crd_interior_ransacked");
		__LIB_5__::func_440("hmrb_crd_interior_night");
		__LIB_5__::func_441("hmrb_crd_interior_day");
	}
	else
	{
		func_112(269047710, 0, 0);
		func_114(&iVar0, "_car_house_int_after_ransack", &bVar1);
		func_113(&iVar0, "_car_house_int_before_ransack", &bVar1);
		func_113(&iVar0, "_car_house_int_night", &bVar1);
		func_113(&iVar0, "_car_house_int_night_pickup_whiskey", &bVar1);
		func_113(&iVar0, "_car_house_int_lowvauleitems", &bVar1);
		func_114(&iVar0, "_car_house_int_day", &bVar1);
		func_114(&iVar0, "_car_house_int_day_pickup_cheese", &bVar1);
		func_114(&iVar0, "_car_house_int_day_pickup_bread", &bVar1);
		func_114(&iVar0, "_car_house_int_day_pickup_whiskey", &bVar1);
		func_114(&iVar0, "_car_house_int_pickup_medicine", &bVar1);
		__LIB_5__::func_440("hmrb_crd_interior_ransacked");
		__LIB_5__::func_440("hmrb_crd_interior_day");
		__LIB_5__::func_441("hmrb_crd_interior_night");
	}
	if (bVar1)
	{
		__LIB_6__::func_660(1, 8);
		__LIB_6__::func_660(1, 16);
		__LIB_6__::func_661(1, 4);
	}
	else
	{
		__LIB_6__::func_660(1, 8);
		__LIB_6__::func_660(1, 16);
		__LIB_6__::func_661(1, 32);
	}
}

void func_63()
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_187(94))
	{
		return;
	}
	iVar0 = 869;
	iVar1 = __LIB_1__::func_334(iVar0);
	if (__LIB_0__::func_255(iVar1, 0))
	{
		return;
	}
	if (__LIB_2__::func_215(iVar1, Global_35, 1, 15f, 0))
	{
		if (__LIB_9__::func_760() || __LIB_9__::func_766())
		{
			if ((!func_124() && __LIB_1__::func_205(Global_35, iLocal_17, 1, 0)) && __LIB_9__::func_747())
			{
				__LIB_0__::func_82(0, 0, 0);
				__LIB_2__::func_813(&uLocal_19, __LIB_1__::func_344("RH0_AMB_SDEAD"), 0, -1, 0, 0);
				func_130();
			}
		}
		else if ((!__LIB_9__::func_746() && !__LIB_9__::func_760()) && !__LIB_9__::func_766())
		{
			if ((!func_132() && __LIB_1__::func_205(Global_35, iLocal_18, 1, 0)) && !__LIB_1__::func_205(Global_35, iLocal_17, 1, 0))
			{
				__LIB_0__::func_82(0, 0, 0);
				__LIB_2__::func_813(&uLocal_19, __LIB_1__::func_344("RHMR0_CD_RETURN"), 0, -1, 0, 0);
				func_133();
			}
		}
	}
}

void func_83(int iParam0)
{
	__LIB_0__::func_172(iLocal_18);
	__LIB_0__::func_172(iLocal_17);
	LAW::_REMOVE_GUARD_ZONE(sLocal_15);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_16))
	{
		VOLUME::_0x998202B206872672(iLocal_16);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_16);
		VOLUME::_DELETE_VOLUME(iLocal_16);
	}
	__LIB_6__::func_660(1, 32);
	__LIB_6__::func_660(1, 4);
}

bool func_102(int iParam0)
{
	return (iLocal_117 && iParam0) != 0;
}

void func_107(int iParam0)
{
	if (func_102(iParam0))
	{
		return;
	}
	iLocal_117 = (iLocal_117 || iParam0);
}

void func_108(int iParam0)
{
	if (!func_102(iParam0))
	{
		return;
	}
	iLocal_117 = (iLocal_117 - (iLocal_117 && iParam0));
}

void func_112(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			__LIB_0__::func_803(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 2016141805:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_803(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 1010885152:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_803(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case -502324015:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_803(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			__LIB_0__::func_804(-538889627);
			__LIB_0__::func_804(-538880323);
			__LIB_0__::func_804(-1056767524);
			__LIB_0__::func_803(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			__LIB_1__::func_73();
			__LIB_0__::func_803(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			__LIB_1__::func_74();
			__LIB_0__::func_803(iParam0);
			break;
		case 2019386373:
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(2019386373);
			break;
		case -664252410:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(-664252410);
			break;
		case 2109952320:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_803(2109952320);
			break;
		case -1674179981:
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1674179981);
			break;
		case -1835851517:
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1835851517);
			break;
		case -1838352012:
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_803(-1838352012);
			break;
		case -1717960576:
			__LIB_0__::func_804(210001842);
			__LIB_0__::func_803(-1717960576);
			break;
		case 210001842:
			__LIB_0__::func_804(-1717960576);
			__LIB_0__::func_803(210001842);
			break;
		case -150493654:
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-150493654);
			break;
		case -1271608261:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-1271608261);
			break;
		case 1846061697:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(1846061697);
			break;
		case -1145519186:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_803(-1145519186);
			break;
		case 1766284049:
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(1766284049);
			break;
		case 280705402:
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(280705402);
			break;
		case 1926308480:
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_803(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				__LIB_0__::func_804(439465264);
				__LIB_0__::func_803(1609506757);
			}
			else
			{
				__LIB_0__::func_804(1609506757);
				__LIB_0__::func_804(439465264);
			}
			break;
		case 439465264:
			if (__LIB_0__::func_898(1609506757))
			{
				if (bParam1)
				{
					__LIB_0__::func_803(439465264);
				}
				else
				{
					__LIB_0__::func_804(439465264);
				}
			}
			break;
		case 1822001510:
			__LIB_0__::func_804(-1612662716);
			__LIB_0__::func_803(1822001510);
			break;
		case -1612662716:
			__LIB_0__::func_804(1822001510);
			__LIB_0__::func_803(-1612662716);
			break;
		case 1306158345:
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1306158345);
			break;
		case 1952610440:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1952610440);
			break;
		case -223469678:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-223469678);
			break;
		case -404698347:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-404698347);
			break;
		case 1517904467:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_803(1517904467);
			break;
		case 1376646519:
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1376646519);
			break;
		case 931649776:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(931649776);
			break;
		case -434590080:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(-434590080);
			break;
		case 1743048395:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1743048395);
			break;
		case 449774763:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_803(449774763);
			break;
		case -1414537028:
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(-1414537028);
			break;
		case 38162571:
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(38162571);
			break;
		case 1350391819:
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(1350391819);
			break;
		case 54073871:
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_803(54073871);
			break;
		case 198200492:
			__LIB_0__::func_803(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			break;
		case -1124061431:
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_803(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			break;
		case 52706132:
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_803(52706132);
			__LIB_0__::func_804(-259123672);
			break;
		case -259123672:
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_803(-259123672);
			break;
		case -919512195:
			__LIB_0__::func_803(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			break;
		case -1925798111:
			__LIB_0__::func_803(-1925798111);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			break;
		case 420709909:
			__LIB_0__::func_803(420709909);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(1703426636);
			break;
		case 1703426636:
			__LIB_0__::func_803(1703426636);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			break;
		case -1223121209:
			__LIB_0__::func_803(-1223121209);
			__LIB_0__::func_804(630808005);
			break;
		case 630808005:
			__LIB_0__::func_803(630808005);
			__LIB_0__::func_804(-1223121209);
			break;
		case 1453909576:
			__LIB_0__::func_803(1453909576);
			__LIB_0__::func_804(1643531967);
			break;
		case 1643531967:
			__LIB_0__::func_803(1643531967);
			__LIB_0__::func_804(1453909576);
			break;
		case 0:
			__LIB_0__::func_803(0);
			__LIB_0__::func_804(473295046);
			__LIB_0__::func_804(-1738165526);
			break;
		case 473295046:
			__LIB_0__::func_803(473295046);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(-1738165526);
			break;
		case -1738165526:
			__LIB_0__::func_803(-1738165526);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(473295046);
			Jump @2851; //curOff = 2443
			__LIB_0__::func_803(932909855);
			__LIB_0__::func_804(2051822093);
			Jump @2851; //curOff = 2464
			__LIB_0__::func_803(2051822093);
			__LIB_0__::func_804(932909855);
			Jump @2851; //curOff = 2485
			__LIB_0__::func_803(405586984);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			Jump @2851; //curOff = 2524
			__LIB_0__::func_803(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			Jump @2851; //curOff = 2563
			__LIB_0__::func_803(-959357075);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-1311865656);
			Jump @2851; //curOff = 2602
			__LIB_0__::func_803(-1311865656);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(405586984);
			Jump @2851; //curOff = 2641
			if (bParam1)
			{
				__LIB_0__::func_803(-524145696);
			}
			else
			{
				__LIB_0__::func_804(-524145696);
			}
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(282809459);
			Jump @2851; //curOff = 2688
			__LIB_0__::func_803(282809459);
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(-524145696);
			Jump @2851; //curOff = 2718
			__LIB_0__::func_803(1626481264);
			__LIB_0__::func_804(-524145696);
			__LIB_0__::func_804(282809459);
			Jump @2851; //curOff = 2748
			if (bParam1)
			{
				__LIB_0__::func_803(885203519);
			}
			else
			{
				__LIB_0__::func_804(885203519);
			}
			Jump @2851; //curOff = 2777
			if (bParam1)
			{
				__LIB_0__::func_803(-1080627546);
			}
			else
			{
				__LIB_0__::func_804(-1080627546);
			}
			Jump @2851; //curOff = 2806
			if (bParam1)
			{
				if (!__LIB_0__::func_898(iParam0))
				{
					__LIB_0__::func_803(iParam0);
				}
			}
			else if (__LIB_0__::func_898(iParam0))
			{
				__LIB_0__::func_804(iParam0);
			}
		}
void func_113(int iParam0, char* sParam1, bool bParam2)
{
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(*iParam0, sParam1))
	{
		return;
	}
	INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(*iParam0, sParam1, 0);
	*bParam2 = 1;
}

void func_114(int iParam0, char* sParam1, bool bParam2)
{
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(*iParam0, sParam1))
	{
		return;
	}
	INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(*iParam0, sParam1, true);
	*bParam2 = 1;
}

bool func_124()
{
	return __LIB_4__::func_259(1, 16);
}

void func_130()
{
	__LIB_5__::func_675(1, 16);
}

bool func_132()
{
	return __LIB_4__::func_259(1, 8);
}

void func_133()
{
	__LIB_5__::func_675(1, 8);
}

