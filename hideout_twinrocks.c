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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23[3] = { 0, 0, 0 };
	int iLocal_27 = 0;
	int iLocal_28 = 0;
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
	struct<216> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8000, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	struct<83> Local_268[4];
	struct<19> Local_601[13];
	struct<9> Local_849[13];
	var uLocal_967 = 3;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	int iLocal_971 = 0;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	bool bLocal_974 = false;
	int iLocal_975 = 0;
	int iLocal_976[3] = { 0, 0, 0 };
	int iLocal_980 = 0;
	struct<4> Local_981[28];
	char* sLocal_1094[1] = { NULL };
	var uLocal_1096 = 1;
	var uLocal_1097 = 0;
	int iLocal_1098[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = -1;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 2;
	var uLocal_1124 = 1;
	var uLocal_1125 = 1;
	var uLocal_1126 = 1;
	var uLocal_1127 = 0;
	var uLocal_1128 = 1;
	var uLocal_1129 = 2;
	var uLocal_1130 = 2;
	var uLocal_1131 = 3;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 3;
	var uLocal_1135 = 1;
	var uLocal_1136 = 3;
	var uLocal_1137 = 3;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	struct<6> Local_1140[2];
	int iLocal_1153 = 0;
	int iLocal_1154 = 0;
	int iLocal_1155 = 0;
	int iLocal_1156 = 0;
	bool bLocal_1157 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_22 = 1;
	iLocal_1156 = vScriptParam_0.x;
	iLocal_1154 = vScriptParam_0.z;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	}
	func_2();
	while (__LIB_9__::func_579())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_1155)
		{
			iLocal_1155 = MISC::GET_GAME_TIMER() + 1000;
			iVar0 = iLocal_1154;
			__LIB_1__::func_947(iLocal_1156, &iLocal_1154);
			switch (iLocal_1154)
			{
				case 0:
					if (!Global_1879534.f_1)
					{
						bLocal_1157 = !__LIB_9__::func_648(iLocal_1156, 1);
						if (bLocal_1157)
						{
						}
						iLocal_1154 = 1;
					}
					break;
				case 1:
					iLocal_1154 = 2;
					break;
				case 2:
					if (__LIB_0__::func_0(bLocal_1157))
					{
						iLocal_1154 = 4;
					}
					break;
				case 4:
					iLocal_1154 = 6;
					break;
				case 6:
					if (__LIB_9__::func_618(iLocal_1156, -1, -1, 0))
					{
						__LIB_0__::func_24(iLocal_1156, 4);
						iLocal_1154 = 7;
					}
					break;
				case 7:
					iLocal_1154 = 8;
					break;
				case 8:
					__LIB_1__::func_886(iLocal_1156);
					iLocal_1154 = 9;
					break;
				case 9:
					if (iLocal_1156 != 5)
					{
						__LIB_1__::func_889(&Global_1898004);
						func_11(iLocal_1156, &Global_1898004, bLocal_1157);
					}
					__LIB_0__::func_24(iLocal_1156, 8);
					iLocal_1154 = 10;
					break;
				case 10:
					if (!bLocal_1157)
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
						iLocal_1154 = 3;
					}
					else
					{
						iLocal_1154 = 3;
					}
					break;
				case 3:
					if (!STREAMING::_0xCF45DF50C7775F2A())
					{
						if (__LIB_0__::func_0(bLocal_1157))
						{
							iLocal_1154 = 11;
						}
					}
					break;
				case 11:
					if (!bLocal_1157)
					{
						if (!func_16(iLocal_1156))
						{
							iLocal_1155 = 0;
						}
					}
					func_17(&Global_1898004, iLocal_1156);
					break;
				case 12:
					func_18();
					break;
			}
			if (iVar0 != iLocal_1154)
			{
				iLocal_1155 = 0;
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

void func_11(int iParam0, var uParam1, bool bParam2)
{
	__LIB_2__::func_766(uParam1, Local_44.f_215, 1);
}

void func_12()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Twin_Rocks", true, true);
	func_50();
	func_51();
	func_52();
	func_53();
	func_54();
	func_55();
	func_56();
	__LIB_3__::func_229(376);
	__LIB_3__::func_229(377);
	__LIB_3__::func_229(378);
	__LIB_3__::func_229(379);
	__LIB_9__::func_722(&Local_44, 125, &sLocal_1094, 20);
}

bool func_16(int iParam0)
{
	switch (Local_44)
	{
		case 0:
			if (__LIB_9__::func_656(&Local_44, &uLocal_1096, &uLocal_967, "", 0))
			{
				__LIB_1__::func_649(&Local_44, 1);
			}
			break;
		case 1:
			__LIB_1__::func_649(&Local_44, 2);
			break;
		case 2:
			if (__LIB_9__::func_663(&Local_44, &Local_849, joaat("REL_CRIMINALS"), 0, 8))
			{
				Local_44.f_197 = 0;
				__LIB_1__::func_649(&Local_44, 3);
			}
			break;
		case 3:
			__LIB_9__::func_619(&Local_44, &Local_849, 0, (Local_44.f_201 - 1));
			__LIB_1__::func_649(&Local_44, 6);
			break;
		case 6:
			func_63();
			func_64();
			func_65();
			switch (iLocal_971)
			{
				case 0:
				case 1:
				case 2:
					func_66(1);
					break;
			}
			__LIB_1__::func_649(&Local_44, 7);
			break;
		case 7:
			func_67();
			func_68();
			break;
	}
	__LIB_9__::func_679(&Local_44);
	return false;
}

