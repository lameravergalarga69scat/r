bool func_0(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
		__LIB_0__::func_947(uParam0, __LIB_0__::func_461(iVar0), 1);
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
							__LIB_9__::func_478(uParam0, uParam0->f_1[Global_1946804.f_2612[iVar1] /*3*/], Global_1946804.f_2612[iVar1], 0, 0);
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

bool func_1(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { __LIB_1__::func_615(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(__LIB_0__::func_709(Var0.f_4), 1);
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
		__LIB_0__::func_968(__LIB_0__::func_158(iParam2, 1));
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
	__LIB_9__::func_478(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = __LIB_0__::func_969(iParam0, iParam2, iParam1, __LIB_0__::func_2() != -1);
	if (bParam4)
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 0);
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
				__LIB_0__::func_550(__LIB_0__::func_158(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_2(int iParam0, int iParam1)
{
	*iParam0 = { 0f, 0f, 0f };
	iParam0->f_4 = 21030;
	iParam0->f_8 = 4;
	iParam0->f_19 = 4;
	iParam0->f_21 = 4;
	iParam0->f_17 = 4;
	iParam0->f_18 = 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		iParam0->f_3 = iParam1;
	}
}

void func_3(int* iParam0)
{
	if (_NAMESPACE29::_0x6098139150DCC745(*iParam0, 6))
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(*iParam0, 6, 0);
	}
}

void func_4(var uParam0)
{
	__LIB_12__::func_656(uParam0, 10f);
	__LIB_12__::func_657(uParam0, 10f);
}

bool func_5(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*uParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
	{
		return false;
	}
	else if (__LIB_13__::func_45(*uParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_0(uParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_586(uParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

bool func_6(var uParam0)
{
	vector3 vVar0;
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 == 0)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		STREAMING::REQUEST_MODEL(Global_1347702[uParam0->f_174 /*49*/].f_28, false);
		if (!STREAMING::HAS_MODEL_LOADED(Global_1347702[uParam0->f_174 /*49*/].f_28))
		{
			return false;
		}
		vVar0 = { __LIB_1__::func_440(uParam0->f_174) };
		__LIB_3__::func_618(vVar0, 2.5f, 1, 0, 0, 0, 0);
		PERSISTENCE::_0x9D16896F0DBE78A2(vVar0, 2.5f);
		if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 524288))
		{
			Global_1347702[uParam0->f_174 /*49*/].f_43 = __LIB_12__::func_885(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			Global_1347702[uParam0->f_174 /*49*/].f_43 = __LIB_12__::func_885(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43) && !PED::IS_PED_INJURED(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1347702[uParam0->f_174 /*49*/].f_43))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1347702[uParam0->f_174 /*49*/].f_43, true, true);
		}
		return true;
	}
	return false;
}

void func_7(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	__LIB_13__::func_357(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (__LIB_12__::func_644(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
		{
			__LIB_0__::func_869(0);
		}
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (__LIB_12__::func_644(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			__LIB_5__::func_102();
			if (__LIB_12__::func_644(uParam0) == 1)
			{
				__LIB_4__::func_683(uParam0->f_174, 1);
			}
		}
		if (__LIB_0__::func_1(uParam0->f_172, 67108864))
		{
			__LIB_12__::func_868(1);
			__LIB_0__::func_8(&(uParam0->f_172), 67108864);
		}
		__LIB_1__::func_723(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			__LIB_1__::func_733(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
	}
	if (__LIB_12__::func_644(uParam0) == 3)
	{
		__LIB_12__::func_930(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_11__::func_382(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_12__::func_739(uParam0);
	__LIB_1__::func_564(0);
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

bool func_8(var uParam0, char* sParam1, char[4] cParam2)
{
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0, sParam1) || !ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0, sParam1);
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0, sParam1))
	{
		return false;
	}
	return true;
}

bool func_9(int iParam0)
{
	return ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_DEAD_OR_DYING(iParam0, true)) && !PED::_IS_PED_HOGTIED(iParam0));
}

bool func_10(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	if (!bParam1)
	{
		iVar0 = 1;
	}
	return (__LIB_1__::func_372(iParam0, iVar0) == joaat("WEAPON_UNARMED") || __LIB_1__::func_372(iParam0, iVar0) == 0);
}

bool func_11(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_12(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return __LIB_13__::func_521(uParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

int func_13(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		__LIB_5__::func_686(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam2 = 2;
								__LIB_2__::func_831(iParam0, uParam1, *uParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 4;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (__LIB_6__::func_913(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 131072;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_14(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 12;
	iVar2 = __LIB_0__::func_357(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (__LIB_0__::func_157(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	if (__LIB_0__::func_451(-1586649372) && __LIB_0__::func_157(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			__LIB_1__::func_184(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 525
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 656
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1416; //curOff = 691
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 786
				__LIB_1__::func_184(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1416; //curOff = 807
				if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((__LIB_0__::func_218(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				Jump @1416; //curOff = 1131
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 1229
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (__LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			switch (__LIB_0__::func_357(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]) || __LIB_0__::func_192(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_15(int iParam0)
{
	if (!__LIB_0__::func_296(0, 0, 1))
	{
		return true;
	}
	if ((((((__LIB_2__::func_774(18) || __LIB_2__::func_774(20)) || __LIB_2__::func_774(21)) || __LIB_2__::func_774(17)) || __LIB_11__::func_781(3)) || __LIB_1__::func_200(134)) || __LIB_1__::func_200(5))
	{
		return false;
	}
	if (iParam0 == 95)
	{
		if (__LIB_2__::func_774(20))
		{
			return false;
		}
	}
	return true;
}

int func_16(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!__LIB_13__::func_392(&(Global_1347702[uParam0->f_174 /*49*/].f_43), &(uParam0->f_178), &iVar0, 1, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_17(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		__LIB_2__::func_145(*uParam0, 0);
	}
}

void func_18(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_13__::func_887(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

bool func_19(var uParam0, var uParam1, vector3 vParam2, float fParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (__LIB_13__::func_476(uParam0, vParam2, fParam5, iParam6, fParam7, bParam8, bParam9, bParam10))
	{
		*uParam1 = uParam0->f_2572;
		return true;
	}
	return false;
}

void func_20()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
}

bool func_21()
{
	int iVar0;
	int iVar1;
	int iVar11;
	if (SCRIPTS::GET_EVENT_EXISTS(0, joaat("EVENT_PLAYER_PROMPT_TRIGGERED")))
	{
		iVar11 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
		iVar0 = 0;
		while (iVar0 < iVar11)
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0) == joaat("EVENT_PLAYER_PROMPT_TRIGGERED"))
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &iVar1, 10))
				{
					if (iVar1 == 7)
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_22(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_1584;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_371[iParam1 /*18*/];
		fVar3 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7;
		fVar4 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7.f_1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (__LIB_4__::func_576(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!__LIB_12__::func_728(uParam0, iVar2))
				{
					uParam0->f_1581 = iParam1;
				}
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355))) || (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 128) && uParam0->f_1795))
			{
				if (uParam0->f_1795)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 0.1f, -1, false);
					if (!__LIB_12__::func_655(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1797, 24, 1000);
					__LIB_12__::func_774(uParam0, 8);
				}
				else
				{
					__LIB_12__::func_693(uParam0, 131072);
					__LIB_12__::func_774(uParam0, 11);
				}
			}
			else if (uParam0->f_1793)
			{
				__LIB_12__::func_774(uParam0, 5);
			}
			else
			{
				__LIB_12__::func_879(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1765)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_0__::func_264(&(uParam0->f_1765)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_12__::func_879(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1765)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_12__::func_879(uParam0);
			}
			if ((!uParam0->f_1793 && !uParam0->f_1795) || bVar0)
			{
				uParam0->f_1582 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_12__::func_879(uParam0);
				}
				else
				{
					__LIB_13__::func_5(uParam0, iParam1, bParam2);
					__LIB_1__::func_148(&(uParam0->f_1765));
					__LIB_12__::func_774(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1765)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				__LIB_12__::func_774(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1799)))
				{
					__LIB_11__::func_866(uParam0->f_1799, 0);
				}
			}
			__LIB_1__::func_148(&(uParam0->f_1765));
			__LIB_12__::func_774(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1765)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_12__::func_774(uParam0, 10);
				}
				else
				{
					__LIB_12__::func_774(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1765)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_12__::func_774(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_1765)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1582 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1797, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_12__::func_774(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_264(&(uParam0->f_1765)) >= 0.75f)
			{
				if (!__LIB_12__::func_655(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_774(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_23(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (__LIB_4__::func_637(&(uParam0->f_1529[iParam1 /*15*/])))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!__LIB_0__::func_1(uParam0->f_1529[iParam1 /*15*/].f_10, 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1799)))
				{
					__LIB_11__::func_866(uParam0->f_1799, 0);
					__LIB_4__::func_666(&(uParam0->f_1529[iParam1 /*15*/]), 2);
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_1(uParam0->f_1529[iParam1 /*15*/].f_10, 256))
			{
				if (!__LIB_4__::func_795())
				{
					__LIB_4__::func_666(&(uParam0->f_1529[iParam1 /*15*/]), 0);
				}
			}
			else
			{
				__LIB_4__::func_666(&(uParam0->f_1529[iParam1 /*15*/]), 0);
			}
			break;
		case 2:
			if (!__LIB_4__::func_790())
			{
				__LIB_4__::func_666(&(uParam0->f_1529[iParam1 /*15*/]), 0);
			}
			break;
	}
}

int func_24()
{
	return joaat("CS_HENRILEMIUX");
}

int func_25()
{
	return joaat("CS_LEMIUXASSISTANT");
}

int func_26()
{
	return joaat("P_DOORSDGALA1LX");
}

int func_27()
{
	return joaat("P_DOORSDGALA1RX");
}

void func_28(vector3 vParam0)
{
	int iVar0;
	if (BUILTIN::VDIST(Global_36, vParam0) < 5f)
	{
		iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		}
		if (iVar0 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		}
	}
}

int func_29()
{
	return -213583679;
}

int func_30()
{
	return -443916980;
}

void func_31(int iParam0)
{
	iLocal_372 = iParam0;
}

Vector3 func_32()
{
	return 2400.198f, -1055.875f, 45.971f;
}

Vector3 func_33()
{
	return 55f, 135f, 16f;
}

Vector3 func_34()
{
	return 2393.909f, -1084.828f, 50.8813f;
}

float func_35()
{
	return 15.9492f;
}

Vector3 func_36()
{
	return 2409.732f, -1074.616f, 46.4578f;
}

Vector3 func_37()
{
	return 2401.427f, -1070.7f, 46.4257f;
}

bool func_38(var uParam0, int iParam1, vector3 vParam2, int iParam5, char* sParam6)
{
	char* sVar0;
	sVar0 = sParam6;
	if (MISC::ARE_STRINGS_EQUAL(sVar0, sParam6))
	{
		sVar0 = sParam6;
	}
	if (*uParam0 == 0)
	{
		*uParam0 = ENTITY::_0x6F3068258A499E52(*iParam1, vParam2, 7);
		return false;
	}
	if (ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		*iParam5 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*uParam0));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam5))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam5))
	{
		return true;
	}
	return false;
}

void func_39(int iParam0)
{
	__LIB_5__::func_20(0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
		TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		PED::SET_PED_KEEP_TASK(iParam0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
	}
}

void func_40()
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	if (__LIB_0__::func_41(iVar0) < 5 || __LIB_0__::func_41(iVar0) > 17)
	{
		__LIB_0__::func_467(&iVar0, 5);
		__LIB_0__::func_468(&iVar0, 0);
		__LIB_0__::func_469(&iVar0, 0);
		CLOCK::SET_CLOCK_DATE(__LIB_0__::func_40(iVar0), __LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0));
		CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar0), __LIB_0__::func_42(iVar0), __LIB_0__::func_43(iVar0));
	}
}

void func_41(bool bParam0)
{
	if (bParam0)
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(252));
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(220));
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(221));
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(222));
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(223));
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(224));
	}
	else
	{
		PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_0__::func_120(252));
		PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_0__::func_120(220));
		PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_0__::func_120(221));
		PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_0__::func_120(222));
		PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_0__::func_120(223));
		PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_0__::func_120(224));
	}
}

Vector3 func_42()
{
	return 2405.643f, -1130.801f, 46.458f;
}

Vector3 func_43()
{
	return 34f, 8f, 3f;
}

bool func_44(int iParam0)
{
	return WEAPON::_0x6ABAD7B0A854F8FB(iParam0);
}

float func_45()
{
	return 138.4845f;
}

bool func_46(int iParam0)
{
	return __LIB_0__::func_27(Global_40.f_11184.f_21, iParam0);
}

void func_47(var uParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(*uParam0, 14))
	{
		uParam0->f_26 = uParam1;
	}
}

void func_48(int* iParam0)
{
	__LIB_2__::func_602(iParam0, "", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
}

void func_49(var uParam0, int* iParam1, char* sParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		*iParam1 = ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_348, sParam2, true);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam1, true))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam1, true, true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (__LIB_13__::func_521(uParam0, *iParam1, sParam2, 0, 1, 1))
		{
			__LIB_2__::func_426(iParam1);
		}
	}
}

void func_50()
{
	__LIB_9__::func_707(__LIB_14__::func_29(), 0);
	__LIB_9__::func_707(__LIB_14__::func_30(), 0);
	OBJECT::_0x7F458B543006C8FE(__LIB_14__::func_29(), 16);
	OBJECT::_0x7F458B543006C8FE(__LIB_14__::func_30(), 16);
}

bool func_51(int iParam0, var uParam1, int iParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		__LIB_5__::func_686(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*iParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*iParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam2 = 2;
								__LIB_2__::func_831(iParam0, uParam1, *iParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *iParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *iParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*iParam2 = 4;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*iParam2 = 256;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (__LIB_6__::func_913(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*iParam2 = 131072;
				__LIB_2__::func_831(iParam0, uParam1, *iParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*iParam2 = 262144;
				__LIB_2__::func_831(iParam0, uParam1, *iParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_52(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_13__::func_102(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_13__::func_41(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_12__::func_965(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_983(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_12__::func_965(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_468(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_13__::func_42(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_2__::func_259(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_9__::func_178(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_979(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_2__::func_259(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_979(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_53(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (__LIB_13__::func_476(uParam0, vParam2, iParam5, iParam6, fParam7, bParam8, bParam9, bParam10))
	{
		*iParam1 = uParam0->f_2572;
		return true;
	}
	return false;
}

void func_54(bool bParam0)
{
	int iVar0;
	iVar0 = 112;
	if (__LIB_5__::func_297(Global_1347702[iVar0 /*49*/].f_15) == 0)
	{
		if (__LIB_8__::func_791(603))
		{
		}
		else if (__LIB_5__::func_543(1) > 1)
		{
			return;
		}
		__LIB_0__::func_8(&(Global_1347702[iVar0 /*49*/].f_12), 16);
		__LIB_7__::func_448(Global_1347702[iVar0 /*49*/].f_15, 1);
		if (bParam0)
		{
			__LIB_9__::func_240(iVar0, __LIB_1__::func_440(iVar0), 0, 0);
		}
	}
	else
	{
		if (Global_1347702[iVar0 /*49*/].f_12 & 16 != 0)
		{
			__LIB_0__::func_8(&(Global_1347702[iVar0 /*49*/].f_12), 16);
		}
		if (bParam0)
		{
			__LIB_9__::func_240(iVar0, __LIB_1__::func_440(iVar0), 0, 0);
		}
	}
}

float func_55(int iParam0)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return 0f;
	}
	return Global_40.f_490[iParam0];
}

int func_56(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_2() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_57(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;
	if (!__LIB_0__::func_29(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		__LIB_3__::func_397(iParam0, 0);
		return false;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!__LIB_2__::func_767(iParam0, 0))
	{
		if (bParam1)
		{
			if (!__LIB_2__::func_760(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!__LIB_0__::func_86(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(__LIB_0__::func_120(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(__LIB_0__::func_120(iParam0), 0);
	}
	else
	{
		iVar3 = PERSCHAR::_0x0CADC3A977997472(__LIB_0__::func_120(iParam0), 0);
	}
	if (!__LIB_0__::func_86(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(__LIB_0__::func_120(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return true;
	}
	return false;
}

int func_58(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			break;
	}
	return 8;
}

void func_59(int iParam0, bool bParam1)
{
	ENTITY::SET_ENTITY_VISIBLE(iParam0, bParam1);
	ENTITY::SET_ENTITY_COLLISION(iParam0, bParam1, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, !bParam1);
}

void func_60(int iParam0)
{
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_PLAYER_LIKE"));
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 66, true);
	PED::_0xF1C03A5352243A30(iParam0);
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("META_OUTFIT_DEFAULT");
		case 834104618:
			return joaat("META_OUTFIT_DEFAULT");
		case -2065348256:
			return joaat("META_OUTFIT_DEFAULT");
		case 27277534:
			return joaat("META_OUTFIT_DEFAULT");
		case 973504760:
			return joaat("META_OUTFIT_DEFAULT");
		case 1337236701:
			return joaat("META_OUTFIT_DEFAULT");
		case -1092757010:
			return joaat("META_OUTFIT_DEFAULT");
		case 223268309:
			return joaat("META_OUTFIT_DEFAULT");
		case 160441342:
			return joaat("META_OUTFIT_DEFAULT");
		case -922828525:
			return joaat("META_OUTFIT_DEFAULT");
		case 673154590:
			return joaat("META_OUTFIT_DEFAULT");
		case -252241071:
			return joaat("META_OUTFIT_DEFAULT");
		default:
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

bool func_62(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*iParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*iParam0, 0))
	{
		return false;
	}
	else if (__LIB_10__::func_373(*iParam0, 0, uParam1, uParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_228(iParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_226(iParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

bool func_63(var uParam0)
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_348, false));
}

struct<4> func_64(int iParam0, char* sParam1, char* sParam2)
{
	struct<4> Var0;
	Var0 = { __LIB_4__::func_370(0, iParam0, sParam1, sParam2, 1) };
	Var0.f_3 = __LIB_4__::func_371(0, iParam0, sParam1, sParam2, 1);
	return Var0;
}

void func_65(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		__LIB_1__::func_281(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			__LIB_11__::func_769(iParam0, 0);
		}
	}
}

bool func_66(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, iParam5, bParam6, fParam7, bParam8, fParam12, bParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_2__::func_618(iParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_8__::func_901(iParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_2__::func_608(iParam4);
	}
	if (__LIB_2__::func_618(iParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (__LIB_5__::func_51(iParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return false;
}

bool func_67(var uParam0)
{
	if (uParam0->f_176 == 4)
	{
		if (!__LIB_13__::func_519(uParam0))
		{
			return false;
		}
	}
	return true;
}

void func_68(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_6__::func_726(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_8__::func_898(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_2__::func_608(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_1__::func_625();
	}
}

void func_69(var uParam0)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
	}
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
}

bool func_70(var uParam0, char* sParam1, var uParam2, bool bParam3, float fParam4, int iParam5, bool bParam6)
{
	if (bParam6)
	{
		if (__LIB_0__::func_270())
		{
			return false;
		}
	}
	if (!__LIB_0__::func_272(*uParam2, 1))
	{
		return true;
	}
	if (__LIB_0__::func_665(Global_35, *uParam2, 1, 1) < fParam4)
	{
		if (__LIB_6__::func_904())
		{
			if (bParam3)
			{
				__LIB_5__::func_20(0, 0);
			}
		}
		return __LIB_12__::func_876(uParam0, sParam1, 0);
	}
	return iParam5;
}

bool func_71(var uParam0)
{
	if (__LIB_0__::func_272(uLocal_14[0], 0) && __LIB_0__::func_272(uLocal_14[1], 0))
	{
		if (__LIB_1__::func_348(Global_35, uLocal_14[0]) > 75f)
		{
			return true;
		}
		else if (__LIB_1__::func_348(Global_35, uLocal_14[0]) > 40f)
		{
			__LIB_12__::func_883(uParam0, "OBT1_O_RETURN", 0, 7500, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
	}
	return false;
}

bool func_72(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*uParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
	{
		return false;
	}
	else if (__LIB_13__::func_427(*uParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_0(uParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_586(uParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

void func_73(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_13__::func_486(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_74(var uParam0)
{
	return iLocal_116;
}

bool func_75(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, float fParam7)
{
	if (__LIB_0__::func_272(*uParam1, 1))
	{
		__LIB_14__::func_69(uParam1);
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam2))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		*uParam1 = __LIB_12__::func_885(uParam0, iParam2, vParam3, iParam6, 1, 1, 0, fParam7, 1, 1, 1, 0);
		if (ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			return false;
		}
	}
	if (__LIB_0__::func_272(*uParam1, 1))
	{
		if (PED::_0xA0BC8FAED8CFEB3C(*uParam1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
			__LIB_14__::func_69(uParam1);
			return true;
		}
	}
	return false;
}

void func_76(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_12__::func_655(uParam0, 512))
	{
		return;
	}
	if (__LIB_9__::func_178(&(uParam0->f_1768)) < 2f)
	{
		return;
	}
	if (__LIB_5__::func_579(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_12__::func_693(uParam0, 524288);
	}
}

bool func_77(var uParam0, bool bParam1, bool bParam2)
{
	struct<28> Var0;
	int iVar28;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return true;
	}
	if (bParam1)
	{
		if (PED::_IS_PED_LASSOED(*uParam0) || PED::_IS_PED_HOGTIED(*uParam0))
		{
			return false;
		}
	}
	if (!bParam2)
	{
		return false;
	}
	else
	{
		Var0.f_8 = -1;
		Var0.f_17 = 1097859072;
		Var0.f_18 = 1000;
		Var0.f_19 = 1067450368;
		Var0.f_20 = 5000;
		Var0.f_21 = 42;
		Var0.f_22 = 1103626240;
		Var0.f_23 = 1077936128;
		Var0.f_24 = 1106247680;
		Var0.f_25 = 1103101952;
		Var0.f_26 = 1097859072;
		Var0.f_27 = 1103626240;
		__LIB_4__::func_228(&Var0);
		__LIB_1__::func_401(&Var0, 1);
		__LIB_2__::func_828(&Var0, 1);
		__LIB_2__::func_829(&Var0, 1);
		__LIB_1__::func_398(&Var0, 1);
		__LIB_1__::func_402(&Var0, 0);
		__LIB_1__::func_413(&Var0, 0);
		__LIB_2__::func_830(&Var0, 0);
		if (__LIB_13__::func_427(*uParam0, 0, &Var0, &iVar28, 0, 0))
		{
			if (iVar28 == 2)
			{
				if (bParam1)
				{
					if ((WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*uParam0, joaat("WEAPON_LASSO"), 0) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*uParam0, joaat("WEAPON_FALL"), 0)) || __LIB_1__::func_372(Global_35, 0) == joaat("WEAPON_LASSO"))
					{
						return false;
					}
				}
			}
			return true;
		}
	}
	return false;
}

void func_78(int iParam0)
{
	Global_1935689.f_12 = iParam0;
}

void func_79(int iParam0, char* sParam1)
{
	DECORATOR::_DECOR_SET_STRING(iParam0, "loot_long_custom_anim_data_set", sParam1);
}

void func_80(var uParam0, float fParam1)
{
	uParam0->f_339 = fParam1;
}

Vector3 func_81(char* sParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = -1;
	vVar1 = { 0f, 0f, 0f };
	if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam0, &iVar0))
	{
		if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, (iVar0 - (1 + iParam1)), &vVar1))
		{
			return vVar1;
		}
	}
	return vVar1;
}

bool func_82(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &fVar3, &fVar4);
		if (((fVar3 >= fParam2 && fVar3 <= fParam1) && fVar4 >= fParam4) && fVar4 <= fParam3)
		{
			return true;
		}
	}
	return false;
}

bool func_83()
{
	return Global_1935496.f_13;
}

void func_84(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
			{
				if (bParam4)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, iParam2, iParam3, 0);
				}
				TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(iParam0, 1);
				TASK::SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(iParam0, fParam5, fParam6, fParam7, fParam8, fParam9, iParam11, iParam12, iParam13);
			}
		}
	}
	if (bParam10)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
}

void func_85(int iParam0)
{
	if (__LIB_7__::func_772(iParam0))
	{
		Global_40.f_9419 = (Global_40.f_9419 - (Global_40.f_9419 && iParam0));
	}
}

Vector3 func_86(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	vVar6 = { __LIB_3__::func_857(vVar0, __LIB_0__::func_646(vVar3.x, vVar3.y), 2f) };
	if (bParam1)
	{
		if (PATHFIND::GET_SAFE_COORD_FOR_PED(vVar6, false, &vVar9, 0))
		{
			return vVar9;
		}
	}
	return vVar6;
}

void func_87(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(iParam0, "HorseCompanion", true);
	__LIB_3__::func_149(iParam0, __LIB_1__::func_20(iParam1));
	if (__LIB_0__::func_858(iParam1, 8))
	{
		POPULATION::_0xF74E134F40192884(iParam0, 2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iParam1)))
	{
		PED::_0x931B241409216C1F(__LIB_0__::func_271(iParam1), iParam0, 0);
		PED::_0xED1C764997A86D5A(__LIB_0__::func_271(iParam1), iParam0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 367, true);
	}
	else
	{
		__LIB_0__::func_288(iParam1, 38, 1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	if (Global_40.f_4283 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 172, true);
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 442, true);
	if (__LIB_0__::func_858(iParam1, 4096))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, true);
	}
	PED::_0xAE6004120C18DF97(iParam0, 2, 0);
	PED::_0xAE6004120C18DF97(iParam0, 3, 0);
	__LIB_1__::func_434(iParam1, __LIB_0__::func_858(iParam1, 8192), __LIB_0__::func_858(iParam1, 16384), 1);
}

void func_88(var uParam0)
{
	__LIB_13__::func_827(uParam0);
}

void func_89(int iParam0, int iParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	__LIB_9__::func_912(iParam0, iParam1);
	fVar0 = __LIB_5__::func_439(fParam3 >= 0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	if (fVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		__LIB_12__::func_951(iParam1, uParam2);
		__LIB_13__::func_463(iParam1);
		__LIB_13__::func_464(iParam1);
		if (!MISC::IS_BIT_SET(*iParam1, 17))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), iParam1->f_27);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), iParam1->f_27);
				}
			}
		}
		__LIB_1__::func_538(0);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (!MISC::IS_BIT_SET(iParam1->f_21, 2))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam1->f_35))
			{
				iParam1->f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, 0f, iParam1->f_26, iParam1->f_26, 20f);
			}
			else
			{
				__LIB_3__::func_58(iParam1->f_35, 0, 0);
				MISC::SET_BIT(&(iParam1->f_21), 2);
			}
		}
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15)))
		{
			iVar1 = 0;
			if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iParam1->f_28 = PED::GET_MOUNT(Global_35);
			}
			bVar2 = (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15))) && !STREAMING::_0x99F92061EFE908BA());
			bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
			__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, __LIB_5__::func_439(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

bool func_90(bool bParam0, bool bParam1, bool bParam2)
{
	if (__LIB_7__::func_411(PLAYER::PLAYER_ID(), bParam0, bParam1, bParam2))
	{
		return true;
	}
	return false;
}

bool func_91(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				__LIB_13__::func_462(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_92(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_13__::func_462(iParam1, uParam2, 0);
		iVar5 = __LIB_10__::func_900(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		__LIB_2__::func_624(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_3__::func_101(iParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*iParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_93(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	bool bVar13;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_899(&(iParam1->f_13)))
	{
		fVar12 = __LIB_1__::func_583(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_10__::func_902(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_624(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_4__::func_101(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_13__::func_462(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							__LIB_11__::func_421(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							__LIB_10__::func_518(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::_IS_PED_CARRYING(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_2__::func_259(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_4__::func_101(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

void func_94(int* iParam0, var uParam1)
{
	int iVar0;
	struct<35> Var1;
	struct<10> Var62;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var1.f_26 = 1106247680;
	Var1.f_27 = 1067450368;
	Var1.f_29 = 1092616192;
	Var1.f_30 = 1112014848;
	Var1.f_31 = 1106247680;
	Var1.f_32 = 1101529088;
	Var1.f_33 = 1101004800;
	Var1.f_34 = 1084227584;
	Var62.f_2 = 570;
	Var62.f_3 = 1065353216;
	Var62.f_4 = -1082130432;
	Var62.f_9 = 3;
	__LIB_12__::func_991(iParam0, 0);
	__LIB_13__::func_462(iParam0, uParam1, 1);
	__LIB_2__::func_624(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

void func_95(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = __LIB_5__::func_439(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	__LIB_14__::func_89(iParam0, iParam1, uParam2, fVar0);
	__LIB_12__::func_959(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_10__::func_518(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_6__::func_789(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				__LIB_13__::func_461(iParam1);
			}
		}
	}
}

void func_96(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = PED::_GET_LAST_MOUNT(Global_35);
	iVar1 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
	if (__LIB_0__::func_272(iVar0, 0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(iVar0, iParam0, true, 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, vParam1, fParam4, true, false, true);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(iVar1, iParam0, true, 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar1, vParam1, fParam4, true, false, true);
			}
		}
	}
}

bool func_97(var uParam0)
{
	float fVar0;
	float fVar1;
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		return true;
	}
	fVar0 = BUILTIN::VDIST2(Global_1347702[uParam0->f_174 /*49*/].f_24, Global_36);
	fVar1 = 3f;
	if (uParam0->f_744 > 0f)
	{
		fVar1 = uParam0->f_744;
	}
	__LIB_12__::func_773(0, 1, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		if (__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		if (!__LIB_0__::func_163(Global_35, -982327190))
		{
			TASK::TASK_STAND_STILL(Global_35, 2200);
			__LIB_8__::func_901(&(uParam0->f_2588), 1);
		}
		if (TASK::IS_PED_STILL(Global_35) || __LIB_5__::func_53(&(uParam0->f_2588)) > 2f)
		{
			__LIB_2__::func_608(&(uParam0->f_2588));
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			return true;
		}
	}
	else
	{
		if (!__LIB_2__::func_618(&(uParam0->f_2588)))
		{
			__LIB_8__::func_901(&(uParam0->f_2588), 1);
		}
		else if (__LIB_5__::func_53(&(uParam0->f_2588)) > 5f)
		{
			__LIB_2__::func_608(&(uParam0->f_2588));
			if (__LIB_0__::func_163(Global_35, 713668775))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
		}
		if (!__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			if (!TASK::IS_MOVE_BLEND_RATIO_WALKING(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)) && !TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 1, false);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, 1f, 7500, 0.25f, 0, 40000f);
		}
		if (__LIB_0__::func_272(Global_1347702[uParam0->f_174 /*49*/].f_43, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43, -1, 0, 51, 0);
			}
		}
	}
	return false;
}

int func_98(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, iParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_2__::func_618(iParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_8__::func_901(iParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_2__::func_608(iParam4);
	}
	if (__LIB_2__::func_618(iParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (__LIB_5__::func_51(iParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return 1;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return 0;
}

void func_99(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_12__::func_655(uParam0, 512))
	{
		return;
	}
	if (__LIB_5__::func_53(&(uParam0->f_1768)) < 2f)
	{
		return;
	}
	if (__LIB_4__::func_711(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_12__::func_693(uParam0, 524288);
	}
}

int func_100(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_1584;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_371[iParam1 /*18*/];
		fVar3 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7;
		fVar4 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7.f_1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (__LIB_4__::func_576(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!__LIB_12__::func_728(uParam0, iVar2))
				{
					uParam0->f_1581 = iParam1;
				}
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355))) || (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 128) && uParam0->f_1795))
			{
				if (uParam0->f_1795)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 0.1f, -1, false);
					if (!__LIB_12__::func_655(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1797, 24, 1000);
					__LIB_13__::func_288(uParam0, 8);
				}
				else
				{
					__LIB_12__::func_693(uParam0, 131072);
					__LIB_13__::func_288(uParam0, 11);
				}
			}
			else if (uParam0->f_1793)
			{
				__LIB_13__::func_288(uParam0, 5);
			}
			else
			{
				__LIB_13__::func_368(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_5__::func_53(&(uParam0->f_1765)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_5__::func_53(&(uParam0->f_1765)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_13__::func_368(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_5__::func_53(&(uParam0->f_1765)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_13__::func_368(uParam0);
			}
			if ((!uParam0->f_1793 && !uParam0->f_1795) || bVar0)
			{
				uParam0->f_1582 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_13__::func_368(uParam0);
				}
				else
				{
					__LIB_13__::func_292(uParam0, iParam1, bParam2);
					__LIB_5__::func_107(&(uParam0->f_1765));
					__LIB_13__::func_288(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_5__::func_53(&(uParam0->f_1765)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				__LIB_13__::func_288(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1799)))
				{
					__LIB_5__::func_386(uParam0->f_1799, 0);
				}
			}
			__LIB_5__::func_107(&(uParam0->f_1765));
			__LIB_13__::func_288(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_5__::func_53(&(uParam0->f_1765)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_13__::func_288(uParam0, 10);
				}
				else
				{
					__LIB_13__::func_288(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_5__::func_53(&(uParam0->f_1765)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_13__::func_288(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_5__::func_53(&(uParam0->f_1765)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1582 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1797, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_13__::func_288(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_5__::func_53(&(uParam0->f_1765)) >= 0.75f)
			{
				if (!__LIB_12__::func_655(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_13__::func_288(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

bool func_101(var uParam0)
{
	bool bVar0;
	if (__LIB_12__::func_738(uParam0))
	{
		return true;
	}
	bVar0 = false;
	if (__LIB_0__::func_1(uParam0->f_172, 4096) || __LIB_12__::func_766())
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
	{
		if (!bVar0)
		{
			return true;
		}
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_13__::func_453(uParam0, bVar0);
		if (__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			return true;
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (bVar0)
		{
			return false;
		}
		if (uParam0->f_171 != 0 || __LIB_13__::func_346(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_102(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024) && uParam0->f_176 == 4)
	{
		if (!__LIB_0__::func_1(uParam0->f_172, 1))
		{
			return false;
		}
		if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			return false;
		}
		MISC::_0xA565FAC215CBC77D();
		return true;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 256))
	{
		if (!__LIB_12__::func_925(uParam0))
		{
			if ((__LIB_0__::func_1(uParam0->f_172, 8192) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_751, false))
			{
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || __LIB_13__::func_322(uParam0))
				{
					__LIB_12__::func_918(uParam0, 2);
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						__LIB_0__::func_11(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_13__::func_453(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!__LIB_13__::func_6(uParam0))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
	}
	return true;
}

bool func_103(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (bParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_12__::func_985(iParam1, uParam2, 0);
		iVar5 = __LIB_4__::func_48(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_3__::func_101(iParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*iParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_104(int iParam0, int* iParam1, bool bParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	bool bVar13;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_899(&(iParam1->f_13)))
	{
		fVar12 = __LIB_1__::func_583(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_4__::func_50(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_13__::func_291(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, bParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_12__::func_985(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							__LIB_6__::func_750(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							__LIB_13__::func_287(iParam1, uParam4, iParam0, bVar13, sParam9, bParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::_IS_PED_CARRYING(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_2__::func_259(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_2__::func_526(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_10__::func_553(iParam1, bParam2);
	}
	return bVar5;
}

void func_105(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_348, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_405, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	if ((__LIB_12__::func_752(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_348, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_348, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_348))
	{
		if (!__LIB_0__::func_1(uParam0->f_405, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_269(iVar1))
		{
			if (__LIB_0__::func_572(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (__LIB_0__::func_1(uParam0->f_405, 512))
	{
		bVar2 = true;
	}
	if (__LIB_8__::func_356(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_348);
		__LIB_1__::func_625();
	}
}

bool func_106(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*iParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*iParam0, 0))
	{
		return false;
	}
	else if (__LIB_13__::func_427(*iParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_228(iParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_518(iParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

struct<14> func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	struct<14> Var39;
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!__LIB_0__::func_236(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @137; //curOff = 81
			}
			else if (Var3.f_4 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
			}
			else if (__LIB_1__::func_429(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				__LIB_0__::func_238(iVar0);
				return Var3;
			}
			iVar2++;
		}
		__LIB_0__::func_238(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_108(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!__LIB_12__::func_655(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!__LIB_12__::func_655(uParam0, 4096) && uParam0->f_1792)
	{
		return;
	}
	if (!__LIB_12__::func_655(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_13__::func_639(uParam0);
	__LIB_12__::func_915(uParam0, uParam0->f_1793, uParam0->f_1795);
	__LIB_12__::func_855(uParam0);
	if (uParam0->f_1796 && !uParam0->f_1795)
	{
		if (((((uParam0->f_1791 >= 0 && uParam0->f_912[uParam0->f_1791 /*41*/].f_17 > 0f) && uParam0->f_1584 >= 0) && !__LIB_0__::func_266(Global_35, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, (uParam0->f_912[uParam0->f_1791 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_12__::func_655(uParam0, 33554432)) && !__LIB_12__::func_655(uParam0, 4))
		{
			__LIB_12__::func_933(uParam0, uParam0->f_1793);
			return;
		}
	}
	if (!__LIB_12__::func_655(uParam0, 4))
	{
		if (__LIB_12__::func_856(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1580 = uParam0->f_1584;
				__LIB_12__::func_693(uParam0, 8);
				return;
			}
		}
		else
		{
			__LIB_12__::func_933(uParam0, uParam0->f_1793);
		}
		if (uParam0->f_912[uParam0->f_1586 /*41*/].f_29)
		{
			fVar0 = __LIB_12__::func_932(uParam0, uParam0->f_1586);
			if (fVar0 < 0f || (uParam0->f_1793 && fVar0 < 1f))
			{
				uParam0->f_1584 = uParam0->f_1586;
				if (!bParam2)
				{
					uParam0->f_1580 = uParam0->f_1586;
					__LIB_12__::func_693(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1585 == -1f || fVar0 <= uParam0->f_1585) || uParam0->f_1586 == uParam0->f_1584)
				{
					if (uParam0->f_1586 != uParam0->f_1584)
					{
					}
					uParam0->f_1584 = uParam0->f_1586;
					uParam0->f_1585 = fVar0;
					__LIB_12__::func_693(uParam0, 16);
					if (((!__LIB_12__::func_655(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, true) < (uParam0->f_912[uParam0->f_1584 /*41*/].f_11 + 5f))
					{
						__LIB_12__::func_916(uParam0);
						__LIB_12__::func_693(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1584 == uParam0->f_1586)
			{
				__LIB_12__::func_686(uParam0, 16);
			}
		}
		if (uParam0->f_1586 + 1 >= 8)
		{
			uParam0->f_1586 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1586 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_912[iVar2 /*41*/].f_29)
				{
					uParam0->f_1586 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1586 = 0;
			}
		}
		if (uParam0->f_1584 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 2) && uParam0->f_1793)
		{
			return;
		}
	}
	if (__LIB_12__::func_655(uParam0, 16))
	{
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, 1);
		if (uParam0->f_1793 && fVar4 <= (uParam0->f_912[uParam0->f_1584 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_912[uParam0->f_1584 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_912[uParam0->f_1584 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1771, uParam0->f_1775))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_912[uParam0->f_1584 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_912[uParam0->f_1584 /*41*/].f_1.f_2 + uParam0->f_912[uParam0->f_1584 /*41*/].f_10))
			{
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1795 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1771, uParam0->f_1775)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1797) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1797) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1797))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
			}
		}
		else if ((uParam0->f_1793 && fVar4 <= (uParam0->f_912[uParam0->f_1584 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1794))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1794, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1793 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1794) > 1.25f) || __LIB_12__::func_655(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1771, uParam0->f_1775) && __LIB_12__::func_932(uParam0, uParam0->f_1584) < 10000f) && __LIB_12__::func_655(uParam0, 16)) || __LIB_12__::func_655(uParam0, 4))
		{
			if (!__LIB_12__::func_655(uParam0, 4))
			{
				__LIB_12__::func_693(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar7 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_912[uParam0->f_1584 /*41*/].f_7, uParam0->f_912[uParam0->f_1584 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1582 = 0;
				__LIB_12__::func_686(uParam0, 4);
			}
		}
	}
	else if (__LIB_12__::func_655(uParam0, 4))
	{
		__LIB_12__::func_686(uParam0, 4);
	}
}

void func_109(int iParam0, bool bParam1)
{
	if (__LIB_6__::func_702(16))
	{
		MAP::_BLIP_SET_MODIFIER(iParam0, -1186550032);
		__LIB_6__::func_704(16);
		return;
	}
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0, "PROC_BLIP_CHROB");
	if (bParam1)
	{
	}
}

void func_110(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("COACH2"))
	{
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("CHUCKWAGON000X"))
	{
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("STAGECOACH004X"))
	{
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
	}
}

void func_111(int iParam0)
{
	char cVar0[64];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	iVar8 = joaat("BLIP_ROBBERY_COACH");
	iVar9 = iVar8;
	iVar10 = MISC::GET_HASH_KEY("CR_COACH_TO");
	StringCopy(&cVar0, __LIB_6__::func_714(iParam0), 64);
	StringConCat(&cVar0, "_DESC", 64);
	iVar11 = 4;
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar11, __LIB_6__::func_773(iParam0), __LIB_6__::func_711(iParam0), iVar10, MISC::GET_HASH_KEY(&cVar0), 0);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar11, __LIB_6__::func_773(iParam0), iVar9, MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar11, __LIB_6__::func_773(iParam0), MISC::GET_HASH_KEY("MISSION_COACH_ROBBERY"), MISC::GET_HASH_KEY("SP_MISSIONS_4"));
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar11, __LIB_6__::func_773(iParam0)))
	{
	}
}

bool func_112(var uParam0, char* sParam1, int iParam2)
{
	if (!__LIB_6__::func_904() && __LIB_0__::func_265(&uLocal_14) > 14f)
	{
		__LIB_12__::func_876(uParam0, sParam1, 0);
		TASK::TASK_LOOK_AT_ENTITY(iParam2, Global_35, 5, 0, 51, 0);
		__LIB_1__::func_148(&uLocal_14);
		return true;
	}
	return false;
}

void func_113()
{
	__LIB_1__::func_148(&uLocal_14);
}

void func_114()
{
	__LIB_6__::func_777(13, 105, 72, __LIB_6__::func_710(105), __LIB_6__::func_711(13));
}

bool func_115(char* sParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			if (__LIB_0__::func_272(__LIB_0__::func_271(iVar0), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(__LIB_0__::func_271(iVar0), Global_35, 1, 1))
				{
					StringCopy(sParam0, __LIB_1__::func_464(iVar0, 0), 32);
					return true;
				}
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(__LIB_0__::func_271(iVar0)))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, __LIB_0__::func_271(iVar0)))
					{
						StringCopy(sParam0, __LIB_1__::func_464(iVar0, 0), 32);
						return true;
					}
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, __LIB_0__::func_271(iVar0)))
					{
						StringCopy(sParam0, __LIB_1__::func_464(iVar0, 0), 32);
						return true;
					}
					if (PED::GET_MOUNT(Global_35) != 0)
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_MOUNT(Global_35), __LIB_0__::func_271(iVar0)))
						{
							StringCopy(sParam0, __LIB_1__::func_464(iVar0, 0), 32);
							return true;
						}
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Global_35))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, __LIB_0__::func_271(iVar0)))
						{
							StringCopy(sParam0, __LIB_1__::func_464(iVar0, 0), 32);
							return true;
						}
						if (VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
						{
							if ((((((VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 0) != 0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 0), __LIB_0__::func_271(iVar0))) || (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 1) != 0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 1), __LIB_0__::func_271(iVar0)))) || (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 2) != 0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 2), __LIB_0__::func_271(iVar0)))) || (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 3) != 0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 3), __LIB_0__::func_271(iVar0)))) || (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 4) != 0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 4), __LIB_0__::func_271(iVar0)))) || (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 5) != 0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 5), __LIB_0__::func_271(iVar0))))
							{
								StringCopy(sParam0, __LIB_1__::func_464(iVar0, 0), 32);
								return true;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_116(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_12__::func_970(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_12__::func_889(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_12__::func_965(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_914(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_12__::func_965(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_103(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_12__::func_923(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_0__::func_264(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_851(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_851(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_117(int iParam0, vector3 vParam1, int iParam4, var uParam5, var uParam6)
{
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return;
	}
	if (uParam5 && PED::_0xF9331B3A314EB49D(iParam0))
	{
		PED::_0xF1C03A5352243A30(iParam0);
		return;
	}
	if (__LIB_0__::func_86(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			PED::_0x802092B07E3B1EEA(iParam0, vParam1, uParam6);
			break;
		case 5:
			PED::_0x463803429297117C(iParam0, vParam1, uParam6, 0);
			break;
		case 6:
			PED::_0x62FDAD5E01D2DD47(iParam0, vParam1, uParam6, 0);
			break;
		case 4:
			PED::_0xEC6935EBE0847B90(iParam0, vParam1);
			break;
		case 2:
			PED::_0xEEED8FAFEC331A70(iParam0, vParam1, uParam6);
			break;
		case 1:
			PED::_0xF1C03A5352243A30(iParam0);
			break;
		case 7:
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
		default:
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
	}
}

void func_118(var uParam0)
{
	__LIB_12__::func_658(uParam0, 2);
	__LIB_12__::func_659(uParam0, 2);
}

bool func_119(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_17))
	{
		if (!__LIB_0__::func_272(iLocal_17, 1))
		{
			StringCopy(&(uParam0->f_2578), "RTL_FAIL_1", 24);
			return true;
		}
	}
	return false;
}

bool func_120(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_4__::func_122(iParam1, uParam2, 0);
		iVar5 = __LIB_4__::func_48(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_2__::func_388(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*uParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_121(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (fParam1 <= (__LIB_12__::func_603(iParam0) * __LIB_12__::func_603(iParam0)))
	{
		if (ITEMSET::IS_ITEMSET_VALID(Global_1347702[iParam0 /*49*/].f_21))
		{
			iVar0 = ITEMSET::GET_ITEMSET_SIZE(Global_1347702[iParam0 /*49*/].f_21);
			if (iVar0 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar0)
				{
					iVar4 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1347702[iParam0 /*49*/].f_21);
					iVar5 = iVar4;
					if (ENTITY::DOES_ENTITY_EXIST(iVar5))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar5))
						{
							iVar1++;
							iVar6 = iVar5;
							if (ENTITY::IS_ENTITY_DEAD(iVar6))
							{
							}
							else
							{
								if (!PED::_0x5102307CE88798EB(iVar6))
								{
									PED::REQUEST_PED_VISIBILITY_TRACKING(iVar6);
								}
								if (!PED::IS_TRACKED_PED_VISIBLE(iVar6))
								{
								}
								else
								{
									bVar3 = true;
								}
								else
								{
									iVar2++;
								}
								if (iVar1 > 0)
								{
									if (!bVar3)
									{
										return false;
									}
								}
								iVar2 = 0;
								while (iVar2 < iVar0)
								{
									iVar7 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1347702[iParam0 /*49*/].f_21);
									iVar8 = iVar7;
									if (((ENTITY::DOES_ENTITY_EXIST(iVar8) && ENTITY::IS_ENTITY_A_PED(iVar8)) && !ENTITY::IS_ENTITY_DEAD(iVar8)) && PED::_0x5102307CE88798EB(iVar8))
									{
										PED::_0x3088634CF8C819CF(iVar8);
									}
									iVar2++;
								}
								return true;
								Jump @312; //curOff = 294
								if (fParam1 < 10f)
								{
									return true;
								}
								Jump @319; //curOff = 312
								return true;
								return false;
							}
						}
					}
				}
			}
		}
	}
}

bool func_122(int iParam0, int iParam1, var uParam2)
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
	iVar4 = __LIB_1__::func_710(iParam1);
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
			if (__LIB_1__::func_549(1868067663, &uVar0))
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
				Jump @778; //curOff = 585
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

void func_123(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_12__::func_928(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_13__::func_330(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_1__::func_583(&(uParam0->f_1768)) >= IntToFloat((uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_12__::func_775(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_2__::func_813(&(uParam0->f_1667), uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_371[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1581 = iParam1;
			break;
	}
}

bool func_124(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_194, iParam0))
	{
		return true;
	}
	return false;
}

void func_125()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
}

bool func_126(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15768[iParam0] && iParam1) != 0;
}

bool func_127(int iParam0)
{
	return __LIB_1__::func_59(Global_1914319.f_15936[iParam0 /*6*/]);
}

void func_128(int iParam0)
{
	iLocal_1301 = iParam0;
}

bool func_129(int iParam0, bool bParam1)
{
	if (Global_1357549.f_1497.f_8 == 0)
	{
		return false;
	}
	if (bParam1)
	{
		return (Global_1357549.f_1497.f_8 && iParam0) == iParam0;
	}
	return (Global_1357549.f_1497.f_8 && iParam0) != 0;
}

int func_130()
{
	int iVar0;
	iVar0 = joaat("BLIP_POST_OFFICE");
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_27(Global_1430226.f_4, 1))
		{
			iVar0 = joaat("BLIP_POST_OFFICE_REC");
		}
	}
	return iVar0;
}

void func_131()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	__LIB_3__::func_65(16);
	__LIB_3__::func_65(32);
	__LIB_3__::func_65(64);
	if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
	}
}

int func_132(int iParam0, int iParam1)
{
	if (iParam1 != 9)
	{
		return 0;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return joaat("BLIP_SHOP_HORSE");
	}
	if (__LIB_5__::func_917() == 3 && !MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
	{
		return joaat("BLIP_SHOP_HORSE_SADDLE");
	}
	return joaat("BLIP_SHOP_HORSE");
}

void func_133(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = Global_1914319.f_15936[iParam0 /*6*/];
	if (iVar1 != -1)
	{
		if (!__LIB_1__::func_59(iVar1))
		{
			__LIB_9__::func_945(&iVar1, 0);
			Global_1914319.f_15936[iParam0 /*6*/] = -1;
			return;
		}
	}
	if (bParam1)
	{
		if (__LIB_1__::func_935(iParam0, 32))
		{
			__LIB_6__::func_350(iParam0, iVar0, 0, 0);
			__LIB_1__::func_96(iVar1, -1186550032);
		}
		if (!__LIB_1__::func_935(iParam0, 128))
		{
			__LIB_3__::func_559(iVar1, -401963276);
			__LIB_3__::func_559(iVar1, 231194138);
			__LIB_1__::func_936(iParam0, 128);
			__LIB_1__::func_936(iParam0, 8);
		}
	}
	else if (__LIB_1__::func_935(iParam0, 128))
	{
		__LIB_1__::func_96(iVar1, -401963276);
		__LIB_1__::func_937(iParam0, 128);
		__LIB_1__::func_937(iParam0, 8);
		if (__LIB_4__::func_75(iVar0))
		{
			__LIB_3__::func_559(iVar1, -1186550032);
			__LIB_1__::func_936(iParam0, 32);
			__LIB_6__::func_350(iParam0, iVar0, 1, 0);
		}
	}
	__LIB_5__::func_898(iParam0);
}

bool func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (iParam0 == 19)
	{
		return true;
	}
	if (iParam0 == 9)
	{
		return true;
	}
	if (__LIB_0__::func_2() == 0)
	{
		return __LIB_1__::func_205(Global_1051260.f_48[iParam0 /*78*/].f_18, Global_1051260.f_48[iParam0 /*78*/].f_30, 1, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
	{
		return false;
	}
	if (iParam0 != 11)
	{
		if (!__LIB_0__::func_29(Global_1914319.f_3[iParam0 /*446*/].f_21))
		{
			return false;
		}
		if (!__LIB_2__::func_767(Global_1914319.f_3[iParam0 /*446*/].f_21, 0))
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_23))
	{
		Global_1914319.f_3[iParam0 /*446*/].f_23 = __LIB_2__::func_963(Global_1914319.f_3[iParam0 /*446*/].f_21);
		iVar0 = __LIB_0__::func_120(Global_1914319.f_3[iParam0 /*446*/].f_21);
		if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar0))
		{
			return false;
		}
		if (!PERSCHAR::_0x4AFC7288C77238B3(iVar0))
		{
			return false;
		}
		if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_25, __LIB_4__::func_902(Global_1914319.f_3[iParam0 /*446*/].f_21)))
		{
			return false;
		}
		return true;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[iParam0 /*446*/].f_23);
	if (__LIB_11__::func_159(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		if (LAW::_0x856CE8FDE2416602(iVar1))
		{
			return false;
		}
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(Global_1914319.f_3[iParam0 /*446*/].f_23, true, false) };
	if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_25, vVar2))
	{
		return false;
	}
	return true;
}

int func_135(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 == 0)
	{
		return -1;
	}
	if (__LIB_0__::func_86(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = __LIB_3__::func_321(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (__LIB_3__::func_322(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((__LIB_3__::func_322(iVar0) == iParam1 && __LIB_3__::func_323(iVar0) == iParam0) && iVar2 == __LIB_3__::func_324(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		__LIB_1__::func_68(iVar1, iParam0);
		__LIB_1__::func_69(iVar1, iParam1);
		__LIB_1__::func_70(iVar1, iVar2);
		__LIB_10__::func_623(iVar1, iParam5);
		__LIB_10__::func_793(iVar1);
		MAP::SET_BLIP_FLASH_TIMER(Global_36308[iVar1], iParam1, 0);
		return iVar1;
	}
	return -1;
}

void func_136(bool bParam0)
{
	__LIB_10__::func_673(bParam0);
	__LIB_10__::func_674(bParam0);
	__LIB_10__::func_675(bParam0);
	__LIB_10__::func_676(bParam0);
	__LIB_10__::func_677(bParam0);
	__LIB_10__::func_678(bParam0);
	__LIB_10__::func_679(bParam0);
	__LIB_1__::func_218(bParam0);
}

void func_137(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_7__::func_371(*uParam0);
	iVar1 = __LIB_7__::func_376(*uParam0);
	iVar2 = MISC::GET_HASH_KEY(__LIB_0__::func_558(uParam0->f_3));
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(8, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(8, iVar0, __LIB_1__::func_546(__LIB_0__::func_317()), 1307979820 /* GXTEntry: "Camp Item Request" */, __LIB_7__::func_377(*uParam0), 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(8, iVar0, iVar2, 1997120069);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(8, iVar0, iVar1, joaat("SP_MISSIONS_22"));
		if (*uParam0 == 21)
		{
			__LIB_7__::func_378(1, joaat("CONSUMABLE_WHISKEY"), 0);
			__LIB_7__::func_378(2, joaat("CONSUMABLE_PEPPERMINT"), 0);
			__LIB_7__::func_378(3, joaat("CONSUMABLE_HERB_MILKWEED"), 0);
			__LIB_7__::func_378(4, joaat("CONSUMABLE_HAIR_GREASE"), 0);
			__LIB_7__::func_378(5, 0, joaat("AT_SKUNK"));
			iVar3 = 0;
			while (iVar3 < 6)
			{
				if (iVar3 == 0)
				{
				}
				else
				{
					__LIB_12__::func_606(uParam0, iVar3, &(Global_1359489.f_361.f_258[iVar3 /*6*/].f_2), 0, 1, 1);
				}
				iVar3++;
			}
		}
	}
}

void func_138(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	var uVar4;
	iVar0 = __LIB_7__::func_379(*uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 761950088)
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, uParam0->f_1);
		MISC::_INT_TO_STRING(uParam0->f_2, "%i", &uVar4);
		sVar3 = __LIB_1__::func_925(&uVar4, joaat("COLOR_PURE_WHITE"));
		sVar2 = __LIB_1__::func_464(uParam0->f_3, 0);
		__LIB_12__::func_606(uParam0, 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, MISC::_CREATE_VAR_STRING(168, iVar0, sVar2, sVar3, sVar1), 0, bParam1, 0);
	}
	else
	{
		__LIB_12__::func_606(uParam0, 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, HUD::_GET_LABEL_TEXT_BY_HASH(iVar0), 0, bParam1, 0);
	}
}

bool func_139(int iParam0, int* iParam1, bool bParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	bool bVar13;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar12 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_4__::func_50(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_13__::func_291(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, bParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_6__::func_814(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							__LIB_6__::func_750(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							__LIB_13__::func_287(iParam1, uParam4, iParam0, bVar13, sParam9, bParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::_IS_PED_CARRYING(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_1__::func_148(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_2__::func_526(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_10__::func_553(iParam1, bParam2);
	}
	return bVar5;
}

bool func_140(char* sParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_652())
	{
		iVar0 = 0;
		while (iVar0 < 27)
		{
			if (__LIB_0__::func_272(Global_35, 0))
			{
				if (__LIB_0__::func_272(__LIB_0__::func_271(iVar0), 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(__LIB_0__::func_271(iVar0), Global_35, 1, 1))
					{
						StringCopy(sParam0, __LIB_1__::func_464(iVar0, 0), 32);
						return true;
					}
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(__LIB_0__::func_271(iVar0)))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, __LIB_0__::func_271(iVar0)))
						{
							StringCopy(sParam0, __LIB_1__::func_464(iVar0, 0), 32);
							return true;
						}
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, __LIB_0__::func_271(iVar0)))
						{
							StringCopy(sParam0, __LIB_1__::func_464(iVar0, 0), 32);
							return true;
						}
						if (PED::GET_MOUNT(Global_35) != 0)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_MOUNT(Global_35), __LIB_0__::func_271(iVar0)))
							{
								StringCopy(sParam0, __LIB_1__::func_464(iVar0, 0), 32);
								return true;
							}
						}
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Global_35))
						{
							iVar1 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, __LIB_0__::func_271(iVar0)))
							{
								StringCopy(sParam0, __LIB_1__::func_464(iVar0, 0), 32);
								return true;
							}
							if (VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
							{
								if ((((((VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 0) != 0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 0), __LIB_0__::func_271(iVar0))) || (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 1) != 0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 1), __LIB_0__::func_271(iVar0)))) || (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 2) != 0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 2), __LIB_0__::func_271(iVar0)))) || (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 3) != 0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 3), __LIB_0__::func_271(iVar0)))) || (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 4) != 0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 4), __LIB_0__::func_271(iVar0)))) || (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 5) != 0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, 5), __LIB_0__::func_271(iVar0))))
								{
									StringCopy(sParam0, __LIB_1__::func_464(iVar0, 0), 32);
									return true;
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_141(int iParam0, int iParam1, var uParam2, float fParam3, bool bParam4, char* sParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *iParam0, iParam1->f_56, 0);
	bVar0 = __LIB_5__::func_439(bParam4 >= 0f, bParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	__LIB_13__::func_893(iParam0, iParam1, uParam2, bVar0);
	__LIB_6__::func_741(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_13__::func_287(iParam1, uParam2, iParam0, bVar1, sParam5, bVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_6__::func_789(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				__LIB_3__::func_109(iParam1);
			}
		}
	}
}

bool func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_6(iParam0))
	{
		return true;
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	iVar1 = -1;
	iVar2 = 0;
	bVar3 = false;
	iVar4 = 1;
	if (iVar0 == 1)
	{
		iVar5 = __LIB_0__::func_76(iParam0);
		if (iVar5 == 23)
		{
			iVar4 = 1;
			iVar1 = 134;
			bVar3 = false;
			iVar2 = 0;
			if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			bVar3 = false;
			if (__LIB_0__::func_627(134, 0) && __LIB_5__::func_543(1) <= 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 0;
			}
			if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 16)
		{
			iVar4 = 1;
			if (__LIB_9__::func_6(134, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (__LIB_9__::func_6(138, 1, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 46)
		{
			if (__LIB_1__::func_187(58))
			{
				iVar4 = 1;
				iVar1 = 140;
				if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
				return iVar4;
			}
			else
			{
				return true;
			}
		}
		else if (iVar5 == 17)
		{
			iVar4 = 1;
			iVar1 = 134;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if (__LIB_1__::func_187(5) && __LIB_1__::func_185(12))
			{
				iVar1 = 21;
				if (__LIB_9__::func_6(iVar1, 1, 0, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar5 == 15)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 59;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 33)
		{
			iVar1 = 99;
		}
		else if (iVar5 == 73)
		{
			iVar1 = 10;
			iVar2 = 1;
		}
		else if (iVar5 == 24)
		{
			iVar1 = 21;
			iVar2 = 0;
		}
		else if (iVar5 == 10)
		{
			iVar4 = 1;
			iVar1 = 63;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			if ((__LIB_1__::func_25(Global_1835011[11 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1)) && __LIB_1__::func_25(Global_1347702[61 /*49*/].f_15, 1))
			{
				iVar1 = 66;
				iVar2 = 1;
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 59;
			iVar2 = 0;
			if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar5 == 55)
		{
			iVar1 = 64;
		}
	}
	else if (iVar0 == 8)
	{
		iVar6 = __LIB_0__::func_76(iParam0);
		if (iVar6 == 0)
		{
			iVar4 = 1;
			if (__LIB_3__::func_751(15))
			{
				if (__LIB_9__::func_832(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 97;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 2)
		{
			iVar1 = 96;
		}
		else if (iVar6 == 61)
		{
			iVar4 = 1;
			if (__LIB_3__::func_751(15))
			{
				if (__LIB_9__::func_832(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (__LIB_3__::func_751(9))
			{
				if (__LIB_9__::func_832(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (!__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1))
			{
				iVar1 = 63;
				iVar2 = 0;
			}
			else
			{
				iVar1 = 97;
				iVar2 = 1;
			}
			if (__LIB_9__::func_6(iVar1, iVar2, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 62)
		{
			iVar4 = 1;
			if (__LIB_3__::func_751(15))
			{
				if (__LIB_9__::func_832(15, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			if (__LIB_3__::func_751(9))
			{
				if (__LIB_9__::func_832(9, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			iVar1 = 112;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 63;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 64)
		{
			iVar1 = 65;
			iVar2 = 1;
		}
		else if (iVar6 == 76)
		{
			iVar1 = 134;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 37;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
		else if (iVar6 == 82)
		{
			iVar1 = 83;
			iVar2 = 1;
		}
		else if (iVar6 == 96)
		{
			iVar1 = 2;
		}
		else if (iVar6 == 1)
		{
			iVar1 = 96;
			iVar2 = 1;
		}
		else if (iVar6 == 97)
		{
			iVar4 = 1;
			if (__LIB_1__::func_25(Global_1835011[6 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[13 /*74*/].f_1, 1))
			{
				iVar1 = 112;
				iVar2 = 1;
				bVar3 = false;
				if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
				{
				}
				else
				{
					iVar4 = 0;
				}
			}
			return iVar4;
		}
		else if (iVar6 == 114)
		{
			if (__LIB_1__::func_25(Global_1835011[9 /*74*/].f_1, 1))
			{
				iVar1 = 0;
				iVar2 = 1;
			}
		}
		else if (iVar6 == 134)
		{
			iVar4 = 1;
			iVar1 = 95;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			iVar1 = 138;
			if (__LIB_9__::func_6(iVar1, 0, 0, 0, 0))
			{
			}
			else
			{
				iVar4 = 0;
			}
			return iVar4;
		}
	}
	if (iVar1 == -1)
	{
		return true;
	}
	if (__LIB_9__::func_6(iVar1, iVar2, bVar3, 0, 0))
	{
		return true;
	}
	return false;
}

void func_143()
{
	if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

void func_144(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	}
}

void func_145(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (!ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(iParam0))
		{
			ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(iParam0);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
	}
}

void func_146()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLACE_CARRIABLE_ONTO_PARENT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HOGTIE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CUT_FREE"), false);
}

bool func_147(int iParam0, char* sParam1)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
		if (iVar0 == MISC::GET_HASH_KEY(sParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_148(int iParam0)
{
	if (iParam0 == joaat("PLAYER_THREE"))
	{
		Global_40.f_7729 = 61;
		Global_1905941 = 61;
	}
	Global_1935630.f_2 = iParam0;
	__LIB_12__::func_5(iParam0, 999);
	return true;
}

bool func_149(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_1__::func_138(uParam0, iParam3, iParam2) && !__LIB_14__::func_0(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
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
			__LIB_0__::func_860(1108822547);
		}
	}
	__LIB_1__::func_183(uParam0, 0, 0);
	__LIB_0__::func_245(iParam5);
	return true;
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!__LIB_14__::func_1(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
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

void func_151(var uParam0)
{
	bool bVar0;
	__LIB_1__::func_752();
	__LIB_0__::func_11(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		bVar0 = true;
		if (__LIB_12__::func_644(uParam0) == 1)
		{
			bVar0 = false;
		}
		else if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
		{
			__LIB_0__::func_869(0);
		}
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			HUD::DISPLAY_HUD(true);
			MAP::DISPLAY_RADAR(true);
		}
		AUDIO::STOP_AUDIO_SCENES();
		if (__LIB_12__::func_644(uParam0) != 0)
		{
			UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
			__LIB_5__::func_102();
			if (__LIB_12__::func_644(uParam0) == 1)
			{
				__LIB_4__::func_683(uParam0->f_174, 1);
			}
		}
		if (__LIB_0__::func_1(uParam0->f_172, 67108864))
		{
			__LIB_12__::func_868(1);
			__LIB_0__::func_8(&(uParam0->f_172), 67108864);
		}
		__LIB_1__::func_723(0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
			__LIB_1__::func_733(Global_35);
			PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
	}
	if (__LIB_12__::func_644(uParam0) == 3)
	{
		__LIB_12__::func_627(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
	}
	__LIB_8__::func_993(uParam0->f_174);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_239(uParam0->f_174);
		__LIB_12__::func_895(uParam0);
	}
	__LIB_12__::func_739(uParam0);
	__LIB_1__::func_564(0);
	__LIB_13__::func_29(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

struct<17> func_152(char* sParam0, char* sParam1)
{
	struct<17> Var0;
	Var0.f_1 = sParam0;
	Var0.f_15 = sParam1;
	return Var0;
}

int func_153(int iParam0)
{
	return Global_40.f_9.f_21.f_1[iParam0];
}

void func_154(int iParam0, char* sParam1, int iParam2)
{
	DECORATOR::DECOR_SET_INT(iParam0, sParam1, iParam2);
}

bool func_155(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (__LIB_11__::func_840(iParam0, uParam1))
		{
			if (!__LIB_0__::func_27(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				__LIB_2__::func_624(uParam2, 0, 0, 1, 0);
				__LIB_0__::func_7(&(uParam1->f_10), 1);
			}
			return true;
		}
		else if (__LIB_0__::func_27(uParam1->f_10, 1))
		{
			__LIB_2__::func_363(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			__LIB_0__::func_8(&(uParam1->f_10), 1);
		}
	}
	return false;
}

bool func_156(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_12__::func_655(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1792 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1793 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1795 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1793)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1794 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1794 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1795)
		{
			uParam0->f_1797 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1798 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_12__::func_850(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_13__::func_102(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_12__::func_889(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_13__::func_57(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_12__::func_655(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1580 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_12__::func_692(uParam0, uParam0->f_1580))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1584 >= 0)
					{
						__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1584 >= 0)
				{
					__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1584 /*41*/].f_27, uParam0->f_1241[uParam0->f_1584 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_12__::func_983(uParam0);
			}
		}
	}
	bVar0 = __LIB_12__::func_922(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_12__::func_655(uParam0, 268435456) && bVar1) && !__LIB_12__::func_655(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1798);
			if (uParam0->f_1580 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_912[uParam0->f_1580 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1798)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_12__::func_693(uParam0, 268435456);
			}
		}
		if (__LIB_12__::func_687(uParam0, 64) || (uParam0->f_1580 >= 0 && !__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1580 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_12__::func_655(uParam0, 131072))
	{
		__LIB_12__::func_802(uParam0);
		if (!__LIB_12__::func_655(uParam0, 262144))
		{
			if ((bVar0 && __LIB_12__::func_655(uParam0, 65536)) || __LIB_12__::func_655(uParam0, 131072))
			{
				__LIB_12__::func_693(uParam0, 32768);
				__LIB_12__::func_691(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1665 = 1;
				__LIB_13__::func_57(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_103(uParam0, iParam5);
		__LIB_12__::func_694(uParam0);
		if (!__LIB_12__::func_695(uParam0, 1))
		{
			__LIB_12__::func_753(uParam0);
		}
		__LIB_12__::func_696(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_12__::func_958(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_12__::func_929(uParam0);
			break;
		case 2:
			__LIB_12__::func_923(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1768));
				__LIB_12__::func_691(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_12__::func_655(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_12__::func_697(uParam0))
				{
					__LIB_12__::func_691(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_12__::func_698(uParam0))
				{
					__LIB_12__::func_691(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1581 >= 0 || __LIB_0__::func_264(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_851(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1768));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_12__::func_691(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_12__::func_691(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_13__::func_57(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_851(uParam0, iParam5))
			{
				__LIB_13__::func_57(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_157(var uParam0)
{
	if (__LIB_0__::func_474(163))
	{
		__LIB_2__::func_355(163);
	}
}

void func_158(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
		if (!__LIB_14__::func_149(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
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
		__LIB_1__::func_550(&(Global_1946804.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_159(var uParam0)
{
	if (__LIB_13__::func_322(uParam0))
	{
		if (__LIB_12__::func_639(uParam0, 64))
		{
			__LIB_13__::func_258(uParam0);
			__LIB_12__::func_837(uParam0, 2);
			__LIB_13__::func_147(uParam0);
		}
		else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			__LIB_12__::func_837(uParam0, 3);
		}
		else
		{
			__LIB_0__::func_11(uParam0);
			__LIB_12__::func_837(uParam0, 4);
		}
	}
}

bool func_160(var uParam0)
{
	if (Global_1935630.f_12 || ENTITY::IS_ENTITY_DEAD(iLocal_14))
	{
		return true;
	}
	return false;
}

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!__LIB_13__::func_97(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
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

void func_162(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
		if (!__LIB_13__::func_421(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
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
		__LIB_1__::func_550(&(Global_1946804.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_163(int iParam0, int iParam1)
{
	struct<9> Var0;
	__LIB_13__::func_11(iParam0);
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	if (iParam1 == Global_35)
	{
		Var0 = { 0f, 0f, 1f };
	}
	else
	{
		Var0 = { 0f, 0.55f, 0.6f };
	}
	Var0.f_3 = iParam1;
	Var0.f_7 = -1;
	Var0.f_8 = 4;
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
}

int func_164(var uParam0)
{
	return iLocal_18;
}

bool func_165(int iParam0)
{
	return __LIB_0__::func_27(iLocal_21, iParam0);
}

bool func_166(int iParam0)
{
	return __LIB_0__::func_27(iLocal_20, iParam0);
}

void func_167(int iParam0)
{
	__LIB_1__::func_681(&iLocal_21, iParam0);
}

void func_168(int iParam0)
{
	__LIB_1__::func_683(&iLocal_21, iParam0);
}

void func_169(int iParam0, float fParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(fParam1->f_3), 1))
	{
		__LIB_11__::func_82(fParam1);
		if (__LIB_2__::func_640(iParam0, fParam7, iParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_3__::func_518(fParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

void func_170(var uParam0, bool bParam1)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2581)))
	{
		__LIB_0__::func_8(&(uParam0->f_172), 262144);
		return;
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
	{
		if (__LIB_14__::func_52(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
		{
			__LIB_0__::func_7(&(uParam0->f_172), 1048576);
		}
		if (!__LIB_0__::func_1(uParam0->f_172, 524288))
		{
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				__LIB_0__::func_7(&(uParam0->f_172), 524288);
			}
		}
	}
}

int func_171(var uParam0)
{
	if (!__LIB_2__::func_618(uParam0))
	{
		return 0;
	}
	if (__LIB_2__::func_611(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (__LIB_0__::func_485() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_172(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 512))
	{
		if (!__LIB_14__::func_97(uParam0))
		{
			return false;
		}
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 128);
		if (__LIB_12__::func_838(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			__LIB_0__::func_7(&(uParam0->f_172), 512);
		}
		return false;
	}
	__LIB_12__::func_773(0, 1, 1, 1);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_751, false))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 1024);
		__LIB_0__::func_8(&(uParam0->f_172), 256);
		return true;
	}
	return false;
}

void func_173(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 27)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 4) && uParam0->f_371[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_371[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 64) && __LIB_12__::func_727(uParam0, iParam1, 0))
				{
					__LIB_5__::func_123(uParam0, uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_371[iParam1 /*18*/].f_3 >= 0 && uParam0->f_371[iParam1 /*18*/].f_5 >= 0) && uParam0->f_371[iParam1 /*18*/].f_3 != uParam0->f_371[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			__LIB_14__::func_100(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_174(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_12__::func_928(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_14__::func_100(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_5__::func_51(&(uParam0->f_1768)) >= IntToFloat((uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_12__::func_775(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_1__::func_104(&(uParam0->f_1667), uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_371[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1581 = iParam1;
			break;
	}
}

void func_175(var uParam0)
{
	__LIB_1__::func_683(uParam0, 256);
}

int func_176(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	int iVar3;
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (__LIB_0__::func_665(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (__LIB_0__::func_665(iParam2, iParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		__LIB_2__::func_259(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (__LIB_1__::func_568(sParam1))
			{
				return 1;
			}
		}
		else if (__LIB_1__::func_104(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_177(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return;
	}
	CAM::SET_GAMEPLAY_HINT_FOV(fParam4);
	fVar0 = __LIB_1__::func_874(vParam1, 1);
	if (!__LIB_0__::func_51(&(uParam0->f_3), 32))
	{
		if (fVar0 > 60f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		CAM::_0x1F6EBD94680252CE(iVar1, -1082130432 /* Float: -1f */);
		CAM::_0xF48664E9C83825E3(iVar2, -1082130432 /* Float: -1f */);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	__LIB_2__::func_259(uParam0);
	__LIB_0__::func_7(&(uParam0->f_3), 1);
}

int func_178(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	if (bParam1 && PED::IS_PED_DEAD_OR_DYING(*iParam0, true))
	{
		return 1;
	}
	if (!__LIB_2__::func_364(*iParam0, 0, 0, 0))
	{
		__LIB_1__::func_480(iParam0);
		return 1;
	}
	return 0;
}

int func_179(var uParam0)
{
	__LIB_0__::func_11(uParam0);
	return 6;
}

void func_180(var uParam0)
{
	float fVar0;
	fVar0 = 30f;
	__LIB_0__::func_568(Global_1347702[uParam0->f_174 /*49*/].f_24, fVar0, 0);
	__LIB_1__::func_206(Global_1347702[uParam0->f_174 /*49*/].f_24, fVar0, 0);
	__LIB_1__::func_572(Global_1347702[uParam0->f_174 /*49*/].f_24, fVar0, 0, 0, 0, 0, 0);
	PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, fVar0, 1, 0);
}

void func_181(var uParam0)
{
	__LIB_1__::func_564(0);
}

void func_182(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_1900073.f_194) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Global_1900073.f_194 = iParam0;
	}
}

bool func_183(int* iParam0)
{
	if (*iParam0 != joaat("REL_NO_RELATIONSHIP"))
	{
		return true;
	}
	if (PED::ADD_RELATIONSHIP_GROUP("WarVeteran", iParam0))
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, *iParam0, joaat("REL_WILD_ANIMAL_PREDATOR"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("REL_WILD_ANIMAL_PREDATOR"), *iParam0);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, *iParam0, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), *iParam0);
		return true;
	}
	return false;
}

int func_184(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900073.f_26[iParam0 /*30*/].f_11) && Global_1900073.f_147[iParam0] == 1)
	{
		return Global_1900073.f_26[iParam0 /*30*/].f_11;
	}
	return 0;
}

int func_185(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900073.f_26[iParam0 /*30*/].f_12) && Global_1900073.f_147[iParam0] == 1)
	{
		return Global_1900073.f_26[iParam0 /*30*/].f_12;
	}
	return 0;
}

bool func_186(int iParam0)
{
	return Global_1900073.f_26[iParam0 /*30*/].f_17 == 1f;
}

void func_187(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		if (!PED::IS_PED_FATALLY_INJURED(Global_35))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
	}
}

int func_188(int iParam0)
{
	return Global_1900073.f_164[iParam0];
}

void func_189(var uParam0, var uParam1, bool bParam2)
{
	struct<4> Var0;
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	__LIB_7__::func_465(*uParam0, &Var0);
	if (bParam2)
	{
		*uParam1 = __LIB_1__::func_391(*uParam0, 0, 0, 14592);
		__LIB_3__::func_730(*uParam0, 0, 0, 1, 1, 0);
		PATHFIND::SET_ROADS_IN_AREA(Var0, Var0.f_3, 0, 1, 0);
	}
	else
	{
		if (PED::_0x91A5F9CBEBB9D936(*uParam1))
		{
			__LIB_0__::func_484(uParam1, *uParam0, 0);
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var0.f_3, 0, 1);
	}
}

void func_190(int iParam0)
{
	if (__LIB_1__::func_650())
	{
		__LIB_8__::func_666(4);
		if (iParam0 == 1)
		{
			__LIB_8__::func_666(8);
		}
	}
	else if (iParam0 == 1)
	{
		__LIB_13__::func_906();
	}
}

bool func_191(var uParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, float fParam9, int iParam10)
{
	if (__LIB_0__::func_272(*iParam1, 1))
	{
		__LIB_13__::func_630(iParam1, vParam3, iParam6);
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam2))
	{
		return false;
	}
	*iParam1 = __LIB_12__::func_885(uParam0, iParam2, vParam3, iParam6, 1, 1, iParam10, 1, 1, bParam7, 1, 0);
	if (bParam8)
	{
		PED::_SET_PED_SCALE(*iParam1, fParam9);
	}
	if (__LIB_0__::func_272(*iParam1, 1))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
		__LIB_13__::func_630(iParam1, vParam3, iParam6);
		return true;
	}
	return false;
}

void func_192(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 >= 0)
	{
		__LIB_9__::func_827(iParam0, 0, 0, 0);
	}
	if (bParam2)
	{
		POPULATION::_0xF45E46DEECF7DF6E(14592, 0, 0, -1, -1);
	}
	else
	{
		POPULATION::_0xF45E46DEECF7DF6E(14336, 0, 0, -1, -1);
	}
	if (bParam1)
	{
		PED::_0xAB0D553FE20A6E25(0f);
	}
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xBA0980B5C0A11924(0f);
}

bool func_193(int iParam0, char* sParam1, int iParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return false;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return false;
	}
	if (ENTITY::_0x29BA9F78321E5A6C(iParam0, sParam1, iParam2, fParam3, fParam4, iParam5, 0, 0, 0, iParam6, 0, iParam7))
	{
		return true;
	}
	return false;
}

void func_194(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && PED::IS_PED_IN_GROUP(*iParam0))
	{
		PED::REMOVE_PED_FROM_GROUP(*iParam0);
	}
}

bool func_195()
{
	int iVar0;
	if (__LIB_0__::func_237(__LIB_0__::func_399(Global_35, 1, 0, 0)))
	{
		iVar0 = WEAPON::_0x7E7B19A4355FEE13(Global_35, WEAPON::_0x6CA484C9A7377E4F(Global_35, 1));
		if (iVar0 == joaat("AMMO_ARROW_FIRE") || iVar0 == joaat("AMMO_ARROW_DYNAMITE"))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

int func_196(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	char* sVar0;
	sVar0 = __LIB_13__::func_637(uParam1, iParam2);
	if (__LIB_11__::func_764(uParam1, iParam2))
	{
		if (__LIB_6__::func_903(sVar0))
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (!__LIB_0__::func_272(*iParam3, 1))
	{
		return 4;
	}
	if (__LIB_0__::func_665(Global_35, *iParam3, 1, 1) > fParam5)
	{
		if (bParam6)
		{
			__LIB_13__::func_638(uParam1, iParam2);
		}
		return 7;
	}
	if (__LIB_6__::func_904())
	{
		if (bParam4)
		{
			__LIB_5__::func_20(0, 0);
		}
		return 8;
	}
	if (__LIB_12__::func_876(uParam0, sVar0, 0))
	{
		__LIB_13__::func_638(uParam1, iParam2);
		return 1;
	}
	return 6;
}

bool func_197(bool bParam0)
{
	float fVar0;
	fVar0 = 0.2f;
	if (!bParam0)
	{
		fVar0 = 0f;
	}
	if (PLAYER::_0x3A6AE4EEE30370FE(PLAYER::PLAYER_ID(), 1) > fVar0)
	{
		return true;
	}
	return false;
}

void func_198(var uParam0)
{
	__LIB_0__::func_11(uParam0, &iLocal_15);
}

void func_199(bool bParam0, vector3 vParam1)
{
	if (bParam0)
	{
		__LIB_1__::func_724(16);
	}
	else
	{
		__LIB_0__::func_635(16);
	}
	Global_1900383.f_378.f_12 = { vParam1 };
}

float func_200(var uParam0)
{
	float fVar0;
	float fVar1;
	if (!__LIB_14__::func_63(uParam0))
	{
		return 0f;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_348);
	fVar1 = ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348);
	return (fVar0 - fVar1);
}

void func_201()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM_IN_AIR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_RADIAL_MENU_NAV_UD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_RADIAL_MENU_NAV_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), true);
	__LIB_1__::func_538(0);
}

int func_202(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, vector3 vParam5)
{
	if (!__LIB_1__::func_904(iParam0))
	{
		return 0;
	}
	if (__LIB_5__::func_744(iParam0) == -1)
	{
		return 0;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(__LIB_5__::func_744(iParam0), iParam1, iParam2, bParam3, bParam4, vParam5);
}

bool func_203(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11)
{
	int iVar0;
	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*iParam4 = 1;
				return false;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			__LIB_7__::func_438(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, fParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				__LIB_5__::func_730(&(iParam3->f_1), iParam5);
				if (!__LIB_0__::func_86(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, __LIB_0__::func_173(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*iParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_204(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_2 = 0;
	if (!bParam2)
	{
		uParam0->f_6 = { 0f, 0f, 0f };
	}
	if (bParam1 && TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
	{
		TASK::_0x0365000D8BF86531(&(uParam0->f_1));
	}
	*uParam0 = 0;
}

void func_205(int iParam0)
{
	LAW::_0x819ADD5EF1742F47(iParam0, 2);
	LAW::_0x819ADD5EF1742F47(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
	PED::_0xBD75500141E4725C(iParam0, joaat("LAW"));
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 39, true);
	TASK::_0x9DE63896B176EA94(iParam0, 0);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iParam0, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, joaat("GROUP_REVOLVER"), 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, joaat("GROUP_SNIPER"), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

int func_206(int iParam0)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return 0;
	}
	if (__LIB_1__::func_932(iParam0, 2))
	{
		return 5;
	}
	if (__LIB_1__::func_931(iParam0) > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
	{
		return __LIB_8__::func_978(__LIB_1__::func_931(iParam0));
	}
	return 0;
}

bool func_207()
{
	if (__LIB_10__::func_786(__LIB_2__::func_702(), 1))
	{
		return true;
	}
	if (__LIB_0__::func_980(__LIB_1__::func_898(), 1))
	{
		return true;
	}
	if (__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		return true;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1934266.f_151))
	{
		if (__LIB_11__::func_433())
		{
			return true;
		}
	}
	return false;
}

bool func_208(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_21(iParam0, 8))
	{
		return false;
	}
	if (!__LIB_1__::func_205(Global_35, __LIB_0__::func_559(iParam0), 1, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return false;
	}
	return true;
}

int func_209()
{
	return __LIB_14__::func_206(__LIB_1__::func_905(__LIB_1__::func_898()));
}

bool func_210(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, float fParam7, int iParam8, float fParam9, float fParam10, float fParam11)
{
	int iVar0;
	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return false;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			__LIB_7__::func_438(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, fParam7, iParam8, fParam9, fParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				__LIB_5__::func_730(&(iParam3->f_1), iParam5);
				if (!__LIB_0__::func_86(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, __LIB_0__::func_173(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*bParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_211(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 1;
			break;
		case 6:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 32;
			break;
		case 7:
			iVar0 = 16;
			break;
		case 8:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_212(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		return;
	}
	else
	{
		if (PAD::IS_CONTROL_PRESSED(2, iParam1))
		{
			CAM::SET_GAMEPLAY_ENTITY_HINT(iParam0, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, iParam1))
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
}

int func_213(int iParam0, bool bParam1)
{
	if (__LIB_1__::func_894(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_1__::func_895(5000))
		{
			return 1;
		}
	}
	switch (__LIB_0__::func_64(0))
	{
		case 0:
			return 0;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return 1;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return 1;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_214(int iParam0)
{
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
	}
	__LIB_14__::func_205(iParam0);
}

bool func_215(vector3 vParam0, int iParam3)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam3 /*446*/].f_25))
	{
		return false;
	}
	return VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1914319.f_3[iParam3 /*446*/].f_25, vParam0);
}

void func_216()
{
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(7);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(6);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(0);
}

int func_217()
{
	return Global_1572864.f_1;
}

void func_218()
{
	if (__LIB_11__::func_940(ENTITY::GET_ENTITY_MODEL(Global_35)) == joaat("JOHN"))
	{
		PED::_0x2B4CE170DE09F346(Global_35, joaat("DUTCH_GANG"));
		PED::_0x2B4CE170DE09F346(Global_35, joaat("JOHN"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("PLAYER"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("PLAYER_JOHN"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("JOHN_CONV_CLOSER_REPLIES"));
	}
}

int func_219(int iParam0, var uParam1, var uParam2)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	*uParam1 = { Global_40.f_1095.f_1[iParam0 /*436*/].f_427 };
	*uParam2 = Global_40.f_1095.f_1[iParam0 /*436*/].f_430;
	return 1;
}

int func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_0__::func_378(iParam0, &iVar0, &iVar1);
	if (!__LIB_0__::func_447(iParam0, 65536) && !__LIB_0__::func_447(iParam0, 32768))
	{
		if (__LIB_0__::func_462(iVar0, iVar1))
		{
			return 1;
		}
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar2 /*3*/].f_2 == iParam0)
		{
			return Global_40.f_7756[iVar2 /*3*/].f_1;
		}
		iVar2++;
	}
	return 0;
}

int func_221(bool bParam0)
{
	if (!bParam0 && __LIB_0__::func_898(373691918))
	{
		LAW::_0xE9AC8466ABE484BB(false, 0);
		LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), 1, 0);
		return 0;
	}
	LAW::_0xE9AC8466ABE484BB(bParam0, 0);
	return 1;
}

void func_222(var uParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(uParam0);
	if (iParam1 == 1)
	{
		__LIB_0__::func_716(1);
	}
}

char* func_223(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char* sVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
	{
		sVar0 = __LIB_1__::func_569(Global_1894899.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = __LIB_1__::func_911(__LIB_2__::func_752(Global_36));
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
				*bParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
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
				*bParam6 = 1;
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
				*bParam6 = 1;
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

int func_224()
{
	return Global_1572864.f_21;
}

void func_225()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_1900383.f_317.f_2[iVar0 /*5*/] = -1;
		Global_1900383.f_317.f_2[iVar0 /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[iVar0 /*5*/].f_2 = 0f;
		Global_1900383.f_317.f_2[iVar0 /*5*/].f_3 = -1;
		Global_1900383.f_317.f_2[iVar0 /*5*/].f_4 = 0f;
		iVar0++;
	}
}

int func_226(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_1900383[iParam0 /*45*/].f_41;
}

void func_227(int iParam0, float fParam1)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_420.f_1 = fParam1;
}

void func_228(int iParam0, int iParam1)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_41 = iParam1;
}

void func_229(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_42 = 0;
}

void func_230(int iParam0)
{
	int iVar0;
	int iVar1;
	VOLUME::_0x748C5F51A18CB8F0(0);
	if (!__LIB_0__::func_630(iParam0))
	{
		return;
	}
	__LIB_12__::func_586(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (__LIB_0__::func_20(iVar0))
		{
			if (__LIB_10__::func_29(__LIB_5__::func_235(iVar0, 1, 1)) == iParam0)
			{
				__LIB_5__::func_496(iVar0, 0);
				__LIB_10__::func_843(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (__LIB_0__::func_69(iVar1))
		{
			if (__LIB_1__::func_905(iVar1) == iParam0)
			{
				__LIB_12__::func_60(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_231(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 12;
	iVar2 = __LIB_0__::func_357(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (__LIB_0__::func_157(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	if (__LIB_0__::func_451(-1586649372) && __LIB_0__::func_157(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			__LIB_1__::func_184(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 525
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 656
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1417; //curOff = 691
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 786
				__LIB_1__::func_184(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1417; //curOff = 807
				if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((__LIB_0__::func_218(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				Jump @1417; //curOff = 1132
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 1230
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (__LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			switch (__LIB_0__::func_357(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]) || __LIB_0__::func_192(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_232(int iParam0)
{
	return BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

int func_233(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return -1;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(*iParam1))
	{
		return -1;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return -1;
	}
	iVar1 = ENTITY::_0x84CCF9A12942C83D(iParam0, iVar0, 1, 1, 0, 0);
	if (iVar1 > 0)
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
			if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar3))
			{
				iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4) && __LIB_0__::func_125(iVar4))
				{
					iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
					ITEMSET::ADD_TO_ITEMSET(iVar5, *iParam1);
				}
			}
			iVar2++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return ITEMSET::GET_ITEMSET_SIZE(*iParam1);
}

int func_234(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return 0;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(iParam1);
	if (iParam0 < 0 || iParam0 >= iVar0)
	{
		return 0;
	}
	iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam0, iParam1);
	if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar1))
	{
		iVar2 = MISC::_GET_ENTITY_FROM_ITEM(iVar1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
		{
			return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
		}
	}
	return 0;
}

void func_235(int iParam0, char* sParam1)
{
	int iVar0;
	if (!__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_TAG(Global_1945938[iVar0 /*18*/].f_3, sParam1);
	}
}

void func_236(int iParam0)
{
	__LIB_1__::func_211(iParam0, 8);
}

void func_237(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 26)
	{
		Global_1572864.f_10 = __LIB_9__::func_458(iParam0);
	}
	else
	{
		Global_1572864.f_10 = -1;
	}
}

void func_238(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_9__::func_32(cParam0, iParam1, &iVar0))
	{
		return;
	}
	__LIB_0__::func_8(&(cParam0->f_5423[iVar0 /*65*/].f_6), iParam2);
}

bool func_239(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_895(Global_1835011[10 /*74*/].f_1);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

void func_240(var uParam0)
{
	if (uParam0->f_3)
	{
		if (__LIB_0__::func_139(uParam0->f_5))
		{
			__LIB_1__::func_281(&(uParam0->f_5), 1, 1);
		}
		if (__LIB_0__::func_139(uParam0->f_6))
		{
			__LIB_1__::func_281(&(uParam0->f_6), 1, 1);
		}
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_9 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_10 = 0;
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_7 = "";
		uParam0->f_8 = "";
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
		uParam0->f_13 = -1;
		if (uParam0->f_2 != 0)
		{
			GRAPHICS::ANIMPOSTFX_STOP("MissionChoice");
		}
		uParam0->f_2 = 0;
		AUDIO::_0x9428447DED71FC7E("player_decision_moment_scenes");
		HUD::_UIPROMPT_CLEAR_HORIZONTAL_ORIENTATION(uParam0->f_15);
	}
}

bool func_241(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	if (!__LIB_0__::func_75(&(cParam0->f_13109)))
	{
		__LIB_1__::func_283(&(cParam0->f_13109), 0);
	}
	else if (__LIB_0__::func_265(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (__LIB_3__::func_358(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < __LIB_4__::func_955(cParam0->f_5421))
		{
			iVar2 = __LIB_4__::func_956(cParam0->f_5421, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar3 = __LIB_4__::func_956(cParam0->f_5421, iVar1);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3) && !PED::_0xA0BC8FAED8CFEB3C(iVar3))
					{
						iVar0 = 0;
					}
				}
				else if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2)) && VEHICLE::_IS_DRAFT_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2)))
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar5 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2), iVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar5))
						{
							if (!PED::_0xA0BC8FAED8CFEB3C(iVar5))
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
				}
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iLocal_14))
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_14);
		iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
		if (ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar7))
			{
				iVar8 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar8) && !PED::_0xA0BC8FAED8CFEB3C(iVar8))
				{
					iVar0 = 0;
				}
			}
			else if ((!ENTITY::IS_ENTITY_DEAD(iVar7) && ENTITY::IS_ENTITY_A_VEHICLE(iVar7)) && VEHICLE::_IS_DRAFT_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7)))
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 6)
				{
					iVar10 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7), iVar9);
					if (!ENTITY::IS_ENTITY_DEAD(iVar10))
					{
						if (!PED::_0xA0BC8FAED8CFEB3C(iVar10))
						{
							iVar0 = 0;
						}
					}
					iVar9++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_242(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	if (*uParam0 == 0)
	{
		if (!__LIB_0__::func_139(uParam0->f_5) || !__LIB_0__::func_139(uParam0->f_6))
		{
			return false;
		}
		if ((HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945938[uParam0->f_5 /*18*/].f_3) && __LIB_0__::func_567(uParam0->f_5, 1)) || __LIB_1__::func_732(uParam0->f_5, 1))
		{
			if (__LIB_1__::func_530(uParam0->f_5, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 1;
			return true;
		}
		if ((HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945938[uParam0->f_6 /*18*/].f_3) && __LIB_0__::func_567(uParam0->f_6, 1)) || __LIB_1__::func_732(uParam0->f_6, 1))
		{
			if (__LIB_1__::func_530(uParam0->f_6, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 2;
			return true;
		}
		iVar0 = MISC::GET_GAME_TIMER();
		if (iVar0 > uParam0->f_9)
		{
			if (uParam0->f_1 == 1 || (uParam0->f_1 == 0 && uParam0->f_10 > 0))
			{
				if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1945938[uParam0->f_5 /*18*/].f_3))
				{
					fVar2 = __LIB_0__::func_486(uParam0->f_6, 1);
					fVar3 = __LIB_0__::func_486(uParam0->f_5, 1);
					if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
					{
						__LIB_1__::func_281(&(uParam0->f_5), 1, 1);
						if (uParam0->f_12 > 0)
						{
							iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
							uParam0->f_5 = __LIB_1__::func_877(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, iVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						else
						{
							uParam0->f_5 = __LIB_1__::func_877(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						__LIB_1__::func_281(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = __LIB_1__::func_877(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						if (uParam0->f_14 < uParam0->f_13)
						{
							__LIB_5__::func_793(uParam0->f_5, 1);
						}
						__LIB_0__::func_633(uParam0->f_5, 6, 1);
						__LIB_0__::func_633(uParam0->f_6, 6, 1);
						__LIB_1__::func_522(uParam0->f_5, 17, 1, 1);
						__LIB_1__::func_522(uParam0->f_6, 17, 1, 1);
					}
					else
					{
						uParam0->f_16 = fVar2;
						uParam0->f_17 = fVar3;
					}
				}
			}
			else if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1945938[uParam0->f_6 /*18*/].f_3))
			{
				fVar2 = __LIB_0__::func_486(uParam0->f_5, 1);
				fVar3 = __LIB_0__::func_486(uParam0->f_6, 1);
				if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
				{
					__LIB_1__::func_281(&(uParam0->f_6), 1, 1);
					if (uParam0->f_12 > 0)
					{
						iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
						uParam0->f_6 = __LIB_1__::func_877(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, iVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					else
					{
						uParam0->f_6 = __LIB_1__::func_877(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					__LIB_1__::func_281(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = __LIB_1__::func_877(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					if (uParam0->f_14 < uParam0->f_13)
					{
						__LIB_5__::func_793(uParam0->f_5, 1);
					}
					__LIB_0__::func_633(uParam0->f_5, 6, 1);
					__LIB_0__::func_633(uParam0->f_6, 6, 1);
					__LIB_1__::func_522(uParam0->f_5, 17, 1, 1);
					__LIB_1__::func_522(uParam0->f_6, 17, 1, 1);
				}
				else
				{
					uParam0->f_16 = fVar2;
					uParam0->f_17 = fVar3;
				}
			}
		}
		return false;
	}
	return true;
}

bool func_243(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	iVar1 = __LIB_1__::func_47(iParam0);
	if (iVar1 == -1)
	{
		return false;
	}
	iVar4 = __LIB_1__::func_55(iVar1);
	if (iVar4 == -1)
	{
		return false;
	}
	iVar5 = __LIB_1__::func_66(iVar4, iParam4);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_DYNAMIC_SCENARIO"), true);
	PED::SET_PED_RESET_FLAG(Global_35, 219, true);
	PED::SET_PED_RESET_FLAG(Global_35, 220, true);
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar5))
	{
		__LIB_1__::func_78(iVar4);
		if (Global_1392915.f_121[iVar1 /*20*/].f_2)
		{
			__LIB_1__::func_211(iVar4, 65536);
		}
		*uParam1 = { Global_1392915[iVar1 /*12*/] };
		uParam1->f_11 = iVar1;
		uParam1->f_12 = iVar4;
		uParam1->f_14 = { uParam1->f_6 };
		uParam1->f_17 = uParam1->f_9;
		uParam1->f_18 = BUILTIN::TO_FLOAT(uParam1->f_10);
		if (iParam3 == 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam1->f_23)
			{
				if (__LIB_1__::func_314(iVar4, uParam1->f_14, uParam1->f_17, iVar0, &iVar2, 0, 0))
				{
					uParam1->f_23[iVar0] = iVar2;
					if (iVar2 == Global_35)
					{
						uParam1->f_30 = iVar0;
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < uParam1->f_23)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_23[iVar0]))
			{
				if (uParam1->f_23[iVar0] == Global_35)
				{
					uParam1->f_30 = iVar0;
				}
			}
			iVar0++;
		}
		if (iParam0 == 0)
		{
			__LIB_1__::func_213(23, 1);
		}
		WEAPON::_HIDE_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 2, false);
		if (uParam1->f_12 != 5 && uParam1->f_12 != 6)
		{
			HUD::_HIDE_HUD_COMPONENT(372886907);
		}
		*uParam2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar5, uParam1, 34, 6500);
		__LIB_1__::func_79();
		__LIB_1__::func_227();
		__LIB_1__::func_821(Global_1392915[iVar1 /*12*/].f_4, 1, 0);
		Global_1899528.f_45[iVar4] = __LIB_0__::func_23();
		__LIB_1__::func_446(&(Global_1899528.f_45[iVar4]), 0, 0, Global_1899528.f_53[iVar4], 0, 0, 0, 0);
		__LIB_1__::func_308(iVar1);
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		if (__LIB_1__::func_80(iVar4, &uVar3))
		{
			__LIB_1__::func_228(uVar3);
		}
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar5);
		return true;
	}
	return false;
}

bool func_244(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_562(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_2286 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_2287 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_2289 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_2287)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_2288 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_2288 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_2289)
		{
			uParam0->f_2291 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_2292 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_5__::func_62(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_9__::func_214(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					__LIB_5__::func_376(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_574(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_5__::func_382(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_4__::func_562(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_2074 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_4__::func_575(uParam0, uParam0->f_2074))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_8__::func_897(uParam0);
			}
		}
	}
	bVar0 = __LIB_5__::func_500(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_4__::func_562(uParam0, 268435456) && bVar1) && !__LIB_4__::func_562(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292);
			if (uParam0->f_2074 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1406[uParam0->f_2074 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_2292)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_4__::func_532(uParam0, 131072);
				__LIB_4__::func_532(uParam0, 268435456);
			}
		}
		if (__LIB_4__::func_577(uParam0, 64) || (uParam0->f_2074 >= 0 && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_4__::func_562(uParam0, 131072))
	{
		__LIB_4__::func_984(uParam0);
		if (!__LIB_4__::func_562(uParam0, 262144))
		{
			if ((bVar0 && __LIB_4__::func_562(uParam0, 65536)) || __LIB_4__::func_562(uParam0, 131072))
			{
				__LIB_4__::func_532(uParam0, 32768);
				__LIB_4__::func_574(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_2159 = 1;
				__LIB_5__::func_382(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_9__::func_165(uParam0, iParam5);
		__LIB_4__::func_578(uParam0);
		if (!__LIB_4__::func_579(uParam0, 1))
		{
			__LIB_5__::func_63(uParam0);
		}
		__LIB_4__::func_580(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_5__::func_501(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_6__::func_920(uParam0);
			break;
		case 2:
			__LIB_5__::func_502(uParam0);
			break;
		case 3:
			if (__LIB_4__::func_581(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2074 /*41*/].f_27, uParam0->f_1735[uParam0->f_2074 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_2262));
				__LIB_4__::func_574(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_4__::func_562(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_4__::func_985(uParam0))
				{
					__LIB_4__::func_574(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_4__::func_986(uParam0))
				{
					__LIB_4__::func_574(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || __LIB_0__::func_264(&(uParam0->f_2262)) >= 15f)
			{
				if (__LIB_5__::func_308(uParam0, iParam5))
				{
					if (__LIB_4__::func_583(uParam0))
					{
						uParam0->f_2075 = __LIB_5__::func_64(uParam0);
						__LIB_1__::func_148(&(uParam0->f_2262));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_4__::func_574(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_4__::func_574(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_5__::func_382(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_5__::func_308(uParam0, iParam5))
			{
				__LIB_5__::func_382(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_245(int iParam0)
{
	if (iLocal_174 != iParam0)
	{
		iLocal_174 = iParam0;
	}
}

bool func_246(int iParam0)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_356(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return false;
	}
	if (PED::GET_MOUNT(Global_35) != iParam0)
	{
		return false;
	}
	return true;
}

int func_247(var uParam0, int iParam1)
{
	int iVar0;
	if (__LIB_4__::func_756(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
			HUD::_DISPLAY_HUD_COMPONENT(474191950);
			break;
		default:
			if (__LIB_4__::func_682())
			{
				if (!__LIB_4__::func_725(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (__LIB_4__::func_682())
	{
		__LIB_4__::func_755(uParam0, 512);
		__LIB_4__::func_765(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (__LIB_0__::func_164(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, __LIB_0__::func_165(uParam0->f_1016[uParam0->f_1684 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	__LIB_4__::func_782();
	__LIB_5__::func_218(uParam0, 1, 0);
	__LIB_5__::func_133(uParam0);
	if (__LIB_4__::func_725(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	__LIB_4__::func_765(uParam0, 4);
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1875))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1875);
	}
	if (__LIB_4__::func_756(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(__LIB_0__::func_166()))
	{
		CAM::_0x798BE43C9393632B(__LIB_0__::func_166());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1345[iVar0 /*22*/].f_2), __LIB_0__::func_166())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1345[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1345[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (__LIB_4__::func_725(uParam0, 524288) || iParam1 == 1)
	{
		__LIB_1__::func_625();
	}
	if (__LIB_4__::func_756(uParam0, 16))
	{
		if (__LIB_0__::func_81(uParam0) == 0)
		{
			if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
			{
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
		}
	}
	__LIB_4__::func_613();
	if (__LIB_4__::func_756(uParam0, 32))
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901))
	{
		if (!__LIB_4__::func_725(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1901) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
		}
	}
	__LIB_4__::func_786(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1921);
	}
	return 1;
}

void func_248()
{
	__LIB_1__::func_948(-1983417035, 1, 0f, 1, 0, 0, 0, 0);
	__LIB_1__::func_948(-1801221395, 1, 1f, 0, 0, 0f, 1, 0);
}

void func_249(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_444, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_444)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_501, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	if ((__LIB_4__::func_781(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_444, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_444))
	{
		if (!__LIB_0__::func_1(uParam0->f_501, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_269(iVar1))
		{
			if (__LIB_0__::func_572(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (__LIB_0__::func_1(uParam0->f_501, 512))
	{
		bVar2 = true;
	}
	if (__LIB_4__::func_711(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_444);
		__LIB_1__::func_625();
	}
}

void func_250(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_5__::func_430(&(uParam0->f_501), uParam0->f_512);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_5__::func_190(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_5__::func_186(uParam0);
	__LIB_4__::func_750(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_4__::func_784(uParam0, 4);
	__LIB_5__::func_187(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_4__::func_744(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_501, 128));
	if (!__LIB_0__::func_1(uParam0->f_501, 128))
	{
		__LIB_1__::func_625();
	}
}

void func_251(int iParam0)
{
	if (iLocal_19 != iParam0)
	{
		iLocal_19 = iParam0;
	}
}

void func_252(int iParam0)
{
	int iVar0;
	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		__LIB_12__::func_598(&iVar0);
	}
}

void func_253(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_3 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_254(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	Global_1934182[iParam0 /*18*/].f_8[iParam1] = __LIB_0__::func_68(iParam2, NETWORK::NETWORK_IS_IN_SESSION(), 0);
}

void func_255(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4) || __LIB_0__::func_255(uParam0->f_4, 0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = __LIB_0__::func_120(uParam0->f_3);
		if (PERSCHAR::_0x800DF3FC913355F3(iVar0) && !PERSCHAR::_0xEB98B38CA60742D7(iVar0))
		{
			PERSCHAR::_0x406808610220405B(iVar0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		PED::_0x62FDAD5E01D2DD47(uParam0->f_4, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2, 0);
		TASK::TASK_PERFORM_SEQUENCE(uParam0->f_4, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
	else
	{
		iVar2 = __LIB_0__::func_120(uParam0->f_3);
		if (PERSCHAR::_0x800DF3FC913355F3(iVar2) && !PERSCHAR::_0xEB98B38CA60742D7(iVar2))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_4, true, false);
			PERSCHAR::_0xA2B18FF8D39F6D87(iVar2);
			TASK::TASK_PERSISTENT_CHARACTER(uParam0->f_4);
		}
	}
}

void func_256(var uParam0)
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 0:
		case 3:
			StringCopy(&(uParam0->f_8), "0822_S_M_M_BankClerk_01_WHITE_01", 64);
			break;
		case 1:
		case 4:
			StringCopy(&(uParam0->f_8), "0823_S_M_M_BankClerk_01_WHITE_02", 64);
			break;
		case 2:
		case 5:
			StringCopy(&(uParam0->f_8), "0824_S_M_M_BankClerk_01_WHITE_03", 64);
			break;
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_4, &(uParam0->f_8));
}

bool func_257(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_0x886171A12F400B89(uParam0->f_6, iVar0, 1);
	if (ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
	}
	else
	{
		return false;
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return false;
	}
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0)));
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (PED::IS_PED_HUMAN(iVar3))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					iVar1 = (iVar1 - 1);
				}
				else if (PED::IS_PED_A_PLAYER(iVar3))
				{
					iVar1 = (iVar1 - 1);
				}
				else
				{
					Jump @160; //curOff = 147
					ITEMSET::DESTROY_ITEMSET(iVar0);
					return false;
				}
				iVar2++;
				ITEMSET::DESTROY_ITEMSET(iVar0);
				return iVar1 > 0;
			}
		}
	}
}

void func_258(var uParam0)
{
	uParam0->f_16 = 1;
}

bool func_259(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_16, iParam1);
}

char* func_260(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "END_SHIFT";
		case 4:
			return "EVERYBODY_OUT";
		case 8:
			return "FAREWELL_NO_SALE";
		case 64:
			return "WELCOME";
		case 128:
			return "WELCOME_SICK";
		case 256:
			return "WELCOME_MASK";
		case 512:
			return "WELCOME_MASK_ESCALATED";
		case 1024:
			return "WELCOME_WANTED";
		case 2048:
			return "NO_FIGHTING_HERE";
		case 4096:
			return "PUT_WEAPON_AWAY";
		case 8192:
			return "MISBEHAVING_LOW";
		case 16384:
			return "MISBEHAVING_MED";
		case 32768:
			return "MISBEHAVING_HIGH";
		case 65536:
			return "UNAUTHORIZED_AREA";
		case 16:
			return "HANGING_AROUND_NO_PURCHASE";
		case 131072:
			return "LAW_THREAT";
		case 524288:
			return "GET_OUT_SHOP";
		case 1048576:
			return "LOCKDOWN_BANK";
		case 2097152:
			return "GET_IN_BACKROOM";
		default:
			break;
	}
	return "";
	return "";
}

bool func_261(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || __LIB_0__::func_255(iParam0, 0))
	{
		return true;
	}
	return AUDIO::IS_ANY_SPEECH_PLAYING(iParam0);
}

int func_262(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar0 = "region_law_town_mob";
			break;
		case 2:
			iVar0 = "region_law_patrol_creator";
			break;
		case 3:
			iVar0 = "region_law_roadblock_creator";
			break;
		case 4:
			iVar0 = "region_law_w_eliz_pinks";
			break;
		case 6:
			iVar0 = "region_law_bloodhound";
			break;
		case 7:
			iVar0 = "region_law_VAL_belltower_sniper";
			break;
		case 8:
			iVar0 = "region_law_RHO_law_swarm";
			break;
		case 9:
			iVar0 = "region_law_guama_fussar";
			break;
	}
	return iVar0;
}

bool func_263()
{
	if (__LIB_4__::func_900(0) > 0 || __LIB_4__::func_900(1) > 0)
	{
		return true;
	}
	return false;
}

void func_264(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_17(iParam0)))
	{
		return;
	}
	if (__LIB_0__::func_255(iParam0, 0))
	{
		return;
	}
	if (!PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("WORLD_HUMAN_SELL_PAPER")))
	{
		return;
	}
	if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0, 0))
	{
		return;
	}
	if (bLocal_10)
	{
		return;
	}
	switch (iLocal_9)
	{
		case 0:
			iLocal_13 = __LIB_4__::func_911(__LIB_0__::func_12());
			iLocal_12 = __LIB_4__::func_912(iLocal_13);
			iLocal_9 = 1;
			break;
		case 1:
			if (STREAMING::IS_MODEL_VALID(iLocal_12))
			{
				STREAMING::REQUEST_MODEL(iLocal_12, false);
				iLocal_9 = 2;
			}
			break;
		case 2:
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_12))
			{
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_17(iParam0)))
			{
				return;
			}
			iLocal_11 = PED::_0x4D0D2E3D8BC000EB(iParam0, "p_cs_newspaper_02x_noanim_PH_L_HAND", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_11))
			{
				iLocal_11 = PED::_0x4D0D2E3D8BC000EB(iParam0, "p_cs_newspaper_02x_noanim_PH_L_HAND", 1);
				OBJECT::DELETE_OBJECT(&iLocal_11);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_11))
				{
					iLocal_11 = OBJECT::CREATE_OBJECT(iLocal_12, ENTITY::GET_ENTITY_COORDS(iParam0, false, false) + Vector(3f, 0f, 0f), true, true, false, false, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_11))
				{
					if (PED::_0x3BBDD6143FF16F98(iParam0, iLocal_11, "p_cs_newspaper_02x_noanim_PH_L_HAND", "WORLD_HUMAN_SELL_PAPER", "WORLD_HUMAN_SELL_PAPER_MALE_A", 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_12);
						iLocal_9 = 3;
					}
				}
			}
			else
			{
				return;
			}
			break;
		case 3:
			bLocal_10 = true;
			break;
	}
}

void func_265(int iParam0)
{
	if (__LIB_2__::func_157(iParam0, Global_36))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
	}
}

void func_266(var uParam0, int iParam1)
{
	__LIB_0__::func_8(&(uParam0->f_16), iParam1);
}

bool func_267(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	if (bParam1)
	{
		if (__LIB_3__::func_610(iParam0, 32768))
		{
			iVar0 = 1;
		}
	}
	if (bParam2)
	{
		if (__LIB_3__::func_610(iParam0, 1024))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_268(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = uParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return __LIB_1__::func_208(iParam0, &Var0);
}

void func_269(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			iVar2 = __LIB_4__::func_413(iParam0, iVar1);
			if (Global_40.f_9829[iVar0 /*4*/].f_1 != 0)
			{
				if (iVar2 != 0)
				{
					PERSCHAR::_0x8BC555034A5A5E8C(iVar2, Global_40.f_9829[iVar0 /*4*/].f_1);
				}
			}
			__LIB_4__::func_899(iVar0, (*iParam1)[iVar1]);
			__LIB_4__::func_921(iVar0);
			iVar1++;
		}
		iVar0++;
	}
	iVar3 = (iParam2 - iVar1);
	if (iVar3 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_9829)
		{
			if (Global_40.f_9829[iVar0 /*4*/] == -1)
			{
				Global_40.f_9829[iVar0 /*4*/] = iParam0;
				iVar2 = __LIB_4__::func_413(iParam0, iVar1);
				__LIB_4__::func_899(iVar0, (*iParam1)[iVar1]);
				__LIB_4__::func_921(iVar0);
				iVar1++;
				iVar3 = (iVar3 - 1);
				if (iVar3 <= 0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_270(var uParam0, var uParam1)
{
	if (__LIB_0__::func_6(*uParam0))
	{
		*uParam1 = __LIB_0__::func_895(*uParam0);
		if (!__LIB_0__::func_27(*uParam1, 2))
		{
			__LIB_1__::func_581(uParam1, 2);
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<16> Var10;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), __LIB_4__::func_915(iParam0, iParam1), 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 1;
	__LIB_4__::func_709(Var10, 0);
}

Vector3 func_272()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			if (__LIB_4__::func_368(2))
			{
				return -301.87f, 796.88f, 117.96f;
			}
			return -246.61f, 771.52f, 117.17f;
		case 92:
			return 3000.03f, 604.51f, 40.59f;
		case 5:
			if (__LIB_4__::func_368(2))
			{
				return 2635.1f, -1228.48f, 52.38f;
			}
			return 2803.22f, -1180.84f, 46.43f;
		case 120:
			return -3697.52f, -2589.47f, -11.29f;
		case 115:
			return -5523.76f, -2904.8f, -3.6f;
		case 38:
			return -816.94f, -1312.28f, 42.7f;
		case 105:
			return 1342.52f, -1371.6f, 83.3f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_273(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (__LIB_0__::func_86(vParam1))
	{
		return;
	}
	__LIB_2__::func_751(iParam0);
	Global_1935369.f_5[iParam0 /*11*/].f_1 = { vParam1 };
	Global_1935369.f_5[iParam0 /*11*/].f_4 = iParam4;
	Global_1935369.f_5[iParam0 /*11*/].f_5 = iParam5;
	Global_1935369.f_5[iParam0 /*11*/].f_6 = __LIB_3__::func_125(iParam5, iParam0);
}

bool func_274(int iParam0)
{
	if (((((!(__LIB_0__::func_21(iParam0, 8) || __LIB_0__::func_21(iParam0, 2)) || !__LIB_1__::func_205(Global_35, __LIB_0__::func_559(iParam0), 1, 0)) || !__LIB_0__::func_730(iParam0)) || __LIB_4__::func_497()) || Global_1934266.f_56) || ((iParam0 != 38 || __LIB_0__::func_293(45)) && (__LIB_2__::func_765(1, 0) || __LIB_2__::func_765(8, 0))))
	{
		return false;
	}
	return true;
}

void func_275(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	if ((__LIB_4__::func_497() || __LIB_0__::func_1(Global_1935630, 2048)) || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (iParam0 == 105 || iParam0 == 95)
	{
		if (!__LIB_2__::func_230())
		{
			__LIB_11__::func_766(iParam1, uParam2);
			return;
		}
		if (!__LIB_14__::func_15(iParam0))
		{
			__LIB_11__::func_766(iParam1, uParam2);
			return;
		}
		iVar0 = __LIB_11__::func_767(iParam0, __LIB_1__::func_185(17));
		bVar1 = __LIB_0__::func_73(2048);
		bVar2 = __LIB_0__::func_73(1024);
		if (!uParam2->f_3)
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 1);
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 20, 0, 1);
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 19, 0, 1);
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 1);
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 1);
			uParam2->f_3 = 1;
		}
	}
	else
	{
		iVar0 = 175;
		bVar1 = false;
		bVar2 = false;
	}
	__LIB_11__::func_768(iParam1, bVar1, bVar2);
	iVar3 = ZONE::_GET_MAP_ZONE_AT_COORDS(Global_36, 1);
	if (__LIB_10__::func_851(iVar3) == iParam0)
	{
		if (__LIB_4__::func_365() || __LIB_8__::func_954())
		{
			*uParam2 = 1;
		}
		else if (*uParam2)
		{
			__LIB_1__::func_240(iVar0, 1);
			*uParam2 = 0;
		}
		if (!uParam2->f_1)
		{
			if (uParam2->f_2 < 3)
			{
				__LIB_1__::func_240(iVar0, 1);
				uParam2->f_2++;
			}
			uParam2->f_1 = 1;
		}
		if (uParam2->f_1 && (((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_TOGGLE_HOLSTER")) || PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_TOGGLE_HOLSTER"))) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_TOGGLE_HOLSTER"))) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_TOGGLE_HOLSTER"))))
		{
			if (uParam2->f_2 < 3)
			{
				__LIB_1__::func_240(iVar0, 1);
				uParam2->f_2++;
			}
		}
		PLAYER::_0x8674D138391FFB1B(PLAYER::PLAYER_ID(), 1);
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 49, 1);
		PED::SET_PED_RESET_FLAG(Global_35, 49, true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_ROB"), false);
		PED::SET_PED_RESET_FLAG(Global_35, 185, true);
		if (!bVar1)
		{
			HUD::_0xC9CAEAEEC1256E54(1833957607);
			__LIB_11__::func_772();
			if (Global_1935630.f_44 != joaat("WEAPON_KIT_BINOCULARS"))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			}
		}
		if (!PED::IS_PED_IN_MELEE_COMBAT(Global_35) && !bVar2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		}
	}
	else
	{
		__LIB_11__::func_773();
		uParam2->f_1 = 0;
	}
}

bool func_276(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	if ((!__LIB_0__::func_27(uParam0->f_3, 32768) && __LIB_6__::func_624(uParam0->f_1, &fVar1)) && __LIB_6__::func_930(uParam0->f_1, 0, &fVar0))
	{
		fVar2 = __LIB_3__::func_992();
		if ((__LIB_3__::func_992() - fVar1) >= fVar0)
		{
			__LIB_1__::func_581(&(uParam0->f_3), 32768);
		}
	}
	if (__LIB_0__::func_27(uParam0->f_3, 32768))
	{
		return true;
	}
	return false;
}

void func_277(int iParam0)
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
						__LIB_3__::func_427(iVar0, 1, 752097756);
					}
					__LIB_1__::func_775(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_3__::func_427(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_3__::func_427(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_3__::func_427(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_3__::func_427(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_3__::func_427(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					__LIB_3__::func_427(-518019409, 1, 752097756);
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
			__LIB_7__::func_844();
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

bool func_278(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_19, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_19, 4);
		__LIB_0__::func_25(iLocal_19, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		__LIB_1__::func_886(iLocal_19);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_19);
		__LIB_2__::func_819(iLocal_19);
		__LIB_2__::func_755(iLocal_19);
		if (!__LIB_2__::func_756(iLocal_19, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_279(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
	}
}

bool func_280(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_17, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_17, 4);
		__LIB_0__::func_25(iLocal_17, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		__LIB_1__::func_886(iLocal_17);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_17);
		__LIB_2__::func_819(iLocal_17);
		__LIB_2__::func_755(iLocal_17);
		if (!__LIB_2__::func_756(iLocal_17, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_281()
{
	__LIB_9__::func_427(&uLocal_14);
}

void func_282(var uParam0)
{
	float fVar0;
	switch (*uParam0)
	{
		case 0:
			fVar0 = __LIB_1__::func_992(Global_35, uParam0->f_5, 1);
			if (fVar0 > BUILTIN::POW(400f, 2f) || fVar0 < BUILTIN::POW(100f, 2f))
			{
				return;
			}
			if (__LIB_9__::func_432(uParam0->f_1))
			{
				__LIB_0__::func_19(uParam0, 1);
			}
			else
			{
				__LIB_0__::func_19(uParam0, 6);
			}
			break;
		case 1:
			TASK::SET_SCENARIO_GROUP_ENABLED("Special_Ambient_Horse", true);
			STREAMING::REQUEST_MODEL(__LIB_5__::func_654(uParam0->f_1), false);
			PED::_0xED9582B3DA8F02B4(1);
			uParam0->f_9 = 1;
			__LIB_0__::func_19(uParam0, 2);
			break;
		case 2:
			if (!STREAMING::HAS_MODEL_LOADED(__LIB_5__::func_654(uParam0->f_1)))
			{
				return;
			}
			if (!PED::_0x5E420FF293EE5472())
			{
				return;
			}
			fVar0 = __LIB_1__::func_992(Global_35, uParam0->f_5, 1);
			if (fVar0 < BUILTIN::POW(100f, 2f))
			{
				__LIB_9__::func_427(uParam0);
				__LIB_0__::func_19(uParam0, 6);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				uParam0->f_3 = __LIB_1__::func_545(__LIB_5__::func_654(uParam0->f_1), uParam0->f_5, 0, 0, 1, uParam0->f_2, 0, 0, 0, 0, 1, 0, 0);
				return;
			}
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, false);
			__LIB_9__::func_428(uParam0);
			__LIB_0__::func_19(uParam0, 3);
		case 3:
			__LIB_2__::func_170(uParam0->f_3);
			PED::_UPDATE_PED_VARIATION(uParam0->f_3, false, true, true, true, false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, false);
			FLOCK::_0xAEB97D84CDF3C00B(uParam0->f_3, 1);
			TASK::TASK_ANIMAL_UNALERTED(uParam0->f_3, -1, uParam0->f_4, 0, 0);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 44, 5f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 45, 40f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 35, 5f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 36, 20f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, true);
			ENTITY::_0xA91E6CF94404E8C9(uParam0->f_3);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_5__::func_654(uParam0->f_1));
			__LIB_0__::func_19(uParam0, 4);
			break;
		case 4:
			if (__LIB_9__::func_431(uParam0))
			{
				__LIB_0__::func_19(uParam0, 5);
			}
			break;
		case 5:
			__LIB_5__::func_677(uParam0->f_1);
			uParam0->f_8 = 1;
			__LIB_9__::func_427(uParam0);
			__LIB_0__::func_19(uParam0, 6);
			break;
		case 6:
			break;
	}
}

void func_283(int iParam0)
{
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return;
	}
	Global_20710[iParam0 /*45*/].f_44 = 0;
}

int func_284()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		switch (iVar0)
		{
			case 0:
			case 3:
			case 4:
			case 6:
			case 7:
				if (__LIB_2__::func_157(Global_1914319.f_3[iVar0 /*446*/].f_25, Global_36))
				{
					return iVar0;
				}
				break;
		}
		iVar0++;
	}
	return -1;
}

int func_285(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	return Global_20710[iVar0 /*45*/].f_44;
}

void func_286(int iParam0)
{
	Global_20710.f_1476[iParam0] = __LIB_0__::func_23();
}

bool func_287(int iParam0)
{
	int iVar0;
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	if (!__LIB_5__::func_771(Global_20710.f_1476[iParam0]))
	{
		return true;
	}
	iVar0 = Global_20710.f_1476[iParam0];
	__LIB_1__::func_446(&iVar0, 0, 0, 12, 0, 0, 0, 0);
	return __LIB_1__::func_426(iVar0, 1);
}

void func_288(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if ((Global_36616 && __LIB_0__::func_347(iParam1)) != 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_348(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		__LIB_12__::func_235(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			__LIB_0__::func_349(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			__LIB_12__::func_235(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_289(int iParam0)
{
	if (__LIB_8__::func_379(iParam0))
	{
		return;
	}
	iLocal_18 = (iLocal_18 || iParam0);
}

void func_290(int iParam0)
{
	if (!__LIB_8__::func_379(iParam0))
	{
		return;
	}
	iLocal_18 = (iLocal_18 - (iLocal_18 && iParam0));
}

void func_291(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (GRAPHICS::_0x113857D66A9CABE6(*uParam0))
		{
			return;
		}
	}
	else if (!GRAPHICS::_0x113857D66A9CABE6(*uParam0))
	{
		return;
	}
	GRAPHICS::_0xBFCB17895BB99E4E(*uParam0, bParam1);
}

bool func_292(int iParam0, int iParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (bParam7)
		{
			if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(*iParam0))
			{
				return false;
			}
		}
		return true;
	}
	if (*uParam2 == 0)
	{
		*uParam2 = ENTITY::_0x6F3068258A499E52(iParam1, vParam3, iParam6 | 2 | 1);
		return false;
	}
	if (!ENTITY::_0x1FF441D7954F8709(*uParam2))
	{
		return false;
	}
	iVar0 = ENTITY::_0x4735E2A4BB83D9DA(*uParam2);
	*iParam0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
	return false;
}

void func_293()
{
	__LIB_4__::func_262(6, 16777216);
}

void func_294(bool bParam0)
{
	__LIB_1__::func_948(joaat("DOOR_ROC_HOUSE_INT_1"), bParam0, 0, 0, 0, 0, 0, 0);
	if (bParam0)
	{
		OBJECT::_0xC07B91B996C1DE89(joaat("DOOR_ROC_HOUSE_INT_1"), 0);
	}
}

int func_295(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ROCK_00_GRZ"):
			return -790109104;
		case joaat("ROCK_01_GRZ"):
			return -1615724059;
		case joaat("ROCK_02_CML"):
			return -41632359;
		case joaat("ROCK_03_CML"):
			return -868361476;
		case joaat("ROCK_04_BGV"):
			return 435910278;
		case joaat("ROCK_05_BGV"):
			return -391015437;
		case joaat("ROCK_06_HRT"):
			return 43468722;
		case joaat("ROCK_07_HRT"):
			return 274064175;
		case joaat("ROCK_08_ROA"):
			return 729946503;
		case joaat("ROCK_09_ROA"):
			return 818095113;
		default:
			break;
	}
	return 0;
}

char* func_296(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_inventory@item";
		case 1:
			return "mech_inventory@item";
	}
	return "";
}

char* func_297(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dino_bones_note";
	}
	return "";
}

void func_298(var uParam0)
{
	vector3 vVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 0f, -10f) };
			uParam0->f_9 = OBJECT::CREATE_OBJECT(uParam0->f_11, vVar0, true, true, false, false, true);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_9, false);
		}
	}
}

void func_299(var uParam0)
{
	vector3 vVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 0f, -12f) };
			uParam0->f_10 = OBJECT::CREATE_OBJECT(uParam0->f_12, vVar0, true, true, false, false, true);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_10, false);
		}
	}
}

void func_300(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!uParam0->f_2)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_9, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			uParam0->f_2 = 1;
		}
	}
}

void func_301(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!uParam0->f_3)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_10, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 9246), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			uParam0->f_3 = 1;
		}
	}
}

char* func_302(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "dino_bones_note_letter";
	}
	return "";
}

void func_303(var uParam0)
{
	__LIB_4__::func_945(uParam0, 1);
}

void func_304(bool bParam0)
{
	if (bParam0)
	{
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER"))
		{
			TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER", true);
		}
	}
	else if (TASK::IS_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER"))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_CASH_REGISTER", false);
	}
}

void func_305(int iParam0, int iParam1)
{
	__LIB_0__::func_8(&(Global_1914319.f_3[iParam0 /*446*/].f_5), iParam1);
}

void func_306(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_24(iParam1);
	if (!__LIB_4__::func_976(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		uParam0->f_1[iVar0 /*22*/][iVar1] = 60908;
		MISC::CLEAR_BIT(&(uParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

void func_307(var uParam0, vector3 vParam1)
{
	if (__LIB_0__::func_86(vParam1))
	{
		return;
	}
	__LIB_0__::func_487(&(uParam0->f_7375), vParam1);
	__LIB_0__::func_88(&(uParam0->f_7375), 64);
}

void func_308(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	__LIB_5__::func_67(uParam0);
	uParam0->f_4 = iParam1;
	__LIB_1__::func_414(uParam0, iParam2, iParam3, iParam4, iParam5);
}

void func_309(var uParam0)
{
	__LIB_9__::func_821(uParam0);
	__LIB_5__::func_56(uParam0);
}

int func_310(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_83(iParam0))
	{
		return 1;
	}
	if (__LIB_0__::func_13(32768))
	{
		return 1;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false))
	{
		return 1;
	}
	iVar0 = __LIB_0__::func_80(__LIB_3__::func_918(iParam0));
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return 1;
	}
	if (!__LIB_0__::func_702(__LIB_3__::func_918(iParam0)))
	{
		__LIB_9__::func_349(iParam0, 0, 0, -1);
	}
	if (__LIB_0__::func_79(iVar0))
	{
		if (!Global_1835011[iParam0 /*74*/].f_71)
		{
			if (bParam1)
			{
				__LIB_1__::func_109(iVar0, 256);
			}
			if (bParam2)
			{
				__LIB_1__::func_109(iVar0, 512);
			}
			Global_1835011[iParam0 /*74*/].f_71 = 1;
			return 1;
		}
	}
	return 0;
}

bool func_311(var uParam0, vector3 vParam1, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, bool bParam12)
{
	bool bVar0;
	bool bVar1;
	if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
	{
		return false;
	}
	bVar0 = __LIB_5__::func_443(uParam0, 4);
	bVar1 = __LIB_8__::func_818(uParam0, vParam1, sParam4, sParam5, 4, sParam6, iParam7, fParam10, fParam11);
	if (__LIB_4__::func_938(uParam0) != 1 && bParam12)
	{
		if (bVar1)
		{
			if (!bVar0)
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_5303))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_5303));
				}
				uParam0->f_5303 = __LIB_5__::func_442(vParam1, 0);
				iParam9 = iParam9;
				if (ITEMSET::IS_ITEMSET_VALID(iParam8))
				{
					__LIB_5__::func_444(&iParam8, 0);
				}
				__LIB_8__::func_799(uParam0, 0, 0);
				__LIB_5__::func_470(uParam0, 4);
			}
		}
		else if (bVar0)
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_5303))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_5303));
			}
			if (ITEMSET::IS_ITEMSET_VALID(iParam8))
			{
				__LIB_5__::func_444(&iParam8, 1);
			}
			__LIB_8__::func_799(uParam0, 1, 0);
			__LIB_5__::func_471(uParam0, 4);
		}
		if (MAP::DOES_BLIP_EXIST(uParam0->f_5303))
		{
			if (!__LIB_0__::func_175(MAP::GET_BLIP_COORDS(uParam0->f_5303), vParam1, 1056964608 /* Float: 0.5f */, 1))
			{
				MAP::SET_BLIP_COORDS(uParam0->f_5303, vParam1);
			}
		}
	}
	return bVar1;
}

bool func_312(var uParam0, int iParam1, char[4] cParam2, int iParam3, char[4] cParam4, char[4] cParam5, int iParam6, float fParam7, float fParam8)
{
	char cVar0[64];
	char cVar8[64];
	bool bVar16;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	StringCopy(&cVar0, "HORSE_RET", 64);
	if (__LIB_0__::func_48(Global_35, iParam1, fParam7, 1))
	{
		StringCopy(&cVar0, "HORSE_MOUNT", 64);
	}
	StringCopy(&cVar8, "HORSE_FAIL", 64);
	bVar16 = __LIB_8__::func_817(uParam0, iParam1, cVar0, cVar8, 512, cParam2, cParam4, cParam5);
	if (__LIB_4__::func_938(uParam0) != 1 && __LIB_4__::func_937(uParam0, 64))
	{
		__LIB_10__::func_936(uParam0, iParam1, iParam6, bVar16, iParam3);
		__LIB_4__::func_969(uParam0, 64);
		if (bVar16)
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 1);
		}
		else
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 0);
		}
	}
	if (bVar16)
	{
		if (!__LIB_0__::func_86(uParam0->f_5304) && __LIB_0__::func_94(iParam1, uParam0->f_5304, 1) >= fParam8)
		{
			if (__LIB_0__::func_163(iParam1, 2043986356))
			{
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
			}
			__LIB_1__::func_538(1);
		}
		PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), iParam1);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LEAD_ANIMAL"), false);
		return true;
	}
	return false;
}

int func_313(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	struct<11> Var1;
	Var1.f_10 = 7;
	Var1 = iParam4;
	Var1.f_1 = iParam5;
	Var1.f_2 = iParam6;
	Var1.f_3 = iParam7;
	Var1.f_4 = iParam8;
	Var1.f_6 = { vParam0 };
	Var1.f_9 = iParam3;
	return __LIB_4__::func_720(&uVar0, &Var1);
}

void func_314(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!__LIB_4__::func_562(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!__LIB_4__::func_562(uParam0, 4096) && uParam0->f_2286)
	{
		return;
	}
	if (!__LIB_4__::func_562(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_11__::func_35(uParam0);
	__LIB_5__::func_354(uParam0, uParam0->f_2287, uParam0->f_2289);
	__LIB_5__::func_77(uParam0);
	if (uParam0->f_2290 && !uParam0->f_2289)
	{
		if (((((uParam0->f_2285 >= 0 && uParam0->f_1406[uParam0->f_2285 /*41*/].f_17 > 0f) && uParam0->f_2078 >= 0) && !__LIB_0__::func_266(Global_35, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, (uParam0->f_1406[uParam0->f_2285 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_4__::func_562(uParam0, 33554432)) && !__LIB_4__::func_562(uParam0, 4))
		{
			__LIB_9__::func_71(uParam0, uParam0->f_2287);
			return;
		}
	}
	if (!__LIB_4__::func_562(uParam0, 4))
	{
		if (__LIB_5__::func_78(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_2074 = uParam0->f_2078;
				__LIB_4__::func_532(uParam0, 8);
				return;
			}
		}
		else
		{
			__LIB_9__::func_71(uParam0, uParam0->f_2287);
		}
		if (uParam0->f_1406[uParam0->f_2080 /*41*/].f_29)
		{
			fVar0 = __LIB_5__::func_594(uParam0, uParam0->f_2080);
			if (fVar0 < 0f || (uParam0->f_2287 && fVar0 < 1f))
			{
				uParam0->f_2078 = uParam0->f_2080;
				if (!bParam2)
				{
					uParam0->f_2074 = uParam0->f_2080;
					__LIB_4__::func_532(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_2079 == -1f || fVar0 <= uParam0->f_2079) || uParam0->f_2080 == uParam0->f_2078)
				{
					if (uParam0->f_2080 != uParam0->f_2078)
					{
					}
					uParam0->f_2078 = uParam0->f_2080;
					uParam0->f_2079 = fVar0;
					__LIB_4__::func_532(uParam0, 16);
					if (((!__LIB_4__::func_562(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, true) < (uParam0->f_1406[uParam0->f_2078 /*41*/].f_11 + 5f))
					{
						__LIB_5__::func_355(uParam0);
						__LIB_4__::func_532(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_2078 == uParam0->f_2080)
			{
				__LIB_4__::func_563(uParam0, 16);
			}
		}
		if (uParam0->f_2080 + 1 >= 8)
		{
			uParam0->f_2080 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_2080 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_1406[iVar2 /*41*/].f_29)
				{
					uParam0->f_2080 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_2080 = 0;
			}
		}
		if (uParam0->f_2078 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 2) && uParam0->f_2287)
		{
			return;
		}
	}
	if (__LIB_4__::func_562(uParam0, 16))
	{
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1);
		if (uParam0->f_2287 && fVar4 <= (uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_2265, uParam0->f_2269))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_1406[uParam0->f_2078 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1406[uParam0->f_2078 /*41*/].f_1.f_2 + uParam0->f_1406[uParam0->f_2078 /*41*/].f_10))
			{
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_2289 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_2265, uParam0->f_2269)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_2291) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2291) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_2291))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_2291, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2291) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_2291))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_2291);
			}
		}
		else if ((uParam0->f_2287 && fVar4 <= (uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2288))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_2288, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_2287 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_2288) > 1.25f) || __LIB_4__::func_562(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_2265, uParam0->f_2269) && __LIB_5__::func_594(uParam0, uParam0->f_2078) < 10000f) && __LIB_4__::func_562(uParam0, 16)) || __LIB_4__::func_562(uParam0, 4))
		{
			if (!__LIB_4__::func_562(uParam0, 4))
			{
				__LIB_4__::func_532(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_4__::func_575(uParam0, uParam0->f_2078))
			{
				iVar7 |= 2048;
			}
			if (__LIB_5__::func_79(Global_35, &(uParam0->f_2076), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_1406[uParam0->f_2078 /*41*/].f_7, uParam0->f_1406[uParam0->f_2078 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_2076 = 0;
				__LIB_4__::func_563(uParam0, 4);
			}
		}
	}
	else if (__LIB_4__::func_562(uParam0, 4))
	{
		__LIB_4__::func_563(uParam0, 4);
	}
}

float func_315(char[4] cParam0)
{
	return __LIB_5__::func_51(&(cParam0->f_603));
}

void func_316(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_177(iParam0);
	if (bParam1)
	{
		__LIB_0__::func_213(iParam0, 2048, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 1, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 54, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 121, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 302, false);
		}
	}
	else
	{
		__LIB_0__::func_213(iParam0, 2048, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 1, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 54, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 121, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 302, true);
		}
	}
}

void func_317(char[4] cParam0)
{
	if (!__LIB_6__::func_862(cParam0, 8388608))
	{
		if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) == 5 || __LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) == 6)
		{
			if (!__LIB_0__::func_270())
			{
				if (__LIB_5__::func_51(&(cParam0->f_13112)) < 5f)
				{
					PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 0);
				}
			}
			else
			{
				__LIB_5__::func_107(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	}
}

void func_318(char[4] cParam0)
{
	if (!__LIB_0__::func_2() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		__LIB_5__::func_107(&(cParam0->f_603));
	}
}

void func_319(char[4] cParam0, vector3 vParam1, float fParam4)
{
	if (__LIB_6__::func_872(cParam0, 33554432))
	{
		return;
	}
	if (__LIB_6__::func_872(cParam0, 4096))
	{
		return;
	}
	if (__LIB_0__::func_86(vParam1))
	{
		return;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam1)))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(vParam1));
		__LIB_6__::func_869(cParam0, 8);
	}
	__LIB_6__::func_869(cParam0, 4096);
	PED::_0x4759CC730F947C81();
	VEHICLE::_0x1FF00DB43026B12F();
	PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam1, fParam4, false, true, true, false);
	CAM::DO_SCREEN_FADE_OUT(0);
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
	__LIB_5__::func_107(&(cParam0->f_603));
}

void func_320(char[4] cParam0, int iParam1)
{
	cParam0->f_599 = iParam1;
	__LIB_8__::func_901(&(cParam0->f_600), 1);
}

void func_321(char[4] cParam0)
{
	if (!__LIB_0__::func_2() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		__LIB_8__::func_901(&(cParam0->f_603), 1);
	}
}

bool func_322(char[4] cParam0, char* sParam1, int iParam2, float fParam3, char* sParam4)
{
	bool bVar0;
	if (iParam2 == 0 || iParam2 == 4)
	{
		if (__LIB_5__::func_463() || __LIB_0__::func_270())
		{
			return false;
		}
	}
	else if (iParam2 == 7 && __LIB_0__::func_104())
	{
		return false;
	}
	else if (iParam2 == 6 && __LIB_5__::func_352(sParam1))
	{
		__LIB_2__::func_608(&(cParam0->f_13106));
		return true;
	}
	if (iParam2 != 2 && iParam2 != 3)
	{
		__LIB_8__::func_901(&(cParam0->f_13106), 0);
	}
	if ((__LIB_11__::func_410(&(cParam0->f_13106), fParam3) || fParam3 <= 0f) || (iParam2 == 2 && iParam2 == 3))
	{
		switch (iParam2)
		{
			case 0:
				if (!__LIB_8__::func_711(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 1:
				__LIB_8__::func_711(cParam0, sParam1, 0);
				break;
			case 2:
			case 3:
				bVar0 = iParam2 == 2;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					if (AUDIO::_0x1ECC76792F661CF5(sParam4))
					{
						AUDIO::PAUSE_SCRIPTED_CONVERSATION(sParam4, bVar0, true, false, true);
						__LIB_2__::func_608(&(cParam0->f_13106));
						return false;
					}
					else if (!AUDIO::_0xD89504D9D7D5057D(sParam4) || !AUDIO::_0xF01C570E0A0A1E67(sParam4))
					{
						if (iParam2 == 3)
						{
							__LIB_8__::func_711(cParam0, sParam1, 0);
						}
						else if (!__LIB_8__::func_711(cParam0, sParam1, 0))
						{
							return false;
						}
					}
					if (AUDIO::_0xD89504D9D7D5057D(sParam4) && AUDIO::_0xF01C570E0A0A1E67(sParam4))
					{
						if (!__LIB_2__::func_618(&(cParam0->f_13106)) && __LIB_8__::func_711(cParam0, sParam1, 0))
						{
							__LIB_8__::func_901(&(cParam0->f_13106), 0);
							return false;
						}
						if (__LIB_2__::func_618(&(cParam0->f_13106)))
						{
							if (!AUDIO::_0x1ECC76792F661CF5(sParam1))
							{
								AUDIO::RESTART_SCRIPTED_CONVERSATION(sParam4);
								return true;
							}
							else
							{
								return false;
							}
						}
					}
				}
				else if (iParam2 == 3)
				{
					__LIB_8__::func_711(cParam0, sParam1, 0);
				}
				else if (!__LIB_8__::func_711(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 4:
			case 6:
				__LIB_9__::func_208(cParam0, sParam1, 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				break;
			case 5:
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_9__::func_208(cParam0, sParam1, 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				break;
			case 7:
				__LIB_0__::func_45(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 8:
				__LIB_0__::func_105(1);
				__LIB_0__::func_45(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 9:
				__LIB_0__::func_105(1);
				__LIB_4__::func_981(sParam1, 0, 0, 1);
				break;
		}
		__LIB_2__::func_608(&(cParam0->f_13106));
		return true;
	}
	return false;
}

void func_323(int iParam0)
{
	int iVar0;
	if (__LIB_5__::func_371())
	{
		iVar0 = iParam0;
		if (iVar0 > -1 && iVar0 < 26)
		{
			Global_1572864.f_9 = iParam0;
		}
		else
		{
			Global_1572864.f_9 = -1;
		}
	}
	else if (__LIB_11__::func_599())
	{
		Global_1572864.f_9 = iParam0;
	}
	else if (__LIB_11__::func_606())
	{
		Global_1572864.f_9 = iParam0;
	}
	else if (__LIB_10__::func_862())
	{
		Global_1572864.f_9 = iParam0;
	}
	else if (__LIB_11__::func_600())
	{
		Global_1572864.f_9 = iParam0;
	}
}

bool func_324(char[4] cParam0)
{
	bool bVar0;
	bVar0 = (PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_TELEPORT_ACTIVE());
	if (__LIB_5__::func_51(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			PLAYER::STOP_PLAYER_TELEPORT();
		}
		if ((__LIB_0__::func_13(32768) && __LIB_4__::func_545()) && __LIB_5__::func_51(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (__LIB_6__::func_872(cParam0, 8) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_1__::func_469(cParam0->f_607))))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_1__::func_469(cParam0->f_607)));
			__LIB_6__::func_881(cParam0, 8);
		}
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		__LIB_0__::func_489(0, 0);
		__LIB_6__::func_881(cParam0, 4096);
		return true;
	}
	return false;
}

void func_325(char[4] cParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];
	if (bParam4)
	{
		__LIB_6__::func_886(cParam0, 2);
	}
	else
	{
		__LIB_6__::func_886(cParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	__LIB_6__::func_892(cParam0, cVar0);
	__LIB_6__::func_879(cParam0, 2);
	if (((!CAM::_0x139EFB0A71DD9011() && !__LIB_0__::func_91()) && !__LIB_6__::func_861(cParam0, 80)) && bParam3)
	{
		__LIB_8__::func_722(cParam0);
	}
	__LIB_8__::func_901(&(cParam0->f_13118), 0);
}

void func_326(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return;
	}
	if (!__LIB_1__::func_22(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (__LIB_6__::func_863(cParam0) != 0 && __LIB_6__::func_877(cParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		__LIB_9__::func_139(cParam0, iParam2);
		__LIB_0__::func_130(iParam2);
	}
	__LIB_0__::func_745(iParam1);
	__LIB_0__::func_904(iParam1, 0);
	__LIB_11__::func_616(iParam1, 0, bParam4, bParam5, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

void func_327(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	switch (uParam0->f_865[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 65)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((__LIB_0__::func_84(&(uParam0->f_865[iParam1 /*18*/]), 4) && uParam0->f_865[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_865[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (__LIB_0__::func_84(&(uParam0->f_865[iParam1 /*18*/]), 64) && __LIB_5__::func_9(uParam0, iParam1, 0))
				{
					__LIB_5__::func_123(uParam0, uParam0->f_1912[uParam0->f_865[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_865[iParam1 /*18*/].f_13, uParam0->f_865[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_865[iParam1 /*18*/].f_3 >= 0 && uParam0->f_865[iParam1 /*18*/].f_5 >= 0) && uParam0->f_865[iParam1 /*18*/].f_3 != uParam0->f_865[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_865[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_865[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_865[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_865[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_865[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_865[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_865[iParam1 /*18*/].f_13, uParam0->f_865[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_865[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_865[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_865[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_865[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_865[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_865[iParam1 /*18*/].f_13, uParam0->f_865[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			__LIB_11__::func_790(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_328(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_865[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_6__::func_917(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_11__::func_790(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_865[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_5__::func_51(&(uParam0->f_2262)) >= IntToFloat((uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_5__::func_90(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_1__::func_104(&(uParam0->f_2161), uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_865[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_865[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_865[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_865[iParam1 /*18*/].f_7 = 1;
			uParam0->f_2075 = iParam1;
			break;
	}
}

bool func_329(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return __LIB_11__::func_248(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1225639.f_10)
		{
			if (!Global_1225639.f_11)
			{
				return false;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return false;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return true;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_330(var uParam0, bool bParam1, int iParam2)
{
	__LIB_2__::func_137(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639.f_11)
		{
			return;
		}
		if (Global_1225639.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		uParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		uParam0->f_13 = __LIB_1__::func_347(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							__LIB_0__::func_7(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (__LIB_4__::func_491(1))
						{
							__LIB_0__::func_7(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!__LIB_4__::func_491(1) || *uParam0 & 8192 != 0))
				{
					__LIB_0__::func_8(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (__LIB_2__::func_868(uParam0))
			{
				uParam0->f_15 = __LIB_0__::func_485();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((__LIB_0__::func_485() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	__LIB_2__::func_835(uParam0);
}

int func_331(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (__LIB_8__::func_823(uParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_0__::func_31(uParam1->f_10))
	{
		PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 53, true);
	}
	__LIB_11__::func_33(uParam1);
	__LIB_5__::func_311(uParam1);
	if (!bParam2)
	{
		__LIB_8__::func_813(uParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_ENTITY_EXPLOSION"):
				__LIB_8__::func_814(uParam0, uParam1, iVar0);
				break;
			case joaat("EVENT_ENTITY_DAMAGED"):
			case 2145012826:
				__LIB_8__::func_815(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	__LIB_8__::func_816(uParam0, uParam1);
	__LIB_5__::func_75(uParam1);
	return 0;
}

void func_332(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && __LIB_0__::func_407(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		bVar0 = true;
		iVar1 = __LIB_4__::func_656(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
		if (bParam3)
		{
			if (__LIB_5__::func_558(uParam0, iParam1, 1024))
			{
				__LIB_5__::func_572(uParam0, iParam1, 8192);
			}
			else
			{
				__LIB_0__::func_900(iVar1);
			}
		}
		else if (!__LIB_5__::func_558(uParam0, iParam1, 8192))
		{
			if (__LIB_1__::func_566(&(Global_1360165[iVar1 /*1157*/].f_12), 8) && !__LIB_5__::func_558(uParam0, iParam1, 1024))
			{
				__LIB_0__::func_745(iVar1);
			}
		}
		else
		{
			__LIB_5__::func_571(uParam0, iParam1, 8192);
		}
	}
	if (bParam3)
	{
		__LIB_11__::func_649(uParam0, iParam1, iParam2, iParam4, 1, bVar0);
	}
	else if (MAP::DOES_BLIP_EXIST(uParam0->f_5303) || iParam2 == joaat("BLIP_STYLE_PLAYER_HORSE"))
	{
		__LIB_11__::func_649(uParam0, iParam1, iParam2, iParam4, 0, bVar0);
	}
}

Vector3 func_333(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -0.41f, 0.03f, -42.05f;
		case 1:
			return 0f, 0f, -51.72f;
		case 2:
			return -0.67f, 0.14f, 9.75f;
		case 0:
			return -0.67f, 0.14f, 155.75f;
		case 3:
			return -0.41f, 0.03f, 152.95f;
		case 5:
			return -0.3f, 0.14f, -90.27f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_334(var uParam0)
{
	__LIB_4__::func_945(uParam0, 1);
	__LIB_4__::func_945(uParam0, 2);
}

bool func_335(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!PED::DOES_GROUP_EXIST(*uParam0))
	{
		*uParam0 = PED::CREATE_GROUP(iParam1);
		if (PED::DOES_GROUP_EXIST(*uParam0))
		{
			PED::SET_GROUP_FORMATION(*uParam0, iParam2);
			PED::_0xD5BD1B5318A81994(*uParam0, iParam3);
			return true;
		}
	}
	return false;
}

void func_336(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_24(iParam1);
	if (!__LIB_4__::func_976(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		uParam0->f_1[iVar0 /*22*/][iVar1] = 55398;
		MISC::CLEAR_BIT(&(uParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

int func_337(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	struct<15> Var0;
	int iVar20;
	int iVar21;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	Var0.f_8 = -1082130432;
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &(Var0.f_6), false, iParam5, false))
	{
		iVar20 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(iVar20))
		{
			Var0 = { __LIB_5__::func_270(iVar20) };
			if (__LIB_0__::func_86(vParam1))
			{
				Var0.f_3 = { __LIB_5__::func_271(iVar20) };
			}
			else
			{
				Var0.f_3 = { vParam1 };
			}
			Var0.f_7 = 1f;
			Var0.f_12 = 1;
			if (bParam8)
			{
				if (__LIB_0__::func_272(iParam0, 0))
				{
					Var0.f_9 = iParam0;
				}
				else
				{
					Var0.f_9 = 0;
				}
			}
			Var0.f_13 = 1;
			Var0.f_14 = uParam7;
			if (__LIB_0__::func_272(iParam4, 0))
			{
				Var0.f_11 = iParam4;
			}
			MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
			if (bParam6)
			{
				if (WEAPON::GET_AMMO_IN_CLIP(iParam0, &iVar21, Var0.f_6))
				{
					if (iVar21 > 0)
					{
						WEAPON::SET_AMMO_IN_CLIP(iParam0, Var0.f_6, (iVar21 - 1));
					}
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_338(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = __LIB_12__::func_567(iParam0);
		if (!__LIB_0__::func_144(iVar0, 0))
		{
			iVar0 = __LIB_5__::func_797(iParam0);
		}
	}
	else
	{
		iVar0 = __LIB_5__::func_797(iParam0);
	}
	return iVar0;
}

void func_339(var uParam0, struct<4> Param1, int iParam5)
{
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_5__::func_501(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_6__::func_920(uParam0);
			break;
		case 2:
			__LIB_5__::func_502(uParam0);
			break;
	}
}

bool func_340(var uParam0, int iParam1, char[4] cParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	struct<8> Var0;
	char cVar8[64];
	Var0 = { __LIB_6__::func_907(iParam1) };
	cVar8 = { __LIB_0__::func_865(iParam1) };
	return __LIB_11__::func_812(uParam0, __LIB_0__::func_271(iParam1), &Var0, &cVar8, cParam2, iParam3, iParam4, fParam5, fParam6, iParam7, 1);
}

bool func_341(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { __LIB_2__::func_3(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(__LIB_0__::func_709(Var0.f_4), 1);
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
		__LIB_0__::func_968(__LIB_0__::func_158(iParam2, 1));
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
	__LIB_9__::func_478(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = __LIB_0__::func_969(iParam0, iParam2, iParam1, __LIB_0__::func_2() != -1);
	if (bParam4)
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 0);
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
				__LIB_0__::func_550(__LIB_0__::func_158(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

int func_342(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = __LIB_1__::func_55(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	if (__LIB_1__::func_214(iParam0))
	{
		return 1;
	}
	__LIB_11__::func_553(iParam0);
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_7))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_7);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_8))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_8);
	}
	Global_1392915.f_121[iVar0 /*20*/].f_1 = 0;
	__LIB_6__::func_376(iVar0);
	iVar2 = __LIB_0__::func_80(Global_1392915[iVar0 /*12*/].f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			__LIB_1__::func_722(Global_1392915[iVar0 /*12*/].f_4);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
		{
			MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
		}
		__LIB_1__::func_109(iVar2, 0);
		return 1;
	}
	return 0;
}

void func_343(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	if (bParam4 && (!__LIB_0__::func_139(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1)))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	if (iParam3 == 1)
	{
		__LIB_1__::func_522(iParam0, 18, 0, 1);
		__LIB_1__::func_522(iParam0, 17, 0, 1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), iParam2);
}

void func_344(int iParam0, int iParam1)
{
	Global_1914319.f_3[iParam0 /*446*/].f_32 = iParam1;
}

bool func_345(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 5)
	{
		return VOLUME::_DOES_VOLUME_EXIST(Global_43894[iParam0]);
	}
	return false;
}

bool func_346(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 41);
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 525;
		case 1:
		case 2:
			return 284;
		case 0:
			return 283;
		case 3:
			return 33;
		default:
			break;
	}
	return -1;
}

void func_348(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	__LIB_1__::func_336(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
}

void func_349(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("TOWN_SECRETS_SD_TRELAWNY")) > 0)
			{
				SCRIPTS::_0x7423F7835770F619(joaat("TOWN_SECRETS_SD_TRELAWNY"));
			}
			break;
		case 2:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("TOWN_SECRETS_ER_DAUGHTER")) > 0)
			{
				SCRIPTS::_0x7423F7835770F619(joaat("TOWN_SECRETS_ER_DAUGHTER"));
			}
			break;
		case 3:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("TOWN_SECRETS_VAL_MOIRA")) > 0)
			{
				SCRIPTS::_0x7423F7835770F619(joaat("TOWN_SECRETS_VAL_MOIRA"));
			}
			break;
	}
}

void func_350(var uParam0, int iParam1)
{
	__LIB_1__::func_336(&(uParam0->f_16), iParam1);
}

void func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			__LIB_14__::func_254(0, 0, -1477943109);
			__LIB_14__::func_254(0, 1, 2089945615);
			__LIB_14__::func_254(0, 2, -2136681514);
			__LIB_14__::func_254(0, 3, 1733501235);
			break;
		case 3:
			__LIB_14__::func_254(3, 0, 531022111);
			break;
		case 2:
			__LIB_14__::func_254(2, 0, -408139633);
			__LIB_14__::func_254(2, 1, -1652509687);
			break;
		case 1:
			__LIB_14__::func_254(1, 0, -977211145);
			__LIB_14__::func_254(1, 1, -1206757990);
			break;
	}
}

void func_352(int iParam0, int iParam1)
{
	__LIB_1__::func_336(&(Global_1914319.f_3[iParam0 /*446*/].f_5), iParam1);
}

void func_353(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_797(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	__LIB_1__::func_336(&(Global_23118.f_1651[iVar1]), iParam2);
}

void func_354(int iParam0)
{
	__LIB_1__::func_913(Global_1935369.f_5[iParam0 /*11*/].f_6, 1);
	__LIB_1__::func_914(Global_1935369.f_5[iParam0 /*11*/].f_6, 0);
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1935369.f_5[iParam0 /*11*/].f_8))
	{
		VOLUME::_0xFDFECC6EE4491E11(Global_1935369.f_5[iParam0 /*11*/].f_8);
		Global_1935369.f_5[iParam0 /*11*/].f_8 = 0;
	}
	__LIB_4__::func_372(iParam0, 8192);
	__LIB_4__::func_372(iParam0, 16384);
	__LIB_4__::func_372(iParam0, 32768);
	__LIB_4__::func_372(iParam0, 131072);
	__LIB_4__::func_372(iParam0, 16777216);
	__LIB_4__::func_372(iParam0, 524288);
	__LIB_4__::func_372(iParam0, 1048576);
	Global_1935369.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1935369.f_5[Global_1935369 /*11*/].f_9 = 0;
	Global_1935369.f_5[iParam0 /*11*/] = 0;
	Global_1935369.f_5[iParam0 /*11*/].f_1 = { 0f, 0f, 0f };
	Global_1935369.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1935369.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1935369.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1935369.f_5[iParam0 /*11*/].f_7 = 0;
}

void func_355(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_120(iParam0);
	if (!__LIB_14__::func_263())
	{
		if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			PERSCHAR::_0xB65E7F733956CF25(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(iVar0);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(698203522) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(698203522))
		{
			if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(698203522, false);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x31C70A716CAE1FEE(iVar0)))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(698203522, false);
			}
		}
	}
	else if (!__LIB_0__::func_117(iParam0, 32))
	{
		if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iVar0);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(698203522) && !TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(698203522))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(698203522, true);
		}
	}
}

void func_356(int iParam0)
{
	int iVar0;
	__LIB_10__::func_681(iParam0, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_724(Global_1934182[iParam0 /*18*/].f_8[iVar0]))
		{
			if (!__LIB_4__::func_925(Global_1934182[iParam0 /*18*/].f_8[iVar0]))
			{
				__LIB_1__::func_948(Global_1934182[iParam0 /*18*/].f_8[iVar0], 0, 0, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

bool func_357(var uParam0, char* sParam1)
{
	var uVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		uVar0 = __LIB_0__::func_67(uParam0->f_8);
		if (__LIB_14__::func_268(uParam0->f_4, sParam1, joaat("SPEECH_PARAMS_FORCE_NORMAL"), 0, 1, uVar0, 0, 1))
		{
			return true;
		}
	}
	return false;
}

void func_358(int iParam0)
{
	struct<16> Var0;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (__LIB_0__::func_293(45))
			{
				return;
			}
			else
			{
				StringCopy(&(Var0.f_10), "town_secrets_sd_trelawny", 32);
			}
			break;
		case 2:
			StringCopy(&(Var0.f_10), "town_secrets_er_daughter", 32);
			break;
		case 3:
			StringCopy(&(Var0.f_10), "town_secrets_val_moira", 32);
			break;
		default:
			break;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Var0.f_10))) > 0)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var0.f_10)))
	{
		Var0.f_14 = 1024;
		Var0.f_15 = 1;
		__LIB_4__::func_709(Var0, 0);
	}
}

bool func_359(var uParam0, int iParam1)
{
	if (__LIB_14__::func_261(uParam0->f_4))
	{
		return false;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_18)))
	{
		__LIB_1__::func_283(&(uParam0->f_18), 1);
	}
	if (iParam1 < 0)
	{
		return true;
	}
	if (__LIB_0__::func_265(&(uParam0->f_18)) > IntToFloat(iParam1))
	{
		return true;
	}
	return false;
}

int func_360()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			return joaat("A_M_M_HTLROUGHTRAVELLERS_01");
		case 92:
			return joaat("A_M_M_HTLROUGHTRAVELLERS_01");
		case 5:
			if (__LIB_4__::func_930(2))
			{
				if (!__LIB_6__::func_625(5, 5, 2))
				{
					return joaat("A_M_M_SDFANCYTRAVELLERS_01");
				}
				if (!__LIB_6__::func_625(5, 5, 4))
				{
					return joaat("A_M_M_RANCHER_01");
				}
				return joaat("A_M_O_SDUPPERCLASS_01");
			}
			else
			{
				if (!__LIB_6__::func_625(5, 5, 16))
				{
					return joaat("A_M_M_LOWERSDTOWNFOLK_02");
				}
				if (!__LIB_6__::func_625(5, 5, 32))
				{
					return joaat("A_M_M_SDSLUMS_02");
				}
				return joaat("G_M_M_UNICRIMINALS_02");
			}
			break;
		case 120:
			return joaat("A_M_M_ARMTOWNFOLK_01");
		case 115:
			if (!__LIB_6__::func_625(115, 5, 2))
			{
				return joaat("A_M_M_TUMTOWNFOLK_02");
			}
			return joaat("A_M_M_TUMTOWNFOLK_01");
		case 38:
			if (!__LIB_6__::func_625(38, 5, 2) && __LIB_1__::func_187(9))
			{
				return joaat("A_M_M_BIVROUGHTRAVELLERS_01");
			}
			if (!__LIB_6__::func_625(38, 5, 16))
			{
				return joaat("A_M_M_BLWFOREMAN_01");
			}
			return joaat("A_M_M_BLWTOWNFOLK_01");
		case 105:
			if (!__LIB_6__::func_625(105, 5, 4))
			{
				return joaat("A_M_M_RANCHER_01");
			}
			return joaat("G_M_M_UNIGRAYS_01");
	}
	return 0;
}

void func_361(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_86(vParam1))
	{
		return;
	}
	Global_1395601.f_5[iParam0 /*28*/].f_15 = { vParam1 };
	Global_1395601.f_5[iParam0 /*28*/].f_18 = fParam4;
	Global_1395601.f_5[iParam0 /*28*/].f_23 = iParam5;
	if (VOLUME::_DOES_VOLUME_EXIST(iParam5))
	{
	}
	if (!__LIB_0__::func_296(242, 1, 1))
	{
		__LIB_6__::func_180(iParam0, 1);
	}
	__LIB_4__::func_913(iParam0);
	__LIB_4__::func_914(iParam0, 1);
	Global_40.f_9384[iParam0 /*2*/].f_1 = __LIB_0__::func_23();
}

bool func_362(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4)
{
	bool bVar0;
	if (fParam3 > 0f)
	{
		bVar0 = fParam3;
	}
	else
	{
		bVar0 = __LIB_8__::func_619(bParam0, Global_36, 1);
	}
	if (bParam2 > 0f)
	{
		if (bVar0 < bParam2)
		{
			return true;
		}
	}
	if (bVar0 < bParam1)
	{
		if (PED::_0x5102307CE88798EB(bParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(bParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(bParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(bParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_363(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 1, false, false);
	}
}

bool func_364()
{
	if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		return true;
	}
	return false;
}

int func_365(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != bParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, bParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(bParam1, bParam2);
	}
	return 1;
}

bool func_366(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
		{
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_367(bool bParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(bParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "honor_block");
		}
		iVar0 = (iVar0 || __LIB_0__::func_347(iParam1));
		DECORATOR::DECOR_SET_INT(bParam0, "honor_block", iVar0);
	}
}

Vector3 func_368(int iParam0, char* sParam1, char* sParam2)
{
	struct<4> Var0;
	bool bVar12;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0, sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_3;
	}
	return 0f, 0f, 0f;
}

int func_369(int iParam0, bool bParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;
	__LIB_0__::func_68(iParam0, 0, 0);
	fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0);
	if (fVar0 <= (fParam4 + -fParam3) || fVar0 >= (fParam4 + fParam3))
	{
		if (fVar0 > fParam4)
		{
			fVar0 = (fVar0 - fParam2);
		}
		else if (fVar0 < fParam4)
		{
			fVar0 = (fVar0 + fParam2);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fVar0, false);
		if (bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
		return 0;
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fVar0, false);
	if (bParam1)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
	}
	else
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
	}
	return 1;
}

bool func_370(int iParam0)
{
	var uVar0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, 0, false))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (!WEAPON::_0x5809DBCA0A37C82B(uVar0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_371(bool bParam0, var uParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return true;
	}
	if (uParam1->f_1 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_134)
	{
		if (!PED::_0xB0B2C6D170B0E8E5(uParam1->f_135[iVar0 /*2*/]))
		{
			return false;
		}
		iVar0++;
	}
	return PED::_0xA0BC8FAED8CFEB3C(bParam0);
}

bool func_372(char[4] cParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_3__::func_358(cParam0->f_5421))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(cParam0->f_5421))
	{
		iVar1 = __LIB_4__::func_956(cParam0->f_5421, iVar0);
		if (DECORATOR::DECOR_EXIST_ON(iVar1, __LIB_4__::func_611()))
		{
			iVar2 = DECORATOR::DECOR_GET_INT(iVar1, __LIB_4__::func_611());
			if (iVar2 == iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_373(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_17(*iParam0);
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(bParam1), 0);
		return 1;
	}
	return 0;
}

int func_374(var uParam0)
{
	int iVar0;
	switch (uParam0->f_77)
	{
		case 0:
			if (!uParam0->f_83)
			{
				iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@SMALL_R@PED");
			}
			else
			{
				iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE_LOOK_AT_DIAL@SMALL_R@PED");
			}
			break;
		case 1:
			if (!uParam0->f_83)
			{
				iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@MED_R@PED");
			}
			else
			{
				iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE_LOOK_AT_DIAL@MED_R@PED");
			}
			break;
		case 2:
			if (!uParam0->f_83)
			{
				iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@LARGE_R@PED");
			}
			else
			{
				iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE_LOOK_AT_DIAL@LARGE_R@PED");
			}
			break;
		case 3:
			if (!uParam0->f_83)
			{
				iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@SMALL_L@PED");
			}
			else
			{
				iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE_LOOK_AT_DIAL@SMALL_L@PED");
			}
			break;
		case 4:
			if (!uParam0->f_83)
			{
				iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@MED_L@PED");
			}
			else
			{
				iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE_LOOK_AT_DIAL@MED_L@PED");
			}
			break;
		case 5:
			if (!uParam0->f_83)
			{
				iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@LARGE_L@PED");
			}
			else
			{
				iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE_LOOK_AT_DIAL@LARGE_L@PED");
			}
			break;
	}
	return iVar0;
}

int func_375(var uParam0)
{
	int iVar0;
	switch (uParam0->f_77)
	{
		case 0:
			iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@SMALL_R@SAFE");
			break;
		case 1:
			iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@MED_R@SAFE");
			break;
		case 2:
			iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@LARGE_R@SAFE");
			break;
		case 3:
			iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@SMALL_L@SAFE");
			break;
		case 4:
			iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@MED_L@SAFE");
			break;
		case 5:
			iVar0 = joaat("CLIPSET@MINI_GAMES@STORY@MUD5@CRACKSAFE@LARGE_L@SAFE");
			break;
	}
	return iVar0;
}

Vector3 func_376(var uParam0)
{
	vector3 vVar0;
	switch (uParam0->f_77)
	{
		case 0:
			vVar0 = { 0.3171f, -0.0315f, -0.814f };
			break;
		case 1:
			vVar0 = { 0.2914f, -0.0316f, -0.1066f };
			break;
		case 2:
			vVar0 = { 0.6267f, -0.0321f, -0.1279f };
			break;
	}
	return vVar0;
}

bool func_377(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!__LIB_0__::func_27(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_378(bool bParam0, int iParam1, vector3 vParam2)
{
	bool bVar0;
	bVar0 = __LIB_8__::func_619(bParam0, vParam2, 1);
	if (bVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_379(bool bParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

void func_380(var uParam0)
{
	vector3 vVar0;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_70) && uParam0->f_71 == 1)
	{
		if (uParam0->f_77 == 0 || uParam0->f_77 == 3)
		{
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_98, uParam0->f_101.f_2, 0.325f, -0.425f, 1.15f) };
			uParam0->f_70 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, uParam0->f_101 + Vector(40f, 0f, -14f), 35f, true, 2);
		}
		else if (uParam0->f_77 == 1 || uParam0->f_77 == 4)
		{
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_98, uParam0->f_101.f_2, 0.3f, -0.4f, 1f) };
			uParam0->f_70 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, uParam0->f_101 + Vector(40f, 0f, -14f), 35f, true, 2);
		}
		else if (uParam0->f_77 == 2 || uParam0->f_77 == 5)
		{
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_98, uParam0->f_101.f_2, 0.3f, -0.4f, 1.1f) };
			uParam0->f_70 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vVar0, uParam0->f_101 + Vector(46f, 0f, -8.3f), 35f, true, 2);
		}
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(uParam0->f_70, true);
	}
}

Vector3 func_381(vector3 vParam0, vector3 vParam3, float fParam6)
{
	fParam6 = (fParam6 * fParam6);
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

int func_382(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar0 = 0;
	switch (uParam0->f_79)
	{
		case 0:
			iVar1 = uParam0->f_86;
			break;
		case 1:
			iVar1 = uParam0->f_87;
			break;
		case 2:
			iVar1 = uParam0->f_88;
			break;
	}
	fVar3 = uParam0->f_96;
	iVar2 = BUILTIN::CEIL((fVar3 * 100f));
	switch (uParam0->f_80)
	{
		case 1:
			if (iVar2 > iVar1)
			{
				iVar0 = (iVar2 - iVar1);
			}
			else if (iVar2 < iVar1)
			{
				iVar0 = (iVar2 + (100 - iVar1));
			}
			break;
		case 0:
			if (iVar2 > iVar1)
			{
				iVar0 = (iVar1 + (100 - iVar2));
			}
			else if (iVar2 < iVar1)
			{
				iVar0 = (iVar1 - iVar2);
			}
			break;
	}
	return iVar0;
}

float func_383(float fParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (fParam0 > 0.5f && fParam1 < 0.5f)
	{
		fVar3 = (fParam1 + 1f);
		fVar0 = MISC::ABSF((fParam0 - fParam1));
		fVar1 = MISC::ABSF((fVar3 - fParam0));
	}
	else if (fParam1 > 0.5f && fParam0 < 0.5f)
	{
		fVar2 = (fParam0 + 1f);
		fVar0 = MISC::ABSF((fVar2 - fParam1));
		fVar1 = MISC::ABSF((fParam1 - fParam0));
	}
	else
	{
		fVar0 = MISC::ABSF((fParam0 - fParam1));
		fVar1 = MISC::ABSF((fParam1 - fParam0));
	}
	if (fVar0 < fVar1)
	{
		return fVar0;
	}
	return fVar1;
}

bool func_384(var uParam0)
{
	float fVar0;
	float fVar1;
	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(2, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(2, joaat("INPUT_MOVE_UD"));
	if ((((fVar0 >= 0.7f || fVar0 <= -0.7f) || fVar1 >= 0.7f) || fVar1 <= -0.7f) || PAD::_IS_USING_KEYBOARD(0))
	{
		return true;
	}
	return false;
}

float func_385(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(2, joaat("INPUT_MOVE_LR"));
	fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(2, joaat("INPUT_MOVE_UD"));
	if (((fVar1 >= 0.7f || fVar1 <= -0.7f) || fVar2 >= 0.7f) || fVar2 <= -0.7f)
	{
		if (fVar1 > 0f && fVar2 < 0f)
		{
			fVar0 = (fVar1 / 4f);
		}
		if (fVar2 > 0f && fVar1 > 0f)
		{
			fVar0 = (0.25f + (fVar2 / 4f));
		}
		if (fVar1 < 0f && fVar2 > 0f)
		{
			fVar0 = (0.5f + (0.25f - (fVar2 / 4f)));
		}
		if (fVar1 < 0f && fVar2 < 0f)
		{
			fVar0 = (0.75f + MISC::ABSF((fVar2 / 4f)));
		}
	}
	return fVar0;
}

float func_386(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(2, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(2, joaat("INPUT_MOVE_UD"));
	if (((fVar0 >= 0.7f || fVar0 <= -0.7f) || fVar1 >= 0.7f) || fVar1 <= -0.7f)
	{
		if (fVar0 > 0f && fVar1 < 0f)
		{
			fVar3 = (fVar0 / 4f);
		}
		if (fVar1 > 0f && fVar0 > 0f)
		{
			fVar3 = (0.25f + (fVar1 / 4f));
		}
		if (fVar0 < 0f && fVar1 > 0f)
		{
			fVar3 = (0.5f + (0.25f - (fVar1 / 4f)));
		}
		if (fVar0 < 0f && fVar1 < 0f)
		{
			fVar3 = (0.75f + MISC::ABSF((fVar1 / 4f)));
		}
	}
	fVar2 = (uParam0->f_93 - fVar3);
	return fVar2;
}

bool func_387(var uParam0)
{
	float fVar0;
	float fVar1;
	fVar0 = (uParam0->f_95 + 0.3f);
	fVar1 = (uParam0->f_95 - 0.3f);
	if (uParam0->f_94 < fVar0 && uParam0->f_94 > fVar1)
	{
		return true;
	}
	return false;
}

int func_388(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	switch (uParam0->f_79)
	{
		case 0:
			iVar0 = uParam0->f_86;
			break;
		case 1:
			iVar0 = uParam0->f_87;
			break;
		case 2:
			iVar0 = uParam0->f_88;
			break;
	}
	fVar1 = uParam0->f_96;
	iVar2 = BUILTIN::CEIL((fVar1 * 100f));
	uParam0->f_90 = iVar2;
	iVar3 = (iVar0 - iVar2);
	if (iVar3 < 0)
	{
		iVar3 = -iVar3;
	}
	return iVar3;
}

void func_389(bool bParam0)
{
	if (__LIB_0__::func_104())
	{
		__LIB_0__::func_105(1);
	}
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	if (bParam0)
	{
		__LIB_5__::func_20(0, 0);
	}
}

void func_390(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_3__::func_358(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(Param0))
	{
		iVar1 = __LIB_4__::func_956(Param0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					ENTITY::_SET_ENTITY_HEALTH(iVar1, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

int func_391(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*bParam1, false, false))
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*bParam1, iParam2) != *uParam0)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*bParam1, iParam2))
		{
			if (iParam3 && __LIB_2__::func_424(*bParam1))
			{
				iParam2 = __LIB_2__::func_425(*bParam1);
			}
			else
			{
				return 0;
			}
		}
		if (PED::IS_PED_ON_MOUNT(*uParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(*uParam0, true, false);
		}
		PED::SET_PED_INTO_VEHICLE(*uParam0, *bParam1, iParam2);
	}
	return 1;
}

void func_392(char[4] cParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (!__LIB_11__::func_270(cParam0, bParam1, &iVar0))
	{
		return;
	}
	__LIB_0__::func_7(&(cParam0->f_5423[iVar0 /*65*/].f_6), iParam2);
}

void func_393(char[4] cParam0, bool bParam1, char* sParam2, bool bParam3)
{
	__LIB_8__::func_858(&(cParam0->f_5310), bParam1, sParam2, bParam3);
}

bool func_394(vector3 vParam0, bool bParam3)
{
	if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		if (bParam3)
		{
			__LIB_2__::func_614(vParam0);
		}
		__LIB_3__::func_595(vParam0);
		return true;
	}
	return false;
}

void func_395(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (__LIB_11__::func_683(bParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(bParam0, 0);
	PED::_0x931B241409216C1F(Global_35, bParam0, 0);
	PED::_0xB8B6430EAD2D2437(bParam0, joaat("PLAYER_HORSE"));
	iVar1 = ENTITY::GET_ENTITY_MODEL(bParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	POPULATION::_0xF74E134F40192884(bParam0, 1);
	PED::_0xFD6943B6DF77E449(bParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(bParam0);
	FLOCK::_0xAEB97D84CDF3C00B(bParam0, 0);
	if (__LIB_11__::func_660(bParam0))
	{
		iVar3 = __LIB_11__::func_245(bParam0);
		if (__LIB_0__::func_578(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(bParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 24, false);
}

void func_396(var uParam0)
{
	int iVar0;
	__LIB_11__::func_277(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1406[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1406[iVar0 /*41*/].f_22)) && __LIB_4__::func_638(uParam0, iVar0)) && !__LIB_0__::func_164(&(uParam0->f_1406[iVar0 /*41*/]), 1))
			{
				if (!__LIB_5__::func_8(uParam0, &(uParam0->f_1406[iVar0 /*41*/].f_22)))
				{
					__LIB_1__::func_104(&(uParam0->f_2161), uParam0->f_1406[iVar0 /*41*/].f_22, 0, -1, 1, 0);
				}
				__LIB_4__::func_639(&(uParam0->f_1406[iVar0 /*41*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_397(char[4] cParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (__LIB_5__::func_31(&(cParam0->f_5423[iVar0 /*65*/])))
		{
			bVar1 = cParam0->f_5423[iVar0 /*65*/];
			if (!ENTITY::IS_ENTITY_DEAD(bVar1) && bParam2 != bVar1)
			{
				if (bParam1)
				{
					__LIB_11__::func_691(cParam0, bVar1, 4096);
					if (__LIB_11__::func_682(cParam0, bVar1, 1024))
					{
						iVar2 = MAP::GET_BLIP_FROM_ENTITY(bVar1);
						if (MAP::DOES_BLIP_EXIST(iVar2))
						{
							MAP::_BLIP_SET_MODIFIER(iVar2, -546708623);
							MAP::_BLIP_SET_MODIFIER(iVar2, 231194138);
						}
					}
				}
				else
				{
					__LIB_11__::func_689(cParam0, bVar1, 4096);
					if (__LIB_11__::func_682(cParam0, bVar1, 1024))
					{
						iVar3 = MAP::GET_BLIP_FROM_ENTITY(bVar1);
						if (MAP::DOES_BLIP_EXIST(iVar3))
						{
							MAP::_BLIP_REMOVE_MODIFIER(iVar3, -546708623);
							MAP::_BLIP_REMOVE_MODIFIER(iVar3, 231194138);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

struct<8> func_398(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		StringCopy(&cVar0, __LIB_10__::func_871(iParam1), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
		{
			iVar8 = __LIB_0__::func_174(uParam0, iParam1);
			if (iVar8 > 0)
			{
				StringConCat(&cVar0, "^", 64);
				StringIntConCat(&cVar0, iVar8, 64);
			}
		}
	}
	return cVar0;
}

void func_399(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	__LIB_1__::func_108(iParam0);
	if (__LIB_0__::func_823(iParam0))
	{
		if (__LIB_0__::func_825(iParam0) != iVar0)
		{
			return;
		}
	}
	__LIB_0__::func_798(iParam0);
	__LIB_4__::func_965(iParam0);
	bVar1 = __LIB_0__::func_398(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(bVar1) && !PED::IS_PED_INJURED(bVar1))
		{
		}
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar1, true, true);
		}
		iVar2 = ENTITY::GET_ENTITY_MODEL(bVar1);
		if (PED::_0xAA9F048DCF69B6DC(iVar2))
		{
			if (!__LIB_1__::func_1(iVar2))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar2, false);
			}
		}
		__LIB_11__::func_279(iParam0);
	}
}

void func_400(bool bParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(bParam0, "HorseCompanion", true);
	__LIB_11__::func_259(bParam0, __LIB_1__::func_20(iParam1));
	if (__LIB_0__::func_858(iParam1, 8))
	{
		POPULATION::_0xF74E134F40192884(bParam0, 2);
		PED::SET_PED_CONFIG_FLAG(bParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(bParam0, 412, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_8__::func_593(iParam1)))
	{
		PED::_0x931B241409216C1F(__LIB_8__::func_593(iParam1), bParam0, 0);
		PED::_0xED1C764997A86D5A(__LIB_8__::func_593(iParam1), bParam0);
		PED::SET_PED_CONFIG_FLAG(bParam0, 367, true);
	}
	else
	{
		__LIB_0__::func_288(iParam1, 38, 1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(bParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	if (Global_40.f_4283 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(bParam0, 172, true);
	}
	PED::SET_PED_CONFIG_FLAG(bParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 442, true);
	if (__LIB_0__::func_858(iParam1, 4096))
	{
		PED::SET_PED_CONFIG_FLAG(bParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(bParam0, 54, false);
		PED::SET_PED_CONFIG_FLAG(bParam0, 121, false);
		PED::SET_PED_CONFIG_FLAG(bParam0, 302, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(bParam0, 1, true);
		PED::SET_PED_CONFIG_FLAG(bParam0, 54, true);
		PED::SET_PED_CONFIG_FLAG(bParam0, 121, true);
		PED::SET_PED_CONFIG_FLAG(bParam0, 302, true);
	}
	PED::_0xAE6004120C18DF97(bParam0, 2, 0);
	PED::_0xAE6004120C18DF97(bParam0, 3, 0);
	__LIB_11__::func_694(iParam1, __LIB_0__::func_858(iParam1, 8192), __LIB_0__::func_858(iParam1, 16384), 1);
}

void func_401(var uParam0)
{
	__LIB_1__::func_281(&(uParam0->f_120), 1, 1);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
}

void func_402(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_43619[iVar0 /*12*/]))
		{
			cParam0->f_7375.f_13[iVar0 /*12*/] = { Global_43619[iVar0 /*12*/] };
			__LIB_11__::func_289(&(cParam0->f_10792), Global_43619[iVar0 /*12*/], &(Global_43619[iVar0 /*12*/].f_1), 0);
		}
		iVar0++;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(cParam0->f_7375.f_804);
	}
	if (__LIB_0__::func_1(Global_1935630, 524288))
	{
		__LIB_0__::func_8(&Global_1935630, 524288);
		__LIB_8__::func_665(cParam0, 67108864);
	}
}

void func_403(char[4] cParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	__LIB_11__::func_695(cParam0, bParam1, sParam2, iParam3, iParam4, bParam5, 0);
	__LIB_11__::func_289(&(cParam0->f_10792), bParam1, sParam2, bParam6);
}

void func_404(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return;
	}
	bVar0 = __LIB_8__::func_592(iParam1);
	if (__LIB_0__::func_211(iParam1))
	{
		if (!__LIB_0__::func_212(iParam1))
		{
			return;
		}
	}
	__LIB_0__::func_290(iParam1, 39, 1);
	__LIB_0__::func_213(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	__LIB_0__::func_213(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!bParam2)
		{
			__LIB_0__::func_213(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(bVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar0, false);
			__LIB_0__::func_288(iParam1, 43, 1);
		}
		if (bParam4)
		{
			__LIB_11__::func_291(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_405(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				__LIB_11__::func_706(bParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				__LIB_11__::func_706(bParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

int func_406(char[4] cParam0, bool bParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[32] cParam10, int iParam18, float fParam19, bool bParam20, bool bParam21)
{
	bool bVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0;
	}
	if (!__LIB_0__::func_266(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(bParam1, true, false), fParam19, 1, 1))
	{
		__LIB_9__::func_351(cParam0, cParam10, 1, 0);
		return 1;
	}
	else
	{
		bVar0 = true;
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_11__::func_247(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) != bParam1)
				{
					bVar0 = false;
				}
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
		{
			if (__LIB_11__::func_247(Global_1935630.f_40) != bParam1)
			{
				bVar0 = false;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			if (!__LIB_8__::func_642(cParam0, iParam18))
			{
				__LIB_9__::func_57(cParam0, &cParam2, bParam20);
				__LIB_8__::func_698(cParam0, iParam18);
				cParam0->f_5304 = { ENTITY::GET_ENTITY_COORDS(bParam1, true, false) };
			}
			return 1;
		}
		else if (__LIB_8__::func_642(cParam0, iParam18))
		{
			__LIB_8__::func_699(cParam0, iParam18);
			if (!__LIB_8__::func_652(cParam0))
			{
				if (bParam21)
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_8__::func_653(cParam0);
				}
			}
			else
			{
				__LIB_8__::func_654(cParam0);
			}
		}
	}
	return 0;
}

int func_407(int iParam0, bool bParam1)
{
	int iVar0;
	struct<15> Var1;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (__LIB_8__::func_852(iParam0, 0))
	{
		__LIB_11__::func_702(iParam0, 1);
		return 1;
	}
	if (!__LIB_1__::func_287())
	{
		return 0;
	}
	if (bParam1)
	{
		__LIB_8__::func_834(iParam0, 0, "Adding to Group");
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == -1)
		{
			Global_1359489[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
	__LIB_11__::func_702(iParam0, 1);
	Global_1359489.f_15 = __LIB_1__::func_149(1);
	__LIB_0__::func_288(iParam0, 32, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_COMPANION_GROUP"));
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, true);
	PED::_0x9238A3D970BBB0A9(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);
	if (COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(__LIB_8__::func_593(iParam0), COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(__LIB_8__::func_593(iParam0), Global_1391438.f_414.f_37);
	}
	PED::_0x89E59DBD15E21177(__LIB_0__::func_110(), 0);
	__LIB_8__::func_856(iParam0);
	Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0 /*1157*/];
	Var1.f_7 = __LIB_0__::func_12();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	return 1;
}

void func_408(int iParam0)
{
	int iVar0;
	struct<15> Var1;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (!__LIB_8__::func_852(iParam0, 0))
	{
	}
	__LIB_11__::func_703(iParam0);
	Global_1359489.f_15 = __LIB_1__::func_149(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			Global_1359489[iVar0] = -1;
		}
		iVar0++;
	}
	__LIB_1__::func_289();
	__LIB_0__::func_290(iParam0, 32, 1);
	if (__LIB_8__::func_601(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = __LIB_0__::func_12();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

int func_409(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!__LIB_1__::func_711(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
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
				__LIB_8__::func_904(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_8__::func_904(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_8__::func_904(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		__LIB_8__::func_904(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_8__::func_904(19, 0, iVar5, bParam0, 0);
	}
	return 1;
}

int func_410(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0;
	}
	if (!__LIB_0__::func_52(iParam2))
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_468(iParam2, -1);
	if (!__LIB_8__::func_588(bParam1, iVar0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam1, "metaped_outfit_request") && DECORATOR::DECOR_EXIST_ON(bParam1, "metaped_outfit_request_name"))
	{
		iVar1 = DECORATOR::DECOR_GET_INT(bParam1, "metaped_outfit_request_name");
		if (iVar1 == iVar0)
		{
			return 1;
		}
		else
		{
			__LIB_8__::func_839(iParam0, bParam1);
		}
	}
	iVar2 = PED::_REQUEST_METAPED_OUTFIT(ENTITY::GET_ENTITY_MODEL(bParam1), iVar0);
	DECORATOR::DECOR_SET_INT(bParam1, "metaped_outfit_request", iVar2);
	DECORATOR::DECOR_SET_INT(bParam1, "metaped_outfit_request_name", iVar0);
	return 1;
}

int func_411(char[4] cParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return iVar0;
	}
	bVar1 = __LIB_11__::func_681(cParam0, bParam1);
	bVar2 = (ENTITY::IS_ENTITY_A_PED(bParam1) && __LIB_0__::func_407(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1)));
	if (bVar2)
	{
		iVar3 = __LIB_4__::func_656(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1));
	}
	if (bVar1)
	{
		__LIB_11__::func_689(cParam0, bParam1, 128);
		if (bParam4)
		{
			__LIB_11__::func_689(cParam0, bParam1, 1024);
		}
	}
	if (ENTITY::IS_ENTITY_A_PED(bParam1) && bParam4)
	{
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(bParam1);
		if (bVar2)
		{
			__LIB_0__::func_900(iVar3);
			if (MAP::DOES_BLIP_EXIST(iVar0))
			{
				MAP::_BLIP_SET_MODIFIER(iVar0, -546708623);
				if (bParam5)
				{
					MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
				}
			}
		}
		else if (__LIB_11__::func_681(cParam0, bParam1) && MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::_BLIP_SET_MODIFIER(iVar0, -546708623);
			if (bParam5)
			{
				MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
			}
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(iVar0))
			{
				iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam3, bParam1);
			}
			MAP::_BLIP_SET_MODIFIER(iVar0, -546708623);
			if (bParam5)
			{
				MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
			}
		}
	}
	if (bVar1)
	{
		if (__LIB_11__::func_270(cParam0, bParam1, &iVar4))
		{
			__LIB_8__::func_892(&(cParam0->f_5423[iVar4 /*65*/]));
		}
	}
	if (bVar2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		__LIB_10__::func_885(iVar3);
	}
	return iVar0;
}

void func_412()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;
	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER"));
	if (!bVar0)
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED")))
	{
		return;
	}
	Var1 = { __LIB_14__::func_107() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
		if (__LIB_1__::func_708(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { __LIB_14__::func_107() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		__LIB_1__::func_826(joaat("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), Var1, 1423542233);
		__LIB_1__::func_826(joaat("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), Var1, -1264898804);
		__LIB_1__::func_826(joaat("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), Var1, 1592019450);
		__LIB_1__::func_826(joaat("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), Var1, 1117400455);
		__LIB_1__::func_826(joaat("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), Var1, 1150213537);
		__LIB_1__::func_826(joaat("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), Var1, 1598825281);
		__LIB_1__::func_826(joaat("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), Var1, -712527121);
		__LIB_1__::func_826(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), Var1, 454332195);
		__LIB_1__::func_826(joaat("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), Var1, 256105670);
		__LIB_1__::func_826(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), Var1, -1328061889);
		__LIB_1__::func_826(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), Var1, -782241404);
		__LIB_1__::func_826(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), Var1, 1669853467);
		__LIB_1__::func_826(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), Var1, -1559225678);
		__LIB_1__::func_826(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !__LIB_0__::func_91())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (__LIB_0__::func_154(iVar16))
			{
				if (iVar16 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
					{
						if (__LIB_0__::func_293(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((__LIB_0__::func_293(24) && __LIB_0__::func_154(iVar15)) && iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
					}
				}
			}
			else if (!__LIB_0__::func_154(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
			else if (iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
				if (__LIB_0__::func_293(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}
}

int func_413(char[4] cParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (__LIB_11__::func_709(cParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_0__::func_31(uParam1->f_10))
	{
		PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 53, true);
	}
	__LIB_8__::func_892(uParam1);
	__LIB_5__::func_311(uParam1);
	if (!bParam2)
	{
		__LIB_11__::func_710(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_ENTITY_EXPLOSION"):
				__LIB_9__::func_474(cParam0, uParam1, iVar0);
				break;
			case joaat("EVENT_ENTITY_DAMAGED"):
			case 2145012826:
				__LIB_9__::func_475(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	__LIB_11__::func_711(cParam0, uParam1);
	__LIB_5__::func_75(uParam1);
	return 0;
}

int func_414(int iParam0)
{
	__LIB_0__::func_11(iParam0);
	return 1;
}

void func_415(var uParam0, int iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *uParam0, iParam1->f_56, 0);
	fVar0 = __LIB_0__::func_514(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	__LIB_11__::func_449(uParam0, iParam1, uParam2, fVar0);
	__LIB_6__::func_741(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_6__::func_785(iParam1, uParam2, uParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_6__::func_789(iParam1, uParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				__LIB_3__::func_109(iParam1);
			}
		}
	}
}

bool func_416(char[4] cParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	POPULATION::_0xF45E46DEECF7DF6E(10240, 0, 0, -1, -1);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	return cParam0->f_607 == cParam0->f_607;
}

void func_417(char[4] cParam0, float fParam1)
{
	cParam0->f_13144 = fParam1;
}

void func_418(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (bParam2 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, 8, iParam1);
}

void func_419(int iParam0)
{
	__LIB_8__::func_783(iParam0);
	__LIB_0__::func_123(iParam0, 32);
}

void func_420(int iParam0)
{
	__LIB_5__::func_458(iParam0);
	__LIB_0__::func_121(iParam0, 32);
}

var func_421(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, float fParam10, int iParam11, int iParam12, bool bParam13)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	vVar1 = { __LIB_2__::func_66(vParam1, vParam4, iParam11) };
	vVar4 = { __LIB_2__::func_67(vParam1, vParam4, iParam11) };
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = __LIB_9__::func_402(vParam1, vParam4);
	}
	MISC::CLEAR_AREA(vParam7, fParam10, 1064960);
	MISC::_0x2FCD528A397E5C88(*uParam0, 1064960);
	PED::SET_PED_NON_CREATION_AREA(vVar1, vVar4);
	PATHFIND::SET_PED_PATHS_IN_AREA(vVar1, vVar4, false, 0);
	POPULATION::_0x18262CAFEBB5FBE1(*uParam0, iParam12, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(*uParam0, iParam12, 0, 0, -1, -1, 2);
	uVar0 = PED::_0x4C39C95AE5DB1329(*uParam0, bParam13, 15);
	return uVar0;
}

void func_422(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = __LIB_3__::func_970(iParam0);
	__LIB_0__::func_974(iVar0);
	__LIB_2__::func_472(iParam3, sParam1, iParam2);
}

void func_423(char[4] cParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	iVar0 = __LIB_9__::func_341(cParam0, __LIB_8__::func_867(iParam1));
	if (DECORATOR::DECOR_EXIST_ON(iParam1, __LIB_4__::func_611()))
	{
		DECORATOR::DECOR_REMOVE(iParam1, __LIB_4__::func_611());
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	__LIB_11__::func_379(cParam0, iVar0);
}

void func_424(char[4] cParam0)
{
	if (!__LIB_4__::func_505(&(cParam0->f_8269)))
	{
		return;
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 268435456))
	{
		return;
	}
	__LIB_9__::func_958(cParam0);
}

bool func_425(char[4] cParam0, vector3 vParam1, float fParam4, float fParam5, char* sParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, bool bParam12)
{
	bool bVar0;
	bool bVar1;
	if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
	{
		return false;
	}
	bVar0 = __LIB_8__::func_642(cParam0, 4);
	bVar1 = __LIB_9__::func_471(cParam0, vParam1, fParam4, fParam5, 4, sParam6, iParam7, fParam10, fParam11);
	if (__LIB_6__::func_863(cParam0) != 1 && bParam12)
	{
		if (bVar1)
		{
			if (!bVar0)
			{
				if (MAP::DOES_BLIP_EXIST(cParam0->f_5303))
				{
					MAP::REMOVE_BLIP(&(cParam0->f_5303));
				}
				cParam0->f_5303 = __LIB_5__::func_442(vParam1, 0);
				iParam9 = iParam9;
				if (ITEMSET::IS_ITEMSET_VALID(iParam8))
				{
					__LIB_5__::func_444(&iParam8, 0);
				}
				__LIB_9__::func_241(cParam0, 0, 0);
				__LIB_8__::func_698(cParam0, 4);
			}
		}
		else if (bVar0)
		{
			if (MAP::DOES_BLIP_EXIST(cParam0->f_5303))
			{
				MAP::REMOVE_BLIP(&(cParam0->f_5303));
			}
			if (ITEMSET::IS_ITEMSET_VALID(iParam8))
			{
				__LIB_5__::func_444(&iParam8, 1);
			}
			__LIB_9__::func_241(cParam0, 1, 0);
			__LIB_8__::func_699(cParam0, 4);
		}
		if (MAP::DOES_BLIP_EXIST(cParam0->f_5303))
		{
			if (!__LIB_0__::func_175(MAP::GET_BLIP_COORDS(cParam0->f_5303), vParam1, 1056964608 /* Float: 0.5f */, 1))
			{
				MAP::SET_BLIP_COORDS(cParam0->f_5303, vParam1);
			}
		}
	}
	return bVar1;
}

bool func_426(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_562(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_2286 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_2287 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_2289 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_2287)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_2288 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_2288 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_2289)
		{
			uParam0->f_2291 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_2292 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_5__::func_62(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_9__::func_911(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					__LIB_5__::func_376(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_574(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_8__::func_812(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_4__::func_562(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_2074 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_4__::func_575(uParam0, uParam0->f_2074))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_9__::func_54(uParam0);
			}
		}
	}
	bVar0 = __LIB_5__::func_500(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_4__::func_562(uParam0, 268435456) && bVar1) && !__LIB_4__::func_562(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292);
			if (uParam0->f_2074 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1406[uParam0->f_2074 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_2292)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_4__::func_532(uParam0, 131072);
				__LIB_4__::func_532(uParam0, 268435456);
			}
		}
		if (__LIB_4__::func_577(uParam0, 64) || (uParam0->f_2074 >= 0 && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_4__::func_562(uParam0, 131072))
	{
		__LIB_4__::func_984(uParam0);
		if (!__LIB_4__::func_562(uParam0, 262144))
		{
			if ((bVar0 && __LIB_4__::func_562(uParam0, 65536)) || __LIB_4__::func_562(uParam0, 131072))
			{
				__LIB_4__::func_532(uParam0, 32768);
				__LIB_4__::func_574(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_2159 = 1;
				__LIB_8__::func_812(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_9__::func_165(uParam0, iParam5);
		__LIB_4__::func_578(uParam0);
		if (!__LIB_4__::func_579(uParam0, 1))
		{
			__LIB_5__::func_63(uParam0);
		}
		__LIB_4__::func_580(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_5__::func_501(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_6__::func_920(uParam0);
			break;
		case 2:
			__LIB_5__::func_502(uParam0);
			break;
		case 3:
			if (__LIB_4__::func_581(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2074 /*41*/].f_27, uParam0->f_1735[uParam0->f_2074 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_2262));
				__LIB_4__::func_574(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_4__::func_562(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_4__::func_985(uParam0))
				{
					__LIB_4__::func_574(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_4__::func_986(uParam0))
				{
					__LIB_4__::func_574(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || __LIB_0__::func_264(&(uParam0->f_2262)) >= 15f)
			{
				if (__LIB_5__::func_308(uParam0, iParam5))
				{
					if (__LIB_4__::func_583(uParam0))
					{
						uParam0->f_2075 = __LIB_5__::func_64(uParam0);
						__LIB_1__::func_148(&(uParam0->f_2262));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_4__::func_574(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_4__::func_574(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_8__::func_812(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_5__::func_308(uParam0, iParam5))
			{
				__LIB_8__::func_812(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

int func_427(vector3 vParam0, vector3 vParam3, float fParam6)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;
	vVar1 = { vParam0 + vParam3 / Vector(2f, 2f, 2f) };
	vVar4 = { vParam3 - vParam0 };
	vVar4.f_2 = 0f;
	vVar7 = { __LIB_4__::func_335(vVar4) };
	fVar10 = (vParam3.z - vParam0.z);
	vVar11.x = BUILTIN::VMAG(vVar4);
	vVar11.f_1 = fParam6;
	vVar11.f_2 = MISC::ABSF(fVar10);
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(vVar1, vVar7, vVar11);
	return iVar0;
}

void func_428(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 12;
	iVar2 = __LIB_0__::func_357(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (__LIB_0__::func_157(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	if (__LIB_0__::func_451(-1586649372) && __LIB_0__::func_157(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			__LIB_1__::func_184(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 525
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 656
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1416; //curOff = 691
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 787
				__LIB_1__::func_184(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1416; //curOff = 808
				if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((__LIB_0__::func_218(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				Jump @1416; //curOff = 1131
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 1229
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (__LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			switch (__LIB_0__::func_357(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]) || __LIB_0__::func_192(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_429()
{
	if ((((((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_LR")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_UD"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_LEFT_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_RIGHT_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_UP_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_DOWN_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_JUMP"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MELEE_ATTACK")))
	{
		return true;
	}
	return false;
}

bool func_430(int iParam0, var uParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, uParam1, &Var0))
	{
		return false;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_431(int iParam0, int iParam1)
{
	return __LIB_11__::func_156(iParam0, iParam1) > 0;
}

bool func_432(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return __LIB_4__::func_60(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_433(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	if (__LIB_0__::func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = __LIB_0__::func_560(__LIB_0__::func_12(), iParam0);
		}
		iVar1 = MISC::GET_FRAME_COUNT();
		if (Global_1914319.f_3[iParam0 /*446*/].f_444 >= iVar1)
		{
			return Global_1914319.f_3[iParam0 /*446*/].f_445;
		}
		iVar0 = (__LIB_6__::func_845(iParam1) || __LIB_2__::func_988(__LIB_3__::func_737(iParam0)));
		Global_1914319.f_3[iParam0 /*446*/].f_444 = iVar1;
		Global_1914319.f_3[iParam0 /*446*/].f_445 = iVar0;
	}
	return iVar0;
}

bool func_434(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -15;
	iVar1 = 0;
	if (iParam0 == 105)
	{
		iVar2 = __LIB_10__::func_669(iParam0);
		if (!__LIB_2__::func_767(iVar2, 0))
		{
			iVar0 = __LIB_6__::func_677(iVar2);
			if (iVar0 != -15)
			{
				__LIB_1__::func_446(&iVar0, 0, 0, 0, 7, 0, 0, 0);
				*iParam1 = iVar0;
				iVar1 = 1;
			}
		}
		else
		{
			iVar0 = __LIB_6__::func_677(iVar2);
			if (iVar0 != -15)
			{
				__LIB_1__::func_446(&iVar0, 0, 0, 0, 7, 0, 0, 0);
				*iParam1 = iVar0;
				iVar1 = 1;
			}
		}
	}
	iVar3 = __LIB_10__::func_46(iParam0);
	if (!__LIB_2__::func_767(iVar3, 0))
	{
		iVar0 = __LIB_6__::func_677(iVar3);
		if (iVar0 != -15)
		{
			__LIB_1__::func_446(&iVar0, 0, 0, 0, 7, 0, 0, 0);
			*iParam1 = iVar0;
		}
	}
	else
	{
		iVar0 = __LIB_6__::func_677(iVar3);
		if (iVar0 != -15)
		{
			__LIB_1__::func_446(&iVar0, 0, 0, 0, 7, 0, 0, 0);
			if (__LIB_1__::func_110(iVar0, *iParam1, 1))
			{
				*iParam1 = iVar0;
				iVar1 = 1;
			}
		}
	}
	return iVar1;
}

bool func_435(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_5(iParam0))
	{
		return false;
	}
	return __LIB_2__::func_271(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_436()
{
	return __LIB_11__::func_192(7);
}

int func_437(int iParam0)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return 1;
	}
	return __LIB_2__::func_271(Global_1392626[iParam0 /*32*/].f_3, 1);
}

Vector3 func_438()
{
	return -0.235327f, 1.850775f, 0f;
}

void func_439(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 512;
	if (iParam1 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam1 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam1 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam1 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam1 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::_0x2FCD528A397E5C88(uParam0, iVar0);
}

int func_440(int iParam0)
{
	return Global_1935369.f_5[iParam0 /*11*/].f_4;
}

int func_441(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("VAL_BARTENDER");
		case 6:
			return joaat("VAL_SLUM_BARTENDER");
		case 3:
			return joaat("RHD_BARTENDER");
		case 2:
			return joaat("SDN_BARTENDER");
		case 1:
			return joaat("SDN_BARTENDER_SLUMS");
		case 8:
			return joaat("VHT_BARTENDER");
		case 0:
			return joaat("BLW_BARTENDER");
		case 4:
			return joaat("TBL_BARTENDER");
		case 7:
			return joaat("AMD_BARTENDER");
		default:
			break;
	}
	return 0;
}

void func_442(float fParam0)
{
	if ((Global_1357549.f_1495 & 512 != 0 || PED::IS_PED_ON_MOUNT(Global_35)) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		if (fParam0 >= 0.75f)
		{
			Global_1935436.f_9 = (0.75f - 0.01f);
			return;
		}
	}
	if (fParam0 < 0f)
	{
		Global_1935436.f_9 = 0f;
	}
	else if (fParam0 > 1f)
	{
		Global_1935436.f_9 = 1f;
	}
	else
	{
		Global_1935436.f_9 = fParam0;
	}
}

void func_443(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = -1406986790;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = PED::_0xB292203008EBBAAC(iParam1);
	if (iVar0 == 788161705)
	{
		StringCopy(&(Global_1393529.f_288[iParam0 /*8*/]), "0840_S_M_M_MarketVendor_01_BLACK_01", 64);
	}
	else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) >= 2)
	{
		StringCopy(&(Global_1393529.f_288[iParam0 /*8*/]), "0838_S_M_M_MarketVendor_01_WHITE_01", 64);
	}
	else
	{
		StringCopy(&(Global_1393529.f_288[iParam0 /*8*/]), "0839_S_M_M_MarketVendor_01_WHITE_02", 64);
	}
}

void func_444(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	__LIB_12__::func_511(iParam1, iParam2);
	__LIB_12__::func_512(iParam1, iParam4);
	__LIB_12__::func_513(iParam1, iParam4);
	TELEMETRY::_TELEMETRY_SHOP_PURCHASE(__LIB_6__::func_676(iParam0), __LIB_0__::func_561(iParam1), iParam2, iParam3, iParam4);
}

bool func_445(int iParam0)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_627(iParam0, 0))
	{
		return false;
	}
	if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 64))
	{
		return true;
	}
	return false;
}

bool func_446(int iParam0)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return false;
	}
	return Global_40.f_9384[iParam0 /*2*/] & 1 != 0;
}

bool func_447(int iParam0)
{
	return __LIB_1__::func_935(iParam0, 8388608);
}

bool func_448(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_4__::func_850();
	if (__LIB_1__::func_917(iVar0))
	{
		if (__LIB_2__::func_793(iVar0))
		{
			return true;
		}
	}
	return AUDIO::IS_ANY_SPEECH_PLAYING(iParam0);
}

void func_449()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_ANIMAL"), false);
}

var func_450()
{
	return Global_1935496.f_12;
}

void func_451()
{
	if (Global_1572887.f_12 == -1)
	{
		return;
	}
	Global_1058888.f_2 = 0;
}

int func_452(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0xA4550FE9C512E3DD(iParam0);
}

void func_453(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = -153135980;
			break;
		case 1:
			*uParam1 = 12851681;
			break;
		case 2:
			*uParam1 = 1386325051;
			break;
		case 3:
			*uParam1 = 43722464;
			break;
		case 4:
			*uParam1 = -581476215;
			break;
		case 5:
			*uParam1 = -1906982261;
			break;
		case 9:
			*uParam1 = -1035806543;
			break;
		case 10:
			*uParam1 = 1579284209;
			break;
		case 11:
			*uParam1 = -1172613177;
			break;
		case 12:
			*uParam1 = 495869290;
			break;
		case 16:
			*uParam1 = -1382561665;
			break;
		case 15:
			*uParam1 = 684071069;
			break;
		case 14:
			*uParam1 = 1357371535;
			break;
		case 13:
			*uParam1 = -1221865546;
			break;
	}
}

int func_454(int iParam0)
{
	return __LIB_1__::func_882(__LIB_9__::func_843(iParam0));
}

int func_455(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_35;
		case 1:
			if (__LIB_0__::func_27(Global_1935689.f_10186, 4))
			{
				return __LIB_0__::func_398(6);
			}
			break;
		case 2:
			if (__LIB_0__::func_27(Global_1935689.f_10186, 2))
			{
				return __LIB_0__::func_398(1);
			}
			break;
		case 3:
			if (__LIB_0__::func_27(Global_1935689.f_10186, 1))
			{
				return __LIB_0__::func_398(7);
			}
			break;
	}
	return __LIB_0__::func_749();
}

bool func_456(vector3 vParam0, float fParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_9__::func_990(iVar0))
		{
			if (BUILTIN::VDIST(__LIB_1__::func_469(iVar0), vParam0) < fParam3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_457(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	Var0.f_1 = 20;
	if ((__LIB_0__::func_192(iParam0, 1573112293) || __LIB_0__::func_192(iParam0, 672467738)) || __LIB_0__::func_192(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar29], &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = __LIB_6__::func_38(0, Var22.f_2);
				__LIB_0__::func_145(Var22.f_2, 1);
				__LIB_0__::func_597(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = __LIB_6__::func_38(2, Var22.f_2);
				__LIB_0__::func_188(Var22.f_2);
				__LIB_0__::func_597(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = __LIB_6__::func_38(1, Var22.f_2);
				__LIB_0__::func_146(Var22.f_2);
				__LIB_0__::func_597(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = __LIB_7__::func_828(Var22.f_2, Var22.f_5);
				if (__LIB_7__::func_840(&uVar38, &uVar39, fVar33))
				{
					__LIB_9__::func_160(fVar33, 1, bVar37, bParam1);
					__LIB_0__::func_597(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = __LIB_7__::func_828(Var22.f_2, Var22.f_5);
				if (__LIB_7__::func_840(&uVar38, &uVar39, fVar34))
				{
					__LIB_9__::func_159(fVar34, 1, bVar37, bParam1);
					__LIB_0__::func_597(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = __LIB_7__::func_828(Var22.f_2, Var22.f_5);
				if (__LIB_7__::func_840(&uVar38, &uVar39, fVar35))
				{
					__LIB_9__::func_158(fVar35, 1, bVar37, bParam1);
					__LIB_0__::func_597(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				__LIB_9__::func_278(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				__LIB_12__::func_187(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0f || fVar30 > 0f)
			{
				bVar42 = true;
			}
		}
		if (bVar42 || __LIB_0__::func_192(iParam0, -537818634))
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (__LIB_0__::func_192(iParam0, -1457797660))
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar40)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("DEADEYE_ITEMS_USED")), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

bool func_458(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "StableOwnedHorse"))
	{
		return true;
	}
	return false;
}

void func_459(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	DECORATOR::DECOR_SET_INT(iParam0, "StableOwnedHorse", iParam1);
}

void func_460()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1933981.f_13[iVar0 /*11*/].f_3 = -1;
		Global_1933981.f_13[iVar0 /*11*/].f_4 = -1;
		Global_1933981.f_13[iVar0 /*11*/].f_5 = -1;
		Global_1933981.f_13[iVar0 /*11*/].f_6 = -1;
		Global_1933981.f_13[iVar0 /*11*/].f_10 = -1;
		__LIB_6__::func_618(&(Global_1933981.f_13[iVar0 /*11*/].f_9), 0);
		iVar0++;
	}
	Global_1933981.f_11 = 0;
	Global_1933981.f_12 = 0;
	Global_1933981.f_9 = -1;
}

void func_461(int iParam0)
{
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, false, 0f);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 263, true);
	PED::SET_PED_KEEP_TASK(*iParam0, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	POPULATION::_0xF74E134F40192884(*iParam0, 2);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 48, true);
	PED::_0x2EB75FB86C41F026(*iParam0, 3, 0);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 284, true);
	PED::SET_PED_NAME_DEBUG(*iParam0, "player horse");
}

void func_462(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 35, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 36, true);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
			}
		}
	}
}

void func_463()
{
	STREAMING::REQUEST_MODEL(joaat("P_BINOCULARS01X"), false);
	STREAMING::REQUEST_ANIM_DICT("mech_inventory@binoculars");
}

bool func_464(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*58*/]))
		{
			if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*58*/]))
			{
				if (PED::IS_PED_SHOOTING((*iParam0)[iVar0 /*58*/]))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_465(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true))
			{
				if (iParam1 == PED::GET_MOUNT(iParam0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_466(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("REL_PLAYER_ENEMY"));
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 35, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 46, true);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, 1);
			PED::SET_COMBAT_FLOAT(*uParam0, 31, 100f);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, true, 0f);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
			}
		}
	}
}

bool func_467(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_BEING_STEALTH_KILLED(iParam0) || PED::_0x2311F15D971AA680(iParam0) != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_468(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	float fVar3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) - ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		fVar3 = (MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y) - ENTITY::GET_ENTITY_HEADING(iParam0));
		if (fVar3 > 180f)
		{
			fVar3 = (fVar3 - 360f);
		}
		if (fVar3 < -180f)
		{
			fVar3 = (fVar3 + 360f);
		}
		if (MISC::ABSF(fVar3) <= fParam2)
		{
			return true;
		}
	}
	return false;
}

int func_469(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_9__::func_225(PLAYER::PLAYER_PED_ID(), (*iParam0)[iVar0 /*58*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_470(int iParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			iVar0 = 0;
			while (iVar0 <= (*iParam0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*58*/]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*iParam0)[iVar0 /*58*/], iParam1, 1, 1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY((*iParam0)[iVar0 /*58*/]);
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

void func_471(char[4] cParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_24(iParam1);
	if (!__LIB_4__::func_976(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		cParam0->f_1[iVar0 /*22*/][iVar1] = 58255;
		MISC::CLEAR_BIT(&(cParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

void func_472(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	if (bParam1)
	{
		bVar2 = false;
		while (!bVar2 && iVar1 < iLocal_14)
		{
			if (iLocal_14[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_14[iVar1] == 0)
			{
				iLocal_14[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = __LIB_11__::func_800(iVar0);
		if (iVar3 != -1)
		{
			iLocal_14[iVar3] = 0;
			__LIB_11__::func_801();
		}
	}
}

bool func_473(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (__LIB_11__::func_802(1, 0, 1) || iParam3)
	{
		PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
		__LIB_0__::func_105(1);
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		if (bParam2)
		{
			__LIB_5__::func_20(0, 0);
		}
		HUD::_HIDE_HUD_COMPONENT(724769646);
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
		if (bParam0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4, false);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
		}
		if (bParam1)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
		}
		else
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		}
		return true;
	}
	return false;
}

bool func_474(char* sParam0)
{
	return __LIB_11__::func_800(MISC::GET_HASH_KEY(sParam0)) != -1;
}

void func_475()
{
	if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::_IS_PED_CARRYING(PLAYER::PLAYER_PED_ID()))
		{
			if (!__LIB_0__::func_491(PLAYER::PLAYER_PED_ID(), -208384378))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 1f, 1);
			}
		}
		else
		{
			__LIB_4__::func_636();
		}
	}
}

bool func_476(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, fParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_0__::func_75(uParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_1__::func_283(uParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_0__::func_37(uParam4);
	}
	if (__LIB_0__::func_75(uParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (__LIB_0__::func_265(uParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return false;
}

int func_477(char[4] cParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[32] cParam10, int iParam18, float fParam19, bool bParam20, bool bParam21)
{
	bool bVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!__LIB_0__::func_266(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iParam1, true, false), fParam19, 1, 1))
	{
		__LIB_9__::func_351(cParam0, cParam10, 1, 0);
		return 1;
	}
	else
	{
		bVar0 = true;
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_0__::func_17(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) != iParam1)
				{
					bVar0 = false;
				}
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
		{
			if (__LIB_0__::func_17(Global_1935630.f_40) != iParam1)
			{
				bVar0 = false;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			if (!__LIB_8__::func_642(cParam0, iParam18))
			{
				__LIB_9__::func_57(cParam0, &cParam2, bParam20);
				__LIB_8__::func_698(cParam0, iParam18);
				cParam0->f_5304 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
			}
			return 1;
		}
		else if (__LIB_8__::func_642(cParam0, iParam18))
		{
			__LIB_8__::func_699(cParam0, iParam18);
			if (!__LIB_8__::func_652(cParam0))
			{
				if (bParam21)
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_8__::func_653(cParam0);
				}
			}
			else
			{
				__LIB_8__::func_654(cParam0);
			}
		}
	}
	return 0;
}

bool func_478(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_562(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_2286 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_2287 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_2289 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_2287)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_2288 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_2288 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_2289)
		{
			uParam0->f_2291 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_2292 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_5__::func_62(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_9__::func_414(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					__LIB_5__::func_376(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_574(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_8__::func_812(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_4__::func_562(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_2074 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_4__::func_575(uParam0, uParam0->f_2074))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_5__::func_488(uParam0);
			}
		}
	}
	bVar0 = __LIB_5__::func_500(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_4__::func_562(uParam0, 268435456) && bVar1) && !__LIB_4__::func_562(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292);
			if (uParam0->f_2074 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1406[uParam0->f_2074 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_2292)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_4__::func_532(uParam0, 131072);
				__LIB_4__::func_532(uParam0, 268435456);
			}
		}
		if (__LIB_4__::func_577(uParam0, 64) || (uParam0->f_2074 >= 0 && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_4__::func_562(uParam0, 131072))
	{
		__LIB_4__::func_984(uParam0);
		if (!__LIB_4__::func_562(uParam0, 262144))
		{
			if ((bVar0 && __LIB_4__::func_562(uParam0, 65536)) || __LIB_4__::func_562(uParam0, 131072))
			{
				__LIB_4__::func_532(uParam0, 32768);
				__LIB_4__::func_574(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_2159 = 1;
				__LIB_8__::func_812(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_9__::func_165(uParam0, iParam5);
		__LIB_4__::func_578(uParam0);
		if (!__LIB_4__::func_579(uParam0, 1))
		{
			__LIB_5__::func_63(uParam0);
		}
		__LIB_4__::func_580(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_5__::func_501(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_6__::func_920(uParam0);
			break;
		case 2:
			__LIB_5__::func_502(uParam0);
			break;
		case 3:
			if (__LIB_4__::func_581(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2074 /*41*/].f_27, uParam0->f_1735[uParam0->f_2074 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_2262));
				__LIB_4__::func_574(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_4__::func_562(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_4__::func_985(uParam0))
				{
					__LIB_4__::func_574(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_4__::func_986(uParam0))
				{
					__LIB_4__::func_574(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || __LIB_0__::func_264(&(uParam0->f_2262)) >= 15f)
			{
				if (__LIB_5__::func_308(uParam0, iParam5))
				{
					if (__LIB_4__::func_583(uParam0))
					{
						uParam0->f_2075 = __LIB_5__::func_64(uParam0);
						__LIB_1__::func_148(&(uParam0->f_2262));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_4__::func_574(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_4__::func_574(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_8__::func_812(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_5__::func_308(uParam0, iParam5))
			{
				__LIB_8__::func_812(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_479(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 12;
	iVar2 = __LIB_0__::func_357(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (__LIB_0__::func_157(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	if (__LIB_0__::func_451(-1586649372) && __LIB_0__::func_157(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			__LIB_1__::func_184(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 525
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 656
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1416; //curOff = 691
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 786
				__LIB_1__::func_184(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1416; //curOff = 807
				if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((__LIB_0__::func_218(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				Jump @1416; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 1228
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (__LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			switch (__LIB_0__::func_357(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]) || __LIB_0__::func_192(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

void func_480(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3[4];
	vector3 vVar16[4];
	float fVar29[4];
	vector3 vVar34;
	vector3 vVar37;
	int iVar40;
	int iVar41;
	vector3 vVar42;
	float fVar45;
	if (!__LIB_5__::func_223(uParam0, iParam1))
	{
		*uParam2 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11)) };
		vParam3 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11)) };
	}
	else
	{
		*uParam2 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18)) };
		vParam3 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18)) };
	}
	vVar0 = { Global_36 };
	if ((uParam0->f_1897 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1875)) && __LIB_0__::func_266(uParam0->f_1898, uParam0->f_1016[iParam1 /*41*/].f_1, uParam0->f_1016[iParam1 /*41*/].f_17, 1, 1))
	{
		vVar34 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_1875) };
		vVar37 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1875) };
		vVar3[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar3[2 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (-vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[3 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (-vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar16[0 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[1 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[2 /*3*/], true) };
		vVar16[2 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[3 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[2 /*3*/], true) };
		fVar29[0] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[0 /*3*/], true);
		fVar29[1] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[1 /*3*/], true);
		fVar29[2] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[2 /*3*/], true);
		fVar29[3] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[3 /*3*/], true);
		iVar41 = 0;
		iVar40 = 1;
		while (iVar40 <= 3)
		{
			if (fVar29[iVar40] < fVar29[iVar41])
			{
				iVar41 = iVar40;
			}
			iVar40++;
		}
		vVar0 = { vVar16[iVar41 /*3*/] };
	}
	*fParam6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, *uParam2, true);
	*fParam7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam3, true);
	*fParam8 = __LIB_0__::func_152(uParam0->f_1016[iParam1 /*41*/].f_1, vVar0, 0);
	if (*fParam8 < uParam0->f_1016[iParam1 /*41*/].f_12)
	{
		*fParam8 = (*fParam8 + 360f);
	}
	if (uParam0->f_1016[iParam1 /*41*/].f_13 < uParam0->f_1016[iParam1 /*41*/].f_12)
	{
		*fParam9 = (uParam0->f_1016[iParam1 /*41*/].f_13 + 360f);
	}
	else
	{
		*fParam9 = uParam0->f_1016[iParam1 /*41*/].f_13;
	}
	if (*fParam8 < *fParam9)
	{
		vVar42 = { uParam0->f_1016[iParam1 /*41*/].f_1 };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_1876 = { vVar42 + Vector(0f, (BUILTIN::COS(*fParam8) * uParam0->f_1016[iParam1 /*41*/].f_11), (BUILTIN::SIN(*fParam8) * uParam0->f_1016[iParam1 /*41*/].f_11)) };
		fVar45 = 0f;
		uParam0->f_1879 = { vVar42 + Vector(0f, ((BUILTIN::COS(*fParam8) * uParam0->f_1016[iParam1 /*41*/].f_17) + fVar45), ((BUILTIN::SIN(*fParam8) * uParam0->f_1016[iParam1 /*41*/].f_17) + fVar45)) };
	}
}

bool func_481(int iParam0)
{
	return (uLocal_5 && iParam0) != 0;
}

void func_482(int iParam0)
{
	iLocal_6 = iParam0;
}

Vector3 func_483()
{
	return 2710.57f, -1291.2f, 48.63f;
}

Vector3 func_484()
{
	return -290.86f, 813.36f, 118.42f;
}

Vector3 func_485()
{
	return -281.07f, 815.24f, 118.42f;
}

int func_486(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOOR_NEW_GUNSHOP_INT_BACK");
		case 1:
			return joaat("DOOR_VAL_DOC_BACK_RM");
		case 2:
			return joaat("DOOR_VAL_DOC_BACK");
		default:
			break;
	}
	return 0;
}

Vector3 func_487()
{
	return -7.766f, 0f, 175.2488f;
}

void func_488(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, bool bParam15, float fParam16, float fParam17)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_25 = iParam8;
	uParam0->f_26 = iParam9;
	uParam0->f_27 = iParam10;
	uParam0->f_8 = { vParam1 };
	uParam0->f_11 = 1f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = fParam7;
	uParam0->f_23 = (fParam7 + fParam16);
	uParam0->f_28 = fParam12;
	uParam0->f_24 = iParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_23, 0, 1, 1, 2, 1, 0);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam17);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_28)
	{
		MAP::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	uParam0->f_37 = 0;
}

Vector3 func_489(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	float fVar6;
	iVar5 = *uParam1;
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		*iParam2 = iVar0;
		fVar6 = __LIB_0__::func_94(iParam0, *(uParam1[iVar0 /*3*/]), 1);
		if (__LIB_0__::func_86(*(uParam1[iVar0 /*3*/])))
		{
		}
		else if (iVar0 == 0)
		{
			fVar4 = fVar6;
			vVar1 = { *(uParam1[iVar0 /*3*/]) };
		}
		else if (fVar4 > fVar6)
		{
			vVar1 = { *(uParam1[iVar0 /*3*/]) };
		}
		iVar0++;
	}
	return vVar1;
}

void func_490(var uParam0, bool bParam1)
{
	if (__LIB_3__::func_725(uParam0->f_1))
	{
		__LIB_3__::func_726(uParam0->f_1);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_9) && bParam1)
	{
		MAP::REMOVE_BLIP(&(uParam0->f_9));
	}
	if (__LIB_0__::func_139(uParam0->f_8))
	{
		__LIB_1__::func_196(&(uParam0->f_8), 1, 1);
	}
}

void func_491(int iParam0, var uParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = uParam1;
}

int func_492(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_577(iParam0);
	if (iVar0 != 0)
	{
		*uParam1 = __LIB_3__::func_992();
		__LIB_3__::func_985(iParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_493(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0]))
			{
				if (!PED::_0xA0BC8FAED8CFEB3C(uParam0->f_13[iVar0]))
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_494()
{
	return 105;
}

void func_495(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_6[iVar0], false);
		}
		iVar0++;
	}
}

void func_496(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!uParam0->f_22[iVar0] == 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_22[iVar0], false);
		}
		iVar0++;
	}
}

Vector3 func_497(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 2119f, -1836.355f, 41.5868f;
				case 1:
					return 2119.727f, -1834.759f, 41.5868f;
				case 2:
					return 2086.978f, -1817.427f, 42.94f;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return -689.3527f, 1046.65f, 134.253f;
				case 1:
					return -689.9694f, 1045.613f, 133.7922f;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return -1607.909f, -202.6873f, 160.0056f;
				case 1:
					return -1597.202f, -194.4726f, 140.2473f;
				case 2:
					return -1605.202f, -191.5559f, 146.978f;
				case 3:
					return -1598.868f, -190.1475f, 142.4308f;
				case 4:
					return -1621.278f, -211.1197f, 159.4808f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 1983.052f, 1192.364f, 170.4026f;
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return -2037.121f, -1901.752f, 109.4507f;
				case 1:
					return -2031.363f, -1932.45f, 108.5494f;
				case 2:
					return -2038.634f, -1898.968f, 109.3499f;
				case 3:
					return -2079.085f, -1890.234f, 112.6797f;
				case 4:
					return -2031.766f, -1930.215f, 108.6972f;
				case 5:
					return -2062.604f, -1926.374f, 112.3715f;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 1133.502f, -979.8339f, 68.3721f;
				case 1:
					return 1130.892f, -979.0982f, 69.1826f;
				case 2:
					return 1129.659f, -985.3533f, 67.7327f;
				case 3:
					return 1129.455f, -984.3824f, 67.77183f;
				case 4:
					return 1130.085f, -985.6208f, 67.75238f;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return 1586.795f, 2192.223f, 323.4134f;
				case 1:
					return 1592.79f, 2194.295f, 323.0721f;
				case 2:
					return 1593.036f, 2193.619f, 323.0598f;
				case 3:
					return 1592.932f, 2194.539f, 323.0347f;
				case 4:
					return 1592.46f, 2195.062f, 323.0381f;
				default:
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					return 1889.1f, 304.105f, 77.0837f;
				case 1:
					return 1887.51f, 300.0471f, 78.8974f;
				case 2:
					return 1889.929f, 299.6248f, 76.7374f;
				case 3:
					return 1887.172f, 301.2639f, 76.0748f;
				case 4:
					return 1888.521f, 299.7741f, 76.1599f;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return -155.9291f, 1491.316f, 115.17f;
				case 1:
					return -155.5224f, 1489.777f, 115.1745f;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -2031.882f, 2082.897f, 331.4405f;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_498(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 0.1f;
				case 1:
					return 124.56f;
				case 2:
					return -111.72f;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return -143.96f;
				case 1:
					return 125.28f;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return -74.96f;
				case 1:
					return 155.46f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				case 4:
					return 117.5512f;
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return 176.81f;
				case 1:
					return 91.91f;
				case 2:
					return -96.42f;
				case 3:
					return -123.76f;
				case 4:
					return -179.66f;
				case 5:
					return -99.82f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 101.62f;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return -155.52f;
				case 1:
					return 146f;
				case 2:
					return -40.99f;
				case 3:
					return 16.8645f;
				case 4:
					return 182.1318f;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return -33.09f;
				case 1:
					return -48.05f;
				case 2:
					return 182.1318f;
				case 3:
					return 182.1318f;
				case 4:
					return 182.1318f;
				default:
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					return 180f;
				case 1:
					return 12.78f;
				case 2:
					return 72.46f;
				case 3:
					return -148.24f;
				case 4:
					return 55.1f;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return 99.07f;
				case 1:
					return 166.65f;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return 135f;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return 0f;
}

Vector3 func_499(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 2086.978f, -1817.427f, 42.94f;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -2032.043f, 2082.895f, 331.7289f;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return 1586.606f, 2192.719f, 323.4388f;
				case 1:
					return 1593.214f, 2194.468f, 323.0663f;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return -1724.69f, -86.3643f, 180.7049f;
				case 1:
					return -1590.34f, -182.8431f, 136.87f;
				default:
					break;
			}
			break;
		case 65536:
			switch (iParam1)
			{
				case 0:
					return 1389.486f, -2079.036f, 51.5495f;
				case 1:
					return 1390.9f, -2086f, 52.375f;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 1129.4f, -985.02f, 67.78f;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return -690.8923f, 1044.765f, 134.669f;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 128:
		case 512:
		case 1024:
		case 2048:
		case 262144:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_500(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -87.6368f, -17.6933f, -68.3214f;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 90f;
				case 1:
					return 90f, 0f, 0f;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 7f;
				default:
					break;
			}
			break;
		case 65536:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 180f;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 90f;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -25f;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 128:
		case 512:
		case 1024:
		case 2048:
		case 262144:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_501(int iParam0)
{
	Local_73 = iParam0;
}

void func_502(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_41[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_41[iVar0]);
		}
		iVar0++;
	}
}

Vector3 func_503(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 32768:
			return 2089.99f, -1817.414f, 41.9281f;
		case 131072:
			return -689.7184f, 1043.631f, 132.8593f;
		case 256:
			return 1586.992f, 2193.114f, 323.3805f;
		case 16:
			return 1984.216f, 1193.481f, 171.7942f;
		case 512:
			return 1888.297f, 301.679f, 77.312f;
		case 32:
			return -155.657f, 1489.998f, 117.244f;
		case 16384:
			return -1961.747f, 2159.31f, 326.6873f;
		case 64:
			return -2054.997f, -1910.598f, 110.9531f;
		case 128:
			return -2109.321f, 1843.872f, 256.096f;
		case 2048:
			return 1462.616f, 811.213f, 99.923f;
		case 4096:
			return 1134.45f, -979.7036f, 69.06891f;
		case 2:
			return -1553.813f, 257.88f, 110.429f;
		case 4:
			return 1462.772f, -1582.476f, 70.11337f;
		case 8:
			return 1794.212f, 458.8075f, 109.4694f;
		case 8192:
			return -1724.538f, -86.73952f, 180.7049f;
		case 1024:
			return -2370.197f, 472.3461f, 132.259f;
		case 65536:
			return 1389.648f, -2082.044f, 53.0335f;
		case 262144:
			return 1185.428f, -101.4211f, 96.4688f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_504(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 32768:
			return 0f, 0f, 45.54978f;
		case 131072:
			return 0f, 0f, -54.83283f;
		case 256:
			return 0f, 0f, 30.56075f;
		case 16:
			return 0f, 0f, -34.16869f;
		case 512:
			return 0f, 0f, 0f;
		case 32:
			return 0f, 0f, 25f;
		case 16384:
			return 0f, 0f, -4.355095f;
		case 64:
			return 0f, 0f, 0f;
		case 128:
			return 0f, 0f, 49.964f;
		case 2048:
			return 0f, 0f, 45f;
		case 4096:
			return 0f, 0f, -35.58028f;
		case 2:
			return 0f, 0f, 0f;
		case 4:
			return 0f, 0f, -26.22593f;
		case 8:
			return 0f, 0f, -15.84809f;
		case 8192:
			return 0f, 0f, -55.92001f;
		case 1024:
			return 0f, 0f, 0f;
		case 65536:
			return 0f, 0f, 19.96441f;
		case 262144:
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_505(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 32768:
			return 8.537304f, 6.882811f, 9.092137f;
		case 131072:
			return 7.909408f, 5.245724f, 9.092137f;
		case 256:
			return 4.106579f, 4.25f, 5.262621f;
		case 16:
			return 5.127945f, 9.805676f, 4f;
		case 512:
			return 5.76f, 7.6f, 3f;
		case 32:
			return 4f, 8f, 5f;
		case 16384:
			return 4.966977f, 5.789305f, 4.917263f;
		case 64:
			return 43.91189f, 39.83597f, 14.89902f;
		case 128:
			return 6f, 7f, 5f;
		case 2048:
			return 6.7f, 12.2f, 8f;
		case 4096:
			return 9.60421f, 6.498575f, 5f;
		case 2:
			return 12.61144f, 13.74787f, 21.60371f;
		case 4:
			return 18.62256f, 11.90544f, 36.47224f;
		case 8:
			return 19.32396f, 17.88757f, 40.77715f;
		case 8192:
			return 2f, 2f, 5f;
		case 1024:
			return 5f, 5f, 4f;
		case 65536:
			return 4.720003f, 10.4287f, 3f;
		case 262144:
			return 10.84954f, 5f, 5f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_506(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 32:
		case 128:
		case 256:
		case 512:
		case 16384:
		case 32768:
		case 131072:
			return true;
		case 2:
		case 4:
		case 8:
		case 16:
		case 1024:
		case 2048:
		case 4096:
		case 8192:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return false;
}

bool func_507(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 32768)
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 8192)
	{
		if (iParam1 == 1)
		{
			return true;
		}
	}
	else if (((((((uParam0->f_1 == 131072 || uParam0->f_1 == 16) || uParam0->f_1 == 64) || uParam0->f_1 == 4096) || uParam0->f_1 == 256) || uParam0->f_1 == 512) || uParam0->f_1 == 32) || uParam0->f_1 == 16384)
	{
		return true;
	}
	return false;
}

bool func_508(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!uParam0->f_22[iVar0] == 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_22[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_509(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_6[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_510(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 32768)
	{
		if (!__LIB_0__::func_1(uParam0->f_3, 4))
		{
			if (iParam1 == 1 || iParam1 == 2)
			{
				return true;
			}
		}
		else if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 8192)
	{
		if ((iParam1 == 1 || iParam1 == 2) || iParam1 == 3)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 256)
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 4096)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			return true;
		}
	}
	else if (((((uParam0->f_1 == 131072 || uParam0->f_1 == 16) || uParam0->f_1 == 64) || uParam0->f_1 == 512) || uParam0->f_1 == 32) || uParam0->f_1 == 16384)
	{
		return true;
	}
	return false;
}

bool func_511(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, char* sParam11)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(uParam1, vParam2, vParam5, vParam8, sParam11);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return true;
	}
	return false;
}

void func_512(int* iParam0, bool bParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
	}
}

void func_513(int* iParam0, bool bParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else if (!PED::GET_PED_CONFIG_FLAG(*iParam0, 186, true))
		{
			PED::DELETE_PED(iParam0);
		}
	}
}

void func_514(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6[iVar0]);
		}
		iVar0++;
	}
}

void func_515(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!uParam0->f_22[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_22[iVar0]);
		}
		iVar0++;
	}
}

int func_516(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 2048:
			switch (iParam1)
			{
				case 0:
				case 1:
					break;
				case 2:
					break;
				default:
					break;
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				if (!__LIB_0__::func_1(uParam0->f_3, 4))
				{
					return joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
				}
			}
			break;
		case 262144:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("PROP_PLAYER_STR_GEN_BSMT_LOOT");
					default:
						break;
				}
			}
			break;
		case 65536:
			break;
		case 2:
		case 4:
		case 8:
		case 32:
		case 128:
		case 256:
		case 512:
		case 1024:
		case 4096:
		case 8192:
		case 16384:
		case 32768:
		case 131072:
			break;
		default:
			break;
	}
	return 0;
}

bool func_517(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (!uParam0->f_22[iParam7] == 0 && !__LIB_0__::func_86(vParam1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[iParam7]))
		{
			uParam0->f_29[iParam7] = OBJECT::CREATE_OBJECT(uParam0->f_22[iParam7], vParam1, true, true, false, false, true);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_29[iParam7]))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_29[iParam7], vParam1, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_29[iParam7], vParam4, 2, true);
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

int func_518(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					if (!__LIB_0__::func_1(uParam0->f_3, 4))
					{
						return -1984759420;
					}
					else
					{
						return 50923185;
					}
					break;
				case 1:
					return 550457596;
				case 2:
					return 855242065;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return -183039148;
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return -2089787434;
				case 1:
					return 1908325491;
				case 2:
					return 254342877;
				case 3:
					return -52800960;
				case 4:
					return -1197356488;
				case 5:
					return -1427362099;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return 1980915318;
				case 1:
					return 569479591;
				case 2:
					return -937613161;
				case 3:
					return -937613161;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 1112811077;
				case 1:
					return 1813871063;
				case 2:
					return 1112811077;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return 816323515;
				case 1:
					return 1113964342;
				default:
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					return 2058743928;
				case 1:
					return 794165431;
				case 2:
					return 989984119;
				case 3:
					return -565729830;
				case 4:
					return 1022043639;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return 1156572673;
				case 1:
					return -938873797;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return 1202038884;
				case 1:
					return 1511738703;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -774890814;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

void func_519(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_1(uParam0->f_3, 8192))
	{
		switch (uParam0->f_1)
		{
			case 16:
				iVar0 = -727372692;
				break;
			case 32:
				iVar0 = 532503220;
				break;
			case 64:
				iVar0 = 562599937;
				break;
			case 128:
				iVar0 = 1714554710;
				break;
			case 256:
				iVar0 = 1610646968;
				break;
			case 512:
				iVar0 = -1249289544;
				break;
			case 1024:
				iVar0 = -508074447;
				break;
			case 2048:
				iVar0 = -1917132299;
				break;
			case 4096:
				iVar0 = -763271696;
				break;
			case 8192:
				iVar0 = 1116308524;
				break;
			case 16384:
				iVar0 = 379859357;
				break;
			case 32768:
				iVar0 = 1822876181;
				break;
			case 65536:
				iVar0 = 1354284392;
				break;
			case 131072:
				iVar0 = 43681669;
				break;
			case 262144:
				iVar0 = 1871337449;
				break;
		}
		if (iVar0 != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar0))
			{
				MAP::_0xD8C7162AB2E2AF45(iVar0);
			}
		}
		__LIB_1__::func_581(&(uParam0->f_3), 8192);
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("SHACK_FOUND")), 1);
	}
}

void func_520(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46))
	{
		__LIB_0__::func_484(&(uParam0->f_45), uParam0->f_46, 0);
		VOLUME::_DELETE_VOLUME(uParam0->f_46);
	}
	__LIB_0__::func_11(uParam0);
}

void func_521(int iParam0, var uParam1)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	__LIB_14__::func_491(iParam0, uParam1);
}

bool func_522(var uParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar1 = __LIB_3__::func_992();
	if (__LIB_6__::func_624(uParam0->f_1, &fVar0))
	{
		if (fVar0 > 0f)
		{
			fVar2 = (fVar1 - fVar0);
			if (fVar2 >= fParam1)
			{
				return false;
			}
		}
	}
	return true;
}

int func_523()
{
	return 63;
}

bool func_524()
{
	PED::_0xED9582B3DA8F02B4(1);
	if (PED::_0x5C16855277819BBF() != 1)
	{
		return false;
	}
	return true;
}

void func_525(var uParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46))
	{
		if (!__LIB_0__::func_86(__LIB_14__::func_503(uParam0)))
		{
			if ((uParam0->f_1 == 2 || uParam0->f_1 == 4) || uParam0->f_1 == 8)
			{
				uParam0->f_46 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(__LIB_14__::func_503(uParam0), __LIB_14__::func_504(uParam0), __LIB_14__::func_505(uParam0), "SHACK_VOLUME_RESTRICTION");
			}
			else
			{
				uParam0->f_46 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(__LIB_14__::func_503(uParam0), __LIB_14__::func_504(uParam0), __LIB_14__::func_505(uParam0), "SHACK_VOLUME_RESTRICTION");
			}
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46))
		{
			POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_46, 0, 0, 0, -1, -1, 0);
			POPULATION::_0xB56D41A694E42E86(uParam0->f_46, 0, 0, 0, -1, -1, 2);
		}
	}
	__LIB_0__::func_11(uParam0);
	if (__LIB_14__::func_506(uParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46))
		{
			if (!PED::_0x91A5F9CBEBB9D936(uParam0->f_45))
			{
				uParam0->f_45 = PED::_0x4C39C95AE5DB1329(uParam0->f_46, 0, 15);
			}
		}
	}
}

bool func_526(var uParam0)
{
	if (!__LIB_14__::func_508(uParam0) || !__LIB_14__::func_509(uParam0))
	{
		return false;
	}
	return true;
}

void func_527(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		__LIB_14__::func_512(&(uParam0->f_29[iVar0]), bParam1, iVar0);
		iVar0++;
	}
}

void func_528(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		__LIB_14__::func_513(&(uParam0->f_13[iVar0]), bParam1, iVar0);
		iVar0++;
	}
}

void func_529(var uParam0)
{
	__LIB_14__::func_514(uParam0);
	__LIB_14__::func_515(uParam0);
}

bool func_530(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!__LIB_14__::func_517(uParam0, __LIB_14__::func_499(uParam0, iVar0), __LIB_14__::func_500(uParam0, iVar0), iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_531(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!__LIB_14__::func_518(uParam0, iVar0) == joaat("META_OUTFIT_DEFAULT"))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0]))
			{
				__LIB_0__::func_862(uParam0->f_13[iVar0], __LIB_14__::func_518(uParam0, iVar0));
			}
		}
		iVar0++;
	}
}

int func_532(var uParam0, var uParam1)
{
	if (__LIB_0__::func_6(*uParam0))
	{
		__LIB_14__::func_521(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_533(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!uParam0->f_6[iParam5] == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iParam5]))
		{
			if (!__LIB_14__::func_510(uParam0, iParam5))
			{
				bParam8 = true;
			}
			if (uParam0->f_1 == 8192)
			{
				if (iParam5 == 2 || iParam5 == 3)
				{
					uParam0->f_13[iParam5] = __LIB_1__::func_545(uParam0->f_6[iParam5], vParam1, fParam4, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					uParam0->f_13[iParam5] = __LIB_1__::func_545(uParam0->f_6[iParam5], vParam1, fParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
				}
			}
			else
			{
				uParam0->f_13[iParam5] = __LIB_1__::func_545(uParam0->f_6[iParam5], vParam1, fParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iParam5]))
			{
				if (bParam6)
				{
					ENTITY::_0x9587913B9E772D29(uParam0->f_13[iParam5], 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_13[iParam5], true);
				TASK::TASK_STAND_STILL(uParam0->f_13[iParam5], -1);
				if (!bParam8)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13[iParam5], false);
				}
				uParam0->f_20++;
			}
		}
		else
		{
			uParam0->f_20++;
		}
	}
	else
	{
		uParam0->f_20++;
	}
}

char* func_534(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_1)
	{
		case 32768:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig1_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2";
							case 1:
								return "pb_base";
							default:
								break;
						}
						break;
				}
			}
			else if (!__LIB_0__::func_1(uParam0->f_3, 8))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig1_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@beat@wilderness@discoverables@shack_starved_children@shack_dead_children";
						case 1:
							return "pl_dead_children";
						default:
							break;
					}
					break;
			}
			break;
		case 8192:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					switch (iParam1)
					{
						case 0:
							if ((!__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 4) && !__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 2)) && !__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 8))
							{
								switch (iParam2)
								{
									case 0:
										return "script@ambient@discoverables@missing_husband@action";
									case 1:
										return "PBL_IDLE2";
									default:
										break;
								}
							}
							break;
						case 1:
							if (!__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 4))
							{
								switch (iParam2)
								{
									case 0:
										return "script@beat@wilderness@discoverables@missing_husband@missing_husband";
									case 1:
										return "pl_missing_husband";
									default:
										break;
								}
							}
							break;
					}
				}
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@ambient@discoverables@civil_war_bride@civil_war_bride";
						default:
							break;
					}
					break;
			}
			break;
		case 64:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@dead_settler@dead_settler";
							case 1:
								return "pl_dead_settler";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 4096:
			if (!__LIB_0__::func_1(uParam0->f_3, 4) || __LIB_14__::func_522(uParam0, 1126694912 /* Float: 168f */))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_love_triangle@hisandher_pose";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 256:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_gunfight@pose";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@beat@wilderness@shack_happy_family@dead_family";
						default:
							break;
					}
					break;
			}
			break;
		case 32:
			if (__LIB_14__::func_522(uParam0, 1126694912 /* Float: 168f */))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_dead_rivals@shack_dead_rivals";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 16384:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@missingmountainman@missingmountainman";
							case 1:
								return "pl_Base";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return "";
}

int func_535()
{
	return 51;
}

int func_536(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0))
		{
			iVar1 = TASK::_GET_SCENARIO_POINT_ENTITY(*uParam0, sParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	return 0;
}

void func_537(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_3, 2048) && !__LIB_0__::func_1(uParam0->f_3, 64))
	{
		__LIB_1__::func_581(&(uParam0->f_3), 64);
	}
	else if (__LIB_0__::func_1(uParam0->f_3, 1024) && !__LIB_0__::func_1(uParam0->f_3, 32))
	{
		__LIB_1__::func_581(&(uParam0->f_3), 32);
	}
	else if (__LIB_0__::func_1(uParam0->f_3, 512) && !__LIB_0__::func_1(uParam0->f_3, 16))
	{
		__LIB_1__::func_581(&(uParam0->f_3), 16);
	}
	else if (__LIB_0__::func_1(uParam0->f_3, 256) && !__LIB_0__::func_1(uParam0->f_3, 8))
	{
		__LIB_1__::func_581(&(uParam0->f_3), 8);
	}
	else if (__LIB_0__::func_1(uParam0->f_3, 128) && !__LIB_0__::func_1(uParam0->f_3, 4))
	{
		__LIB_1__::func_581(&(uParam0->f_3), 4);
	}
	__LIB_14__::func_532(&(uParam0->f_5), &(uParam0->f_3));
}

bool func_538(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4)
{
	if (bParam1)
	{
		while (uParam0->f_20 < 6)
		{
			__LIB_14__::func_533(uParam0, __LIB_14__::func_497(uParam0, uParam0->f_20), __LIB_14__::func_498(uParam0, uParam0->f_20), uParam0->f_20, fParam2, iParam3, bParam4);
		}
		__LIB_0__::func_19(&(uParam0->f_21), 2);
		return true;
	}
	else
	{
		switch (uParam0->f_21)
		{
			case 0:
				__LIB_0__::func_19(&(uParam0->f_21), 1);
				break;
			case 1:
				if (uParam0->f_20 < 6)
				{
					__LIB_14__::func_533(uParam0, __LIB_14__::func_497(uParam0, uParam0->f_20), __LIB_14__::func_498(uParam0, uParam0->f_20), uParam0->f_20, fParam2, iParam3, bParam4);
				}
				else
				{
					__LIB_0__::func_19(&(uParam0->f_21), 2);
				}
				break;
			case 2:
				return true;
		}
	}
	return false;
}

void func_539(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_534(uParam0, iVar0, 0)))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_36[iVar0]))
			{
				if (__LIB_14__::func_507(uParam0, iVar0))
				{
					iParam1 = 8;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_534(uParam0, iVar0, 1)))
				{
					uParam0->f_36[iVar0] = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_14__::func_534(uParam0, iVar0, 0), iParam1, __LIB_14__::func_534(uParam0, iVar0, 1), false, true);
				}
				else
				{
					uParam0->f_36[iVar0] = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_14__::func_534(uParam0, iVar0, 0), iParam1, 0, false, true);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_36[iVar0]);
			}
		}
		iVar0++;
	}
}

bool func_540(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_534(uParam0, iVar0, 0)))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_36[iVar0], true, false))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_541(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_534(uParam0, iVar0, 0)))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_36[iVar0]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_36[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_542()
{
	return 41;
}

void func_543(var uParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			iVar0 = 1048575;
			PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, iVar0);
		}
	}
}

void func_544(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 186, true))
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, true);
		}
		if (PED::GET_PED_CONFIG_FLAG(*uParam0, 223, true))
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 223, false);
		}
		PERSISTENCE::_0xE225CEF1901F6108(*uParam0, iParam1);
	}
}

bool func_545(var uParam0, int iParam1)
{
	if ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0)) && !ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(*uParam0))
	{
		return false;
	}
	return true;
}

void func_546(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(*uParam0, iParam1, 1);
	}
}

void func_547(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
		}
		PED::_0x6569F31A01B4C097(*uParam0, 0, iParam1);
		PED::_0x6569F31A01B4C097(*uParam0, 1, iParam1);
		PED::_0x6569F31A01B4C097(*uParam0, 6, iParam1);
		PED::_0x6569F31A01B4C097(*uParam0, 4, iParam1);
	}
}

void func_548(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
		}
		ENTITY::_0x18FF3110CF47115D(*uParam0, 2, iParam1);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 3, iParam1);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 7, iParam1);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 9, iParam1);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 10, iParam1);
	}
}

char* func_549(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						return "male";
					case 1:
						return "Dead";
					case 2:
						return "Dead";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 1:
						return "Dead";
					case 2:
						return "Dead";
					default:
						break;
				}
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return "Starved_Boy_Bed";
				case 1:
					return "Starved_Boy_Floor";
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return "male";
				case 1:
					return "Husband";
				case 2:
					return "Horse01";
				case 3:
					return "Horse01^1";
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return "Civil_War_Bride";
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return "Settler";
				case 1:
					return "Settler^1";
				case 2:
					return "Settler^2";
				case 3:
					return "Settler^3";
				case 4:
					return "Settler^4";
				case 5:
					return "Settler^5";
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return "A_M_M_UNICORPSE_01";
				case 1:
					return "A_F_M_UNICORPSE_01";
				case 2:
					return "A_F_M_UNICORPSE_01^1";
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return "male01";
				case 1:
					return "male";
				default:
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					return "Father";
				case 1:
					return "Grandfather";
				case 2:
					return "Grandmother";
				case 3:
					return "Mother";
				case 4:
					return "Son";
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return "Male01";
				case 1:
					return "Male02";
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return "mountainman";
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return "";
}

void func_550(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(*uParam0, sParam2))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, *uParam1, 0);
					}
				}
			}
		}
	}
}

char* func_551(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return "chain";
				default:
					break;
			}
			break;
		case 131072:
			break;
		case 8192:
			break;
		case 128:
			switch (iParam1)
			{
				case 0:
					return "p_crutchjoe01x";
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 256:
		case 512:
		case 1024:
		case 2048:
		case 16384:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return "";
}

int func_552()
{
	return 108;
}

bool func_553(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_3, 4))
	{
	}
	return true;
}

void func_554(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (__LIB_14__::func_510(uParam0, iVar0))
		{
			__LIB_14__::func_544(&(uParam0->f_13[iVar0]), iParam1, iVar0);
		}
		iVar0++;
	}
}

bool func_555(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!__LIB_14__::func_545(&(uParam0->f_13[iVar0]), iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_556(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		__LIB_14__::func_546(&(uParam0->f_13[iVar0]), iParam1, iVar0);
		iVar0++;
	}
}

void func_557(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iParam1]))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iParam1]))
		{
		}
		__LIB_14__::func_547(&(uParam0->f_13[iParam1]), iParam2);
		__LIB_14__::func_548(&(uParam0->f_13[iParam1]), 0);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_13[iParam1], 26, true);
		PED::_0xAE6004120C18DF97(uParam0->f_13[iParam1], 1, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_13[iParam1], true, true);
	}
}

void func_558(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[2]), __LIB_14__::func_549(uParam0, 2), iParam1);
					break;
				case 1:
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[1]), __LIB_14__::func_549(uParam0, 1), iParam1);
					break;
				case 2:
					if (!__LIB_0__::func_1(uParam0->f_3, 4))
					{
						__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[0]), __LIB_14__::func_549(uParam0, 0), iParam1);
						__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_29[0]), __LIB_14__::func_551(uParam0, 0), iParam1);
					}
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[0]), __LIB_14__::func_549(uParam0, 0), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[1]), __LIB_14__::func_549(uParam0, 1), iParam1);
					break;
			}
			break;
		case 8192:
			if (!__LIB_0__::func_1(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					switch (iParam1)
					{
						case 0:
							if ((!__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 4) && !__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 2)) && !__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 8))
							{
								__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[0]), __LIB_14__::func_549(uParam0, 0), iParam1);
							}
							break;
						case 1:
							if (!__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 4))
							{
								__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[1]), __LIB_14__::func_549(uParam0, 1), iParam1);
								__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[2]), __LIB_14__::func_549(uParam0, 2), iParam1);
								__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[3]), __LIB_14__::func_549(uParam0, 3), iParam1);
							}
							break;
					}
				}
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[0]), __LIB_14__::func_549(uParam0, 0), iParam1);
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[0]), __LIB_14__::func_549(uParam0, 0), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[1]), __LIB_14__::func_549(uParam0, 1), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[2]), __LIB_14__::func_549(uParam0, 2), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[3]), __LIB_14__::func_549(uParam0, 3), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[4]), __LIB_14__::func_549(uParam0, 4), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[5]), __LIB_14__::func_549(uParam0, 5), iParam1);
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[0]), __LIB_14__::func_549(uParam0, 0), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[1]), __LIB_14__::func_549(uParam0, 1), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[2]), __LIB_14__::func_549(uParam0, 2), iParam1);
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[0]), __LIB_14__::func_549(uParam0, 0), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[1]), __LIB_14__::func_549(uParam0, 1), iParam1);
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[0]), __LIB_14__::func_549(uParam0, 0), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[1]), __LIB_14__::func_549(uParam0, 1), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[2]), __LIB_14__::func_549(uParam0, 2), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[3]), __LIB_14__::func_549(uParam0, 3), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[4]), __LIB_14__::func_549(uParam0, 4), iParam1);
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[0]), __LIB_14__::func_549(uParam0, 0), iParam1);
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[1]), __LIB_14__::func_549(uParam0, 1), iParam1);
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					__LIB_14__::func_550(&(uParam0->f_36[iParam1]), &(uParam0->f_13[0]), __LIB_14__::func_549(uParam0, 0), iParam1);
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
}

void func_559(var uParam0)
{
	if (uParam0->f_4 > 0)
	{
		PED::_0xF008E0BA1FE1D644(uParam0->f_4);
	}
	__LIB_14__::func_495(uParam0);
	__LIB_14__::func_496(uParam0);
	__LIB_14__::func_539(uParam0, 0);
	__LIB_0__::func_11(uParam0);
}

bool func_560(var uParam0)
{
	if ((!__LIB_14__::func_526(uParam0) || !__LIB_14__::func_540(uParam0)) || !__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 > 0)
	{
		if (!PED::_0x5C16855277819BBF() == uParam0->f_4)
		{
			return false;
		}
	}
	return true;
}

void func_561(var uParam0)
{
	__LIB_0__::func_11(uParam0);
	__LIB_14__::func_502(uParam0);
	__LIB_14__::func_527(uParam0, 0);
	__LIB_14__::func_528(uParam0, 0);
	__LIB_14__::func_541(uParam0);
	__LIB_14__::func_520(uParam0);
	__LIB_14__::func_529(uParam0);
	if (SCRIPTS::IS_THREAD_ACTIVE(*uParam0, false))
	{
		SCRIPTS::TERMINATE_THREAD(*uParam0);
	}
}

int func_562()
{
	return 44;
}

void func_563(var uParam0)
{
	__LIB_14__::func_561(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_564()
{
	return 53;
}

bool func_565(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return __LIB_9__::func_323(iParam0, iParam1);
}

bool func_566(var uParam0)
{
	if (!__LIB_14__::func_555(uParam0))
	{
		return false;
	}
	__LIB_14__::func_556(uParam0, 5);
	return true;
}

int func_567()
{
	return 84;
}

void func_568(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		__LIB_14__::func_557(uParam0, iVar0, 0);
		iVar0++;
	}
}

void func_569(var uParam0, var uParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_534(uParam0, iParam2, 0)))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				__LIB_14__::func_558(uParam0, iParam2);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_534(uParam0, iParam2, 1)))
				{
					if (ANIMSCENE::_0xA9016536015DE29D(*uParam1, __LIB_14__::func_534(uParam0, iParam2, 1)))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, __LIB_14__::func_534(uParam0, iParam2, 1), true);
					}
				}
			}
		}
	}
}

bool func_570(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 32768)
	{
		if (!__LIB_0__::func_27(uParam0->f_3, 4))
		{
			if (iParam1 == 1 || iParam1 == 2)
			{
				return true;
			}
		}
		else if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 8192)
	{
		if ((iParam1 == 1 || iParam1 == 2) || iParam1 == 3)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 256)
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 4096)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			return true;
		}
	}
	else if (((((uParam0->f_1 == 131072 || uParam0->f_1 == 16) || uParam0->f_1 == 64) || uParam0->f_1 == 512) || uParam0->f_1 == 32) || uParam0->f_1 == 16384)
	{
		return true;
	}
	return false;
}

int func_571(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 2048:
			switch (iParam1)
			{
				case 0:
				case 1:
					break;
				case 2:
					break;
				default:
					break;
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				if (!__LIB_0__::func_27(uParam0->f_3, 4))
				{
					return joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
				}
			}
			break;
		case 262144:
			if (!__LIB_0__::func_27(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("PROP_PLAYER_STR_GEN_BSMT_LOOT");
					default:
						break;
				}
			}
			break;
		case 65536:
			break;
		case 2:
		case 4:
		case 8:
		case 32:
		case 128:
		case 256:
		case 512:
		case 1024:
		case 4096:
		case 8192:
		case 16384:
		case 32768:
		case 131072:
			break;
		default:
			break;
	}
	return 0;
}

int func_572(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					if (!__LIB_0__::func_27(uParam0->f_3, 4))
					{
						return -1984759420;
					}
					else
					{
						return 50923185;
					}
					break;
				case 1:
					return 550457596;
				case 2:
					return 855242065;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return -183039148;
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return -2089787434;
				case 1:
					return 1908325491;
				case 2:
					return 254342877;
				case 3:
					return -52800960;
				case 4:
					return -1197356488;
				case 5:
					return -1427362099;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return 1980915318;
				case 1:
					return 569479591;
				case 2:
					return -937613161;
				case 3:
					return -937613161;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 1112811077;
				case 1:
					return 1813871063;
				case 2:
					return 1112811077;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return 816323515;
				case 1:
					return 1113964342;
				default:
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					return 2058743928;
				case 1:
					return 794165431;
				case 2:
					return 989984119;
				case 3:
					return -565729830;
				case 4:
					return 1022043639;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return 1156572673;
				case 1:
					return -938873797;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return 1202038884;
				case 1:
					return 1511738703;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -774890814;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

void func_573(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_27(uParam0->f_3, 8192))
	{
		switch (uParam0->f_1)
		{
			case 16:
				iVar0 = -727372692;
				break;
			case 32:
				iVar0 = 532503220;
				break;
			case 64:
				iVar0 = 562599937;
				break;
			case 128:
				iVar0 = 1714554710;
				break;
			case 256:
				iVar0 = 1610646968;
				break;
			case 512:
				iVar0 = -1249289544;
				break;
			case 1024:
				iVar0 = -508074447;
				break;
			case 2048:
				iVar0 = -1917132299;
				break;
			case 4096:
				iVar0 = -763271696;
				break;
			case 8192:
				iVar0 = 1116308524;
				break;
			case 16384:
				iVar0 = 379859357;
				break;
			case 32768:
				iVar0 = 1822876181;
				break;
			case 65536:
				iVar0 = 1354284392;
				break;
			case 131072:
				iVar0 = 43681669;
				break;
			case 262144:
				iVar0 = 1871337449;
				break;
		}
		if (iVar0 != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar0))
			{
				MAP::_0xD8C7162AB2E2AF45(iVar0);
			}
		}
		__LIB_1__::func_581(&(uParam0->f_3), 8192);
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("SHACK_FOUND")), 1);
	}
}

char* func_574(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_1)
	{
		case 32768:
			if (!__LIB_0__::func_27(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig1_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2";
							case 1:
								return "pb_base";
							default:
								break;
						}
						break;
				}
			}
			else if (!__LIB_0__::func_27(uParam0->f_3, 8))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig1_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@beat@wilderness@discoverables@shack_starved_children@shack_dead_children";
						case 1:
							return "pl_dead_children";
						default:
							break;
					}
					break;
			}
			break;
		case 8192:
			if (!__LIB_0__::func_27(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					switch (iParam1)
					{
						case 0:
							if ((!__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 4) && !__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 2)) && !__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 8))
							{
								switch (iParam2)
								{
									case 0:
										return "script@ambient@discoverables@missing_husband@action";
									case 1:
										return "PBL_IDLE2";
									default:
										break;
								}
							}
							break;
						case 1:
							if (!__LIB_0__::func_27(__LIB_5__::func_297(uParam0->f_5), 4))
							{
								switch (iParam2)
								{
									case 0:
										return "script@beat@wilderness@discoverables@missing_husband@missing_husband";
									case 1:
										return "pl_missing_husband";
									default:
										break;
								}
							}
							break;
					}
				}
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@ambient@discoverables@civil_war_bride@civil_war_bride";
						default:
							break;
					}
					break;
			}
			break;
		case 64:
			if (!__LIB_0__::func_27(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@dead_settler@dead_settler";
							case 1:
								return "pl_dead_settler";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 4096:
			if (!__LIB_0__::func_27(uParam0->f_3, 4) || __LIB_14__::func_522(uParam0, 1126694912 /* Float: 168f */))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_love_triangle@hisandher_pose";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 256:
			if (!__LIB_0__::func_27(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_gunfight@pose";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@beat@wilderness@shack_happy_family@dead_family";
						default:
							break;
					}
					break;
			}
			break;
		case 32:
			if (__LIB_14__::func_522(uParam0, 1126694912 /* Float: 168f */))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_dead_rivals@shack_dead_rivals";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 16384:
			if (!__LIB_0__::func_27(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@missingmountainman@missingmountainman";
							case 1:
								return "pl_Base";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return "";
}

void func_575(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_3, 2048) && !__LIB_0__::func_27(uParam0->f_3, 64))
	{
		__LIB_1__::func_581(&(uParam0->f_3), 64);
	}
	else if (__LIB_0__::func_27(uParam0->f_3, 1024) && !__LIB_0__::func_27(uParam0->f_3, 32))
	{
		__LIB_1__::func_581(&(uParam0->f_3), 32);
	}
	else if (__LIB_0__::func_27(uParam0->f_3, 512) && !__LIB_0__::func_27(uParam0->f_3, 16))
	{
		__LIB_1__::func_581(&(uParam0->f_3), 16);
	}
	else if (__LIB_0__::func_27(uParam0->f_3, 256) && !__LIB_0__::func_27(uParam0->f_3, 8))
	{
		__LIB_1__::func_581(&(uParam0->f_3), 8);
	}
	else if (__LIB_0__::func_27(uParam0->f_3, 128) && !__LIB_0__::func_27(uParam0->f_3, 4))
	{
		__LIB_1__::func_581(&(uParam0->f_3), 4);
	}
	__LIB_14__::func_532(&(uParam0->f_5), &(uParam0->f_3));
}

void func_576(int iParam0)
{
	iLocal_0 = 0;
}

int func_577()
{
	return 73;
}

void func_578(var uParam0, int iParam1)
{
	uParam0->f_149 = iParam1;
}

void func_579(int iParam0, var uParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = uParam1;
}

int func_580()
{
	return 103;
}

var func_581(int iParam0, var uParam1, var uParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = uParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

char* func_582(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			if (!__LIB_0__::func_27(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						return "male";
					case 1:
						return "Dead";
					case 2:
						return "Dead";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 1:
						return "Dead";
					case 2:
						return "Dead";
					default:
						break;
				}
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return "Starved_Boy_Bed";
				case 1:
					return "Starved_Boy_Floor";
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return "male";
				case 1:
					return "Husband";
				case 2:
					return "Horse01";
				case 3:
					return "Horse01^1";
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return "Civil_War_Bride";
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return "Settler";
				case 1:
					return "Settler^1";
				case 2:
					return "Settler^2";
				case 3:
					return "Settler^3";
				case 4:
					return "Settler^4";
				case 5:
					return "Settler^5";
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return "A_M_M_UNICORPSE_01";
				case 1:
					return "A_F_M_UNICORPSE_01";
				case 2:
					return "A_F_M_UNICORPSE_01^1";
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return "male01";
				case 1:
					return "male";
				default:
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					return "Father";
				case 1:
					return "Grandfather";
				case 2:
					return "Grandmother";
				case 3:
					return "Mother";
				case 4:
					return "Son";
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return "Male01";
				case 1:
					return "Male02";
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return "mountainman";
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return "";
}

void func_583(int iParam0, bool bParam1, char* sParam2, char* sParam3)
{
	int iVar0;
	int iVar1;
	if (__LIB_14__::func_565(iParam0, 0, 1))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (iVar0 == joaat("A_C_VULTURE_01"))
		{
			if (bParam1)
			{
				StringCopy(sParam2, "amb_creatures_bird@world_Vulture_eating@base", 64);
				StringCopy(sParam3, "base", 64);
			}
			else
			{
				StringCopy(sParam2, "amb_creatures_bird@world_Vulture_preening@idle0", 64);
				iVar1 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3);
				switch (iVar1)
				{
					case 0:
						StringCopy(sParam3, "idle_a", 64);
						break;
					case 1:
						StringCopy(sParam3, "idle_b", 64);
						break;
					case 2:
						StringCopy(sParam3, "idle_c", 64);
						break;
				}
			}
		}
		else if (iVar0 == joaat("A_C_CROW_01"))
		{
			StringCopy(sParam2, "amb_creatures_bird@world_crow_eating_ground@base", 64);
			StringCopy(sParam3, "base", 64);
		}
	}
}

void func_584(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!__LIB_14__::func_572(uParam0, iVar0) == joaat("META_OUTFIT_DEFAULT"))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0]))
			{
				__LIB_0__::func_862(uParam0->f_13[iVar0], __LIB_14__::func_572(uParam0, iVar0));
			}
		}
		iVar0++;
	}
}

void func_585(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_574(uParam0, iVar0, 0)))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_36[iVar0]))
			{
				if (__LIB_14__::func_507(uParam0, iVar0))
				{
					iParam1 = 8;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_574(uParam0, iVar0, 1)))
				{
					uParam0->f_36[iVar0] = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_14__::func_574(uParam0, iVar0, 0), iParam1, __LIB_14__::func_574(uParam0, iVar0, 1), false, true);
				}
				else
				{
					uParam0->f_36[iVar0] = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_14__::func_574(uParam0, iVar0, 0), iParam1, 0, false, true);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_36[iVar0]);
			}
		}
		iVar0++;
	}
}

bool func_586(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_574(uParam0, iVar0, 0)))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_36[iVar0], true, false))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_587(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_574(uParam0, iVar0, 0)))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_36[iVar0]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_36[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_588()
{
	return 18;
}

int func_589(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 4096:
			return joaat("DOCUMENT_SHACK_LOVE_TRIANGLE_LETTER");
		case 8192:
			if (iParam1 == 0)
			{
				return joaat("DOCUMENT_SHACK_HUSBAND_CERTIFICATE");
			}
			else if (iParam1 == 1)
			{
				return joaat("DOCUMENT_SHACK_HUSBAND_PHOTO");
			}
			break;
	}
	return 0;
}

void func_590(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = __LIB_1__::func_986(iParam0);
		__LIB_14__::func_581(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

int func_591(var uParam0, var uParam1)
{
	if (__LIB_0__::func_6(*uParam0))
	{
		*uParam1 = __LIB_5__::func_297(*uParam0);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_592(int iParam0, var uParam1)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	__LIB_14__::func_579(iParam0, uParam1);
}

void func_593(var uParam0, int iParam1, bool bParam2)
{
	*uParam0 = iParam1;
	if (bParam2)
	{
		__LIB_1__::func_148(&(uParam0->f_1));
	}
}

char* func_594()
{
	return "shack_missinghusband1";
}

int func_595()
{
	return 46;
}

void func_596(var uParam0, var uParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(__LIB_14__::func_534(uParam0, iParam2, 0)))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				__LIB_14__::func_569(uParam0, uParam1, iParam2);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
			}
		}
	}
}

void func_597(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (__LIB_14__::func_570(uParam0, iVar0))
		{
			__LIB_14__::func_544(&(uParam0->f_13[iVar0]), iParam1, iVar0);
		}
		iVar0++;
	}
}

void func_598(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!uParam0->f_6[iParam5] == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iParam5]))
		{
			if (!__LIB_14__::func_570(uParam0, iParam5))
			{
				bParam8 = true;
			}
			if (uParam0->f_1 == 8192)
			{
				if (iParam5 == 2 || iParam5 == 3)
				{
					uParam0->f_13[iParam5] = __LIB_1__::func_545(uParam0->f_6[iParam5], vParam1, fParam4, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					uParam0->f_13[iParam5] = __LIB_1__::func_545(uParam0->f_6[iParam5], vParam1, fParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
				}
			}
			else
			{
				uParam0->f_13[iParam5] = __LIB_1__::func_545(uParam0->f_6[iParam5], vParam1, fParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iParam5]))
			{
				if (bParam6)
				{
					ENTITY::_0x9587913B9E772D29(uParam0->f_13[iParam5], 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_13[iParam5], true);
				TASK::TASK_STAND_STILL(uParam0->f_13[iParam5], -1);
				if (!bParam8)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13[iParam5], false);
				}
				uParam0->f_20++;
			}
		}
		else
		{
			uParam0->f_20++;
		}
	}
	else
	{
		uParam0->f_20++;
	}
}

int func_599(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 16:
			return joaat("UI_LETTER_CIVIL_WAR");
		case 65536:
			return joaat("UI_PHOTO_SLAVEPEN");
		default:
			break;
	}
	return -1;
}

int func_600(var uParam0, var uParam1)
{
	if (__LIB_0__::func_6(*uParam0))
	{
		__LIB_14__::func_592(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_601()
{
	return 101;
}

bool func_602(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_3, 4))
	{
		return true;
	}
	else
	{
		return true;
	}
	return false;
}

int func_603()
{
	return 25;
}

void func_604(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_6(uParam0->f_5) && (__LIB_0__::func_702(uParam0->f_5) || __LIB_1__::func_44(uParam0->f_5)))
	{
		__LIB_1__::func_559(uParam0->f_5, 0, 2);
	}
	if (__LIB_0__::func_1(Global_1935630, 128))
	{
		__LIB_0__::func_8(&Global_1935630, 128);
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		__LIB_7__::func_458(&(Local_73.f_99[iVar0 /*12*/]));
		iVar0++;
	}
	__LIB_9__::func_710(&(Local_73.f_134));
	__LIB_0__::func_172(Local_73.f_141);
}

bool func_605(int iParam0, int iParam1)
{
	return (Global_1393521.f_3[iParam0] && iParam1) != 0;
}

bool func_606(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)))
	{
		return false;
	}
	return true;
}

bool func_607(int iParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iParam0, sParam1, 1))
	{
		return true;
	}
	return false;
}

void func_608(int iParam0)
{
	if (Global_1914319.f_18903 != iParam0)
	{
		Global_1914319.f_18903 = iParam0;
	}
}

bool func_609(int iParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iParam0, sParam1))
	{
		return true;
	}
	return false;
}

void func_610(int iParam0)
{
	iLocal_38 = iParam0;
}

void func_611(int* iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*iParam0, iParam1, bParam2);
}

void func_612(int iParam0)
{
	iLocal_41 = iParam0;
}

bool func_613(var uParam0, int iParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (bParam7)
		{
			if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(*uParam0))
			{
				return false;
			}
		}
		return true;
	}
	if (*uParam2 == 0)
	{
		*uParam2 = ENTITY::_0x6F3068258A499E52(iParam1, vParam3, iParam6 | 2 | 1);
		return false;
	}
	if (!ENTITY::_0x1FF441D7954F8709(*uParam2))
	{
		return false;
	}
	iVar0 = ENTITY::_0x4735E2A4BB83D9DA(*uParam2);
	*uParam0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
	return false;
}

void func_614(int iParam0)
{
	iLocal_26 = iParam0;
}

void func_615(int iParam0, int iParam1)
{
	if (!__LIB_3__::func_610(iParam0, iParam1))
	{
		return;
	}
	Global_20710.f_2092[iParam0] = (Global_20710.f_2092[iParam0] - (Global_20710.f_2092[iParam0] && iParam1));
}

void func_616(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(iParam0);
}

bool func_617(int* iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam0, -1))
	{
		return false;
	}
	return true;
}

void func_618(var uParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, bParam1);
}

bool func_619(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
	{
		return true;
	}
	return false;
}

bool func_620(int iParam0, char* sParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, MISC::GET_HASH_KEY(sParam1)))
	{
		return true;
	}
	return false;
}

void func_621(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, sParam1, iParam2, 0);
	ENTITY::SET_ENTITY_VISIBLE(iParam2, bParam4);
}

bool func_622(char* sParam0)
{
	if (!AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		return false;
	}
	if (!AUDIO::_0x1ECC76792F661CF5(sParam0))
	{
		return false;
	}
	return true;
}

bool func_623(int iParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam2))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
		{
			return true;
		}
	}
	return false;
}

void func_624()
{
	if (Global_1898068.f_1)
	{
	}
	Global_1898068.f_1 = 0;
}

void func_625(char* sParam0)
{
	STREAMING::REQUEST_ANIM_DICT(sParam0);
}

bool func_626(char* sParam0)
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return false;
	}
	return true;
}

void func_627(int iParam0)
{
	WEAPON::_0x72D4CB5DB927009C(iParam0, -1, 0);
}

int func_628()
{
	return joaat("WORLD_PLAYER_TAKE_MONEY_PILE_TABLE");
}

void func_629(char* sParam0, bool bParam1)
{
	if (!AUDIO::_0xD89504D9D7D5057D(sParam0) && !AUDIO::_0x1ECC76792F661CF5(sParam0))
	{
		return;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(sParam0, bParam1, false);
}

bool func_630(int iParam0)
{
	int iVar0;
	if (iParam0 > 25)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_560(__LIB_0__::func_12(), iParam0);
	switch (iVar0)
	{
		case 41:
		case 82:
			return true;
	}
	switch (iParam0)
	{
		case -1:
		case 1:
		case 2:
		case 4:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return false;
	}
	return true;
}

void func_631(var uParam0, bool bParam1)
{
	int iVar0;
	(*uParam0)[0] = joaat("P_REGISTER03X");
	(*uParam0)[1] = joaat("P_REGISTER04X");
	(*uParam0)[2] = joaat("P_REGISTER05X");
	(*uParam0)[3] = joaat("P_REGISTER06X");
	(*uParam0)[4] = joaat("P_REGISTER07X");
	(*uParam0)[5] = joaat("P_REGISTER08X");
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0], false);
			iVar0++;
		}
	}
}

int func_632(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10074;
		case 2:
			return 10076;
		case 3:
			return 10077;
		case 6:
			return 10034;
		case 7:
			return 10040;
		case 8:
			return 10041;
		case 13:
			return 10042;
		case 14:
			return 10043;
		case 15:
			return 10043;
		case 17:
			return 10044;
		case 18:
			return 10050;
		case 19:
			return 10051;
		case 20:
			return 10052;
		case 21:
			return 10053;
		case 22:
			return 10000;
		case 23:
			return 10025;
		case 24:
			return 10026;
		case 25:
			return 10096;
		case 26:
			return 10098;
		case 27:
			return 10101;
		case 28:
			return 10102;
		case 29:
			return 10103;
		case 30:
			return 10104;
		case 31:
			return 10105;
		case 36:
			return 10005;
		case 37:
			return 10006;
		case 38:
			return 10008;
		case 39:
			return 10011;
		case 40:
			return 10012;
		case 41:
			return 10013;
		case 42:
			return 10014;
		case 43:
			return 10016;
		case 44:
			return 10017;
		case 45:
			return 10018;
		case 46:
			return 10020;
		case 47:
			return 10019;
		case 55:
			return 10116;
		case 48:
			return 10113;
		case 49:
			return 10114;
		case 50:
			return 10115;
		case 60:
			return 10028;
		case 61:
			return 10031;
		case 62:
			return 10031;
		case 65:
			return 10032;
		case 68:
			return 10058;
		case 69:
			return 10059;
		case 72:
			return 10061;
		case 73:
			return 10064;
		case 74:
			return 10065;
		case 75:
			return 10066;
		case 76:
			return 10067;
		case 77:
			return 10068;
		case 78:
			return 10069;
		case 79:
			return 10118;
		case 82:
			return 10088;
		case 86:
			return 10090;
		case 85:
			return 10090;
		case 89:
			return 10047;
		case 88:
			return 10047;
		case 120:
			return 10071;
		case 106:
			return 10036;
		case 107:
			return 10038;
		case 109:
			return 10007;
		case 110:
			return 10010;
		case 112:
			return 10097;
		case 114:
			return 10027;
		case 102:
			return 10060;
		case 103:
			return 10063;
		case 116:
			return 10085;
		case 128:
			return 10078;
		case 129:
			return 10079;
		case 130:
			return 10080;
		case 131:
			return 10081;
		case 132:
			return 10092;
		case 133:
			return 10093;
		case 134:
			return 10094;
		case 135:
			return 10095;
		case 137:
			return 10054;
		case 138:
			return 10055;
		case 139:
			return 10056;
		case 140:
			return 10057;
		case 141:
			return 10001;
		case 142:
			return 10002;
		case 143:
			return 10003;
		case 144:
			return 10004;
		case 145:
			return 10021;
		case 146:
			return 10022;
		case 147:
			return 10023;
		case 148:
			return 10024;
		case 90:
			return 10107;
		case 91:
			return 10108;
		case 92:
			return 10117;
		case 99:
			return 10119;
		case 100:
			return 10120;
		case 95:
			return 10111;
		default:
			break;
	}
	return 0;
}

void func_633(int iParam0)
{
	__LIB_3__::func_732(iParam0);
}

bool func_634(int* iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam0, -1))
	{
		return false;
	}
	return true;
}

void func_635(var uParam0, int iParam1)
{
	if (uParam0->f_16 == 0 && iParam1 == 0)
	{
		return;
	}
	__LIB_9__::func_898(uParam0, &iParam1);
}

void func_636(int iParam0, char* sParam1, char* sParam2)
{
	PED::_0x923583741DC87BCE(iParam0, sParam1);
	PED::_0x89F5E7ADECCCB49C(iParam0, sParam2);
}

void func_637(var uParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (bParam6)
		{
			fVar4 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0], false, false), vParam2);
		}
		else
		{
			fVar4 = __LIB_0__::func_62(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0], false, false), vParam2);
		}
		if (iVar0 > 0)
		{
			if ((bParam5 && fVar4 < fVar3) || (!bParam5 && fVar4 > fVar3))
			{
				uVar2 = (*uParam0)[iVar0];
				uVar1 = (*uParam0)[(iVar0 - 1)];
				(*uParam0)[(iVar0 - 1)] = uVar2;
				(*uParam0)[iVar0] = uVar1;
				iVar0 = (iVar0 - 1);
			}
		}
		fVar3 = fVar4;
		iVar0++;
	}
	if (bParam7)
	{
	}
}

void func_638(int iParam0, var uParam1, char* sParam2)
{
	*uParam1 = iParam0;
}

int func_639()
{
	return iLocal_49;
}

bool func_640(int iParam0)
{
	return __LIB_0__::func_27(Global_1310750.f_16110, iParam0);
}

void func_641()
{
	if (!__LIB_0__::func_190())
	{
		return;
	}
	__LIB_3__::func_180(1);
}

bool func_642(int iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return false;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1)
	{
		return true;
	}
	else if (bParam2)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_643(int iParam0, char* sParam1, char* sParam2)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam1, sParam2, 1))
	{
		return false;
	}
	return true;
}

void func_644(int iParam0, int iParam1)
{
	__LIB_11__::func_399(&(Global_1396257[iParam0 /*638*/].f_626), iParam1, 1);
}

void func_645(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_27(iParam0->f_3, iParam1))
	{
		__LIB_1__::func_581(&(iParam0->f_3), iParam1);
	}
}

void func_646(int iParam0, int iParam1)
{
	if (__LIB_0__::func_27(iParam0->f_3, iParam1))
	{
		__LIB_1__::func_993(&(iParam0->f_3), iParam1);
	}
}

void func_647(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_139(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		__LIB_1__::func_748(&(iParam1->f_6), 0, 1);
	}
	if (!__LIB_0__::func_139(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (__LIB_1__::func_502(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = __LIB_2__::func_403(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (__LIB_0__::func_139(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					__LIB_2__::func_369(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					__LIB_1__::func_522(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					__LIB_1__::func_522(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					__LIB_1__::func_221(iParam1->f_6, 0, 1);
				}
				else
				{
					__LIB_1__::func_221(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_648(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		__LIB_1__::func_748(&((uParam1[iParam0->f_3 /*11*/])->f_6), 1, 1);
		if (bParam2)
		{
			__LIB_3__::func_544(iParam0, 0);
		}
	}
}

void func_649(bool bParam0)
{
	if (bParam0)
	{
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("PROP_PLAYER_ROB_CASH_REGISTER"))
		{
			TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_ROB_CASH_REGISTER", true);
		}
	}
	else if (TASK::IS_SCENARIO_TYPE_ENABLED("PROP_PLAYER_ROB_CASH_REGISTER"))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_ROB_CASH_REGISTER", false);
	}
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("A_M_M_ASBTOWNFOLK_01");
		case 7:
		case 17:
			return joaat("A_M_M_BLWTOWNFOLK_01");
		case 19:
			return joaat("A_M_M_EMRFARMHAND_01");
		case 39:
		case 41:
		case 42:
		case 43:
		case 47:
			return joaat("U_M_M_NBXRESIDENT_01");
		case 28:
		case 29:
			return joaat("A_M_M_RHDTOWNFOLK_01");
		case 61:
			return joaat("A_M_M_STRTOWNFOLK_01");
		case 73:
		case 74:
		case 75:
		case 82:
			return joaat("A_M_M_VALTOWNFOLK_01");
		case 90:
			return joaat("A_M_M_TUMTOWNFOLK_01");
		case 95:
			return joaat("A_M_M_ARMTOWNFOLK_01");
	}
	return joaat("A_M_M_VALFARMER_01");
}

bool func_651(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

bool func_652(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 7:
		case 11:
			return true;
		case 3:
		case 6:
			return false;
		default:
			break;
	}
	return false;
}

bool func_653(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return true;
	}
	return false;
}

bool func_654()
{
	return TASK::IS_SCENARIO_TYPE_ENABLED("PROP_PLAYER_ROB_CASH_REGISTER");
}

int func_655(var uParam0, int iParam1)
{
	struct<6> Var0;
	if (SCRIPTS::GET_EVENT_DATA(0, iParam1, &Var0, 10))
	{
		if (Var0 != Global_35)
		{
			return 0;
		}
		if (Var0.f_4 != 2)
		{
			return 0;
		}
		if (Var0.f_5 != 1)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

Vector3 func_656(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2940.831f, 1314.94f, 43.47723f;
		case 7:
			return -787.9549f, -1329.94f, 42.642f;
		case 17:
			return -756.287f, -1303.571f, 42.55379f;
		case 19:
			return 1442.6f, 263.8f, 90.5f;
		case 39:
			return 2714.857f, -1220.076f, 50.17068f;
		case 42:
			return 2826.128f, -1310.247f, 45.77036f;
		case 43:
			return 2724.865f, -1289.872f, 48.13114f;
		case 41:
			return 2846.573f, -1207.054f, 46.69181f;
		case 47:
			return 2545.625f, -1174.883f, 52.3105f;
		case 28:
			return 1320.562f, -1288.47f, 75.29237f;
		case 29:
			return 1331.844f, -1319.767f, 76.94893f;
		case 61:
			return -1798.134f, -386.6793f, 159.2768f;
		case 73:
			return -290.366f, 802.7841f, 118.2866f;
		case 74:
			return -316.9948f, 797.8707f, 116.5135f;
		case 75:
			return -285.2195f, 775.3804f, 117.7822f;
		case 82:
			return 3018.616f, 555.4745f, 43.68162f;
		case 90:
			return -5495.194f, -2937.927f, -1.45012f;
		case 91:
			return -5512.303f, -2962.822f, -2.57416f;
		case 95:
			return -3678.501f, -2632.466f, -14.71208f;
		case 87:
			return -1308.618f, 395.231f, 94.38168f;
		case 89:
			return -1308.618f, 395.231f, 94.38168f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_657(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2946.049f, 1319.564f, 45.14626f;
		case 7:
			return -785.9345f, -1322.95f, 44.21807f;
		case 17:
			return -762.7703f, -1292.778f, 43.8849f;
		case 19:
			return 1419.994f, 380.5412f, 110.2361f;
		case 39:
			return 2720.6f, -1233f, 50.4f;
		case 42:
			return 2825.685f, -1319.379f, 46.8135f;
		case 43:
			return 2717.57f, -1285.85f, 49.68f;
		case 41:
			return 2860.15f, -1201.55f, 49.92473f;
		case 47:
			return 2555.87f, -1167.69f, 53.73f;
		case 28:
			return 1329.456f, -1293.444f, 77.33836f;
		case 29:
			return 1323.26f, -1322.5f, 77.93f;
		case 61:
			return -1789.791f, -387.0551f, 160.6592f;
		case 73:
			return -287.5373f, 805.1658f, 119.7208f;
		case 74:
			return -323.4636f, 804.3255f, 118.215f;
		case 75:
			return -280.3192f, 779.6469f, 119.8516f;
		case 82:
			return 3026.349f, 561.7162f, 44.7613f;
		case 90:
			return -5487f, -2938f, -0.4f;
		case 95:
			return -3686.5f, -2622.7f, -13.4f;
		case 87:
			return -1302.749f, 393.2226f, 95.4803f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_658(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return 1;
}

char* func_659(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@shoprobberies@GLOBAL@CLERK_OPEN_REGISTER@BASE";
		default:
			break;
	}
	return "bad anim scene";
}

bool func_660(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
	{
		return false;
	}
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_25, Global_36))
	{
		return true;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_28))
	{
		return false;
	}
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_28, Global_36))
	{
		return true;
	}
	return false;
}

char* func_661()
{
	return "script_proc@robberies@shop@valdoc@ig_3";
}

char* func_662()
{
	return "hands_up_enter_doc";
}

char* func_663()
{
	return "hands_up_loop_doc";
}

void func_664(var uParam0)
{
	__LIB_14__::func_608(256);
}

void func_665(var uParam0)
{
	struct<22> Var0;
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = Global_35;
	Var0.f_8 = 4;
	Var0.f_19 = 4;
	Var0.f_21 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_7 = 40000;
	_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
}

Vector3 func_666(int iParam0, char* sParam1)
{
	vector3 vVar0;
	var uVar3;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iParam0, &vVar0, &uVar3, 2);
	return vVar0;
}

int func_667(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 52;
		case 17:
			return 68;
		case 28:
			return 54;
		case 29:
			return 61;
		case 39:
			return 49;
		case 40:
			return 70;
		case 42:
			return 55;
		case 43:
			return 62;
		case 61:
			return 56;
		case 73:
			return 50;
		case 74:
			return 58;
		case 75:
			return 76;
		case 82:
			return 71;
		case 90:
			return 57;
		case 91:
			return 63;
		case 95:
			return 51;
		case 54:
			return 64;
		default:
			break;
	}
	return __LIB_11__::func_454();
}

void func_669(int iParam0)
{
	Global_20710.f_1168[iParam0]++;
	Global_20710.f_1322[iParam0] = __LIB_0__::func_23();
}

void func_670(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_4__::func_261(iParam0, 32768);
	}
	if (bParam2)
	{
		__LIB_4__::func_261(iParam0, 1024);
	}
}

int func_671(var uParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6)
{
	int iVar0;
	int iVar1;
	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam6);
	iVar1 = __LIB_13__::func_213(uParam0, uParam1, iVar0, iParam2);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

void func_672(var uParam0, int* iParam1, int iParam2)
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("REL_PLAYER_DISLIKE"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	if (VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		PED::_0xFC3DB99C8144CD81(*uParam0, iParam2, 0, 0, 0);
	}
	PED::_0x935CF6E42BAF7F4D(*uParam0);
	TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
	__LIB_2__::func_73(*uParam0, iParam1, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
}

void func_673(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
	}
}

void func_674(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 146, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 190, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 146, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 190, false);
	}
}

bool func_675(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("S_M_M_TRAINSTATIONWORKER_01"):
		case joaat("CS_RHODESKIDNAPVICTIM"):
			return false;
		default:
			break;
	}
	iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
	if (!INTERIOR::IS_VALID_INTERIOR(iParam1))
	{
		return false;
	}
	if (iVar1 == iParam1)
	{
		return true;
	}
	if (INTERIOR::IS_VALID_INTERIOR(iVar1))
	{
		return false;
	}
	return true;
}

void func_676(var uParam0)
{
	__LIB_4__::func_135(uParam0, 1, 1, 0);
	__LIB_2__::func_887(uParam0, 0);
	__LIB_1__::func_398(uParam0, 0);
	__LIB_1__::func_401(uParam0, 1);
	__LIB_2__::func_828(uParam0, 1);
	__LIB_1__::func_402(uParam0, 1);
	__LIB_1__::func_403(uParam0, 0);
	__LIB_2__::func_830(uParam0, 1);
}

void func_677(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;
	__LIB_2__::func_357(iParam0, Global_36, 5, 0, 3);
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		TASK::TASK_REACT(iParam0, Global_35, Global_36, "Default_Shocked", 1f, 0, 4);
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		TASK::TASK_STAND_STILL(0, 500);
	}
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, 0.3f, 0.52f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

bool func_678()
{
	if (__LIB_3__::func_256() >= 1000)
	{
		return true;
	}
	return false;
}

int func_679(var uParam0, var uParam1, float fParam2, int iParam3)
{
	if (!__LIB_2__::func_1(*uParam0, 0, 1) || !__LIB_2__::func_1(Global_35, 0, 1))
	{
		return 1;
	}
	if (!*uParam1)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, iParam3, -1f, -1f, -1f);
		*uParam1 = 1;
	}
	if (PED::IS_PED_FACING_PED(*uParam0, Global_35, fParam2))
	{
		return 1;
	}
	return 0;
}

void func_680(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	struct<17> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0.f_14 = iParam0;
		Var0 = uParam1;
		Var0.f_12 = 22;
		Var0.f_3 = iParam2;
		Var0.f_8 = iParam5;
		Var0.f_11 = iParam6;
		Var0.f_13 = iParam4;
		if (!bParam3)
		{
			__LIB_1__::func_581(&(Var0.f_16), 1);
		}
		MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
	}
}

bool func_681(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_372(PLAYER::PLAYER_PED_ID(), 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return false;
	}
	if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || __LIB_0__::func_237(iVar0)) || (WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_LASSO")))
	{
		if (__LIB_4__::func_207(iParam0, 8f, 25f, 1097859072 /* Float: 15f */, 0))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 171, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			return true;
		}
	}
	return false;
}

int func_682(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *iParam0) && iVar4 < iParam2)
			{
				if (__LIB_2__::func_444(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!__LIB_0__::func_208(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*iParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_683(var uParam0)
{
	__LIB_2__::func_478(*uParam0, Global_35, "SHOP_CLERK_STAYCLOSED1", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
}

bool func_684()
{
	if (__LIB_2__::func_140(0))
	{
		return true;
	}
	return false;
}

void func_685(var uParam0, var uParam1)
{
	*uParam1 = Global_35;
	uParam1->f_1 = *uParam0;
	uParam1->f_2 = joaat("CRIME_ROBBERY");
	uParam1->f_3 = { Global_36 };
	uParam1->f_6 = __LIB_5__::func_235(__LIB_0__::func_12(), 1, 1);
	uParam1->f_8 = 1;
	uParam1->f_9 = 0;
	uParam1->f_10 = 0;
	uParam1->f_11 = 0;
}

void func_686(int iParam0, var uParam1)
{
	*uParam1 = Global_35;
	uParam1->f_1 = iParam0;
	uParam1->f_2 = joaat("CRIME_ROBBERY");
	uParam1->f_3 = { Global_36 };
	uParam1->f_6 = __LIB_5__::func_235(__LIB_0__::func_12(), 1, 1);
	uParam1->f_8 = 1;
	uParam1->f_9 = 0;
	uParam1->f_10 = 0;
	uParam1->f_11 = 0;
}

bool func_687(bool bParam0, bool bParam1)
{
	int iVar0;
	if (Global_1572887.f_11)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_688(bool bParam0)
{
	NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(bParam0);
}

bool func_689(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	if ((((((((((((((((iParam0 == 0 || iParam0 == 7) || iParam0 == 17) || iParam0 == 29) || iParam0 == 28) || iParam0 == 39) || iParam0 == 42) || iParam0 == 43) || iParam0 == 47) || iParam0 == 61) || iParam0 == 73) || iParam0 == 75) || iParam0 == 74) || iParam0 == 87) || iParam0 == 95) || iParam0 == 90) || iParam0 == 91)
	{
		return true;
	}
	return false;
}

void func_690(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	if (Global_1914319.f_18594[iParam0] == 0)
	{
		return;
	}
	Global_1914319.f_18594[iParam0] = 0;
}

bool func_691(var uParam0)
{
	return uParam0->f_2031.f_47;
}

bool func_692(int iParam0, int iParam1)
{
	if (!Global_1058888.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1146941[iParam1 /*12*/] && iParam0) != 0;
}

bool func_693(int iParam0)
{
	return ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(iParam0);
}

int func_694(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_16855.f_3.f_15;
	}
	return Global_1914319.f_16855.f_3.f_9;
}

bool func_695(int iParam0)
{
	return __LIB_1__::func_935(iParam0, 1048576);
}

bool func_696(int iParam0)
{
	return __LIB_1__::func_935(iParam0, 33554432);
}

bool func_697(int iParam0)
{
	return __LIB_1__::func_935(iParam0, 134217728);
}

bool func_698(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_33))
	{
		return false;
	}
	return VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_33, Global_36);
}

bool func_699(int iParam0)
{
	return __LIB_14__::func_126(iParam0, 2);
}

void func_700(int iParam0)
{
	__LIB_11__::func_405(iParam0, 2);
}

void func_701(var uParam0, var uParam1)
{
	*uParam1 = *uParam0;
	uParam1->f_6 = uParam0->f_1;
	uParam1->f_11 = { uParam0->f_6 };
	uParam1->f_14 = uParam0->f_9;
	uParam1->f_15 = { uParam0->f_10 };
	uParam1->f_18 = uParam0->f_13;
	uParam1->f_19 = uParam0->f_14;
	uParam1->f_7 = { uParam0->f_2 };
	uParam1->f_10 = uParam0->f_5;
	if (uParam1->f_10 == 0f)
	{
		uParam1->f_10 = 1.25f;
	}
	if (uParam0->f_15)
	{
		MISC::SET_BIT(&(uParam1->f_5), 7);
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_5), 6);
	}
	MISC::SET_BIT(&(uParam1->f_5), 0);
}

bool func_702(int iParam0)
{
	return __LIB_1__::func_935(iParam0, 2097152);
}

bool func_703(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_26))
		{
			return false;
		}
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_26, Global_36))
		{
			return true;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_27))
		{
			if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_27, Global_36))
			{
				return true;
			}
		}
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1051260.f_48[iParam0 /*78*/].f_31))
		{
			return false;
		}
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1051260.f_48[iParam0 /*78*/].f_31, Global_36))
		{
			return true;
		}
	}
	return false;
}

void func_704(var uParam0)
{
	uParam0->f_3 = 0;
	*uParam0 = 0;
}

bool func_705(int iParam0)
{
	switch (iParam0)
	{
		case 31:
			return true;
		case 33:
			return true;
		case 2:
			return true;
		case 1:
			return true;
		case 32:
			return true;
		case 15:
			return true;
		case 20:
			return true;
		case 18:
			return true;
		case 19:
			return true;
		case 12:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 29:
			return true;
		case 10:
			return true;
		default:
			break;
	}
	return false;
}

void func_706(char* sParam0)
{
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sParam0))
	{
		HUD::RELEASE_NAMED_RENDERTARGET(sParam0);
	}
}

void func_707(var uParam0)
{
	uParam0->f_2031.f_49 = 0;
	GRAPHICS::_0xDAD7FB8402651654();
}

void func_708()
{
	StringCopy(&(Global_1393529.f_288[11 /*8*/]), "EA_LCMP_Foreman", 64);
}

int func_709(var uParam0)
{
	return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_30);
}

void func_710(bool bParam0)
{
	if (bParam0)
	{
		Global_1914319.f_19461.f_1 = 0;
		Global_1914319.f_19461.f_184 = { Global_1914319.f_19461.f_22[0 /*12*/] };
		Global_1914319.f_19461.f_187 = { Global_1914319.f_19461.f_22[0 /*12*/].f_3 };
		Global_1914319.f_19461.f_194 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1914319.f_19461.f_22[0 /*12*/], Global_1914319.f_19461.f_22[0 /*12*/].f_6, true);
	}
	else
	{
		Global_1914319.f_19461.f_184 = { Global_1914319.f_19461.f_2 };
		Global_1914319.f_19461.f_187 = { Global_1914319.f_19461.f_2.f_3 };
		Global_1914319.f_19461.f_194 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1914319.f_19461.f_2, Global_1914319.f_19461.f_2.f_6, true);
	}
	Global_1914319.f_19461.f_190 = 0f;
	Global_1914319.f_19461.f_191 = 0f;
	Global_1914319.f_19461.f_192 = Global_1914319.f_19461.f_187;
	Global_1914319.f_19461.f_193 = Global_1914319.f_19461.f_187.f_2;
	Global_1914319.f_19461.f_182 = 0f;
	Global_1914319.f_19461.f_183 = 0f;
	Global_1914319.f_19461.f_195 = 0;
}

void func_711(int iParam0, bool bParam1)
{
	PED::_0xFEA6126C34DF2532(iParam0, bParam1);
	PED::_0xA2116C1E4ED85C24(iParam0, !bParam1);
}

bool func_712(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_141[iVar0 /*7*/].f_1 == 0)
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	*iParam1 = -1;
	return false;
}

bool func_713(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_141[iVar0 /*7*/] != -1)
		{
			if (iParam1 == uParam0->f_141[iVar0 /*7*/])
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_714(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam1 == uParam0->f_141[iVar0 /*7*/])
		{
			uParam0->f_141[iVar0 /*7*/].f_6 = fParam2;
		}
		iVar0++;
	}
}

bool func_715(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam1 == (*uParam0)[iVar0 /*7*/])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_716(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((*uParam0)[iVar0 /*7*/] == -1)
		{
			if (iParam1 == (*uParam0)[iVar0 /*7*/])
			{
				(uParam0[iVar0 /*7*/])->f_6 = fParam2;
			}
		}
		iVar0++;
	}
}

bool func_717(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0[iVar0 /*7*/])->f_1 == 0)
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	*iParam1 = -1;
	return false;
}

void func_718()
{
	int iVar0;
	iVar0 = WEAPON::_0x9F67929D98E7C6E8(Global_35, joaat("GROUP_PISTOL"), 0, 1);
	if (iVar0 == joaat("WEAPON_UNARMED") || iVar0 == 0)
	{
		iVar0 = WEAPON::_0x9F67929D98E7C6E8(Global_35, joaat("GROUP_REVOLVER"), 0, 1);
	}
	if (iVar0 != joaat("WEAPON_UNARMED") && iVar0 != 0)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), iVar0, 0);
	}
}

bool func_719(int iParam0)
{
	return __LIB_0__::func_27(Global_1395601.f_3, iParam0);
}

void func_720(int iParam0)
{
	__LIB_0__::func_8(&(Global_1395601.f_3), iParam0);
}

bool func_721(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam1 /*446*/].f_25))
	{
		if (__LIB_1__::func_205(iParam0, Global_1914319.f_3[iParam1 /*446*/].f_25, 1, 0))
		{
			return true;
		}
	}
	return false;
}

int func_722(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam1 /*446*/].f_30))
	{
		if (__LIB_1__::func_205(iParam0, Global_1914319.f_3[iParam1 /*446*/].f_30, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_723(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 5:
		case 10:
		case 12:
		case 17:
		case 18:
		case 22:
			return true;
		default:
			break;
	}
	return false;
}

void func_724(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	struct<15> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0.f_14 = iParam0;
		Var0 = uParam1;
		Var0.f_12 = 48;
		Var0.f_3 = uParam2;
		Var0.f_8 = iParam4;
		Var0.f_11 = iParam5;
		Var0.f_13 = iParam3;
		MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
	}
}

char* func_725(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADING_OUT";
		case 1:
			return "END_SHIFT";
		case 3:
			return "CLOSING_WARNING";
		case 4:
			return "CLOSING_EXTENDED";
		case 5:
			return "SHOP_CLOSED";
		case 6:
			return "FAREWELL_SALE";
		case 7:
			return "FAREWELL_BIG_SALE";
		case 8:
			return "FAREWELL_NO_SALE";
		case 9:
			return "FAREWELL_CLOSING";
		case 12:
			return "PLAYER_SHOP_THANKS_FEMALE";
		case 11:
			return "PLAYER_SHOP_THANKS_MALE";
		case 10:
			return "PLAYER_SHOP_THANKS_NEUTRAL";
		case 13:
			return "PLAYER_PRAISE_SERVICE";
		case 2:
			return "SKCF_ANNOUNCE_TRAIN_ARRIVAL";
		case 14:
			return "HAVE_A_LOOK";
		case 15:
			return "HAVE_A_LOOK_WARY";
		case 38:
			return "CAN_I_HELP_YOU_WARY";
		case 16:
			return "ACCEPT_CATALOG";
		case 37:
			return "ACCEPT_CATALOG_WARY";
		case 18:
			return "PLAYER_ENTER_SHOP_CATALOG";
		case 19:
			return "PLAYER_EXIT_CATALOG_PURCHASED";
		case 20:
			return "PLAYER_SELL_MULTIPLE_ITEMS";
		case 17:
			return "SHOP_CATALOG";
		case 41:
			return "ENTER_SELL_MENU";
		case 21:
			return "RIGHT_WITH_YOU";
		case 31:
			return "ON_THE_HOUSE";
		case 27:
			return "TAKE_YOUR_TIME";
		case 28:
			return "TAKE_YOUR_TIME_WARY";
		case 29:
			return "HANGING_AROUND_PURCHASED";
		case 39:
			return "HANGING_AROUND_NO_PURCHASE";
		case 30:
			return "HANGING_AROUND_WARY";
		case 32:
			return "PLAYER_GENERIC_BUY_SHELVES";
		case 33:
			return "PLAYER_GENERIC_BUY_SHELVES_ADDITIONAL";
		case 40:
			return "PROMOTE_STORE";
		case 42:
			return "CHAT_PEDTYPE_DIALOG";
		case 43:
			return "CHAT_SHOPKEEPER_GOSSIP";
		case 44:
			return "CHAT_SHOPKEEPER_LOCATION";
		case 45:
			return "CHAT_LOCAL_AREA";
		case 46:
			return "CHAT_1907";
		case 36:
			return "ANYTHING_ELSE";
		case 24:
			return "GOOD_RIDDANCE";
		case 25:
			return "FAREWELL";
		case 26:
			return "DISMISSIVE_REACT";
		default:
			break;
	}
	return "";
}

char* func_726(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LOCAL_OUTFIT_DISCOUNT";
		case 1:
			return "PRICE_INCREASE";
		case 2:
			return "PRICE_DISCOUNT";
		case 3:
			return "GENERIC_BUY_RESPONSE";
		case 5:
			return "CLOSE_CATALOG_NO_PURCHASE";
		case 6:
			return "SELL_QUALITY_ITEM";
		case 7:
			return "SELL_AVERAGE_ITEM";
		case 8:
			return "SELL_POOR_ITEM";
		case 9:
			return "SELL_QUICK";
		case 10:
			return "SELL_ITEM_AGAIN";
		case 11:
			return "SELL_QUALITY_ITEM_AGAIN";
		case 12:
			return "BUY_INSPECT_ITEM";
		case 13:
			return "BUY_INSPECT_ITEM_UNFRIENDLY";
		case 14:
			return "BUY_ITEM_AGAIN";
		case 15:
			return "BUY_QUALITY_ITEM";
		case 16:
			return "BUY_AVERAGE_ITEM";
		case 17:
			return "BUY_POOR_ITEM";
		case 18:
			return "TAKE_WORTHLESS_ITEM";
		case 19:
			return "BUY_UNIQUE_ITEM";
		case 20:
			return "BUY_OR_SELL_AVERAGE_ITEM";
		case 21:
			return "VOCAL_FX_BUY_RESPONSE";
		case 22:
			return "CATALOG_IDLING";
		default:
			break;
	}
	return "";
}

bool func_727(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 16:
		case 256:
			return true;
		default:
			break;
	}
	return false;
}

void func_728(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	__LIB_0__::func_7(&(Global_1914319.f_18594[iParam0]), 2);
}

void func_729(var uParam0)
{
	__LIB_4__::func_517(0);
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_20, false))
	{
		ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_20, false);
	}
}

void func_730()
{
	Global_1914319.f_19461.f_1 = 0;
	Global_1914319.f_19461.f_20 = 0;
	Global_1914319.f_19461.f_179 = 0;
	Global_1914319.f_19461.f_1 = 0;
	if (HUD::_UIPROMPT_IS_VALID(Global_1914319.f_19461.f_180))
	{
		HUD::_UIPROMPT_DELETE(Global_1914319.f_19461.f_180);
	}
}

void func_731(bool bParam0, int iParam1)
{
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 16, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 15, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 7, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 8, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 17, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 5, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 21, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 25, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 23, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 19, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 9, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 10, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 22, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 20, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 18, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 6, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 0, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, 1, bParam0);
}

void func_732(var uParam0)
{
	if (CAM::IS_CAM_RENDERING(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (CAM::IS_CAM_ACTIVE(*uParam0))
	{
		CAM::SET_CAM_ACTIVE(*uParam0, false);
	}
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
	}
}

bool func_733(var uParam0, int iParam1)
{
	if (DATAFILE::_0x603AC35FD4602C76(*uParam0))
	{
		uParam0->f_2 = 297708565;
		uParam0->f_3 = __LIB_9__::func_28(iParam1);
		if (uParam0->f_3 == 0)
		{
			return false;
		}
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_734(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("USE");
			return true;
		case 1:
			*iParam1 = joaat("BUY");
			return true;
		case 3:
			*iParam1 = joaat("CUSTOMIZE");
			return true;
		case 4:
			*iParam1 = joaat("CRAFT");
			return true;
		case 13:
			*iParam1 = 206398161;
			return true;
		case 10:
			*iParam1 = 188795938;
			return true;
		case 11:
			*iParam1 = 1546351910;
			return true;
		default:
			break;
	}
	return false;
}

void func_735(int iParam0)
{
	Global_1395601.f_2 = iParam0;
}

char* func_736()
{
	return "uiItemMetapedPreloadRequestMade";
}

char* func_737()
{
	return "uiItemMetapedPreloadRequest";
}

int func_738(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2031.f_97))
	{
		return Global_35;
	}
	return uParam0->f_2031.f_97;
}

bool func_739(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (__LIB_0__::func_192(iParam0, -393037696))
	{
		return true;
	}
	return false;
}

char* func_740()
{
	int iVar0;
	iVar0 = LOCALIZATION::GET_CURRENT_LANGUAGE();
	switch (iVar0)
	{
		case 0:
			return "elements_stamps_text_en";
		case 1:
			return "elements_stamps_text_fr";
		case 2:
			return "elements_stamps_text_de";
		case 3:
			return "elements_stamps_text_it";
		case 4:
			return "elements_stamps_text_es";
		case 5:
			return "elements_stamps_text_pt";
		case 6:
			return "elements_stamps_text_pl";
		case 7:
			return "elements_stamps_text_ru";
		case 8:
			return "elements_stamps_text_ko";
		case 9:
			return "elements_stamps_text_zh-Hant";
		case 12:
			return "elements_stamps_text_zh-Hans";
		case 10:
			return "elements_stamps_text_ja";
		case 11:
			return "elements_stamps_text_mx";
		default:
			break;
	}
	return "elements_stamps_text_en";
}

bool func_741(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SDN_BARTENDER_SLUMS"):
		case joaat("RHD_BARTENDER"):
		case joaat("VAL_DOCTOR"):
		case joaat("VAL_GUNSMITH"):
		case joaat("AMD_GENERAL_STORE"):
		case joaat("TBL_BUTCHER"):
		case joaat("VAL_GENERAL_STORE"):
		case joaat("RHD_TRAIN_STAT_OWNER"):
		case joaat("RHD_GENERAL_STORE"):
		case joaat("VHT_STATION_CLERK"):
		case joaat("RGS_POSTMASTER"):
		case joaat("VAL_HOTEL_OWNER"):
		case joaat("BLW_BARTENDER"):
		case joaat("AMD_BARTENDER"):
		case joaat("VHT_BARTENDER"):
		case joaat("VAL_BARTENDER"):
		case joaat("STR_WELCOME_CENTER_CLERK"):
		case joaat("SDN_GEN_STORE_SHADY"):
		case joaat("VAL_BUTCHER"):
		case joaat("TBL_GENERAL_STORE_OWNER"):
		case joaat("SDN_BARTENDER"):
		case joaat("ASB_GUNSMITH"):
		case joaat("TBL_BARTENDER"):
		case joaat("TBL_GUNSMITH_OWNER"):
		case joaat("SDN_GUNSMITH"):
		case joaat("EMR_SON1"):
		case joaat("BLW_GENERAL_STORE"):
		case joaat("BLW_TRAIN_WORKER"):
		case joaat("SDN_GEN_STORE_OWNER"):
		case joaat("VHT_EXOTIC_STORE"):
		case joaat("VAL_BARBER"):
		case joaat("RHD_GUNSMITH"):
		case joaat("LAG_MOTHER1"):
		case joaat("STR_GENERAL_STORE"):
		case joaat("STR_FREIGHT_CLERK"):
			return true;
		default:
			break;
	}
	return false;
	return false;
}

void func_742(int iParam0)
{
	if (!__LIB_6__::func_77(iParam0, 128))
	{
		__LIB_6__::func_78(iParam0, 128);
	}
	if (!__LIB_6__::func_77(iParam0, 64))
	{
		__LIB_6__::func_78(iParam0, 64);
	}
}

bool func_743(int iParam0)
{
	return (__LIB_2__::func_804(iParam0, 33554432) || __LIB_5__::func_779(iParam0, 4));
}

char* func_744(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WELCOME_NONE";
		case 1:
			return "RANG_BELL";
		case 15:
			return "RECENT_ROBBERY_COMBATIVE";
		case 2:
			return "NEW_WELCOME";
		case 3:
			return "NEW_WELCOME_MALE";
		case 4:
			return "NEW_WELCOME_FEMALE";
		case 5:
			return "WELCOME";
		case 6:
			return "WELCOME_SHERIFF";
		case 12:
			return "WELCOME_WANTED_COMBATIVE";
		case 7:
			return "WELCOME_MALE";
		case 8:
			return "WELCOME_FEMALE";
		case 9:
			return "WELCOME_POSSE";
		case 10:
			return "WELCOME_UNFRIENDLY";
		case 16:
			return "WELCOME_GOOD_MEMORY";
		case 17:
			return "WELCOME_WARY_MEMORY";
		case 18:
			return "WELCOME_BAD_MEMORY";
		case 44:
			return "WELCOME_FOLLOW_UP_HIGHLIGHT_STORE";
		case 45:
			return "WELCOME_FOLLOW_UP_HIGHLIGHT_ITEM";
		case 19:
			return "WELCOME_BACK";
		case 20:
			return "WELCOME_BACK_FRIENDLY";
		case 21:
			return "WELCOME_BACK_MALE";
		case 22:
			return "WELCOME_BACK_FEMALE";
		case 23:
			return "WELCOME_BACK_FOLLOW_UP_LONG_TIME";
		case 24:
			return "WELCOME_BACK_FOLLOW_UP_LONG_TIME_WARY";
		case 25:
			return "WELCOME_BACK_WANTED_HISTORY";
		case 26:
			return "WELCOME_BACK_BEHAVING_NOW";
		case 27:
			return "WELCOME_BACK_COMBATIVE";
		case 28:
			return "WELCOME_BACK_ALREADY";
		case 29:
			return "WELCOME_BACK_ALREADY_FRIENDLY";
		case 30:
			return "WELCOME_BACK_ALREADY_WARY";
		case 31:
			return "WELCOME_BACK_ALREADY_COMBATIVE";
		case 32:
			return "WELCOME_BACK_ALREADY_MALE";
		case 33:
			return "WELCOME_BACK_ALREADY_FEMALE";
		case 34:
			return "HEADS_UP_MEMORY_SHOPKEEPER_LIVES";
		case 35:
			return "HEADS_UP_MEMORY_THIEF";
		case 36:
			return "HEADS_UP_TROUBLE_RECENTLY";
		case 37:
			return "HEADS_UP_WARNED_RECENTLY";
		case 38:
			return "HEADS_UP_ARRESTED_RECENTLY";
		case 39:
			return "HEADS_UP_MEMORY_PLEASANT";
		case 40:
			return "HEADS_UP_MEMORY_TROUBLE";
		case 41:
			return "WELCOME_POST_DRUNK_POS";
		case 42:
			return "COOLED_DOWN_ASSAULT";
		case 43:
			return "COOLED_DOWN_ROBBERY";
		default:
			break;
	}
	return "WELCOME";
}

int func_745(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_31.f_2;
}

char* func_746(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PUT_WEAPON_AWAY_ESCALATED";
		case 1:
			return "PUT_WEAPON_AWAY_WARY";
		case 2:
			return "PUT_WEAPON_AWAY";
		case 3:
			return "MISBEHAVING_LOW";
		case 4:
			return "MISBEHAVING_MED";
		case 5:
			return "MISBEHAVING_HIGH";
		case 6:
			return "WELCOME_MASK";
		case 7:
			return "UNAUTHORIZED_AREA_NEAR";
		case 8:
			return "UNAUTHORIZED_AREA_FAR";
		case 9:
			return "WELCOME_CARRYING_HOGTIED_PED";
		case 10:
			return "WELCOME_CARRYING_DEAD_PED";
		case 11:
			return "WELCOME_GET_THAT_OUT_OF_HERE";
		case 12:
			return "GUN";
		case 13:
			return "INTIMIDATED_GEN";
		case 14:
			return "INTIMIDATED_ROB_SHOPKEEPER_RESIST";
		case 15:
			return "CHALLENGE_THREATEN_ARMED_SHOP";
		case 16:
			return "NO_FIGHTING_HERE";
		case 17:
			return "NO_INSULTS_HERE";
		case 18:
			return "CUT_THAT_OUT";
		case 19:
			return "WHATS_YOUR_PROBLEM";
		case 20:
			return "MASK_ESCALATED";
		case 21:
			return "MASK_NOT_REMOVED";
		case 22:
			return "LAW_THREAT";
		case 23:
			return "GET_OUT_SHOP";
		case 24:
			return "LEAVE_NOW_SHOP";
		case 25:
			return "NO_SERVICE";
		case 26:
			return "IGNORING_YOU";
		case 27:
			return "SILENCE";
		case 28:
			return "FIGHT";
		case 29:
			return "GET_THE_LAW";
		case 30:
			return "END_MISBEHAVIOR";
		case 31:
			return "END_MISBEHAVIOR_ESCALATED";
		case 33:
			return "WELCOME_BACK_BEHAVING_NOW";
		case 32:
			return "MASK_REMOVED";
		case 34:
			return "WELCOME_WANTED";
		case 35:
			return "WELCOME_WANTED_COMBATIVE";
		case 36:
			return "MISBEHAVIOR_DRUNK_CUSTOMER";
		case 37:
			return "PLAYER_MISBEHAVIOR_DEFUSE";
		case 38:
			return "PLAYER_FOLLOWS_INSTRUCTION";
		case 39:
			return "PLAYER_REMOVE_MASK";
		case 40:
			return "PLAYER_FOLLOWS_INSTRUCTION_ESCALATED";
		case 41:
			return "PLAYER_DISMISSES";
		case 42:
			return "PLAYER_RETALIATES";
		case 43:
			return "PLAYER_HOLDUP_DEFUSE";
		case 44:
			return "PLAYER_GOADS_FIGHT";
		case 45:
			return "PLAYER_GOADS_FLEE";
		default:
			break;
	}
	return "";
}

char* func_747(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SALES_PITCH_NONE";
		case 1:
			return "SALES_PITCH";
		case 2:
			return "SALES_PITCH_LUXURY";
		case 3:
			return "PUSH_SALE";
		case 4:
			return "SALES_PITCH_BROWSING_GENERAL_GOODS";
		case 5:
			return "SALES_PITCH_BROWSING_LUXURY_GOODS";
		case 6:
			return "SALES_PITCH_GOLD_PREMIUM";
		case 7:
			return "SALES_PITCH_OTHER_CUSTOMERS";
		default:
			break;
	}
	return "";
}

char* func_748(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "STEAL_SINGLE_ITEM";
		case 2:
			return "STEAL_MULTIPLE_ITEM";
		case 3:
			return "HOLDUP_DONT_KILL_ME";
		case 4:
			return "HOLDUP_DONT_SHOOT";
		case 5:
			return "HOLDUP_REGISTER_FAR";
		case 6:
			return "HOLDUP_REGISTER";
		case 7:
			return "HOLDUP_HURRY";
		case 8:
			return "HOLDUP_GIVE_CASH";
		case 9:
			return "HOLDUP_HELP";
		case 10:
			return "HOLDUP_RUN";
		case 11:
			return "HOLDUP_ATTACK";
		case 12:
			return "HOLDUP_LEAVE";
		case 13:
			return "HOLDUP_DONE_GO_AWAY";
		case 14:
			return "HOLDUP_DONE";
		case 15:
			return "HOLDUP_WAITING_ROBBERY";
		case 16:
			return "GUN_AIMED_AT_LINGERING";
		case 17:
			return "HOLDUP_HOLDUP_DEFUSE";
		case 18:
			return "HOLDUP_SECOND_THOUGHT_RETALIATE";
		case 20:
			return "HOLDUP_RUN";
		case 19:
			return "POST_THEFT";
		case 21:
			return "PLAYER_HOLDUP_ROB";
		case 22:
			return "PLAYER_HOLDUP_ROB_FAR";
		case 23:
			return "PLAYER_HOLDUP_HURRY";
		case 24:
			return "PLAYER_HOLDUP_DEFUSE";
		case 25:
			return "PLAYER_HOLDUP_GIVE_CASH";
		case 26:
			return "PLAYER_GOADS_FLEE";
		case 27:
			return "PLAYER_GOADS_FIGHT";
		default:
			break;
	}
	return "";
}

int func_749(int iParam0)
{
	int iVar0;
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 >= Global_1946804.f_2657.f_19)
	{
		return 0;
	}
	iVar0 = Global_1946804.f_2657[iParam0];
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return 0;
	}
	return iVar0;
}

void func_750(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_20))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_20, "PB_IDLE"))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_20, "PB_IDLE");
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_20);
	}
}

bool func_751()
{
	return Global_1949598;
}

bool func_752()
{
	return Global_1109400.f_237;
}

bool func_753()
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1058888;
}

void func_754(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_20))
	{
		uParam0->f_20 = ANIMSCENE::_CREATE_ANIM_SCENE("script@common@shop@playercamp", 0, 0, false, true);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_20, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_20);
	}
}

void func_755(var uParam0, int iParam1)
{
	uParam0->f_2031.f_114 = iParam1;
	uParam0->f_2031.f_113 = 1;
}

void func_756(var uParam0, int iParam1)
{
	uParam0->f_2031.f_116 = iParam1;
	uParam0->f_2031.f_115 = 1;
}

void func_757(var uParam0, int iParam1)
{
	uParam0->f_2031.f_112 = iParam1;
	uParam0->f_2031.f_111 = 1;
}

void func_758(var uParam0, int iParam1)
{
	uParam0->f_2031.f_118 = iParam1;
	uParam0->f_2031.f_117 = 1;
}

void func_759(var uParam0, int iParam1)
{
	uParam0->f_2031.f_122 = iParam1;
	uParam0->f_2031.f_121 = 1;
}

void func_760(var uParam0, int iParam1)
{
	uParam0->f_16 = iParam1;
}

int func_761(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	PED::CLEAR_PED_ENV_DIRT(iParam1);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
	uParam0->f_2031.f_97 = iParam1;
	return 1;
}

int func_762(var uParam0)
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_20, true, false))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_20, "PB_IDLE"))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_20, "PB_IDLE");
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_20, "PB_IDLE"))
	{
		return 0;
	}
	return 1;
}

void func_763(var uParam0)
{
	float fVar0;
	__LIB_4__::func_517(1);
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_20, false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_20, "player", *uParam0, 0);
		fVar0 = (uParam0->f_14 + 180f);
		if (fVar0 > 360f)
		{
			fVar0 = (fVar0 - 360f);
		}
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_20, uParam0->f_11, 0f, 0f, fVar0, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_20);
	}
	if (!ANIMSCENE::_0x1F0E401031E20146(uParam0->f_20, "PB_IDLE"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_20, "PB_IDLE", true);
	}
}

bool func_764(int iParam0)
{
	return UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SHOP_MENU"), iParam0);
}

void func_765(int iParam0)
{
	__LIB_0__::func_8(&(Global_1914319.f_16855.f_3), iParam0);
}

var func_766(var uParam0)
{
	return uParam0->f_19;
}

int func_767()
{
	return Global_1914319.f_16855.f_3.f_22;
}

int func_768()
{
	return Global_1914319.f_16855.f_3.f_23;
}

int func_769(var uParam0)
{
	return uParam0->f_2031.f_77;
}

int func_770()
{
	return Global_1914319.f_16855.f_3.f_26;
}

int func_771()
{
	return Global_1914319.f_16855.f_3.f_25;
}

int func_772(var uParam0)
{
	return uParam0->f_2031.f_95;
}

var func_773(var uParam0)
{
	return uParam0->f_42;
}

bool func_774(int iParam0, var uParam1)
{
	struct<44> Var0;
	Var0.f_20 = 10;
	Var0.f_31 = 10;
	*uParam1 = { Var0 };
	uParam1->f_5 = -1;
	uParam1->f_12 = -1;
	*uParam1 = iParam0;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(*uParam1))
	{
		return false;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_INFO(*uParam1, &(uParam1->f_1)))
	{
		return false;
	}
	return true;
}

bool func_775(int iParam0, int iParam1, var uParam2)
{
	struct<44> Var0;
	Var0.f_20 = 10;
	Var0.f_31 = 10;
	*uParam2 = { Var0 };
	uParam2->f_5 = -1;
	uParam2->f_12 = -1;
	*uParam2 = __LIB_0__::func_561(iParam0);
	if (ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(*uParam2))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_INFO(*uParam2, &(uParam2->f_1)))
		{
			return true;
		}
	}
	*uParam2 = __LIB_6__::func_676(iParam1);
	if (ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(*uParam2))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_INFO(*uParam2, &(uParam2->f_1)))
		{
			return true;
		}
	}
	return false;
}

void func_776(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_10213, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_10222, iParam0);
}

void func_777(int iParam0)
{
	Global_1935689.f_10165 = (Global_1935689.f_10165 || iParam0);
}

bool func_778(var uParam0)
{
	uParam0->f_2031.f_49 = 0;
	return GRAPHICS::_0x3D084D5568FB4028(30);
	return true;
}

bool func_779(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*sParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_780(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

bool func_781(int iParam0)
{
	if (!__LIB_0__::func_144(*iParam0, 0))
	{
		return false;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			return true;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			return true;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			return true;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			return true;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			return true;
		default:
			break;
	}
	return false;
}

int func_782(var uParam0)
{
	return uParam0->f_12.f_5;
}

bool func_783(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if ((*iParam1)[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_784(int iParam0)
{
	switch (iParam0)
	{
		case -1847550017:
		case -1387964792:
		case -1080198344:
		case -1000405829:
		case -698079035:
		case 629735563:
		case 688587926:
		case 698653232:
		case 1282123855:
		case 1526346227:
		case 2112290568:
			return 1;
		case -2061583405:
		case -525676072:
			return 2;
		case -709696437:
		case 1223979091:
		case 1545016984:
		case 2047428024:
			return 3;
		case -923693316:
		case -839140560:
		case -298391753:
			return 4;
		case -1719060085:
			return 5;
		case -2085606460:
		case -795466267:
		case -497931013:
		case 81053684:
		case 172394747:
		case 461122406:
		case 1508306587:
			return 6;
		case 1868067663:
			return 7;
		case 1769055947:
			return 8;
		case 1096747416:
			return 9;
		case -852381396:
		case 153430294:
		case 684852611:
		case 1033860813:
			return 10;
		case -590250209:
		case 1772421657:
			return 11;
		case -1972808239:
		case -1423861687:
			return 12;
		case -999503751:
		default:
			break;
	}
	return 0;
}

bool func_785(var uParam0)
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		return false;
	}
	if (CAM::IS_CAM_INTERPOLATING(*uParam0))
	{
		return false;
	}
	if (Global_1914319.f_19461.f_179)
	{
		return false;
	}
	if (Global_1914319.f_19461.f_1 == 0 || Global_1914319.f_19461.f_1 == -999503751)
	{
		return false;
	}
	if (Global_1914319.f_19461.f_181)
	{
		return false;
	}
	return true;
}

void func_786(float fParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	fVar0 = Global_1914319.f_19461.f_182;
	fVar1 = Global_1914319.f_19461.f_183;
	if (fVar0 > 0f)
	{
		if (fVar0 < 0.2f)
		{
			fVar0 = 0f;
		}
		else
		{
			fVar0 = (fVar0 - 0.2f);
		}
	}
	else if (fVar0 < 0f)
	{
		if (fVar0 > -0.2f)
		{
			fVar0 = 0f;
		}
		else
		{
			fVar0 = (fVar0 + 0.2f);
		}
	}
	if (fVar1 > 0f)
	{
		if (fVar1 < 0.2f)
		{
			fVar1 = 0f;
		}
		else
		{
			fVar1 = (fVar1 - 0.2f);
		}
	}
	else if (fVar1 < 0f)
	{
		if (fVar1 > -0.2f)
		{
			fVar1 = 0f;
		}
		else
		{
			fVar1 = (fVar1 + 0.2f);
		}
	}
	fVar0 = (fVar0 + (fParam0 * 0.5f));
	fVar1 = (fVar1 + (fParam1 * 0.5f));
	if (fVar0 > 1f)
	{
		fVar0 = 1f;
	}
	else if (fVar0 < -1f)
	{
		fVar0 = -1f;
	}
	if (fVar1 > 1f)
	{
		fVar1 = 1f;
	}
	else if (fVar1 < -1f)
	{
		fVar1 = -1f;
	}
	Global_1914319.f_19461.f_182 = fVar0;
	Global_1914319.f_19461.f_183 = fVar1;
}

bool func_787(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return true;
		case 0:
			return false;
		case 2:
			return false;
		case 5:
			return true;
		case 3:
			return false;
		case 8:
			return true;
		case 6:
			return true;
		case 1:
			return true;
		case 7:
			return false;
		default:
			break;
	}
	return false;
}

bool func_788(int iParam0)
{
	return __LIB_0__::func_356(iParam0) == joaat("AMMO");
}

int func_789(var uParam0)
{
	if (uParam0->f_2031.f_99)
	{
		uParam0->f_2031.f_104.f_3 = -1;
		uParam0->f_2031.f_104.f_1 = -1;
		uParam0->f_2031.f_104 = -1;
		uParam0->f_2031.f_104.f_5 = -1;
		uParam0->f_2031.f_104.f_6 = -1;
		uParam0->f_2031.f_100 = 0;
		uParam0->f_2031.f_99 = 0;
		return 1;
	}
	return 0;
}

void func_790(var uParam0)
{
	uParam0->f_2031.f_83 = 0;
}

char* func_791(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return "SHOP_TITLE_BAIT";
		case 15:
			return "SHOP_TITLE_BANK";
		case 8:
			return "SHOP_TITLE_BARBER";
		case 33:
			return "SHOP_TITLE_BARTENDER";
		case 28:
			return "SHOP_TITLE_";
		case 29:
			return "SHOP_TITLE_BOUNTYHUNTING_MP_RETURN";
		case 10:
			return "SHOP_TITLE_BUTCHER";
		case 25:
			return "SHOP_TITLE_CAMP_SHAVING";
		case 30:
			return "SHOP_TITLE_COACH";
		case 0:
			return "SHOP_TITLE_DOCTOR";
		case 4:
			return "SHOP_TITLE_FENCE";
		case 3:
			return "SHOP_TITLE_GENERAL";
		case 6:
			return "SHOP_TITLE_GUNSMITH";
		case 27:
			return "SHOP_TITLE_TRAINER";
		case 9:
			return "SHOP_TITLE_HORSE_SHOP";
		case 2:
			return "SHOP_TITLE_POST";
		case 26:
			return "SHOP_TITLE_QUARTER";
		case 7:
			return "SHOP_TITLE_TAILOR";
		case 1:
			return "SHOP_TITLE_TRAIN_STATION";
		case 31:
			return "SHOP_TITLE_HORSE_FENCE_MP";
		case 5:
			return "SHOP_TITLE_HORSE_FENCE";
		case 12:
			return "SHOP_TITLE_MARKET_PLACE";
		case 13:
			return "SHOP_TITLE_MARKET_PLACE";
		case 14:
			return "SHOP_TITLE_MARKET_PLACE";
		case 18:
			return "SHOP_TITLE_ANIMAL_TRAPPER";
		case 19:
			return "SHOP_TITLE_PEARSON";
		case 22:
			return "SHOP_TITLE_NEWSPAPER_BOY";
		case 20:
			return "SHOP_TITLE_HOTEL";
		case 32:
			return "SHOP_TITLE_WILDERNESS_SUPPLIES";
		case 34:
			return "SHOP_TITLE_HANDHELD";
		case 21:
			return "SHOP_TITLE_PHOTO_STUDIO";
		case 24:
			return "SHOP_TITLE_WARDROBE";
		default:
			break;
	}
	return "INVALID SHOP";
}

bool func_792(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (__LIB_0__::func_192(iParam0, -1285438911))
	{
		return true;
	}
	return false;
}

void func_793(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemDescription");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "Enabled", bParam1);
}

void func_794(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemDescription");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "Visible", bParam1);
}

bool func_795(int iParam0)
{
	if ((iParam0 == 207706105 || iParam0 == -1998614617) || iParam0 == -357182937)
	{
		return true;
	}
	return false;
}

void func_796(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_16 == 0)
	{
		iVar0 = iParam1;
	}
	else
	{
		iVar0 = uParam0->f_16;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_57))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_2031.f_57, iVar0);
	}
	else
	{
		uParam0->f_2031.f_57 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_50, "PageFilterCurrentPageLabel", iVar0);
	}
}

void func_797(var uParam0)
{
	uParam0->f_16 = 0;
}

bool func_798(var uParam0, int iParam1)
{
	return (uParam0->f_5863 && iParam1) != 0;
}

var func_799(var uParam0)
{
	return uParam0->f_12.f_1;
}

void func_800(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2031.f_52, "ItemTooltip", sParam1);
}

void func_801(var uParam0)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_54, "modifiedPriceVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_54, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_54, "rightPriceTextVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_54, "purchasePrice", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_54, "purchaseModifiedPrice", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2031.f_54, "purchaseLabel", "");
}

void func_802(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemInfo1");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "Visible", bParam1);
}

void func_803(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemInfo1");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "IconVisible", bParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "TextureDictionary", iParam2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "Texture", iParam3);
}

void func_804(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemInfo2");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "Visible", bParam1);
}

void func_805(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemInfo2");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "IconVisible", bParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "TextureDictionary", iParam2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "Texture", iParam3);
}

void func_806(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemWeather");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "Visible", false);
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "OutfitWeather");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", false);
}

void func_807(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "SaddleStatsVisible", bParam1);
}

void func_808(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "StirrupStatsVisible", bParam1);
}

char* func_809()
{
	return "uiPaletteVisible";
}

bool func_810(var uParam0)
{
	return uParam0->f_2031.f_99;
}

bool func_811(var uParam0)
{
	return uParam0->f_2031.f_100;
}

void func_812()
{
	var uVar0;
	Global_1914319.f_16855.f_3.f_8 = 0;
	Global_1914319.f_16855.f_3.f_9 = 0;
	Global_1914319.f_16855.f_3.f_10 = uVar0;
	Global_1914319.f_16855.f_3.f_11 = 0;
	Global_1914319.f_16855.f_3.f_12 = 0;
	Global_1914319.f_16855.f_3.f_13 = uVar0;
}

bool func_813(int iParam0, var uParam1)
{
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO(*uParam1, iParam0, &(uParam1->f_5)))
	{
		uParam1->f_31[0] = uParam1->f_5;
		uParam1->f_12 = { uParam1->f_5 };
		uParam1->f_20[0] = 0;
		uParam1->f_42 = 0;
		uParam1->f_43 = iParam0;
		return true;
	}
	return false;
}

bool func_814(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(*uParam1, uParam1->f_12, iParam0, &iVar0))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(*uParam1, iVar0, iParam2))
		{
			return true;
		}
	}
	return false;
}

int func_815()
{
	return Global_1914319.f_16855.f_3.f_1;
}

int func_816()
{
	return Global_1914319.f_16855.f_3.f_5;
}

void func_817(int iParam0)
{
	Global_1914319.f_16855.f_3.f_7 = *iParam0;
}

void func_818(int iParam0)
{
	Global_1914319.f_16855.f_3.f_6 = iParam0;
}

bool func_819()
{
	return UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SHOP_MENU"), -1597171896);
}

int func_820(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_16855.f_3.f_14;
	}
	return Global_1914319.f_16855.f_3.f_8;
}

void func_821(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1914319.f_16855.f_3.f_20 = Global_1914319.f_16855.f_3.f_16;
		Global_1914319.f_16855.f_3.f_16 = *iParam0;
	}
	else
	{
		Global_1914319.f_16855.f_3.f_13 = Global_1914319.f_16855.f_3.f_10;
		Global_1914319.f_16855.f_3.f_10 = *iParam0;
	}
}

void func_822(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1914319.f_16855.f_3.f_19 = Global_1914319.f_16855.f_3.f_15;
		Global_1914319.f_16855.f_3.f_15 = iParam0;
	}
	else
	{
		Global_1914319.f_16855.f_3.f_12 = Global_1914319.f_16855.f_3.f_9;
		Global_1914319.f_16855.f_3.f_9 = iParam0;
	}
}

int func_823(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, 1184271882);
}

int func_824(var uParam0)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, -804795275);
	return iVar0;
}

int func_825(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, 997560919);
}

int func_826(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		default:
			return -1;
	}
	return -1;
}

int func_827(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, -1569227938, bParam1);
	return 1;
}

bool func_828(int iParam0)
{
	return (iParam0 == joaat("CLOTHING_ITEM_HAIR_BALD") || iParam0 == -312175403);
}

bool func_829(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, -1569227938);
}

void func_830(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_54, "isAffordable", bParam1);
}

int func_831()
{
	return Global_1914319.f_16855.f_3.f_17;
}

int func_832(var uParam0)
{
	return uParam0->f_2031.f_72;
}

void func_833(var uParam0, int iParam1)
{
	uParam0->f_2031.f_72 = iParam1;
	if (uParam0->f_2031.f_72 >= uParam0->f_2031.f_73)
	{
		uParam0->f_2031.f_72 = 0;
	}
	else if (uParam0->f_2031.f_72 < 0)
	{
		uParam0->f_2031.f_72 = (uParam0->f_2031.f_73 - 1);
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_50, 1731278865, uParam0->f_2031.f_72);
}

void func_834(int iParam0)
{
	Global_1914319.f_16855.f_3.f_17 = iParam0;
}

int func_835()
{
	return Global_1914319.f_16855.f_3.f_21;
}

int func_836(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, -804795275);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, 1535851697))
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, 988907979, iParam1 > 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, 1417549877, iParam1 < iVar0);
	}
	if (iParam1 > iVar0)
	{
		return 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 1184271882, iParam1);
	return 1;
}

int func_837()
{
	return 1999907591;
}

int func_838()
{
	return -655974324;
}

int func_839(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 358835375 /* GXTEntry: "Shirt Collar" */;
		case 1:
			return -1127546830 /* GXTEntry: "Shirt Sleeves" */;
		case 2:
			return 1116743896 /* GXTEntry: "Boots" */;
		default:
			break;
	}
	return -1;
}

int func_840()
{
	return 800223284;
}

int func_841()
{
	return -1577411677;
}

int func_842()
{
	return -2105905628;
}

void func_843(var uParam0, int iParam1)
{
	uParam0->f_2031.f_85 = iParam1;
	uParam0->f_148.f_1281.f_207 = iParam1;
	Global_1914319.f_16855.f_37 = iParam1;
}

int func_844()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	Var4.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!__LIB_0__::func_236(&Var4, iVar2, iVar0, iVar1))
			{
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4))
			{
				iVar3++;
			}
			iVar2++;
		}
		__LIB_0__::func_238(iVar0);
	}
	return iVar3;
}

char* func_845()
{
	return "uiPaletteOptionItemType";
}

char* func_846()
{
	return "uiPaletteOptionItemLayoutLinkID";
}

char* func_847()
{
	return "uiItemID";
}

bool func_848(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	return (iParam0 >= 128 && iParam0 <= 148);
}

int func_849(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 1;
		case 19:
			return 2;
		default:
			break;
	}
	return 0;
}

bool func_850(int iParam0)
{
	if (iParam0 == Global_1935689.f_18)
	{
		return true;
	}
	return false;
}

bool func_851()
{
	if (Global_1935689.f_17 == 1 || Global_1935689.f_17 == 2)
	{
		return true;
	}
	return false;
}

int func_852(int iParam0)
{
	if (__LIB_0__::func_774(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

bool func_853(int iParam0)
{
	return (Global_40.f_12019.f_2 && iParam0) != 0;
}

bool func_854(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = __LIB_0__::func_357(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_855(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar7;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam0, iParam1, &iVar0))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(iParam0, iVar0, iParam2, &uVar7))
		{
			return uVar7;
		}
	}
	return -1;
}

bool func_856(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<19> Var1;
	Var1.f_2 = 5;
	Var1.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var1))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iParam2 != 0 && Var1.f_18[iVar0 /*2*/].f_1 != iParam2)
			{
				Jump @117; //curOff = 67
			}
			else if (iParam3 != 0 && Var1.f_18[iVar0 /*2*/] != iParam3)
			{
			}
			else
			{
				*iParam1 = { Var1.f_18[iVar0 /*2*/] };
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

struct<10> func_857(int iParam0)
{
	struct<10> Var0;
	Var0 = 1065353216;
	Var0.f_1 = 1056964608;
	Var0.f_2 = 1132462080;
	Var0.f_3 = 1108082688;
	Var0.f_4 = 1084227584;
	Var0.f_5 = 1152319488;
	Var0.f_6 = 1;
	Var0.f_8 = 1;
	Var0 = Global_1914319.f_19461.f_22[iParam0 /*12*/].f_10;
	Var0.f_1 = 1f;
	Var0.f_2 = 64f;
	Var0.f_3 = 35f;
	Var0.f_4 = 6f;
	Var0.f_5 = 120f;
	Var0.f_6 = 1;
	Var0.f_7 = 0;
	Var0.f_8 = 0;
	Var0.f_9 = 0;
	return Var0;
}

int func_858(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return -1;
	}
	if (__LIB_12__::func_486(iParam0))
	{
		return -1;
	}
	if (__LIB_0__::func_192(iParam0, -1529356747))
	{
		return 0;
	}
	if (__LIB_0__::func_192(iParam0, -1938332139))
	{
		return 1;
	}
	if (__LIB_0__::func_192(iParam0, -821065926))
	{
		return 2;
	}
	if (__LIB_0__::func_192(iParam0, -923980501))
	{
		return 3;
	}
	if (__LIB_0__::func_192(iParam0, -1679966367))
	{
		return 4;
	}
	return -1;
}

int func_859(var uParam0)
{
	return uParam0->f_1.f_2;
}

bool func_860(int iParam0, var uParam1)
{
	var uVar0;
	return ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(*uParam1, iParam0, &uVar0);
}

var func_861(var uParam0)
{
	return uParam0->f_43;
}

bool func_862()
{
	return UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("SHOP_MENU"), 677247760);
}

void func_863(var uParam0)
{
	uParam0->f_2031.f_80 = 1;
}

char* func_864(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "SelectHeldEnabled";
			}
			else
			{
				return "SelectEnabled";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "OptionHeldEnabled";
			}
			else
			{
				return "OptionEnabled";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "ToggleHeldEnabled";
			}
			else
			{
				return "ToggleEnabled";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "InfoHeldEnabled";
			}
			else
			{
				return "InfoEnabled";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "AdjustHeldEnabled";
			}
			else
			{
				return "AdjustEnabled";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "BackHeldEnabled";
			}
			else
			{
				return "BackEnabled";
			}
			break;
	}
	return "";
}

char* func_865(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "SelectHeldVisible";
			}
			else
			{
				return "SelectVisible";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "OptionHeldVisible";
			}
			else
			{
				return "OptionVisible";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "ToggleHeldVisible";
			}
			else
			{
				return "ToggleVisible";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "InfoHeldVisible";
			}
			else
			{
				return "InfoVisible";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "AdjustHeldVisible";
			}
			else
			{
				return "AdjustVisible";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "BackHeldVisible";
			}
			else
			{
				return "BackVisible";
			}
			break;
	}
	return "";
}

char* func_866(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "SelectHeld";
		case 2:
			return "OptionHeld";
		case 3:
			return "ToggleHeld";
		case 4:
			return "InfoHeld";
		case 5:
			return "AdjustHeld";
		case 6:
			return "BackHeld";
	}
	return "";
}

int func_867(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_868(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 688587926 || iParam0 == 2047428024) || iParam0 == 698653232) || iParam0 == 81053684) || iParam0 == -2061583405) || iParam0 == -1719060085) || iParam0 == -163032984) || iParam0 == 1868067663) || iParam0 == -839140560) || iParam0 == -686686829) || iParam0 == -795466267) || iParam0 == 2029752284) || iParam0 == 1201276490) || iParam0 == -1440373417) || iParam0 == 562107429) || iParam0 == 1477698721) || iParam0 == -1632561800) || iParam0 == 684307653) || iParam0 == 1282123855) || iParam0 == -68128151) || iParam0 == -497931013) || iParam0 == -413129408) || iParam0 == 2112290568) || iParam0 == 502936876) || iParam0 == 1132079111) || iParam0 == 478744432) || iParam0 == 1096747416) || iParam0 == 1033860813) || iParam0 == 2016058810) || iParam0 == 1769055947) || iParam0 == -999503751) || iParam0 == 1508306587) || iParam0 == -525676072) || iParam0 == -298391753) || iParam0 == -590250209) || iParam0 == -923693316) || iParam0 == -709696437) || iParam0 == 1223979091) || iParam0 == 1545016984) || iParam0 == 629735563) || iParam0 == -698079035) || iParam0 == -1000405829) || iParam0 == -1387964792) || iParam0 == 1526346227) || iParam0 == -1847550017) || iParam0 == -1080198344) || iParam0 == -852381396) || iParam0 == 153430294) || iParam0 == 684852611) || iParam0 == -1972808239) || iParam0 == -2085606460) || iParam0 == 1772421657) || iParam0 == -1423861687)
	{
		return true;
	}
	return false;
}

void func_869(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemInfo2");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "Text", iParam1);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "Style", -548373963);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "Style", 432931142);
	}
}

bool func_870(var uParam0)
{
	return uParam0->f_2031.f_83 != 0;
}

int func_871(var uParam0)
{
	return uParam0->f_2031.f_83;
}

int func_872(var uParam0)
{
	return uParam0->f_2031.f_84;
}

int func_873(var uParam0)
{
	return uParam0->f_2031.f_85;
}

bool func_874(int iParam0, int iParam1, int iParam2)
{
	return ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam0, iParam1, iParam2);
}

Vector3 func_875(int iParam0, struct<4> Param1, var uParam5)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	iVar3 = 0;
	iVar4 = -1;
	iVar5 = -1;
	if (iParam0 >= 0 && iParam0 < Param1.f_3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(*uParam5, Param1, iParam0, &iVar3, &iVar4, &iVar5))
		{
			vVar0.x = iVar3;
			vVar0.f_1 = iVar5;
			vVar0.f_2 = iVar4;
		}
	}
	return vVar0;
}

bool func_876(int iParam0)
{
	return __LIB_0__::func_357(iParam0) == 177369922;
}

bool func_877(int iParam0)
{
	return __LIB_0__::func_357(iParam0) == -1551449832;
}

Vector3 func_878(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 1:
			vVar0 = { 0.2417f, 1.0822f, 0.4057f };
			break;
		case 2:
			vVar0 = { 0.0295f, 0.905f, 0.6256f };
			break;
		case 3:
			vVar0 = { -0.0468f, 1.5582f, -0.1943f };
			break;
		case 4:
			vVar0 = { 0.784f, 0.8018f, -0.5943f };
			break;
		case 5:
			vVar0 = { -0.6714f, 1.0141f, 0.0256f };
			break;
		case 6:
			vVar0 = { 0.0969f, 1.2198f, 0.4057f };
			break;
		case 7:
			vVar0 = { 0.3044f, 1.3972f, 0.4333f };
			break;
		case 8:
			vVar0 = { -0.6609f, 1.3675f, -0.3927f };
			break;
		case 9:
			vVar0 = { -0.1092f, 0.9631f, 0.3073f };
			break;
		case 10:
			vVar0 = { -0.1825f, 1.0714f, 0.0057f };
			break;
		case 11:
			vVar0 = { -0.7371f, 0.6329f, 0.2057f };
			break;
		case 12:
			vVar0 = { 0.6714f, 1.0141f, 0.0256f };
			break;
		case 0:
		default:
			vVar0 = { 0f, 0f, 0f };
			break;
	}
	return vVar0;
}

Vector3 func_879(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 1:
			vVar0 = { 0.2888f, 0.0967f, 0.395f };
			break;
		case 2:
			vVar0 = { 0.2724f, -0.3441f, 0.63f };
			break;
		case 3:
			vVar0 = { 0.21f, 0.19f, -0.4f };
			break;
		case 4:
			vVar0 = { 0.23f, 0.18f, -0.69f };
			break;
		case 5:
			vVar0 = { 0.2853f, -0.0589f, 0.01f };
			break;
		case 6:
			vVar0 = { 0.2371f, -0.1028f, 0.48f };
			break;
		case 7:
			vVar0 = { 0.4475f, 0.0964f, 0.275f };
			break;
		case 8:
			vVar0 = { 0.1719f, 0.2036f, -0.45f };
			break;
		case 9:
			vVar0 = { 0.3872f, -0.6841f, 0.425f };
			break;
		case 10:
			vVar0 = { 0.296f, -0.186f, -0.105f };
			break;
		case 11:
			vVar0 = { 0.2198f, 0.0241f, -0.105f };
			break;
		case 12:
			vVar0 = { 0.2853f, 0.0589f, 0.01f };
			break;
		case 0:
		default:
			vVar0 = { 0.4866f, -0.6752f, -0.1223f };
			break;
	}
	return vVar0;
}

float func_880(int iParam0)
{
	float fVar0;
	switch (iParam0)
	{
		case 1:
			fVar0 = 43.9f;
			break;
		case 2:
			fVar0 = 38.1f;
			break;
		case 3:
			fVar0 = 51.2f;
			break;
		case 4:
			fVar0 = 40f;
			break;
		case 5:
			fVar0 = 36.6f;
			break;
		case 6:
			fVar0 = 37.8f;
			break;
		case 7:
			fVar0 = 51.3f;
			break;
		case 8:
			fVar0 = 51.3f;
			break;
		case 9:
			fVar0 = 51.3f;
			break;
		case 10:
			fVar0 = 43.9f;
			break;
		case 11:
			fVar0 = 44.5f;
			break;
		case 12:
			fVar0 = 44.9f;
			break;
		case 0:
		default:
			fVar0 = 51.3f;
			break;
	}
	return fVar0;
}

float func_881(int iParam0)
{
	float fVar0;
	switch (iParam0)
	{
		case 1:
			fVar0 = 4f;
			break;
		case 2:
			fVar0 = 3.2f;
			break;
		case 3:
			fVar0 = 1f;
			break;
		case 4:
			fVar0 = 4f;
			break;
		case 5:
			fVar0 = 2f;
			break;
		case 6:
			fVar0 = 2f;
			break;
		case 7:
			fVar0 = 2f;
			break;
		case 8:
			fVar0 = 2f;
			break;
		case 9:
			fVar0 = 2f;
			break;
		case 10:
			fVar0 = 1.8f;
			break;
		case 11:
			fVar0 = 3f;
			break;
		case 12:
			fVar0 = 4f;
			break;
		case 0:
		default:
			fVar0 = 1.5f;
			break;
	}
	return fVar0;
}

float func_882(int iParam0)
{
	float fVar0;
	switch (iParam0)
	{
		case 1:
			fVar0 = 1f;
			break;
		case 2:
			fVar0 = 0.79f;
			break;
		case 3:
			fVar0 = 1.4f;
			break;
		case 4:
			fVar0 = 1.2f;
			break;
		case 5:
			fVar0 = 0.95f;
			break;
		case 6:
			fVar0 = 1.1f;
			break;
		case 7:
			fVar0 = 1.3f;
			break;
		case 8:
			fVar0 = 1.4f;
			break;
		case 9:
			fVar0 = 0.85f;
			break;
		case 10:
			fVar0 = 0.95f;
			break;
		case 11:
			fVar0 = 0.8f;
			break;
		case 12:
			fVar0 = 0.95f;
			break;
		case 0:
		default:
			fVar0 = 2f;
			break;
	}
	return fVar0;
}

bool func_883(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return false;
	}
	uParam0->f_2031.f_77 = iParam1;
	return true;
}

void func_884(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "RecipeFooterVisible", bParam1);
}

void func_885(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "FooterVisible", bParam1);
}

void func_886(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "RecipeInfoVisible", bParam1);
}

void func_887(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_54, "visible", bParam1);
}

bool func_888(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = 23;
			return true;
		case 1:
			*iParam1 = 105;
			return true;
		case 2:
			*iParam1 = 5;
			return true;
		case 3:
			*iParam1 = 78;
			return true;
		case 4:
			*iParam1 = 28;
			return true;
		case 5:
			*iParam1 = 76;
			return true;
		case 6:
			*iParam1 = 69;
			return true;
		default:
			break;
	}
	return false;
}

bool func_889(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 117:
			switch (iParam1)
			{
				case 126:
					return true;
				default:
					break;
			}
			return false;
		default:
			break;
	}
	return true;
}

char* func_890()
{
	return "PageFilterCurrentPageIndex";
}

bool func_891(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam0, iParam1, &vVar0))
	{
		return __LIB_0__::func_27(vVar0.z, iParam2);
	}
	return false;
}

int func_892()
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(__LIB_12__::func_478(), __LIB_12__::func_481());
	return iVar0;
}

int func_893()
{
	return Global_1914319.f_16855.f_3.f_6;
}

int func_894()
{
	switch (Global_1914319.f_16855.f_3.f_1)
	{
		case -1948969248:
			return 1;
		case -729996127:
			return 1;
		case -626520457:
			return 2;
		case 1180239319:
			return 3;
		case -177941708:
			return 4;
		default:
			return 0;
	}
	return 0;
}

struct<4> func_895(int iParam0)
{
	struct<4> Var0;
	Var0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam0, "uiGuidData1");
	Var0.f_1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam0, "uiGuidData2");
	Var0.f_2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam0, "uiGuidData3");
	Var0.f_3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam0, "uiGuidData4");
	return Var0;
}

char* func_896()
{
	return "uiItemLayoutId";
}

char* func_897()
{
	return "uiItemMenuId";
}

int func_898(var uParam0)
{
	return uParam0->f_2031.f_96;
}

int func_899(int iParam0)
{
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return 0;
	}
	PED::_0xA274F51EF7E34B95(iParam0, "HORSE_PREVIEW_OUTFIT");
	return 1;
}

bool func_900(int iParam0)
{
	return UNLOCK::_UNLOCK_IS_NEW(__LIB_0__::func_17(iParam0));
}

char* func_901()
{
	return "uiItemNew";
}

int func_902(var uParam0)
{
	return uParam0->f_2031.f_44;
}

bool func_903(int iParam0)
{
	return __LIB_0__::func_357(iParam0) == -712836614;
}

void func_904(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 18:
			*iParam1 = 369710026;
			break;
		case 19:
			*iParam1 = 761605153;
			break;
		case 6:
			*iParam1 = -893266537;
			break;
		case 4:
			*iParam1 = -768110908;
			break;
	}
}

int func_905(int iParam0)
{
	switch (iParam0)
	{
		case 1508306587:
			return 956753366;
		case 2029752284:
			return 229848043;
		case -413129408:
			return 588559743;
		case 1132079111:
			return -1165477807;
		case 478744432:
			return 542482997;
		case -68128151:
			return -1598999798;
		case -686686829:
			return -1964604515;
		case 1201276490:
			return -950324859;
		case -839140560:
			return -1768217088;
		case -298391753:
			return -647442474;
		case 1589583617:
			return -1669395156;
		case 1769055947:
			return 2099263972;
		case 1545016984:
			return 2099263972;
		case 1868067663:
			return 1177470655;
		case -1080198344:
			return 1177470655;
		case -1440373417:
			return -145955678;
		case 562107429:
			return 1758406353;
		case -163032984:
			return 332275111;
		case -1719060085:
			return 1533215112;
		case 1033860813:
			return 1990307743;
		case -2061583405:
			return 1314684259;
		case 58819564:
			return -1942508740;
		case -646147237:
			return 2145255488;
		case 1096747416:
			return 1735590610;
		case -852381396:
			return -1804458598;
		case 153430294:
			return -1804458598;
		case 81053684:
			return -2096103467;
		case -525676072:
			return -2096103467;
		case -497931013:
			return -572044425;
		case 172394747:
			return -1893707445;
		case 461122406:
			return -572044425;
		case -999503751:
			return 1704476318;
		case 502936876:
			return 1135086855;
		case 2047428024:
			return -1118685671;
		case -1358040092:
			return 1373811563;
		case -590250209:
			return -551303313;
		case 1477698721:
			return -1962451182;
		case 688587926:
			return -999848467;
		case 684307653:
			return 2123406071;
		case -923693316:
			return 2099263972;
		case 2016058810:
			return 406014096;
		case 1282123855:
			return -350927420;
		case -795466267:
			return -494519208;
		case 2112290568:
			return 834235656;
		case 698653232:
			return 1488981351;
		case -1423861687:
			return -1622329839;
		case -1126146024:
			return 1995280482;
		case 684852611:
			return -1596855333;
		case -1934420714:
			return -1596855333;
		case -1972808239:
			return -1596855333;
		case -2085606460:
			return -1596855333;
		case 1772421657:
			return -1596855333;
		case -1407809882:
			return -721165241;
		case 1061770183:
			return -1134874053;
		default:
			break;
	}
	return 0;
}

var func_906(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_16855.f_3.f_20;
	}
	return Global_1914319.f_16855.f_3.f_13;
}

int func_907(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_16855.f_3.f_18;
	}
	return Global_1914319.f_16855.f_3.f_11;
}

int func_908(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_16855.f_3.f_19;
	}
	return Global_1914319.f_16855.f_3.f_12;
}

char* func_909()
{
	return "itemEnabled";
}

bool func_910(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, -1303648999))
	{
		return true;
	}
	return false;
}

int func_911(int iParam0)
{
	switch (iParam0)
	{
		case 1795979421:
			return -1774867076;
		case 1193257440:
			return -421952220;
		case 1415299667:
			return 1231618917;
		case -1015460895:
			return 1043717005;
		case -768291983:
			return 142663787;
		default:
			break;
	}
	return 0;
}

bool func_912(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, -313258003))
	{
		return true;
	}
	return false;
}

bool func_913(int iParam0)
{
	return ((Global_40.f_7731[0 /*5*/] >= iParam0 || Global_40.f_7731[1 /*5*/] >= iParam0) || Global_40.f_7731[2 /*5*/] >= iParam0);
}

bool func_914(int iParam0)
{
	return (Global_40.f_7731.f_16 && iParam0) != 0;
}

bool func_915(int iParam0)
{
	return ((Global_40.f_7731[0 /*5*/] >= iParam0 && Global_40.f_7731[1 /*5*/] >= iParam0) && Global_40.f_7731[2 /*5*/] >= iParam0);
}

bool func_916(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_1329.f_48)
	{
		iVar1 = 0;
		while (iVar1 < Global_1946804.f_1329.f_29[iVar0 /*6*/].f_5)
		{
			if (iParam0 == Global_1946804.f_1329.f_29[iVar0 /*6*/].f_1[iVar1])
			{
				*iParam1 = Global_1946804.f_1329.f_29[iVar0 /*6*/];
				*iParam2 = iVar0;
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

int func_917(int iParam0)
{
	switch (iParam0)
	{
		case 358835375: /* GXTEntry: "Shirt Collar" */
			return 0;
		case -1127546830: /* GXTEntry: "Shirt Sleeves" */
			return 1;
		case 1116743896: /* GXTEntry: "Boots" */
			return 2;
		default:
			break;
	}
	return 3;
}

int func_918(int iParam0, int iParam1)
{
	struct<7> Var0;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam0, iParam1, &Var0))
	{
		return Var0.f_6;
	}
	return -1;
}

bool func_919(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if ((iParam1 + iParam2) >= iParam3 && iParam0 < iParam1)
	{
		iParam0 = (iParam0 + iParam3);
	}
	return (iParam0 >= iParam1 && iParam0 <= (iParam1 + iParam2));
}

bool func_920(int iParam0)
{
	if ((((iParam0 == -1873242174 || iParam0 == -1095179319) || iParam0 == 1406783678) || iParam0 == 2119176479) || iParam0 == 1649093494)
	{
		return true;
	}
	return false;
}

int func_921(int iParam0, var uParam1)
{
	int iVar0;
	struct<4> Var1;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(*uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(*uParam1, uParam1->f_12, iParam0, &iVar0))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(*uParam1, iVar0, &Var1))
		{
			return Var1.f_3;
		}
	}
	return -1;
}

char* func_922()
{
	return "uiItemLabel";
}

char* func_923()
{
	return "uiItemRawText";
}

void func_924(int iParam0, struct<4> Param1)
{
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "uiGuidData1", Param1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "uiGuidData2", Param1.f_1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "uiGuidData3", Param1.f_2);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "uiGuidData4", Param1.f_3);
}

bool func_925(var uParam0, bool bParam1)
{
	struct<11> Var0;
	struct<10> Var14;
	Var0.f_9 = -1591664384;
	if (!__LIB_0__::func_464(*uParam0, &Var0, bParam1, 0))
	{
		return false;
	}
	Var14.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Var0.f_5, &Var14, bParam1, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_831(Var14.f_4))
	{
		return false;
	}
	return Var0.f_10;
}

int func_926()
{
	return 811708401;
}

bool func_927(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 20;
	iVar2 = 35;
	*iParam2 = 0;
	switch (iParam1)
	{
		case 0:
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("NECKTIES")))
			{
				*iParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, 694822476))
			{
				*iParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			return true;
		case 1:
			if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
			{
				*iParam2 = 1317906541; /* GXTEntry: "Your sleeves are covered up, remove the covering item." */
				return false;
			}
			iVar0 = 22;
			if (Global_1946804.f_1497.f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/])
			{
				*iParam2 = -692182446; /* GXTEntry: "Your bracelet does not support this." */
				return false;
			}
			return true;
		case 2:
			if (Global_1946804.f_1497.f_1[iVar2 /*3*/] != Global_1946804.f_57[iVar2 /*11*/])
			{
				*iParam2 = 807419199; /* GXTEntry: "Your pants are covered up, remove the covering item." */
				return false;
			}
			return true;
		default:
			break;
	}
	return true;
}

int func_928(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (bParam1)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "locked", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "forSale", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "owned", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "soldOut", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "equipped", false);
	}
	else if (bParam2)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "owned", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "forSale", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "locked", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "soldOut", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "equipped", true);
	}
	else if (bParam3)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "owned", bParam6);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "forSale", !bParam6);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "locked", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "soldOut", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "equipped", false);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "forSale", bParam4);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "owned", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "locked", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "soldOut", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "equipped", false);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam0, "useGoldPrice", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam0, "price", iParam5);
	return 1;
}

bool func_929(int iParam0)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	return true;
}

char* func_930(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Ambarino";
		case 1:
			return "New Hanover";
		case 2:
			return "Lemoyne";
		case 3:
			return "West Elizabeth";
		case 5:
			return "Guarma";
		case 4:
			return "New Austin";
		default:
			break;
	}
	return "Invalid Law Bounty State";
}

char* func_931(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LBS_AMBARINO";
		case 1:
			return "LBS_NEW_HANOVER";
		case 2:
			return "LBS_LEMOYNE";
		case 3:
			return "LBS_W_ELIZABETH";
		case 4:
			return "LBS_NEW_AUSTIN";
		case 5:
			return "LBS_GUARMA";
		default:
			break;
	}
	return "LBS_INVALID";
}

bool func_932(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;
	iVar0 = __LIB_0__::func_162(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

int func_933()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_1935689.f_10168[iVar0] == Global_1935689.f_10189)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_934(bool bParam0)
{
	if (bParam0)
	{
		HUD::_SHOW_PLAYER_CORES(true);
		HUD::_SHOW_HORSE_CORES(false);
	}
	else
	{
		HUD::_SHOW_PLAYER_CORES(false);
		HUD::_SHOW_HORSE_CORES(true);
	}
}

bool func_935()
{
	return Global_1935689.f_11;
}

void func_936(int iParam0)
{
	Global_1935689.f_10190 = iParam0;
}

int func_937(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1346594033;
		case -1559802791:
			return -352057134;
		case -1268291907:
			return 845736308;
		case -96974025:
			return -2057617490;
		case -1666604090:
			return 991808728;
		case 1561961676:
			return -92112048;
		case -156634416:
			return 2047707540;
		case 1061777683:
			return -36657802;
		case -283002878:
			return 262409577;
		case -2074770370:
			return 1643818657;
		case -693134279:
			return -1077706770;
		case -182626652:
			if ((Global_1914319.f_17370 || Global_1914319.f_18996.f_1) && Global_1914319.f_16855 == 19)
			{
				return joaat("SHOP_PEARSON_DONATE");
			}
			else
			{
				return -161395681;
			}
			break;
	}
	return 0;
}

void func_938(int iParam0)
{
	if (Global_1935689.f_19.f_203 > 16)
	{
		if (Global_1935689.f_7)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10209, MISC::_CREATE_VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1935689.f_10194));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10209, MISC::_CREATE_VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1935689.f_19.f_203));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10209, "");
	}
}

bool func_939(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_30(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_381(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return __LIB_0__::func_239(&(Global_40.f_9910[iVar0 /*6*/]), 1);
}

bool func_940(int iParam0, int iParam1)
{
	struct<37> Var0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	return ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0);
}

int func_941(int iParam0)
{
	int iVar0;
	if (!__LIB_1__::func_917(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (!__LIB_1__::func_918(iVar0))
	{
		return 0;
	}
	return Global_1914319.f_3[iVar0 /*446*/].f_413;
}

bool func_942(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	return __LIB_0__::func_357(iParam0) == -999503751;
}

bool func_943(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_FANCY_SUIT"):
			return false;
		case joaat("CLOTHING_HEIST_OUTFIT"):
			return false;
		case 1902428294: /* GXTEntry: "The Wittemore" */
			return false;
		case -1243402388:
			return false;
		case 65931886:
			return false;
		case 1371678229:
			return false;
		case 2102263084:
			return false;
		case -272211555: /* GXTEntry: "The Homesteader" */
			return false;
		case -55563408:
			return false;
		case -1914506115:
			return false;
		case 802495462:
			return false;
		case 842905332:
			return false;
		case 1511551084:
			return false;
		case -1725704631:
			return false;
		case 1257427489:
			return false;
		case -659341240:
			return false;
		case 2038771525:
			return false;
		case -535599244:
			return false;
		case -389591806:
			return false;
		case 1156438275: /* GXTEntry: "The Rancher" */
			return false;
		case 594312243:
			return false;
		case -978578725:
			return false;
		case -1951220140:
			return false;
		case 1460520700:
			return false;
		case 523337834:
			return false;
		case -19271249:
			return false;
		case 214175524:
			return false;
		case -1303643297:
			return false;
		case 411856831:
			return false;
		case -926815459:
			return false;
		case -1300731953:
			return false;
		case -291256376:
			return false;
		default:
			break;
	}
	return true;
}

bool func_944(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_356(iParam0);
	return (iVar0 == joaat("WEAPON") || iVar0 == joaat("AMMO"));
}

bool func_945(int iParam0)
{
	return __LIB_0__::func_356(iParam0) == joaat("CONSUMABLE");
}

bool func_946(int iParam0)
{
	return __LIB_0__::func_192(iParam0, -651046900);
}

bool func_947(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, -1227898937))
	{
		return true;
	}
	return false;
}

void func_948(int iParam0)
{
	int iVar0;
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (!__LIB_1__::func_918(iVar0))
	{
		return;
	}
	Global_1914319.f_3[iVar0 /*446*/].f_413 = 0;
}

int func_949(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0x2BAE4880DCDD560B(iParam0, iParam1))
	{
		return 0;
	}
	return INVENTORY::_0x2E1CDC1FF3B8473E(iParam0, iParam1);
}

int func_950(var uParam0, int iParam1)
{
	int iVar0;
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_1[iVar0 /*5*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_951(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam0, iParam1, &Var0))
	{
		return __LIB_0__::func_27(Var0.f_3, iParam2);
	}
	return false;
}

int func_952(var uParam0)
{
	return uParam0->f_12.f_6;
}

char* func_953(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "SelectLabel";
		case 2:
			return "OptionLabel";
		case 3:
			return "ToggleLabel";
		case 4:
			return "InfoLabel";
		case 5:
			return "AdjustLabel";
		case 6:
			return "BackLabel";
	}
	return "";
}

void func_954(var uParam0, var uParam1)
{
	uParam0->f_2031.f_86 = { *uParam1 };
}

int func_955()
{
	return -2087382057;
}

bool func_956(int iParam0)
{
	switch (*iParam0)
	{
		case 5:
		case 23:
		case 28:
		case 69:
		case 76:
		case 78:
		case 105:
			return true;
		default:
			break;
	}
	return false;
}

int func_957(int iParam0, int iParam1)
{
	if (iParam0 == 19)
	{
		if (__LIB_0__::func_357(iParam1) == -590250209)
		{
			return 0;
		}
		else
		{
			return 3;
		}
	}
	return 0;
}

void func_958(int iParam0)
{
	UNLOCK::_UNLOCK_SET_NEW(__LIB_0__::func_17(iParam0), true);
}

int func_959(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar4;
	struct<2> Var5;
	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ID(iParam0);
	if (iVar0 != 0)
	{
		uVar2 = 1;
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iVar0, &uVar2);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iVar0, &uVar2, iVar1, &Var5))
			{
				if (Var5.f_1 == iParam1)
				{
					return Var5;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

void func_960(var uParam0, int iParam1)
{
	__LIB_0__::func_7(&(uParam0->f_2006), iParam1);
}

var func_961(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	UIFEED::_0xDD1232B332CBB9E7(6, 1, 0);
	return __LIB_0__::func_384(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

void func_962(var uParam0, int iParam1)
{
	__LIB_0__::func_8(&(uParam0->f_2006), iParam1);
}

int func_963(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_69 - 1))
	{
		iVar1 = uParam0->f_70[iVar0];
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		if (iParam1 == __LIB_9__::func_812(iVar2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_964(var uParam0)
{
	uParam0->f_2031.f_81 = 1;
}

bool func_965(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_434;
}

bool func_966(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_357(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -1551449832:
		case 177369922:
			return true;
	}
	return false;
}

bool func_967(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_357(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -1629133289:
		case -1555511632:
		case -1346384396:
		case -712836614:
		case 599669344:
		case 1302066700:
			return true;
	}
	return false;
}

bool func_968(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam0, 352481484))
	{
		*iParam1 = 352481484;
		return true;
	}
	return false;
}

void func_969(int iParam0)
{
	PED::_0xA4AC05B1A364EBC5(iParam0, "HORSE_PREVIEW_OUTFIT", 1);
}

int func_970(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		default:
			return 0;
	}
	return 0;
}

void func_971(int iParam0)
{
	if (__LIB_0__::func_2() != 0 || !__LIB_0__::func_144(iParam0, 0))
	{
		return;
	}
}

struct<4> func_972(var uParam0)
{
	return uParam0->f_2031.f_90;
}

bool func_973(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_357(iParam0);
	iVar1 = __LIB_0__::func_357(iParam1);
	switch (iVar0)
	{
		case 1196380333:
			if (iVar1 == -2074343699)
			{
				return true;
			}
			break;
		case 178628960:
			if (iVar1 == -1876918654)
			{
				return true;
			}
			break;
		case -640803885:
			if (iVar1 == -2008888655)
			{
				return true;
			}
			break;
		case -333996550:
			if (iVar1 == -1641912903 || iVar1 == 392209426)
			{
				return true;
			}
			break;
		case 473747105:
			if (iVar1 == -1470197171 || iVar1 == -306833601)
			{
				return true;
			}
			break;
		case 1455274515:
			if (iVar1 == 218564594 || iVar1 == 406441491)
			{
				return true;
			}
			break;
		case -1598259337:
			if (iVar1 == 1202709885)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_974(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 866047851))
	{
		return true;
	}
	return false;
}

bool func_975(int iParam0)
{
	return __LIB_0__::func_356(iParam0) == joaat("HORSE_EQUIPMENT");
}

bool func_976(int iParam0)
{
	return __LIB_0__::func_357(iParam0) == 28496495;
}

void func_977(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, -1171257547, bParam1);
	if (!bParam1)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, 988907979, false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, 1417549877, false);
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 1184271882, 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 1453173492, 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, -804795275, 0);
	}
}

void func_978(var uParam0)
{
	bool bVar0;
	bVar0 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_52, "AltHorseStats");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "AltHorseStats", !bVar0);
}

char* func_979()
{
	return "uiPaletteOptionItemID";
}

char* func_980()
{
	return "locked";
}

bool func_981(int iParam0)
{
	return __LIB_0__::func_357(iParam0) == 1302066700;
}

bool func_982(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_52, "RecipeInfoVisible");
}

bool func_983(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_52, "SaddleStatsVisible");
}

bool func_984(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HORSE_BREED_ARDENNES_IRONGREYROAN"):
		case joaat("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return true;
	}
	return false;
}

int func_985(var uParam0)
{
	return uParam0->f_2031.f_94;
}

int func_986(int iParam0)
{
	switch (iParam0)
	{
		case -888790689:
			return 0;
		case -2126063412:
			return 1;
		case -368305354:
			return 2;
		case -1500843424:
			return 3;
		case 2034750397:
			return 4;
		case -1689805015:
			return 5;
		case 1855421528:
			return 6;
		case -1844483462:
			return 7;
		case -618101597:
			return 8;
		case -516195177:
			return 9;
		case 1193363351:
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_987(int iParam0)
{
	return ((Global_40.f_7731[0 /*5*/] == iParam0 && Global_40.f_7731[1 /*5*/] == iParam0) && Global_40.f_7731[2 /*5*/] == iParam0);
}

int func_988(int iParam0)
{
	switch (iParam0)
	{
		case -1968468235:
			return 1013009475;
		case -2092532275:
		case -2056428614:
		case -348190488:
		case 317179309:
		case 336033112:
		case 761079318:
		case 1942587409:
		case 2073652352:
		case 2077448405:
			return 1721919938;
		case -1502467280:
		case -1395073769:
		case -1352600334:
		case -1080155519:
		case -1048755899:
		case -853534656:
		case -772187037:
		case -584027224:
		case -384358143:
		case -349391286:
		case -239176093:
		case 420195545:
		case 777890122:
		case 1394581936:
		case 1702073444:
		case 2036169888:
			return 849534145;
		case 193788635:
			return 1027416037;
		case 1119253406:
		case 1837492866:
			return -314648538;
		case -395279071:
		case -339889117:
			return 1915518289;
		case -760956867:
		case -627085098:
		case 38807286:
			return 1755925661;
	}
	return 0;
}

void func_989()
{
	int iVar0;
	int iVar1;
	Global_1946804.f_1329 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1946804.f_1329.f_1[iVar0 /*9*/].f_8 = -1;
		iVar1 = 0;
		while (iVar1 < Global_1946804.f_1329.f_1[iVar0 /*9*/].f_7)
		{
			Global_1946804.f_1329.f_1[iVar0 /*9*/][iVar1] = 0;
			iVar1++;
		}
		Global_1946804.f_1329.f_1[iVar0 /*9*/].f_7 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_1329.f_48)
	{
		Global_1946804.f_1329.f_29[iVar0 /*6*/] = -358215195;
		iVar1 = 0;
		while (iVar1 < Global_1946804.f_1329.f_29[iVar0 /*6*/].f_5)
		{
			Global_1946804.f_1329.f_29[iVar0 /*6*/].f_1[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1946804.f_1329.f_48 = 0;
}

int func_990(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<5> Var4;
	iVar3 = iParam0;
	Var4 = uParam1;
	Var4.f_1 = -367421157;
	Var4.f_2 = 1409451727;
	Var4.f_4 = iParam0;
	Var4.f_3 = 1;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var4, -1093723189))
	{
		return -1;
	}
	Var4.f_1 = uVar0;
	Var4.f_2 = 0;
	Var4.f_4 = 0;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var4, -1863756360))
		{
		}
		else
		{
			bVar2 = true;
			Global_1946804.f_1329.f_29[Global_1946804.f_1329.f_48 /*6*/].f_1[iVar1] = uVar0;
			iVar1++;
		}
	}
	if (!bVar2)
	{
		return -1;
	}
	Global_1946804.f_1329.f_29[Global_1946804.f_1329.f_48 /*6*/] = iVar3;
	Global_1946804.f_1329.f_29[Global_1946804.f_1329.f_48 /*6*/].f_5 = iVar1;
	Global_1946804.f_1329.f_48++;
	return (Global_1946804.f_1329.f_48 - 1);
}

bool func_991(int iParam0)
{
	if (!__LIB_0__::func_30(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("CLOTHING_MULTI_ITEM_STACHE_NORMAL"):
		case joaat("CLOTHING_MULTI_ITEM_TRIM_ALL"):
		case joaat("CLOTHING_MULTI_ITEM_CHOPS_NORMAL"):
		case joaat("CLOTHING_MULTI_ITEM_TRIM_CHOPS"):
		case joaat("CLOTHING_MULTI_ITEM_TRIM_CHIN"):
		case joaat("CLOTHING_MULTI_ITEM_CLEAN"):
		case joaat("CLOTHING_MULTI_ITEM_CHIN_NORMAL"):
		case joaat("CLOTHING_MULTI_ITEM_SUPER_CLEAN"):
		case joaat("CLOTHING_MULTI_ITEM_TRIM_STACHE"):
			return false;
	}
	return true;
}

int func_992(var uParam0, bool bParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(__LIB_0__::func_162(bParam2), uParam0, bParam1);
}

void func_993(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<15> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0.f_14 = iParam0;
		Var0 = uParam1;
		Var0.f_12 = 4;
		Var0.f_5 = iParam2;
		Var0.f_4 = iParam3;
		Var0.f_8 = iParam5;
		Var0.f_11 = iParam6;
		Var0.f_13 = iParam4;
		MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
	}
}

int func_994(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			switch (iParam1)
			{
				case 105:
					return 390;
				case 5:
					return 750;
				case 78:
					return 1050;
				case 28:
					return 420;
				case 76:
					return 460;
				case 69:
					return 630;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 23:
					return 390;
				case 5:
					return 480;
				case 78:
					return 840;
				case 28:
					return 750;
				case 76:
					return 790;
				case 69:
					return 590;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 23:
					return 750;
				case 105:
					return 480;
				case 78:
					return 510;
				case 28:
					return 1250;
				case 76:
					return 1000;
				case 69:
					return 320;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 23:
					return 1050;
				case 105:
					return 840;
				case 5:
					return 510;
				case 28:
					return 880;
				case 76:
					return 670;
				case 69:
					return 440;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 23:
					return 420;
				case 105:
					return 750;
				case 5:
					return 1250;
				case 78:
					return 880;
				case 76:
					return 360;
				case 69:
					return 920;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 23:
					return 460;
				case 105:
					return 790;
				case 5:
					return 1000;
				case 78:
					return 670;
				case 28:
					return 360;
				case 69:
					return 220;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 23:
					return 630;
				case 105:
					return 590;
				case 5:
					return 320;
				case 78:
					return 440;
				case 28:
					return 920;
				case 76:
					return 220;
				default:
					break;
			}
			break;
	}
	return 0;
}

struct<8> func_995()
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16;
	int iVar24[10];
	int iVar35;
	int iVar36;
	StringCopy(&cVar0, "PLAYER_HORSE_NAME_DEFAULT", 64);
	iVar35 = 0;
	while (iVar35 < 10)
	{
		StringCopy(&cVar8, HUD::_GET_LABEL_TEXT_2(&cVar0), 64);
		if (iVar35 > 0)
		{
			StringConCat(&cVar8, " ", 64);
			StringIntConCat(&cVar8, iVar35 + 1, 64);
		}
		iVar36 = 0;
		while (iVar36 < 7)
		{
			Var16 = { Global_40.f_1095.f_1[iVar36 /*436*/] };
			if (MISC::ARE_STRINGS_EQUAL(&Var16, &cVar8))
			{
				iVar24[iVar35] = 1;
			}
			iVar36++;
		}
		iVar35++;
	}
	iVar35 = 0;
	while (iVar35 < 10)
	{
		if (!iVar24[iVar35])
		{
			StringCopy(&cVar8, HUD::_GET_LABEL_TEXT_2(&cVar0), 64);
			if (iVar35 > 0)
			{
				StringConCat(&cVar8, " ", 64);
				StringIntConCat(&cVar8, iVar35 + 1, 64);
			}
			return cVar8;
		}
		iVar35++;
	}
	return cVar0;
}

bool func_996(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = (uParam0[iVar1 /*4*/])->f_3;
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_997(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	return (PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("HORSE_SADDLES")) || PED::_IS_METAPED_USING_COMPONENT(iParam0, -1033766886));
}

int func_998(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	struct<2> Var22;
	struct<6> Var44;
	struct<6> Var51;
	int iVar58;
	int iVar59;
	int iVar60;
	if (!__LIB_0__::func_144(iParam0, 0) || !__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	Var0.f_1 = 20;
	Var22.f_1 = 20;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0) || !ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam1, &Var22))
	{
		return 0;
	}
	else if (Var0 <= 0 || Var22 <= 0)
	{
		return 0;
	}
	else
	{
		iVar58 = 0;
		iVar59 = 0;
		while (iVar59 < Var0)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar59], &Var44))
			{
				if (Var44.f_1 == iParam2)
				{
					iVar58 = 1;
				}
				else
				{
					iVar59++;
				}
				iVar60 = 0;
				iVar59 = 0;
				while (iVar59 < Var22)
				{
					if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var22.f_1[iVar59], &Var51))
					{
						if (Var51.f_1 == iParam2)
						{
							iVar60 = 1;
						}
						else
						{
							iVar59++;
						}
						if (iVar58 && iVar60)
						{
							if (Var51.f_5 < Var44.f_5)
							{
								return 1;
							}
							else if (Var51.f_5 == Var44.f_5)
							{
								return 0;
							}
							else if (Var51.f_5 > Var44.f_5)
							{
								return 2;
							}
						}
						return 0;
					}
				}
			}
		}
	}
}

Vector3 func_999(int iParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_552(iParam0, &vVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		vVar0.f_1 = joaat("INVENTORY_ITEMS");
		vVar0.x = joaat("_PLACEHOLDER");
	}
	return vVar0;
}
