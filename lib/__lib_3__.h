struct<4> func_0(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_1(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_2(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

void func_3(int iParam0)
{
	if (__LIB_2__::func_646(41))
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

void func_4(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	struct<10> Var0;
	struct<10> Var11;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var0, iParam8, iParam9, iParam10, iParam11, iParam13, fParam12);
	}
	else if (!__LIB_0__::func_138(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var11, iParam8, iParam9, iParam10, iParam11, iParam13, fParam12);
	}
	if (bParam15)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam14);
	}
}

void func_5(var uParam0)
{
	if (!uParam0->f_469[1])
	{
		__LIB_2__::func_881(*uParam0, 0);
		uParam0->f_469[1] = 1;
	}
	if (!uParam0->f_469[2])
	{
		__LIB_2__::func_890(*uParam0, uParam0->f_483, 0);
		uParam0->f_469[2] = 1;
	}
}

void func_6(var uParam0)
{
	if (!uParam0->f_469[3])
	{
		__LIB_2__::func_881(*uParam0, 0);
		uParam0->f_469[3] = 1;
	}
}

bool func_7(var uParam0)
{
	PED::_0xF7EA250B9A919E03(-1918659017, uParam0->f_20[1 /*14*/]);
	if (!PED::_0x854BC9B1A1CCD034(-1918659017, uParam0->f_20[1 /*14*/]))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
	{
		__LIB_2__::func_857(&(uParam0->f_20[0 /*14*/]), 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
	{
		__LIB_2__::func_857(&(uParam0->f_20[1 /*14*/]), 1, 1);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_20[1 /*14*/], 243, true);
	}
	return true;
}

bool func_8(var uParam0)
{
	PED::_0xF7EA250B9A919E03(-1918659017, uParam0->f_20[0 /*14*/]);
	PED::_0xF7EA250B9A919E03(-1918659017, uParam0->f_20[1 /*14*/]);
	if (!PED::_0x854BC9B1A1CCD034(-1918659017, uParam0->f_20[0 /*14*/]) || !PED::_0x854BC9B1A1CCD034(-1918659017, uParam0->f_20[1 /*14*/]))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
	{
		__LIB_2__::func_857(&(uParam0->f_20[0 /*14*/]), 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
	{
		__LIB_2__::func_857(&(uParam0->f_20[1 /*14*/]), 1, 1);
	}
	return true;
}

void func_9(var uParam0)
{
	if (!uParam0->f_469[8])
	{
		__LIB_2__::func_881(*uParam0, 0);
		uParam0->f_469[8] = 1;
	}
}

void func_10(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

int func_11(var uParam0)
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_13);
	__LIB_2__::func_887(&uLocal_19, 0);
	__LIB_1__::func_398(&uLocal_19, 1);
	__LIB_1__::func_401(&uLocal_19, 1);
	__LIB_2__::func_828(&uLocal_19, 1);
	__LIB_2__::func_829(&uLocal_19, 1);
	__LIB_1__::func_397(&uLocal_19, 1);
	__LIB_2__::func_830(&uLocal_19, 1);
	return 1;
}

void func_12(var uParam0)
{
	if (!uParam0->f_469[1])
	{
		__LIB_2__::func_881(*uParam0, 0);
		uParam0->f_469[1] = 1;
	}
	if (!uParam0->f_469[0])
	{
		__LIB_2__::func_890(*uParam0, uParam0->f_483, 0);
		uParam0->f_469[0] = 1;
	}
}

int func_13(var uParam0, var uParam1)
{
	int iVar0;
	__LIB_2__::func_858(uParam0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uLocal_12[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(uLocal_12[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

void func_14(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
		{
			__LIB_2__::func_857(&(uParam0->f_20[iVar0 /*14*/]), 0, 1);
		}
		iVar0++;
	}
}

int func_15(var uParam0)
{
	__LIB_2__::func_887(&uLocal_22, 0);
	__LIB_1__::func_398(&uLocal_22, 1);
	__LIB_1__::func_401(&uLocal_22, 1);
	__LIB_2__::func_828(&uLocal_22, 1);
	__LIB_2__::func_829(&uLocal_22, 1);
	__LIB_2__::func_830(&uLocal_22, 1);
	return 1;
}

void func_16(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_2377[__LIB_0__::func_161(iParam0, 1) /*2*/].f_1 = (Global_1946804.f_2377[__LIB_0__::func_161(iParam0, 1) /*2*/].f_1 || iParam1);
}

int func_17(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804.f_2657.f_19)
	{
		if (iParam0 == Global_1946804.f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_18()
{
	int iVar0;
	int iVar1;
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("WEAPON_UNARMED"))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !__LIB_0__::func_237(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && __LIB_0__::func_237(iVar0)) || iVar0 == joaat("WEAPON_LASSO"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_19(int* iParam0)
{
	struct<79> Var0;
	Var0.f_9 = -589165916;
	Var0.f_78.f_11 = 1;
	MISC::_COPY_MEMORY(iParam0, &Var0, 99);
}

void func_20(int iParam0, var uParam1)
{
	Global_1899528.f_61.f_4 = uParam1;
}

float func_21(var uParam0)
{
	return uParam0->f_255;
}

void func_22(var uParam0)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_264, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_282[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_264, &(uParam0->f_282[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_264, &(uParam0->f_282[iVar0 /*9*/]))))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_264, &(uParam0->f_282[iVar0 /*9*/]));
		}
		uParam0->f_282[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_23(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_264))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_264);
	}
}

float func_24(var uParam0)
{
	return uParam0->f_254;
}

struct<8> func_25(var uParam0)
{
	return uParam0->f_266;
}

bool func_26()
{
	return Global_1327590.f_19745;
}

void func_27(int* iParam0, float fParam1)
{
	if (!MISC::IS_BIT_SET(*iParam0, 14))
	{
		iParam0->f_26 = fParam1;
	}
}

void func_28(int* iParam0, bool bParam1)
{
	if (!MISC::IS_BIT_SET(*iParam0, 7))
	{
		if (bParam1)
		{
			CAM::_0xC64ABC0676AF262B();
		}
		else
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 3);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 4))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 4);
	}
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
}

void func_29(int* iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (bParam1)
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	else
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
	}
}

bool func_30(int iParam0, int iParam1)
{
	return Global_40.f_4942[iParam0 /*60*/].f_8 == iParam1;
}

bool func_31(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	while (*iParam2 < 10)
	{
		if (Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/] == iParam1)
		{
			return true;
		}
		*iParam2++;
	}
	*iParam2 = -1;
	return false;
}

void func_32(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_2 = 0;
}

bool func_33(int iParam0, int iParam1)
{
	if ((!__LIB_0__::func_49(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1);
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	if ((!__LIB_0__::func_49(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return;
	}
	if (bParam2)
	{
		if (!MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1))
		{
			MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_1155), iParam1);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1))
	{
		MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_1155), iParam1);
	}
}

bool func_35(var uParam0, int iParam1)
{
	return (*uParam0 && BUILTIN::SHIFT_LEFT(1, iParam1)) != 0;
}

Vector3 func_36(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1854.121f, -1833.442f, 42.23f;
				case 1:
					return 1853.181f, -1835.967f, 42.08f;
				case 2:
					return 1849.417f, -1837.232f, 43.1456f;
				case 3:
					return 1852.237f, -1834.174f, 43.2114f;
				case 4:
					return 1851.667f, -1834.536f, 43.22f;
				case 5:
					return 1850.665f, -1838.582f, 43.2875f;
				case 6:
					return 1853.13f, -1835.622f, 43.0861f;
				case 7:
					return 1851.652f, -1836.283f, 43.1655f;
				case 8:
					return 1872.729f, -1871.582f, 38.803f;
				case 9:
					return 1872.613f, -1870.361f, 42.0604f;
				case 10:
					return 1872.729f, -1871.582f, 41.8031f;
				case 11:
					return 1872.715f, -1871.616f, 42.361f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1850.665f, -1838.582f, 43.2875f;
				case 1:
					return 1850.665f, -1838.582f, 43.2875f;
				case 2:
					return 1819.868f, -1812.098f, 47.9294f;
				case 3:
					return 1819.868f, -1812.098f, 47.9294f;
				case 4:
					return 1827.635f, -1808.716f, 46.8184f;
				case 5:
					return 1827.635f, -1808.716f, 46.8184f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1228.311f, -1389.083f, 75.347f;
				case 1:
					return 1228.311f, -1389.083f, 75.347f;
				case 2:
					return 1227.607f, -1386.947f, 75.3254f;
				case 3:
					return 1227.607f, -1386.947f, 75.3254f;
				case 4:
					return 1225.056f, -1388.16f, 75.2839f;
				case 5:
					return 1225.056f, -1388.16f, 75.2839f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1282.97f, -1329.29f, 76.5069f;
				case 1:
					return 1228.311f, -1389.083f, 75.347f;
				case 2:
					return 1284.826f, -1333.042f, 77.6169f;
				case 3:
					return 1227.607f, -1386.947f, 75.3254f;
				case 4:
					return 1285.517f, -1333.449f, 77.6379f;
				case 5:
					return 1225.056f, -1388.16f, 75.2839f;
				case 6:
					return 1288.604f, -1317.472f, 75.6878f;
				case 7:
					return 1288.936f, -1315.848f, 78.5622f;
				case 8:
					return 1295.14f, -1325.34f, 76.2762f;
				case 9:
					return 1288.684f, -1316.235f, 77.231f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1285.212f, -1311.949f, 77.3398f;
				case 1:
					return 1228.311f, -1389.083f, 75.347f;
				case 2:
					return 1287.708f, -1313.133f, 77.0928f;
				case 3:
					return 1227.607f, -1386.947f, 75.3254f;
				case 4:
					return 1299.267f, -1316.643f, 75.5287f;
				case 5:
					return 1225.056f, -1388.16f, 75.2839f;
				case 6:
					return 1288.199f, -1312.921f, 76.8528f;
				case 7:
					return 1288.968f, -1314.061f, 76.1452f;
				case 8:
					return 1288.278f, -1314.884f, 76.1452f;
				case 9:
					return 1287.592f, -1315.702f, 76.1452f;
				case 10:
					return 1285.959f, -1315.588f, 76.8529f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1286.958f, -1321.473f, 76.1364f;
				case 1:
					return 1279.188f, -1331.192f, 76.3773f;
				case 2:
					return 1283.119f, -1325.791f, 76.5221f;
				case 3:
					return 1224.693f, -1356.646f, 70.347f;
				case 4:
					return 1221.632f, -1360.558f, 69.5754f;
				case 5:
					return 1220.293f, -1356.839f, 70.0339f;
				case 6:
					return 1665.751f, -1744.769f, 54.9967f;
				case 7:
					return 1658.241f, -1749.014f, 53.3317f;
				case 8:
					return 1659.451f, -1751.873f, 53.2434f;
				case 9:
					return 1328.839f, -1308.861f, 76.1814f;
				case 10:
					return 1333.077f, -1308.992f, 75.9314f;
				case 11:
					return 1340.116f, -1315.991f, 76.2719f;
				case 12:
					return 1344.93f, -1313.637f, 76.0442f;
				case 13:
					return 1348.91f, -1313.535f, 75.7942f;
				case 14:
					return 1313.987f, -1303.52f, 75.4751f;
				case 15:
					return 1315.845f, -1304.718f, 75.4751f;
				case 16:
					return 1317.008f, -1302.785f, 75.4751f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1819.868f, -1812.098f, 47.9294f;
				case 1:
					return 1827.635f, -1808.716f, 46.8184f;
				case 2:
					return 1227.607f, -1386.947f, 75.3254f;
				case 3:
					return 1225.056f, -1388.16f, 75.2839f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1284.73f, -1333.08f, 75f;
				case 1:
					return 1295.466f, -1326.976f, 75f;
				case 2:
					return 1286.965f, -1316.782f, 76.5f;
				case 3:
					return 1288.818f, -1314.281f, 76.045f;
				case 4:
					return 1288.095f, -1315.166f, 76.045f;
				case 5:
					return 1287.458f, -1314.777f, 77.0447f;
				case 6:
					return 1287.383f, -1315.913f, 76.025f;
				case 7:
					return 1286.682f, -1315.459f, 77.0446f;
				case 8:
					return 1286.218f, -1315.834f, 76.045f;
				case 9:
					return 1286.612f, -1315.148f, 76.9718f;
				case 10:
					return 1226.423f, -1388.662f, 71.5841f;
				case 11:
					return 1286.965f, -1316.782f, 76.5f;
				case 12:
					return 1659f, -1743.935f, 53.04f;
				case 13:
					return 1295.363f, -1325.833f, 76.165f;
				case 14:
					return 1295.036f, -1324.743f, 76.165f;
				case 15:
					return 1295.768f, -1325.178f, 76.165f;
				case 16:
					return 1288.362f, -1316.985f, 75.581f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 1850.64f, -1831.084f, 43.7936f;
				case 1:
					return 1856.537f, -1827.593f, 43.7769f;
				case 2:
					return 1864.604f, -1859.801f, 42.1066f;
				case 3:
					return 1866.967f, -1849.354f, 42f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 1278.16f, -1312.19f, 75.9417f;
				case 1:
					return 1302.444f, -1306.99f, 75.6625f;
				case 2:
					return 1275.817f, -1304.436f, 75.3857f;
				case 3:
					return 1269.311f, -1309.146f, 75.429f;
				case 4:
					return 1285.293f, -1321.281f, 76.0873f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 1231.319f, -1272.271f, 74.947f;
				case 1:
					return 1242.892f, -1255.462f, 73.512f;
				case 2:
					return 1275.844f, -1273.989f, 74.1435f;
				case 3:
					return 1257.124f, -1296.946f, 75.2074f;
				case 4:
					return 1250.768f, -1281.653f, 75.2718f;
				case 5:
					return 1231.939f, -1273.814f, 74.947f;
				case 6:
					return 1244.74f, -1253.985f, 73.512f;
				case 7:
					return 1275.119f, -1275.456f, 74.1435f;
				case 8:
					return 1255.746f, -1297.952f, 75.2074f;
				case 9:
					return 1252.059f, -1281.341f, 75.2718f;
				case 10:
					return 1294.071f, -1293.788f, 76.2873f;
				case 11:
					return 1311.503f, -1276.038f, 75.6115f;
				case 12:
					return 1321.668f, -1294.244f, 76.2537f;
				case 13:
					return 1300.012f, -1298.963f, 76.2873f;
				case 14:
					return 1341.856f, -1267.556f, 76.8004f;
				case 15:
					return 1353.167f, -1271.844f, 77.0164f;
				case 16:
					return 1381.175f, -1294.115f, 76.2502f;
				case 17:
					return 1363.415f, -1309.869f, 76.2937f;
				case 18:
					return 1332.951f, -1296.247f, 79.4686f;
				case 19:
					return 1382.594f, -1319.632f, 76.5855f;
				case 20:
					return 1398.04f, -1332.995f, 76.925f;
				case 21:
					return 1411.925f, -1308.848f, 76.9018f;
				case 22:
					return 1397.915f, -1296.422f, 76.8687f;
				case 23:
					return 1356.897f, -1307.054f, 76.9818f;
				case 24:
					return 1360.498f, -1308.146f, 76.9818f;
				case 25:
					return 1358.22f, -1323.62f, 76.6151f;
				case 26:
					return 1360.15f, -1368.508f, 78.3813f;
				case 27:
					return 1360.621f, -1389.984f, 78.8609f;
				case 28:
					return 1333.506f, -1382.241f, 79.529f;
				case 29:
					return 1343.535f, -1350.851f, 77.4349f;
				case 30:
					return 1359.91f, -1324.911f, 76.6151f;
				case 31:
					return 1359.673f, -1367.094f, 78.3813f;
				case 32:
					return 1358.782f, -1391.058f, 78.8609f;
				case 33:
					return 1335.014f, -1382.442f, 79.529f;
				case 34:
					return 1345.711f, -1351.49f, 77.4349f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 13:
		case 14:
			if (iParam1 == 7 || iParam1 == 8)
			{
				return -1205468859;
			}
			return -445211559;
		case 0:
		case 1:
		case 2:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
		case 16:
		case 17:
		case 19:
		case 20:
		case 21:
		case 22:
			return -445211559;
		case 3:
		case 4:
		case 18:
			return 1744281750;
		case 11:
			return -946772361;
		default:
			break;
	}
	return 0;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CC_COLTER");
		case 1:
			return joaat("CC_HORSESHOE_OVERLOOK");
		case 2:
			return joaat("CC_CLEMENS_POINT");
		case 3:
			return joaat("CC_SHADY_BELLE");
		case 4:
			return joaat("CC_GUARMA");
		case 5:
			return joaat("CC_LAKAY");
		case 6:
			return joaat("CC_BEAVER_HOLLOW");
		case 7:
			return joaat("CC_PRONGHORN_RANCH");
		case 8:
			return joaat("CC_BEECHERS_HOPE");
		default:
			break;
	}
	return 991030100;
}

bool func_39(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	var uVar0;
	vParam0.f_2 = iParam5;
	uVar0 = *uParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*uParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_40(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_41(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_42(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_43(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_266), sParam1, 64);
}

var func_44(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, fParam4, fParam5, fParam6, iParam7);
}

void func_45(var uParam0, int iParam1)
{
	uParam0->f_259 = (uParam0->f_259 || iParam1);
}

int func_46(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_264, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_264) * 1000f));
}

bool func_47(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_48(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 20)
	{
		if (uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

void func_49(int* iParam0, int iParam1, int iParam2)
{
	if (MAP::DOES_BLIP_EXIST(iParam1))
	{
		iParam0->f_56 = iParam1;
		if (!MISC::IS_BIT_SET(iParam0->f_21, 16))
		{
			MISC::SET_BIT(&(iParam0->f_21), 16);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 16);
	}
	if (iParam2 != 0)
	{
		iParam0->f_55 = iParam2;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 18);
	}
}

void func_50(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (iVar0 == iParam1)
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 12))
			{
				MISC::SET_BIT(uParam0[iVar0 /*17*/], 12);
			}
		}
		else if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 12))
		{
			MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 12);
		}
		iVar0++;
	}
}

void func_51(int* iParam0, int iParam1)
{
	__LIB_0__::func_37(&(iParam0->f_22));
	iParam0->f_25 = iParam1;
}

void func_52(int* iParam0, float fParam1)
{
	if (!MISC::IS_BIT_SET(*iParam0, 14))
	{
		iParam0->f_26 = fParam1;
		MISC::SET_BIT(iParam0, 14);
	}
}

Vector3 func_53(var uParam0)
{
	switch (uParam0->f_9)
	{
		case joaat("HAI_FISHING_01"):
			return 3.5f, 3.5f, 3f;
		case joaat("HAI_RUSTLING_02"):
			return 4.5f, 4.5f, 3f;
	}
	return 3f, 3f, 3f;
}

bool func_54(var uParam0)
{
	int iVar0;
	if (Global_1359489.f_672)
	{
		return true;
	}
	iVar0 = 1;
	if (__LIB_0__::func_210(*uParam0) < 100f)
	{
		iVar0 = 0;
	}
	if (BUILTIN::VDIST2(Global_36, TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_33, true)) < 100f)
	{
		iVar0 = 0;
	}
	if (__LIB_1__::func_472(uParam0->f_1, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || CAM::IS_SPHERE_VISIBLE(TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_33, true), 3f))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_55(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HAI_BANK_ROBBERY_01"):
			return true;
		default:
			break;
	}
	return false;
}

struct<4> func_56(var uParam0)
{
	return uParam0->f_260;
}

struct<8> func_57(var uParam0)
{
	return uParam0->f_274;
}

void func_58(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1, iParam2, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1, iParam2, 0, -1, -1, 2);
}

void func_59(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam0);
	POPULATION::_0x74C2B3DC0B294102(iParam0);
}

int func_60(int iParam0)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_1154;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("HASH_COMPANION_DUTCH");
		case 1:
			return joaat("HASH_COMPANION_JOHN");
		case 2:
			return joaat("HASH_COMPANION_JAVIER");
		case 3:
			return joaat("HASH_COMPANION_BILL");
		case 4:
			return joaat("HASH_COMPANION_UNCLE");
		case 5:
			return joaat("HASH_COMPANION_HOSEA");
		case 6:
			return joaat("HASH_COMPANION_MICAH");
		case 7:
			return joaat("HASH_COMPANION_CHARLES");
		case 8:
			return joaat("HASH_COMPANION_SEAN");
		case 9:
			return joaat("HASH_COMPANION_LENNY");
		case 10:
			return joaat("HASH_COMPANION_ODRISCOLL");
		case 11:
			return joaat("HASH_COMPANION_SADIE_ADLER");
		case 13:
			return joaat("HASH_COMPANION_ABIGAIL");
		case 14:
			return joaat("HASH_COMPANION_JACK");
		case 15:
			return joaat("HASH_COMPANION_MARY_BETH");
		case 16:
			return joaat("HASH_COMPANION_MOLLY_OSHEA");
		case 17:
			return joaat("HASH_COMPANION_PEARSON");
		case 18:
			return joaat("HASH_COMPANION_STRAUSS");
		case 19:
			return joaat("HASH_COMPANION_SUSAN_GRIMSHAW");
		case 20:
			return joaat("HASH_COMPANION_KAREN");
		case 21:
			return joaat("HASH_COMPANION_SWANSON");
		case 22:
			return joaat("HASH_COMPANION_TILLY");
		case 23:
			return joaat("HASH_COMPANION_TRELAWNY");
		case 24:
			return joaat("HASH_COMPANION_CLEET");
		case 25:
			return joaat("HASH_COMPANION_JOE");
		case 26:
			return 1271180667;
		case 12:
			return joaat("HASH_COMPANION_DOG");
	}
	return -1;
}

void func_62(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_264, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_264, sParam1, iParam2, iParam3);
}

bool func_63()
{
	return (Global_1935689.f_1 || Global_1935689 == 1);
}

bool func_64()
{
	return Global_1935689.f_1;
}

void func_65(int iParam0)
{
	Global_1935496.f_29 = (Global_1935496.f_29 || iParam0);
}

int func_66(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_17(iParam0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		return 0;
	}
	return Global_1945938[iVar0 /*18*/].f_3;
}

int func_67(int iParam0)
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
	}
	return 0;
}

float func_68(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 26.03f;
				case 1:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				case 4:
					return 0f;
				case 5:
					return 57.82f;
				case 6:
					return 38.03f;
				case 7:
					return 4.73f;
				case 8:
					return 0f;
				case 9:
					return 183.9948f;
				case 10:
					return -176.32f;
				case 11:
					return 0f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 57.82f;
				case 1:
					return 57.82f;
				case 2:
					return -113.1942f;
				case 3:
					return -113.1942f;
				case 4:
					return -154.1319f;
				case 5:
					return -154.1319f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -37.92f;
				case 1:
					return -37.92f;
				case 2:
					return -53.35f;
				case 3:
					return -53.35f;
				case 4:
					return -38.15f;
				case 5:
					return -38.15f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -14.9588f;
				case 1:
					return -37.92f;
				case 2:
					return -9.37f;
				case 3:
					return -53.35f;
				case 4:
					return -14.32f;
				case 5:
					return -38.15f;
				case 6:
					return 18.73f;
				case 7:
					return 0f;
				case 8:
					return 15.07f;
				case 9:
					return -2.17f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 221.1245f;
				case 1:
					return -37.92f;
				case 2:
					return -150.45f;
				case 3:
					return -53.35f;
				case 4:
					return 332.5082f;
				case 5:
					return -38.15f;
				case 6:
					return -39.83f;
				case 7:
					return -130.14f;
				case 8:
					return -130.14f;
				case 9:
					return -130.14f;
				case 10:
					return 140.1f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 137.23f;
				case 1:
					return -45.33f;
				case 2:
					return 136.49f;
				case 3:
					return -57.92f;
				case 4:
					return -47.35f;
				case 5:
					return -58.15f;
				case 6:
					return -47.15f;
				case 7:
					return -53.85f;
				case 8:
					return -54.45f;
				case 9:
					return 106.5359f;
				case 10:
					return 98.4891f;
				case 11:
					return 156.4891f;
				case 12:
					return 122.4891f;
				case 13:
					return 94.4891f;
				case 14:
					return 88.4891f;
				case 15:
					return 80.4891f;
				case 16:
					return 94.4891f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -113.1942f;
				case 1:
					return -154.1319f;
				case 2:
					return -53.35f;
				case 3:
					return -38.15f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				case 2:
					return -40f;
				case 3:
					return -132f;
				case 4:
					return -120f;
				case 5:
					return -144.16f;
				case 6:
					return -130.14f;
				case 7:
					return -149.06f;
				case 8:
					return 150f;
				case 9:
					return 124.28f;
				case 10:
					return 0f;
				case 11:
					return -40f;
				case 12:
					return 126.4f;
				case 13:
					return 15.14f;
				case 14:
					return -162.26f;
				case 15:
					return 74.53f;
				case 16:
					return 130.79f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 209.2047f;
				case 1:
					return 257.0394f;
				case 2:
					return 306.7165f;
				case 3:
					return 133.1102f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 139.3678f;
				case 1:
					return 309.1488f;
				case 2:
					return 19.9618f;
				case 3:
					return 96.9134f;
				case 4:
					return -154.9532f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 476.339f;
				case 1:
					return 386.339f;
				case 2:
					return 244.339f;
				case 3:
					return 214.339f;
				case 4:
					return 366.339f;
				case 5:
					return 462.339f;
				case 6:
					return 398.339f;
				case 7:
					return 254.339f;
				case 8:
					return 222.339f;
				case 9:
					return 382.339f;
				case 10:
					return 318.339f;
				case 11:
					return 272.339f;
				case 12:
					return 170.339f;
				case 13:
					return 270.339f;
				case 14:
					return 426.339f;
				case 15:
					return 336.339f;
				case 16:
					return 252.339f;
				case 17:
					return 154.339f;
				case 18:
					return 514.339f;
				case 19:
					return 482.339f;
				case 20:
					return 520.339f;
				case 21:
					return 284.339f;
				case 22:
					return 384.339f;
				case 23:
					return 510.339f;
				case 24:
					return 204.339f;
				case 25:
					return 374.339f;
				case 26:
					return 228.339f;
				case 27:
					return 240.339f;
				case 28:
					return 170.339f;
				case 29:
					return 358.339f;
				case 30:
					return 284.339f;
				case 31:
					return 324.339f;
				case 32:
					return 162.339f;
				case 33:
					return 170.339f;
				case 34:
					return 300.339f;
			}
			break;
	}
	return 0f;
}

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_70(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_13[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

int func_71(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_72(var uParam0, int iParam1)
{
	return (uParam0->f_259 && iParam1) != 0;
}

int func_73(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_264, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_264) * 1000f));
}

bool func_74(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1) && __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_75(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264))
	{
		return true;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_264, 0))
	{
		if (__LIB_0__::func_84(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_264) && __LIB_0__::func_84(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_76(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_1154 = bParam1;
}

bool func_77(int iParam0)
{
	return Global_1899515 > iParam0;
}

void func_78(var uParam0, char[16] cParam1)
{
	uParam0->f_260 = { cParam1 };
}

Vector3 func_79(var uParam0)
{
	return uParam0->f_322;
}

void func_80(var uParam0, vector3 vParam1)
{
	uParam0->f_322 = { vParam1 };
}

void func_81(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		uParam0->f_13[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_82(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		__LIB_0__::func_159(&(uParam0->f_13[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

Vector3 func_83(var uParam0)
{
	return uParam0->f_325;
}

float func_84(var uParam0)
{
	return uParam0->f_328;
}

void func_85(var uParam0)
{
	struct<8> Var0;
	uParam0->f_274 = { Var0 };
}

void func_86(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_282[iVar0 /*9*/]), "", 64);
		iVar0++;
	}
}

bool func_87(int iParam0, int iParam1)
{
	*iParam1 = 0;
	while (*iParam1 < 15)
	{
		if (Global_40.f_4237[*iParam1 /*3*/] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	*iParam1 = -1;
	return false;
}

bool func_88(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1347701, iParam0);
}

void func_89(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1347701, iParam0))
		{
			MISC::SET_BIT(&Global_1347701, iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1347701, iParam0))
	{
		MISC::CLEAR_BIT(&Global_1347701, iParam0);
	}
}

void func_90(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_140 = (Global_1360165[iParam0 /*1157*/].f_140 - (Global_1360165[iParam0 /*1157*/].f_140 && iParam1));
	Global_1360165[iParam0 /*1157*/].f_141 = (Global_1360165[iParam0 /*1157*/].f_141 - (Global_1360165[iParam0 /*1157*/].f_141 && iParam1));
}

int func_91(var uParam0)
{
	if (Global_1391438.f_1)
	{
		return 1;
	}
	if (__LIB_0__::func_287(*uParam0, 29, 1))
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		if (!__LIB_0__::func_163(PLAYER::PLAYER_PED_ID(), 501393341))
		{
			TASK::TASK_DISMOUNT_ANIMAL(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0);
		}
		return false;
	}
	return true;
}

bool func_93(int iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_699(iParam0))
	{
		return false;
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(iParam1, bParam2))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == iParam1;
}

void func_94(var uParam0, char* sParam1)
{
	int iVar0;
	if (__LIB_0__::func_84(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_260), {__LIB_0__::func_98("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_260), {__LIB_0__::func_98("cutscene@", sParam1, 1, 63)}, 4);
	}
	__LIB_0__::func_88(uParam0, 8192);
}

int func_95(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!__LIB_0__::func_272(iParam1, 0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(iParam2) && MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MAP::_0x97F6F158CC5B5CA2(iParam1, iParam2);
		MISC::SET_BIT(&(iParam0->f_21), 17);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 18) && iParam3 != 0)
	{
		if (!MAP::_0x3CB8859F04763C78(iParam1, iParam2))
		{
			MAP::_0xBB68D4D3CA3DE402(iParam1, iParam3);
		}
		MISC::SET_BIT(&(iParam0->f_21), 18);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17) && MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		return 1;
	}
	return 0;
}

void func_96(int* iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_272(iParam1, 0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam1);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(iParam0->f_56))
		{
			iVar0 = iParam0->f_56;
		}
		else
		{
			return;
		}
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 16);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 18);
	}
	if (MAP::_0x3CB8859F04763C78(iParam1, iVar0))
	{
		MAP::_0x44813684F72B563C(iParam1, iVar0);
	}
	if (iParam0->f_55 != 0)
	{
		iParam0->f_55 = 0;
	}
}

void func_97(int* iParam0)
{
	__LIB_0__::func_172(iParam0->f_36);
}

void func_98(int iParam0)
{
	CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iParam0), __LIB_0__::func_42(iParam0), __LIB_0__::func_43(iParam0));
	CLOCK::SET_CLOCK_DATE(__LIB_0__::func_40(iParam0), __LIB_0__::func_39(iParam0), __LIB_0__::func_710(iParam0));
}

void func_99(var uParam0)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_264, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_264, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

char* func_100(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return __LIB_0__::func_67(uParam0->f_13[iVar0 /*12*/].f_1);
		}
		iVar0++;
	}
	return "";
}

int func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_509(*iParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

void func_102(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_1__::func_471(uParam0[iVar0 /*17*/], 9);
		iVar0++;
	}
}

int func_103(var uParam0, float fParam1)
{
	if (__LIB_1__::func_285(uParam0, fParam1))
	{
		__LIB_0__::func_37(uParam0);
		return 1;
	}
	return 0;
}

bool func_104()
{
	if (Global_1946804.f_2793)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804.f_2791)) < 1250)
	{
		return true;
	}
	if (__LIB_1__::func_529())
	{
		return true;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return true;
	}
	return false;
}

int func_105(int iParam0)
{
	var uVar0;
	return __LIB_3__::func_17(iParam0, &uVar0);
}

int func_106(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { __LIB_0__::func_523(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		__LIB_0__::func_524(&Var0, __LIB_1__::func_117(0));
	}
	if (!__LIB_2__::func_894(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	__LIB_0__::func_238(iVar14);
	return uVar15;
}

bool func_107()
{
	return __LIB_1__::func_533(512);
}

bool func_108(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_296(36866, 0, 1))
	{
		return false;
	}
	if (__LIB_0__::func_750(&(uParam0->f_31), 8))
	{
		iVar0 = 0;
		while (iVar0 < 27)
		{
			if (__LIB_0__::func_51(&(uParam0->f_3), __LIB_0__::func_771(iVar0)))
			{
				if (!__LIB_0__::func_892(iVar0) && !__LIB_1__::func_22(iVar0))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_109(int* iParam0)
{
	bool bVar0;
	if (MISC::IS_BIT_SET(*iParam0, 13))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM_IN_AIR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 6))
	{
		if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 6);
			MISC::CLEAR_BIT(&(iParam0->f_21), 7);
		}
		else
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		if (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
		{
			__LIB_0__::func_37(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 7);
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
		else if (((__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))) && !__LIB_0__::func_163(Global_35, 716706914)) && !__LIB_0__::func_163(Global_35, 242628503))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::_0x2208438012482A1A(Global_35, false, false);
			__LIB_1__::func_283(&(iParam0->f_52), 0);
			MISC::SET_BIT(&(iParam0->f_21), 7);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		bVar0 = __LIB_0__::func_264(&(iParam0->f_52)) >= 1.5f;
		if ((!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))) || bVar0)
		{
			__LIB_0__::func_37(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
	}
	return false;
}

void func_110(int* iParam0)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		MISC::CLEAR_BIT(&(iParam0->f_21), 5);
	}
	__LIB_1__::func_539();
}

bool func_111(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (__LIB_1__::func_482(iVar1, &uParam1))
		{
		}
		else if (__LIB_0__::func_903(iVar1))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(__LIB_0__::func_271(iVar1), *uParam0, true, 0))
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_112(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return __LIB_2__::func_431(iParam0, vVar0, iParam2);
}