void func_17(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || __LIB_0__::func_1(Global_1935630, 16384)) || __LIB_0__::func_1(Global_1935630, 8388608))
	{
		return;
	}
	if (__LIB_1__::func_896(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = __LIB_1__::func_927();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((uParam0[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::_DOES_VOLUME_EXIST((*uParam0)[iVar3 /*3*/]))
				{
					if (VOLUME::_IS_POSITION_INSIDE_VOLUME((*uParam0)[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!__LIB_0__::func_65(uParam0[iVar3 /*3*/], 1) && __LIB_1__::func_120(iParam1)) && !__LIB_1__::func_897(iParam1, 16))
							{
								func_77(iParam1, __LIB_1__::func_898(), -1, 0, -1, 0);
								__LIB_0__::func_47(uParam0[iVar3 /*3*/], 1);
							}
							__LIB_2__::func_758(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_923() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			__LIB_1__::func_924();
			__LIB_1__::func_309(Global_1310750.f_16071, 0, iVar4, 0, 0);
		}
	}
	__LIB_1__::func_899(bVar0);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_900((iParam1 == __LIB_0__::func_61() && bVar0));
	}
}

void func_18()
{
	__LIB_0__::func_11(bLocal_1157);
	__LIB_0__::func_11(bLocal_1157);
	if (__LIB_0__::func_2() == -1)
	{
		if (iLocal_1156 != 5)
		{
			__LIB_2__::func_755(iLocal_1156);
		}
	}
	if (iLocal_1156 != 5)
	{
		__LIB_2__::func_819(iLocal_1156);
		__LIB_0__::func_25(iLocal_1156, 4);
		__LIB_0__::func_25(iLocal_1156, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
	}
	__LIB_9__::func_582(0);
	if (__LIB_0__::func_61() == iLocal_1156)
	{
		__LIB_6__::func_409(0);
	}
	if (__LIB_1__::func_25(__LIB_4__::func_6(iLocal_1156), 1))
	{
		__LIB_1__::func_408(__LIB_9__::func_583(iLocal_1156), 1, 0);
	}
	func_95(iLocal_1156);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_50()
{
	Local_44.f_4 = __LIB_9__::func_705(&(Local_44.f_4), 125);
	iLocal_971 = Local_44.f_4;
}

void func_51()
{
	__LIB_3__::func_139(&(iLocal_1098[0]), -3959.88f, -2132.15f, -5.32f, 0f, 0f, 0f, 50f, 50f, 20f, "HTW_VOLUME_COMBAT_AREA");
	__LIB_3__::func_573(&(iLocal_1098[1]), -3987.26f, -2156.08f, -4.04f, 0f, 0f, 33f, 27f, 65.25f, 10f, "HTW_VOLUME_OUTSIDE_WEST");
	__LIB_3__::func_573(&(iLocal_1098[2]), -3941.76f, -2167.14f, -4.04f, 0f, 0f, 121.25f, 27f, 65.25f, 10f, "HTW_VOLUME_OUTSIDE_SOUTH");
	__LIB_3__::func_573(&(iLocal_1098[3]), -3927.17f, -2131.54f, -4.04f, 0f, 0f, -168f, 27f, 65.25f, 10f, "HTW_VOLUME_OUTSIDE_EAST");
	__LIB_3__::func_573(&(iLocal_1098[5]), -3959.85f, -2132.08f, -4.9f, 0f, 0f, 49.75f, 4f, 6.25f, 5f, "HTW_VOLUME_HOUSE_ENTRANCE");
	__LIB_3__::func_573(&(iLocal_1098[6]), -3956.01f, -2127.24f, -5f, 0f, 0f, 51f, 5.75f, 5.5f, 3.75f, "HTW_VOLUME_IN_HOUSE");
	__LIB_3__::func_573(&(iLocal_1098[7]), -3955.3f, -2125.3f, 0.4f, 0f, 0f, 51.5f, 5.5f, 3.5f, 2.25f, "HTW_VOLUME_ON_NORTH_ROOF");
	__LIB_3__::func_573(&(iLocal_1098[8]), -3953.88f, -2123.1f, -2.81f, 0f, 0f, 48.25f, 2f, 1f, 2.5f, "HTW_VOLUME_NORTH_ROOF_LADDER");
	__LIB_3__::func_573(&(iLocal_1098[9]), -3951.7f, -2137.94f, -0.35f, 0f, 0f, 9.75f, 4.75f, 6f, 3.25f, "HTW_VOLUME_ON_SOUTH_ROOF");
	__LIB_3__::func_573(&(iLocal_1098[10]), -3952.04f, -2134.08f, -2.65f, 0f, 0f, 8.75f, 1f, 1f, 3f, "HTW_VOLUME_SOUTH_ROOF_LADDER");
	__LIB_3__::func_573(&(iLocal_1098[13]), -3930.49f, -2147.19f, -1.94f, 0f, 0f, -90.5f, 21f, 19f, 20f, "HTW_VOLUME_SEEN_BY_GUARD_EAST");
	__LIB_3__::func_573(&(iLocal_1098[14]), -3981.99f, -2161.48f, -1.94f, 0f, 0f, 38.25f, 20f, 18f, 20f, "HTW_VOLUME_SEEN_BY_GUARD_SOUTH");
	__LIB_3__::func_573(&(iLocal_1098[11]), -3973.99f, -2105.69f, -1.94f, 0f, 0f, 42.75f, 31f, 17f, 20f, "HTW_VOLUME_SEEN_BY_HOUSE_NORTH");
	__LIB_3__::func_573(&(iLocal_1098[12]), -3938.24f, -2121.19f, -1.94f, 0f, 0f, -64f, 31f, 17f, 20f, "HTW_VOLUME_SEEN_BY_HOUSE_SOUTH");
	iLocal_1098[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("HTW_VOLUME_IN_CAMP");
	VOLUME::_0x39816F6F94F385AD(iLocal_1098[4], -3964.67f, -2126.84f, -4.48f, 0f, 0f, 47f, 32.75f, 23.75f, 10f);
	VOLUME::_0x39816F6F94F385AD(iLocal_1098[4], -3959.06f, -2147.65f, -4.48f, 0f, 0f, 30f, 22.75f, 22.75f, 10f);
	func_125();
}

void func_52()
{
	int iVar0;
	Local_44.f_189 = 2;
	Local_44.f_199 = (13 - 2);
	Local_44.f_201 = (13 - 2);
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		Local_849[iVar0 /*9*/] = joaat("G_M_M_UNIBANDITOS_01");
		iVar0++;
	}
	__LIB_9__::func_584(&uLocal_967, joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"));
	__LIB_9__::func_584(&uLocal_967, joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"));
	__LIB_9__::func_584(&uLocal_967, Local_849[0 /*9*/]);
}

void func_53()
{
	switch (iLocal_971)
	{
		case 0:
		case 1:
		case 2:
			Local_849[0 /*9*/].f_1 = { -3943.859f, -2148.014f, -5.354f };
			Local_849[0 /*9*/].f_4 = 267.2186f;
			Local_849[1 /*9*/].f_1 = { -3971.832f, -2152.81f, -7.6095f };
			Local_849[1 /*9*/].f_4 = 125.6486f;
			Local_849[2 /*9*/].f_1 = { -3956.941f, -2125.583f, -1.6662f };
			Local_849[2 /*9*/].f_4 = 14.5547f;
			Local_849[3 /*9*/].f_1 = { -3950.537f, -2136.363f, -1.965f };
			Local_849[3 /*9*/].f_4 = 316.7583f;
			Local_849[4 /*9*/].f_1 = { -3944.685f, -2148.145f, -4.597f };
			Local_849[4 /*9*/].f_4 = 83.1685f;
			Local_849[5 /*9*/].f_1 = { -3953.86f, -2142.464f, -5.772f };
			Local_849[5 /*9*/].f_4 = 190.8f;
			Local_849[6 /*9*/].f_1 = { -3952.9f, -2144.07f, -4.95f };
			Local_849[6 /*9*/].f_4 = 3.76f;
			Local_849[7 /*9*/].f_1 = { -3970.088f, -2138.389f, -6.0259f };
			Local_849[7 /*9*/].f_4 = 92.61f;
			Local_849[8 /*9*/].f_1 = { -3976.67f, -2140.09f, -7.0178f };
			Local_849[8 /*9*/].f_4 = 279.8591f;
			Local_849[9 /*9*/].f_1 = { -3870.026f, -2128.681f, 5.6926f };
			Local_849[10 /*9*/].f_1 = { -3871.538f, -2134.644f, 5.8518f };
			break;
	}
}

void func_54()
{
	sLocal_1094[0] = "TEST";
}

void func_55()
{
	Local_44.f_215 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3959.88f, -2132.15f, -5.32f, 0f, 0f, 0f, 60f, 60f, 20f, "volHideout_TwinRocks");
}

void func_56()
{
	TASK::REQUEST_WAYPOINT_RECORDING("hideout_tr_horseCharge");
	TASK::REQUEST_WAYPOINT_RECORDING("hideout_tr_horseCharge_Left");
}

void func_63()
{
	__LIB_4__::func_228(&(Local_44.f_155));
	__LIB_9__::func_262(&(Local_44.f_155), 1);
	__LIB_2__::func_829(&(Local_44.f_155), 0);
	__LIB_1__::func_401(&(Local_44.f_155), 1);
	__LIB_2__::func_828(&(Local_44.f_155), 1);
	__LIB_2__::func_830(&(Local_44.f_155), 1);
	__LIB_1__::func_398(&(Local_44.f_155), 1);
	__LIB_1__::func_402(&(Local_44.f_155), 1);
	__LIB_1__::func_413(&(Local_44.f_155), 1);
	__LIB_1__::func_404(&(Local_44.f_155), 1);
	__LIB_2__::func_828(&(Local_44.f_155), 1);
	__LIB_1__::func_405(&(Local_44.f_155), 1);
	__LIB_1__::func_396(&(Local_44.f_155), 1);
	__LIB_9__::func_714(&(Local_44.f_155), 1);
	if (((__LIB_2__::func_954() == joaat("MISTY") || __LIB_2__::func_954() == joaat("FOG")) || __LIB_2__::func_954() == joaat("BLIZZARD")) || __LIB_2__::func_954() == joaat("SANDSTORM"))
	{
		Local_44.f_155.f_24 = 40f;
	}
	else
	{
		Local_44.f_155.f_24 = 60f;
	}
	Local_44.f_155.f_17 = Local_44.f_155.f_24;
	bLocal_974 = __LIB_2__::func_284(5, -1);
}

void func_64()
{
	int iVar0;
	char* sVar1;
	float fVar2;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		switch (iVar0)
		{
			case 0:
				sVar1 = "1019_G_M_M_UniBanditos_01_HISPANIC_01";
				break;
			case 1:
				sVar1 = "1024_G_M_M_UniBanditos_01_WHITE_02";
				break;
			case 2:
				sVar1 = "1068_G_M_M_UniCriminals_01_HISPANIC_05";
				break;
			case 3:
				sVar1 = "1020_G_M_M_UniBanditos_01_HISPANIC_02";
				break;
			case 4:
				sVar1 = "1069_G_M_M_UniCriminals_01_HISPANIC_06";
				break;
			case 5:
				sVar1 = "1067_G_M_M_UniCriminals_01_HISPANIC_04";
				break;
			case 6:
				sVar1 = "1023_G_M_M_UniBanditos_01_WHITE_01";
				break;
			case 7:
				sVar1 = "1066_G_M_M_UniCriminals_01_HISPANIC_03";
				break;
			case 8:
				sVar1 = "1022_G_M_M_UniBanditos_01_HISPANIC_04";
				break;
			case 9:
				sVar1 = "1021_G_M_M_UniBanditos_01_HISPANIC_03";
				break;
			case 10:
				sVar1 = "0135_G_M_M_UniCriminals_01_HISPANIC_02";
				break;
			default:
				sVar1 = "1019_G_M_M_UniBanditos_01_HISPANIC_01";
				break;
		}
		Local_601[iVar0 /*19*/] = MISC::_DOES_STRING_EXIST_IN_STRING(sVar1, "UniBanditos");
		__LIB_2__::func_133(Local_849[iVar0 /*9*/].f_5, sVar1, 0);
		Local_601[iVar0 /*19*/].f_1 = sVar1;
		PED::SET_PED_CONFIG_FLAG(Local_849[iVar0 /*9*/].f_5, 146, true);
		PED::SET_PED_CONFIG_FLAG(Local_849[iVar0 /*9*/].f_5, 6, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_849[iVar0 /*9*/].f_5, joaat("REL_PLAYER_ENEMY"));
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_849[iVar0 /*9*/].f_5, true);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_849[iVar0 /*9*/].f_5, false);
		TASK::_0x9DE63896B176EA94(Local_849[iVar0 /*9*/].f_5, 0);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_849[iVar0 /*9*/].f_5, true, 1f);
		__LIB_2__::func_22(&(Local_44.f_155), Local_849[iVar0 /*9*/].f_5);
		if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iVar0 == 3)
		{
			if (!__LIB_2__::func_117(32768))
			{
				fVar2 = 40f;
			}
			else
			{
				fVar2 = 30f;
			}
		}
		else if (((__LIB_2__::func_954() == joaat("MISTY") || __LIB_2__::func_954() == joaat("FOG")) || __LIB_2__::func_954() == joaat("BLIZZARD")) || __LIB_2__::func_954() == joaat("SANDSTORM"))
		{
			fVar2 = 20f;
		}
		else
		{
			fVar2 = 60f;
		}
		PED::SET_PED_SEEING_RANGE(Local_849[iVar0 /*9*/].f_5, fVar2);
		PED::SET_PED_HEARING_RANGE(Local_849[iVar0 /*9*/].f_5, 60f);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(Local_849[iVar0 /*9*/].f_5, 40f);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Local_849[iVar0 /*9*/].f_5, 8f);
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(Local_849[iVar0 /*9*/].f_5, -30f);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(Local_849[iVar0 /*9*/].f_5, 30f);
		WEAPON::REMOVE_ALL_PED_WEAPONS(Local_849[iVar0 /*9*/].f_5, true, true);
		PED::SET_PED_ACCURACY(Local_849[iVar0 /*9*/].f_5, 16);
		PED::SET_PED_COMBAT_MOVEMENT(Local_849[iVar0 /*9*/].f_5, 1);
		PED::SET_PED_COMBAT_RANGE(Local_849[iVar0 /*9*/].f_5, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 22, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 29, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 0, true);
		iVar0++;
	}
	switch (iLocal_971)
	{
		case 0:
		case 1:
		case 2:
			__LIB_4__::func_7(Local_849[0 /*9*/].f_5, joaat("WEAPON_REPEATER_CARBINE"), 100, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_4__::func_7(Local_849[1 /*9*/].f_5, joaat("WEAPON_REPEATER_CARBINE"), 100, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_4__::func_7(Local_849[2 /*9*/].f_5, joaat("WEAPON_REPEATER_CARBINE"), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_4__::func_7(Local_849[3 /*9*/].f_5, joaat("WEAPON_REPEATER_CARBINE"), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_4__::func_7(Local_849[4 /*9*/].f_5, joaat("WEAPON_REVOLVER_CATTLEMAN"), 100, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_4__::func_7(Local_849[5 /*9*/].f_5, joaat("WEAPON_REVOLVER_CATTLEMAN"), 100, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_4__::func_7(Local_849[6 /*9*/].f_5, joaat("WEAPON_REVOLVER_CATTLEMAN"), 100, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_4__::func_7(Local_849[7 /*9*/].f_5, joaat("WEAPON_REVOLVER_CATTLEMAN"), 100, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_4__::func_7(Local_849[8 /*9*/].f_5, joaat("WEAPON_REVOLVER_CATTLEMAN"), 100, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			break;
	}
}

void func_65()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		PED::SET_PED_COMBAT_MOVEMENT(Local_849[iVar0 /*9*/].f_5, 1);
		PED::SET_PED_COMBAT_RANGE(Local_849[iVar0 /*9*/].f_5, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 22, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 29, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 0, true);
		iVar0++;
	}
}

void func_66(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_53();
	if (!__LIB_2__::func_117(32768))
	{
		Local_601[0 /*19*/].f_4 = joaat("WORLD_HUMAN_LEAN_BACK_WALL");
		Local_601[1 /*19*/].f_4 = joaat("WORLD_HUMAN_GUARD_SCOUT");
		Local_601[2 /*19*/].f_4 = joaat("WORLD_HUMAN_GUARD_SCOUT");
		Local_601[3 /*19*/].f_4 = joaat("WORLD_HUMAN_GUARD_SCOUT");
		Local_601[5 /*19*/].f_4 = joaat("WORLD_HUMAN_LEAN_BACK_WALL");
		Local_601[6 /*19*/].f_4 = joaat("WORLD_HUMAN_SMOKE");
		Local_601[7 /*19*/].f_4 = joaat("PROP_HUMAN_SEAT_BENCH_PORCH");
		Local_601[8 /*19*/].f_4 = joaat("WORLD_HUMAN_SMOKE");
		Local_601[4 /*19*/].f_4 = joaat("PROP_HUMAN_SEAT_CHAIR_READ_NEWSPAPER");
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			if (iVar0 != 7)
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(Local_849[iVar0 /*9*/].f_5, Local_601[iVar0 /*19*/].f_4, Local_849[iVar0 /*9*/].f_1, Local_849[iVar0 /*9*/].f_4, -1, !bParam0, bParam0, 0, -1f, false);
			}
			iVar0++;
		}
		iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_849[7 /*9*/].f_1, joaat("PROP_HUMAN_SEAT_BENCH_PORCH"), 3f, 1, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_849[7 /*9*/].f_5, iVar1, 0, -1, !bParam0, bParam0, 0, false, -1f, false);
		}
		else
		{
			TASK::TASK_START_SCENARIO_AT_POSITION(Local_849[7 /*9*/].f_5, joaat("PROP_HUMAN_SEAT_BENCH_PORCH"), Local_849[7 /*9*/].f_1, Local_849[7 /*9*/].f_4, -1, !bParam0, bParam0, 0, -1f, false);
		}
	}
	else
	{
		Local_849[5 /*9*/].f_1 = { -3955.041f, -2128.666f, -4.7153f };
		Local_849[5 /*9*/].f_4 = 280f;
		Local_601[5 /*19*/].f_4 = joaat("PROP_HUMAN_SEAT_CHAIR");
		Local_849[6 /*9*/].f_1 = { -3955.982f, -2125.408f, -4.7749f };
		Local_849[6 /*9*/].f_4 = 180f;
		Local_601[6 /*19*/].f_4 = joaat("PROP_HUMAN_SEAT_BENCH");
		Local_849[4 /*9*/].f_1 = { -3963.223f, -2121.671f, -3.5f };
		Local_849[4 /*9*/].f_4 = 240f;
		Local_601[4 /*19*/].f_4 = joaat("PROP_HUMAN_SLEEP_BED_PILLOW_HIGH");
		Local_601[0 /*19*/].f_4 = joaat("WORLD_HUMAN_LEAN_BACK_WALL");
		Local_601[1 /*19*/].f_4 = joaat("WORLD_HUMAN_GUARD_SCOUT");
		Local_601[2 /*19*/].f_4 = joaat("WORLD_HUMAN_GUARD_SCOUT");
		Local_601[3 /*19*/].f_4 = joaat("WORLD_HUMAN_GUARD_SCOUT");
		Local_601[7 /*19*/].f_4 = joaat("PROP_HUMAN_SEAT_BENCH_PORCH");
		Local_601[8 /*19*/].f_4 = joaat("WORLD_HUMAN_SMOKE");
		iVar2 = 0;
		while (iVar2 <= 8)
		{
			if ((iVar2 != 7 && iVar2 != 5) && iVar2 != 6)
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(Local_849[iVar2 /*9*/].f_5, Local_601[iVar2 /*19*/].f_4, Local_849[iVar2 /*9*/].f_1, Local_849[iVar2 /*9*/].f_4, -1, !bParam0, bParam0, 0, -1f, false);
			}
			iVar2++;
		}
		iVar3 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_849[7 /*9*/].f_1, joaat("PROP_HUMAN_SEAT_BENCH_PORCH"), 3f, 1, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar3))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_849[7 /*9*/].f_5, iVar3, 0, -1, !bParam0, bParam0, 0, false, -1f, false);
		}
		else
		{
			TASK::TASK_START_SCENARIO_AT_POSITION(Local_849[7 /*9*/].f_5, joaat("PROP_HUMAN_SEAT_BENCH_PORCH"), Local_849[7 /*9*/].f_1, Local_849[7 /*9*/].f_4, -1, !bParam0, bParam0, 0, -1f, false);
		}
		iVar3 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_849[5 /*9*/].f_1, joaat("PROP_HUMAN_SEAT_CHAIR"), 3f, 1, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar3))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_849[5 /*9*/].f_5, iVar3, 0, -1, !bParam0, bParam0, 0, false, -1f, false);
		}
		else
		{
			TASK::TASK_START_SCENARIO_AT_POSITION(Local_849[5 /*9*/].f_5, joaat("PROP_HUMAN_SEAT_CHAIR"), Local_849[5 /*9*/].f_1, Local_849[5 /*9*/].f_4, -1, !bParam0, bParam0, 0, -1f, false);
		}
		iVar3 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_849[6 /*9*/].f_1, joaat("PROP_HUMAN_SEAT_BENCH"), 3f, 1, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar3))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_849[6 /*9*/].f_5, iVar3, 0, -1, !bParam0, bParam0, 0, false, -1f, false);
		}
		else
		{
			TASK::TASK_START_SCENARIO_AT_POSITION(Local_849[6 /*9*/].f_5, joaat("PROP_HUMAN_SEAT_CHAIR"), Local_849[6 /*9*/].f_1, Local_849[6 /*9*/].f_4, -1, !bParam0, bParam0, 0, -1f, false);
		}
	}
}

void func_67()
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_19, 16) && func_167())
	{
		__LIB_1__::func_683(&iLocal_19, 16);
	}
	if ((__LIB_0__::func_27(iLocal_19, 1) && !__LIB_0__::func_27(iLocal_19, 2)) && Local_44.f_3 < 5)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_START");
		__LIB_1__::func_683(&iLocal_19, 2);
	}
	if (__LIB_0__::func_27(iLocal_19, 4) && __LIB_0__::func_265(&uLocal_35) > 20f)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
		__LIB_1__::func_681(&iLocal_19, 4);
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		PED::SET_PED_RESET_FLAG(Local_849[iVar0 /*9*/].f_5, 42, true);
		iVar0++;
	}
	func_171();
	__LIB_9__::func_657(&Local_44, &Local_849);
	func_173();
}

