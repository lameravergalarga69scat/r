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
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_17 = 20000;
	iLocal_20 = vScriptParam_0.x;
	iLocal_18 = vScriptParam_0.z;
	__LIB_18__::func_782();
	__LIB_0__::func_11();
	iLocal_19 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (__LIB_0__::func_0())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_19)
		{
			iLocal_19 = 0;
			__LIB_1__::func_947(iLocal_20, &iLocal_18);
			switch (iLocal_18)
			{
				case 0:
					iLocal_18 = 1;
					break;
				case 1:
					__LIB_0__::func_11(iLocal_20);
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_20)))
					{
						__LIB_1__::func_883(__LIB_1__::func_882(iLocal_20), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), __LIB_1__::func_884(iLocal_20));
					iVar1 = __LIB_1__::func_885(iLocal_20);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_21 = (MISC::GET_GAME_TIMER() + iLocal_17);
					iLocal_18 = 2;
					break;
				case 2:
					if (func_11() || iLocal_21 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_20);
						iLocal_21 = (MISC::GET_GAME_TIMER() + iLocal_17);
						iLocal_18 = 3;
					}
					break;
				case 3:
					if (__LIB_1__::func_887(iLocal_20) || iLocal_21 < MISC::GET_GAME_TIMER())
					{
						__LIB_0__::func_11(iLocal_20);
						iLocal_21 = (MISC::GET_GAME_TIMER() + iLocal_17);
						iLocal_18 = 4;
					}
					break;
				case 4:
					if (__LIB_1__::func_887(iLocal_20) || iLocal_21 < MISC::GET_GAME_TIMER())
					{
						__LIB_1__::func_886(iLocal_20);
						iLocal_21 = (iLocal_17 + MISC::GET_GAME_TIMER());
						iLocal_18 = 6;
					}
					break;
				case 6:
					if (__LIB_0__::func_69(__LIB_1__::func_882(iLocal_20)))
					{
						if (__LIB_1__::func_888(__LIB_1__::func_882(iLocal_20), 4) && !iLocal_21 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (__LIB_2__::func_771(iLocal_20) || iLocal_21 < MISC::GET_GAME_TIMER())
							{
								__LIB_0__::func_24(iLocal_20, 4);
								iLocal_21 = (iLocal_17 + MISC::GET_GAME_TIMER());
								iLocal_18 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_21 < MISC::GET_GAME_TIMER() || (__LIB_0__::func_2() != 0 || Global_1051260.f_3790))
							{
								__LIB_1__::func_886(iLocal_20);
								__LIB_0__::func_11();
								if (!__LIB_2__::func_806(2057, 0))
								{
									__LIB_0__::func_11();
								}
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								func_27(iLocal_20);
								__LIB_0__::func_11(iLocal_20);
								__LIB_0__::func_11();
								__LIB_0__::func_11();
								iLocal_18 = 8;
							}
							Jump @788; //curOff = 555
							__LIB_1__::func_886(iLocal_20);
							__LIB_0__::func_18();
							iLocal_18 = 9;
							Jump @788; //curOff = 572
							__LIB_1__::func_889(&Global_1898004);
							__LIB_0__::func_11(iLocal_20, &Global_1898004);
							iLocal_18 = 10;
							Jump @788; //curOff = 597
							__LIB_2__::func_749(iLocal_20);
							if (__LIB_0__::func_2() != -1)
							{
							}
							else
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							__LIB_0__::func_24(iLocal_20, 8);
							if (__LIB_1__::func_890(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								__LIB_0__::func_22(32);
							}
							iLocal_18 = 11;
							Jump @788; //curOff = 667
							if (__LIB_7__::func_427(iLocal_20))
							{
								iLocal_19 = (1000 + MISC::GET_GAME_TIMER());
							}
							__LIB_4__::func_504(&Global_1898004, iLocal_20);
							__LIB_1__::func_891(iLocal_20);
							__LIB_0__::func_24(iLocal_20, 8);
							if (__LIB_1__::func_938())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_20 /*35*/].f_10);
							if (Global_1888801[iLocal_20 /*35*/].f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(Global_1888801[iLocal_20 /*35*/].f_11);
							}
							Jump @788; //curOff = 769
							__LIB_17__::func_487(iVar0);
							iVar0++;
						}
						if (Global_1888801[iLocal_20 /*35*/].f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(Global_1888801[iLocal_20 /*35*/].f_12);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!__LIB_17__::func_487(iVar0))
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

bool func_11()
{
	if (__LIB_0__::func_2() == -1)
	{
		iLocal_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1006.947f, -545.158f, 98f, 0f, 0f, 8.306f, 13.464f, 17.135f, 4f, "Dakota River Trapper - m_volTrapper");
		iLocal_10 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1006.101f, -540.857f, 100.546f, 0f, 0f, 13.277f, 2.033f, 3.497f, 4.419f, "Dakota River Trapper - m_volTrapperPrompt");
		iLocal_11 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1008.955f, -541.376f, 100.546f, 0f, 0f, 13.277f, 3.137f, 4.933f, 4.419f, "Dakota River Trapper - m_volTrapperOfflimits");
	}
	return true;
}

void func_27(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		func_50(18, 952, iLocal_9, iParam0, iLocal_10, iLocal_11, 12, -1082130432 /* Float: -1f */, 0, 0);
		__LIB_2__::func_783();
	}
}