int func_113(int* iParam0)
{
	bool bVar0;
	if (MISC::IS_BIT_SET(*iParam0, 10))
	{
		return 1;
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	if (MISC::IS_BIT_SET(iParam0->f_21, 12))
	{
		if (Global_1357517)
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 12);
			MISC::CLEAR_BIT(&(iParam0->f_21), 13);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 13))
	{
		if (Global_1357517)
		{
			Global_1357516 = 0;
		}
		__LIB_1__::func_283(&(iParam0->f_40), 0);
		MISC::SET_BIT(&(iParam0->f_21), 13);
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 13))
	{
		bVar0 = __LIB_0__::func_264(&(iParam0->f_40)) >= 1.5f;
		if (!Global_1357517 || bVar0)
		{
			__LIB_0__::func_37(&(iParam0->f_40));
			MISC::SET_BIT(&(iParam0->f_21), 12);
			return 1;
		}
	}
	return 0;
}

Vector3 func_114(int iParam0, int iParam1, float fParam2)
{
	return __LIB_1__::func_868(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false), fParam2);
}

int func_115()
{
	int iVar0;
	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_116()
{
	int iVar0;
	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_117()
{
	int iVar0;
	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_118()
{
	int iVar0;
	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (__LIB_3__::func_18())
	{
		case 0:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_119(int iParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if ((!bParam5 && !Global_1359489.f_12) || (bParam5 && Global_1359489.f_13 < 8))
	{
		if (Global_1360165[iParam0 /*1157*/].f_125 <= 300)
		{
			if (PERSCHAR::_0xEB98B38CA60742D7(Global_1360165[iParam0 /*1157*/].f_126))
			{
				PERSCHAR::_0x49A8C2CD97815215(Global_1360165[iParam0 /*1157*/].f_126);
			}
			if (bParam5)
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[iParam0 /*1157*/].f_126, 0);
				Global_1359489.f_13++;
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x0CADC3A977997472(Global_1360165[iParam0 /*1157*/].f_126, 0);
			}
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_126);
			Global_1360165[iParam0 /*1157*/].f_125++;
		}
		else
		{
			iVar0 = PERSCHAR::_0xA00DF706C60173D1(__LIB_0__::func_725(iParam0, 1));
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Global_1360165[iParam0 /*1157*/].f_124 = __LIB_1__::func_545(iVar0, vParam1, iParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				PERSCHAR::_0x7B204F88F6C3D287(Global_1360165[iParam0 /*1157*/].f_126);
			}
		}
		if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			return false;
		}
		Global_1359489.f_12 = 1;
		__LIB_0__::func_213(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

void func_120()
{
	if (__LIB_0__::func_139(Global_43801))
	{
		__LIB_1__::func_748(&Global_43801, 0, 0);
	}
}

int func_121(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (__LIB_1__::func_531(iParam0, iParam1, 0))
		{
			return 0;
		}
	}
	if (iParam3 == -1)
	{
		Global_1360165[iParam0 /*1157*/].f_140 = (Global_1360165[iParam0 /*1157*/].f_140 || iParam1);
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_141 = (Global_1360165[iParam0 /*1157*/].f_141 || iParam1);
		Global_1360165[iParam0 /*1157*/].f_142 = Global_1899515;
		__LIB_1__::func_446(&(Global_1360165[iParam0 /*1157*/].f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
}

int func_122(int iParam0)
{
	struct<5> Var0;
	Var0 = { __LIB_2__::func_3(iParam0, 1, 0) };
	return __LIB_0__::func_709(Var0.f_4);
}

void func_123(int iParam0, int iParam1)
{
	__LIB_1__::func_948(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_124(int iParam0, int iParam1)
{
	__LIB_1__::func_948(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_125(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

void func_126()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				__LIB_2__::func_823(iVar0);
				break;
			case -456923784:
				__LIB_2__::func_823(iVar0);
				break;
			case -843555838:
				__LIB_2__::func_823(iVar0);
				break;
		}
		iVar0++;
	}
}

bool func_127(int iParam0)
{
	int iVar0;
	iVar0 = 6;
	if (__LIB_0__::func_30(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

bool func_128(int iParam0, var uParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
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
	return PED::_0xA0BC8FAED8CFEB3C(iParam0);
}

void func_129(var uParam0)
{
	int iVar0;
	Global_1946804.f_1497 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = { uParam0->f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_131(int iParam0)
{
	float fVar0;
	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

bool func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return true;
		default:
			break;
	}
	return false;
}

int func_135(var uParam0)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_33(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (__LIB_0__::func_485() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_136(int iParam0, int iParam1)
{
	int iVar0;
	__LIB_0__::func_68(iParam0, 0, 0);
	if (__LIB_0__::func_724(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_137(var uParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	__LIB_0__::func_726(Var0);
}

bool func_138(int iParam0, int iParam1)
{
	return PED::_IS_PED_USING_SCENARIO_HASH(iParam0, iParam1);
}

void func_139(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

int func_140(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/];
}

int func_141(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_142(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			Global_36581[iVar0 /*2*/].f_1 = 3;
		}
		iVar0++;
	}
}

bool func_143(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_144(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return Global_36581[Global_36602 /*2*/].f_1;
		}
		iVar0++;
	}
	return 3;
}

bool func_145()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_146(int iParam0)
{
	switch (iParam0)
	{
		case joaat("OVERCAST"):
		case joaat("HIGHPRESSURE"):
		case joaat("OVERCASTDARK"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
			return true;
		default:
			break;
	}
	return false;
}

int func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_148(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = Global_1326862.f_512[iParam1];
	iVar1 = Global_1326862.f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == Global_1326862.f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_149(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

void func_150(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (__LIB_0__::func_154(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

bool func_151(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return __LIB_0__::func_21(iParam0, 67108864);
}

void func_152(int iParam0)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_46 = 1;
}

Vector3 func_153(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!__LIB_0__::func_35(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (__LIB_2__::func_786(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (__LIB_2__::func_789(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

int func_154(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		__LIB_1__::func_148(&uLocal_0);
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

void func_155(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_271(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(__LIB_0__::func_271(iVar0), __LIB_0__::func_110(), 1))
			{
				__LIB_0__::func_111(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_156(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = __LIB_2__::func_511(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			__LIB_2__::func_478(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

void func_157(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				__LIB_1__::func_483(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				__LIB_1__::func_484(iParam0->f_6, iParam0->f_5, 0);
			}
			__LIB_1__::func_221(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		__LIB_2__::func_360(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_158(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_489(iParam0, 4))
		{
			__LIB_1__::func_748(&(iParam0->f_6), 1, 1);
			__LIB_1__::func_471(iParam0, 4);
		}
	}
	else if (__LIB_1__::func_489(iParam0, 4))
	{
		__LIB_1__::func_491(iParam0, 4);
		__LIB_1__::func_471(iParam0, 14);
	}
}

int func_159(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		__LIB_2__::func_690(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_160(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		__LIB_2__::func_690(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_161(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			__LIB_2__::func_690(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

float func_162(vector3 vParam0)
{
	vector3 vVar0;
	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

void func_163(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS((*uParam1)[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_164(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*9*/])->f_7 = 0f;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

char* func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_166(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_167(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 11:
			return 3;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			return 0;
		case 3:
		case 10:
			return 2;
		case 4:
		case 9:
			return 1;
		case 8:
			return 4;
		case 13:
		case 14:
		case 15:
		case 16:
			return 5;
		default:
			break;
	}
	return -1;
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_170(var uParam0)
{
	int iVar0;
	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_171(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return true;
	}
	return false;
}

int func_172(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_173(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return true;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return true;
			}
			break;
	}
	return false;
}

void func_174(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_175(var uParam0)
{
	return __LIB_0__::func_27(*uParam0, 256);
}

void func_176(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_177(var uParam0)
{
	return __LIB_0__::func_27(*uParam0, 512);
}

bool func_178(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam1[iVar0 /*9*/])->f_6))
		{
			(uParam1[iVar0 /*9*/])->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_179(var uParam0)
{
	return uParam0->f_51;
}

void func_180(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

int func_181(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

bool func_182(var uParam0, float fParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (uParam0->f_98[iVar0] != 0f)
		{
			if (uParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_183()
{
	return Global_1894899 & 4 != 0;
}

bool func_184(vector3 vParam0, int iParam3)
{
	if (!__LIB_0__::func_625(iParam3))
	{
		return false;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

char* func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

bool func_186(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_76(iParam0))
	{
		return false;
	}
	return (Global_1395482.f_2[iParam0] && iParam1) != 0;
}

void func_187(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

bool func_188(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_189(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*(uParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*(uParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*(uParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*(uParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*(uParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*(uParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*(uParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*(uParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 4:
					*(uParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*(uParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 5:
					*(uParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*(uParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*(uParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*(uParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*(uParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*(uParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*(uParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*(uParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*(uParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*(uParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 11:
					*(uParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*(uParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*(uParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*(uParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*(uParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*(uParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*(uParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*(uParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*(uParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*(uParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*(uParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*(uParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*(uParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*(uParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*(uParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*(uParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*(uParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*(uParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*(uParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 20:
					*(uParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*(uParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*(uParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 21:
					*(uParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*(uParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*(uParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 22:
					*(uParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*(uParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(uParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*(uParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*(uParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*(uParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*(uParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*(uParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*(uParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*(uParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*(uParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*(uParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*(uParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*(uParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*(uParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 26:
					*(uParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*(uParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 27:
					*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(uParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*(uParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*(uParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*(uParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*(uParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*(uParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*(uParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*(uParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(uParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*(uParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*(uParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*(uParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*(uParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*(uParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*(uParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*(uParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 24:
					*(uParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*(uParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 25:
					*(uParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*(uParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*(uParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 31:
					*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 32:
					*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 33:
					*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_190(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!__LIB_0__::func_86(*(uParam1[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *(uParam1[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(uParam1[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_191(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

bool func_192(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = (__LIB_2__::func_789(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17504.f_12[iVar1], iVar2);
}

bool func_193(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (__LIB_0__::func_485() - *uParam0) >= iParam1;
	}
	return false;
}

int func_194(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!__LIB_0__::func_86(uParam0->f_12[iVar0 /*3*/]))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar1 /*3*/]) < BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_195(var uParam0)
{
	return __LIB_0__::func_27(*uParam0, 1);
}

void func_196(int iParam0)
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
}

void func_197(int iParam0, int iParam1)
{
	Global_1392050[iParam1 /*14*/].f_1 = (Global_1392050[iParam1 /*14*/].f_1 - (Global_1392050[iParam1 /*14*/].f_1 && iParam0));
}

void func_198(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

bool func_199(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_200(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOW"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_201(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FOG"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_202(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("MISTY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_203(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_204(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SANDSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

int func_205(int iParam0)
{
	var uVar0;
	int iVar3;
	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_206(int iParam0)
{
	var uVar0;
	int iVar3;
	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("Q0304_TUNNEL_ENT"):
			case joaat("J_10P_TUNNEL_1A_INT"):
			case joaat("BAC_TUNNELCURVE_INT"):
			case joaat("Q0304_TUNNEL_INT"):
			case joaat("L_08_TRAIN_TUNNEL2_INT"):
			case joaat("BAC_TUNNELEXIT_INT"):
			case joaat("BAC_TUNNELENT_INT"):
			case joaat("J_14_TUNNEL01_INT"):
			case 653987431:
			case joaat("BAC_TUNNEL_INT"):
			case joaat("HEA_TUNNEL_01"):
			case joaat("HEA_TUNNEL_02"):
			case joaat("Q0304_TUNNEL_EXIT"):
			case joaat("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

bool func_207(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

void func_208(var uParam0, vector3 vParam1, int iParam4)
{
	if (!uParam0->f_182 || iParam4 == 1)
	{
		uParam0->f_183 = MAP::_BLIP_ADD_FOR_COORD(1260140857, vParam1);
		uParam0->f_182 = 1;
	}
}

void func_209(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_182 || iParam2 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			uParam0->f_183 = MAP::_BLIP_ADD_FOR_ENTITY(1260140857, iParam1);
			uParam0->f_182 = 1;
		}
	}
}

int func_210(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!*uParam1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, 3f, 0.55f, -1f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, iParam2, 2f, 0.2f, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		if (bParam3)
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 1f, 1.5f);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		}
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		*uParam1 = 1;
	}
	if ((TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503, true) == 1 && TASK::GET_SEQUENCE_PROGRESS(iParam0) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503, true) != 1)
	{
		return 1;
	}
	return 0;
}

int func_211(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_212(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0 /*8*/].f_3++;
	Global_1310750[iParam0 /*111*/].f_110 |= 2;
}

bool func_213(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (__LIB_0__::func_86(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_214(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16043)
	{
		if (!__LIB_0__::func_86(Global_1310750.f_16043[iVar0 /*3*/]))
		{
			if (__LIB_0__::func_62(vParam0, Global_1310750.f_16043[iVar0 /*3*/]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

void func_216(int iParam0)
{
	struct<2> Var0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (iParam0 > 3000 || iParam0 < 0)
	{
		return;
	}
	else
	{
		Var0 = { __LIB_0__::func_14(joaat("FAME")) };
		STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
	}
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_218(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 != 0)
	{
		iVar0 = __LIB_3__::func_147(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = __LIB_3__::func_148(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/].f_1++;
	}
}

void func_219(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = (__LIB_2__::func_789(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_17504.f_12[iVar1]), iVar2);
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

bool func_221(int iParam0)
{
	return (Global_1310750.f_16074 && iParam0) != 0;
}

bool func_222(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888.f_40615[iParam0 /*11*/] & 32 != 0;
}

bool func_223()
{
	return Global_1347398.f_1 == 0;
}

void func_224(int iParam0)
{
	Global_1347398.f_1 = iParam0;
}

bool func_225()
{
	return Global_1347398.f_1 == 1000;
}

bool func_226()
{
	return Global_1347398.f_1 == 2000;
}

bool func_227()
{
	return Global_1347398.f_1 == 3000;
}

void func_228(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if ((*iParam1)[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, (*iParam1)[iVar0], 0, false))
			{
				if (__LIB_0__::func_214((*iParam1)[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, (*iParam1)[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != (*iParam1)[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, (*iParam1)[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_229(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_30(__LIB_0__::func_118(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(__LIB_0__::func_120(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = PERSCHAR::_0x31C70A716CAE1FEE(__LIB_0__::func_120(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(__LIB_0__::func_120(iParam0));
	return 1;
}

void func_230(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 32);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 32);
	}
}

void func_231(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 64);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 64);
	}
}

void func_232(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 1024);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 1024);
	}
}

void func_233(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 1048576);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 1048576);
	}
}

void func_234(var uParam0)
{
	__LIB_2__::func_104(uParam0, 1);
	__LIB_2__::func_906(uParam0, 20);
}

bool func_235(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/].f_1 && iParam1) != 0;
}

bool func_236(int iParam0)
{
	if (__LIB_1__::func_85(iParam0, 1))
	{
		return false;
	}
	return (1 == __LIB_1__::func_987(iParam0) || 2 == __LIB_1__::func_987(iParam0));
}

void func_237(int iParam0, int iParam1)
{
	if (iParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		iParam0->f_8 = __LIB_0__::func_485();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	__LIB_2__::func_89(iParam0, 0);
	*iParam1 = 0;
	iParam0->f_16 = 0;
}

void func_238(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 || iParam1);
}

bool func_239(var uParam0, var uParam1)
{
	if (__LIB_1__::func_85(uParam0->f_3, 16777216))
	{
		if (__LIB_1__::func_509(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

int func_240(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	while (iVar0 < __LIB_2__::func_786(iParam0))
	{
		vVar1 = { __LIB_3__::func_153(iParam0, iVar0) };
		if (__LIB_0__::func_175(vVar1, vParam1, 1056964608 /* Float: 0.5f */, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_241(int iParam0, int iParam1)
{
	if (__LIB_3__::func_143(iParam0))
	{
		return;
	}
	if (__LIB_3__::func_144(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602 /*2*/].f_1 = iParam1;
	Global_36581[Global_36602 /*2*/] = iParam0;
	Global_36602++;
}

bool func_242(var uParam0)
{
	return __LIB_0__::func_27(*uParam0, 4);
}

bool func_243(var uParam0)
{
	return __LIB_0__::func_27(*uParam0, 64);
}

bool func_244(var uParam0)
{
	return __LIB_0__::func_27(*uParam0, 8);
}

bool func_245(var uParam0)
{
	return __LIB_0__::func_27(*uParam0, 128);
}

bool func_246(var uParam0)
{
	return __LIB_0__::func_27(*uParam0, 2048);
}

bool func_247(var uParam0)
{
	return __LIB_0__::func_27(*uParam0, 1024);
}

int func_248()
{
	if (__LIB_0__::func_154(Global_1935630.f_44))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (__LIB_3__::func_145())
		{
			return 1;
		}
	}
	return 0;
}

float func_249(var uParam0, bool bParam1)
{
	float fVar0;
	if (uParam0->f_119 == -1f)
	{
		if (__LIB_1__::func_85(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (__LIB_1__::func_85(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (__LIB_1__::func_85(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (__LIB_1__::func_85(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (__LIB_1__::func_85(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (__LIB_1__::func_85(uParam0->f_3, 1))
		{
		}
		else if (__LIB_1__::func_85(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_250(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_251(vector3 vParam0)
{
	float fVar0;
	if (__LIB_0__::func_86(vParam0))
	{
		return false;
	}
	fVar0 = __LIB_0__::func_514(__LIB_1__::func_923(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

void func_252(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		__LIB_2__::func_29(32);
		__LIB_2__::func_115(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

int func_253(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (__LIB_1__::func_85(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (__LIB_1__::func_898() == 8)
			{
				return 3;
			}
		}
		bVar0 = __LIB_1__::func_85(iParam0, 2);
		bVar1 = __LIB_1__::func_85(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!__LIB_1__::func_923())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

bool func_254(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return __LIB_1__::func_95(vVar0, vParam0) > __LIB_1__::func_95(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

void func_255(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 != 0)
	{
		iVar0 = __LIB_3__::func_147(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = __LIB_3__::func_148(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/]++;
	}
}

int func_256()
{
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	return __LIB_0__::func_647(joaat("FAME"));
}

void func_257(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (__LIB_1__::func_85(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (__LIB_0__::func_86(vParam1))
	{
		return;
	}
	if (!__LIB_0__::func_35(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] };
		if (__LIB_0__::func_86(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (__LIB_0__::func_175(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		Global_17504.f_2084[iVar1 /*5*/] = { vParam1 };
		Global_17504.f_2084[iVar1 /*5*/].f_3 = iParam0;
		Global_17504.f_2084[iVar1 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				Global_17504.f_2084[iVar0 /*5*/] = { vParam1 };
				Global_17504.f_2084[iVar0 /*5*/].f_3 = iParam0;
				Global_17504.f_2084[iVar0 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
			}
			else
			{
				Global_17504.f_2084[iVar0 /*5*/] = { Global_17504.f_2084[iVar0 + 1 /*5*/] };
			}
			iVar0++;
		}
	}
}

void func_258(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 120)
	{
		__LIB_2__::func_63(iVar0, iParam0);
		iVar0++;
	}
}

void func_259(int iParam0, bool bParam1)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		__LIB_3__::func_141(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

int func_260(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

void func_261(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::_BLIP_ADD_FOR_COORD(-1702907713, *uParam0);
		MAP::_BLIP_SET_MODIFIER(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

void func_262(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (__LIB_1__::func_85(iParam0, 262144))
	{
		if (Global_1392135.f_3 == -1)
		{
			__LIB_2__::func_268(262144, iVar0, 0, 1);
		}
	}
	if (__LIB_1__::func_85(iParam0, 128))
	{
		__LIB_2__::func_268(128, iVar0, 0, 1);
	}
	else if (__LIB_1__::func_85(iParam0, 524288))
	{
		__LIB_2__::func_268(524288, iVar0, 0, 1);
	}
	else if (__LIB_1__::func_85(iParam0, 536870912))
	{
		__LIB_2__::func_268(536870912, iVar0, 0, 1);
	}
	else if (__LIB_1__::func_85(iParam0, 4194304))
	{
		__LIB_2__::func_268(4194304, iVar0, 0, 1);
	}
	else if (__LIB_1__::func_85(iParam0, 8388608))
	{
		__LIB_2__::func_268(8388608, iVar0, 0, 1);
	}
}

bool func_263(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_IS_PLAYER_FREE_FOCUSING(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						__LIB_1__::func_148(uParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		__LIB_1__::func_148(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!__LIB_0__::func_75(uParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!__LIB_1__::func_285(uParam0, fParam2))
		{
			return true;
		}
		if (__LIB_0__::func_75(uParam0))
		{
			__LIB_0__::func_37(uParam0);
		}
	}
	return false;
}

void func_264(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_162))
	{
		__LIB_1__::func_748(&(uParam0->f_162), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_163))
	{
		__LIB_1__::func_748(&(uParam0->f_163), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_164))
	{
		__LIB_1__::func_748(&(uParam0->f_164), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_165))
	{
		__LIB_1__::func_748(&(uParam0->f_165), 1, 1);
	}
}

bool func_265(bool bParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam0)
	{
		return __LIB_3__::func_154(uParam1, sParam4, iParam2, iParam3, iParam7, bParam9, 1, 1);
	}
	return __LIB_2__::func_478(iParam2, iParam3, sParam4, iParam5, fParam6, iParam7, bParam8, bParam9, iParam10, 0, 1, 1744022339, 1, 0, 0);
}

void func_266()
{
	__LIB_3__::func_155(23);
}

void func_267(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == 0)
	{
		iParam3 = Global_1415419.f_19[iParam0 /*12*/].f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (__LIB_0__::func_23() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = __LIB_0__::func_23();
					}
					__LIB_1__::func_446(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					__LIB_0__::func_516(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

bool func_268(var uParam0)
{
	if (__LIB_1__::func_182(81053684, uParam0))
	{
		return true;
	}
	if (__LIB_1__::func_182(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_269(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_2__::func_523(iParam1, uParam2, 0);
		iVar5 = __LIB_3__::func_159(*uParam0, iParam1, uParam2, fParam3, bVar4);
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

void func_270(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			__LIB_3__::func_160(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_271(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
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
		__LIB_3__::func_161(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
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
						__LIB_2__::func_523(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
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
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

void func_272(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	__LIB_3__::func_161(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

bool func_273(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;
	if (!__LIB_0__::func_139(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = __LIB_2__::func_641(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0, 0);
			__LIB_2__::func_450(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = __LIB_2__::func_642(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		else
		{
			if (__LIB_0__::func_86(vParam2))
			{
				return false;
			}
			*uParam0 = __LIB_2__::func_643(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			__LIB_1__::func_483(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
			{
				__LIB_1__::func_221(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			__LIB_1__::func_382(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (__LIB_0__::func_572(*uParam0, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				__LIB_1__::func_221(*uParam0, 0, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_35))
		{
			__LIB_1__::func_221(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
		{
			__LIB_1__::func_221(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (__LIB_0__::func_139(*uParam0))
			{
				__LIB_1__::func_748(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && __LIB_1__::func_732(*uParam0, 1)) || (bParam17 && __LIB_0__::func_567(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				__LIB_1__::func_432(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				__LIB_1__::func_616(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
		}
		__LIB_1__::func_748(uParam0, 1, 1);
		return true;
	}
	return false;
}

bool func_274(int iParam0, int iParam1, var uParam2)
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
			if (__LIB_1__::func_182(1868067663, &uVar0))
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
				Jump @777; //curOff = 584
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

int func_275(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (__LIB_1__::func_761(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(__LIB_0__::func_162(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_276(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_277(int iParam0, vector3 vParam1, bool bParam4)
{
	if (bParam4)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::TRIGGER_SONAR_BLIP(iParam0, vParam1);
}

bool func_278(var uParam0)
{
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_0x610438375E5D1801(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_279(var uParam0)
{
	return __LIB_0__::func_27(*uParam0, 4096);
}

bool func_280(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*9*/])->f_6) && (uParam0[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN((uParam0[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (uParam0[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	__LIB_3__::func_164(uParam0);
	return true;
}

bool func_281(int iParam0, int iParam1)
{
	return (__LIB_3__::func_181(iParam0) && iParam1) != 0;
}

bool func_282(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (__LIB_3__::func_199(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (__LIB_0__::func_36() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_283()
{
	return __LIB_3__::func_168(__LIB_1__::func_898());
}

void func_284(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_3__::func_187(&((uParam0[iVar0 /*32*/])->f_1));
		__LIB_3__::func_187(&((uParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

int func_285(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (__LIB_3__::func_178(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_286(int iParam0)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

bool func_287()
{
	if (!__LIB_1__::func_76(Global_1395482.f_1))
	{
		return false;
	}
	return __LIB_3__::func_186(Global_1395482.f_1, 32);
}

void func_288(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (!Global_1935630.f_12 && (!bParam4 || __LIB_2__::func_1(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = __LIB_0__::func_514(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				__LIB_2__::func_426(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, iParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

bool func_289(var uParam0)
{
	if (!__LIB_3__::func_188(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!__LIB_3__::func_188(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = joaat("META_OUTFIT_DEFAULT");
			}
			return false;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

bool func_290(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && __LIB_3__::func_146(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && __LIB_1__::func_901(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && __LIB_3__::func_200(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && __LIB_3__::func_201(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && __LIB_3__::func_202(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && __LIB_3__::func_203(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && __LIB_3__::func_204(iVar3))
	{
		return true;
	}
	return false;
}

bool func_291(int iParam0, bool bParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (__LIB_3__::func_205(iVar0) || __LIB_3__::func_206(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

float func_292(int iParam0)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return 0f;
	}
	if (!__LIB_3__::func_207(iParam0))
	{
		return 0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

void func_293(int iParam0)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return;
	}
	__LIB_3__::func_212(iParam0);
}

int func_294(int iParam0)
{
	if (__LIB_3__::func_235(iParam0, 2))
	{
		return 200;
	}
	if (__LIB_3__::func_235(iParam0, 4))
	{
		return 70;
	}
	if (__LIB_3__::func_235(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

void func_295(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (__LIB_3__::func_235(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_296(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (__LIB_3__::func_235(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110f));
	}
	else if (__LIB_3__::func_235(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_297(int iParam0, vector3 vParam1)
{
	int iVar0;
	if (!__LIB_1__::func_85(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (__LIB_1__::func_989(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (__LIB_1__::func_85(iParam0, 33554432))
	{
		if (__LIB_3__::func_213(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_298(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	iVar0 = 1;
	if (__LIB_3__::func_235(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, false))
		{
			return false;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (__LIB_1__::func_85(iParam0, 1) && !__LIB_1__::func_85(iParam0, 2))
	{
		if (__LIB_1__::func_85(iParam0, 4096) || __LIB_1__::func_85(iParam0, 2048))
		{
			if (__LIB_3__::func_214(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

void func_299(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 != -1 && !__LIB_3__::func_235(iParam0, 8192))
	{
		iVar0 = __LIB_3__::func_148(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_300(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 != -1 && !__LIB_3__::func_235(iParam0, 8192))
	{
		iVar0 = __LIB_3__::func_148(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

int func_301(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (Global_1888801[iVar2 /*35*/].f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899.f_2))
			{
				if (!bParam1 || __LIB_3__::func_222(iVar2))
				{
					vVar3 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iVar2 /*35*/].f_3) };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

void func_302(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		__LIB_2__::func_613(uParam0, 1);
		__LIB_2__::func_715(uParam0, 1);
		__LIB_2__::func_180(uParam0, 1);
		__LIB_3__::func_230(uParam0, 1);
		__LIB_3__::func_231(uParam0, 1);
		__LIB_3__::func_232(uParam0, 1);
		__LIB_3__::func_233(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		__LIB_2__::func_613(uParam0, 0);
		__LIB_2__::func_715(uParam0, 0);
		__LIB_2__::func_180(uParam0, 0);
		__LIB_3__::func_230(uParam0, 0);
		__LIB_3__::func_231(uParam0, 0);
		__LIB_3__::func_232(uParam0, 0);
		__LIB_3__::func_233(uParam0, 0);
	}
}

void func_303(int iParam0)
{
	__LIB_1__::func_683(iParam0, 256);
}

bool func_304(var uParam0, int iParam1)
{
	if (__LIB_1__::func_85(iParam1, 256))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_172) || __LIB_3__::func_173(iParam1, __LIB_3__::func_172(uParam0), &(uParam0->f_172)))
		{
			if (__LIB_2__::func_1(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

void func_305(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		__LIB_3__::func_139(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (__LIB_1__::func_85(uParam0->f_3, 1) && !__LIB_1__::func_85(uParam0->f_3, 32))
	{
		__LIB_3__::func_139(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (__LIB_1__::func_85(uParam0->f_3, 2) && !__LIB_1__::func_85(uParam0->f_3, 32))
	{
		__LIB_3__::func_139(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		__LIB_3__::func_241(uParam0->f_171, 1);
	}
	if (__LIB_1__::func_85(uParam0->f_3, 1))
	{
		__LIB_3__::func_139(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		__LIB_2__::func_43(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

int func_306(var uParam0, var uParam1)
{
	vector3 vVar0;
	vVar0 = { *uParam0 };
	if (__LIB_3__::func_195(&uParam1))
	{
		return 1;
	}
	if (!__LIB_2__::func_106(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

void func_307(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7)
{
	float fVar0;
	fVar0 = __LIB_0__::func_514(bParam6, fParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (__LIB_3__::func_254(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = __LIB_0__::func_485();
			iParam4->f_2 = __LIB_0__::func_94(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!__LIB_3__::func_254(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = __LIB_0__::func_485();
		iParam4->f_2 = __LIB_0__::func_94(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_308(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__::func_169(uParam0->f_3);
	iVar1 = __LIB_1__::func_149(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_309(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || __LIB_0__::func_1(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (__LIB_1__::func_85(uParam0->f_3, 1073741824 /* Float: 2f */))
			{
				__LIB_2__::func_304(2, -1, 0, 0, 0);
			}
			else
			{
				__LIB_2__::func_304(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				__LIB_2__::func_304(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!__LIB_0__::func_563(1, uParam0->f_177))
				{
					__LIB_3__::func_197(16, uParam0->f_177);
					__LIB_3__::func_198(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(__LIB_2__::func_31(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		__LIB_2__::func_304(8, -1, 0, 0, 0);
	}
}

void func_310(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_2__::func_646(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = joaat("COL_CC_INTRO");
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = joaat("DINO_BONES");
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(39) || __LIB_2__::func_646(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = joaat("BLIP_RC_DEBORAH");
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = joaat("COL_DB_INTRO");
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(49) || __LIB_2__::func_646(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = joaat("BLIP_SCM_FRANCES");
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = joaat("COL_RC_INTRO");
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = joaat("TAXIDERMY");
			iVar4 = joaat("BLIP_RC_HOBBS");
			iVar6 = joaat("COL_TX_INTRO");
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_2__::func_646(38)))
		{
			iVar6 = joaat("COL_CC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_CC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, __LIB_0__::func_426(__LIB_0__::func_354(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (__LIB_0__::func_28() && (__LIB_1__::func_200(39) || __LIB_2__::func_646(39)))
		{
			iVar6 = joaat("COL_DB_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_DB_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (__LIB_0__::func_28() && (__LIB_1__::func_200(49) || __LIB_2__::func_646(49)))
		{
			iVar6 = joaat("COL_RC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_RC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_311(var uParam0)
{
	if (uParam0->f_170)
	{
		__LIB_3__::func_266();
	}
}

void func_312(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_2__::func_646(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO");
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE");
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(39) || __LIB_2__::func_646(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH");
				iVar13 = joaat("COL_DB_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = joaat("DINO_BONES");
			break;
		case 43:
			if (iParam3 == joaat("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = __LIB_1__::func_34(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(41) || __LIB_2__::func_646(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(49) || __LIB_2__::func_646(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES");
				iVar13 = joaat("COL_RC_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = joaat("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = __LIB_1__::func_34(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = __LIB_2__::func_650(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (__LIB_0__::func_422(iParam0, iVar13, iVar14))
	{
	}
	if (__LIB_0__::func_423(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (__LIB_0__::func_424(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (__LIB_2__::func_651(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (__LIB_1__::func_165(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (__LIB_0__::func_938(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_313(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_1;
}

void func_314(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			STREAMING::REQUEST_MODEL((uParam0[iVar0 /*12*/])->f_7, false);
		}
		iVar0++;
	}
}

bool func_315(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar1 /*8*/]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0[iVar1 /*8*/]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_316(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((uParam0[iVar0 /*12*/])->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_317(var uParam0, int iParam1)
{
	if (uParam0->f_2 >= *iParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS((*iParam1)[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_318(char* sParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1[iVar0 /*8*/]))
		{
			StringCopy(uParam1[iVar0 /*8*/], sParam0, 64);
			STREAMING::REQUEST_ANIM_DICT(uParam1[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

void func_319(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

int func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_321(struct<2> Param0, var uParam2)
{
	int iVar0;
	iVar0 = (BUILTIN::ROUND(MISC::ABSF(Param0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

int func_322(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_1;
	}
	return Global_42606[iParam0 /*4*/].f_1;
}

int func_323(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/];
	}
	return Global_42606[iParam0 /*4*/];
}

int func_324(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_2;
	}
	return Global_42606[iParam0 /*4*/].f_2;
}

bool func_325(var uParam0)
{
	return __LIB_0__::func_27(*uParam0, 32);
}

int func_326(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	STREAMING::REQUEST_MODEL(iParam0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 0;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam4) && iParam5 != 0)
	{
		iParam4 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam1, iParam5, 1f, 0, false);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam4))
	{
		if (TASK::_0xEA31F199A73801D3(iParam4))
		{
			iVar1 = TASK::_GET_SCENARIO_POINT_ENTITY(iParam4, "CONTAINER");
			if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
			{
				iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			}
		}
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vParam1, 0.5f, iParam0, false, false, true);
	}
	return iVar0;
}

void func_327(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_state", iParam1);
}

void func_328(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_behavior", iParam1);
}

bool func_329(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
	{
		return false;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(Global_1396084);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1396084);
		if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar1))
		{
			if (DECORATOR::DECOR_EXIST_ON(iVar1, "pedRoam_hashKey"))
			{
				if (DECORATOR::DECOR_GET_INT(iVar1, "pedRoam_hashKey") == iParam0)
				{
					return true;
				}
			}
		}
		iVar2++;
	}
	return false;
}

bool func_330(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2))
			{
				return true;
			}
		}
	}
	return false;
}

void func_331(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1x", vParam1.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1y", vParam1.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1z", vParam1.z);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1x", vParam4.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1y", vParam4.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1z", vParam4.z);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2x", vParam1.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2y", vParam1.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2z", vParam1.z);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2x", vParam4.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2y", vParam4.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2z", vParam4.z);
	}
}

float func_332(vector3 vParam0, int iParam3)
{
	return __LIB_0__::func_94(Global_35, vParam0, iParam3);
}

void func_333(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(uParam0->f_1), 131072);
	}
	else
	{
		__LIB_1__::func_336(&(uParam0->f_1), 131072);
	}
}

void func_334(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_0__::func_325(uParam0[iVar0]);
		iVar0++;
	}
}

void func_335(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_3__::func_179(uParam0) };
	iVar3 = __LIB_3__::func_167(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

int func_336(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	float fVar0;
	bool bVar1;
	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (__LIB_3__::func_199(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (__LIB_3__::func_282(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (__LIB_0__::func_36() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

void func_337(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	iVar0 = 258;
	__LIB_2__::func_354(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

void func_338(var uParam0, bool bParam1)
{
	vector3 vVar0;
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!__LIB_2__::func_106(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

bool func_339(int iParam0)
{
	return !__LIB_1__::func_935(iParam0, 1);
}

bool func_340(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/].f_1 != -1)
		{
			__LIB_3__::func_191(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (__LIB_3__::func_235(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(__LIB_3__::func_294(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(__LIB_3__::func_294(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return true;
}

void func_341(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (__LIB_3__::func_253(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!__LIB_1__::func_85(iParam0, 1))
			{
				if (__LIB_3__::func_235(iParam0, 2))
				{
				}
			}
			__LIB_3__::func_295(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			__LIB_3__::func_296(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			__LIB_3__::func_296(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (__LIB_3__::func_236(iParam0))
	{
		*fParam2 = 40000f;
	}
}

bool func_342(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;
	if (__LIB_0__::func_86(vParam1))
	{
		return false;
	}
	if (__LIB_3__::func_297(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (__LIB_3__::func_236(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

int func_343(bool bParam0)
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = __LIB_3__::func_301(1, 0, 0);
	}
	else
	{
		iVar0 = __LIB_0__::func_12();
	}
	return __LIB_3__::func_215(iVar0);
}

bool func_344(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = 30f;
	fVar1 = 150f;
	if (__LIB_1__::func_85(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (__LIB_1__::func_923())
			{
				fVar0 = 15f;
			}
		}
		if (__LIB_3__::func_182(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!__LIB_3__::func_182(uParam2, fVar1))
		{
			if (!__LIB_2__::func_117(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!__LIB_3__::func_281(uParam2->f_3, 2) && __LIB_3__::func_290(2))
		{
			return false;
		}
		if (__LIB_1__::func_85(iParam0, 4194304) || __LIB_1__::func_85(iParam0, 33554432))
		{
			if (__LIB_1__::func_995(1))
			{
				return false;
			}
		}
	}
	if (__LIB_1__::func_376(Global_35))
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 1, 1) && !__LIB_1__::func_271(iParam0))
	{
		return false;
	}
	if (!*uParam1 && __LIB_1__::func_85(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (__LIB_3__::func_291(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (__LIB_3__::func_183())
		{
			return false;
		}
		iVar2 = __LIB_3__::func_250(__LIB_0__::func_12());
		if (__LIB_0__::func_625(iVar2))
		{
			if (__LIB_3__::func_184(Global_36, iVar2))
			{
				return false;
			}
		}
		if (__LIB_3__::func_251(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (__LIB_3__::func_263(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_345(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_1__::func_209(uParam0->f_51))
	{
		__LIB_1__::func_222(uParam0->f_51, 0);
		fVar0 = __LIB_3__::func_292(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, __LIB_0__::func_93());
		bVar1 = __LIB_0__::func_514(!__LIB_1__::func_85(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = __LIB_2__::func_213(iVar2, __LIB_3__::func_185(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

void func_346(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_1__::func_85(iParam0, 32))
	{
		if (__LIB_3__::func_189(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { __LIB_3__::func_190(Global_35, &(uParam1->f_12)) };
				if (!__LIB_0__::func_86(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		__LIB_3__::func_261(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = __LIB_3__::func_292(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, __LIB_0__::func_93());
		if (__LIB_0__::func_1(Global_1310750[iParam0 /*111*/], 33554432))
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (__LIB_1__::func_85(iParam0, 1))
		{
			__LIB_2__::func_119(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	__LIB_3__::func_293(iParam0);
}

int func_347(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = __LIB_2__::func_465(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return __LIB_3__::func_106(iParam0, 0);
	}
	uVar2 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam2), iParam0, 0);
	return uVar2;
}

void func_348(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == 0)
	{
		iParam3 = Global_1415419.f_19[iParam0 /*12*/].f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (__LIB_0__::func_23() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = __LIB_0__::func_23();
					}
					__LIB_2__::func_670(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					__LIB_0__::func_516(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

int func_349(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		__LIB_2__::func_713(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_350(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		__LIB_2__::func_713(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_351(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			__LIB_2__::func_713(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

void func_352(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

int func_353(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (!AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			return 0;
		}
	}
	if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
	{
		return 1;
	}
	return 0;
}

bool func_354()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1899517)
	{
		if (Global_1899517[iVar0] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<2> func_355()
{
	struct<2> Var0;
	Var0 = ITEMSET::CREATE_ITEMSET(true);
	return Var0;
}

bool func_356(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return false;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return false;
	}
	return MAP::_BLIP_SET_MODIFIER(iVar0, iParam1);
}

Vector3 func_357(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, bParam3, vParam4);
}

bool func_358(int iParam0, var uParam1)
{
	return ITEMSET::IS_ITEMSET_VALID(iParam0);
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			return 0;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			return 2;
		case joaat("G_M_M_UNIINBRED_01"):
			return 1;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			return 3;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			return 4;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			return 5;
	}
	return -1;
}

int func_360(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *iParam1)
			{
				if ((*iParam1)[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*iParam1)[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

float func_361(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return __LIB_2__::func_709((fParam0 + fParam1));
}

void func_362(int* iParam0, float fParam1)
{
	iParam0->f_4 = fParam1;
	__LIB_1__::func_471(iParam0, 7);
}

void func_363(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_16[2], 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[2], 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[2], __LIB_0__::func_522(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

Vector3 func_364(int iParam0, int iParam1, int iParam2)
{
	return __LIB_1__::func_868(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false), iParam2);
}

bool func_365(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (__LIB_3__::func_287())
			{
				return true;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return true;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (__LIB_3__::func_236(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (__LIB_1__::func_85(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (__LIB_1__::func_85(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (__LIB_1__::func_85(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *iParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*iParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_188])) || !bParam3)
						{
							if ((uParam0->f_98[uParam0->f_188] * uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return true;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (__LIB_0__::func_62(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (__LIB_0__::func_62(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *iParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return false;
}

bool func_366(var uParam0)
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!__LIB_3__::func_289(uParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_367(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	fVar3 = (fParam0 * fParam0);
	__LIB_3__::func_341(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (__LIB_1__::func_85(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

void func_368(var uParam0, bool bParam1)
{
	__LIB_2__::func_433(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		__LIB_1__::func_422("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

int func_369(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vVar2 = { *uParam0 };
	__LIB_3__::func_307(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (__LIB_3__::func_193(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!__LIB_0__::func_86(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = __LIB_3__::func_194(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { uParam0->f_12[iVar1 /*3*/] };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return __LIB_3__::func_260(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

int func_370(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	__LIB_1__::func_412(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_371()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_972(__LIB_0__::func_12());
	if (iVar0 == 8)
	{
		iVar1 = __LIB_3__::func_250(__LIB_0__::func_12());
		if (__LIB_3__::func_184(Global_36, iVar1))
		{
			return false;
		}
	}
	if (__LIB_3__::func_221(__LIB_3__::func_343(0)))
	{
		return false;
	}
	if (__LIB_1__::func_652())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

int func_372(int iParam0)
{
	int iVar0;
	if (iParam0 == -1)
	{
		iVar0 = __LIB_3__::func_343(1);
	}
	else
	{
		iVar0 = __LIB_3__::func_215(iParam0);
	}
	return iVar0;
}

void func_373(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_217(iParam0);
	if (iVar0 != 0)
	{
		__LIB_3__::func_348(-1, 24, 0, iVar0);
	}
}

bool func_374(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_2__::func_523(iParam1, uParam2, 0);
		iVar5 = __LIB_3__::func_349(*uParam0, iParam1, uParam2, fParam3, bVar4);
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

void func_375(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			__LIB_3__::func_350(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_376(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
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
		__LIB_3__::func_351(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
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
						__LIB_2__::func_523(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
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
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

void func_377(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	__LIB_3__::func_351(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_378(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(uParam0, iVar0);
}

void func_379(int* iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		if (bParam1)
		{
			*iParam0 = 0;
		}
	}
}

void func_380(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Param0))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Param0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Param0.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Param0.f_1);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Param0.f_2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Param0.f_2);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Param0.f_3))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Param0.f_3);
	}
}

bool func_381(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(*iParam0, iParam1);
}

void func_382(int iParam0, int iParam1)
{
	iParam0->f_21 = iParam1;
}

bool func_383(int iParam0, var uParam1)
{
	var uVar0;
	uVar0 = *uParam1;
	if (PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &uVar0, false, false))
	{
		return true;
	}
	return false;
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		default:
			break;
	}
	return -1;
}

void func_385(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(iParam0->f_1), 8);
	}
	else
	{
		__LIB_1__::func_336(&(iParam0->f_1), 8);
	}
}

void func_386(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(iParam0->f_1), 4);
	}
	else
	{
		__LIB_1__::func_336(&(iParam0->f_1), 4);
	}
}

void func_387(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 2);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 2);
	}
}

void func_388(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(iParam0->f_1), 16);
	}
	else
	{
		__LIB_1__::func_336(&(iParam0->f_1), 16);
	}
}

void func_389(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_target", iParam1);
}

int func_390(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (__LIB_3__::func_313(iParam0) % iParam1);
	}
	return (__LIB_3__::func_140(iParam0) % iParam1);
}

void func_391(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(iParam0->f_1), 16384);
	}
	else
	{
		__LIB_1__::func_336(&(iParam0->f_1), 16384);
	}
}

void func_392(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(iParam0->f_1), 2048);
	}
	else
	{
		__LIB_1__::func_336(&(iParam0->f_1), 2048);
	}
}

void func_393(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_516(&(iParam0->f_1), 256);
	}
	else
	{
		__LIB_1__::func_336(&(iParam0->f_1), 256);
	}
}

var func_394(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	char cVar0[64];
	char cVar8[32];
	StringCopy(&cVar0, "RE_", 64);
	StringCopy(&cVar8, sParam1, 32);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, &cVar8, 64);
	if (iParam3 >= 0)
	{
		StringConCat(&cVar0, "_V", 64);
		StringIntConCat(&cVar0, iParam3, 64);
	}
	else
	{
		StringConCat(&cVar0, "_ALL", 64);
	}
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, sParam2, 64);
	return __LIB_1__::func_569(cVar0);
}

bool func_395(int iParam0, int iParam1)
{
	if (__LIB_3__::func_359(iParam0) != -1)
	{
		return true;
	}
	switch (iParam0)
	{
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("G_M_M_UNISWAMP_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return true;
		case joaat("G_M_M_UNICRIMINALS_02"):
		case joaat("G_M_M_UNICRIMINALS_01"):
			return iParam1;
		default:
			break;
	}
	return false;
}

bool func_396(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = __LIB_2__::func_88(iParam0);
	if (iParam0->f_12 > __LIB_2__::func_40(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = __LIB_1__::func_362(iParam1);
	iVar1 = __LIB_1__::func_363(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_397(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_117(iParam0, 2))
	{
		return false;
	}
	if (__LIB_0__::func_117(iParam0, 32) && !bParam1)
	{
		__LIB_0__::func_119(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(__LIB_0__::func_118(iParam0)));
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_0__::func_117(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(__LIB_0__::func_120(iParam0));
				__LIB_0__::func_121(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_0__::func_120(iParam0));
		}
		return false;
	}
	if (!__LIB_1__::func_346(iParam0) && __LIB_0__::func_2() == -1)
	{
		return false;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		__LIB_0__::func_121(iParam0, 128);
		return true;
	}
	__LIB_0__::func_119(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(__LIB_0__::func_118(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(iParam0));
	if (__LIB_0__::func_117(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(__LIB_0__::func_120(iParam0));
		__LIB_0__::func_121(iParam0, 2048);
	}
	return true;
}

void func_398(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;
	fVar0 = __LIB_0__::func_514(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (__LIB_3__::func_254(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = __LIB_0__::func_485();
			iParam4->f_2 = __LIB_0__::func_94(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!__LIB_3__::func_254(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = __LIB_0__::func_485();
		iParam4->f_2 = __LIB_0__::func_94(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_399(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (__LIB_2__::func_128(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!__LIB_1__::func_364(iParam1, iParam0))
					{
						if (__LIB_0__::func_94(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

int func_400(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;
	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *iParam3)
	{
		iParam7 = (*iParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && ENTITY::DOES_ENTITY_EXIST((iParam3[iVar0 /*12*/])->f_8))
		{
		}
		else if ((iParam3[iVar0 /*12*/])->f_7 != 0 && !__LIB_0__::func_27((iParam3[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED((iParam3[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((iParam3[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = (iParam3[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((iParam3[iVar8 /*12*/])->f_8, *(iParam3[iVar0 /*12*/])) };
					if (__LIB_0__::func_27((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY((iParam3[iVar0 /*12*/])->f_8, (iParam3[iVar8 /*12*/])->f_8, 0, *(iParam3[iVar0 /*12*/]), (iParam3[iVar0 /*12*/])->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!__LIB_0__::func_27((iParam3[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *(iParam3[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *(iParam3[iVar0 /*12*/]) };
					}
					if (!__LIB_0__::func_27((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						__LIB_3__::func_338(&vVar5, (iParam3[iVar0 /*12*/])->f_10);
					}
					if (__LIB_0__::func_27((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (__LIB_0__::func_86((iParam3[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, (iParam3[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { (iParam3[iVar0 /*12*/])->f_4 };
					}
					if (__LIB_0__::func_27((iParam3[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = __LIB_2__::func_709((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION((iParam3[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!__LIB_0__::func_27((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						if ((iParam3[iVar0 /*12*/])->f_10)
						{
							ENTITY::_0x9587913B9E772D29((iParam3[iVar0 /*12*/])->f_8, 0);
						}
					}
				}
				if (__LIB_0__::func_27((iParam3[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION((iParam3[iVar0 /*12*/])->f_8, true);
				}
				if (__LIB_0__::func_27((iParam3[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE((iParam3[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((iParam3[iVar0 /*12*/])->f_8, 1);
					PHYSICS::ACTIVATE_PHYSICS((iParam3[iVar0 /*12*/])->f_8);
				}
				ENTITY::_0xA91E6CF94404E8C9((iParam3[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS((iParam3[iVar0 /*12*/])->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

Vector3 func_401(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < __LIB_2__::func_786(iParam1))
	{
		if (!__LIB_3__::func_192(iParam1, iVar0))
		{
			vVar4 = { __LIB_3__::func_153(iParam1, iVar0) };
			if (!__LIB_0__::func_86(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (__LIB_3__::func_367(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (__LIB_3__::func_342(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!__LIB_0__::func_86(vVar4))
	{
	}
	return vVar1;
}

bool func_402(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;
	uVar0 = __LIB_0__::func_81(&uParam0);
	if (!__LIB_3__::func_371())
	{
		return false;
	}
	return true;
}

int func_403(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	if (bParam6)
	{
		__LIB_3__::func_306(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && __LIB_3__::func_278(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = __LIB_3__::func_370(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = __LIB_3__::func_370(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !__LIB_0__::func_125(iVar0))
		{
			__LIB_2__::func_133(iVar0, &(uParam1->f_23), 0);
		}
		if (__LIB_0__::func_125(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (__LIB_3__::func_242(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !__LIB_3__::func_243(&(uParam1->f_22)));
			__LIB_1__::func_864(iVar0, __LIB_3__::func_244(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (__LIB_3__::func_245(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (__LIB_3__::func_246(&(uParam1->f_22)))
		{
			__LIB_3__::func_174(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, __LIB_3__::func_247(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!__LIB_0__::func_27(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!__LIB_0__::func_125(iVar0))
		{
			__LIB_3__::func_176(iVar0, !__LIB_3__::func_175(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, __LIB_3__::func_177(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !__LIB_3__::func_279(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !__LIB_3__::func_279(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

void func_404(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (__LIB_1__::func_85(iParam0, 2))
	{
		__LIB_3__::func_218(iParam0, __LIB_3__::func_372(iParam3));
	}
	if (__LIB_1__::func_85(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = __LIB_1__::func_898();
		}
		__LIB_3__::func_300(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !__LIB_3__::func_235(iParam0, 65536))
	{
		__LIB_3__::func_219(iParam0, iParam1);
		__LIB_3__::func_257(iParam0, __LIB_3__::func_153(iParam0, iParam1));
		__LIB_2__::func_29(128);
	}
	__LIB_2__::func_212(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216 /* Float: 1f */, 0, 0);
	__LIB_3__::func_262(iParam0, 1);
	if (!bParam2)
	{
		__LIB_2__::func_29(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		__LIB_3__::func_258(524288);
	}
	if (__LIB_3__::func_220(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= __LIB_3__::func_220(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_405(int iParam0, int iParam1)
{
	float fVar0;
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (__LIB_1__::func_85(iParam0, 2))
	{
		__LIB_3__::func_255(iParam0, __LIB_3__::func_372(iParam1));
	}
	else
	{
		__LIB_3__::func_299(iParam0, __LIB_1__::func_898());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT((Global_17504.f_42[iParam0 /*8*/].f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	__LIB_2__::func_212(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	__LIB_3__::func_262(iParam0, 0);
	__LIB_3__::func_196(iParam0);
	__LIB_1__::func_142(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::_0x33D51F801CB16E4F();
	Global_1310750[iParam0 /*111*/].f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!__LIB_1__::func_85(iParam0, 16))
	{
		__LIB_1__::func_309(iParam0, 0, 0, 0, 0);
	}
}

void func_406(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	iVar0 = __LIB_0__::func_786();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = __LIB_0__::func_934(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (__LIB_0__::func_293(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!__LIB_0__::func_181())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = __LIB_0__::func_309(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = __LIB_0__::func_786();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = __LIB_0__::func_416(iVar1);
		__LIB_1__::func_454(__LIB_0__::func_417(), 0, 4000);
		__LIB_3__::func_363(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		__LIB_1__::func_427(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > __LIB_0__::func_348(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < __LIB_0__::func_348(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { __LIB_0__::func_14(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		__LIB_0__::func_896(10, 1);
	}
}

void func_407(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

var func_408(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, fParam4, iParam5, iParam6, iParam7);
}

int func_409(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

int func_410(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

bool func_411(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_IS_METAPED_USING_COMPONENT(iParam0, iParam1);
}

bool func_412(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804.f_2657.f_19)
	{
		if (iParam0 == Global_1946804.f_2657[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

bool func_413(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804.f_2657.f_19)
	{
		if (Global_1946804.f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

void func_414(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!__LIB_1__::func_565(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (__LIB_1__::func_565(uParam0))
		{
		}
	}
}

void func_415(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (!uParam0->f_182)
	{
		if (!__LIB_0__::func_86(vParam2))
		{
			if (__LIB_0__::func_94(Global_35, vParam2, 1) < IntToFloat(iParam5))
			{
				__LIB_3__::func_208(uParam0, vParam2, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (__LIB_0__::func_665(Global_35, iParam1, 1, 1) < IntToFloat(iParam5))
			{
				__LIB_3__::func_209(uParam0, iParam1, 0);
			}
		}
		else if (!__LIB_0__::func_86(uParam0->f_51))
		{
			if (__LIB_0__::func_94(Global_35, uParam0->f_51, 1) < IntToFloat(iParam5))
			{
				__LIB_3__::func_208(uParam0, uParam0->f_51, 0);
			}
		}
		else
		{
			return;
		}
	}
}

void func_416(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (!Global_1935630.f_12 && (!bParam4 || __LIB_2__::func_1(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = __LIB_0__::func_514(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				__LIB_2__::func_426(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, fParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

bool func_417(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;
	int iVar9;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return false;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	if (iVar1 == 0)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = __LIB_3__::func_67(iVar9);
		if (!PED::_0x608BC6A6AACD5036(&Var3, iParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = Var3.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar7))
				{
				}
				iVar8 = ENTITY::_GET_ENTITY_CARRY_CONFIG(iVar7);
				if (iVar8 == joaat("CARRIABLE_SADDLE") || iVar8 == joaat("CARRIABLE_SADDLE_BUNDLE"))
				{
					return true;
				}
			}
		}
		iVar9++;
	}
	return false;
}

void func_418(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	char* sVar9;
	int iVar10;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = __LIB_3__::func_256();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = MISC::ABSI(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = BUILTIN::TO_FLOAT(iVar0);
	fVar7 = BUILTIN::TO_FLOAT(Global_1347398);
	fVar8 = BUILTIN::TO_FLOAT(iVar3);
	iVar4 = __LIB_0__::func_309(BUILTIN::CEIL(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = __LIB_0__::func_309(BUILTIN::CEIL(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!__LIB_3__::func_223())
		{
			__LIB_3__::func_224(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!__LIB_3__::func_225())
		{
			__LIB_3__::func_224(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!__LIB_3__::func_226())
		{
			__LIB_3__::func_224(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!__LIB_3__::func_227())
	{
		__LIB_3__::func_224(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	__LIB_0__::func_15(__LIB_0__::func_14(joaat("FAME")), iVar1);
	iVar10 = __LIB_3__::func_256();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

bool func_419(int iParam0, int iParam1)
{
	return __LIB_1__::func_870(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
}

void func_420(var uParam0, bool bParam1)
{
	__LIB_2__::func_290(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		__LIB_1__::func_422("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

int func_421(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vVar2 = { *uParam0 };
	__LIB_3__::func_398(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (__LIB_3__::func_193(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!__LIB_0__::func_86(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = __LIB_3__::func_194(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { uParam0->f_12[iVar1 /*3*/] };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return __LIB_3__::func_260(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

int func_422(int iParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, var uParam10)
{
	int iVar0;
	if (bParam6)
	{
		__LIB_3__::func_306(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && __LIB_3__::func_278(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, iParam5, 1, 1, uParam9, uParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = __LIB_1__::func_545(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = __LIB_1__::func_545(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !__LIB_0__::func_125(iVar0))
		{
			__LIB_2__::func_133(iVar0, &(uParam1->f_23), 0);
		}
		if (__LIB_0__::func_125(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (__LIB_3__::func_242(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !__LIB_3__::func_243(&(uParam1->f_22)));
			__LIB_1__::func_864(iVar0, __LIB_3__::func_244(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (__LIB_3__::func_245(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (__LIB_3__::func_246(&(uParam1->f_22)))
		{
			__LIB_3__::func_174(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, __LIB_3__::func_247(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!__LIB_0__::func_27(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!__LIB_0__::func_125(iVar0))
		{
			__LIB_3__::func_176(iVar0, !__LIB_3__::func_175(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, __LIB_3__::func_177(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !__LIB_3__::func_279(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !__LIB_3__::func_279(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

bool func_423(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (__LIB_3__::func_297(iParam0, *uParam2))
	{
		return false;
	}
	if (!__LIB_3__::func_298(iParam0, uParam2))
	{
		return false;
	}
	if (!__LIB_3__::func_402(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!__LIB_3__::func_254(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

void func_424(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_217(iParam0);
	if (iVar0 != 0)
	{
		__LIB_3__::func_267(-1, 24, 0, iVar0);
	}
}

bool func_425(var uParam0)
{
	if (-1829635046 == __LIB_1__::func_548(81053684))
	{
		if (__LIB_3__::func_268(uParam0))
		{
			return true;
		}
	}
	else if (__LIB_1__::func_182(-525676072, uParam0))
	{
		if (__LIB_3__::func_268(uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_426(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!__LIB_0__::func_35(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (__LIB_0__::func_190())
	{
		__LIB_3__::func_180(1);
	}
	__LIB_3__::func_405(iParam2, uParam0->f_43);
	__LIB_1__::func_309(iParam2, 0, 0, 0, 0);
	if (__LIB_3__::func_181(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(__LIB_3__::func_165(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	__LIB_3__::func_309(uParam0, 1, 0);
	*uParam1 = 1;
}

int func_427(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { __LIB_1__::func_615(iParam0, 0, 1) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return __LIB_3__::func_275(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

bool func_428(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (__LIB_1__::func_768(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_1__::func_768(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (__LIB_1__::func_768(iVar0))
		{
			*iParam2++;
		}
		if (__LIB_1__::func_768(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (__LIB_1__::func_768(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_1__::func_768(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (__LIB_1__::func_768(iVar0))
		{
			*iParam2++;
		}
		if (__LIB_1__::func_768(iVar1))
		{
			*iParam2++;
		}
		if (__LIB_1__::func_768(iVar0) && __LIB_1__::func_768(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (__LIB_1__::func_768(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_1__::func_768(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (__LIB_1__::func_768(iVar0))
		{
			*iParam2++;
		}
		if (__LIB_1__::func_768(iVar1))
		{
			*iParam2++;
		}
		if (__LIB_1__::func_768(iVar2))
		{
			*iParam2++;
		}
		if ((__LIB_1__::func_768(iVar0) && __LIB_1__::func_768(iVar1)) && __LIB_1__::func_768(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (__LIB_1__::func_768(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_1__::func_768(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (__LIB_1__::func_768(iVar0))
		{
			*iParam2++;
		}
		if (__LIB_1__::func_768(iVar1))
		{
			*iParam2++;
		}
		if (__LIB_1__::func_768(iVar2))
		{
			*iParam2++;
		}
		if (__LIB_1__::func_768(iVar3))
		{
			*iParam2++;
		}
		if (((__LIB_1__::func_768(iVar0) && __LIB_1__::func_768(iVar1)) && __LIB_1__::func_768(iVar2)) && __LIB_1__::func_768(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_429(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 512)
	{
		if (__LIB_0__::func_27(iParam0, iVar0))
		{
		}
		iVar0 *= 2;
	}
}

int func_430(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if ((__LIB_0__::func_27(iParam0, 16777216) && __LIB_0__::func_27(iParam0, 33554432)) && __LIB_0__::func_27(iParam0, 268435456))
	{
		return joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_PISTOL"), iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_REVOLVER"), iParam1, iParam2, 0);
	iVar2 = joaat("WEAPON_SHOTGUN_SAWEDOFF");
	iVar3 = 0;
	if (!__LIB_0__::func_27(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!__LIB_0__::func_27(iParam0, 16777216))
	{
		if (!__LIB_0__::func_154(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar0, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!__LIB_0__::func_27(iParam0, 268435456) && __LIB_0__::func_214(iVar2))
	{
		if (!__LIB_0__::func_154(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!__LIB_0__::func_154(iVar3))
	{
		return joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	return iVar3;
}

bool func_431(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (__LIB_3__::func_287())
			{
				return true;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return true;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (__LIB_3__::func_236(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (__LIB_1__::func_85(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (__LIB_1__::func_85(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (__LIB_1__::func_85(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*uParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_188])) || !bParam3)
						{
							if ((uParam0->f_98[uParam0->f_188] * uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return true;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (__LIB_0__::func_62(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (__LIB_0__::func_62(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return false;
}

void func_432(int* iParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				__LIB_1__::func_483(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				__LIB_1__::func_484(iParam0->f_6, iParam0->f_5, 0);
			}
			__LIB_1__::func_221(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		__LIB_2__::func_360(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_433(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;
	bVar0 = false;
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!__LIB_1__::func_205(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = __LIB_3__::func_249(uParam0, bVar0);
		__LIB_3__::func_336(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, uParam0->f_98[iParam1]);
		if (__LIB_3__::func_280(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
}

bool func_434(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { __LIB_3__::func_357(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = __LIB_3__::func_361(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = __LIB_3__::func_403(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (__LIB_3__::func_395(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						__LIB_1__::func_991(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { __LIB_3__::func_357(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = __LIB_3__::func_361(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || __LIB_3__::func_325(&(uParam0->f_22)));
					Var2 = { __LIB_3__::func_357(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = __LIB_3__::func_361(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = __LIB_3__::func_403(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						__LIB_1__::func_571(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						__LIB_2__::func_133(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

bool func_435(var uParam0)
{
	if (__LIB_3__::func_211(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		__LIB_3__::func_373(uParam0->f_3);
		__LIB_3__::func_309(uParam0, 0, 1);
		__LIB_3__::func_404(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		__LIB_0__::func_703(0, 0);
		return true;
	}
	return false;
}

int func_436(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		__LIB_3__::func_346(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					__LIB_3__::func_346(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_3__::func_421(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (__LIB_3__::func_423(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				__LIB_3__::func_346(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

void func_437(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1);
		uParam0->f_1 = -1;
	}
}

void func_438(int iParam0)
{
	Global_1415398.f_3 = (MISC::GET_GAME_TIMER() + iParam0 * 1000);
}

bool func_439(int iParam0)
{
	return (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0, false));
}

void func_440(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

float func_441(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1f;
		case 1:
			return 30f;
		case 2:
			return 80f;
		default:
			break;
	}
	return -1f;
}

void func_442(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, bParam3);
		PED::_0xFC3DB99C8144CD81(iParam0, uParam1, iParam2, bParam3, 0);
	}
}

void func_443(int iParam0)
{
	PED::SET_PED_ACCURACY(iParam0, 100);
	PED::SET_PED_COMBAT_RANGE(iParam0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, false);
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
	PED::SET_COMBAT_FLOAT(iParam0, 12, 0.2f);
}

int func_444(char* sParam0, char* sParam1)
{
	return BUILTIN::CEIL((1000f * ENTITY::GET_ANIM_DURATION(sParam0, sParam1)));
}

void func_445(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		__LIB_3__::func_187(&((iParam0[iVar0 /*32*/])->f_1));
		__LIB_3__::func_187(&((iParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

int func_446(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_3__::func_410(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (Global_17504.f_1003[iVar0 /*6*/] == iVar1 || Global_17504.f_1003[iVar0 /*6*/] == -1)
		{
			Global_17504.f_1003[iVar0 /*6*/] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_447(int* iParam0, int iParam1, bool bParam2)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	__LIB_2__::func_73(iParam1, iParam0, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	if (bParam2)
	{
		__LIB_3__::func_356(iParam1, -1034486097, 1);
	}
	else
	{
		__LIB_3__::func_356(iParam1, 942020339, 1);
	}
}

Vector3 func_448(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			vVar0 = { PED::GET_PED_BONE_COORDS(iVar9, 21030, 0f, 0f, 0f) };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar3, &vVar6);
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar6) };
			vVar0.x = ((vVar3.x + vVar6.x) / 2f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2f);
			vVar0.f_2 = __LIB_0__::func_667(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (__LIB_0__::func_86(vVar0))
	{
	}
	return vVar0;
}

bool func_449(int iParam0)
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!__LIB_3__::func_289(iParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_450(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (__LIB_3__::func_287())
			{
				return 1;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return 1;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (__LIB_3__::func_236(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (__LIB_1__::func_85(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (__LIB_1__::func_85(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (__LIB_1__::func_85(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *iParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*iParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_188])) || !bParam3)
						{
							if ((uParam0->f_98[uParam0->f_188] * uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return 1;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (__LIB_0__::func_62(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (__LIB_0__::func_62(Global_36, vVar1) > fVar0)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *iParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return 1;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return 0;
}

bool func_451(var uParam0)
{
	if (__LIB_3__::func_211(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		__LIB_3__::func_424(uParam0->f_3);
		__LIB_3__::func_309(uParam0, 0, 1);
		__LIB_3__::func_404(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		__LIB_0__::func_703(0, 0);
		return true;
	}
	return false;
}

bool func_452(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bVar1 = false;
	fVar2 = __LIB_3__::func_249(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar1 = true;
		fVar3 = __LIB_0__::func_514(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				__LIB_3__::func_336(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			__LIB_3__::func_336(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (__LIB_3__::func_280(&(uParam0->f_121), iParam4, fParam1))
		{
			__LIB_3__::func_164(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				__LIB_3__::func_164(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(__LIB_3__::func_167(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_453(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_3__::func_396(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_3__::func_399(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_454(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || __LIB_3__::func_436(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_455(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	Stack.Push(iParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

void func_456(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && PED::IS_PED_IN_GROUP(iParam0))
	{
		PED::REMOVE_PED_FROM_GROUP(iParam0);
	}
}

void func_457(int iParam0, bool bParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 231, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, iParam0);
	}
}

int func_458(int iParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = ENTITY::_0x61914209C36EFDDB(iParam0);
		if (iVar0 == 1)
		{
			return iVar0;
		}
		else if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_459(int iParam0, int iParam1)
{
	__LIB_2__::func_930(iParam0, iParam1);
}

int func_460(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (__LIB_0__::func_27(*iParam1, 128))
	{
		if (!__LIB_0__::func_163(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!__LIB_1__::func_865(iVar2))
			{
				return 0;
			}
			if (!__LIB_0__::func_163(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (__LIB_1__::func_870(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!__LIB_0__::func_27(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((__LIB_0__::func_27(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			__LIB_1__::func_683(iParam1, 128);
			return 0;
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*iParam1 = 0;
			return 1;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!__LIB_1__::func_865(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!__LIB_0__::func_27(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!__LIB_0__::func_27(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (__LIB_0__::func_27(iParam2, 8192))
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (__LIB_0__::func_27(*iParam1, 2336))
		{
			if (!__LIB_1__::func_865(iVar2))
			{
			}
			if (__LIB_1__::func_866(iVar2, *iParam1))
			{
				__LIB_1__::func_681(iParam1, 32);
				__LIB_1__::func_681(iParam1, 256);
				__LIB_1__::func_681(iParam1, 2048);
				__LIB_1__::func_683(iParam1, 512);
				__LIB_1__::func_683(iParam1, 1024);
				__LIB_1__::func_683(iParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (__LIB_0__::func_27(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!__LIB_1__::func_865(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				__LIB_1__::func_681(iParam1, 64);
			}
		}
		if (__LIB_0__::func_27(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && __LIB_0__::func_27(iParam2, 1024))) || __LIB_0__::func_27(iParam2, 8)) && !__LIB_0__::func_27(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			__LIB_1__::func_683(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && __LIB_0__::func_27(iParam2, 4096)) && !__LIB_0__::func_27(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			__LIB_1__::func_683(iParam1, 2048);
			__LIB_1__::func_683(iParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && __LIB_0__::func_27(iParam2, 32)) && !__LIB_0__::func_27(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			__LIB_1__::func_683(iParam1, 256);
			__LIB_1__::func_683(iParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			__LIB_1__::func_683(iParam1, 64);
		}
		else if (!__LIB_0__::func_27(iParam2, 1))
		{
			if (!__LIB_0__::func_27(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (__LIB_1__::func_870(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!__LIB_0__::func_27(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			__LIB_1__::func_683(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			__LIB_1__::func_683(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			__LIB_1__::func_683(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	else if (!__LIB_0__::func_27(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		__LIB_1__::func_683(iParam1, 8);
	}
	return 0;
}

void func_461(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_3__::func_446(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_1 = iParam2;
}

void func_462(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_3__::func_158(uParam0[iVar0 /*17*/], bParam1);
		iVar0++;
	}
}

bool func_463(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!__LIB_2__::func_516(iParam0, 1))
		{
			return false;
		}
	}
	return __LIB_3__::func_347(iParam0, 0, bParam2) >= iParam1;
}

bool func_464(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_465(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
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
		__LIB_3__::func_406(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			__LIB_3__::func_406(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_466(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_163(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_344(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*uParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_467(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	int iVar0;
	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (__LIB_3__::func_354() || !__LIB_3__::func_434(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, fParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_468(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_171))
	{
		__LIB_3__::func_142(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	__LIB_3__::func_264(uParam0);
	__LIB_3__::func_311(uParam0);
	__LIB_3__::func_252(uParam0);
	if (!__LIB_3__::func_435(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		__LIB_1__::func_222(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		__LIB_1__::func_345();
	}
	if (!__LIB_1__::func_982(uParam0->f_3) && !__LIB_1__::func_85(uParam0->f_3, 256))
	{
		__LIB_2__::func_115(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	__LIB_0__::func_172(uParam0->f_173);
	__LIB_0__::func_172(uParam0->f_172);
}

void func_469(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam1, iParam2, -1f, 0.3f, 0.52f);
}

void func_470(var uParam0, int iParam1)
{
	if (__LIB_0__::func_27(uParam0->f_3, 8))
	{
		return;
	}
	if (__LIB_0__::func_27(uParam0->f_3, 2))
	{
		return;
	}
	switch (iParam1)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 64:
		case 128:
		case 256:
		case 512:
		case 1024:
		case 2048:
			__LIB_1__::func_336(&(uParam0->f_3), 1);
			break;
	}
	__LIB_1__::func_336(&(uParam0->f_3), 8);
}

int func_471()
{
	if (Global_1935630.f_40 != 0)
	{
		return 1;
	}
	if (WEAPON::_0x9E2D5D6BC97A5F1E(Global_35, joaat("WEAPON_UNARMED"), 5000) || WEAPON::_0x9E2D5D6BC97A5F1E(Global_35, joaat("WEAPON_MELEE_KNIFE"), 5000))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		return 1;
	}
	if (PED::IS_PED_BEING_JACKED(Global_35))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(Global_35, 90f))
	{
		return 1;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return 1;
	}
	return 0;
}

void func_472(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (bParam3)
	{
		iVar0 = iParam1;
		while (iVar0 <= iParam2)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
			{
				PED::SET_PED_CONFIG_FLAG((*uParam0)[iVar0], 494, true);
				PED::SET_PED_CONFIG_FLAG((*uParam0)[iVar0], 6, false);
			}
			iVar0++;
		}
	}
}

void func_473(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_3, 4))
	{
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_VANDALISM"), 0, 0, -1);
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_VANDALISM_VEHICLE"), 0, 0, -1);
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_TRAMPLE"), 3, 0, -1);
	}
}

void func_474(int iParam0)
{
	if (__LIB_0__::func_27(*iParam0, 8))
	{
		AUDIO::_0x660A8F876DF1D4F8(39);
		__LIB_0__::func_516(iParam0, 8);
	}
}

void func_475(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(iParam0, Global_36, 1);
	switch (iParam1)
	{
		case 1:
			fParam2 = 100f;
			fParam3 = 200f;
			iParam4 = 3000;
			iParam5 = 1000;
			iParam6 = 4000;
			break;
		case 2:
			fParam2 = 60f;
			fParam3 = 120f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1000;
			break;
		case 0:
			fParam2 = 75f;
			fParam3 = 140f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1500;
			break;
		case 3:
			if (fParam2 < 0f)
			{
			}
			if (fParam3 < 0f)
			{
			}
			if (iParam4 < 0)
			{
			}
			if (iParam5 < 0)
			{
			}
			break;
	}
	if (fParam2 >= fParam3)
	{
	}
	PED::_0x39A2FC5AF55A52B1(iParam0, iParam6);
	if (fParam7 > 0f)
	{
		PED::_0x7C08E7CB8D951B70(iParam0, fParam7);
	}
	PED::_0x36E4B61DC56DE77C(iParam0, fParam2, fParam3, iParam4, iParam5);
}

bool func_476(int iParam0, bool bParam1)
{
	if (((((__LIB_2__::func_386(iParam0, 780511057) || __LIB_2__::func_386(iParam0, -219932022)) || __LIB_2__::func_386(iParam0, 1120685857)) || __LIB_2__::func_386(iParam0, -2117564886)) || __LIB_2__::func_386(iParam0, 655999185)) || __LIB_2__::func_386(iParam0, 1345172471))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (__LIB_2__::func_386(iParam0, -653332088) || __LIB_2__::func_386(iParam0, 167901368))
		{
			return true;
		}
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_477(int iParam0, int iParam1)
{
	if (__LIB_3__::func_291(iParam0, 1) && __LIB_3__::func_291(iParam1, 1))
	{
		return true;
	}
	if (!(__LIB_3__::func_291(iParam0, 1) || __LIB_3__::func_291(iParam1, 1)))
	{
		return true;
	}
	return false;
}

void func_478(var uParam0)
{
	__LIB_1__::func_581(uParam0, 256);
}

bool func_479(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	int iVar0;
	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (__LIB_3__::func_354() || !__LIB_3__::func_434(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_480(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*12*/])->f_8))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((uParam0[iVar0 /*12*/])->f_8));
		}
		iVar0++;
	}
}

void func_481()
{
	Local_14.f_46 = 1;
}

void func_482(var uParam0, float fParam1)
{
	uParam0->f_26 = fParam1;
}

void func_483(var uParam0, int iParam1)
{
	__LIB_1__::func_336(uParam0, iParam1);
}

void func_484(var uParam0, int iParam1, bool bParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	if (bParam2)
	{
		fVar0 = 5f;
		if (fParam3 <= 0f)
		{
			fVar0 = 0f;
		}
		__LIB_2__::func_698(iParam1, fParam3, fVar0, fParam4, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
		PED::SET_PED_HEARING_RANGE(iParam1, fParam5);
	}
	else
	{
		__LIB_2__::func_698(iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
		PED::SET_PED_HEARING_RANGE(iParam1, 60f);
	}
}

void func_485(var uParam0)
{
	if (!__LIB_0__::func_27(*uParam0, 8))
	{
		AUDIO::_0x0D7FD6A55FD63AEF(39, 3, 0);
		__LIB_1__::func_336(uParam0, 8);
	}
}

void func_486(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(uParam0, 4);
	}
	else
	{
		__LIB_0__::func_516(uParam0, 4);
	}
}

void func_487()
{
	__LIB_2__::func_104(&(Local_14.f_5), 1);
	__LIB_2__::func_105(&(Local_14.f_5), 1);
	__LIB_2__::func_50(&(Local_14.f_5), 1);
	__LIB_2__::func_51(&(Local_14.f_5), 1);
	__LIB_2__::func_111(&(Local_14.f_5), 1);
	__LIB_2__::func_52(&(Local_14.f_5), 1);
	__LIB_2__::func_250(&(Local_14.f_5), 1);
	__LIB_2__::func_662(&(Local_14.f_5), 1);
	__LIB_2__::func_507(&(Local_14.f_5), 250);
}

bool func_488(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = __LIB_2__::func_704(iParam1);
	if (iParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (iParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = __LIB_0__::func_646(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1935630.f_44) || WEAPON::_IS_WEAPON_TORCH(Global_1935630.f_44))
			{
				if (iParam1->f_12 <= 5f)
				{
					if (__LIB_1__::func_380())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

void func_489(var uParam0, bool bParam1)
{
	__LIB_2__::func_325(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		__LIB_1__::func_422("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

bool func_490(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = 30f;
	fVar1 = 150f;
	if (__LIB_1__::func_85(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (__LIB_1__::func_923())
			{
				fVar0 = 15f;
			}
		}
		if (__LIB_3__::func_182(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!__LIB_3__::func_182(uParam2, fVar1))
		{
			if (!__LIB_2__::func_117(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!__LIB_3__::func_281(uParam2->f_3, 2) && __LIB_3__::func_290(2))
		{
			return false;
		}
		if (__LIB_1__::func_85(iParam0, 4194304) || __LIB_1__::func_85(iParam0, 33554432))
		{
			if (__LIB_1__::func_995(1))
			{
				return false;
			}
		}
	}
	if (__LIB_1__::func_376(Global_35))
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 1, 1) && !__LIB_1__::func_271(iParam0))
	{
		return false;
	}
	if (!*uParam1 && __LIB_1__::func_85(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (__LIB_3__::func_291(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (__LIB_3__::func_183())
		{
			return false;
		}
		iVar2 = __LIB_3__::func_250(__LIB_0__::func_12());
		if (__LIB_0__::func_625(iVar2))
		{
			if (__LIB_3__::func_184(Global_36, iVar2))
			{
				return false;
			}
		}
		if (__LIB_3__::func_251(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (__LIB_3__::func_263(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_491(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		__LIB_2__::func_344(uParam0);
		__LIB_2__::func_593(uParam1, uParam2);
	}
	__LIB_2__::func_56(*uParam0, 1, bParam4);
}

bool func_492(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_3__::func_396(iParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_3__::func_399(iParam0, iParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_493(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*uParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, uParam1[iVar0]))
				{
					__LIB_2__::func_32(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*uParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_468(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

char* func_494()
{
	return "SCRIPT_RE@SAVAGE_AFTERMATH@DEAD";
}

int func_495(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = (ENTITY::GET_ENTITY_MODEL(iParam0) + SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	PED::_0xCB1A3864C524F784(iParam0, iVar0);
	return iVar0;
}

bool func_496(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, MISC::GET_HASH_KEY(sParam1)))
			{
				return true;
			}
		}
	}
	return false;
}

char* func_497(char* sParam0, char* sParam1)
{
	return "ERR_STRING";
}

void func_498(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(uParam0, 32);
	}
	else
	{
		__LIB_0__::func_516(uParam0, 32);
	}
}

int func_499(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_3__::func_410(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (Global_17504.f_1003[iVar0 /*6*/] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_500(var uParam0)
{
	if (__LIB_0__::func_75(uParam0))
	{
		__LIB_0__::func_37(uParam0);
	}
}

bool func_501(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;
	fVar0 = __LIB_2__::func_709(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = __LIB_2__::func_709(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

void func_502(int iParam0, char* sParam1, char* sParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	__LIB_0__::func_854(iParam0, 1f, 0);
	TASK::TASK_PLAY_ANIM(iParam0, sParam1, sParam2, fParam3, fParam4, -1, 679940 | iParam5, 0f, false, iParam6, false, 0, false);
}

void func_503(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	Stack.Push(uParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

bool func_504(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0);
	}
	return false;
}

bool func_505(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	if (bParam1)
	{
	}
	return true;
}

void func_506(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!PED::DOES_GROUP_EXIST(*iParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam0, 279, bParam3);
	if (bParam2)
	{
		PED::SET_PED_AS_GROUP_LEADER(*uParam0, *iParam1, false);
	}
	else
	{
		PED::SET_PED_AS_GROUP_MEMBER(*uParam0, *iParam1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 280, bParam4);
		PED::_0xBAD2A311667A50D7(*uParam0, iParam5);
	}
	PED::_0x97C475212B327666(*iParam1, iParam6);
}

bool func_507(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 0)
	{
		return (__LIB_0__::func_485() - *uParam0) >= iParam1;
	}
	return false;
}

Vector3 func_508(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	vector3 vVar0;
	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

Vector3 func_509(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	fVar3 = BUILTIN::SIN(fParam3);
	fVar4 = BUILTIN::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

int func_510(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;
	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = __LIB_3__::func_360(uParam0, iParam1, iVar0, iParam2);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

int func_511(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				__LIB_1__::func_223(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_512(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (iParam2 == Global_1945938[iVar0 /*18*/].f_10 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		__LIB_1__::func_223(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, bParam12, bParam13);
		return iVar1;
	}
	return 0;
}

bool func_513(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!__LIB_0__::func_899(&uParam0))
	{
		return false;
	}
	if (__LIB_1__::func_592(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

bool func_514(float fParam0, float fParam1)
{
	if (!__LIB_0__::func_899(fParam0))
	{
		return false;
	}
	if (__LIB_1__::func_583(fParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_515(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !__LIB_1__::func_489(iParam0, 13))
	{
		__LIB_1__::func_471(iParam0, 0);
	}
	else
	{
		__LIB_1__::func_491(iParam0, 0);
	}
	if (__LIB_0__::func_139(iParam0->f_6))
	{
		if (bParam2)
		{
			__LIB_1__::func_281(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_516(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;
	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (__LIB_1__::func_923())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (__LIB_2__::func_118(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = __LIB_0__::func_665(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			__LIB_2__::func_259(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (__LIB_2__::func_86(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = __LIB_0__::func_55(__LIB_2__::func_122(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_517(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return true;
	}
	if (__LIB_1__::func_872(iParam0, fParam1, fParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

void func_518(float fParam0, vector3 vParam1, float fParam4, int iParam5)
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
	if (!__LIB_0__::func_51(&(fParam0->f_3), 32))
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
			fParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			fParam0->f_4 = iVar2;
		}
		else
		{
			fParam0->f_4 = iParam5;
		}
		CAM::_0x1F6EBD94680252CE(iVar1, -1082130432 /* Float: -1f */);
		CAM::_0xF48664E9C83825E3(iVar2, -1082130432 /* Float: -1f */);
	}
	else
	{
		fParam0->f_4 = iParam5;
	}
	__LIB_2__::func_259(fParam0);
	__LIB_0__::func_7(&(fParam0->f_3), 1);
}

bool func_519(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (__LIB_2__::func_362(iParam0, iParam1))
		{
			if (!__LIB_0__::func_27(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				__LIB_2__::func_624(uParam2, 0, 0, 1, 0);
				__LIB_1__::func_336(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (__LIB_0__::func_27(iParam1->f_10, 1))
		{
			__LIB_2__::func_363(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			__LIB_0__::func_516(&(iParam1->f_10), 1);
		}
	}
	return false;
}

void func_520(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		__LIB_2__::func_652(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_3__::func_312(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_3__::func_310(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_521(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (__LIB_2__::func_652(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			__LIB_3__::func_312(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_3__::func_310(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_3__::func_312(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_3__::func_310(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_522(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_2__::func_646(43))
		{
			if (__LIB_0__::func_192(iParam0, 412399755))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_01"));
				if (__LIB_0__::func_944() == 0)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_2__::func_649(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (__LIB_2__::func_626(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_3__::func_312(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (__LIB_2__::func_646(44))
		{
			if (__LIB_0__::func_192(iParam0, 709057512))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_02"));
				if (__LIB_0__::func_944() == 1)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_2__::func_649(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (__LIB_2__::func_626(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_3__::func_312(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_2__::func_646(45))
		{
			if (__LIB_0__::func_192(iParam0, -1478961327))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_03"));
				if (__LIB_0__::func_944() == 2)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_2__::func_649(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (__LIB_2__::func_626(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_3__::func_312(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_2__::func_646(46))
		{
			if (__LIB_0__::func_192(iParam0, -1238404098))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_04"));
				if (__LIB_0__::func_944() == 3)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_2__::func_649(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (__LIB_2__::func_626(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_3__::func_312(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_2__::func_646(47))
		{
			if (__LIB_0__::func_192(iParam0, 1160548794))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_05"));
				if (__LIB_0__::func_944() == 4)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_2__::func_649(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (__LIB_2__::func_626(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_3__::func_312(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_523(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_524(int iParam0)
{
	if (*iParam0 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(*iParam0);
		*iParam0 = 0;
	}
}

void func_525(var uParam0, var uParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x74C2B3DC0B294102(*uParam0);
		POPULATION::_0xA1CFB35069D23C23(*uParam0);
		VOLUME::_DELETE_VOLUME(*uParam0);
	}
	if (PED::_0x91A5F9CBEBB9D936(*uParam1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
	}
}

var func_526(var uParam0)
{
	return uParam0->f_51.f_3;
}

void func_527(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

bool func_528(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			return ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1);
		}
	}
	return false;
}

void func_529(int iParam0)
{
	Global_1395482.f_10 = (Global_1395482.f_10 || iParam0);
}

int func_530(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam2 != 2 && MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_95[iVar0 /*6*/])))
		{
			Global_1395482.f_95[iVar0 /*6*/].f_5 = iParam0;
			StringCopy(&(Global_1395482.f_95[iVar0 /*6*/]), sParam1, 32);
			Global_1395482.f_95[iVar0 /*6*/].f_4 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_531(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, vParam1, fParam4, bParam5, bParam6, bParam7, false);
	ENTITY::_0xA91E6CF94404E8C9(iVar0);
	return iVar0;
}

void func_532(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	if (bParam2)
	{
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 = (Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1);
}

void func_533(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_24 = iParam1;
	}
}

void func_534(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			iVar0 = 0;
			if (!WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, WEAPON::GET_BEST_PED_WEAPON(iParam0, false, false), true, 0, false, false);
			}
			if (WEAPON::_IS_WEAPON_ONE_HANDED(__LIB_1__::func_372(iParam0, 0)) || WEAPON::_IS_WEAPON_TWO_HANDED(__LIB_1__::func_372(iParam0, 0)))
			{
				if (bParam4)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam1, iParam2, bParam3, iParam5);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iParam1, iParam2, bParam3, iParam5);
				}
			}
		}
	}
}

int func_535(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, Global_1396084))
		{
			return 1;
		}
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1396084);
		DECORATOR::DECOR_SET_BOOL(iParam0, "pedRoam_bInPedRoam", true);
		__LIB_3__::func_327(iParam0, 0);
		__LIB_3__::func_328(iParam0, iParam1);
		__LIB_3__::func_389(iParam0, iParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam3);
			if (!__LIB_3__::func_329(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

void func_536(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_3__::func_446(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_3 = iParam2;
}

void func_537(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_3__::func_446(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_2 = iParam2;
}

void func_538(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_3__::func_446(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_4 = iParam2;
}

void func_539(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_3__::func_446(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_5 = iParam2;
}

int func_540(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && __LIB_3__::func_463(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (__LIB_0__::func_144(iVar25, 0) && __LIB_0__::func_192(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_541(var uParam0, int iParam1)
{
	*iParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

void func_542(var uParam0, int iParam1)
{
	uParam0->f_120 = iParam1;
}

int func_543(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			return "AA";
		case 1:
			return "AA_2";
		case 2:
			return "AM";
		case 3:
			return "AM_2";
		case 4:
			return "AP";
		case 5:
			return "AMD";
		case 6:
			return "BR";
		case 7:
			return "BT";
		case 8:
			return "BA";
		case 9:
			return "BTR";
		case 10:
			return "CA";
		case 11:
			return "CR";
		case 12:
			return "CP";
		case 13:
			return "CR";
		case 14:
			return "CQ";
		case 15:
			return "CC";
		case 16:
			return "CW";
		case 17:
			return "DAA";
		case 18:
			return "DAB";
		case 19:
			return "DAS";
		case 20:
			return "DJ";
		case 21:
			return "DIB";
		case 22:
			return "DOMD";
		case 23:
			return "DM";
		case 24:
			return "DC";
		case 25:
			return "DD";
		case 26:
			return "DW";
		case 27:
			return "ES";
		case 28:
			return "EX";
		case 29:
			return "FLO";
		case 30:
			return "FOOTR";
		case 31:
			return "FO";
		case 32:
			return "GP";
		case 33:
			return "HAT";
		case 34:
			return "HR";
		case 35:
			return "HR_2";
		case 36:
			return "HU";
		case 37:
			return "IK";
		case 38:
			return "IR";
		case 39:
			return "IT";
		case 40:
			return "KV";
		case 41:
			return "KT";
		case 42:
			return "KT_V2";
		case 64:
			return "KD";
		case 65:
			return "KS";
		case 43:
			return "LRU";
		case 44:
			return "GELRC";
		case 45:
			return "LSF";
		case 46:
			return "LP";
		case 47:
			return "LDRUNK";
		case 48:
			return "LDRUNK_V1";
		case 49:
			return "LDRUNK_V1_2";
		case 50:
			return "LDRUNK_V2";
		case 51:
			return "LDRUNK_V2_2";
		case 52:
			return "LF";
		case 53:
			return "MC";
		case 54:
			return "MC_2";
		case 55:
			return "OR";
		case 56:
			return "OT";
		case 57:
			return "PAR";
		case 58:
			return "PT";
		case 59:
			return "PP";
		case 60:
			return "PISS";
		case 61:
			return "PCA";
		case 62:
			return "PO";
		case 63:
			return "PW";
		case 66:
			return "RL";
		case 67:
			return "RP";
		case 68:
			return "RD";
		case 69:
			return "FND_STD";
		case 70:
			return "SAM";
		case 71:
			return "SAF";
		case 72:
			return "SOFF";
		case 73:
			return "SS";
		case 74:
			return "SB";
		case 75:
			return "SB_2";
		case 76:
			return "STR";
		case 77:
			return "STF";
		case 78:
			return "TC";
		case 79:
			return "TB";
		case 80:
			return "TC";
		case 81:
			return "TOWNR";
		case 82:
			return "TOWNR_2";
		case 83:
			return "TWW";
		case 84:
			return "TA";
		case 85:
			return "TGH";
		case 86:
			return "TWO";
		case 87:
			return "TWO_2";
		case 88:
			return "TH";
		case 89:
			return "WT";
		case 90:
			return "WA";
		case 91:
			return "WC";
		case 92:
			return "W";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

void func_544(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
}

void func_545(float fParam0)
{
	*fParam0 = 0;
	fParam0->f_2 = -1;
	fParam0->f_3 = 0;
	fParam0->f_4 = 0;
}

bool func_546(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10)
{
	bool bVar0;
	bool bVar1;
	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	return !bVar0;
}

int func_547(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return __LIB_2__::func_431(iParam0, vVar0, fParam2);
}

void func_548(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	if (bParam7)
	{
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			__LIB_1__::func_484(iParam0->f_6, iParam0->f_5, 0);
			__LIB_1__::func_221(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		__LIB_2__::func_360(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

bool func_549(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		__LIB_2__::func_521(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*iParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*iParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *iParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam2 = 2;
								__LIB_2__::func_196(iParam0, iParam1, *iParam2);
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
					if (*iParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *iParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *iParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam1, 1065353216 /* Float: 1f */))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*iParam2 = 4;
						__LIB_2__::func_196(iParam0, iParam1, *iParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*iParam2 = 256;
						__LIB_2__::func_196(iParam0, iParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (__LIB_2__::func_726(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*iParam2 = 131072;
				__LIB_2__::func_196(iParam0, iParam1, *iParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (__LIB_2__::func_622(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*iParam2 = 262144;
				__LIB_2__::func_196(iParam0, iParam1, *iParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_550(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_3__::func_464((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_551(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"):
		case joaat("WEAPON_SHOTGUN_SAWEDOFF"):
			return true;
		default:
			break;
	}
	return false;
}

void func_552(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "honor_block");
		}
	}
}

void func_553(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 512);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 512);
	}
}

int func_554(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bVar0 = (__LIB_0__::func_181() && !bParam2);
	switch (iParam0)
	{
		case 15:
		case 16:
			return 5;
		case 3:
		case 9:
			return 0;
		case 1:
			if (!bVar0 && !bParam1)
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 10:
			return 1;
		case 4:
		case 12:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
		case 0:
		case 11:
			return 2;
		case 5:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
	}
	return -1;
}

void func_555(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		__LIB_3__::func_527(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (__LIB_1__::func_85(uParam0->f_3, 1) && !__LIB_1__::func_85(uParam0->f_3, 32))
	{
		__LIB_3__::func_527(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (__LIB_1__::func_85(uParam0->f_3, 2) && !__LIB_1__::func_85(uParam0->f_3, 32))
	{
		__LIB_3__::func_527(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		__LIB_3__::func_241(uParam0->f_171, 1);
	}
	if (__LIB_1__::func_85(uParam0->f_3, 1))
	{
		__LIB_3__::func_527(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		__LIB_2__::func_43(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

int func_556(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		__LIB_3__::func_346(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					__LIB_3__::func_346(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_3__::func_369(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (__LIB_3__::func_423(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				__LIB_3__::func_346(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

void func_557(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_558(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_559(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		MAP::_BLIP_SET_MODIFIER(Global_36308[iParam0], iParam1);
	}
}

void func_560(var uParam0, var uParam1)
{
	uParam0->f_3 = __LIB_0__::func_81(uParam1);
	uParam0->f_161 = __LIB_0__::func_27(uParam1->f_2, 2);
}

void func_561(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, __LIB_0__::func_93());
	}
}

int func_562(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_499(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_5;
	}
	return -15;
}

bool func_563(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	if (__LIB_2__::func_805(iParam1))
	{
		return false;
	}
	return __LIB_1__::func_935(Global_1914319.f_3[iParam0 /*446*/].f_10, 1024);
}

int func_564(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_499(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_1;
	}
	return 0;
}

void func_565(var uParam0)
{
	if (__LIB_0__::func_51(&(uParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!__LIB_2__::func_519(uParam0) || __LIB_0__::func_51(&(uParam0->f_3), 4)) && !__LIB_0__::func_51(&(uParam0->f_3), 256))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_BEHIND"), false);
		}
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_NEXT_CAMERA"), false);
	}
	if (__LIB_2__::func_644(uParam0))
	{
		__LIB_1__::func_539();
	}
	if (!__LIB_0__::func_51(&(uParam0->f_3), 16))
	{
		if (__LIB_0__::func_75(uParam0))
		{
			if (__LIB_1__::func_871(uParam0) < uParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

void func_566(var uParam0, int iParam1)
{
	PED::_SET_PED_BODY_COMPONENT(*uParam0, iParam1);
	PED::_UPDATE_PED_VARIATION(*uParam0, false, true, true, true, false);
}

void func_567(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
}

int func_568(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	return iVar0;
}

bool func_569(int iParam0, var uParam1, var uParam2)
{
	if (!__LIB_0__::func_46(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RC");
			break;
		case 12:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_ART");
			break;
		case 16:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_COLLECT");
			break;
		default:
			return false;
	}
	return true;
}

void func_570(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 8192);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 8192);
	}
}

float func_571(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	var uVar10;
	var uVar11;
	if (__LIB_0__::func_86(vParam3))
	{
		return 0f;
	}
	if (PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &vVar0, &vVar3, &uVar9, &uVar10, &uVar11, false))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam3, vVar0, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vParam3, vVar3, true))
		{
			vVar6 = { vVar0 };
		}
		else
		{
			vVar6 = { vVar3 };
		}
		return __LIB_0__::func_152(vParam0, vVar6, 1);
	}
	return __LIB_0__::func_152(vParam3, vVar6, 1);
}

bool func_572(int iParam0, var uParam1, var uParam2)
{
	if (__LIB_2__::func_341(uParam2))
	{
		return true;
	}
	if (__LIB_3__::func_383(iParam0, &uParam1))
	{
		return true;
	}
	return false;
}

void func_573(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

int func_574(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 25;
		case 4:
			return 105;
		case 8:
			return 78;
		case 16:
			return 51;
		case 32:
			return 41;
		case 64:
			return 108;
		case 128:
			return 44;
		case 256:
			return 53;
		case 512:
			return 84;
		case 1024:
			return 22;
		case 2048:
			return 73;
		case 4096:
			return 103;
		case 8192:
			return 18;
		case 16384:
			return 46;
		case 32768:
			return 0;
		case 65536:
			return 106;
		case 131072:
			return 47;
		case 262144:
			return 101;
		default:
			break;
	}
	return -1;
}

int func_575(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 657250500;
		case 4:
			return -520696743;
		case 8:
			return -295901403;
		case 16:
			return -1445837674;
		case 32:
			return -75278298;
		case 64:
			return -675249331;
		case 128:
			return -1822243680;
		case 256:
			return -1307199059;
		case 512:
			return -17701163;
		case 1024:
			return -172170798;
		case 2048:
			return 1836682179;
		case 4096:
			return -67934460;
		case 8192:
			return 410776537;
		case 16384:
			return -240986174;
		case 32768:
			return 1505721140;
		case 65536:
			return 2023114891;
		case 131072:
			return -30217677;
		case 262144:
			return 653209800;
		default:
			break;
	}
	return 0;
}

int func_576(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 4:
			return 2;
		case 8:
			return 3;
		case 16:
			return 4;
		case 32:
			return 5;
		case 64:
			return 6;
		case 128:
			return 7;
		case 256:
			return 8;
		case 512:
			return 9;
		case 1024:
			return 10;
		case 2048:
			return 11;
		case 4096:
			return 12;
		case 8192:
			return 13;
		case 16384:
			return 14;
		case 32768:
			return 15;
		case 65536:
			return 16;
		case 131072:
			return 17;
		case 262144:
			return 18;
		default:
			break;
	}
	return 0;
}

bool func_578(var uParam0)
{
	return ENTITY::_0x8DE41E9902E85756(uParam0);
}

void func_579(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "scripted_loot_only", true);
		ENTITY::_0x8C03CD6B5E0E85E8(iParam0, joaat("EMPTY"));
	}
}

void func_580(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_targetRegion", iParam1);
}

void func_581(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, __LIB_0__::func_93());
	}
}

bool func_582()
{
	return !__LIB_0__::func_871();
}

void func_583(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		*iParam10 = __LIB_3__::func_326(iParam0, vParam1, iParam13, iParam14);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		if (!__LIB_0__::func_86(vParam4) || !__LIB_0__::func_86(vParam7))
		{
			__LIB_3__::func_331(*iParam10, vParam4, vParam7);
		}
		__LIB_2__::func_463(*iParam10, iParam11, iParam12, iParam15);
	}
}

int func_584(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = (iParam0 - 1);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = (iVar2 + __LIB_0__::func_44(iVar1, iParam1));
			iVar0++;
		}
	}
	return iVar2;
}

void func_585(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	iVar0 = 258;
	__LIB_2__::func_354(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

int func_586(int iParam0)
{
	struct<5> Var0;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

bool func_587(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || VOLUME::_DOES_VOLUME_EXIST(Global_1955500[iParam0 /*16*/].f_1))
		{
			if (!bParam2 || ENTITY::DOES_ENTITY_EXIST(Global_1955500[iParam0 /*16*/].f_2))
			{
				return true;
			}
		}
	}
	return false;
}

float func_588(var uParam0, int iParam1)
{
	return uParam0->f_98[iParam1];
}

void func_589(bool bParam0)
{
	if (bParam0)
	{
		__LIB_1__::func_336(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		__LIB_0__::func_516(&(Global_40.f_12019.f_42), 1);
	}
}

void func_590(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	__LIB_1__::func_561(&(iParam0->f_18));
}

bool func_591(vector3 vParam0, float fParam3)
{
	if (!__LIB_0__::func_51(&(fParam3->f_3), 8))
	{
		return true;
	}
	if (__LIB_1__::func_373(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

float func_592(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

void func_593(int iParam0)
{
	__LIB_1__::func_561(&uLocal_0);
	__LIB_0__::func_82(1, iParam0, 0);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_2__::func_348();
}

void func_594(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				__LIB_3__::func_561(iParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				__LIB_3__::func_557(iParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			__LIB_1__::func_266(iParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			__LIB_3__::func_558(iParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*iParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*iParam0, 0, 15);
		}
	}
}

void func_595(vector3 vParam0)
{
	if (!Global_1935630.f_12)
	{
		__LIB_2__::func_615(vParam0);
		__LIB_2__::func_616(vParam0);
	}
}

void func_596(var uParam0, bool bParam1)
{
	if (bParam1 || !__LIB_0__::func_899(uParam0))
	{
		__LIB_2__::func_259(uParam0);
	}
}

void func_597(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_1__::func_110(iParam0, iParam1, 1))
	{
		iVar0 = __LIB_0__::func_39(iParam1);
		iVar1 = __LIB_0__::func_710(iParam0);
		iVar2 = (__LIB_0__::func_710(iParam0) - __LIB_0__::func_710(iParam1));
		iVar3 = (__LIB_0__::func_39(iParam0) - __LIB_0__::func_39(iParam1));
		iVar4 = (__LIB_0__::func_40(iParam0) - __LIB_0__::func_40(iParam1));
		iVar5 = (__LIB_0__::func_41(iParam0) - __LIB_0__::func_41(iParam1));
		iVar6 = (__LIB_0__::func_42(iParam0) - __LIB_0__::func_42(iParam1));
		iVar7 = (__LIB_0__::func_43(iParam0) - __LIB_0__::func_43(iParam1));
	}
	else
	{
		iVar0 = __LIB_0__::func_39(iParam0);
		iVar1 = __LIB_0__::func_710(iParam1);
		iVar2 = (__LIB_0__::func_710(iParam1) - __LIB_0__::func_710(iParam0));
		iVar3 = (__LIB_0__::func_39(iParam1) - __LIB_0__::func_39(iParam0));
		iVar4 = (__LIB_0__::func_40(iParam1) - __LIB_0__::func_40(iParam0));
		iVar5 = (__LIB_0__::func_41(iParam1) - __LIB_0__::func_41(iParam0));
		iVar6 = (__LIB_0__::func_42(iParam1) - __LIB_0__::func_42(iParam0));
		iVar7 = (__LIB_0__::func_43(iParam1) - __LIB_0__::func_43(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + __LIB_0__::func_44(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(__LIB_0__::func_70(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

bool func_598(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = (!VOLUME::_DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (__LIB_2__::func_364(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

bool func_599(vector3 vParam0, float fParam3)
{
	float fVar0;
	fVar0 = __LIB_1__::func_874(vParam0, 1);
	return fVar0 < fParam3->f_6;
}

bool func_600(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return __LIB_3__::func_516(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_601(var uParam0, float fParam1)
{
	if (__LIB_3__::func_514(uParam0, fParam1))
	{
		__LIB_1__::func_561(uParam0);
		return true;
	}
	return false;
}

bool func_602(float fParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_IS_PLAYER_FREE_FOCUSING(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						__LIB_2__::func_259(fParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		__LIB_2__::func_259(fParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!__LIB_0__::func_899(fParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!__LIB_3__::func_514(fParam0, fParam2))
		{
			return true;
		}
		if (__LIB_0__::func_899(fParam0))
		{
			__LIB_1__::func_561(fParam0);
		}
	}
	return false;
}

int func_603(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (__LIB_1__::func_610(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_604(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_171))
	{
		__LIB_3__::func_142(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	__LIB_3__::func_264(uParam0);
	__LIB_3__::func_311(uParam0);
	__LIB_3__::func_252(uParam0);
	if (!__LIB_3__::func_451(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		__LIB_1__::func_222(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		__LIB_1__::func_345();
	}
	if (!__LIB_1__::func_982(uParam0->f_3) && !__LIB_1__::func_85(uParam0->f_3, 256))
	{
		__LIB_2__::func_115(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	__LIB_0__::func_172(uParam0->f_173);
	__LIB_0__::func_172(uParam0->f_172);
}

bool func_605(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_198(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_2__::func_221(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_606(var uParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	POPULATION::_0x74C2B3DC0B294102(*uParam0);
	POPULATION::_0xA1CFB35069D23C23(*uParam0);
	VOLUME::_DELETE_VOLUME(*uParam0);
}

char* func_607()
{
	return "HUD_Toast_Soundset";
}

void func_608(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	__LIB_0__::func_325(&iVar0);
}

void func_609(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	Global_40.f_11166[iParam0] = iParam1;
}

bool func_610(int iParam0, int iParam1)
{
	return (Global_20710.f_2092[iParam0] && iParam1) != 0;
}

void func_611(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = iParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

int func_612(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return joaat("PRRGS");
		case 43:
			return joaat("PRNBG");
		case 61:
			return joaat("PRSGS");
		case 73:
			return joaat("PRVDO");
		default:
			break;
	}
	return 0;
}

Vector3 func_613(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return 1325.468f, -1319.246f, 77.0711f;
		case 43:
			return 2719.43f, -1283.178f, 49.6495f;
		case 61:
			return -1789.8f, -385.6f, 160.3f;
		case 73:
			return -283.6743f, 804.662f, 118.3859f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

var func_614(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = UIFEED::_0x18D6869FBFFEC0F8(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

void func_615(int iParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = __LIB_0__::func_348(iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "honor_bank", MISC::ABSI(iVar0));
	}
}

void func_616(int iParam0)
{
	__LIB_1__::func_683(&(Global_1310750.f_16110), iParam0);
}

bool func_617(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_163(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_490(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*uParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_618(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_619(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, bParam2))
	{
		return uVar0;
	}
	return joaat("WEAPON_UNARMED");
}

void func_620(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 128);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 128);
	}
}

void func_621(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 20);
		if (bParam2)
		{
			MISC::SET_BIT(iParam0, 21);
		}
		else
		{
			MISC::CLEAR_BIT(iParam0, 21);
		}
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 20);
		MISC::CLEAR_BIT(iParam0, 21);
	}
}

void func_622(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(iVar0, true, false);
	TASK::TASK_STAND_STILL(iVar0, -1);
}

void func_623(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	__LIB_0__::func_37(&(uParam0->f_5));
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000f;
	uParam0->f_20 = 10f;
	uParam0->f_21 = 1f;
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_26), "", 32);
}

int func_624(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

bool func_625(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	float fVar0;
	fVar0 = __LIB_2__::func_709(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = __LIB_2__::func_709(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, bParam5, bParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

void func_626(int iParam0)
{
	__LIB_1__::func_683(iParam0, 2);
}

void func_627(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, bool bParam10, int iParam11, int iParam12)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam10)
		{
			__LIB_3__::func_561(iParam0, vParam1, vParam4, vParam7);
		}
		else
		{
			__LIB_1__::func_266(iParam0, vParam1, vParam4, vParam7);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, iParam11, iParam12, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*iParam0, iParam11, iParam12, 0, -1, -1, 0);
	}
}

bool func_628(int iParam0)
{
	if (__LIB_0__::func_181())
	{
		return false;
	}
	return __LIB_2__::func_271(Global_1347702[58 /*49*/].f_15, 1);
}

bool func_629(int iParam0)
{
	if (__LIB_3__::func_104())
	{
		return false;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_3__::func_463(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_630(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bVar3 = __LIB_3__::func_603(iParam0);
	if (__LIB_0__::func_192(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (__LIB_1__::func_750(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = __LIB_3__::func_115();
			}
			else
			{
				iVar0 = __LIB_3__::func_116();
			}
		}
		else if (__LIB_0__::func_27(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = __LIB_3__::func_117();
		}
		else
		{
			iVar0 = __LIB_3__::func_118();
		}
	}
	else if (__LIB_1__::func_610(&iVar2))
	{
		if (__LIB_0__::func_192(iVar2, -1303648999))
		{
			iVar0 = __LIB_3__::func_115();
		}
		else
		{
			iVar0 = __LIB_3__::func_116();
		}
	}
	else if (bVar1)
	{
		iVar0 = __LIB_3__::func_117();
	}
	else
	{
		iVar0 = __LIB_3__::func_118();
	}
	if (iVar0 != 0)
	{
		Global_1946804.f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

bool func_631(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || __LIB_3__::func_436(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_555(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

bool func_632(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8)
{
	uParam0->f_2 = iParam4;
	uParam0->f_3 = iParam6;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam5, sParam7, false, true);
	}
	else if (iParam4 != -1)
	{
		Stack.Push(sParam1);
		Stack.Push(iParam5);
		Stack.Push(iParam4);
		Call_Loc(iParam2);
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(StackVal, StackVal, StackVal, false, true);
	}
	else
	{
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam5, 0, false, true);
	}
	uParam0->f_4 = sParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_5 = iParam3;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		if (!bParam8)
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
		}
		return true;
	}
	return false;
}

bool func_633(var uParam0)
{
	if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
	{
		return true;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_1, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
	}
	return false;
}

bool func_634(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		if (bParam1 && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1, false))
		{
			return false;
		}
		if (bParam2 && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_1, false))
		{
			return false;
		}
		if (bParam3 && !ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
		{
			return false;
		}
		return true;
	}
	return false;
}

void func_635(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_1);
	}
}

bool func_636(int iParam0, float fParam1, float fParam2)
{
	return (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0) >= fParam1 && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0) <= fParam2);
}

void func_637(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (uParam0->f_15[iParam1] > -1)
		{
			Stack.Push(uParam0->f_1);
			Stack.Push(uParam0->f_15[iParam1]);
			Call_Loc(uParam0->f_6);
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(StackVal, StackVal);
		}
	}
	if (iParam1 >= 5 || iParam1 == -1)
	{
		return;
	}
	MISC::CLEAR_BIT(&(uParam0->f_8), iParam1);
	uParam0->f_15[iParam1] = -1;
	switch (iParam1)
	{
		case 1:
			uParam0->f_9 = 100;
			break;
		case 0:
			uParam0->f_13 = 0;
			uParam0->f_7 = 0;
			break;
		case 2:
			uParam0->f_10 = -1f;
			break;
		case 3:
			uParam0->f_14 = 0;
			uParam0->f_12 = 0;
			uParam0->f_11 = 0;
			break;
	}
}

void func_638(int iParam0, struct<4> Param1, float fParam5, int iParam6, float fParam7, int iParam8)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam0 == 0)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Param1, fParam5, iParam6, fParam7, iParam8, Param1.f_3);
	}
}

bool func_639(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;
	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::_IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, __LIB_0__::func_55((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

int func_640(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_641(var uParam0, int iParam1)
{
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	return !MISC::IS_STRING_NULL_OR_EMPTY(StackVal);
}

bool func_642(int iParam0, int iParam1)
{
	return (__LIB_3__::func_439(iParam0) || (ANIMSCENE::_GET_ANIM_SCENE_DURATION(iParam0) - ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0)) <= (BUILTIN::TO_FLOAT(iParam1) * 0.001f));
}

bool func_643(var uParam0, int iParam1, float fParam2)
{
	return __LIB_3__::func_588(uParam0, iParam1) <= fParam2;
}

void func_644(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(7), sParam1, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(10), sParam2, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	if (!bParam4)
	{
		__LIB_2__::func_602(uParam0[2 /*17*/], __LIB_2__::func_460(12), sParam3, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			__LIB_2__::func_411(uParam0[2 /*17*/], 0, 0);
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		__LIB_2__::func_411(uParam0[0 /*17*/], 0, 0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		__LIB_2__::func_411(uParam0[1 /*17*/], 0, 0);
	}
}

bool func_645(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_317(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_344(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*iParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

int func_646(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return 1;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_3__::func_396(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_3__::func_399(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_647(var uParam0, var uParam1, float fParam2, int iParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	float fVar0;
	__LIB_3__::func_398(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (__LIB_3__::func_193(uParam1, iParam5))
	{
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam6);
		}
	}
	if (__LIB_3__::func_452(uParam0, fParam2, 1114636288 /* Float: 60f */, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264 /* Float: 150f */, bParam14, 1))
	{
		return true;
	}
	return false;
}

void func_648(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

bool func_649(int iParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (PED::_GET_CARRIER_AS_PED(iParam1) != iParam0)
	{
		return false;
	}
	iVar0 = ENTITY::_0x61914209C36EFDDB(iParam1);
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar0 == 7)
	{
		return true;
	}
	return false;
}

void func_650(int iParam0, var uParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x74C2B3DC0B294102(*iParam0);
		POPULATION::_0xA1CFB35069D23C23(*iParam0);
		VOLUME::_DELETE_VOLUME(*iParam0);
	}
	if (PED::_0x91A5F9CBEBB9D936(*uParam1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
	}
}

bool func_651(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_652(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	*iParam3 = MAP::_BLIP_ADD_FOR_COORD(iParam4, vParam0);
	if (iParam7 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(*iParam3, iParam7);
	}
	if (iParam5 != 0)
	{
		MAP::SET_BLIP_SPRITE(*iParam3, iParam5, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam3, sParam6);
	}
}

int func_653()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_3__::func_587(iVar0, 1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_654(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1993529370:
			return 14;
		case -1910231185:
			return 27;
		case joaat("TSTAG_VAL_MUD3_ACTIVE_CHASE"):
			return 30;
		case -1751068532:
			return 19;
		case joaat("TSTAG_NO_TAGS"):
			return 0;
		case -1403291038:
			return 13;
		case joaat("TSTAG_VAL_MUD3_ACTIVE_RIDE_TO_VAL"):
			return 28;
		case -1132827806:
			return 18;
		case -1066004925:
			return 36;
		case -586199837:
			return 23;
		case -529686691:
			return 20;
		case joaat("TSTAG_VAL_MUD3_ACTIVE_GO_TO_STORE"):
			return 29;
		case joaat("TSTAG_LOCKDOWN"):
			return 9;
		case -415041951:
			return 3;
		case joaat("TSTAG_FLOW_PRE_BOUNTY_1"):
			return 15;
		case joaat("TSTAG_FIRST_VISIT"):
			return 1;
		case -115118166:
			return 8;
		case joaat("TSTAG_ENDLESS_SUMMER"):
			return 4;
		case 0:
			return 38;
		case 508286680:
			return 5;
		case joaat("TSTAG_LOCKDOWN_SALOON"):
			return 11;
		case 623901469:
			return 16;
		case joaat("TSTAG_VAL_MUD4_ACTIVE_WALK_WITH_JOHN"):
			return 31;
		case joaat("TSTAG_RHD_FEUD1_ACTIVE"):
			return 25;
		case 1274330613:
			return 22;
		case joaat("TSTAG_VAL_MUD5_ACTIVE_STEALTH_EXIT"):
			return 34;
		case 1398684735:
			return 26;
		case 1556254948:
			return 2;
		case joaat("TSTAG_RAIN"):
			return 6;
		case joaat("TSTAG_LOCKDOWN_PARTIAL"):
			return 10;
		case 1598344177:
			return 21;
		case joaat("TSTAG_VAL_MUD5_ACTIVE"):
			return 33;
		case joaat("TSTAG_VAL_MUD4_ACTIVE_GO_TO_SALOON"):
			return 32;
		case joaat("TSTAG_VHT_ODD_FELLOWS_1_ACTIVE"):
			return 35;
		case 1763394652:
			return 17;
		case joaat("TSTAG_LOCKDOWN_SALOON_SLUMS"):
			return 12;
		case joaat("TSTAG_RHD_SADIE1_ACTIVE"):
			return 24;
		case 1843135693:
			return 7;
		case 1869671285:
			return 37;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_655(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = 512;
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

float func_656(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	struct<4> Var0;
	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return 0f;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &Var0, true, sParam3, 2))
	{
		return Var0.f_3.f_2;
	}
	return 0f;
}

int func_657(int iParam0)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return 0;
	}
	return Global_17504.f_42[iParam0 /*8*/];
}

void func_658(int iParam0, int iParam1)
{
	if (__LIB_3__::func_587(iParam0, 1, 1))
	{
		__LIB_1__::func_683(&(Global_1955500[iParam0 /*16*/]), iParam1);
	}
}

int func_659(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = __LIB_3__::func_136(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && !bParam2)
	{
		return 0;
	}
	return iVar0;
}

void func_660(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		__LIB_3__::func_589(1);
	}
}

int func_661(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_624(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::_IS_PED_HOGTIED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

void func_662(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	__LIB_1__::func_422(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

bool func_663(var uParam0, int iParam1)
{
	if (__LIB_1__::func_313(&(uParam0->f_5), 5f))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam0->f_23, 2))
	{
		return true;
	}
	if (((!__LIB_0__::func_71(uParam0->f_1) && !__LIB_0__::func_163(uParam0->f_1, 501393341)) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true)) && !__LIB_0__::func_163(uParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_664(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_313(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam0->f_23, 4))
	{
		return true;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar1, true, 1, false);
	if (__LIB_0__::func_27(uParam0->f_23, 512) || (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED")))
	{
		return true;
	}
	return false;
}

bool func_665(var uParam0, int iParam1)
{
	if (__LIB_1__::func_313(&(uParam0->f_5), 15f))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam0->f_23, 4096) && __LIB_0__::func_163(uParam0->f_1, 1245594896))
	{
		return false;
	}
	if (__LIB_0__::func_27(uParam0->f_23, 256))
	{
		return true;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

void func_666(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iParam3 != 0)
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
		if (iVar0 != 0)
		{
			__LIB_3__::func_536(iParam0, iParam1, iVar0);
			__LIB_3__::func_537(iParam0, iParam1, __LIB_3__::func_495(iParam3));
		}
	}
	else if (iParam4 != 0)
	{
		__LIB_3__::func_536(iParam0, iParam1, iParam4);
		__LIB_3__::func_537(iParam0, iParam1, __LIB_3__::func_495(iParam3));
	}
	__LIB_3__::func_461(iParam0, iParam1, iParam2);
	__LIB_3__::func_538(iParam0, iParam1, __LIB_3__::func_343(1));
	__LIB_3__::func_539(iParam0, iParam1, __LIB_0__::func_23());
}

void func_667(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(uParam1->f_3), 1))
	{
		__LIB_3__::func_565(uParam1);
		if (__LIB_3__::func_517(iParam0, fParam7, fParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_2__::func_496(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

bool func_668(int iParam0, int iParam1)
{
	if (!__LIB_3__::func_628(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_669(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || __LIB_3__::func_556(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

bool func_670(var uParam0, int iParam1)
{
	var uVar0;
	if (__LIB_1__::func_313(&(uParam0->f_5), 4f))
	{
		return true;
	}
	if (!__LIB_0__::func_27(uParam0->f_23, 16384))
	{
		return true;
	}
	if (uParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!__LIB_1__::func_750(&uVar0))
	{
		return true;
	}
	return false;
}

int func_671()
{
	int iVar0;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	if (!__LIB_3__::func_629(iVar0))
	{
		return 0;
	}
	return __LIB_3__::func_630(iVar0, 0);
}

int func_672(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (((__LIB_0__::func_27(iParam0, 8388608) && __LIB_0__::func_27(iParam0, 1048576)) && __LIB_0__::func_27(iParam0, 2097152)) && __LIB_0__::func_27(iParam0, 4194304))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_REPEATER"), iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_RIFLE"), iParam1, iParam2, 0);
	iVar2 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SNIPER"), iParam1, iParam2, 0);
	iVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), iParam1, iParam2, 0);
	while (__LIB_3__::func_551(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
			Jump @189; //curOff = 164
		}
		else
		{
			iVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), iParam1, iParam2, 0);
		}
	}
	if (!__LIB_0__::func_214(iVar3))
	{
		iVar3 = joaat("WEAPON_REPEATER_CARBINE");
	}
	iVar5 = 0;
	if (!__LIB_0__::func_27(iParam0, 8388608))
	{
		iVar5 = iVar0;
	}
	if (!__LIB_0__::func_27(iParam0, 1048576))
	{
		if (!__LIB_0__::func_154(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar1, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!__LIB_0__::func_27(iParam0, 2097152))
	{
		if (!__LIB_0__::func_154(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar3, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!__LIB_0__::func_27(iParam0, 4194304))
	{
		if (!__LIB_0__::func_154(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!__LIB_0__::func_154(iVar5))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	return iVar5;
}

void func_673(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, iParam3, 2108, 51, 1);
	}
	else
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

int func_674(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_499(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_2;
	}
	return 0;
}

void func_675(var uParam0, int iParam1)
{
	uParam0->f_26 = iParam1;
}

void func_676(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_TO_RAGDOLL(iParam0, iParam1, iParam2, iParam3, false, false, bParam4);
	}
}

int func_677(int iParam0)
{
	return ENTITY::_GET_PED_ANIMAL_TYPE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
}

bool func_678(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		switch (*iParam4)
		{
			case 0:
				if (bParam8 && PED::IS_PED_ON_MOUNT(iParam0))
				{
					vVar0 = { __LIB_3__::func_508(iParam0, iParam1, sParam2, sParam3, 0) };
					if (!__LIB_0__::func_86(vVar0))
					{
						if (__LIB_0__::func_195(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, iVar5, 0, 0, 0, 0);
					*iParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					if (PED::_IS_PED_CARRYING(iParam0))
					{
						iVar6 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar6, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 2f, 8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_1__::func_474(iParam0, &iVar4, 0, 0, 1, 1);
					*iParam4 = 2;
				}
				break;
			case 1:
				if (!PED::IS_PED_ON_MOUNT(iParam0))
				{
					iVar3 = PED::_GET_LAST_MOUNT(iParam0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iVar3, iParam0, 6, 0, 4f, -1, 0);
					}
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_1__::func_474(iParam0, &iVar4, 0, 0, 1, 1);
					*iParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, iParam1))
					{
						return true;
					}
				}
				else if (__LIB_0__::func_163(iParam0, 242628503))
				{
					if (!bParam6 || TASK::GET_SEQUENCE_PROGRESS(iParam0) > 0)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, sParam3))
						{
							if (!ANIMSCENE::_0x3B393716C3FD8237(iParam0) && ANIMSCENE::_0x337F1CC8EE895601(iParam1, sParam2))
							{
								*iParam4 = 3;
								return true;
							}
						}
					}
				}
				break;
			case 3:
				return true;
		}
	}
	return false;
}

int func_679(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar5 > iParam2)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (__LIB_0__::func_125(iVar2))
				{
					if (!__LIB_0__::func_208(iVar2, uParam1))
					{
						if (iVar3 < *uParam0 && iVar3 < iParam2)
						{
							(*uParam0)[iVar3] = iVar2;
							iVar3++;
						}
					}
				}
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

bool func_680(int iParam0)
{
	struct<2> Var0;
	Var0 = { __LIB_0__::func_38(joaat("PLUCKED"), __LIB_0__::func_17(iParam0)) };
	return STATS::_STAT_ID_IS_VALID(&Var0);
}

struct<2> func_681(int iParam0)
{
	struct<2> Var0;
	Var0 = { __LIB_0__::func_38(joaat("SKINNED"), __LIB_0__::func_17(iParam0)) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		Var0 = { __LIB_0__::func_38(joaat("PLUCKED"), __LIB_0__::func_17(iParam0)) };
	}
	return Var0;
}

void func_682(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				__LIB_3__::func_581(iParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				__LIB_3__::func_557(iParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			__LIB_1__::func_266(iParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			__LIB_3__::func_558(iParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*iParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*iParam0, 0, 15);
		}
	}
}

void func_683(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_684(vector3 vParam0)
{
	TASK::TASK_LOOK_AT_COORD(Global_35, vParam0, 5000, 1024, 41, 0);
}

void func_685(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, __LIB_0__::func_93());
	}
}

void func_686(int iParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = __LIB_0__::func_348(iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "honor_override", MISC::ABSI(iVar0));
	}
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 60;
		case 1:
			return 50;
		case 2:
			return 30;
		case 3:
			return 60;
		case 4:
			return 60;
		case 10:
			return 50;
		case 79:
			return 50;
		case 14:
			return 50;
		case 80:
			return 50;
		case 82:
			return 50;
		case 87:
			return 50;
		case 90:
			return 50;
		case 27:
			return 50;
		case 28:
			return 60;
		case 31:
			return 50;
		case 32:
			return 50;
		case 33:
			return 50;
		case 34:
			return 50;
		case 37:
			return 30;
		case 97:
			return 30;
		case 38:
			return 30;
		case 39:
			return 30;
		case 40:
			return 30;
		case 100:
			return 30;
		case 102:
			return 30;
		case 45:
			return 50;
		case 48:
			return 50;
		case 49:
			return 50;
		case 50:
			return 50;
		case 106:
			return 60;
		case 107:
			return 60;
		case 54:
			return 60;
		case 109:
			return 50;
		case 62:
			return 50;
		case 115:
			return 50;
		case 119:
			return 50;
		default:
			break;
	}
	return 0;
	return 0;
}

void func_688(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 32768;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_689(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
	}
}

bool func_690(int iParam0)
{
	var uVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_0x4642182A298187D0(iParam0, -1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 2, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 4, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 5, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 10, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	return false;
}

int func_691(int iParam0)
{
	var uVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x4642182A298187D0(iParam0, -1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 2, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 4, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 5, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 10, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_692(int iParam0)
{
	Global_1395482.f_10 = (Global_1395482.f_10 - (Global_1395482.f_10 && iParam0));
}

float func_693(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	if (bParam9)
	{
		vParam0.f_2 = 0f;
		vParam3.f_2 = 0f;
		vParam6.f_2 = 0f;
	}
	fVar0 = BUILTIN::VDIST2(vParam0, vParam3);
	if (fVar0 == 0f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(vParam6, vParam0, true);
	}
	fVar1 = (__LIB_1__::func_95(vParam6 - vParam0, vParam3 - vParam0) / fVar0);
	if (fVar1 < 0f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(vParam6, vParam0, true);
	}
	else if (fVar1 > 1f)
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(vParam6, vParam3, true);
	}
	vVar2 = { vParam0 + Vector(fVar1, fVar1, fVar1) * vParam3 - vParam0 };
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vParam6, vVar2, true);
}

void func_694()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&(Global_1395482.f_80[iVar0 /*4*/]), "", 32);
		iVar0++;
	}
	Global_1395482.f_93 = 0;
}

void func_695(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_76(iParam0))
	{
		return;
	}
	if (__LIB_3__::func_186(iParam0, iParam1))
	{
		Global_1395482.f_2[iParam0] = (Global_1395482.f_2[iParam0] - (Global_1395482.f_2[iParam0] && iParam1));
	}
}

int func_696(var uParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
			DECORATOR::DECOR_SET_BOOL(*uParam0, "bDeadOrAlive", true);
		}
		DECORATOR::DECOR_SET_BOOL(*uParam0, "bIsCriminal", true);
		__LIB_3__::func_529(4);
		return 1;
	}
	return 0;
}

int func_697(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_624(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_INJURED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

int func_698(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	if (ENTITY::_0x9A100F1CF4546629(iParam0))
	{
		iVar0 = __LIB_3__::func_677(iParam0);
	}
	return iVar0;
}

void func_699(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;
	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
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
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		__LIB_1__::func_683(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	__LIB_1__::func_681(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
	}
}

int func_700(int iParam0)
{
	var uVar0;
	struct<2> Var1;
	if (!__LIB_0__::func_52(iParam0))
	{
		return 0;
	}
	Var1 = { __LIB_3__::func_681(iParam0) };
	if (STATS::STAT_ID_GET_INT(&Var1, &uVar0))
	{
		return uVar0;
	}
	return 0;
}

void func_701(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_616(iParam1);
	__LIB_0__::func_617(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		__LIB_1__::func_186(&(uParam0->f_26), iVar1);
		if (__LIB_3__::func_413(uParam0->f_26, &iVar0))
		{
			__LIB_0__::func_619(iVar0, iVar1);
		}
	}
}

int func_702(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (__LIB_3__::func_412(iVar1, &uVar0))
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
		__LIB_1__::func_807(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

bool func_703(float fParam0)
{
	return !__LIB_2__::func_227(fParam0, 1, 0, 0);
}

void func_704()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_3__::func_427(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_1__::func_132(1, iVar0, 0);
}

void func_705()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_3__::func_427(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_1__::func_132(2, iVar0, 0);
}

void func_706()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_3__::func_427(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_1__::func_132(0, iVar0, 0);
}

void func_707(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (__LIB_3__::func_425(&uVar0))
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

bool func_708(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_258(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (__LIB_0__::func_154(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (__LIB_1__::func_707(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		__LIB_1__::func_424(__LIB_0__::func_941(iParam0), __LIB_0__::func_776(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
			{
				__LIB_1__::func_240(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_708(0))
	{
		if (__LIB_0__::func_916(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return __LIB_3__::func_427(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_709(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*uParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, uParam1[iVar0]))
				{
					__LIB_2__::func_32(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*uParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_604(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

int func_710(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1935475[iVar0 /*2*/]) && Global_1935475[iVar0 /*2*/] == iParam0)
		{
			Global_1935475[iVar0 /*2*/].f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1935475[iVar0 /*2*/]))
		{
			Global_1935475[iVar0 /*2*/] = iParam0;
			Global_1935475[iVar0 /*2*/].f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_711(var uParam0, int iParam1)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, false);
		STREAMING::REMOVE_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
		__LIB_1__::func_336(&(uParam0->f_1), 4);
	}
}

int func_712(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam1[iVar0 /*9*/])->f_6))
		{
			(uParam1[iVar0 /*9*/])->f_6 = uParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_713(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
			return 300f;
		case 2:
			return 1000f;
		default:
			break;
	}
	return 300f;
}

float func_714(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 25f;
		case 1:
			return 40f;
		case 3:
			return 200f;
		case 4:
			return 180f;
		case 2:
			return 150f;
		default:
			break;
	}
	return 128f;
}

float func_715(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1f;
		case 3:
			return 0.8f;
		case 4:
			return 0.5f;
		case 0:
			return 0.6f;
		case 2:
			return 0.9f;
		default:
			break;
	}
	return 1f;
}

float func_716(vector3 vParam0, float fParam3)
{
	if (fParam3 > 0f)
	{
		return fParam3;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vParam0, true);
}

float func_717(float fParam0)
{
	float fVar0;
	if (fParam0 < 250f)
	{
		if (fParam0 < 50f)
		{
			fVar0 = 0.25f;
		}
		else if (fParam0 < 100f)
		{
			fVar0 = 0.5f;
		}
		else if (fParam0 < 150f)
		{
			fVar0 = 1f;
		}
		else if (fParam0 < 200f)
		{
			fVar0 = 1.5f;
		}
		else if (fParam0 < 250f)
		{
			fVar0 = 2f;
		}
	}
	else if (fParam0 < 500f)
	{
		if (fParam0 < 300f)
		{
			fVar0 = 2.5f;
		}
		else if (fParam0 < 350f)
		{
			fVar0 = 3f;
		}
		else if (fParam0 < 400f)
		{
			fVar0 = 3.5f;
		}
		else if (fParam0 < 450f)
		{
			fVar0 = 4f;
		}
		else if (fParam0 < 500f)
		{
			fVar0 = 4.5f;
		}
	}
	else if (fParam0 < 750f)
	{
		if (fParam0 < 550f)
		{
			fVar0 = 5f;
		}
		else if (fParam0 < 600f)
		{
			fVar0 = 5.5f;
		}
		else if (fParam0 < 650f)
		{
			fVar0 = 6f;
		}
		else if (fParam0 < 700f)
		{
			fVar0 = 6.5f;
		}
		else if (fParam0 < 750f)
		{
			fVar0 = 7f;
		}
	}
	else if (fParam0 < 1000f)
	{
		if (fParam0 < 800f)
		{
			fVar0 = 7.5f;
		}
		else if (fParam0 < 850f)
		{
			fVar0 = 8f;
		}
		else if (fParam0 < 900f)
		{
			fVar0 = 8.5f;
		}
		else if (fParam0 < 950f)
		{
			fVar0 = 9f;
		}
		else if (fParam0 < 1000f)
		{
			fVar0 = 9.5f;
		}
	}
	else
	{
		fVar0 = 10f;
	}
	return fVar0;
}

int func_718()
{
	switch (__LIB_0__::func_2())
	{
		case 0:
			return PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		default:
			break;
	}
	return Global_35;
}

void func_719(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, bool bParam7)
{
	float fVar0;
	if (!bParam7 || !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		fVar0 = __LIB_0__::func_636(Global_36, ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
		if ((!__LIB_0__::func_27(iParam3, 4) && !uParam0->f_182) && fVar0 >= fParam4)
		{
			__LIB_3__::func_209(uParam0, iParam1, 1);
		}
		else if (__LIB_0__::func_27(iParam3, 4) || (!__LIB_0__::func_27(iParam3, 2) || uParam0->f_182))
		{
			if (iParam2 != 0 && fVar0 >= fParam5)
			{
				if (iParam6 <= -1 || uParam0->f_180 < iParam6)
				{
					__LIB_2__::func_315(iParam2, iParam1, 1);
					if (!__LIB_0__::func_27(iParam3, 4))
					{
						if (__LIB_0__::func_27(iParam3, 1))
						{
							if (!uParam0->f_182)
							{
								uParam0->f_182 = 1;
							}
						}
					}
					if (iParam6 <= -1)
					{
						uParam0->f_180++;
					}
				}
			}
		}
	}
}

int func_720(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_46(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_28())
	{
		return 0;
	}
	if (!__LIB_3__::func_569(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_721(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_3__::func_653();
	if (iVar0 == -1)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return -1;
	}
	if ((iVar0 > -1 && iVar0 < 4) && VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		Global_1955500[iVar0 /*16*/].f_1 = iParam1;
		Global_1955500[iVar0 /*16*/].f_2 = iParam0;
		Global_1955500[iVar0 /*16*/] = 0;
		Global_1955500[iVar0 /*16*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (__LIB_0__::func_27(iParam2, 128))
		{
			PED::_0x7C00CFC48A782DC0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (__LIB_0__::func_27(Global_1955500[iVar0 /*16*/], 0))
		{
			__LIB_3__::func_658(iVar0, 1024);
			__LIB_3__::func_658(iVar0, 16);
			__LIB_3__::func_658(iVar0, 256);
		}
		__LIB_3__::func_658(iVar0, iParam2);
	}
	return iVar0;
}

bool func_722(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		__LIB_2__::func_521(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*iParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*iParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *iParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam2 = 2;
								__LIB_2__::func_196(iParam0, iParam1, *iParam2);
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
					if (*iParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *iParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *iParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam1, 1065353216 /* Float: 1f */))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*iParam2 = 4;
						__LIB_2__::func_196(iParam0, iParam1, *iParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*iParam2 = 256;
						__LIB_2__::func_196(iParam0, iParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (__LIB_3__::func_488(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*iParam2 = 131072;
				__LIB_2__::func_196(iParam0, iParam1, *iParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (__LIB_2__::func_622(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*iParam2 = 262144;
				__LIB_2__::func_196(iParam0, iParam1, *iParam2);
				return true;
			}
		}
	}
	return false;
}

void func_723(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (__LIB_2__::func_591(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				__LIB_3__::func_520(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				__LIB_3__::func_521(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_724(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
	}
}

bool func_725(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return VOLUME::_DOES_VOLUME_EXIST(iParam0);
}

void func_726(struct<6> Param0, var uParam6)
{
	if (VOLUME::_DOES_VOLUME_EXIST(Param0))
	{
		VOLUME::_DELETE_VOLUME(Param0);
	}
	Param0.f_1 = 0;
	Param0.f_2 = -1;
	Param0.f_3 = -1;
	Param0.f_4 = 0;
	if (MAP::DOES_BLIP_EXIST(Param0.f_5))
	{
		MAP::REMOVE_BLIP(&(Param0.f_5));
	}
}

void func_727(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_728(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_729(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1048576;
	if (bParam1)
	{
		iVar0 |= 131072;
	}
	if (bParam2)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_730(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

float func_731(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vVar0 = { vParam3 - vParam0 };
	if (vVar0.y == 0f)
	{
		if (vVar0.x < 0f)
		{
			return -90f;
		}
		else
		{
			return 90f;
		}
	}
	return MISC::ATAN2(vVar0.x, vVar0.y);
}

void func_732(int iParam0)
{
	__LIB_0__::func_82(1, iParam0, 0);
}

int func_733(int iParam0)
{
	var uVar0;
	uVar0 = Global_1347702[iParam0 /*49*/].f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

int func_734(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0 || Global_1347702[iParam0 /*49*/].f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

void func_735(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

bool func_736(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

int func_737(int iParam0)
{
	if (iParam0 == 15)
	{
		return 65539;
	}
	return 7;
}

bool func_738(int iParam0, int iParam1)
{
	if (__LIB_3__::func_587(iParam0, 1, 1))
	{
		return __LIB_0__::func_27(Global_1955500[iParam0 /*16*/], iParam1);
	}
	return false;
}

void func_739(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

bool func_740(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

var func_741(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	return __LIB_0__::func_565(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

bool func_742(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	return PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0);
}

bool func_743(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_771(iParam0);
	return (*iParam1 && iVar0) != 0;
}

Vector3 func_744(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_745(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

bool func_746(int iParam0)
{
	if (iParam0 != 0)
	{
		return true;
	}
	return false;
}

void func_747(var uParam0)
{
	struct<5> Var0;
	Var0 = joaat("TSTAG_NO_TAGS");
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_748(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iParam0->f_1 = 0;
		__LIB_2__::func_613(iParam0, 1);
		__LIB_2__::func_715(iParam0, 1);
		__LIB_2__::func_180(iParam0, 1);
		__LIB_3__::func_230(iParam0, 1);
		__LIB_3__::func_231(iParam0, 1);
		__LIB_3__::func_232(iParam0, 1);
		__LIB_3__::func_233(iParam0, 1);
	}
	else
	{
		iParam0->f_1 = -1;
		__LIB_2__::func_613(iParam0, 0);
		__LIB_2__::func_715(iParam0, 0);
		__LIB_2__::func_180(iParam0, 0);
		__LIB_3__::func_230(iParam0, 0);
		__LIB_3__::func_231(iParam0, 0);
		__LIB_3__::func_232(iParam0, 0);
		__LIB_3__::func_233(iParam0, 0);
	}
}

int func_749(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_718();
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return -1;
	}
	return Global_1955499;
}

bool func_750(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			return true;
		}
	}
	if (__LIB_1__::func_378(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, fParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

bool func_751(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_83(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_752(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_3__::func_654(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_753(var uParam0, vector3 vParam1, float fParam4)
{
	if (__LIB_2__::func_1(*uParam0, 0, 1) && __LIB_0__::func_94(*uParam0, vParam1, 0) < fParam4)
	{
		PED::SET_PED_RESET_FLAG(*uParam0, 94, true);
		PED::_0xC6981AFF6D2A71C2(*uParam0);
	}
}

void func_754(var uParam0)
{
	__LIB_1__::func_581(uParam0, 2);
}

void func_755(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			__LIB_3__::func_660(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		__LIB_3__::func_589(1);
	}
}

bool func_756(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			__LIB_1__::func_148(&(iParam1->f_18));
			return false;
		}
		else if (__LIB_0__::func_75(&(iParam1->f_18)))
		{
			__LIB_0__::func_37(&(iParam1->f_18));
			return false;
		}
	}
	if (!__LIB_0__::func_75(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return __LIB_1__::func_313(&(iParam1->f_18), fParam2);
	return true;
}

bool func_757(int iParam0, int iParam1, var uParam2)
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

void func_758(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			__LIB_3__::func_350(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_759(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || __LIB_3__::func_556(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_555(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_760()
{
	int iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1911643.f_3, false);
	iVar0 = 0;
	while (iVar0 < Global_1911643)
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1911643.f_5[iVar0 /*3*/]);
		iVar0++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1911643.f_4);
	Global_1911643 = 0;
	Global_1911643.f_1 = 0;
}

bool func_761(var uParam0, int iParam1)
{
	return (uParam0->f_88 && iParam1) != 0;
}

void func_762(var uParam0, int iParam1)
{
	uParam0->f_55 = iParam1;
}

bool func_763(struct<7> Param0)
{
	vector3 vVar0;
	if (!__LIB_3__::func_725(Param0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Param0.f_1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Param0.f_1))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Param0.f_1, true, false) };
	if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Param0, vVar0))
	{
		switch (Param0.f_3)
		{
			case 2:
				if (!PED::IS_PED_ON_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
				{
					return false;
				}
				break;
			case 4:
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
				{
					return false;
				}
				break;
			case 1:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)) || PED::IS_PED_ON_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
				{
					return false;
				}
				break;
		}
		return true;
	}
	return false;
}

bool func_764(var uParam0)
{
	if (__LIB_0__::func_239(uParam0, 33554432))
	{
		return true;
	}
	if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		return true;
	}
	return false;
}

void func_765()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
}

bool func_766(var uParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		__LIB_0__::func_240(uParam1, 4096);
		return true;
	}
	else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		__LIB_0__::func_240(uParam1, 4096);
		return true;
	}
	return false;
}

int func_767(var uParam0, var uParam1)
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("MGDUL"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_DUEL@REPOSITION@BASE"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_65))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_66))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_DUEL@PLAYER@ACTION"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_DUEL@PLAYER@NORMAL"))
	{
		return 0;
	}
	return 1;
}

float func_768(var uParam0)
{
	switch (uParam0->f_89)
	{
		case 3:
			return 0.22f;
		case 0:
			return 0.28f;
		case 1:
			return 0.34f;
		case 2:
			return 0.44f;
		case 4:
			return 0.28f;
		default:
			break;
	}
	return 0.25f;
}

bool func_769(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	return false;
}

void func_770(int iParam0)
{
	__LIB_1__::func_336(&(Global_1935369.f_39), iParam0);
}

void func_771(int iParam0)
{
	__LIB_0__::func_516(&(Global_1935369.f_39), iParam0);
}

bool func_772(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(*iParam0))
	{
		return false;
	}
	if (*iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_SHOTGUN(*iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_PISTOL(*iParam0) || WEAPON::_IS_WEAPON_REVOLVER(*iParam0))
	{
		return true;
	}
	return false;
}

struct<7> func_773(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, var uParam5)
{
	struct<7> Var0;
	Var0.f_3 = -1;
	Var0.f_6 = 1;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return Var0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return Var0;
	}
	Var0 = iParam2;
	if (VOLUME::_DOES_VOLUME_EXIST(Var0))
	{
		Var0.f_1 = iParam1;
		Var0.f_2 = iParam0;
		Var0.f_3 = iParam3;
		if (bParam4)
		{
			Var0.f_5 = MAP::_BLIP_ADD_FOR_COORD(408396114, VOLUME::_GET_VOLUME_COORDS(Var0));
		}
		Var0.f_4 = 0;
		Var0.f_6 = uParam5;
		return Var0;
	}
	return Var0;
}

int func_774(var uParam0)
{
	return uParam0->f_57;
}

void func_775(var uParam0, int iParam1)
{
	uParam0->f_88 = (uParam0->f_88 || iParam1);
}

int func_776(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8, char* sParam9)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		sParam9 = __LIB_0__::func_93();
	}
	return VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0 - vParam3 * Vector(0.5f, 0.5f, 0.5f) + vParam3, 0f, 0f, -__LIB_3__::func_731(vParam0, vParam3), fParam6, (BUILTIN::VDIST(vParam0, vParam3) + (fParam8 * 2f)), fParam7, sParam9);
}

void func_777(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 3:
			uParam1->f_12 = 2f;
			break;
		case 0:
			uParam1->f_12 = 2f;
			break;
		case 1:
			uParam1->f_12 = 2f;
			break;
		case 2:
			uParam1->f_12 = 2f;
			break;
		case 4:
			uParam1->f_12 = 2f;
			break;
	}
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), uParam1->f_12);
}

void func_778(var uParam0, int iParam1)
{
	uParam0->f_56 = iParam1;
}

int func_779(vector3 vParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__::func_86(Global_1425351[iVar0 /*3*/]))
		{
			Global_1425351[iVar0 /*3*/] = { vParam0 };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_780(var uParam0)
{
	if (uParam0->f_67 == 1)
	{
		if (__LIB_0__::func_27(Global_40.f_9145, 1))
		{
			__LIB_0__::func_516(&(Global_40.f_9145), 1);
		}
	}
}

void func_781()
{
	if (CAM::_0x1204EB53A5FBC63D())
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
	}
}

void func_782(var uParam0, struct<21> Param1, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94)
{
	vector3 vVar0;
	if (!__LIB_0__::func_86(uParam0->f_51[0 /*3*/]))
	{
		vVar0 = { uParam0->f_51[0 /*3*/] };
	}
	else
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 0.4567f, -1.6522f, 0.4558f) };
	}
	if (CAM::DOES_CAM_EXIST(Param1.f_20[0]))
	{
		CAM::SET_CAM_COORD(Param1.f_20[0], vVar0);
		if (uParam0->f_75[0])
		{
			CAM::ATTACH_CAM_TO_ENTITY(Param1.f_20[0], Global_35, vVar0, true);
		}
		if (!__LIB_0__::func_86(uParam0->f_61[0 /*3*/]))
		{
			CAM::SET_CAM_ROT(Param1.f_20[0], uParam0->f_61[0 /*3*/], 2);
		}
		else
		{
			CAM::POINT_CAM_AT_ENTITY(Param1.f_20[0], *uParam0, 0.3524f, 1.3349f, 0.1018f, true);
		}
		if (uParam0->f_71[0] > 0f)
		{
			CAM::SET_CAM_FOV(Param1.f_20[0], uParam0->f_71[0]);
		}
		else
		{
			CAM::SET_CAM_FOV(Param1.f_20[0], 35f);
		}
	}
}

int func_783(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_REVOLVER_DOUBLEACTION");
		case 1:
			return joaat("WEAPON_PISTOL_SEMIAUTO");
		case 2:
			return joaat("WEAPON_REVOLVER_SCHOFIELD");
		case 3:
			return joaat("WEAPON_PISTOL_VOLCANIC");
		case 4:
			return joaat("WEAPON_REVOLVER_CATTLEMAN");
		default:
			break;
	}
	return 0;
}

Vector3 func_784()
{
	vector3 vVar0[24];
	StringCopy(&cVar0, "eDuelResult", 24);
	return cVar0;
}

float func_785(var uParam0)
{
	switch (uParam0->f_89)
	{
		case 3:
			return 0.2f;
		case 0:
			return 0.25f;
		case 1:
			return 0.31f;
		case 2:
			return 0.4f;
		case 4:
			return 0.25f;
		default:
			break;
	}
	return 0.25f;
}

bool func_786(var uParam0)
{
	int iVar0;
	iVar0 = PAD::_0xBD629C1C4F501C80(0);
	if (iVar0 != uParam0->f_69)
	{
		uParam0->f_69 = iVar0;
		return true;
	}
	return false;
}

void func_787(int iParam0)
{
	bool bVar0;
	if (iParam0 >= Global_1911643 || iParam0 < 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1911643.f_5[Global_1911643.f_1 /*3*/].f_2, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1911643.f_5[Global_1911643.f_1 /*3*/].f_1, false);
	bVar0 = iParam0 < Global_1911643.f_1;
	Global_1911643.f_1 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1911643.f_5[Global_1911643.f_1 /*3*/].f_1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1911643.f_5[Global_1911643.f_1 /*3*/].f_2, bVar0);
}

bool func_788(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam1->f_58, 512))
	{
		return true;
	}
	if (!__LIB_0__::func_239(uParam1, 524288))
	{
		if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			__LIB_0__::func_240(uParam1, 524288);
		}
	}
	else
	{
		iVar2 = __LIB_0__::func_153(*uParam0, 0, 1, 0);
		if (iVar2 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::GET_AMMO_IN_CLIP(*uParam0, &iVar0, iVar2);
			if (iVar0 <= 0)
			{
				WEAPON::_GET_PED_WEAPON_INVENTORY_UID(*uParam0, 0, &uVar3);
				WEAPON::_GET_AMMO_IN_CLIP_BY_INVENTORY_UID(*uParam0, &iVar0, &uVar3);
			}
			iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, iVar2, true);
		}
		if (iVar1 == iVar0 && !PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			if (bParam2)
			{
				__LIB_1__::func_336(&(uParam1->f_58), 512);
			}
			return true;
		}
	}
	return false;
}

bool func_789(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	if (__LIB_0__::func_27(uParam1->f_58, 256))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (WEAPON::GET_AMMO_IN_CLIP(*uParam0, &iVar0, uParam0->f_48))
	{
		if (iVar0 <= 0)
		{
			if (__LIB_0__::func_154(__LIB_0__::func_399(*uParam0, 1, 0, 0)))
			{
				WEAPON::_GET_PED_WEAPON_INVENTORY_UID(*uParam0, 0, &uVar1);
			}
			else
			{
				WEAPON::_GET_PED_WEAPON_INVENTORY_UID(*uParam0, 2, &uVar1);
			}
			WEAPON::_GET_AMMO_IN_CLIP_BY_INVENTORY_UID(*uParam0, &iVar0, &uVar1);
			if (iVar0 <= 0)
			{
				if (bParam2)
				{
					__LIB_1__::func_336(&(uParam1->f_58), 256);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_790(var uParam0, var uParam1, bool bParam2)
{
	if (__LIB_0__::func_27(uParam1->f_58, 4))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		if (bParam2)
		{
			__LIB_1__::func_336(&(uParam1->f_58), 4);
		}
		return true;
	}
	return false;
}

void func_791(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	while (iVar0 <= 512)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_27(uParam0->f_58, iVar1))
		{
		}
		iVar0 *= 2;
	}
}

int func_792(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_58, 2))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		iVar0 = 1;
		if (bParam2)
		{
			__LIB_1__::func_336(&(uParam1->f_58), 2);
		}
	}
	return iVar0;
}

char* func_793()
{
	return "bPickupThisCorpse";
}

void func_794(int iParam0)
{
	__LIB_1__::func_336(&(Global_1425351.f_17), iParam0);
}

bool func_795(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 16731:
			case 16732:
			case 16733:
			case 16734:
			case 16747:
			case 16748:
			case 16749:
			case 16750:
			case 16763:
			case 16764:
			case 16765:
			case 16766:
			case 16779:
			case 16780:
			case 16781:
			case 16782:
			case 16827:
			case 16828:
			case 16829:
			case 22798:
			case 46065:
			case 54187:
			case 54802:
				return true;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 30226:
			case 34606:
			case 37873:
			case 41307:
			case 41308:
			case 41309:
			case 41310:
			case 41323:
			case 41324:
			case 41325:
			case 41326:
			case 41339:
			case 41340:
			case 41341:
			case 41342:
			case 41355:
			case 41356:
			case 41357:
			case 41358:
			case 41403:
			case 41404:
			case 41405:
			case 53675:
				return true;
			default:
				break;
		}
	}
	return false;
}

bool func_796(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_A_PED(iParam0) && !ENTITY::IS_ENTITY_A_VEHICLE(iParam0)) && !ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return false;
	}
	return true;
}

bool func_797(int iParam0)
{
	switch (iParam0)
	{
		case 14283:
		case 14284:
		case 14285:
		case 21030:
			return true;
		default:
			break;
	}
	return false;
}

bool func_798(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 11569:
		case 14410:
		case 14411:
		case 14412:
		case 14413:
		case 14414:
		case 14415:
		case 14416:
		case 56200:
			return true;
		default:
			break;
	}
	return false;
}

int func_799(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			if (iParam1 == 1)
			{
				return 0;
			}
			else if (iParam1 == 2)
			{
				return 1;
			}
			else if (iParam1 == 3)
			{
				return 2;
			}
			break;
		case 2:
			return 0;
	}
	return -1;
}

char* func_800(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1[5];
	switch (iParam0)
	{
		case 0:
			iVar0 = 2;
			sVar1[0] = "INDIFF1";
			sVar1[1] = "INDIFF2";
			break;
		case 1:
			iVar0 = 1;
			if (iParam1 > 1)
			{
				sVar1[0] = "WAIT1";
			}
			else
			{
				sVar1[0] = "WAIT2";
			}
			break;
		case 2:
			iVar0 = 2;
			sVar1[0] = "SHOCK1";
			sVar1[1] = "SHOCK2";
			break;
		default:
			break;
	}
	return sVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0)];
}

var func_801(int iParam0)
{
	int iVar0;
	int iVar1[10];
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			iVar1[0] = joaat("WORLD_HUMAN_STARE_STOIC");
			iVar1[1] = joaat("WORLD_HUMAN_SMOKE");
			iVar1[2] = joaat("WORLD_HUMAN_STAND_WAITING");
			break;
		case 1:
			iVar0 = 3;
			iVar1[0] = joaat("WORLD_HUMAN_SMOKE");
			iVar1[1] = joaat("WORLD_HUMAN_WAITING_IMPATIENT");
			iVar1[2] = joaat("WORLD_HUMAN_STARE_STOIC");
			break;
		case 2:
			iVar0 = 2;
			iVar1[0] = joaat("WORLD_HUMAN_STAND_WAITING");
			iVar1[1] = joaat("WORLD_HUMAN_SHOP_BROWSE");
			break;
		default:
			break;
	}
	return iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0)];
}

void func_802(var uParam0, var uParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	fVar0 = *uParam0;
	fVar1 = *uParam1;
	*uParam0 = ((fVar0 * BUILTIN::COS(fParam2)) - (fVar1 * BUILTIN::SIN(fParam2)));
	*uParam1 = ((fVar0 * BUILTIN::SIN(fParam2)) + (fVar1 * BUILTIN::COS(fParam2)));
}

Vector3 func_803(vector3 vParam0, float fParam3)
{
	float fVar0;
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

float func_804(float fParam0)
{
	return (fParam0 * 57.29578f);
}

char* func_805(var uParam0, var uParam1)
{
	switch (uParam0->f_3)
	{
		case 0:
			if (uParam0->f_69)
			{
				return "DUEL_OBJ_FILL";
			}
			else
			{
				return "DUEL_OBJ_FILL_ALT";
			}
			break;
		case 1:
			if (uParam0->f_69)
			{
				return "DUEL_OBJ_DRAW";
			}
			else
			{
				return "DUEL_OBJ_DRAW_ALT";
			}
			break;
		case 2:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_36)))
			{
				return __LIB_0__::func_67(uParam1->f_36);
			}
			else
			{
				return "DUEL_OBJ_FIRE";
			}
			break;
	}
	return "";
}

void func_806(bool bParam0, var uParam1, var uParam2, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	fVar6 = __LIB_0__::func_152(uParam1->f_42, uParam1->f_45, 1);
	fVar7 = __LIB_0__::func_152(uParam1->f_45, uParam1->f_42, 1);
	if (__LIB_0__::func_12() == 76)
	{
		vVar0 = { -269.649f, 791.1334f, 17.58054f };
		vVar3 = { -342.3348f, 777.1977f, 215.2967f };
	}
	else if (__LIB_0__::func_12() == 105)
	{
		vVar0 = { 1312.238f, -1296.278f, 0.850876f };
		vVar3 = { 1432.387f, -1431.857f, 179.1864f };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_42, fVar6, 0f, fParam3, -100f) };
		vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_45, fVar7, 0f, fParam3, 100f) };
	}
	if (bParam0)
	{
		if (__LIB_0__::func_239(uParam2, 2))
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vVar0, vVar3, iParam4, 0, 1);
		}
	}
	else if (!__LIB_0__::func_239(uParam2, 2))
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(vVar0, vVar3, iParam4, 0, bParam0, 1, 0);
		__LIB_0__::func_240(uParam2, 2);
	}
}

void func_807()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	__LIB_3__::func_739(0);
	Global_1935689.f_6 = 1;
}

void func_808(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_4)) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, MISC::GET_HASH_KEY(&(uParam0->f_4))))
	{
		__LIB_2__::func_122(uParam0->f_1, &(uParam0->f_4), 1744022339, 0, 1, 0, 0, 1);
	}
}

void func_809()
{
	__LIB_3__::func_150(Global_35, &(Global_1347400.f_46));
}

void func_810(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_86))
	{
		vVar0 = { __LIB_1__::func_367(uParam0->f_42, uParam0->f_45, 0.5f) };
		vVar3 = { 0f, 0f, __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1) };
		vVar6 = { 12f, (MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_42, uParam0->f_45, true) + 30f), 25f };
		uParam0->f_86 = VOLUME::_CREATE_VOLUME_BOX(vVar0, vVar3, vVar6);
		ITEMSET::ADD_TO_ITEMSET(uParam0->f_86, *uParam1);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_86, 534496, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(uParam0->f_86, 534496, 0, 0, -1, -1, 2);
	}
}

void func_811(var uParam0, var uParam1)
{
	__LIB_1__::func_539();
	if (uParam1->f_57 != 3)
	{
		if (uParam1->f_57 == 4)
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
		}
		else
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
		}
	}
	if (PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 6, 0);
		PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	}
	MISC::SET_TIME_SCALE(1f);
}

Vector3 func_812(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;
	vVar0 = { __LIB_0__::func_173(vParam1) };
	vVar3 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	iVar6 = 0;
	while (iVar6 < iParam5)
	{
		vVar7 = { vVar3 + vVar0 * Vector(fParam4, fParam4, fParam4) * FtoV(BUILTIN::TO_FLOAT(iVar6)) };
		if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, vVar7))
		{
			return vVar7;
		}
		iVar6++;
	}
	return vVar3;
}

void func_813(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_watch_mode", iParam1);
		}
	}
}

void func_814(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_3__::func_718();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = __LIB_3__::func_749(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = Global_1955500[iVar2 /*16*/].f_2;
				if (__LIB_3__::func_738(iVar2, 512))
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
				}
			}
		}
		TASK::TASK_CLEAR_LOOK_AT(iVar0);
		PED::_0xAAC0EE3B4999ABB5(iVar0, 0);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					TASK::TASK_CLEAR_LOOK_AT(iVar3);
				}
			}
		}
		Global_1955499 = -1;
	}
}

void func_815(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fParam1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), fParam1);
		}
	}
	if (!__LIB_0__::func_27(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	if (!__LIB_0__::func_27(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (!__LIB_0__::func_27(iParam0, 16))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	}
	if (!__LIB_0__::func_27(iParam0, 128))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	}
	if (!__LIB_0__::func_27(iParam0, 512))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
	if (!__LIB_0__::func_27(iParam0, 64))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	}
	if (!(__LIB_3__::func_751(17) && __LIB_0__::func_94(Global_35, Global_1835011[17 /*74*/].f_18, 0) < 10f))
	{
		if (!__LIB_0__::func_27(iParam0, 2048))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		}
	}
	if (!__LIB_0__::func_27(iParam0, 4096))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!__LIB_0__::func_27(iParam0, 1024))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		}
		if (!__LIB_0__::func_27(iParam0, 8))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 33, true);
		if (!__LIB_0__::func_27(iParam0, 32))
		{
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
		}
	}
}

void func_816(var uParam0, int iParam1)
{
	__LIB_1__::func_148(&(uParam0->f_26));
	uParam0->f_59 = iParam1;
}

int func_817(var uParam0, var uParam1)
{
	float fVar0;
	switch (uParam0->f_68)
	{
		case 0:
			StringCopy(&(uParam0->f_74), "generic_hint_cam", 64);
			StringCopy(&(uParam0->f_74.f_8), "GENERIC_HINT_CAM", 64);
			uParam0->f_74.f_19 = uParam1->f_1;
			CAM::_0x6A4D224FC7643941(&(uParam0->f_74));
			uParam0->f_68 = 1;
			break;
		case 1:
			if (CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_74)))
			{
				uParam0->f_68 = 2;
			}
			break;
		case 2:
			fVar0 = 1f;
			__LIB_1__::func_283(&(uParam0->f_32), 0);
			if (__LIB_1__::func_285(&(uParam0->f_32), fVar0))
			{
				if (CAM::_0x927B810E43E99932(&(uParam0->f_74)))
				{
					CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_74));
				}
				__LIB_0__::func_37(&(uParam0->f_32));
				uParam0->f_68 = 3;
			}
			else if (!CAM::_0x927B810E43E99932(&(uParam0->f_74)))
			{
				CAM::_0xB8B207C34285E978(&(uParam0->f_74));
			}
			else
			{
				CAM::_0x7B0279170961A73F(&(uParam0->f_74));
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_818(var uParam0)
{
	if (!__LIB_0__::func_239(uParam0, 1048576))
	{
		if (PLAYER::_0xE956C2340A76272E(PLAYER::PLAYER_ID()) > 0.5f)
		{
			__LIB_1__::func_148(&(uParam0->f_38));
			uParam0->f_6 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
			__LIB_0__::func_240(uParam0, 1048576);
		}
	}
}

bool func_819(var uParam0, var uParam1)
{
	int iVar0;
	if (__LIB_0__::func_239(uParam1, 16))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		iVar0 = __LIB_0__::func_153(*uParam0, 0, 1, 0);
		if (__LIB_0__::func_144(iVar0, 0) && iVar0 != joaat("WEAPON_UNARMED"))
		{
			__LIB_3__::func_353(&(uParam0->f_20), 0);
			__LIB_1__::func_148(&(uParam1->f_41));
			uParam1->f_7 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
			__LIB_0__::func_240(uParam1, 16);
			return true;
		}
	}
	return false;
}

void func_820(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_2__::func_799(iParam0))
		{
			__LIB_1__::func_936(iParam0, 67108864);
		}
	}
	else if (__LIB_2__::func_799(iParam0))
	{
		__LIB_1__::func_937(iParam0, 67108864);
	}
}

int func_821(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = __LIB_1__::func_237(iParam0);
	iVar0 = iVar1;
	if (iVar0 < 0 || iVar0 >= 27)
	{
		return 0;
	}
	return Global_1360165[iVar0 /*1157*/];
}

bool func_822(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_3__::func_396(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_3__::func_399(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_823(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*iParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, iParam1[iVar0]))
				{
					__LIB_2__::func_32(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*iParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_468(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_824(var uParam0, var uParam1, bool bParam2)
{
	if (__LIB_0__::func_239(uParam1, 1024) || bParam2)
	{
		if (__LIB_0__::func_272(uParam0->f_3, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 136, false);
				__LIB_2__::func_145(uParam0->f_3, 0);
			}
		}
		__LIB_3__::func_728(uParam1, 1024);
	}
}

bool func_825(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((iParam0[iVar0 /*32*/])->f_1 != 0)
		{
			iVar1++;
			if ((iParam0[iVar0 /*32*/])->f_12 != 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1 <= 15;
}

void func_826(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	if (uParam0->f_136 < 0 || uParam0->f_136 > 15)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	(uParam0[uParam0->f_136 /*9*/])->f_1 = iParam2;
	(uParam0[uParam0->f_136 /*9*/])->f_2 = { vParam3 };
	(uParam0[uParam0->f_136 /*9*/])->f_5 = fParam6;
	(uParam0[uParam0->f_136 /*9*/])->f_7 = iParam1;
	(uParam0[uParam0->f_136 /*9*/])->f_8 = iParam11;
	if (bParam7)
	{
		__LIB_1__::func_336(&((uParam0[uParam0->f_136 /*9*/])->f_6), 4);
	}
	if (bParam8)
	{
		__LIB_1__::func_336(&((uParam0[uParam0->f_136 /*9*/])->f_6), 8);
	}
	if (iParam9 == 1)
	{
		__LIB_1__::func_336(&((uParam0[uParam0->f_136 /*9*/])->f_6), 1);
	}
	else if (iParam9 == 2)
	{
		__LIB_1__::func_336(&((uParam0[uParam0->f_136 /*9*/])->f_6), 2);
	}
	if (bParam10)
	{
		__LIB_1__::func_336(&((uParam0[uParam0->f_136 /*9*/])->f_6), 16);
	}
	uParam0->f_136++;
}

int func_827(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_136)
	{
		if ((uParam0[iVar0 /*9*/])->f_7 == iParam1)
		{
			return (*uParam0)[iVar0 /*9*/];
		}
		iVar0++;
	}
	return 0;
}

void func_828(var uParam0)
{
	int iVar0;
	struct<9> Var1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*(uParam0[iVar0 /*9*/]) = { Var1 };
		iVar0++;
	}
	uParam0->f_136 = 0;
}

bool func_829(int iParam0)
{
	int iVar0;
	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944.f_22[iParam0 /*9*/].f_1;
	}
	return false;
}

void func_830(var uParam0, var uParam1)
{
	if (__LIB_3__::func_761(uParam1, 64))
	{
		uParam0->f_63 = joaat("DUELING_CONFIG_PLAYER_MUDTOWN4");
		uParam0->f_65 = "MINI_DUEL@PLAYER@MISSION@MUD4";
	}
	else if (__LIB_3__::func_761(uParam1, 32))
	{
		uParam0->f_63 = joaat("DUELING_CONFIG_PLAYER_INDUSTRY3");
		uParam0->f_65 = "MINI_DUEL@PLAYER@MISSION@IND3@IG9";
	}
	else
	{
		uParam0->f_63 = joaat("DUELING_CONFIG_PLAYER");
		uParam0->f_65 = "MINI_DUEL@PLAYER@BASE";
	}
	if (__LIB_3__::func_761(uParam1, 32))
	{
		uParam0->f_64 = joaat("DUELING_CONFIG_PITBOSS_INDUSTRY3");
		uParam0->f_66 = "MINI_DUEL@CHALLENGER@MISSION@IND3@IG9";
	}
	else if (__LIB_3__::func_761(uParam1, 512))
	{
		uParam0->f_64 = joaat("DUELING_CONFIG_CALLOWAY");
		uParam0->f_66 = "MINI_DUEL@CHALLENGER@RC@RCAL@RC3_IG1";
	}
	else if (PED::_0x50F124E6EF188B22(uParam1->f_1) && PED::_0x6FB76442469ABD68(uParam1->f_1) >= 0.4f)
	{
		uParam0->f_64 = joaat("DUELING_CONFIG_DRUNK");
		uParam0->f_66 = "MINI_DUEL@CHALLENGER@DRUNK";
	}
	else
	{
		uParam0->f_64 = joaat("DUELING_CONFIG_EASY");
		uParam0->f_66 = "MINI_DUEL@CHALLENGER@BASE";
	}
}

void func_831(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_239(uParam1, 4194304))
	{
		if (__LIB_3__::func_761(uParam0, 524288) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, 200432249))
		{
			__LIB_0__::func_240(uParam1, 4194304);
		}
	}
}

int func_832(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
	switch (iVar1)
	{
		case 0:
			if (__LIB_3__::func_761(uParam0, 512))
			{
				iVar0 = 22798;
			}
			else
			{
				iVar0 = 34606;
			}
			break;
		case 1:
			if (__LIB_3__::func_761(uParam0, 512))
			{
				iVar0 = 46065;
			}
			else
			{
				iVar0 = 37873;
			}
			break;
		case 2:
			if (__LIB_3__::func_761(uParam0, 512))
			{
				iVar0 = 54187;
			}
			else
			{
				iVar0 = 53675;
			}
			break;
		case 3:
			iVar0 = 55120;
			break;
		case 4:
			iVar0 = 43312;
			break;
		case 5:
			iVar0 = 65478;
			break;
		case 6:
			iVar0 = 6884;
			break;
		case 7:
			iVar0 = 45454;
			break;
		case 8:
			iVar0 = 33646;
			break;
	}
	return iVar0;
}

void func_833(var uParam0, var uParam1)
{
	if (__LIB_3__::func_761(uParam0, 4))
	{
	}
	else if (!__LIB_0__::func_239(uParam1, 64))
	{
		uParam1->f_25 = __LIB_0__::func_45("DUEL_HELP_SHOWDOWN", 10000, 0, 0, 0, 1);
		__LIB_0__::func_240(uParam1, 64);
	}
}

void func_834(int iParam0)
{
	var uVar0;
	char cVar1[32];
	int iVar5;
	if (iParam0 > 6)
	{
		return;
	}
	if (Global_1911643 != 0)
	{
		__LIB_3__::func_760();
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1911643.f_3, true);
	Global_1911643 = iParam0;
	Global_1911643.f_1 = 0;
	iVar5 = 0;
	while (iVar5 < iParam0)
	{
		StringCopy(&cVar1, "Objective", 32);
		StringIntConCat(&cVar1, iVar5, 32);
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1911643.f_2, &cVar1);
		Global_1911643.f_5[iVar5 /*3*/] = uVar0;
		Global_1911643.f_5[iVar5 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "IsCurrent", 0);
		Global_1911643.f_5[iVar5 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "Failed", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1911643.f_4, iVar5, "objective_breadcrumb", uVar0);
		iVar5++;
	}
}

bool func_835(var uParam0, var uParam1)
{
	if ((__LIB_3__::func_761(uParam0, 64) && uParam0->f_1 != uParam0->f_2) && __LIB_0__::func_239(uParam1, 65536))
	{
		if (!__LIB_0__::func_239(uParam1, 4096))
		{
			__LIB_0__::func_240(uParam1, 4096);
		}
		return true;
	}
	return false;
}

bool func_836(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (__LIB_3__::func_761(uParam0, 524288) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, 200432249))
	{
		return true;
	}
	if (!__LIB_3__::func_761(uParam0, 262144))
	{
		WEAPON::GET_AMMO_IN_CLIP(uParam0->f_1, &iVar0, uParam0->f_49);
		iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(uParam0->f_1, uParam0->f_49, true);
		if (iVar0 < iVar1)
		{
			return true;
		}
	}
	return false;
}

float func_837(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	iVar0 = uParam0->f_89;
	bVar1 = true;
	if (__LIB_3__::func_761(uParam0, 4))
	{
		bVar1 = false;
	}
	switch (iParam1)
	{
		case 0:
			if (bVar1 && uParam0->f_79 >= 0f)
			{
				return uParam0->f_79;
			}
			switch (iVar0)
			{
				case 3:
					return 8f;
				case 4:
					return 5f;
				case 0:
					return 4f;
				case 1:
					return 3.5f;
				case 2:
					return 3f;
				default:
					break;
			}
			break;
		case 1:
			if (bVar1 && uParam0->f_80 >= 0f)
			{
				return uParam0->f_80;
			}
			switch (iVar0)
			{
				case 3:
					return 4f;
				case 4:
					return 3f;
				case 0:
					return 2f;
				case 1:
					return 1.5f;
				case 2:
					return 1f;
				default:
					break;
			}
			break;
		case 2:
			if ((bVar1 || __LIB_3__::func_761(uParam0, 524288)) && uParam0->f_81 >= 0f)
			{
				return uParam0->f_81;
			}
			switch (iVar0)
			{
				case 3:
					return 2f;
				case 4:
					return 2f;
				case 0:
					return 1f;
				case 1:
					return 0.5f;
				case 2:
					return 0.25f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

struct<7> func_838(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, int iParam11, bool bParam12, var uParam13)
{
	struct<7> Var0;
	Var0.f_3 = -1;
	Var0.f_6 = 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return Var0;
	}
	if (__LIB_0__::func_175(vParam8, 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 1))
	{
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Var0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam2, vParam5, vParam8, __LIB_0__::func_93());
			break;
		default:
			Var0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam2, vParam5, vParam8, __LIB_0__::func_93());
			break;
	}
	Var0 = { __LIB_3__::func_773(iParam0, iParam1, Var0, iParam11, bParam12, uParam13) };
	return Var0;
}

void func_839(var uParam0, var uParam1)
{
	if (__LIB_0__::func_239(uParam1, 4))
	{
		if (!__LIB_3__::func_769(uParam0->f_1))
		{
			__LIB_3__::func_728(uParam1, 4);
		}
	}
}

void func_840()
{
	__LIB_0__::func_841(Global_35, &(Global_1347400.f_46));
}

bool func_841(var uParam0)
{
	return __LIB_0__::func_27(*uParam0, 16);
}

void func_842(struct<7> Param0, vector3 vParam7)
{
	if (!__LIB_3__::func_725(Param0))
	{
		return;
	}
	if (__LIB_0__::func_175(vParam7, 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 1))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Param0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Param0.f_5))
	{
		MAP::SET_BLIP_COORDS(Param0.f_5, vParam7);
	}
	VOLUME::_SET_VOLUME_COORDS(Param0, vParam7);
}

void func_843(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		return;
	}
	if (__LIB_0__::func_239(uParam0, 524288) && PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX()) > 0f)
	{
		iVar2 = __LIB_0__::func_153(*uParam1, 0, 1, 0);
		if (iVar2 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::GET_AMMO_IN_CLIP(*uParam1, &iVar0, iVar2);
			if (iVar0 <= 0)
			{
				WEAPON::_GET_PED_WEAPON_INVENTORY_UID(*uParam1, 0, &uVar3);
				WEAPON::_GET_AMMO_IN_CLIP_BY_INVENTORY_UID(*uParam1, &iVar0, &uVar3);
			}
			iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam1, iVar2, true);
		}
		if (iVar0 == iVar1 && __LIB_3__::func_774(uParam0) == 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 159, true);
		}
	}
}

void func_844(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	if (__LIB_3__::func_764(uParam1))
	{
		return;
	}
	if (uParam0->f_75[2])
	{
		__LIB_0__::func_11("DCS: DUEL ATTACHED");
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			vVar6 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
			__LIB_3__::func_409(&vVar6, 1088421888 /* Float: 7f */);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
		}
		if (!__LIB_0__::func_86(uParam0->f_51[2 /*3*/]))
		{
			fVar9 = __LIB_0__::func_152(vVar3, vVar6, 1);
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, uParam0->f_51[2 /*3*/]) };
		}
		else
		{
			fVar9 = __LIB_0__::func_152(vVar3, vVar6, 1);
			if (__LIB_3__::func_761(uParam0, 64))
			{
				vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, 0.25f, 0f, 0f) };
			}
			else
			{
				vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, 0.25f, 0f, 1f) };
			}
		}
		if (CAM::DOES_CAM_EXIST(uParam1->f_20[2]))
		{
			CAM::POINT_CAM_AT_COORD(uParam1->f_20[2], vVar0);
		}
	}
}

void func_845(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	if (__LIB_3__::func_764(uParam1))
	{
		return;
	}
	if (!CAM::DOES_CAM_EXIST(uParam1->f_20[2]))
	{
		uParam1->f_20[2] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		iVar13 = 1;
	}
	if (CAM::DOES_CAM_EXIST(uParam1->f_20[2]) && iVar13 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			vVar7 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		}
		if (!__LIB_0__::func_86(uParam0->f_45))
		{
			vVar10 = { uParam0->f_45 };
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
		{
			vVar10 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
		}
		if (!__LIB_0__::func_86(uParam0->f_51[2 /*3*/]))
		{
			vVar4 = { uParam0->f_51[2 /*3*/] };
		}
		else
		{
			vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar7, __LIB_0__::func_152(vVar7, vVar10, 1), 0.8385f, -2.5071f, 0f) };
		}
		CAM::SET_CAM_COORD(uParam1->f_20[2], vVar4);
		if (uParam0->f_75[2])
		{
			CAM::ATTACH_CAM_TO_ENTITY(uParam1->f_20[2], Global_35, vVar4, true);
		}
		if (!__LIB_0__::func_86(uParam0->f_61[2 /*3*/]))
		{
			CAM::SET_CAM_ROT(uParam1->f_20[2], uParam0->f_61[2 /*3*/], 2);
		}
		else
		{
			fVar0 = __LIB_0__::func_152(vVar10, vVar7, 1);
			if (__LIB_3__::func_761(uParam0, 64))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, fVar0, 0.25f, 0f, 0f) };
			}
			else
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, fVar0, 0.25f, 0f, 1f) };
			}
			CAM::POINT_CAM_AT_COORD(uParam1->f_20[2], vVar1);
		}
		if (uParam0->f_71[2] != 0f)
		{
			CAM::SET_CAM_FOV(uParam1->f_20[2], uParam0->f_71[2]);
		}
		else
		{
			CAM::SET_CAM_FOV(uParam1->f_20[2], 17f);
		}
		if (bParam2)
		{
			__LIB_1__::func_539();
			CAM::SET_CAM_ACTIVE(uParam1->f_20[2], true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
	}
}

void func_846(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	fVar10 = __LIB_0__::func_152(uParam0->f_45, uParam0->f_42, 1);
	if (__LIB_3__::func_761(uParam0, 64))
	{
		vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_45, fVar10, 0.25f, 0f, 0f) };
	}
	else
	{
		vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_45, fVar10, 0.25f, 0f, 1f) };
	}
	if (!__LIB_0__::func_27(uParam0->f_88, 2))
	{
		if (!CAM::DOES_CAM_EXIST(uParam1->f_20[0]))
		{
			uParam1->f_20[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		}
		__LIB_3__::func_782(uParam0, *uParam1);
		if (!CAM::DOES_CAM_EXIST(uParam1->f_20[1]))
		{
			uParam1->f_20[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
			if (!__LIB_0__::func_86(uParam0->f_42))
			{
				vVar0 = { uParam0->f_42 };
			}
			else
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
			}
			fVar9 = __LIB_0__::func_152(vVar0, uParam0->f_45, 1);
			if (!__LIB_0__::func_86(uParam0->f_51[1 /*3*/]))
			{
				vVar6 = { uParam0->f_51[1 /*3*/] };
			}
			else
			{
				vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar9, 0.8385f, -2.5071f, 1.5f) };
			}
			if (CAM::DOES_CAM_EXIST(uParam1->f_20[1]))
			{
				CAM::SET_CAM_COORD(uParam1->f_20[1], vVar6);
				if (uParam0->f_75[1])
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam1->f_20[1], Global_35, vVar6, true);
				}
				if (!__LIB_0__::func_86(uParam0->f_61[1 /*3*/]))
				{
					CAM::SET_CAM_ROT(uParam1->f_20[1], uParam0->f_61[1 /*3*/], 2);
				}
				else
				{
					CAM::POINT_CAM_AT_COORD(uParam1->f_20[1], vVar3);
				}
				if (uParam0->f_71[1] > 0f)
				{
					CAM::SET_CAM_FOV(uParam1->f_20[1], uParam0->f_71[1]);
				}
				else
				{
					CAM::SET_CAM_FOV(uParam1->f_20[1], 35f);
				}
			}
		}
	}
}

void func_847(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		iVar0 = __LIB_3__::func_783(iVar2);
		if (iVar0 != 0 && WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false))
		{
			iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar0, true);
			WEAPON::SET_AMMO_IN_CLIP(iParam0, iVar0, iVar1);
		}
		iVar2++;
	}
}

void func_848(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = iParam1;
		vVar1 = { __LIB_3__::func_784() };
		DECORATOR::DECOR_SET_INT(iParam0, &vVar1, iVar0);
	}
}

void func_849(int iParam0)
{
	vector3 vVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { __LIB_3__::func_784() };
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, &vVar0))
	{
		return;
	}
	DECORATOR::DECOR_REMOVE(iParam0, &vVar0);
}

void func_850(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
	DECORATOR::DECOR_SET_BOOL(*uParam0, __LIB_3__::func_793(), true);
}

bool func_851(var uParam0)
{
	Global_1425351.f_18 = uParam0;
	__LIB_3__::func_794(1);
	return true;
}

bool func_852(var uParam0, var uParam1)
{
	int iVar0;
	if (__LIB_3__::func_761(uParam1, 4194304))
	{
		return true;
	}
	__LIB_3__::func_781();
	if (uParam0->f_8 == 0)
	{
		uParam0->f_8 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
	}
	iVar0 = (MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED() - uParam0->f_8);
	if (iVar0 >= 1000)
	{
		CAM::RENDER_SCRIPT_CAMS(false, true, 1000, true, false, 0);
		return true;
	}
	return false;
}

bool func_853(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_58, 16))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (PED::_0xBD6B242B8BD5543A(uParam0->f_1))
	{
		return true;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(uParam0->f_1, &iVar0);
		if (__LIB_3__::func_797(iVar0))
		{
			if (bParam2)
			{
				__LIB_1__::func_336(&(uParam1->f_58), 16);
			}
			return true;
		}
	}
	return false;
}

bool func_854(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_58, 64))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (__LIB_3__::func_761(uParam0, 524288) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, 200432249))
	{
		if (bParam2)
		{
			__LIB_1__::func_336(&(uParam1->f_58), 64);
		}
		return true;
	}
	if (PED::_0xBD6B242B8BD5543A(*uParam0))
	{
		if (bParam2)
		{
			__LIB_1__::func_336(&(uParam1->f_58), 64);
		}
		return true;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(*uParam0, uParam0->f_1, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(*uParam0, &iVar0);
		if (__LIB_3__::func_797(iVar0))
		{
			if (bParam2)
			{
				__LIB_1__::func_336(&(uParam1->f_58), 64);
			}
			return true;
		}
	}
	return false;
}

bool func_855(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_58, 32))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(uParam0->f_1, &iVar0);
		if (__LIB_3__::func_798(iVar0))
		{
			if (bParam2)
			{
				__LIB_1__::func_336(&(uParam1->f_58), 32);
			}
			return true;
		}
	}
	return false;
}

bool func_856(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam1->f_58, 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (__LIB_0__::func_27(uParam1->f_58, -2147483648) && !__LIB_1__::func_285(&(uParam1->f_29), 0.05f))
	{
		return false;
	}
	iVar2 = __LIB_0__::func_153(*uParam0, 0, 1, 0);
	if (iVar2 == 0)
	{
		return false;
	}
	if (iVar2 != joaat("WEAPON_UNARMED"))
	{
		WEAPON::GET_AMMO_IN_CLIP(*uParam0, &iVar0, iVar2);
		if (iVar0 <= 0)
		{
			WEAPON::_GET_PED_WEAPON_INVENTORY_UID(*uParam0, 0, &uVar3);
			WEAPON::_GET_AMMO_IN_CLIP_BY_INVENTORY_UID(*uParam0, &iVar0, &uVar3);
		}
		iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, iVar2, true);
		iVar7 = 0;
		if (__LIB_3__::func_761(uParam0, 512))
		{
			iVar7 = 1;
		}
		iVar8 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_1, iVar7);
		if (iVar0 < iVar1)
		{
			if (uParam1->f_11 == -1)
			{
				uParam1->f_11 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
			}
			iVar10 = (MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED() - uParam1->f_11);
			if (iVar10 > 200)
			{
				bVar9 = true;
			}
		}
		if (!__LIB_3__::func_761(uParam0, 33554432))
		{
			if ((((iVar0 < iVar1 && bVar9) && !ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0)) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::GET_PLAYER_INDEX(), uParam0->f_1)) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::GET_PLAYER_INDEX(), iVar8))
			{
				if (bParam2)
				{
					__LIB_1__::func_336(&(uParam1->f_58), 1);
				}
				return true;
			}
		}
		else
		{
			if (iVar0 == 0)
			{
				bVar11 = true;
			}
			if (iVar0 < iVar1 && PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()) == 0)
			{
				bVar11 = true;
			}
			if (!PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()) && __LIB_0__::func_239(uParam1, 524288))
			{
				bVar11 = true;
			}
			if (bVar11)
			{
				if (!ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0) && bVar9 == 1)
				{
					if (bParam2)
					{
						__LIB_1__::func_336(&(uParam1->f_58), 1);
					}
					return true;
				}
			}
		}
	}
	return false;
}

Vector3 func_857(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { __LIB_3__::func_803(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_858()
{
	vector3 vVar0;
	vVar0 = { 1f, 0f, 0f };
	__LIB_3__::func_802(&vVar0, &(vVar0.f_1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
	return vVar0;
}

void func_859(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;
	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
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
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		__LIB_1__::func_581(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	__LIB_1__::func_681(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
	}
}

void func_860(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_1__::func_149(1))
	{
		__LIB_3__::func_813(Global_1359489[iVar0], iParam0);
		iVar0++;
	}
}

void func_861(var uParam0, var uParam1)
{
	if (uParam1->f_18 < 0f)
	{
		if (uParam1->f_17 > 0.9f)
		{
			if (uParam0->f_90 != -1)
			{
				uParam1->f_73 = uParam0->f_90;
			}
			else if (__LIB_0__::func_871() && !__LIB_3__::func_761(uParam0, 16))
			{
				if (__LIB_3__::func_761(uParam0, 512))
				{
					uParam1->f_73 = 34606;
				}
				else
				{
					uParam1->f_73 = 22798;
				}
			}
			else
			{
				uParam1->f_73 = 21030;
			}
		}
		else
		{
			uParam1->f_73 = uParam1->f_72;
		}
	}
	PLAYER::_0x310CE349E0C0EC4B(PLAYER::PLAYER_ID(), uParam0->f_1, uParam1->f_73);
}

bool func_862(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_27(uParam1->f_58, 8))
	{
		return true;
	}
	if (__LIB_3__::func_761(uParam0, 16) && __LIB_3__::func_761(uParam0, 8192))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(uParam0->f_1, &iVar0);
		if (__LIB_3__::func_795(iVar0, __LIB_3__::func_761(uParam0, 512)))
		{
			__LIB_1__::func_336(&(uParam1->f_58), 8);
			return true;
		}
		if (__LIB_3__::func_761(uParam0, 268435456) && __LIB_0__::func_239(uParam1, 65536))
		{
			__LIB_1__::func_336(&(uParam1->f_58), 8);
			return true;
		}
	}
	iVar1 = 0;
	if (__LIB_3__::func_761(uParam0, 512))
	{
		iVar1 = 1;
	}
	iVar2 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_1, iVar1);
	if (__LIB_3__::func_796(iVar2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if (MISC::_0x7A76104CC2CC69E8(iVar2, 1, 1))
			{
				if (bParam2)
				{
					__LIB_1__::func_336(&(uParam1->f_58), 8);
				}
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(uParam1->f_58, -2147483648))
	{
		if (__LIB_1__::func_285(&(uParam1->f_29), 0.05f))
		{
			if (bParam2)
			{
				__LIB_1__::func_336(&(uParam1->f_58), 8);
			}
			return true;
		}
	}
	else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), uParam0->f_83, true))
	{
		__LIB_1__::func_148(&(uParam1->f_29));
		__LIB_1__::func_336(&(uParam1->f_58), -2147483648);
	}
	return false;
}

bool func_863(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	if (__LIB_3__::func_761(uParam0, 33554432) && PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (__LIB_3__::func_761(uParam0, 4194304))
	{
		return true;
	}
	switch (uParam1->f_59)
	{
		case 0:
			__LIB_1__::func_336(&(uParam1->f_60), 2048);
			CAM::DESTROY_ALL_CAMS(false);
			CAM::_0x6E969927CF632608(1);
			CAM::_0xE3639DB78B3B5400(iParam3);
			__LIB_1__::func_148(&(uParam1->f_26));
			__LIB_3__::func_816(uParam1, 3);
			break;
		case 3:
			__LIB_3__::func_781();
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				if (iParam3 != PLAYER::PLAYER_PED_ID())
				{
					CAM::RENDER_SCRIPT_CAMS(false, bParam7, 3000, true, false, 0);
				}
				__LIB_3__::func_816(uParam1, 0);
				TASK::CLEAR_PED_TASKS(iParam2, true, false);
				return true;
			}
			break;
		default:
			__LIB_3__::func_816(uParam1, 0);
			break;
	}
	return false;
}

void func_864(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (__LIB_0__::func_168(iParam1))
		{
			__LIB_0__::func_862(iParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			__LIB_0__::func_169(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			__LIB_0__::func_170(iParam0, 0);
			bVar0 = true;
		}
		__LIB_3__::func_149(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_865(int iParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(uParam1->f_3), 1))
	{
		__LIB_3__::func_565(uParam1);
		if (__LIB_3__::func_517(iParam0, fParam7, fParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_2__::func_496(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam6, iParam9);
	}
}

bool func_866(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;
	int iVar13;
	if (!__LIB_0__::func_71(iParam0))
	{
		if (bParam11)
		{
			iVar0 = __LIB_0__::func_398(7);
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(iParam0);
		}
		if (!__LIB_0__::func_272(iVar0, 1) || (!(VOLUME::_DOES_VOLUME_EXIST(iParam5) && __LIB_1__::func_205(iVar0, iParam5, 1, 0)) && __LIB_0__::func_665(iParam0, iVar0, 1, 1) > fParam6))
		{
			return true;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (__LIB_1__::func_16(iVar0) && __LIB_0__::func_402(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = __LIB_2__::func_338(&uVar1, &Var2);
				if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
				{
					*uParam1 = iVar0;
				}
			}
			else
			{
				*uParam1 = iVar0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return true;
		}
		if (__LIB_0__::func_272(*uParam1, 1))
		{
			if (!(__LIB_0__::func_163(*uParam1, 518218985) || __LIB_0__::func_163(*uParam1, 713668775)))
			{
				TASK::CLEAR_PED_TASKS(*uParam1, true, false);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				FLOCK::_0xFF1E339CE40EAAAF(*uParam1, 0);
				POPULATION::_0xF74E134F40192884(*uParam1, 2);
				if (!__LIB_0__::func_86(vParam2))
				{
					bParam8 = false;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, vParam2, fParam12, -1, 0.25f, 0, 40000f);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iParam5))
				{
					POPULATION::_0xB56D41A694E42E86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*uParam1, VOLUME::_GET_VOLUME_COORDS(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && __LIB_0__::func_86(vParam2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return false;
}

void func_867(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				__LIB_3__::func_581(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				__LIB_3__::func_573(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			__LIB_3__::func_685(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			__LIB_3__::func_683(uParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*uParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*uParam0, 0, 15);
		}
	}
}

void func_868(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	if (iParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return;
	}
	if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!__LIB_0__::func_455())
	{
		__LIB_3__::func_611(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, __LIB_0__::func_196(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, __LIB_0__::func_196(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && __LIB_0__::func_774(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = __LIB_0__::func_356(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!__LIB_0__::func_457(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = joaat("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = joaat("COLOR_YELLOWDARK");
		}
	}
	sVar15 = __LIB_0__::func_54(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || __LIB_0__::func_192(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iParam0));
	}
	__LIB_0__::func_924(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_869(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (__LIB_0__::func_27(*iParam1, 128))
	{
		if (!__LIB_0__::func_163(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!__LIB_1__::func_865(iVar2))
			{
				return false;
			}
			if (!__LIB_0__::func_163(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (__LIB_1__::func_870(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!__LIB_0__::func_27(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((__LIB_0__::func_27(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			__LIB_1__::func_683(iParam1, 128);
			return false;
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*iParam1 = 0;
			return true;
		}
	}
	if (__LIB_0__::func_27(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!__LIB_1__::func_865(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!__LIB_0__::func_27(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!__LIB_0__::func_27(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (__LIB_0__::func_27(iParam2, 8192))
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return false;
		}
		if (__LIB_0__::func_27(*iParam1, 2336))
		{
			if (!__LIB_1__::func_865(iVar2))
			{
			}
			if (__LIB_1__::func_866(iVar2, *iParam1))
			{
				__LIB_1__::func_681(iParam1, 32);
				__LIB_1__::func_681(iParam1, 256);
				__LIB_1__::func_681(iParam1, 2048);
				__LIB_1__::func_683(iParam1, 512);
				__LIB_1__::func_683(iParam1, 1024);
				__LIB_1__::func_683(iParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (__LIB_0__::func_27(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!__LIB_1__::func_865(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return false;
			}
			else
			{
				__LIB_1__::func_681(iParam1, 64);
			}
		}
		if (__LIB_0__::func_27(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && __LIB_0__::func_27(iParam2, 1024))) || __LIB_0__::func_27(iParam2, 8)) && !__LIB_0__::func_27(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			__LIB_1__::func_683(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && __LIB_0__::func_27(iParam2, 4096)) && !__LIB_0__::func_27(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			__LIB_1__::func_683(iParam1, 2048);
			__LIB_1__::func_683(iParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && __LIB_0__::func_27(iParam2, 32)) && !__LIB_0__::func_27(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			__LIB_1__::func_683(iParam1, 256);
			__LIB_1__::func_683(iParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			__LIB_1__::func_683(iParam1, 64);
		}
		else if (!__LIB_0__::func_27(iParam2, 1))
		{
			if (!__LIB_0__::func_27(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (__LIB_1__::func_870(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!__LIB_0__::func_27(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			__LIB_1__::func_683(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			__LIB_1__::func_683(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			__LIB_1__::func_683(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (!__LIB_0__::func_27(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		__LIB_1__::func_683(iParam1, 8);
	}
	return false;
}

int func_870(int iParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	if (bParam6)
	{
		__LIB_3__::func_306(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && __LIB_3__::func_278(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, iParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = __LIB_1__::func_545(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = __LIB_1__::func_545(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !__LIB_0__::func_125(iVar0))
		{
			__LIB_2__::func_133(iVar0, &(uParam1->f_23), 0);
		}
		if (__LIB_0__::func_125(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (__LIB_3__::func_242(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !__LIB_3__::func_243(&(uParam1->f_22)));
			__LIB_1__::func_864(iVar0, __LIB_3__::func_244(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (__LIB_3__::func_245(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (__LIB_3__::func_246(&(uParam1->f_22)))
		{
			__LIB_3__::func_174(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, __LIB_3__::func_247(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!__LIB_0__::func_27(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!__LIB_0__::func_125(iVar0))
		{
			__LIB_3__::func_176(iVar0, !__LIB_3__::func_175(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, __LIB_3__::func_177(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !__LIB_3__::func_279(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !__LIB_3__::func_279(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

void func_871(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (__LIB_1__::func_771(0))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(2))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(4))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(16))
			{
				if (iVar0 == 1)
				{
					__LIB_3__::func_704();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					__LIB_3__::func_704();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (__LIB_1__::func_771(1))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(3))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(7))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(1))
			{
				if (iVar0 == 1)
				{
					__LIB_3__::func_705();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					__LIB_3__::func_705();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (__LIB_1__::func_771(5))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(6))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(8))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(4))
			{
				if (iVar0 == 1)
				{
					__LIB_3__::func_706();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					__LIB_3__::func_706();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_872(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*iParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, iParam1[iVar0]))
				{
					__LIB_2__::func_32(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*iParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_604(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

var func_873(var uParam0, int iParam1)
{
	return AUDIO::_0xDF947FE0D551684E(uParam0, __LIB_3__::func_543(iParam1));
}

bool func_874(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	fVar0 = BUILTIN::VMAG(vParam3 - vParam0);
	vVar1 = { vParam3 - vParam0 / Vector(fVar0, fVar0, fVar0) };
	vVar4 = { vParam0 - vParam6 };
	fVar7 = BUILTIN::VMAG(vVar4);
	if (fVar0 < (fVar7 - fParam9))
	{
		return false;
	}
	fVar8 = (__LIB_1__::func_95(vVar4, vVar4) - (fParam9 * fParam9));
	if (fVar8 <= 0f)
	{
		return true;
	}
	fVar9 = __LIB_1__::func_95(vVar4, vVar1);
	if (fVar9 > 0f)
	{
		return false;
	}
	fVar10 = ((fVar9 * fVar9) - fVar8);
	if (fVar10 < 0f)
	{
		return false;
	}
	return true;
}

int func_875(float fParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;
	fParam0->f_4 = 0;
	switch (*fParam0)
	{
		case 0:
			__LIB_3__::func_545(fParam0);
			fParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(fParam0->f_1, 15);
			*fParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(fParam0->f_1, &(fParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (fParam0->f_2 == 0)
				{
					*fParam0 = 3;
					return 1;
				}
				else
				{
					fParam0->f_4 = 1;
					*fParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(fParam0->f_1, &(fParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*fParam0 = 3;
			}
			break;
		case 3:
			*fParam0 = 0;
			break;
	}
	return 0;
}

void func_876(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (__LIB_0__::func_139((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					__LIB_1__::func_748(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_877(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		__LIB_1__::func_748(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			__LIB_3__::func_544(iParam0, 0);
		}
	}
}

bool func_878(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15)
{
	bool bVar0;
	bool bVar1;
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (__LIB_3__::func_546(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15))
		{
			bVar1 = true;
		}
		if (__LIB_0__::func_572(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				__LIB_1__::func_221(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			__LIB_1__::func_221(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			__LIB_2__::func_369(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

void func_879(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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
			iParam1->f_6 = __LIB_2__::func_705(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
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

void func_880(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, -1, 2108, 51, 1);
	}
	else
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

void func_881(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = __LIB_3__::func_326(iParam0, vParam1, iParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		__LIB_3__::func_579(*iParam4);
	}
}

void func_882(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	__LIB_3__::func_583(iParam0, vParam1, 0f, 0f, 0f, 0f, 0f, 0f, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_883(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	iVar0 = __LIB_0__::func_786();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = __LIB_0__::func_934(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (__LIB_0__::func_293(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!__LIB_0__::func_181())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = __LIB_0__::func_309(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = __LIB_0__::func_786();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = __LIB_0__::func_416(iVar1);
		__LIB_1__::func_454(__LIB_0__::func_417(), 0, 4000);
		__LIB_3__::func_363(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		__LIB_1__::func_427(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > __LIB_0__::func_348(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < __LIB_0__::func_348(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { __LIB_0__::func_14(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		__LIB_3__::func_720(10, 1);
	}
}

void func_884(var uParam0, float fParam1)
{
	uParam0->f_19 = fParam1;
}

int func_885(var uParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = -1;
	if (iParam7 == -1 || iParam7 >= *uParam0)
	{
		iParam7 = (*uParam0 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam4 != (*uParam0)[iVar0] && (!bParam5 || (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[iVar0]))))
		{
			fVar3 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0], true, false), vParam1);
			if (iVar1 < 0 || fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < 0)
	{
	}
	return iVar1;
}

bool func_886()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_23();
	iVar1 = __LIB_0__::func_41(iVar0);
	iVar2 = 0;
	if (iVar1 >= 21 || iVar1 < 6)
	{
		iVar2 = 1;
	}
	return iVar2;
}

void func_887(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	struct<10> Var0;
	struct<10> Var11;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var0, iParam8, iParam9, iParam10, iParam11, iParam13, iParam12);
	}
	else if (!__LIB_0__::func_138(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var11, iParam8, iParam9, iParam10, iParam11, iParam13, iParam12);
	}
	if (bParam15)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam14);
	}
}

int func_888(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			__LIB_1__::func_148(&(iParam1->f_18));
			return 0;
		}
		else if (__LIB_0__::func_75(&(iParam1->f_18)))
		{
			__LIB_0__::func_37(&(iParam1->f_18));
			return 0;
		}
	}
	if (!__LIB_0__::func_75(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return __LIB_3__::func_103(&(iParam1->f_18), fParam2);
	return 1;
}

void func_889(var uParam0)
{
	__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(26), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_890(int iParam0)
{
	iLocal_406 = iParam0;
}

float func_891(int iParam0)
{
	float fVar0;
	fVar0 = -1f;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
	{
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0);
	}
	return fVar0;
}

bool func_892(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return true;
	}
	if ((iParam0 % 2) == 0)
	{
		return true;
	}
	return false;
}

bool func_893(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (__LIB_0__::func_232(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam1 * fParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_894(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 2048:
			return true;
		default:
			break;
	}
	return false;
}

void func_895(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 1f;
	uParam0->f_5 = 1f;
	uParam0->f_16 = joaat("FACIALONLY_FILTER");
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0.5f;
	uParam0->f_19 = -1;
	uParam0->f_20 = 6;
	uParam0->f_21 = 1;
	uParam0->f_23 = 69632;
}

void func_896(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_3 = 0;
	bParam0->f_4 = 0;
}

int func_897(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
	{
		return 0;
	}
	if (!__LIB_0__::func_20(iParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, Global_1396084))
		{
			return 1;
		}
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1396084);
		__LIB_3__::func_327(iParam0, 0);
		if (bParam3)
		{
			__LIB_3__::func_328(iParam0, 5);
		}
		else
		{
			__LIB_3__::func_328(iParam0, 6);
		}
		__LIB_3__::func_580(iParam0, iParam1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam2);
			if (!__LIB_3__::func_329(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

void func_898(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam18);
	}
}

void func_899(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, bool bParam13)
{
	struct<4> Var0;
	char cVar4[32];
	__LIB_2__::func_601(uParam0, 1);
	uParam0->f_12 = sParam2;
	uParam0->f_5 = fParam8;
	uParam0->f_6 = fParam9;
	*uParam0 = iParam1;
	uParam0->f_8 = fParam7;
	StringCopy(&cVar4, sParam2, 32);
	Var0 = { cVar4 };
	if (!__LIB_0__::func_86(vParam3))
	{
	}
	if (fParam8 > 0f)
	{
		StringConCat(&Var0, "Vis", 32);
		uParam0->f_2 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam3, 0f, 0f, 0f, fParam8, fParam8, fParam8, &Var0);
	}
	else
	{
		uParam0->f_2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam3, 0f, 0f, 0f, 1f, 1f, 3f, &cVar4);
	}
	if (fParam9 > 0f && fParam9 != fParam8)
	{
		Var0 = { cVar4 };
		StringConCat(&Var0, "Aud", 32);
		uParam0->f_3 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam3, 0f, 0f, 0f, fParam9, fParam9, fParam9, &Var0);
	}
	if (!__LIB_0__::func_86(vParam3))
	{
		uParam0->f_1 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(iParam1, vParam3, fParam7, fParam8, fParam9, fParam10, fParam11, -1, -1);
	}
	else
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2))
		{
			PED::_0x7C00CFC48A782DC0(uParam0->f_2, iParam6, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_3))
		{
			PED::_0x7C00CFC48A782DC0(uParam0->f_3, iParam6, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		uParam0->f_1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam1, iParam6, fParam7, fParam8, fParam9, fParam10, fParam11, fParam12, bParam13, false, -1, -1);
	}
}

void func_900(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

var func_901(var uParam0, var uParam1)
{
	var uVar0;
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_6);
	uVar0 = StackVal;
	return ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_1, uVar0);
}

bool func_902(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 >= 5 || iParam1 == -1)
	{
		return false;
	}
	return ((!bParam2 || __LIB_3__::func_634(uParam0, 0, 0, 0)) && MISC::IS_BIT_SET(uParam0->f_8, iParam1));
}

void func_903(var uParam0, int iParam1)
{
	var uVar0;
	uVar0 = uParam0->f_15[iParam1];
	Stack.Push(uParam0->f_1);
	Stack.Push(uVar0);
	Call_Loc(uParam0->f_6);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(StackVal, StackVal, true);
	__LIB_3__::func_637(uParam0, iParam1, 0);
	uParam0->f_2 = uVar0;
	Stack.Push(uVar0);
	Call_Loc(uParam0->f_5);
}

void func_904(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 == 1)
	{
		__LIB_3__::func_660(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		__LIB_3__::func_755(1);
		Global_40.f_11922[0] = iParam0;
	}
}

int func_905(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (iParam2 == Global_1945938[iVar0 /*18*/].f_10 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		__LIB_1__::func_578(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_906(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !Global_1935630.f_12)
	{
		iVar0 = __LIB_3__::func_700(iParam0);
		if (iVar0 <= 1)
		{
			iVar1 = 462;
			if (__LIB_3__::func_680(iParam0))
			{
				iVar1 = 463;
			}
			iVar2 = __LIB_0__::func_17(iParam0);
			__LIB_1__::func_424(iVar1, iVar2, 1);
		}
	}
}

bool func_907(int iParam0)
{
	if (__LIB_3__::func_104())
	{
		return false;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_707(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

void func_908(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (__LIB_0__::func_356(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !__LIB_0__::func_214(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && __LIB_1__::func_614(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				__LIB_3__::func_868(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_909(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (__LIB_3__::func_757(Global_35, iParam0, &uVar0))
		{
			__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
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

void func_910(char* sParam0, int iParam1, int* iParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
		{
			if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), iParam2))
			{
				if (bParam3)
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sParam0, *iParam2, 0, -1, 0, 0, -1);
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam1, sParam0, *iParam2, 0, -1, 0, 0, -1);
				}
			}
			else if (bParam3)
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sParam0, 0, 0, -1, 0, 0, -1);
			}
			else
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam1, sParam0, 0, 0, -1, 0, 0, -1);
			}
			PED::SET_PED_KEEP_TASK(iParam1, bParam4);
		}
	}
}

void func_911(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, fParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam18);
	}
}

bool func_912(bool bParam0, var uParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, float fParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (bParam0)
	{
		return __LIB_3__::func_154(uParam1, sParam4, iParam2, iParam3, iParam7, bParam9, 1, 1);
	}
	return __LIB_2__::func_303(iParam2, iParam3, sParam4, sParam5, fParam6, iParam7, bParam8, bParam9, iParam10, 0, 1, 1744022339, 1, 0, 0);
}

int func_913(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	if (!__LIB_3__::func_412(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (__LIB_0__::func_357(iParam0) != -999503751)
		{
			__LIB_3__::func_701(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		__LIB_3__::func_701(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	__LIB_1__::func_701(iParam0, 1);
	return 1;
}

void func_914(var uParam0)
{
	__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

bool func_915(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
			if (iParam1 == 1248274121)
			{
				__LIB_1__::func_618(iVar0);
			}
		}
		if (!__LIB_1__::func_761(iParam0, &uVar1, 1, 0, 0))
		{
			__LIB_3__::func_908(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				__LIB_1__::func_708(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !__LIB_0__::func_181())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!__LIB_0__::func_216(iVar0))
				{
					__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					__LIB_1__::func_708(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 2, 0, 1);
				if ((((__LIB_0__::func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !__LIB_0__::func_293(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (__LIB_0__::func_154(iVar7) && __LIB_0__::func_293(24))
				{
					if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		__LIB_1__::func_240(480, 1);
	}
	return true;
}

void func_916(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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
			bVar1 = __LIB_3__::func_702(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = __LIB_3__::func_702(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = __LIB_3__::func_702(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = __LIB_3__::func_702(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = __LIB_3__::func_702(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = __LIB_3__::func_702(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
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

bool func_917(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && __LIB_1__::func_800(iParam0))
		{
			__LIB_3__::func_908(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

int func_918(int iParam0)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

bool func_919(int iParam0, int iParam1)
{
	return (__LIB_0__::func_79(iParam0) && (Global_1898346[iParam0 /*6*/].f_1 && iParam1) != 0);
}

void func_920(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_162))
	{
		__LIB_1__::func_281(&(uParam0->f_162), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_163))
	{
		__LIB_1__::func_281(&(uParam0->f_163), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_164))
	{
		__LIB_1__::func_281(&(uParam0->f_164), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_165))
	{
		__LIB_1__::func_281(&(uParam0->f_165), 1, 1);
	}
}

void func_921(int iParam0, int iParam1)
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
				__LIB_2__::func_231(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				__LIB_2__::func_231(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_922(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 2442122;
	if (bParam1)
	{
		iVar0 |= 1;
	}
	if (bParam2)
	{
		iVar0 |= 72;
	}
	if (bParam3)
	{
		iVar0 |= 6;
	}
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(uParam0, iVar0);
}

int func_923(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", fParam1, 0f, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_924(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	__LIB_2__::func_354(uParam0, vParam1, iParam4, 1, iVar0, 0);
}

int func_925(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 0))
		{
			if (uParam0->f_98[iVar0] < 3f)
			{
				if (PED::IS_PED_IN_COMBAT((*uParam1)[iVar0], Global_35))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_926(var uParam0)
{
	float fVar0;
	if (uParam0->f_6 > 0f)
	{
		fVar0 = __LIB_0__::func_94(Global_35, __LIB_2__::func_395(uParam0->f_5), 1);
		if (fVar0 > (uParam0->f_6 + 0.5f))
		{
			return true;
		}
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_7) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_7, true, 0))
	{
		return true;
	}
	return false;
}

bool func_927(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	fVar3 = (fParam0 * fParam0);
	__LIB_3__::func_341(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (fVar3 < fVar0)
	{
		return false;
	}
	return true;
}

bool func_928(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!__LIB_0__::func_139(uParam0->f_5))
	{
		return false;
	}
	if (__LIB_1__::func_530(uParam0->f_5, 1))
	{
		__LIB_1__::func_283(uParam0, 1);
		uParam0->f_6 = __LIB_2__::func_389(uParam0->f_5, 1);
		uParam0->f_7 = __LIB_2__::func_390(uParam0->f_5, 1);
		if (bParam8)
		{
			__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
		}
		CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, vParam2, true, iParam5, iParam6, iParam7, 0);
		CAM::SET_GAMEPLAY_HINT_FOV(30f);
		return true;
	}
	return false;
}

bool func_929(var uParam0, var uParam1, int iParam2, int iParam3, float fParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_0__::func_27(*uParam0, 4))
	{
		if (__LIB_0__::func_27(iParam5, 1))
		{
			if (__LIB_0__::func_181())
			{
				__LIB_3__::func_483(uParam0, 4);
				return false;
			}
		}
		else if (__LIB_0__::func_27(iParam5, 2))
		{
			if (__LIB_0__::func_113())
			{
				__LIB_3__::func_483(uParam0, 4);
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (!__LIB_0__::func_27(*uParam0, 1))
	{
		if (!__LIB_0__::func_27(*uParam0, 4))
		{
			if (iParam3 < 0)
			{
				iParam3 = *uParam1;
			}
			iVar0 = iParam2;
			while (iVar0 <= ((iParam2 + iParam3) - 1))
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 8, 1) && !PED::IS_PED_FLEEING((*uParam1)[iVar0]))
				{
					return false;
				}
				iVar0++;
			}
		}
		__LIB_1__::func_283(&(uParam0->f_1), 0);
		__LIB_3__::func_483(uParam0, 1);
	}
	if (__LIB_0__::func_27(*uParam0, 1))
	{
		if (__LIB_1__::func_285(&(uParam0->f_1), (fParam4 + 4f)))
		{
			__LIB_3__::func_483(uParam0, 4);
			return false;
		}
		if (!__LIB_1__::func_285(&(uParam0->f_1), fParam4))
		{
			return false;
		}
		if (!__LIB_2__::func_227(0f, 1, Global_35, 1))
		{
			return false;
		}
		if (__LIB_2__::func_385(Global_35))
		{
			return false;
		}
		if (Global_1935630.f_24)
		{
			return false;
		}
		__LIB_3__::func_483(uParam0, 4);
		return true;
	}
	return false;
}

void func_930()
{
	if (!Local_14.f_44)
	{
		if (!Local_14.f_48)
		{
			__LIB_3__::func_426(&Local_14, &(Local_14.f_48), Local_14.f_3, &(Local_14.f_51.f_6));
		}
		Local_14.f_44 = 1;
	}
}

void func_931(var uParam0, float fParam1)
{
	uParam0->f_1 = (uParam0->f_1 % 4);
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (uParam0->f_193 < 2)
			{
				uParam0->f_193++;
			}
			else
			{
				uParam0->f_193 = 0;
			}
			__LIB_3__::func_433(uParam0, uParam0->f_193, fParam1);
			break;
	}
}

void func_932(int iParam0, struct<2> Param1, Vector3 vParam3)
{
	vector3 vVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		ENTITY::SET_ENTITY_HEADING(iParam0, MISC::GET_HEADING_FROM_VECTOR_2D((Param1 - vVar0.x), (Param1.f_1 - vVar0.y)));
	}
}

bool func_933(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_934(int* iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		MISC::SET_BIT(iParam0, 8);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 8);
		iParam0->f_3 = iParam2;
	}
}

bool func_935(var uParam0, int iParam1)
{
	char* sVar0;
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1, sVar0);
}

int func_936(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8)
{
	uParam0->f_2 = iParam4;
	uParam0->f_3 = iParam6;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam5, sParam7, false, true);
	}
	else if (iParam4 != -1)
	{
		Stack.Push(sParam1);
		Stack.Push(iParam5);
		Stack.Push(iParam4);
		Call_Loc(iParam2);
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(StackVal, StackVal, StackVal, false, true);
	}
	else
	{
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam5, 0, false, true);
	}
	uParam0->f_4 = sParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_5 = iParam3;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		if (!bParam8)
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
		}
		return 1;
	}
	return 0;
}

void func_937(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 7, 1);
}

void func_938(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (__LIB_3__::func_634(uParam0, 0, 0, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1, vParam1, vParam4, iParam7);
	}
}

void func_939(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (__LIB_3__::func_634(uParam0, 0, 0, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sParam1, iParam2, iParam3);
	}
}

bool func_940(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2) && ENTITY::IS_ENTITY_AN_OBJECT(*iParam2))
	{
		return true;
	}
	if (PROPSET::_IS_PROPSET_VALID(iParam0))
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(false);
		iVar1 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iParam0, iVar0, iParam1, false, false);
		if (iVar1 > 0)
		{
			if (iParam3 < 1 && iParam3 < iVar1)
			{
				*iParam2 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, iVar0));
			}
			else
			{
				*iParam2 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam3, iVar0));
			}
		}
		ITEMSET::_CLEAR_ITEMSET(iVar0);
		ITEMSET::CLEAN_ITEMSET(iVar0);
		ITEMSET::DESTROY_ITEMSET(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(*iParam2, true, false) };
		}
		return (ENTITY::DOES_ENTITY_EXIST(*iParam2) && ENTITY::IS_ENTITY_AN_OBJECT(*iParam2));
	}
	return false;
}

void func_941(int iParam0, bool bParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iParam0);
	}
}

bool func_942(var uParam0, int iParam1)
{
	return uParam0->f_2 == iParam1;
}

bool func_943(var uParam0, char* sParam1, int iParam2)
{
	if (__LIB_3__::func_634(uParam0, 0, 0, 0))
	{
		return ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_1, sParam1, iParam2);
	}
	return false;
}

bool func_944(var uParam0, int iParam1)
{
	char* sVar0;
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1, sVar0);
}

int func_945(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_35(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iParam1 == -1 || Global_1310750.f_13321[iVar0 /*9*/].f_1 == iParam1)
		{
			if (Global_1310750.f_13321[iVar0 /*9*/] == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_946(int iParam0)
{
	if (iParam0 > -1)
	{
		return true;
	}
	return false;
}

void func_947(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (bParam2 && !__LIB_3__::func_634(uParam0, 0, 0, 0))
	{
		return;
	}
	if (iParam1 != -1)
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			if (iVar0 != iParam1)
			{
				__LIB_3__::func_637(uParam0, iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			__LIB_3__::func_637(uParam0, iVar0, 0);
			iVar0++;
		}
	}
}

void func_948(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	if (uParam1->f_3 != 0)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (uParam1->f_5)
		{
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		}
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam2))
			{
				if (uParam1->f_3 != 3)
				{
					TASK::TASK_MOUNT_ANIMAL(0, iParam2, 20000, -1, 1f, 1, 0, 0);
				}
			}
		}
		switch (uParam1->f_3)
		{
			case 1:
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				break;
			case 2:
				TASK::_TASK_MOVE_IN_TRAFFIC(0, -1082130432 /* Float: -1f */, 0, 0);
				break;
			case 3:
				PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 16, true);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, uParam1->f_1, 0, 80f, -1, iParam2);
				break;
		}
		__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
		PED::SET_PED_KEEP_TASK(iParam0, true);
	}
}

void func_949(var uParam0, char* sParam1, bool bParam2)
{
	if (__LIB_3__::func_634(uParam0, 0, 0, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1, sParam1, bParam2, false);
	}
}

void func_950(var uParam0)
{
	__LIB_3__::func_187(&(uParam0->f_1));
	__LIB_3__::func_187(&(uParam0->f_12));
}

bool func_951(int iParam0, int iParam1)
{
	if (iParam0->f_1 == 1)
	{
		return (__LIB_0__::func_485() - *iParam0) >= iParam1;
	}
	return false;
}

bool func_952(var uParam0, int iParam1)
{
	return __LIB_3__::func_641(uParam0, iParam1);
}

void func_953(int iParam0, bool bParam1)
{
	if (*iParam0 > -1 && *iParam0 < 4)
	{
		if (Global_1955500[*iParam0 /*16*/].f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			if (__LIB_3__::func_749(1, 1) == *iParam0)
			{
				__LIB_3__::func_814(-1, 1, 1);
			}
			if (bParam1)
			{
				__LIB_0__::func_172(Global_1955500[*iParam0 /*16*/].f_1);
			}
			Global_1955500[*iParam0 /*16*/] = 0;
			Global_1955500[*iParam0 /*16*/].f_2 = 0;
			Global_1955500[*iParam0 /*16*/].f_3 = 0;
			*iParam0 = -1;
		}
	}
}

void func_954(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	if (__LIB_1__::func_209(uParam0->f_51))
	{
		__LIB_1__::func_222(uParam0->f_51, 0);
		fVar0 = __LIB_3__::func_292(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, __LIB_0__::func_93());
		fVar1 = __LIB_0__::func_514(!__LIB_1__::func_85(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = __LIB_2__::func_261(iVar2, __LIB_3__::func_185(uParam0->f_3), 1, iParam1, 8, 0, fVar1);
	}
}

void func_955(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_1__::func_85(iParam0, 32))
	{
		if (__LIB_3__::func_189(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { __LIB_3__::func_190(Global_35, &(uParam1->f_12)) };
				if (!__LIB_0__::func_86(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		__LIB_3__::func_261(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = __LIB_3__::func_292(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, __LIB_0__::func_93());
		if (__LIB_0__::func_1(Global_1310750[iParam0 /*111*/], 33554432))
		{
			__LIB_2__::func_261(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			__LIB_2__::func_261(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (__LIB_1__::func_85(iParam0, 1))
		{
			__LIB_1__::func_994(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	__LIB_3__::func_293(iParam0);
}

bool func_956(int iParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		__LIB_2__::func_521(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam2 = 2;
								__LIB_2__::func_196(iParam0, iParam1, *uParam2);
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
					if (*iParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam1, 1065353216 /* Float: 1f */))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 4;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_196(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (__LIB_3__::func_488(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 131072;
				__LIB_2__::func_196(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (__LIB_2__::func_622(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_196(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_957(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_3__::func_396(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_121(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_3__::func_399(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_199(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

float func_958(float fParam0, int iParam1)
{
	float fVar0;
	fVar0 = (2f * BUILTIN::SIN((180f * (fParam0 / __LIB_3__::func_713(iParam1)))));
	if (fVar0 < 0f)
	{
		return 0f;
	}
	else if (fVar0 > 1f)
	{
		return 1f;
	}
	return fVar0;
}

bool func_959(int iParam0)
{
	return !iParam0 <= 0;
}

int func_960(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 3:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 4:
			return joaat("CONSUMABLE_HERB_BAY_BOLETE");
		case 5:
			return joaat("CONSUMABLE_HERB_BLACK_BERRY");
		case 6:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 7:
			return joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
		case 8:
			return joaat("CONSUMABLE_HERB_CHANTERELLES");
		case 11:
			return joaat("CONSUMABLE_HERB_COMMON_BULRUSH");
		case 12:
			return joaat("CONSUMABLE_HERB_CREEPING_THYME");
		case 13:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 15:
			return joaat("CONSUMABLE_HERB_ENGLISH_MACE");
		case 16:
			return joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 19:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 20:
			return joaat("CONSUMABLE_HERB_INDIAN_TOBACCO");
		case 23:
			return joaat("CONSUMABLE_HERB_MILKWEED");
		case 26:
			return joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
		case 27:
			return joaat("CONSUMABLE_HERB_OREGANO");
		case 28:
			return joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM");
		case 29:
			return joaat("CONSUMABLE_HERB_PRAIRIE_POPPY");
		case 31:
			return joaat("CONSUMABLE_HERB_RAMS_HEAD");
		case 33:
			return joaat("CONSUMABLE_HERB_RED_RASPBERRY");
		case 34:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 37:
			return joaat("CONSUMABLE_HERB_VANILLA_FLOWER");
		case 38:
			return joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP");
		case 39:
			return joaat("CONSUMABLE_HERB_WILD_CARROTS");
		case 40:
			return joaat("CONSUMABLE_HERB_WILD_FEVERFEW");
		case 41:
			return joaat("CONSUMABLE_HERB_WILD_MINT");
		case 42:
			return joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY");
		case 43:
			return joaat("CONSUMABLE_HERB_YARROW");
		case 1:
			return joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
		case 9:
			return joaat("PROVISION_RO_FLOWER_CIGAR");
		case 10:
			return joaat("PROVISION_RO_FLOWER_CLAMSHELL");
		case 14:
			return joaat("PROVISION_RO_FLOWER_DRAGONS");
		case 17:
			return joaat("PROVISION_RO_FLOWER_GHOST");
		case 21:
			return joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
		case 22:
			return joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
		case 24:
			return joaat("PROVISION_RO_FLOWER_MOCCASIN");
		case 25:
			return joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
		case 30:
			return joaat("PROVISION_RO_FLOWER_QUEENS");
		case 32:
			return joaat("PROVISION_RO_FLOWER_RAT_TAIL");
		case 35:
			return joaat("PROVISION_RO_FLOWER_SPARROWS");
		case 36:
			return joaat("PROVISION_RO_FLOWER_SPIDER");
		default:
			break;
	}
	return 0;
}

int func_961(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
		default:
			return 0;
	}
	return 0;
}

bool func_962(var uParam0, int iParam1)
{
	char* sVar0;
	if (__LIB_3__::func_634(uParam0, 0, 0, 0))
	{
		Stack.Push(iParam1);
		Call_Loc(uParam0->f_6);
		sVar0 = StackVal;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1, sVar0))
			{
				return true;
			}
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_1, sVar0))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1, sVar0);
			}
		}
	}
	return false;
}

void func_963(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sParam1, iParam2, iParam3);
	}
}

bool func_964(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

float func_965(float fParam0)
{
	float fVar0;
	fVar0 = __LIB_3__::func_717(fParam0);
	return fVar0;
}

void func_966(int iParam0, int iParam1)
{
	if (__LIB_3__::func_587(iParam0, 1, 1))
	{
		__LIB_1__::func_581(&(Global_1955500[iParam0 /*16*/]), iParam1);
	}
}

void func_967(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (*uParam1 != 0)
		{
			__LIB_2__::func_56(iParam0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam2))
				{
					if (uParam1->f_5)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam2, false);
					}
					if (uParam1->f_6)
					{
						TASK::CLEAR_PED_TASKS(iParam2, true, false);
					}
					PED::_0x931B241409216C1F(iParam0, iParam2, 0);
					PED::SET_PED_CONFIG_FLAG(iParam0, 167, true);
					PED::SET_PED_CONFIG_FLAG(iParam0, 321, true);
					PED::SET_PED_CONFIG_FLAG(iParam2, 178, true);
				}
			}
			__LIB_3__::func_948(iParam0, uParam1, iParam2);
			if (uParam1->f_2 != joaat("NONE"))
			{
				PED::_0x24C82EF607105FAA(iParam0, uParam1->f_2);
			}
			if (uParam1->f_4 == 0)
			{
				iVar0 = Global_35;
				iVar1 = iParam0;
			}
			else
			{
				iVar0 = iParam0;
				iVar1 = Global_35;
			}
			EVENT::_0x7C511E91738A0828(iVar0, iVar1, *uParam1, 0);
		}
	}
}

void func_968(int* iParam0, char* sParam1, char* sParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			__LIB_1__::func_483(iParam0->f_6, sParam1, sParam2, 1);
		}
		iParam0->f_14 = sParam2;
		__LIB_1__::func_471(iParam0, 1);
		iParam0->f_5 = sParam1;
	}
}

void func_969(var uParam0, bool bParam1)
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if (Global_1955500[*uParam0 /*16*/].f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			if (__LIB_3__::func_749(1, 1) == *uParam0)
			{
				__LIB_3__::func_814(-1, 1, 1);
			}
			if (bParam1)
			{
				__LIB_0__::func_172(Global_1955500[*uParam0 /*16*/].f_1);
			}
			Global_1955500[*uParam0 /*16*/] = 0;
			Global_1955500[*uParam0 /*16*/].f_2 = 0;
			Global_1955500[*uParam0 /*16*/].f_3 = 0;
			*uParam0 = -1;
		}
	}
}

int func_970(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	if (__LIB_0__::func_58())
	{
		return 0;
	}
	if (!__LIB_0__::func_720(3, &Var0))
	{
	}
	Var0.f_1 = 0;
	Var0.f_2 = -2017996124;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0))
	{
	}
	return uVar5;
}

void func_971(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			__LIB_1__::func_240(210, 0);
			break;
		case 16:
			__LIB_1__::func_240(211, 0);
			break;
		case 33:
			__LIB_1__::func_240(212, 0);
			break;
		case 42:
			__LIB_1__::func_240(213, 0);
			break;
		case 2:
			__LIB_1__::func_240(214, 0);
			break;
		case 3:
			__LIB_1__::func_240(215, 0);
			break;
		case 43:
			__LIB_1__::func_240(216, 0);
			break;
		case 15:
			__LIB_1__::func_240(217, 0);
			break;
		case 23:
			__LIB_1__::func_240(218, 0);
			break;
		case 37:
			__LIB_1__::func_240(219, 0);
			break;
		case 26:
			__LIB_1__::func_240(220, 0);
			break;
		case 13:
			__LIB_1__::func_240(221, 0);
			break;
		case 19:
			__LIB_1__::func_240(222, 0);
			break;
		case 34:
			__LIB_1__::func_240(223, 0);
			break;
		case 38:
			__LIB_1__::func_240(224, 0);
			break;
		case 40:
			__LIB_1__::func_240(225, 0);
			break;
		case 7:
			__LIB_1__::func_240(226, 0);
			break;
		case 20:
			__LIB_1__::func_240(227, 0);
			break;
		case 18:
			__LIB_1__::func_240(228, 0);
			break;
		case 6:
			__LIB_1__::func_240(229, 0);
			break;
		case 29:
			__LIB_1__::func_240(230, 0);
			break;
		case 39:
			__LIB_1__::func_240(231, 0);
			break;
		case 11:
			break;
		case 4:
			__LIB_1__::func_240(233, 0);
			break;
		case 8:
			__LIB_1__::func_240(234, 0);
			break;
		case 28:
			__LIB_1__::func_240(235, 0);
			break;
		case 31:
			__LIB_1__::func_240(236, 0);
			break;
		case 12:
			__LIB_1__::func_240(237, 0);
			break;
		case 27:
			__LIB_1__::func_240(238, 0);
			break;
		case 41:
			__LIB_1__::func_240(239, 0);
			break;
	}
}

void func_972(int* iParam0, var uParam1, bool bParam2)
{
	if (!iParam0->f_2 && iParam0->f_7 != 0)
	{
		if ((!bParam2 && !__LIB_3__::func_703(0)) || (MISC::GET_GAME_TIMER() - iParam0->f_7) > 3500)
		{
			if (MAP::DOES_BLIP_EXIST(*iParam0))
			{
				MAP::REMOVE_BLIP(iParam0);
			}
			if (!__LIB_0__::func_86(iParam0->f_3))
			{
				*uParam1 = MAP::_BLIP_ADD_FOR_COORD(iParam0->f_1, iParam0->f_3);
				iParam0->f_2 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_6))
			{
				*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(iParam0->f_1, iParam0->f_6);
				iParam0->f_2 = 1;
			}
			if (iParam0->f_2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_9))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, iParam0->f_9);
				}
			}
		}
	}
}

void func_973(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = __LIB_3__::func_913(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = __LIB_3__::func_913(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = __LIB_3__::func_913(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = __LIB_3__::func_913(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = __LIB_3__::func_913(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = __LIB_3__::func_913(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		__LIB_0__::func_460();
	}
	if (bParam1)
	{
		__LIB_0__::func_719(0, 0);
	}
}

void func_974(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		__LIB_3__::func_428(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_1__::func_832(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_975(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (__LIB_3__::func_428(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			__LIB_1__::func_832(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_1__::func_832(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

float func_976()
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	PED::_0xF60165E1D2C5370B(PED::GET_MOUNT(Global_35), &uVar2, &fVar3);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = fVar3;
		if (fVar0 == 0f)
		{
			fVar1 = 15f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 20f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 30f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 35f;
		}
		else
		{
			fVar1 = 45f;
		}
	}
	return fVar1;
}

void func_977(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 524288);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 524288);
	}
}

float func_978(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return __LIB_0__::func_152(vVar0, vVar3, iParam2);
}

void func_979(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						__LIB_1__::func_523(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						__LIB_1__::func_483(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
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

bool func_980(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (__LIB_0__::func_86(vParam1))
	{
		return true;
	}
	if (!__LIB_2__::func_370(*uParam0, iParam4))
	{
		return false;
	}
	if (__LIB_1__::func_876(1092616192 /* Float: 10f */, 1085276160 /* Float: 5.5f */, 0))
	{
		return true;
	}
	if (__LIB_3__::func_926(uParam0))
	{
		return true;
	}
	if (uParam0->f_4 == 2)
	{
		if (iParam5 == -1)
		{
			iParam5 = 2000;
		}
		if (__LIB_1__::func_871(uParam0) >= (iParam5 + iParam4))
		{
			return true;
		}
	}
	else if (uParam0->f_4 == 1)
	{
		if (!__LIB_1__::func_530(uParam0->f_5, 1))
		{
			return true;
		}
	}
	return false;
}

void func_981(int iParam0)
{
	iLocal_74 = iParam0;
}

bool func_982()
{
	int iVar0;
	iVar0 = TASK::_0xD04241BBF6D03A5E(Global_35);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

int func_983(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!PED::IS_PED_ON_MOUNT(iParam0) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(iParam1, false)))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, bParam2);
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1868526510, true) != 1)
				{
					TASK::TASK_MOUNT_ANIMAL(iParam0, iParam1, iParam4, -1, iParam3, 1, 0, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_984(int iParam0, float fParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Global_40.f_11959.f_20[iVar0] = fParam1;
}

void func_985(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Global_40.f_11959[iVar0] = uParam1;
}

void func_986(int iParam0)
{
	__LIB_3__::func_553(iParam0, 1);
	__LIB_3__::func_387(iParam0, 1);
	__LIB_2__::func_715(iParam0, 1);
}

int func_987(int iParam0, vector3 vParam1, float fParam4)
{
	if (BUILTIN::VDIST(Global_36, vParam1) < fParam4)
	{
		if (!*iParam0 & 4 != 0)
		{
			__LIB_2__::func_613(iParam0, 1);
			return 1;
		}
	}
	else if (*iParam0 & 4 != 0)
	{
		__LIB_2__::func_613(iParam0, 0);
		return 1;
	}
	return 0;
}

bool func_988()
{
	if (__LIB_0__::func_154(Global_1935630.f_44))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return true;
				}
			}
		}
		else if (__LIB_3__::func_145())
		{
			return true;
		}
	}
	return false;
}

int func_989(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__::func_576(iParam0, 4);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = __LIB_3__::func_576(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

int func_990(int iParam0)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503, true) == 1)
		{
			return TASK::GET_SEQUENCE_PROGRESS(iParam0);
		}
	}
	return 0;
}

void func_991()
{
	__LIB_1__::func_148(&uLocal_0);
}

float func_992()
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar6 = __LIB_0__::func_23();
	iVar4 = __LIB_0__::func_710(iVar6);
	iVar5 = __LIB_0__::func_39(iVar6);
	iVar3 = __LIB_3__::func_584(iVar5, iVar4);
	iVar2 = __LIB_0__::func_40(iVar6);
	iVar1 = __LIB_0__::func_41(iVar6);
	fVar0 = (((BUILTIN::TO_FLOAT(iVar1) + (BUILTIN::TO_FLOAT((iVar2 - 1)) * 24f)) + (BUILTIN::TO_FLOAT(iVar3) * 24f)) + ((BUILTIN::TO_FLOAT(iVar4) * 365.2422f) * 24f));
	return fVar0;
}

int func_993(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 != -1)
	{
		iVar0 = __LIB_3__::func_564(iParam0, iParam1);
	}
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

int func_994(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
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
							(*uParam0)[iVar4] = iVar2;
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

bool func_995(var uParam0, int iParam1)
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
	int iVar11;
	int iVar12;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !__LIB_0__::func_27(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, uParam0->f_3, false);
					if (__LIB_0__::func_27(uParam0->f_23, 2048))
					{
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && __LIB_0__::func_71(uParam0->f_1))
					{
						__LIB_3__::func_622(uParam0->f_1);
						iVar0 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						__LIB_1__::func_336(&(uParam0->f_23), 2);
					}
				}
				if (__LIB_0__::func_86(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				__LIB_0__::func_19(uParam0, 1, iParam1);
			}
			else
			{
				__LIB_0__::func_19(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (__LIB_3__::func_663(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!__LIB_3__::func_670(uParam0, iParam1))
				{
					__LIB_3__::func_671();
				}
				__LIB_0__::func_19(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (__LIB_3__::func_670(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, __LIB_0__::func_27(uParam0->f_23, 512), 0, 0);
				}
				__LIB_0__::func_19(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (__LIB_3__::func_664(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
				}
				if (__LIB_0__::func_27(uParam0->f_23, 4096) && !PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
					iVar6 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (__LIB_0__::func_665(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = __LIB_3__::func_661(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!__LIB_0__::func_27(uParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				__LIB_0__::func_19(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (__LIB_3__::func_665(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (__LIB_0__::func_27(uParam0->f_23, 8192))
				{
					if (__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, 0, iVar7, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
						if (__LIB_0__::func_27(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (__LIB_0__::func_27(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (__LIB_0__::func_27(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					__LIB_1__::func_474(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				__LIB_0__::func_19(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!__LIB_0__::func_27(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 128) && __LIB_1__::func_313(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((__LIB_0__::func_86(uParam0->f_11) || !__LIB_0__::func_163(uParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (__LIB_3__::func_625(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, __LIB_0__::func_27(uParam0->f_23, 8)) && (!__LIB_0__::func_27(uParam0->f_23, 64) || MISC::ABSF(__LIB_3__::func_592(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (__LIB_0__::func_27(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				__LIB_0__::func_37(&(uParam0->f_5));
				__LIB_0__::func_19(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_996(int iParam0)
{
	var uVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return true;
	}
	return false;
}

struct<4> func_997(char* sParam0)
{
	char cVar0[32];
	StringCopy(&cVar0, sParam0, 32);
	return cVar0;
}

int func_998(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar1 = PED::_0x5463C962BC7777C3(iParam0, iParam1, &uVar0, 1, 0);
	if (iVar1 != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_999(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_336(iParam0, 65536);
	}
	else
	{
		__LIB_0__::func_516(iParam0, 65536);
	}
}