void func_68()
{
	if (!__LIB_9__::func_581(&Local_44, 9))
	{
		Local_44.f_198 = __LIB_9__::func_608(&Local_849, Local_44.f_199, Local_44.f_199);
	}
	switch (iLocal_971)
	{
		case 0:
		case 1:
		case 2:
			if (Local_44.f_3 < 5)
			{
				func_176();
				func_177();
				func_178();
				if (func_179() || func_180())
				{
					func_181(0);
					func_181(1);
					func_181(2);
					func_181(3);
					__LIB_2__::func_489(&Local_44, 5);
				}
			}
			switch (Local_44.f_3)
			{
				case 0:
					if (func_183())
					{
						__LIB_2__::func_489(&Local_44, 1);
					}
					break;
				case 1:
					break;
				case 5:
					switch (iLocal_972)
					{
						case 0:
							if (func_184())
							{
								iLocal_972 = 1;
							}
							break;
						case 1:
							func_185();
							if (func_186(&Local_44, &Local_849, -1))
							{
								func_187();
								__LIB_2__::func_489(&Local_44, 7);
							}
							break;
						case 2:
							__LIB_2__::func_489(&Local_44, 8);
							break;
					}
					break;
				case 7:
					AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Twin_Rocks", false, true);
					__LIB_2__::func_489(&Local_44, 8);
					break;
				case 8:
					__LIB_2__::func_489(&Local_44, 9);
					break;
				case 9:
					func_188();
					func_189();
					Local_44.f_205 = 125;
					func_190(&Local_44, &Local_849, 1000, 1, 1);
					if (__LIB_0__::func_51(&(Local_44.f_5), 33554432) && func_191())
					{
						__LIB_2__::func_489(&Local_44, 10);
					}
					break;
				case 10:
					break;
			}
			break;
	}
	if (Local_44.f_3 <= 5)
	{
		__LIB_9__::func_695(&Local_849, &Local_44);
	}
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];
	if (!__LIB_2__::func_757())
	{
		return;
	}
	sVar1 = func_202(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!__LIB_0__::func_630(iParam4))
	{
		if (__LIB_0__::func_20(iParam0))
		{
			iParam4 = __LIB_1__::func_905(__LIB_1__::func_882(iParam0));
		}
		else
		{
			iParam4 = __LIB_1__::func_905(iParam1);
		}
	}
	if (__LIB_0__::func_630(iParam4))
	{
		iVar3 = __LIB_1__::func_931(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = __LIB_1__::func_907(__LIB_1__::func_906(iParam2));
	}
	else if ((__LIB_0__::func_622(iParam1, 2) || __LIB_1__::func_932(iParam4, 2)) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899.f_9 = 1;
	}
	else if ((__LIB_0__::func_20(iParam0) && __LIB_0__::func_21(iParam0, 16777216)) && !Global_1894899.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899.f_9 = 1;
	}
	else
	{
		iVar4 = __LIB_0__::func_41(__LIB_0__::func_23());
		iVar5 = __LIB_0__::func_42(__LIB_0__::func_23());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = __LIB_1__::func_908(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, __LIB_1__::func_925(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, __LIB_1__::func_925(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = __LIB_1__::func_908(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, __LIB_1__::func_925(&cVar6, joaat("COLOR_PURE_WHITE")), __LIB_1__::func_925(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899.f_9 = 0;
	}
	Global_1934266.f_148 = __LIB_1__::func_909(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_95(int iParam0)
{
	if (Local_44.f_205 != iParam0)
	{
		Local_44.f_205 = iParam0;
	}
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Twin_Rocks", false, true);
	func_239();
}

void func_125()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		Local_601[iVar0 /*19*/].f_3 = -1;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		switch (iVar1)
		{
			case 0:
				Local_981[iVar1 /*4*/] = { -3971.094f, -2144.598f, -6.2625f };
				Local_981[iVar1 /*4*/].f_3 = 4f;
				break;
			case 1:
				Local_981[iVar1 /*4*/] = { -3981.807f, -2146.849f, -6.2549f };
				Local_981[iVar1 /*4*/].f_3 = 4f;
				break;
			case 2:
				Local_981[iVar1 /*4*/] = { -3978.186f, -2138.788f, -6.3548f };
				Local_981[iVar1 /*4*/].f_3 = 3f;
				break;
			case 3:
				Local_981[iVar1 /*4*/] = { -3970.302f, -2125.941f, -5.8482f };
				Local_981[iVar1 /*4*/].f_3 = 2f;
				break;
			case 4:
				Local_981[iVar1 /*4*/] = { -3968.119f, -2119.825f, -5.5615f };
				Local_981[iVar1 /*4*/].f_3 = 1.5f;
				break;
			case 5:
				Local_981[iVar1 /*4*/] = { -3964.27f, -2115.999f, -5.3122f };
				Local_981[iVar1 /*4*/].f_3 = 1.5f;
				break;
			case 6:
				Local_981[iVar1 /*4*/] = { -3929.049f, -2138.114f, -2.1214f };
				Local_981[iVar1 /*4*/].f_3 = 4f;
				break;
			case 7:
				Local_981[iVar1 /*4*/] = { -3929.245f, -2142.282f, -2.7944f };
				Local_981[iVar1 /*4*/].f_3 = 2f;
				break;
			case 8:
				Local_981[iVar1 /*4*/] = { -3937.728f, -2156.474f, -4.5805f };
				Local_981[iVar1 /*4*/].f_3 = 3f;
				break;
			case 9:
				Local_981[iVar1 /*4*/] = { -3937.795f, -2146.768f, -4.1406f };
				Local_981[iVar1 /*4*/].f_3 = 3f;
				break;
			case 10:
				Local_981[iVar1 /*4*/] = { -3945.072f, -2148.385f, -4.8529f };
				Local_981[iVar1 /*4*/].f_3 = 3f;
				break;
			case 11:
				Local_981[iVar1 /*4*/] = { -3950.908f, -2145.867f, -5.4153f };
				Local_981[iVar1 /*4*/].f_3 = 3f;
				break;
			case 12:
				Local_981[iVar1 /*4*/] = { -3956.188f, -2151.824f, -5.8898f };
				Local_981[iVar1 /*4*/].f_3 = 2f;
				break;
			case 13:
				Local_981[iVar1 /*4*/] = { -3954.779f, -2158.29f, -6.2883f };
				Local_981[iVar1 /*4*/].f_3 = 3f;
				break;
			case 14:
				Local_981[iVar1 /*4*/] = { -3966.381f, -2156.465f, -7.027f };
				Local_981[iVar1 /*4*/].f_3 = 2f;
				break;
			case 15:
				Local_981[iVar1 /*4*/] = { -3961.58f, -2121.125f, -5.5624f };
				Local_981[iVar1 /*4*/].f_3 = 5f;
				break;
			case 16:
				Local_981[iVar1 /*4*/] = { -3955.941f, -2126.14f, -5.8552f };
				Local_981[iVar1 /*4*/].f_3 = 8f;
				break;
			case 17:
				Local_981[iVar1 /*4*/] = { -3951.994f, -2138.524f, -7.1198f };
				Local_981[iVar1 /*4*/].f_3 = 6f;
				break;
			case 26:
				Local_981[iVar1 /*4*/] = { -3956.437f, -2125.543f, -0.5384f };
				Local_981[iVar1 /*4*/].f_3 = 3f;
				break;
			case 27:
				Local_981[iVar1 /*4*/] = { -3951.983f, -2138.202f, -0.8788f };
				Local_981[iVar1 /*4*/].f_3 = 4f;
				break;
			case 18:
				Local_981[iVar1 /*4*/] = { -3969.329f, -2157.042f, -7.2936f };
				Local_981[iVar1 /*4*/].f_3 = 2f;
				break;
			case 19:
				Local_981[iVar1 /*4*/] = { -3961.913f, -2162.208f, -6.5693f };
				Local_981[iVar1 /*4*/].f_3 = 3f;
				break;
			case 20:
				Local_981[iVar1 /*4*/] = { -3947.224f, -2153.151f, -5.1127f };
				Local_981[iVar1 /*4*/].f_3 = 2f;
				break;
			case 21:
				Local_981[iVar1 /*4*/] = { -3942.24f, -2130.83f, -4.5484f };
				Local_981[iVar1 /*4*/].f_3 = 2f;
				break;
			case 22:
				Local_981[iVar1 /*4*/] = { -3945.389f, -2122.152f, -4.6311f };
				Local_981[iVar1 /*4*/].f_3 = 2f;
				break;
			case 23:
				Local_981[iVar1 /*4*/] = { -3958.01f, -2111.579f, -4.5302f };
				Local_981[iVar1 /*4*/].f_3 = 2f;
				break;
			case 24:
				Local_981[iVar1 /*4*/] = { -3964.481f, -2109.635f, -5.0323f };
				Local_981[iVar1 /*4*/].f_3 = 2f;
				break;
			case 25:
				Local_981[iVar1 /*4*/] = { -3970.395f, -2116.261f, -5.5881f };
				Local_981[iVar1 /*4*/].f_3 = 2f;
				break;
		}
		iVar1++;
	}
}

bool func_167()
{
	if (__LIB_0__::func_27(iLocal_19, 16))
	{
		return true;
	}
	if (!func_279(&(Local_1140[0 /*6*/].f_3), &(Local_1140[0 /*6*/].f_1), &(Local_1140[0 /*6*/].f_2), joaat("P_NIGHTSTANDSIX01"), -3953.96f, -2130.33f, -5.3f, 1))
	{
		return false;
	}
	if (!func_279(&(Local_1140[1 /*6*/].f_3), &(Local_1140[1 /*6*/].f_1), &(Local_1140[1 /*6*/].f_2), joaat("P_CABINET05X"), -3962.54f, -2119.48f, -5.09f, 1))
	{
		return false;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_1140[0 /*6*/]))
	{
		Local_1140[0 /*6*/] = TASK::_0xD508FA229F1C4900(Local_1140[0 /*6*/].f_2, 0f, 0f, 0f, joaat("RANSACK_ATTACHED_P_NIGHTSTANDSIX01"), 1f);
		return false;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_1140[1 /*6*/]))
	{
		Local_1140[1 /*6*/] = TASK::_0xD508FA229F1C4900(Local_1140[1 /*6*/].f_2, 0f, 0f, 0f, joaat("RANSACK_ATTACHED_P_CABINET05X"), 1f);
		return false;
	}
	func_280(joaat("P_NIGHTSTANDSIX01"), -3953.96f, -2130.33f, -5.3f, &(Local_1140[0 /*6*/].f_2), Local_1140[0 /*6*/], 0);
	func_280(joaat("P_CABINET05X"), -3962.54f, -2119.48f, -5.09f, &(Local_1140[1 /*6*/].f_2), Local_1140[1 /*6*/], 0);
	__LIB_9__::func_721(joaat("P_NIGHTSTANDSIX01"), -3953.96f, -2130.33f, -5.3f, &(Local_1140[0 /*6*/].f_2), joaat("PROVISION_GOLD_NUGGET"), 1, Local_1140[0 /*6*/], 0, 0);
	__LIB_9__::func_721(joaat("P_CABINET05X"), -3962.54f, -2119.48f, -5.09f, &(Local_1140[1 /*6*/].f_2), joaat("PROVISION_POCKET_WATCH_PLATINUM"), 1, Local_1140[1 /*6*/], 0, 0);
	__LIB_9__::func_721(joaat("P_CABINET05X"), -3962.54f, -2119.48f, -5.09f, &(Local_1140[1 /*6*/].f_2), joaat("PROVISION_RING_PLATINUM"), 1, Local_1140[1 /*6*/], 0, 0);
	return true;
}

void func_171()
{
	int iVar0;
	func_287();
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		func_288(iVar0);
		iVar0++;
	}
}

void func_173()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_44.f_3 > 5)
	{
		return;
	}
	iVar0 = iLocal_980;
	if (iVar0 == 9 || iVar0 == 10)
	{
		iLocal_980++;
		if (iLocal_980 >= 13)
		{
			iLocal_980 = 0;
		}
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_849[iVar0 /*9*/].f_5) && !ENTITY::IS_ENTITY_DEAD(Local_849[iVar0 /*9*/].f_5))
	{
		if (Local_601[iVar0 /*19*/].f_18 && __LIB_0__::func_393(Local_849[iVar0 /*9*/].f_5, iLocal_1098[0], 0, 1))
		{
			Local_601[iVar0 /*19*/].f_18 = 0;
		}
		else if (!__LIB_0__::func_393(Local_849[iVar0 /*9*/].f_5, iLocal_1098[0], 0, 1) && !Local_601[iVar0 /*19*/].f_18)
		{
			PED::SET_PED_CONFIG_FLAG(Local_849[iVar0 /*9*/].f_5, 112, false);
			PED::SET_PED_COMBAT_MOVEMENT(Local_849[iVar0 /*9*/].f_5, 1);
			func_296(iVar0, func_295(ENTITY::GET_ENTITY_COORDS(Local_849[iVar0 /*9*/].f_5, true, false)));
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
			TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD_USING_COMBAT_STYLE(0, Local_981[Local_601[iVar0 /*19*/].f_3 /*4*/], Global_36, 2f, 1, 0.5f, 4f, 1, 8192, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
			TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
			__LIB_1__::func_474(Local_849[iVar0 /*9*/].f_5, &iLocal_1114, 0f, 0.5f, 1, 1);
			Local_601[iVar0 /*19*/].f_18 = 1;
		}
		else if (__LIB_0__::func_48(Global_35, Local_849[iVar0 /*9*/].f_5, 3f, 1))
		{
			func_299(iVar0);
		}
		else if (__LIB_0__::func_264(&(Local_601[iVar0 /*19*/].f_11)) > 20f)
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
			if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1098[7], true, 0) && !PED::GET_PED_CONFIG_FLAG(Local_849[iVar0 /*9*/].f_5, 112, true)) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_849[iVar0 /*9*/].f_5, Global_35, 17))
			{
				if (func_301(27) && iVar1 < 20)
				{
					func_296(iVar0, 27);
				}
				else if (iVar1 == 0)
				{
					func_299(iVar0);
				}
			}
			else if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1098[9], true, 0) && !PED::GET_PED_CONFIG_FLAG(Local_849[iVar0 /*9*/].f_5, 112, true)) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_849[iVar0 /*9*/].f_5, Global_35, 17))
			{
				if (func_301(26) && iVar1 < 20)
				{
					func_296(iVar0, 26);
				}
				else if (iVar1 == 0)
				{
					func_299(iVar0);
				}
			}
			else if (iVar1 > 100 || !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_849[iVar0 /*9*/].f_5, Global_35, 17))
			{
				iVar2 = func_302(Local_601[iVar0 /*19*/].f_3);
				if (iVar2 != -1 && iVar2 != Local_601[iVar0 /*19*/].f_3)
				{
					func_296(iVar0, iVar2);
				}
			}
		}
	}
	else if (Local_601[iVar0 /*19*/].f_3 != -1 && ENTITY::DOES_ENTITY_EXIST(Local_849[iVar0 /*9*/].f_5))
	{
		func_303(iVar0);
	}
	iLocal_980++;
	if (iLocal_980 >= 13)
	{
		iLocal_980 = 0;
	}
}