void func_50(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = __LIB_0__::func_560(iParam3, iParam0);
	vVar1 = { __LIB_4__::func_846(iVar0) };
	vVar4 = { func_87(iVar0) };
	if (func_88(vVar1))
	{
		return;
	}
	if (!__LIB_2__::func_808(19, 16384))
	{
		if (!__LIB_0__::func_29(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	__LIB_2__::func_772(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	if (func_88(vVar4))
	{
		Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	}
	else
	{
		Global_1914319.f_15936[iVar0 /*6*/].f_2 = { vVar4 };
	}
	Global_1914319.f_3[iParam0 /*446*/].f_10 = iVar0;
	Global_1914319.f_3[iParam0 /*446*/].f_25 = iParam2;
	Global_1914319.f_3[iParam0 /*446*/].f_26 = iParam4;
	Global_1914319.f_3[iParam0 /*446*/].f_28 = iParam5;
	Global_1914319.f_3[iParam0 /*446*/].f_29 = iParam9;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = iParam3;
	Global_1914319.f_3[iParam0 /*446*/].f_409 = iParam8;
	if (__LIB_2__::func_779(iVar0) || __LIB_2__::func_780(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = joaat("SHOP_RHO_GUNSMITH");
				break;
			case 61:
				iVar7 = joaat("SHOP_STR_GENERAL_STORE");
				break;
			case 73:
				iVar7 = joaat("SHOP_VAL_DOCTOR");
				break;
			case 43:
				iVar7 = joaat("SHOP_SDN_GUNSMITH");
				break;
			case 41:
				iVar7 = joaat("SHOP_SDN_FENCE");
				break;
		}
		Global_1914319.f_3[iParam0 /*446*/].f_20 = __LIB_1__::func_293(5, Global_1914319.f_3[iParam0 /*446*/].f_10, 2, iVar7);
	}
	Global_1393529.f_114[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1393529.f_220[iParam0] = 0f;
	Global_1393529.f_569[iParam0] = 0;
	StringCopy(&(Global_1393529.f_288[iParam0 /*8*/]), "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = __LIB_2__::func_781(iParam0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_19 = fParam7;
	Global_1914319.f_3[iParam0 /*446*/].f_8 = iParam6;
	if (!__LIB_4__::func_853(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			__LIB_2__::func_820(iParam3);
			break;
		case 10:
			__LIB_2__::func_782(iParam3);
			break;
		case 18:
			__LIB_2__::func_783();
			break;
		case 9:
			__LIB_2__::func_784();
			break;
		case 22:
			__LIB_2__::func_785();
			break;
	}
	__LIB_2__::func_809(Global_1914319.f_3[iParam0 /*446*/].f_10);
	__LIB_1__::func_943(iParam0, 16);
	__LIB_2__::func_810(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

Vector3 func_87(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.927f, 46.2401f;
		case 2:
			return 2936.9f, 1281.7f, 43.6529f;
		case 3:
			return 2931.596f, 1282.839f, 44.6783f;
		case 99:
			return -5227.45f, -3468.19f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 10:
			return -753.4219f, -1285.01f, 43.20049f;
		case 7:
			return -785.1682f, -1324.179f, 46.3505f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.0186f, -1328.058f, 44.00846f;
		case 17:
			return -764.2743f, -1292.576f, 44.3442f;
		case 12:
			return -813.7f, -1374.1f, 44.2f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1522.305f, 442.8598f, 89.6785f;
		case 21:
			return 1525.407f, 442.7721f, 90.6467f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.41f, -577.51f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1327.036f, -1292.386f, 77.2488f;
		case 29:
			return 1326.268f, -1323.129f, 78.1929f;
		case 30:
			return 1228.508f, -1296.796f, 77.6347f;
		case 31:
			return 1232.206f, -1300.197f, 77.8496f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2851.2f, -1202.3f, 49.046f;
		case 42:
			return 2828.087f, -1315.179f, 47.4196f;
		case 43:
			return 2714.586f, -1286.893f, 50.3211f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2747.906f, -1397.089f, 47.1107f;
		case 46:
			return 2746.599f, -1394.278f, 46.918f;
		case 47:
			return 2554.144f, -1166.025f, 54.3474f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1792.444f, -385.412f, 160.6924f;
		case 62:
			return -1812.343f, -370.618f, 161.8814f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -308.18f, 812.19f, 117.99f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -286.9307f, 809.6714f, 120.6565f;
		case 74:
			return -323.5066f, 799.6924f, 118.973f;
		case 75:
			return -279.273f, 781.7448f, 118.7954f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -176.3f, 630.1f, 115.331f;
		case 78:
			return -174.0662f, 633.9207f, 115.109f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -326.1232f, 771.9214f, 116.436f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 82:
			return 3023.859f, 561.206f, 46.7352f;
		case 86:
			return 2986.003f, 567.9055f, 45.337f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.283f, 400.4247f, 94.3817f;
		case 88:
			return -1299.608f, 401.5503f, 94.97269f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5488.293f, -2937.662f, 0.6299f;
		case 91:
			return -5506.691f, -2968.343f, -1.2586f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3684.342f, -2626.877f, -12.5497f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
			return -1005.934f, -540.8262f, 97.9502f;
			return 2076.835f, 1000.829f, 111.4973f;
			return -2251.034f, -1916.911f, 115.9488f;
			return -142.072f, -23.5242f, 95.0883f;
			return 675.3091f, -1251.233f, 43.0152f;
			return 1875.2f, -1859.182f, 41.8f;
			return 2366.084f, 1347.122f, 105.1305f;
			return 0f, 0f, 0f;
		}
bool func_88(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