void func_176()
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_51(&(Local_44.f_5), 65536))
	{
		return;
	}
	if (__LIB_0__::func_51(&(Local_44.f_5), 131072))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_849[iVar1 /*9*/].f_6))
		{
			if (__LIB_4__::func_117(Local_849[iVar1 /*9*/].f_5, 60f, 0))
			{
				__LIB_9__::func_609(&(Local_849[iVar1 /*9*/]), joaat("BLIP_STYLE_ENEMY"), -662251075);
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 >= 13)
	{
		__LIB_0__::func_7(&(Local_44.f_5), 131072);
	}
}

void func_177()
{
	switch (iLocal_971)
	{
		case 0:
		case 1:
		case 2:
			break;
	}
}

void func_178()
{
	switch (iLocal_18)
	{
		case 0:
			if (__LIB_2__::func_117(32768))
			{
				iLocal_18 = 4;
			}
			else
			{
				iLocal_18 = 3;
			}
			break;
		case 1:
			func_66(0);
			iLocal_18 = 3;
			break;
		case 2:
			func_66(0);
			iLocal_18 = 4;
			break;
		case 3:
			if (__LIB_2__::func_117(32768))
			{
				iLocal_18 = 2;
			}
			break;
		case 4:
			if (!__LIB_2__::func_117(32768))
			{
				iLocal_18 = 1;
			}
			break;
	}
}

int func_179()
{
	switch (iLocal_971)
	{
		case 0:
		case 1:
		case 2:
			if (((func_306(0, 15f, 25f, -1) || func_306(1, 15f, 25f, -1)) || func_306(2, 25f, 35f, -1)) || func_306(3, 30f, 40f, -1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_180()
{
	int iVar0;
	iVar0 = func_307(Global_36, 0);
	if (__LIB_0__::func_393(Global_35, iLocal_1098[4], 0, 1) && func_308(&iVar0))
	{
		func_309();
		if (func_310(Local_849[iVar0 /*9*/].f_5, Local_849[iVar0 /*9*/].f_5, 4, 0, -1082130432 /* Float: -1f */, 291934926, -1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (__LIB_9__::func_723(Local_849[iVar0 /*9*/].f_5, 0, &(Local_44.f_155), &(Local_44.f_183), 0, 0))
		{
			if (__LIB_1__::func_339(Local_44.f_183, 1, 1, 1, 0) || Local_44.f_183 == 256)
			{
				iLocal_975 = iVar0;
				func_309();
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_181(int iParam0)
{
	PED::SET_PED_CONFIG_FLAG(Local_849[iParam0 /*9*/].f_5, 297, false);
	PED::SET_PED_CONFIG_FLAG(Local_849[iParam0 /*9*/].f_5, 130, false);
	PED::SET_PED_CONFIG_FLAG(Local_849[iParam0 /*9*/].f_5, 315, false);
	PED::SET_PED_CONFIG_FLAG(Local_849[iParam0 /*9*/].f_5, 301, true);
	__LIB_2__::func_593(&(Local_268[iParam0 /*83*/]), &(Local_268[iParam0 /*83*/].f_21));
}

bool func_183()
{
	int iVar0;
	iVar0 = -1;
	iVar0 = func_314(&Local_849, &Local_44, 0, 0, 0, (Local_44.f_199 - 1));
	if (iVar0 < 0)
	{
		return false;
	}
	Local_44.f_190 = iVar0;
	Local_44.f_192 = Local_849[Local_44.f_190 /*9*/].f_5;
	return true;
}

bool func_184()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;
	iVar0 = func_307(Global_36, 0);
	if ((!__LIB_0__::func_27(iLocal_19, 8) && func_315(0f, iVar0, 0, 0)) && func_310(Local_849[iVar0 /*9*/].f_5, 0, 5, 0f, -1f, 291934926, iVar0))
	{
		__LIB_1__::func_683(&iLocal_19, 8);
	}
	switch (iLocal_15)
	{
		case 0:
			func_316();
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_849[iVar0 /*9*/].f_5))
				{
					PED::SET_PED_SEEING_RANGE(Local_849[iVar0 /*9*/].f_5, 60f);
					PED::SET_PED_HEARING_RANGE(Local_849[iVar0 /*9*/].f_5, 60f);
				}
				iVar0++;
			}
			iLocal_15 = 1;
			break;
		case 1:
			func_317(iLocal_975, 0);
			func_318(iLocal_975);
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (iVar0 != iLocal_975)
				{
					if (__LIB_0__::func_48(Local_849[iVar0 /*9*/].f_5, Local_849[iLocal_975 /*9*/].f_5, 10f, 1))
					{
						Local_601[iVar0 /*19*/].f_17 = MISC::GET_RANDOM_INT_IN_RANGE(0, 500);
					}
					else
					{
						Local_601[iVar0 /*19*/].f_17 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000);
					}
					__LIB_1__::func_148(&(Local_601[iVar0 /*19*/].f_14));
				}
				iVar0++;
			}
			iLocal_15 = 2;
			break;
		case 2:
			if ((Local_44.f_183 == 4 && !__LIB_0__::func_237(__LIB_0__::func_399(Global_35, 1, 0, 0))) || Local_44.f_183 == 256)
			{
				iVar0 = 0;
				while (iVar0 <= 8)
				{
					if (iVar0 != iLocal_975 && __LIB_2__::func_1(Local_849[iVar0 /*9*/].f_5, 0, 1))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_849[iVar0 /*9*/].f_5))
						{
							PED::_0x62FDAD5E01D2DD47(Local_849[iVar0 /*9*/].f_5, Global_36, 3, 0);
						}
						fVar1 = (__LIB_0__::func_665(Global_35, Local_849[iVar0 /*9*/].f_5, 1, 1) * 0.2f);
						vVar2 = { __LIB_3__::func_857(Global_36, fVar1, 0.5f) };
						TASK::TASK_AIM_AT_COORD(Local_849[iVar0 /*9*/].f_5, vVar2, 5000, 0, 0);
					}
					iVar0++;
				}
			}
			iLocal_15 = 3;
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (Local_601[iVar0 /*19*/].f_2)
				{
					iVar5++;
				}
				else if ((__LIB_3__::func_135(&(Local_601[iVar0 /*19*/].f_14)) > Local_601[iVar0 /*19*/].f_17 || __LIB_0__::func_48(Global_35, Local_849[iVar0 /*9*/].f_5, 8f, 1)) || func_324(iVar0))
				{
					func_317(iVar0, 1);
				}
				iVar0++;
			}
			func_325();
			if (iVar5 >= (8 - 0) + 1)
			{
				iLocal_15 = 4;
			}
			break;
		case 4:
			func_181(0);
			func_181(1);
			func_181(2);
			func_181(3);
			AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_ACTION");
			__LIB_1__::func_683(&iLocal_19, 4);
			__LIB_1__::func_148(&uLocal_35);
			return true;
	}
	return false;
}

void func_185()
{
	if (!__LIB_0__::func_75(&uLocal_32))
	{
		__LIB_1__::func_148(&uLocal_32);
	}
	if (Local_44.f_198 > 4)
	{
		func_326();
	}
	func_327();
	func_328();
	func_329();
}

bool func_186(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;
	if (iParam2 >= 0)
	{
		iVar0 = iParam2;
	}
	else
	{
		iVar0 = iParam0->f_198;
	}
	if (iVar0 < iParam0->f_189)
	{
		switch (iParam0->f_205)
		{
			case 79:
				vVar3 = { 2279.824f, 1490.092f, 83.44096f };
				break;
			case 16:
				vVar3 = { -2142.385f, 797.8377f, 135.6134f };
				break;
			case 36:
				vVar3 = { -50.2002f, 1267.741f, 171.5688f };
				break;
		}
		iVar1 = 0;
		while (iVar1 < iParam0->f_199)
		{
			__LIB_9__::func_708(iParam1[iVar1 /*9*/], iParam0->f_207, &uVar2, iVar1, vVar3);
			iVar1++;
		}
		if (!__LIB_0__::func_75(&(iParam0->f_211)))
		{
			__LIB_1__::func_283(&(iParam0->f_211), 0);
		}
		__LIB_0__::func_7(&(iParam0->f_5), 128);
		return true;
	}
	return false;
}

void func_187()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_849[iVar0 /*9*/].f_5) && !PED::IS_PED_INJURED(Local_849[iVar0 /*9*/].f_5))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(Local_849[iVar0 /*9*/].f_5, Global_35, 3, 266240, -1082130432 /* Float: -1f */, -1, 0);
		}
		iVar0++;
	}
}

void func_188()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_51(&(Local_44.f_5), 33554432))
	{
		return;
	}
	iVar0 = (10 - 0) + 1;
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		if (MAP::DOES_BLIP_EXIST(Local_849[iVar1 /*9*/].f_6))
		{
			if ((!__LIB_0__::func_48(Global_35, Local_849[iVar1 /*9*/].f_5, 50f, 1) && ENTITY::IS_ENTITY_OCCLUDED(Local_849[iVar1 /*9*/].f_5)) || !__LIB_2__::func_1(Local_849[iVar1 /*9*/].f_5, 0, 1))
			{
				MAP::REMOVE_BLIP(&(Local_849[iVar1 /*9*/].f_6));
				if (!__LIB_2__::func_1(Local_849[iVar1 /*9*/].f_5, 0, 1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_849[iVar1 /*9*/].f_5));
				}
				else
				{
					PED::DELETE_PED(&(Local_849[iVar1 /*9*/].f_5));
				}
			}
		}
		else
		{
			iVar0 = (iVar0 - 1);
		}
		iVar1++;
	}
	if (iVar0 <= 0)
	{
		__LIB_0__::func_7(&(Local_44.f_5), 33554432);
	}
}

void func_189()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_849[iVar0 /*9*/].f_5))
		{
			switch (iLocal_20)
			{
				case 0:
					if (func_315(0.5f, -1, 1, 0) && func_310(Local_849[iVar0 /*9*/].f_5, 0, 6, 0, -1082130432 /* Float: -1f */, 291934926, -1))
					{
						iLocal_20++;
					}
					break;
			}
		}
		iVar0++;
	}
}

int func_190(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!__LIB_9__::func_641(iParam1, iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_51(&(iParam0->f_5), 256))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		__LIB_9__::func_626(iParam0);
		__LIB_9__::func_622(iParam0);
		if (bParam4)
		{
			func_335(iParam0->f_205, bParam3, 0);
		}
		__LIB_9__::func_607(iParam0, 0);
		__LIB_0__::func_7(&(iParam0->f_5), 256);
		__LIB_0__::func_7(&(iParam0->f_5), 8);
	}
	return 1;
}

bool func_191()
{
	int iVar0;
	if (!__LIB_0__::func_75(&uLocal_41))
	{
		__LIB_1__::func_283(&uLocal_41, 0);
	}
	else if (__LIB_0__::func_264(&uLocal_41) > 5f)
	{
		switch (iLocal_971)
		{
			case 0:
				iVar0 = 15;
				break;
			case 1:
			case 2:
				iVar0 = 16;
				break;
		}
		if (func_310(Global_35, 0, iVar0, 0, -1082130432 /* Float: -1f */, 291934926, -1))
		{
			return true;
		}
	}
	else if (__LIB_0__::func_264(&uLocal_41) > 3f && !__LIB_0__::func_491(Global_35, 716706914))
	{
		if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
		}
		else
		{
			__LIB_9__::func_718(Global_35, 1);
		}
	}
	return false;
}

char* func_202(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
	{
		sVar0 = __LIB_0__::func_67(Global_1894899.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = __LIB_1__::func_911(func_355(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!__LIB_1__::func_912(iParam0) || __LIB_0__::func_293(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

void func_239()
{
	__LIB_9__::func_600(&Local_44, 1);
	__LIB_4__::func_193(376);
	__LIB_4__::func_193(377);
	__LIB_4__::func_193(378);
	__LIB_4__::func_193(379);
	Local_44.f_205 = 125;
	__LIB_9__::func_724(&Local_849, &Local_44, &uLocal_967, SCRIPTS::GET_ID_OF_THIS_THREAD(), "Twin Rocks");
}

bool func_279(var uParam0, var uParam1, var uParam2, int iParam3, vector3 vParam4, bool bParam7)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return true;
	}
	else
	{
		if (!__LIB_0__::func_75(uParam0))
		{
			__LIB_1__::func_283(uParam0, 0);
		}
		else if (__LIB_0__::func_265(uParam0) > 10f)
		{
			return true;
		}
		if (*uParam1 == 0)
		{
			if (bParam7)
			{
				*uParam1 = ENTITY::_0x6F3068258A499E52(iParam3, vParam4, 7);
			}
			else
			{
				*uParam1 = ENTITY::_0x6F3068258A499E52(iParam3, vParam4, 11);
			}
		}
		else if (ENTITY::_0x1FF441D7954F8709(*uParam1))
		{
			*uParam2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*uParam1));
		}
		return false;
	}
	return false;
}

void func_280(int iParam0, vector3 vParam1, var uParam4, var uParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		*uParam4 = __LIB_3__::func_326(iParam0, vParam1, uParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		__LIB_3__::func_579(*uParam4);
	}
}

void func_287()
{
	if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
	{
		if (__LIB_0__::func_75(&uLocal_38))
		{
			__LIB_0__::func_37(&uLocal_38);
		}
	}
	else if (!__LIB_0__::func_75(&uLocal_38))
	{
		__LIB_1__::func_148(&uLocal_38);
	}
}

void func_288(int iParam0)
{
	if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_849[iParam0 /*9*/].f_5))
	{
		if (__LIB_0__::func_75(&(Local_601[iParam0 /*19*/].f_8)))
		{
			__LIB_0__::func_37(&(Local_601[iParam0 /*19*/].f_8));
		}
	}
	else if (!__LIB_0__::func_75(&(Local_601[iParam0 /*19*/].f_8)))
	{
		__LIB_1__::func_148(&(Local_601[iParam0 /*19*/].f_8));
	}
}

int func_295(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 99999.9f;
	iVar3 = 0;
	while (iVar3 <= 27)
	{
		if (func_301(iVar3))
		{
			fVar1 = BUILTIN::VDIST2(Local_981[iVar3 /*4*/], vParam0);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

void func_296(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_849[iParam0 /*9*/].f_5))
	{
		return;
	}
	else if (!func_301(iParam1))
	{
		return;
	}
	else if (PED::GET_PED_CONFIG_FLAG(Local_849[iParam0 /*9*/].f_5, 112, true))
	{
		return;
	}
	__LIB_1__::func_148(&(Local_601[iParam0 /*19*/].f_11));
	Local_601[iParam0 /*19*/].f_3 = iParam1;
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_849[iParam0 /*9*/].f_5, Local_981[iParam1 /*4*/], Local_981[iParam1 /*4*/].f_3, 1, 0, 0);
}

bool func_299(int iParam0)
{
	func_303(iParam0);
	PED::SET_PED_COMBAT_MOVEMENT(Local_849[iParam0 /*9*/].f_5, 2);
	PED::SET_PED_CONFIG_FLAG(Local_849[iParam0 /*9*/].f_5, 112, true);
	return true;
}

bool func_301(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (Local_601[iVar0 /*19*/].f_3 == iParam0)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_302(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	if (iParam0 == -1)
	{
		return -1;
	}
	vVar0 = { Global_36 + Local_981[iParam0 /*4*/] * Vector(0.5f, 0.5f, 0.5f) };
	fVar3 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_981[iParam0 /*4*/], true) * 0.5f);
	iVar4 = 0;
	while (iVar4 <= 19)
	{
		vVar5 = { __LIB_9__::func_720(vVar0, fVar3, 0f) };
		iVar8 = func_295(vVar5);
		if (!__LIB_1__::func_410(Local_981[iVar8 /*4*/], vVar0, fVar3, 1))
		{
			Jump @248; //curOff = 127
		}
		else if (iParam0 == 26 || iParam0 == 27)
		{
			Jump @248; //curOff = 152
		}
		else if (__LIB_0__::func_266(Global_35, Local_981[iVar8 /*4*/], 10f, 1, 1))
		{
			Jump @248; //curOff = 184
		}
		else if (iVar8 == iParam0)
		{
			Jump @248; //curOff = 197
		}
		else if (BUILTIN::VDIST2(Global_36, Local_981[iVar8 /*4*/]) < BUILTIN::VDIST2(Global_36, Local_981[iParam0 /*4*/]))
		{
			return iVar8;
		}
		iVar4++;
	}
	return -1;
}

void func_303(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_849[iParam0 /*9*/].f_5))
	{
		Local_601[iParam0 /*19*/].f_3 = -1;
		return;
	}
	Local_601[iParam0 /*19*/].f_3 = -1;
	PED::REMOVE_PED_DEFENSIVE_AREA(Local_849[iParam0 /*9*/].f_5, false);
}

int func_306(int iParam0, float fParam1, float fParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = -1;
	if (Local_268[iParam0 /*83*/].f_76 > 0)
	{
		iVar0 = func_406(iParam0, (fParam1 + 5f));
	}
	iVar2 = Local_849[iParam0 /*9*/].f_5;
	if (iParam3 != -1)
	{
		bVar1 = true;
		iVar3 = Local_849[iParam3 /*9*/].f_5;
	}
	iVar4 = -1;
	if ((Local_268[iParam0 /*83*/].f_76 >= 3 && Local_268[iParam0 /*83*/].f_76 <= 22) && !__LIB_0__::func_48(Global_35, iVar2, fParam2, 1))
	{
		func_407(iParam0, 26);
	}
	switch (Local_268[iParam0 /*83*/].f_76)
	{
		case 0:
			__LIB_3__::func_157(&(Local_268[iParam0 /*83*/].f_21[0 /*17*/]), "RE_INTER_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_3__::func_157(&(Local_268[iParam0 /*83*/].f_21[1 /*17*/]), "RE_INTER_ANTAGONIZE", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			func_409(iParam0, 0, !Local_268[iParam0 /*83*/].f_74);
			func_409(iParam0, 1, 1);
			func_407(iParam0, 1);
			break;
		case 1:
			if (func_324(iParam0))
			{
				__LIB_4__::func_242(iVar2, Global_35, &uLocal_1115, -1, 30);
				if (bVar1)
				{
					__LIB_4__::func_242(iVar3, Global_35, &uLocal_1115, -1, 30);
				}
				func_407(iParam0, 2);
			}
			if (iVar0 == 0)
			{
				func_407(iParam0, 3);
			}
			else if (iVar0 == 1)
			{
				func_407(iParam0, 4);
			}
			break;
		case 2:
			func_409(iParam0, 0, 0);
			if (__LIB_0__::func_48(Global_35, iVar2, fParam1, 1) && func_324(iParam0))
			{
				func_407(iParam0, 17);
			}
			break;
		case 3:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			iVar4 = 7;
			if (func_315(0.5f, iParam0, 1, 0) && func_310(Global_35, iVar2, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 5);
			}
			break;
		case 4:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			iVar4 = 8;
			if (func_315(0.5f, iParam0, 1, 0) && func_310(Global_35, iVar2, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 6);
			}
			break;
		case 5:
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar2))
			{
				PED::_0x62FDAD5E01D2DD47(iVar2, Global_36, 3, 0);
			}
			if (bVar1 && PED::IS_PED_USING_ANY_SCENARIO(iVar3))
			{
				PED::_0x62FDAD5E01D2DD47(iVar3, Global_36, 3, 0);
			}
			func_407(iParam0, 7);
			break;
		case 7:
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 11;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 8);
			}
			break;
		case 8:
			if (bLocal_974)
			{
				func_407(iParam0, 28);
				return 0;
			}
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (func_315(0.5f, iParam0, 1, 0))
			{
				if (!Local_268[iParam0 /*83*/].f_73)
				{
					__LIB_2__::func_360(&(Local_268[iParam0 /*83*/].f_21[0 /*17*/]), "RE_INTER_DEFUSE");
					Local_268[iParam0 /*83*/].f_73 = 1;
				}
				func_409(iParam0, 0, !Local_268[iParam0 /*83*/].f_74);
				func_409(iParam0, 1, 1);
			}
			if (iVar0 == 0)
			{
				func_407(iParam0, 11);
			}
			else if (iVar0 == 1)
			{
				func_407(iParam0, 14);
			}
			else if (((__LIB_0__::func_265(&(Local_268[iParam0 /*83*/].f_77)) > 5f && func_315(5f, iParam0, 1, 0)) && func_324(iParam0)) && !__LIB_9__::func_719(iVar2))
			{
				if (iParam0 == 0 || iParam0 == 1)
				{
					func_407(iParam0, 23);
				}
				else
				{
					func_407(iParam0, 20);
				}
			}
			break;
		case 9:
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 12;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 10);
			}
			break;
		case 10:
			if (bLocal_974)
			{
				func_407(iParam0, 28);
				return 0;
			}
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (func_315(0.5f, iParam0, 1, 0))
			{
				if (!Local_268[iParam0 /*83*/].f_73)
				{
					__LIB_2__::func_360(&(Local_268[iParam0 /*83*/].f_21[0 /*17*/]), "RE_INTER_DEFUSE");
					Local_268[iParam0 /*83*/].f_73 = 1;
				}
				func_409(iParam0, 0, !Local_268[iParam0 /*83*/].f_74);
				func_409(iParam0, 1, 1);
			}
			if (iVar0 == 0)
			{
				func_407(iParam0, 11);
			}
			else if (iVar0 == 1)
			{
				func_407(iParam0, 14);
			}
			else if (((__LIB_0__::func_265(&(Local_268[iParam0 /*83*/].f_77)) > 5f && func_315(5f, iParam0, 1, 0)) && func_324(iParam0)) && !__LIB_9__::func_719(iVar2))
			{
				func_407(iParam0, 23);
			}
			break;
		case 11:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			iVar4 = 9;
			if (func_315(0.5f, iParam0, 1, 0) && func_310(Global_35, iVar2, iVar4, 0f, -1f, 291934926, iParam0))
			{
				Local_268[iParam0 /*83*/].f_74 = 1;
				func_407(iParam0, 12);
			}
			break;
		case 12:
			if (__LIB_0__::func_491(iVar2, -1073489615))
			{
				TASK::CLEAR_PED_TASKS(iVar2, true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar2, Global_35, -1, -1f, -1f, -1f);
			}
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 13;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 13);
			}
			break;
		case 13:
			if (func_315(0.5f, iParam0, 1, 0))
			{
				func_409(iParam0, 1, 1);
			}
			if (iVar0 == 1)
			{
				func_407(iParam0, 14);
			}
			else if (((__LIB_0__::func_265(&(Local_268[iParam0 /*83*/].f_77)) > 5f && func_315(5f, iParam0, 1, 0)) && func_324(iParam0)) && !__LIB_9__::func_719(iVar2))
			{
				func_407(iParam0, 23);
			}
			break;
		case 14:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			iVar4 = 10;
			if (func_315(0.5f, iParam0, 1, 0) && func_310(Global_35, iVar2, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 15);
			}
			break;
		case 15:
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 14;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 16);
			}
			break;
		case 16:
			if (func_315(0f, iParam0, 1, 0))
			{
				TASK::TASK_SHOOT_AT_ENTITY(iVar2, Global_35, -1, 0, 0);
				return 1;
			}
			break;
		case 17:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (__LIB_0__::func_491(iVar2, -1073489615))
			{
				func_407(iParam0, 18);
			}
			break;
		case 18:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 0;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 19);
			}
			break;
		case 19:
			if (bLocal_974)
			{
				func_407(iParam0, 28);
				return 0;
			}
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (func_315(0.5f, iParam0, 1, 0))
			{
				if (!Local_268[iParam0 /*83*/].f_73)
				{
					__LIB_2__::func_360(&(Local_268[iParam0 /*83*/].f_21[0 /*17*/]), "RE_INTER_DEFUSE");
					Local_268[iParam0 /*83*/].f_73 = 1;
				}
				func_409(iParam0, 0, !Local_268[iParam0 /*83*/].f_74);
				func_409(iParam0, 1, 1);
			}
			if (iVar0 == 0)
			{
				func_407(iParam0, 11);
			}
			else if (iVar0 == 1)
			{
				func_407(iParam0, 14);
			}
			else if ((((__LIB_0__::func_265(&(Local_268[iParam0 /*83*/].f_77)) > 5f && func_315(5f, iParam0, 1, 0)) && !__LIB_9__::func_719(iVar2)) && func_324(iParam0)) && func_315(0.5f, iParam0, 1, 1))
			{
				if (iParam0 == 0 || iParam0 == 1)
				{
					func_407(iParam0, 23);
				}
				else
				{
					func_407(iParam0, 20);
				}
			}
			break;
		case 20:
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (__LIB_0__::func_491(iVar2, -1073489615))
			{
				func_407(iParam0, 21);
			}
			break;
		case 21:
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 1;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 22);
			}
			break;
		case 22:
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (func_315(0.5f, iParam0, 1, 0))
			{
				func_409(iParam0, 0, !Local_268[iParam0 /*83*/].f_74);
				func_409(iParam0, 1, 1);
			}
			if (iVar0 == 0)
			{
				func_407(iParam0, 11);
			}
			else if (iVar0 == 1)
			{
				func_407(iParam0, 14);
			}
			else if ((((__LIB_0__::func_265(&(Local_268[iParam0 /*83*/].f_77)) > 5f && func_315(5f, iParam0, 1, 0)) && func_324(iParam0)) && !__LIB_9__::func_719(iVar2)) && func_315(0.5f, iParam0, 1, 1))
			{
				func_407(iParam0, 23);
			}
			break;
		case 23:
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar2))
			{
				PED::_0x802092B07E3B1EEA(iVar2, Global_36, 3);
			}
			if (!__LIB_0__::func_491(iVar2, 242628503))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
				TASK::TASK_SHOOT_AT_COORD(0, Global_36 + Vector(1f, 1f, 1f), 2000, joaat("FIRING_PATTERN_SINGLE_SHOT"), 0);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
				__LIB_1__::func_474(iVar2, &iLocal_1114, 0, 0, 1, 1);
			}
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (__LIB_0__::func_491(iVar2, 242628503))
			{
				func_407(iParam0, 24);
			}
			break;
		case 24:
			if (!__LIB_0__::func_491(iVar2, 242628503))
			{
				func_411(iParam0, 0);
			}
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			iVar4 = 2;
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, iVar4, 0f, -1f, 291934926, iParam0))
			{
				func_407(iParam0, 25);
			}
			break;
		case 25:
			if (!__LIB_0__::func_491(iVar2, 242628503))
			{
				func_411(iParam0, 0);
			}
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			if (func_315(0.5f, iParam0, 1, 0))
			{
				func_409(iParam0, 0, !Local_268[iParam0 /*83*/].f_74);
				func_409(iParam0, 1, 1);
			}
			if (iVar0 == 0)
			{
				func_407(iParam0, 11);
			}
			else if (iVar0 == 1)
			{
				func_407(iParam0, 14);
			}
			else if (((__LIB_0__::func_265(&(Local_268[iParam0 /*83*/].f_77)) > 5f && func_315(5f, iParam0, 1, 0)) && func_324(iParam0)) && !__LIB_9__::func_719(iVar2))
			{
				TASK::TASK_SHOOT_AT_ENTITY(iVar2, Global_35, -1, 0, 0);
				return 1;
			}
			break;
		case 26:
			TASK::TASK_START_SCENARIO_AT_POSITION(iVar2, func_414(iParam0), Local_849[iParam0 /*9*/].f_1, Local_849[iParam0 /*9*/].f_4, -1, true, false, 0, -1f, false);
			if (bVar1)
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(iVar3, func_414(iParam3), Local_849[iParam3 /*9*/].f_1, Local_849[iParam3 /*9*/].f_4, -1, true, false, 0, -1f, false);
			}
			func_407(iParam0, 27);
			break;
		case 27:
			if ((func_324(iParam0) && __LIB_0__::func_48(Global_35, iVar2, (fParam1 - 5f), 1)) && !__LIB_9__::func_719(iVar2))
			{
				func_407(iParam0, 23);
			}
			break;
		case 28:
			func_411(iParam0, 0);
			if (bVar1)
			{
				func_411(iParam3, 1);
			}
			func_409(iParam0, 0, 0);
			func_409(iParam0, 1, 0);
			if (func_315(0.5f, iParam0, 1, 1) && func_310(iVar2, Global_35, 3, 0, -1082130432 /* Float: -1f */, 291934926, iParam0))
			{
				func_407(iParam0, 29);
			}
			break;
		case 29:
			if (func_315(0f, iParam0, 1, 0))
			{
				TASK::TASK_SHOOT_AT_ENTITY(iVar2, Global_35, -1, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_307(vector3 vParam0, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 99999.9f;
	iVar3 = 0;
	while (iVar3 <= 10)
	{
		if (__LIB_2__::func_1(Local_849[iVar3 /*9*/].f_5, 0, 1))
		{
			if (!bParam3 || Local_601[iVar3 /*19*/].f_3 == -1)
			{
				fVar1 = __LIB_1__::func_992(Local_849[iVar3 /*9*/].f_5, vParam0, 1);
				if (fVar1 < fVar0)
				{
					fVar0 = fVar1;
					iVar2 = iVar3;
				}
			}
		}
		iVar3++;
	}
	return iVar2;
}

bool func_308(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (func_324(iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_309()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		func_416(iVar0, 100);
		iVar0++;
	}
}

bool func_310(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	char* sVar1;
	if (iParam2 == -1)
	{
		return true;
	}
	sVar1 = func_417(iParam2, &iVar0, iParam6);
	if (!__LIB_0__::func_75(&uLocal_29))
	{
		__LIB_1__::func_148(&uLocal_29);
	}
	else if (__LIB_0__::func_265(&uLocal_29) > fParam3 && __LIB_2__::func_303(iParam0, iParam1, sVar1, 0, fParam4, iVar0, 0, 0, 1, 1, 1, iParam5, 1, 0, 0))
	{
		__LIB_0__::func_37(&uLocal_29);
		return true;
	}
	return false;
}

int func_314(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam5 == 0)
	{
		if (uParam1->f_199 > 0)
		{
			iParam5 = (uParam1->f_199 - 1);
		}
		else
		{
			iParam5 = (*iParam0 - 1);
		}
	}
	iVar1 = __LIB_0__::func_259((iParam5 - iParam4) + 1, 5);
	iVar2 = (iParam5 - iParam4) + 1;
	if (uParam1->f_191 == -1)
	{
		uParam1->f_191 = iParam4;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (uParam1->f_191 > ((iParam4 + iVar2) - 1) || uParam1->f_191 < iParam4)
		{
			uParam1->f_191 = iParam4;
		}
		if (!__LIB_1__::func_376((iParam0[uParam1->f_191 /*9*/])->f_5) || bParam3)
		{
			if (__LIB_9__::func_782((iParam0[uParam1->f_191 /*9*/])->f_5, &(uParam1->f_155), &(uParam1->f_183), 0))
			{
				if (bParam2)
				{
					__LIB_9__::func_609(iParam0[uParam1->f_191 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
				}
				return uParam1->f_191;
			}
		}
		else if (__LIB_1__::func_376((iParam0[uParam1->f_191 /*9*/])->f_5))
		{
			if (__LIB_0__::func_665((iParam0[uParam1->f_191 /*9*/])->f_5, Global_35, 0, 1) < 2f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((iParam0[uParam1->f_191 /*9*/])->f_5, Global_35, 17))
			{
				if (bParam2)
				{
					__LIB_9__::func_609(iParam0[uParam1->f_191 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
				}
				return uParam1->f_191;
			}
		}
		uParam1->f_191++;
		iVar0++;
	}
	return -1;
}

bool func_315(float fParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == -1)
	{
		return func_454() > fParam0;
	}
	if (bParam2 && func_455() < fParam0)
	{
		return false;
	}
	if (bParam3)
	{
		if (((func_456(0) < fParam0 || func_456(1) < fParam0) || func_456(2) < fParam0) || func_456(3) < fParam0)
		{
			return false;
		}
	}
	return func_456(iParam1) > fParam0;
}

void func_316()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (Local_601[iVar0 /*19*/].f_3 == -1)
		{
			func_296(iVar0, func_295(ENTITY::GET_ENTITY_COORDS(Local_849[iVar0 /*9*/].f_5, true, false)));
		}
		iVar0++;
	}
}

void func_317(int iParam0, bool bParam1)
{
	if (Local_601[iParam0 /*19*/].f_2)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_849[iParam0 /*9*/].f_5))
	{
		Local_601[iParam0 /*19*/].f_2 = 1;
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Local_849[iParam0 /*9*/].f_5))
	{
		PED::_0x802092B07E3B1EEA(Local_849[iParam0 /*9*/].f_5, Global_36, 3);
	}
	if (bParam1)
	{
		TASK::TASK_COMBAT_PED(Local_849[iParam0 /*9*/].f_5, Global_35, 16777216, 16);
	}
	else if ((Local_44.f_183 == 4 && !__LIB_0__::func_237(__LIB_0__::func_399(Global_35, 1, 0, 0))) || Local_44.f_183 == 256)
	{
		TASK::TASK_COMBAT_PED(Local_849[iParam0 /*9*/].f_5, Global_35, 16793600, 16);
	}
	else if (!__LIB_0__::func_393(Global_35, iLocal_1098[4], 0, 1))
	{
		TASK::TASK_COMBAT_PED(Local_849[iParam0 /*9*/].f_5, Global_35, 16793600, 16);
	}
	else if (func_324(iParam0))
	{
		TASK::TASK_COMBAT_PED(Local_849[iParam0 /*9*/].f_5, Global_35, 16777216, 16);
	}
	else
	{
		TASK::TASK_COMBAT_PED(Local_849[iParam0 /*9*/].f_5, Global_35, 16793600, 16);
	}
	Local_601[iParam0 /*19*/].f_2 = 1;
}

void func_318(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_849[iParam0 /*9*/].f_5) && !ENTITY::IS_ENTITY_DEAD(Local_849[iParam0 /*9*/].f_5))
	{
		if (MAP::DOES_BLIP_EXIST(Local_849[iParam0 /*9*/].f_6))
		{
			MAP::_BLIP_REMOVE_MODIFIER(Local_849[iParam0 /*9*/].f_6, -662251075);
		}
		else
		{
			__LIB_9__::func_609(&(Local_849[iParam0 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
		}
	}
}

bool func_324(int iParam0)
{
	if (PED::_0x06087579E7AA85A9(Local_849[iParam0 /*9*/].f_5, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_849[iParam0 /*9*/].f_5, Global_35, 17))
	{
		return true;
	}
	if (__LIB_0__::func_48(Global_35, Local_849[iParam0 /*9*/].f_5, 0.5f, 1))
	{
		return true;
	}
	if (__LIB_0__::func_48(Global_35, Local_849[iParam0 /*9*/].f_5, 2f, 1) && !PED::GET_PED_STEALTH_MOVEMENT(Global_35))
	{
		return true;
	}
	if ((iParam0 == 0 && __LIB_0__::func_48(Global_35, Local_849[0 /*9*/].f_5, PED::_0x2BA9D7BF629F920C(Local_849[0 /*9*/].f_5), 1)) && __LIB_0__::func_393(Global_35, iLocal_1098[13], 0, 1))
	{
		return true;
	}
	if ((iParam0 == 1 && __LIB_0__::func_48(Global_35, Local_849[1 /*9*/].f_5, PED::_0x2BA9D7BF629F920C(Local_849[1 /*9*/].f_5), 1)) && __LIB_0__::func_393(Global_35, iLocal_1098[14], 0, 1))
	{
		return true;
	}
	if ((iParam0 == 2 && __LIB_0__::func_48(Global_35, Local_849[2 /*9*/].f_5, PED::_0x2BA9D7BF629F920C(Local_849[2 /*9*/].f_5), 1)) && __LIB_0__::func_393(Global_35, iLocal_1098[11], 0, 1))
	{
		return true;
	}
	if ((iParam0 == 3 && __LIB_0__::func_48(Global_35, Local_849[3 /*9*/].f_5, PED::_0x2BA9D7BF629F920C(Local_849[3 /*9*/].f_5), 1)) && __LIB_0__::func_393(Global_35, iLocal_1098[12], 0, 1))
	{
		return true;
	}
	return false;
}

int func_325()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (Local_601[iVar0 /*19*/].f_2)
		{
			iVar1++;
			func_318(iVar0);
		}
		iVar0++;
	}
	if (iVar1 >= (8 - 0) + 1)
	{
		__LIB_0__::func_7(&(Local_44.f_5), 131072);
		return 1;
	}
	return 0;
}

void func_326()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((iLocal_16 >= 2 && iLocal_16 <= 4) && !__LIB_3__::func_291(Global_35, 1))
	{
		iLocal_16 = 7;
		return;
	}
	switch (iLocal_16)
	{
		case 0:
			iLocal_976[0] = -1;
			iLocal_976[1] = -1;
			iLocal_976[2] = -1;
			iLocal_16 = 1;
			break;
		case 1:
			iVar0 = func_307(Global_36, 0);
			if (__LIB_0__::func_27(iLocal_973, 32) && __LIB_2__::func_303(Local_849[iVar0 /*9*/].f_5, 0, "INTERIOR_CHASE_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0))
			{
				iVar0 = 0;
				while (iVar0 <= 10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_849[iVar0 /*9*/].f_5) && !ENTITY::IS_ENTITY_DEAD(Local_849[iVar0 /*9*/].f_5))
					{
						__LIB_2__::func_487(Local_849[iVar0 /*9*/].f_5, iLocal_1098[6]);
						__LIB_2__::func_487(Local_849[iVar0 /*9*/].f_5, iLocal_1098[5]);
					}
					iVar0++;
				}
				iLocal_16 = 2;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_OCCLUDED(__LIB_3__::func_659(joaat("DOOR_TWI_SHACK01_INT_1"), 1, 0)))
			{
				__LIB_1__::func_948(joaat("DOOR_TWI_SHACK01_INT_1"), 0, 0f, 0, 1, 0f, 1, 0);
				iLocal_16 = 3;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				iVar0 = 0;
				while (iVar0 <= 10)
				{
					if (((((ENTITY::DOES_ENTITY_EXIST(Local_849[iVar0 /*9*/].f_5) && !ENTITY::IS_ENTITY_DEAD(Local_849[iVar0 /*9*/].f_5)) && !func_463(iVar0)) && iVar0 != iLocal_976[0]) && iVar0 != iLocal_976[1]) && iVar0 != iLocal_976[2])
					{
						iLocal_976[iVar1] = iVar0;
					}
					iVar0++;
				}
				iVar1++;
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(0, false, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -3958.514f, -2138.044f, -5.9996f, 3f, -1, 0.25f, 0, 3.3855f);
			TASK::TASK_AIM_AT_COORD(0, -3957.94f, -2129.794f, -4.0829f, -1, 1, 0);
			__LIB_1__::func_474(Local_849[iLocal_976[0] /*9*/].f_5, &iLocal_1114, 0.1f, 0.4f, 1, 1);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(0, false, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -3960.9f, -2138.789f, -6.1669f, 3f, -1, 0.25f, 0, 341.0457f);
			TASK::TASK_AIM_AT_COORD(0, -3957.94f, -2129.794f, -4.0829f, -1, 1, 0);
			__LIB_1__::func_474(Local_849[iLocal_976[1] /*9*/].f_5, &iLocal_1114, 0.1f, 0.4f, 1, 1);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(0, false, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -3962.908f, -2137.941f, -6.1791f, 3f, -1, 0.25f, 0, 328.4208f);
			TASK::TASK_AIM_AT_COORD(0, -3957.94f, -2129.794f, -4.0829f, -1, 1, 0);
			__LIB_1__::func_474(Local_849[iLocal_976[2] /*9*/].f_5, &iLocal_1114, 0.1f, 0.4f, 1, 1);
			BUILTIN::SETTIMERA(0);
			iLocal_16 = 4;
			break;
		case 4:
			if (BUILTIN::TIMERA() > 20000)
			{
				iLocal_16 = 7;
				return;
			}
			if (((__LIB_0__::func_266(Local_849[iLocal_976[0] /*9*/].f_5, -3958.514f, -2138.044f, -5.9996f, 4f, 1, 1) && __LIB_0__::func_266(Local_849[iLocal_976[1] /*9*/].f_5, -3960.9f, -2138.789f, -6.1669f, 4f, 1, 1)) && __LIB_0__::func_266(Local_849[iLocal_976[2] /*9*/].f_5, -3962.908f, -2137.941f, -6.1791f, 4f, 1, 1)) && __LIB_2__::func_303(Local_849[iLocal_976[0] /*9*/].f_5, 0, "SURROUNDED_IN_INTERIOR", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0))
			{
				__LIB_2__::func_279(Local_849[iLocal_976[0] /*9*/].f_5, 1);
				__LIB_2__::func_279(Local_849[iLocal_976[1] /*9*/].f_5, 1);
				__LIB_2__::func_279(Local_849[iLocal_976[2] /*9*/].f_5, 1);
				iLocal_16 = 5;
			}
			break;
		case 5:
			if (BUILTIN::TIMERA() > 20000)
			{
				iLocal_16 = 7;
				return;
			}
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_849[iLocal_976[1] /*9*/].f_5, 17) || MISC::ABSF(__LIB_4__::func_195(joaat("DOOR_TWI_SHACK01_INT_1"))) > 0.25f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
				TASK::TASK_SHOOT_AT_COORD(0, Global_36, 5000, joaat("FIRING_PATTERN_FULL_AUTO"), 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_849[iLocal_976[0] /*9*/].f_5, &iLocal_1114, 0.1f, 0.3f, 1, 1);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
				TASK::TASK_SHOOT_AT_COORD(0, Global_36, 5000, joaat("FIRING_PATTERN_FULL_AUTO"), 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_849[iLocal_976[1] /*9*/].f_5, &iLocal_1114, 0.1f, 0.3f, 1, 1);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
				TASK::TASK_SHOOT_AT_COORD(0, Global_36, 5000, joaat("FIRING_PATTERN_FULL_AUTO"), 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_849[iLocal_976[2] /*9*/].f_5, &iLocal_1114, 0.1f, 0.3f, 1, 1);
				BUILTIN::SETTIMERA(0);
				iLocal_16 = 6;
			}
			break;
		case 6:
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::PLAYER_ID()) < iLocal_1153)
			{
				BUILTIN::SETTIMERA((BUILTIN::TIMERA() - BUILTIN::ROUND((MISC::GET_FRAME_TIME() * 800f))));
			}
			iLocal_1153 = PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::PLAYER_ID());
			if (ENTITY::IS_ENTITY_DEAD(Local_849[iLocal_976[0] /*9*/].f_5))
			{
				iVar2++;
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_849[iLocal_976[1] /*9*/].f_5))
			{
				iVar2++;
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_849[iLocal_976[2] /*9*/].f_5))
			{
				iVar2++;
			}
			if (iVar2 >= 3 || BUILTIN::TIMERA() >= 5000)
			{
				iLocal_16 = 7;
				return;
			}
			if (iVar2 >= 2 && BUILTIN::TIMERA() < 5000)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_849[iLocal_976[0] /*9*/].f_5))
				{
					CAM::_0x986F7A51EE3E1F92(Local_849[iLocal_976[0] /*9*/].f_5, 1);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(Local_849[iLocal_976[1] /*9*/].f_5))
				{
					CAM::_0x986F7A51EE3E1F92(Local_849[iLocal_976[1] /*9*/].f_5, 1);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(Local_849[iLocal_976[2] /*9*/].f_5))
				{
					CAM::_0x986F7A51EE3E1F92(Local_849[iLocal_976[2] /*9*/].f_5, 1);
				}
			}
			break;
		case 7:
			CAM::_0x5B637D6F3B67716A(Local_849[iLocal_976[0] /*9*/].f_5);
			CAM::_0x5B637D6F3B67716A(Local_849[iLocal_976[1] /*9*/].f_5);
			CAM::_0x5B637D6F3B67716A(Local_849[iLocal_976[2] /*9*/].f_5);
			__LIB_2__::func_279(Local_849[iLocal_976[0] /*9*/].f_5, 0);
			__LIB_2__::func_279(Local_849[iLocal_976[1] /*9*/].f_5, 0);
			__LIB_2__::func_279(Local_849[iLocal_976[2] /*9*/].f_5, 0);
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_849[iVar0 /*9*/].f_5) && !ENTITY::IS_ENTITY_DEAD(Local_849[iVar0 /*9*/].f_5))
				{
					__LIB_4__::func_367(Local_849[iVar0 /*9*/].f_5, iLocal_1098[6]);
					__LIB_4__::func_367(Local_849[iVar0 /*9*/].f_5, iLocal_1098[5]);
				}
				iVar0++;
			}
			if (__LIB_0__::func_393(Global_35, iLocal_1098[6], 0, 1))
			{
				func_299(iLocal_976[0]);
				func_299(iLocal_976[1]);
				func_299(iLocal_976[2]);
				TASK::TASK_COMBAT_PED(Local_849[iLocal_976[0] /*9*/].f_5, Global_35, 0, 0);
				TASK::TASK_COMBAT_PED(Local_849[iLocal_976[1] /*9*/].f_5, Global_35, 0, 0);
				TASK::TASK_COMBAT_PED(Local_849[iLocal_976[2] /*9*/].f_5, Global_35, 0, 0);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_849[iLocal_976[0] /*9*/].f_5))
				{
					TASK::TASK_COMBAT_PED(Local_849[iLocal_976[0] /*9*/].f_5, Global_35, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_849[iLocal_976[1] /*9*/].f_5))
				{
					TASK::TASK_COMBAT_PED(Local_849[iLocal_976[1] /*9*/].f_5, Global_35, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_849[iLocal_976[2] /*9*/].f_5))
				{
					TASK::TASK_COMBAT_PED(Local_849[iLocal_976[2] /*9*/].f_5, Global_35, 0, 0);
				}
			}
			iLocal_16 = 8;
			break;
		case 8:
			break;
	}
}

void func_327()
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iLocal_17)
	{
		case 0:
			iLocal_17 = 1;
			break;
		case 1:
			if (__LIB_0__::func_393(Global_35, iLocal_1098[1], 0, 1) || __LIB_0__::func_393(Global_35, iLocal_1098[4], 0, 1))
			{
				if (Local_44.f_198 < 8)
				{
					iLocal_17 = 2;
				}
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_27))
			{
				iLocal_27 = __LIB_1__::func_545(joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"), -3869.636f, -2129.337f, 5.5928f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_28))
			{
				iLocal_28 = __LIB_1__::func_545(joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"), -3871.748f, -2133.177f, 5.7012f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return;
			}
			Local_849[9 /*9*/].f_1 = { -3869.636f, -2129.337f, 5.5928f };
			Local_849[10 /*9*/].f_1 = { -3871.748f, -2133.177f, 5.7012f };
			if (__LIB_9__::func_663(&Local_44, &Local_849, joaat("REL_CRIMINALS"), 9, 10))
			{
				Local_44.f_197 = 0;
				__LIB_9__::func_619(&Local_44, &Local_849, 9, 10);
				iLocal_17 = 3;
			}
			break;
		case 3:
			if ((__LIB_1__::func_373(-3886.243f, -2122.982f, 6.3099f, 0.1f, 0.9f, 0, 1061158912 /* Float: 0.75f */) || __LIB_0__::func_48(Global_35, iLocal_27, 25f, 1)) || Local_44.f_198 < 3)
			{
				__LIB_9__::func_609(&(Local_849[9 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
				__LIB_9__::func_609(&(Local_849[10 /*9*/]), joaat("BLIP_STYLE_ENEMY"), 0);
				if (!__LIB_0__::func_394(Local_849[9 /*9*/].f_5, iLocal_27, 0) || !__LIB_0__::func_394(Local_849[10 /*9*/].f_5, iLocal_28, 0))
				{
					__LIB_1__::func_571(Local_849[9 /*9*/].f_5, iLocal_27, 0, -1, 1);
					__LIB_1__::func_571(Local_849[10 /*9*/].f_5, iLocal_28, 0, -1, 1);
					return;
				}
				iVar0 = 9;
				while (iVar0 <= 10)
				{
					PED::SET_PED_COMBAT_RANGE(Local_849[iVar0 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 49, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 57, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 17, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 47, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 8, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 16, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 29, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 42, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 67, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 46, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 115, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_849[iVar0 /*9*/].f_5, 98, true);
					PED::_0x8B1E8E35A6E814EA(Local_849[iVar0 /*9*/].f_5, joaat("TRANSPORTDRIVEBY"), -1082130432 /* Float: -1f */);
					__LIB_1__::func_766(Local_849[iVar0 /*9*/].f_5, joaat("WEAPON_REVOLVER_SCHOFIELD"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_849[iVar0 /*9*/].f_5, joaat("WEAPON_REVOLVER_SCHOFIELD"), false, 0, true, false);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
					if (iVar0 == 9)
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "hideout_tr_horseCharge_Left", 0, 19496, -1, 0, 1, -1);
					}
					else
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "hideout_tr_horseCharge", 0, 19496, -1, 0, 1, -1);
					}
					__LIB_1__::func_474(Local_849[iVar0 /*9*/].f_5, &iLocal_1114, 0f, 0f, 1, 1);
					iVar0++;
				}
				iLocal_17 = 5;
			}
			break;
		case 5:
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("hideout_tr_horseCharge_Left", ENTITY::GET_ENTITY_COORDS(Local_849[9 /*9*/].f_5, true, false), &iVar1);
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("hideout_tr_horseCharge", ENTITY::GET_ENTITY_COORDS(Local_849[10 /*9*/].f_5, true, false), &iVar2);
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_849[9 /*9*/].f_5, 0) && iVar1 > 95)
			{
				func_469(iLocal_27);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
				TASK::TASK_DISMOUNT_ANIMAL(0, 268435520, 0, 0, 0, Global_35);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_849[9 /*9*/].f_5, &iLocal_1114, 0, 0, 1, 1);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_849[10 /*9*/].f_5, 0) && iVar2 > 75)
			{
				func_469(iLocal_28);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1114);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1114);
				TASK::TASK_DISMOUNT_ANIMAL(0, 268435520, 0, 0, 0, Global_35);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				__LIB_1__::func_474(Local_849[10 /*9*/].f_5, &iLocal_1114, 0, 0, 1, 1);
			}
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_849[9 /*9*/].f_5, 0) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_849[10 /*9*/].f_5, 0))
			{
				iLocal_17 = 6;
			}
			break;
		case 6:
			break;
	}
}

void func_328()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (Local_44.f_198 <= 3)
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			if (!PED::IS_PED_INJURED(Local_849[iVar0 /*9*/].f_5) && !__LIB_0__::func_51(&(Local_849[iVar0 /*9*/].f_7), 4096))
			{
				func_299(iVar0);
				__LIB_9__::func_410(Local_849[iVar0 /*9*/].f_5, 0, 0);
				__LIB_9__::func_588(&(Local_849[iVar0 /*9*/].f_7), 4096, 0);
				iVar1 = 0;
				while (iVar1 <= (iLocal_22 - 1))
				{
					if (PED::IS_PED_INJURED(Local_849[iLocal_23[iVar1] /*9*/].f_5) || !ENTITY::DOES_ENTITY_EXIST(Local_849[iLocal_23[iVar1] /*9*/].f_5))
					{
						iLocal_23[iVar1] = iVar0;
						iLocal_21++;
					}
					else
					{
						iVar1++;
					}
				}
			}
			if (iLocal_21 >= 3)
			{
			}
			else
			{
				iVar0++;
			}
		}
	}
	else if (iLocal_21 == 0)
	{
		if (!__LIB_0__::func_393(Global_35, iLocal_1098[0], 0, 1))
		{
			iLocal_22++;
			if (iLocal_22 > 3)
			{
				iLocal_22 = 3;
			}
			if (PED::IS_PED_INJURED(Local_849[0 /*9*/].f_5) && PED::IS_PED_INJURED(Local_849[1 /*9*/].f_5))
			{
				iVar2 = 0;
				while (iVar2 <= 8)
				{
					if (!PED::IS_PED_INJURED(Local_849[iVar2 /*9*/].f_5))
					{
						func_299(iVar2);
						__LIB_9__::func_410(Local_849[iVar2 /*9*/].f_5, 0, 0);
						iVar3 = 0;
						while (iVar3 <= (iLocal_22 - 1))
						{
							if (PED::IS_PED_INJURED(Local_849[iLocal_23[iVar3] /*9*/].f_5) || !ENTITY::DOES_ENTITY_EXIST(Local_849[iLocal_23[iVar3] /*9*/].f_5))
							{
								iLocal_23[iVar3] = iVar2;
							}
							else
							{
								iVar3++;
							}
						}
						iLocal_21++;
					}
					if (iLocal_21 >= iLocal_22)
					{
					}
					else
					{
						iVar2++;
					}
				}
			}
			else
			{
				func_299(0);
				func_299(1);
				__LIB_9__::func_410(Local_849[0 /*9*/].f_5, 0, 0);
				__LIB_9__::func_410(Local_849[1 /*9*/].f_5, 0, 0);
				iLocal_23[0] = 0;
				iLocal_23[1] = 1;
				iLocal_21 += 2;
			}
		}
	}
	else
	{
		iVar4 = iLocal_22;
		iVar5 = 0;
		while (iVar5 <= (iLocal_22 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_849[iLocal_23[iVar5] /*9*/].f_5))
			{
				if (PED::IS_PED_INJURED(Local_849[iLocal_23[iVar5] /*9*/].f_5))
				{
					iVar4 = (iVar4 - 1);
				}
			}
			iVar5++;
		}
		if (iVar4 == 0 && Local_44.f_198 > (Local_44.f_199 - 3))
		{
			iLocal_21 = 0;
		}
	}
}

void func_329()
{
	if ((!__LIB_0__::func_27(iLocal_973, 16) && __LIB_0__::func_393(Global_35, iLocal_1098[5], 0, 1)) && func_299(func_307(Global_36, 0)))
	{
		__LIB_1__::func_683(&iLocal_973, 16);
	}
	if (!__LIB_0__::func_27(iLocal_973, 32) && __LIB_0__::func_393(Global_35, iLocal_1098[6], 0, 1))
	{
		__LIB_1__::func_683(&iLocal_973, 32);
	}
	if ((!__LIB_0__::func_27(iLocal_973, 8) && __LIB_0__::func_393(Global_35, iLocal_1098[4], 0, 1)) && func_299(func_307(Global_36, 0)))
	{
		__LIB_1__::func_683(&iLocal_973, 8);
	}
}

void func_335(int iParam0, bool bParam1, bool bParam2)
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
	func_476(iVar0, 1, bParam1, 0, 1);
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

int func_355(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_493(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_406(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	if (iParam0 > 3)
	{
		return -1;
	}
	iVar0 = 1;
	iVar1 = func_536(&(Local_849[iParam0 /*9*/].f_5), &(Local_268[iParam0 /*83*/]), fParam1, &(Local_268[iParam0 /*83*/].f_21), &iVar0, 0f, 2, 0, 0, 64, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iVar1 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_407(int iParam0, int iParam1)
{
	__LIB_1__::func_148(&(Local_268[iParam0 /*83*/].f_77));
	Local_268[iParam0 /*83*/].f_76 = iParam1;
}

void func_409(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2 && __LIB_2__::func_466(&(Local_268[iParam0 /*83*/].f_21[iParam1 /*17*/]), 0, 0))
	{
		__LIB_2__::func_411(&(Local_268[iParam0 /*83*/].f_21[iParam1 /*17*/]), bParam2, 0);
	}
	else if (bParam2 && !__LIB_2__::func_466(&(Local_268[iParam0 /*83*/].f_21[iParam1 /*17*/]), 0, 0))
	{
		__LIB_2__::func_411(&(Local_268[iParam0 /*83*/].f_21[iParam1 /*17*/]), bParam2, 0);
	}
}

void func_411(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Local_849[iParam0 /*9*/].f_5;
	if (bParam1)
	{
		if (__LIB_0__::func_491(iVar0, joaat("SCRIPT_TASK_CONFRONT")))
		{
			if (__LIB_0__::func_266(iVar0, Local_849[iParam0 /*9*/].f_1, 10f, 1, 1) && __LIB_0__::func_48(iVar0, Global_35, 8f, 1))
			{
				return;
			}
		}
		if (__LIB_0__::func_491(iVar0, -1098463898) && !PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			return;
		}
		if (__LIB_0__::func_48(Global_35, iVar0, 4f, 1))
		{
			if (!__LIB_0__::func_491(iVar0, joaat("SCRIPT_TASK_CONFRONT")))
			{
				if (!__LIB_0__::func_75(&(Local_268[iParam0 /*83*/].f_80)) || __LIB_0__::func_264(&(Local_268[iParam0 /*83*/].f_80)) > 15f)
				{
					iVar1 = __LIB_0__::func_399(iVar0, 1, 0, 0);
					if (iVar1 != joaat("WEAPON_UNARMED"))
					{
						if (!__LIB_0__::func_491(iVar0, 716706914))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
							TASK::TASK_SWAP_WEAPON(iVar0, 1, 0, 0, 0);
						}
					}
					else
					{
						__LIB_1__::func_148(&(Local_268[iParam0 /*83*/].f_80));
						TASK::TASK_CONFRONT(iVar0, Global_35, 2);
					}
					return;
				}
			}
		}
		else if (!__LIB_0__::func_266(iVar0, Local_849[iParam0 /*9*/].f_1, 10f, 1, 1) || !__LIB_0__::func_48(iVar0, Global_35, 8f, 1))
		{
			if ((!__LIB_0__::func_491(iVar0, -1098463898) && !__LIB_0__::func_491(iVar0, -1073489615)) && !__LIB_0__::func_491(iVar0, 716706914))
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, func_414(iParam0), Local_849[iParam0 /*9*/].f_1, Local_849[iParam0 /*9*/].f_4, -1, true, false, 0, -1f, false);
				return;
			}
		}
	}
	if (!__LIB_0__::func_491(iVar0, -1073489615))
	{
		iVar2 = __LIB_0__::func_399(iVar0, 1, 0, 0);
		if (!WEAPON::_0x705BE297EEBDB95D(iVar2))
		{
			if (!__LIB_0__::func_491(iVar0, 716706914))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar0, WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(iVar0, 1, 0, 0, 0);
			}
		}
		else
		{
			TASK::TASK_AIM_AT_ENTITY(iVar0, Global_35, -1, 0, 0);
		}
	}
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("WORLD_HUMAN_LEAN_BACK_WALL");
		case 1:
			return joaat("WORLD_HUMAN_GUARD_SCOUT");
		case 3:
			return joaat("WORLD_HUMAN_GUARD_SCOUT");
		default:
			break;
	}
	return 0;
}

void func_416(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_849[iParam0 /*9*/].f_5))
	{
		__LIB_2__::func_504(Local_849[iParam0 /*9*/].f_5, iParam1);
	}
}

char* func_417(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	*uParam1 = 0;
	if (iParam0 == 3)
	{
		if (iParam2 != -1)
		{
			return "HEADS_UP_BAD_MEMORY";
		}
	}
	if (iParam0 == 15)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		switch (iVar0)
		{
			case 0:
				return "HIDEOUT_TL_V1_PLYFINAL";
			case 1:
				return "HIDEOUT_TL_V2_PLYFINAL_FIRST";
			case 2:
				return "HIDEOUT_TL_V3_PLYFINAL_FIRST";
			default:
				break;
		}
	}
	else if (iParam0 == 16)
	{
		switch (iLocal_971)
		{
			case 1:
				return "HIDEOUT_TL_V2_PLYFINAL";
			case 2:
				return "HIDEOUT_TL_V3_PLYFINAL";
			default:
				break;
		}
	}
	switch (iLocal_971)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam0)
			{
				case 4:
					return "CALLOUT_CAMP_WAKE_UP";
				case 6:
					return "COMBAT_FLEE";
				case 5:
					if (iParam2 == 3)
					{
						return "HIDEOUT_TL_V1_SPOT_A";
					}
					else if (__LIB_1__::func_985())
					{
						return "HIDEOUT_TL_V1_SPOT_A";
					}
					else
					{
						return "HIDEOUT_TL_V2_SPOT_A";
					}
					break;
				case 0:
					switch (iParam2)
					{
						case 0:
							return "HEADS_UP_NEUTRAL";
						case 1:
							return "GET_OUT";
						case 2:
							return "HEADS_UP_HIDEOUT";
						case 3:
							return "HEADS_UP_HIDEOUT";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 2:
							return "LEAVE_NOW";
						case 3:
							return "WARNED_ALREADY";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "LEAVE_NOW";
						case 1:
							return "FINAL_WARNING";
						case 2:
							return "GANG_INTERACT_THREATEN";
						case 3:
							*uParam1 = 1;
							return "FINAL_WARNING";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							return "HIDEOUT_TW_PL_GRT_G1";
						case 1:
							return "HIDEOUT_TW_PL_GRT_G2";
						case 2:
							return "HIDEOUT_TW_PL_GRT_LO1";
						case 3:
							return "HIDEOUT_TW_PL_GRT_LO2";
						default:
							break;
					}
					break;
				case 8:
					switch (iParam2)
					{
						case 0:
							return "HIDEOUT_TW_PL_ANT_01_G1";
						case 1:
							return "HIDEOUT_TW_PL_ANT_01_G2";
						case 2:
							return "HIDEOUT_TW_PL_ANT_01_LO1";
						case 3:
							return "HIDEOUT_TW_PL_ANT_01_LO2";
						default:
							break;
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 0:
							return "HIDEOUT_TW_PL_DEF_G1";
						case 1:
							return "HIDEOUT_TW_PL_DEF_G2";
						case 2:
							return "HIDEOUT_TW_PL_DEF_01_LO1";
						case 3:
							return "HIDEOUT_TW_PL_DEF_01_LO2";
						default:
							break;
					}
					break;
				case 10:
					switch (iParam2)
					{
						case 0:
							return "HIDEOUT_TW_PL_ANT_02_G1";
						case 1:
							return "HIDEOUT_TW_PL_ANT_02_G2";
						case 2:
							return "HIDEOUT_TW_PL_ANT_02_LO1";
						case 3:
							return "HIDEOUT_TW_PL_ANT_02_LO2";
						default:
							break;
					}
					break;
				case 11:
					switch (iParam2)
					{
						case 0:
							return "GREET_GENERAL_STRANGER";
						case 1:
							return "GREET_GENERAL_STRANGER";
						case 2:
							return "GENERIC_SHOCKED_MED";
						case 3:
							return "GET_OUT";
						default:
							break;
					}
					break;
				case 12:
					switch (iParam2)
					{
						case 0:
							return "INSULT_RESPONSE";
						case 1:
							return "WHATS_YOUR_PROBLEM";
						case 2:
							return "GENERIC_INSULT_HIGH_NEUTRAL";
						case 3:
							return "INSULT_RESPONSE";
						default:
							break;
					}
					break;
				case 13:
					switch (iParam2)
					{
						case 0:
							*uParam1 = 2;
							return "DEFUSE_RESPONSE";
						case 1:
							*uParam1 = 1;
							return "DEFUSE_RESPONSE";
						case 2:
							return "GANG_INTERACT_CHAT_WARNING_WILDERNESS";
						case 3:
							return "DEFUSE_RESPONSE";
						default:
							break;
					}
					break;
				case 14:
					switch (iParam2)
					{
						case 0:
							return "GENERIC_INSULT_HIGH_MALE";
						case 1:
							return "OPENS_FIRE";
						case 2:
							return "OPENS_FIRE";
						case 3:
							return "OPENS_FIRE";
						default:
							break;
					}
					break;
			}
			break;
	}
	return "";
}

float func_454()
{
	float fVar0;
	int iVar1;
	float fVar2;
	if (func_587())
	{
		return -1f;
	}
	fVar0 = 0f;
	if (func_455() > -1f)
	{
		fVar0 = func_455();
	}
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		fVar2 = func_456(iVar1);
		if (fVar2 < fVar0)
		{
			fVar0 = fVar2;
		}
		iVar1++;
	}
	return fVar0;
}

float func_455()
{
	if (!__LIB_0__::func_75(&uLocal_38))
	{
		return -1f;
	}
	return __LIB_0__::func_265(&uLocal_38);
}

float func_456(int iParam0)
{
	if (!__LIB_0__::func_75(&(Local_601[iParam0 /*19*/].f_8)))
	{
		return -1f;
	}
	return __LIB_0__::func_265(&(Local_601[iParam0 /*19*/].f_8));
}

bool func_463(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_849[iParam0 /*9*/].f_5) && !ENTITY::IS_ENTITY_DEAD(Local_849[iParam0 /*9*/].f_5))
	{
		if (Local_601[iParam0 /*19*/].f_3 == 26 || Local_601[iParam0 /*19*/].f_3 == 27)
		{
			return true;
		}
	}
	return false;
}

int func_469(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_GET_RIDER_OF_MOUNT(iParam0, false) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (__LIB_0__::func_163(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_476(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_635(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_635(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_635(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_635(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_635(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_635(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_635(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_635(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_635(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_635(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_635(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_635(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_635(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_637();
						func_638(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_635(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_476(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						__LIB_1__::func_810(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
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
							func_476(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_476(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_635(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_635(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_672();
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
							func_635(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

bool func_493(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;
	func_713(iParam3, &vVar0, &Var3, &uVar6);
	if (func_714(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

int func_536(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_753(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_2__::func_588(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!__LIB_0__::func_474(558))
				{
					__LIB_1__::func_240(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_587()
{
	int iVar0;
	if (func_455() == -1f)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (func_456(iVar0) == -1f)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_635(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_635(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_9__::func_717(28);
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
			__LIB_1__::func_833(iParam0);
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
			__LIB_1__::func_824(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_635(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_635(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_635(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_635(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_635(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_635(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_816(iParam0);
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
				func_635(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_9__::func_717(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_635(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_635(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_9__::func_725(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_18__::func_207(iParam0);
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
				func_635(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_637()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_898();
	func_899();
	func_900();
	func_901();
	func_902();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_638(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_905(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		__LIB_1__::func_798(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(__LIB_1__::func_710(iParam0), 1);
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
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
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

void func_672()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_933(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_713(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			Jump @2717; //curOff = 1026
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 1071
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			Jump @2717; //curOff = 1120
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			Jump @2717; //curOff = 1169
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 1214
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			Jump @2717; //curOff = 1263
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			Jump @2717; //curOff = 1312
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 1357
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 1402
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 1447
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			Jump @2717; //curOff = 1496
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			Jump @2717; //curOff = 1545
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 1590
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			Jump @2717; //curOff = 1639
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			Jump @2717; //curOff = 1688
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 1733
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 1778
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			Jump @2717; //curOff = 1827
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			Jump @2717; //curOff = 1876
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			Jump @2717; //curOff = 1925
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 1970
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			Jump @2717; //curOff = 2019
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 2064
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			Jump @2717; //curOff = 2113
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 2158
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			Jump @2717; //curOff = 2207
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 2252
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 2297
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 2342
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 2387
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 2432
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			Jump @2717; //curOff = 2481
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			Jump @2717; //curOff = 2530
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			Jump @2717; //curOff = 2579
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 2624
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			Jump @2717; //curOff = 2669
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
		}
bool func_714(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;
	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_753(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_4__::func_231(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_3__::func_374(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_753(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_2__::func_344(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							__LIB_1__::func_488(*uParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*uParam0, 0, 1);
					}
				}
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_375(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									__LIB_1__::func_490(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					__LIB_2__::func_361(iParam1, uParam3, fVar8);
					if (__LIB_2__::func_589(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_377(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_375(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
					}
					__LIB_1__::func_491(iParam1, 1);
				}
				__LIB_2__::func_361(iParam1, uParam3, fVar8);
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			__LIB_2__::func_593(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_898()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1134(0);
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
	func_1134(1);
}

void func_899()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_635(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_900()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1137(0);
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
	func_1137(1);
}

void func_901()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1137(0);
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
	func_1137(1);
}

void func_902()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_635(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_635(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_905(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_905(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_905(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_905(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_933(var uParam0, var uParam1, var uParam2, var uParam3)
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
		*uParam2 = (*uParam2 + iVar2);
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
	iVar11 = (func_1167(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_635(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

void func_1134(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_635(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1313(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_638(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_905(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1319(Var0);
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

void func_1137(bool bParam0)
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
		func_635(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_635(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_905(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_905(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_905(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_905(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_905(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_905(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_905(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_905(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_905(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_905(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_905(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1167(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1167(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1167(iVar63, -915411861, 1, 0, 0));
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

void func_1313(int iParam0)
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
	func_905(iParam0, 1, 1, -142743235, 1);
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
		func_905(uVar18[iVar36], 1, 1, -142743235, 1);
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
		iVar0[iVar36] = __LIB_0__::func_161(__LIB_1__::func_710(uVar18[iVar36]), 1);
		iVar36++;
	}
	__LIB_0__::func_608(&(Global_1946804.f_1616));
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
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
					__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
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
					__LIB_1__::func_633(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
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
					__LIB_1__::func_811(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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
	__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

void func_1319(struct<6> Param0)
{
	if (!func_1422(Param0.f_4, 1))
	{
	}
	if (!func_1422(Param0, 1))
	{
	}
	if (!func_1422(Param0.f_2, 1))
	{
	}
	if (!func_1422(Param0.f_5, 1))
	{
	}
	if (!func_1422(Param0.f_3, 1))
	{
	}
	if (!func_1422(Param0.f_1, 1))
	{
	}
}

bool func_1422(int iParam0, int iParam1)
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
				if (func_1422(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1422(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1422(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1422(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

