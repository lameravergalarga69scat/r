void func_0()
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	__LIB_1__::func_446(&iVar0, 0, 0, 0, 2, 0, 0, 0);
	if (__LIB_4__::func_605(0) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chinLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chinShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chinLong");
	}
	if (__LIB_4__::func_605(1) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chopsLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chopsShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chopsLong");
	}
	if (__LIB_4__::func_605(2) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "stacheLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "stacheShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "stacheLong");
	}
}

void func_1(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(__LIB_1__::func_710(iParam1), 1);
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
		__LIB_8__::func_934(uParam0);
	}
}

int func_2(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
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
		__LIB_8__::func_943(iVar0, iParam0, __LIB_3__::func_134(iParam1), 1, 0, 1);
	}
	__LIB_0__::func_660(iParam0);
	return 1;
}

int func_3()
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return -1;
	}
	iVar0 = __LIB_1__::func_194();
	if (iVar0 == -1)
	{
		return 150000;
	}
	if (iVar0 <= 1)
	{
		return 30000;
	}
	if (iVar0 == 2 && !__LIB_1__::func_185(24))
	{
		return 50000;
	}
	return 150000;
}

bool func_4(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = -1;
	if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = iParam1;
	}
	if (iParam4 != 0)
	{
		iVar1 = iParam4;
	}
	else
	{
		iVar1 = __LIB_0__::func_223(iParam1);
	}
	if (iVar0 == -1 && !__LIB_1__::func_87(iVar1, __LIB_0__::func_241()))
	{
		return true;
	}
	if (uParam2->f_1 != 0 && __LIB_0__::func_51(uParam2, 1))
	{
		if (uParam2->f_1 == iVar1)
		{
			if (bParam3)
			{
				return __LIB_8__::func_925(iParam0, uParam2);
			}
			else
			{
				return true;
			}
		}
		else if (uParam2->f_1 != iVar1)
		{
			__LIB_4__::func_603(uParam2);
		}
	}
	if (!__LIB_0__::func_51(uParam2, 1))
	{
		__LIB_0__::func_608(&(uParam2->f_1));
		if (!bParam5)
		{
			if (!__LIB_1__::func_713(&(uParam2->f_1), &uVar2, iVar1, iVar0, 1, 0))
			{
				return true;
			}
		}
		uParam2->f_1 = iVar1;
		__LIB_0__::func_7(uParam2, 1);
	}
	if (!bParam3)
	{
		return true;
	}
	return __LIB_8__::func_925(iParam0, uParam2);
}

int func_5(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	bVar1 = true;
	if (uParam1->f_1 == 0)
	{
		return 0;
	}
	if (!__LIB_3__::func_128(iParam0, uParam1))
	{
		bVar1 = false;
	}
	iVar3 = uParam1->f_1;
	iVar2 = __LIB_0__::func_449(iVar3);
	if (iVar2 == -1)
	{
		iVar2 = 0;
	}
	if (iVar2 >= 0 && iVar2 <= 5)
	{
		bVar0 = true;
	}
	Global_1905941 = iVar2;
	__LIB_0__::func_828(Global_40.f_7729, 4096);
	__LIB_0__::func_806(Global_1905941, 4096);
	Global_40.f_7729 = Global_1905941;
	__LIB_3__::func_129(&(uParam1->f_1));
	iVar4 = -1;
	if (!bVar0)
	{
		iVar4 = __LIB_4__::func_604(uParam1->f_1);
	}
	__LIB_0__::func_947(&(Global_1946804.f_1497), iVar4, 0);
	__LIB_8__::func_943(iVar3, iParam0, bVar0, 1, bVar1, 0);
	__LIB_0__::func_660(iParam0);
	if (bParam2)
	{
		__LIB_4__::func_603(uParam1);
	}
	if (bParam3)
	{
		__LIB_1__::func_10();
	}
	if (bParam4)
	{
		if (bParam5)
		{
			__LIB_1__::func_36(0);
		}
		else
		{
			__LIB_1__::func_36(2048);
		}
	}
	return 1;
}

bool func_6(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return true;
	}
	if (!__LIB_0__::func_627(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return true;
		}
		__LIB_4__::func_471(iParam0, 0);
	}
	if (bParam2)
	{
		if (!__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 1024))
		{
			__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 1024);
		}
	}
	if (bParam4 && !__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 8192))
	{
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 8192);
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
	{
		if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 64))
		{
			return true;
		}
		return false;
	}
	if (!__LIB_5__::func_353(iParam0))
	{
		__LIB_1__::func_319(Global_1347702[iParam0 /*49*/].f_15);
	}
	else if (bParam3 && !__LIB_5__::func_545(Global_1347702[iParam0 /*49*/].f_15))
	{
		__LIB_5__::func_506(Global_1347702[iParam0 /*49*/].f_15);
	}
	if (!__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 256))
	{
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 256);
	}
	return false;
}

void func_7(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = __LIB_1__::func_986(iParam0);
		__LIB_2__::func_74(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo1_type") || (bParam3 && DECORATOR::DECOR_GET_INT(iParam0, "loot_ammo1_type") == iParam1))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_type", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_amt", iParam2);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo2_type") || (bParam3 && DECORATOR::DECOR_GET_INT(iParam0, "loot_ammo2_type") == iParam1))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_type", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_amt", iParam2);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo3_type") || (bParam3 && DECORATOR::DECOR_GET_INT(iParam0, "loot_ammo3_type") == iParam1))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_type", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_amt", iParam2);
	}
}

void func_8(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_8__::func_962(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_8__::func_962(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_8__::func_962(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_8__::func_962(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_8__::func_962(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_8__::func_962(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_8__::func_962(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_8__::func_962(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_8__::func_962(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_8__::func_962(-1, iParam0);
	}
}

void func_9(char[4] cParam0)
{
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	switch (cParam0->f_607)
	{
		case 31:
			MISC::_SET_WEATHER_TYPE(joaat("FOG"), false, true, true, 45f, false);
			break;
	}
}

void func_10(bool bParam0)
{
	if (bParam0)
	{
	}
}

void func_11(char[4] cParam0, int iParam1)
{
	cParam0->f_13105 = iParam1;
}

void func_12(char[4] cParam0, int iParam1)
{
	if (__LIB_6__::func_872(cParam0, 2097152))
	{
		return;
	}
	cParam0->f_1124.f_1 = (cParam0->f_1124.f_1 || iParam1);
}

void func_13(int iParam0)
{
	int iVar0;
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!__LIB_0__::func_28())
	{
		return;
	}
	if (!WEAPON::IS_WEAPON_VALID(iParam0) || iParam0 == joaat("WEAPON_UNARMED"))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, false);
}

void func_14(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	__LIB_6__::func_869(cParam0, 2048);
}

void func_15(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	__LIB_6__::func_869(cParam0, 1024);
}

void func_16(char[4] cParam0, int iParam1)
{
	cParam0->f_8267 = iParam1;
	__LIB_6__::func_869(cParam0, 131072);
}

void func_17(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		return;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(Local_14);
	if (cParam0->f_13179 == -1 || cParam0->f_13179 > (iVar0 - 1))
	{
		cParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = cParam0->f_13179;
	while (iVar1 >= 0)
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_14));
		if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			ITEMSET::REMOVE_FROM_ITEMSET(iVar3, Local_14);
		}
		iVar2++;
		if (iVar2 > 5)
		{
		}
		else
		{
			iVar1 = (iVar1 + -1);
		}
	}
	cParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		cParam0->f_13179 = (ITEMSET::GET_ITEMSET_SIZE(Local_14) - 1);
	}
}

bool func_18(char[4] cParam0)
{
	if ((__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_872(cParam0, 128)) && !__LIB_4__::func_511())
	{
		return false;
	}
	return true;
}

bool func_19(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return __LIB_0__::func_21(iParam0, 16777216);
}

int func_20(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return -15;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/].f_1;
	}
	return Global_1058888.f_40615[iParam0 /*11*/].f_1;
}

void func_21(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_1 = iParam1;
		return;
	}
	Global_1058888.f_40615[iParam0 /*11*/].f_1 = iParam1;
}

void func_22(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_23118[iParam0 /*11*/].f_3 = iParam1;
}

void func_23(int iParam0)
{
	Global_40.f_1095.f_3054.f_2 = iParam0;
}

bool func_24(char* sParam0)
{
	return AUDIO::_0xF01C570E0A0A1E67(sParam0);
}

void func_25(int iParam0, vector3 vParam1, float fParam4)
{
	if (!GRAPHICS::_IS_TRACKED_POINT_VALID(*iParam0))
	{
		*iParam0 = GRAPHICS::CREATE_TRACKED_POINT();
		GRAPHICS::SET_TRACKED_POINT_INFO(*iParam0, vParam1, fParam4);
	}
}

int func_26(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::_BLIP_SET_MODIFIER(*iParam0, -1269631044);
		return 0;
	}
	return 1;
}

bool func_27(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 32:
		case 35:
		case 38:
		case 57:
		case 61:
		case 76:
		case 78:
		case 93:
		case 95:
		case 105:
		case 115:
			return true;
	}
	return false;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 29:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 30:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 31:
			return joaat("REGION_BLU_COPPERHEAD");
		case 32:
			return joaat("REGION_BLU_SISIKA");
		case 33:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 34:
			return joaat("REGION_CML_DINO_LADY");
		case 35:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 36:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 37:
			return joaat("REGION_GRT_BEECHERS");
		case 38:
			return joaat("REGION_GRT_BLACKWATER");
		case 39:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 40:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 41:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 50:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 51:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 42:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 52:
			return joaat("REGION_GRZ_COHUTTA");
		case 43:
			return joaat("REGION_GRZ_COLTER");
		case 44:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 53:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 45:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 46:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 47:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 48:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 54:
			return joaat("REGION_GRZ_THELOFT");
		case 55:
			return joaat("REGION_GRE_VETERAN");
		case 56:
			return joaat("REGION_GRZ_WAPITI");
		case 49:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 57:
			return joaat("REGION_GUA_AGUASDULCES");
		case 58:
			return joaat("REGION_GUA_CAMP");
		case 59:
			return joaat("REGION_GUA_CINCOTORRES");
		case 60:
			return joaat("REGION_GUA_LACAPILLA");
		case 61:
			return joaat("REGION_GUA_MANICATO");
		case 62:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 64:
			return joaat("REGION_HRT_CARMODYDELL");
		case 65:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 66:
			return joaat("REGION_HRT_CROP_FARM");
		case 67:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 68:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 69:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 70:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 71:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 72:
			return joaat("REGION_HRT_LARNEDSOD");
		case 73:
			return joaat("REGION_HRT_LOONY_CULT");
		case 74:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 75:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 76:
			return joaat("REGION_HRT_VALENTINE");
		case 77:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 78:
			return joaat("REGION_ROA_ANNESBURG");
		case 79:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 63:
			return joaat("REGION_ROA_BEECHERS_C");
		case 80:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 81:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 82:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 83:
			return joaat("REGION_ROA_DOVERHILL");
		case 84:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 85:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 86:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 87:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 88:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 89:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 90:
			return joaat("REGION_ROA_TRAPPER");
		case 91:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 92:
			return joaat("REGION_ROA_VANHORNPOST");
		case 93:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 94:
			return joaat("REGION_SCM_BULGERGLADE");
		case 95:
			return joaat("REGION_SCM_CALIGAHALL");
		case 96:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 97:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 98:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 99:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 100:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 101:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 102:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 103:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 104:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 105:
			return joaat("REGION_SCM_RHODES");
		case 106:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 107:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 109:
			return joaat("REGION_TAL_COCHINAY");
		case 110:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 111:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 112:
			return joaat("REGION_TAL_TANNERSREACH");
		case 108:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 113:
			return joaat("REGION_TAL_TRAPPER");
		case 126:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 127:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 120:
			return joaat("REGION_CHO_ARMADILLO");
		case 121:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 122:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 124:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 123:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 125:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 114:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 115:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 116:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 129:
			return joaat("REGION_GAP_SOLOMONS_FOLLY");
		case 117:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 118:
			return joaat("REGION_RIO_FORT_MERCER");
		case 119:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 128:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case joaat("REGION_BAY_CRAWDADWILLIES"):
			return 0;
		case joaat("REGION_BAY_MACOMBS_END"):
			return 1;
		case joaat("REGION_BAY_MERKINSWALLER"):
			return 2;
		case joaat("REGION_BAY_LAGRAS"):
			return 3;
		case joaat("REGION_BAY_LAKAY"):
			return 4;
		case joaat("REGION_BAY_SAINT_DENIS"):
			return 5;
		case joaat("REGION_BAY_ORANGE_PLANTATION"):
			return 6;
		case joaat("REGION_BAY_SERIAL_KILLER"):
			return 7;
		case joaat("REGION_BAY_SERENDIPITY"):
			return 8;
		case joaat("REGION_BAY_SHADYBELLE"):
			return 9;
		case joaat("REGION_BAY_SILTWATERSTRAND"):
			return 10;
		case joaat("REGION_BGV_APPLESEEDTIMBER"):
			return 11;
		case joaat("REGION_BGV_BERYLS_DREAM"):
			return 12;
		case joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER"):
			return 13;
		case joaat("REGION_BGV_DAKOTARIVER_TRAPPER"):
			return 14;
		case joaat("REGION_BGV_FORTRIGGS"):
			return 15;
		case joaat("REGION_BGV_HANGINGDOG"):
			return 16;
		case joaat("REGION_BGV_LONEMULESTEAD"):
			return 17;
		case joaat("REGION_BGV_MISSING_HUSBAND"):
			return 18;
		case joaat("REGION_BGV_MONTO_REST"):
			return 19;
		case joaat("REGION_BGV_OWANJILA_DAM"):
			return 20;
		case joaat("REGION_BGV_PAINTEDSKY"):
			return 21;
		case joaat("REGION_BGV_PRONGHORN"):
			return 22;
		case joaat("REGION_BGV_RIGGS_STATION"):
			return 23;
		case joaat("REGION_BGV_SHACK"):
			return 24;
		case joaat("REGION_BGV_SHEPHERDS_RISE"):
			return 25;
		case joaat("REGION_BGV_STRAWBERRY"):
			return 26;
		case joaat("REGION_BGV_VALLEY_VIEW"):
			return 27;
		case joaat("REGION_BGV_WATSONSCABIN"):
			return 29;
		case joaat("REGION_BLU_CANEBREAK_MANOR"):
			return 30;
		case joaat("REGION_BLU_COPPERHEAD"):
			return 31;
		case joaat("REGION_BLU_SISIKA"):
			return 32;
		case joaat("REGION_CML_BACCHUSBRIDGE"):
			return 33;
		case joaat("REGION_CML_DINO_LADY"):
			return 34;
		case joaat("REGION_CML_OLDFORTWALLACE"):
			return 35;
		case joaat("REGION_CML_SIXPOINTCABIN"):
			return 36;
		case joaat("REGION_GRT_BEECHERS"):
			return 37;
		case joaat("REGION_GRT_BLACKWATER"):
			return 38;
		case joaat("REGION_GRT_QUAKERS_COVE"):
			return 39;
		case joaat("REGION_GRZ_ADLERRANCH"):
			return 40;
		case joaat("REGION_GRZ_DEAD_RIVAL"):
			return 41;
		case joaat("REGION_GRZ_CALUMETRAVINE"):
			return 50;
		case joaat("REGION_GRE_CIVIL_WAR_BRIDE"):
			return 51;
		case joaat("REGION_GRZ_CHEZPORTER"):
			return 42;
		case joaat("REGION_GRZ_COHUTTA"):
			return 52;
		case joaat("REGION_GRZ_COLTER"):
			return 43;
		case joaat("REGION_GRZ_FROZEN_EXPLORER"):
			return 44;
		case joaat("REGION_GRZ_GUNFIGHT"):
			return 53;
		case joaat("REGION_GRZ_MILLESANI_CLAIM"):
			return 45;
		case joaat("REGION_GRZ_MOUNTAIN_MAN"):
			return 46;
		case joaat("REGION_GRZ_STARVING_CHILDREN"):
			return 47;
		case joaat("REGION_GRZ_TEMPEST_RIM"):
			return 48;
		case joaat("REGION_GRZ_THELOFT"):
			return 54;
		case joaat("REGION_BGV_WALLACE_STATION"):
			return 28;
		case joaat("REGION_GRE_VETERAN"):
			return 55;
		case joaat("REGION_GRZ_WAPITI"):
			return 56;
		case joaat("REGION_GRZ_WINTERMINING_TOWN"):
			return 49;
		case joaat("REGION_GUA_AGUASDULCES"):
			return 57;
		case joaat("REGION_GUA_CAMP"):
			return 58;
		case joaat("REGION_GUA_CINCOTORRES"):
			return 59;
		case joaat("REGION_GUA_LACAPILLA"):
			return 60;
		case joaat("REGION_GUA_MANICATO"):
			return 61;
		case joaat("REGION_HRT_ABANDONED_MILL"):
			return 62;
		case joaat("REGION_HRT_CARMODYDELL"):
			return 64;
		case joaat("REGION_HRT_CORNWALLKEROSENE"):
			return 65;
		case joaat("REGION_HRT_CROP_FARM"):
			return 66;
		case joaat("REGION_HRT_CUMBERLANDFALLS"):
			return 67;
		case joaat("REGION_HRT_DOWNSRANCH"):
			return 68;
		case joaat("REGION_HRT_EMERALDRANCH"):
			return 69;
		case joaat("REGION_HRT_GRANGERS_HOGGERY"):
			return 70;
		case joaat("REGION_HRT_HORSESHOEOVERLOOK"):
			return 71;
		case joaat("REGION_HRT_LARNEDSOD"):
			return 72;
		case joaat("REGION_HRT_LOONY_CULT"):
			return 73;
		case joaat("REGION_HRT_LUCKYSCABIN"):
			return 74;
		case joaat("REGION_HRT_SWANSONS_STATION"):
			return 75;
		case joaat("REGION_HRT_VALENTINE"):
			return 76;
		case joaat("REGION_ROA_ABERDEENPIGFARM"):
			return 77;
		case joaat("REGION_ROA_ANNESBURG"):
			return 78;
		case joaat("REGION_ROA_BEECHERS_C"):
			return 63;
		case joaat("REGION_ROA_BEAVERHOLLOW"):
			return 79;
		case joaat("REGION_ROA_BLACK_BALSAM_RISE"):
			return 80;
		case joaat("REGION_ROA_BRANDYWINE_DROP"):
			return 81;
		case joaat("REGION_ROA_BUTCHERCREEK"):
			return 82;
		case joaat("REGION_ROA_DOVERHILL"):
			return 83;
		case joaat("REGION_ROA_HAPPY_FAMILY"):
			return 84;
		case joaat("REGION_ROA_ISOLATIONIST"):
			return 85;
		case joaat("REGION_ROA_MACLEANSHOUSE"):
			return 86;
		case joaat("REGION_ROA_MOSSY_FLATS"):
			return 87;
		case joaat("REGION_ROA_ROANOKE_VALLEY"):
			return 88;
		case joaat("REGION_ROA_ROCKYSEVEN"):
			return 89;
		case joaat("REGION_ROA_TRAPPER"):
			return 90;
		case joaat("REGION_ROA_VANHORNMANSION"):
			return 91;
		case joaat("REGION_ROA_VANHORNPOST"):
			return 92;
		case joaat("REGION_SCM_BRAITHWAITEMANOR"):
			return 93;
		case joaat("REGION_SCM_BULGERGLADE"):
			return 94;
		case joaat("REGION_SCM_CALIGAHALL"):
			return 95;
		case joaat("REGION_SCM_CATFISHJACKSONS"):
			return 96;
		case joaat("REGION_SCM_CLEMENSCOVE"):
			return 97;
		case joaat("REGION_SCM_CLEMENSPOINT"):
			return 98;
		case joaat("REGION_SCM_HORSE_SHOP"):
			return 101;
		case joaat("REGION_SCM_LONNIESSHACK"):
			return 102;
		case joaat("REGION_SCM_LOVE_TRIANGLE"):
			return 103;
		case joaat("REGION_SCM_COMPSONS_STEAD"):
			return 99;
		case joaat("REGION_SCM_DAIRY_FARM"):
			return 100;
		case joaat("REGION_SCM_RADLEYS_PASTURE"):
			return 104;
		case joaat("REGION_SCM_RHODES"):
			return 105;
		case joaat("REGION_SCM_SLAVE_PEN"):
			return 106;
		case joaat("REGION_TAL_AURORA_BASIN"):
			return 107;
		case joaat("REGION_TAL_DEAD_SETTLER"):
			return 108;
		case joaat("REGION_TAL_COCHINAY"):
			return 109;
		case joaat("REGION_TAL_MANZANITAPOST"):
			return 110;
		case joaat("REGION_TAL_PACIFICUNIONRR"):
			return 111;
		case joaat("REGION_TAL_TANNERSREACH"):
			return 112;
		case joaat("REGION_TAL_TRAPPER"):
			return 113;
		case joaat("REGION_HEN_MACFARLANES_RANCH"):
			return 126;
		case joaat("REGION_HEN_THIEVES_LANDING"):
			return 127;
		case joaat("REGION_CHO_ARMADILLO"):
			return 120;
		case joaat("REGION_CHO_COOTS_CHAPEL"):
			return 121;
		case joaat("REGION_CHO_DON_JULIO_HOUSE"):
			return 122;
		case joaat("REGION_CHO_RIDGEWOOD_FARM"):
			return 124;
		case joaat("REGION_CHO_RILEYS_CHARGE"):
			return 123;
		case joaat("REGION_CHO_TWIN_ROCKS"):
			return 125;
		case joaat("REGION_GAP_GAPTOOTH_BREACH"):
			return 114;
		case joaat("REGION_GAP_TUMBLEWEED"):
			return 115;
		case joaat("REGION_GAP_RATHSKELLER_FORK"):
			return 116;
		case joaat("REGION_GAP_SOLOMONS_FOLLY"):
			return 129;
		case joaat("REGION_RIO_BENEDICT_POINT"):
			return 117;
		case joaat("REGION_RIO_FORT_MERCER"):
			return 118;
		case joaat("REGION_RIO_PLAIN_VIEW"):
			return 119;
		case joaat("REGION_CENTRALUNIONRR"):
			return 128;
		default:
			break;
	}
	return -1;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISTRICT_BAYOU_NWA"):
			return 0;
		case joaat("DISTRICT_BIG_VALLEY"):
			return 1;
		case joaat("DISTRICT_BLUEGILL_MARSH"):
			return 2;
		case joaat("DISTRICT_CUMBERLAND_FOREST"):
			return 3;
		case joaat("DISTRICT_GREAT_PLAINS"):
			return 4;
		case joaat("DISTRICT_GRIZZLIES"):
			return 5;
		case joaat("DISTRICT_GRIZZLIES_EAST"):
			return 6;
		case joaat("DISTRICT_GRIZZLIES_WEST"):
			return 7;
		case joaat("DISTRICT_GUAMA"):
			return 8;
		case joaat("DISTRICT_HEARTLAND"):
			return 9;
		case joaat("DISTRICT_ROANOKE_RIDGE"):
			return 10;
		case joaat("DISTRICT_SCARLETT_MEADOWS"):
			return 11;
		case joaat("DISTRICT_TALL_TREES"):
			return 12;
		case joaat("DISTRICT_GAPTOOTH_RIDGE"):
			return 13;
		case joaat("DISTRICT_RIO_BRAVO"):
			return 14;
		case joaat("DISTRICT_CHOLLA_SPRINGS"):
			return 15;
		case joaat("DISTRICT_HENNIGANS_STEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

float func_31(char[4] cParam0)
{
	return __LIB_0__::func_265(&(cParam0->f_603));
}

bool func_32(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(cParam0->f_5423[iVar0 /*65*/])))
		{
			if (cParam0->f_5423[iVar0 /*65*/] == iParam1)
			{
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_33(char[4] cParam0)
{
	__LIB_8__::func_632(cParam0);
}

void func_34(char[4] cParam0)
{
	__LIB_6__::func_897(cParam0);
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		__LIB_6__::func_868(cParam0, 1024);
	}
}

void func_35(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_8__::func_639(cParam0);
	SCRIPTS::_0x50B72A754EE64A71(iVar0);
}

void func_36(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

void func_37(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_8__::func_639(cParam0);
	SCRIPTS::_0x7D654266025E921B(iVar0);
}

bool func_38(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(cParam0->f_5423[iVar0 /*65*/])))
		{
			if (((cParam0->f_5423[iVar0 /*65*/].f_9 == 40 && ENTITY::IS_ENTITY_A_PED(iParam1)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == PLAYER::_0x46FA0AE18F4C7FA9(PLAYER::GET_PLAYER_INDEX())) && cParam0->f_5423[iVar0 /*65*/] != iParam1)
			{
				*iParam2 = iVar0;
				return (((1 && !__LIB_0__::func_125(iParam1)) && cParam0->f_5423[iVar0 /*65*/].f_9 == __LIB_4__::func_633(iParam1)) && cParam0->f_5423[iVar0 /*65*/] != iParam1);
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_39(char[4] cParam0, bool bParam1)
{
	if (__LIB_6__::func_862(cParam0, 128) && __LIB_0__::func_91())
	{
		return true;
	}
	if (__LIB_1__::func_871(&(cParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!__LIB_0__::func_0(cParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	return true;
}

int func_40(char[4] cParam0)
{
	return __LIB_8__::func_664(cParam0, __LIB_6__::func_864(cParam0));
}

int func_41(char[4] cParam0)
{
	char[] cVar0[8];
	cVar0 = __LIB_0__::func_631(cParam0->f_607);
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_42(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	__LIB_0__::func_928(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_43(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_6__::func_872(cParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_4__::func_541(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_49(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0 /*3*/] = iParam1;
	cParam0->f_638[iVar0 /*3*/].f_2 = (cParam0->f_638[iVar0 /*3*/].f_2 || iParam2);
}

void func_44(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (__LIB_6__::func_872(cParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_5__::func_549(&(cParam0->f_5188), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_557(&(cParam0->f_5188));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5188[iVar0 /*5*/] = iParam1;
	cParam0->f_5188[iVar0 /*5*/].f_1 = iParam3;
	cParam0->f_5188[iVar0 /*5*/].f_2 = iParam4;
	cParam0->f_5188[iVar0 /*5*/].f_4 = (cParam0->f_5188[iVar0 /*5*/].f_4 || iParam2);
}

void func_45(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	char cVar0[32];
	__LIB_8__::func_707(cParam0, iParam1, iParam9);
	__LIB_8__::func_680(cParam0, iParam1);
	__LIB_8__::func_679(cParam0, iParam1, iParam2);
	__LIB_8__::func_681(cParam0, &iParam3, iParam1, 0);
	__LIB_8__::func_681(cParam0, &iParam4, iParam1, 2);
	__LIB_8__::func_681(cParam0, &iParam5, iParam1, 4);
	__LIB_8__::func_681(cParam0, &iParam6, iParam1, 5);
	__LIB_8__::func_681(cParam0, &iParam7, iParam1, 7);
	__LIB_8__::func_670(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	__LIB_8__::func_682(cParam0, iParam1, cVar0);
	__LIB_8__::func_683(cParam0, iParam1, iParam10);
}

void func_46(char[4] cParam0, char[4] cParam1)
{
	__LIB_4__::func_980(&(cParam0->f_7375), cParam1);
}

void func_47(char[4] cParam0)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	if (__LIB_6__::func_862(cParam0, 256))
	{
		return;
	}
	if (!__LIB_6__::func_862(cParam0, 1048576))
	{
		if (__LIB_1__::func_923() || __LIB_1__::func_652())
		{
			__LIB_6__::func_868(cParam0, 1048576);
		}
	}
	else if (!__LIB_1__::func_923() && !__LIB_1__::func_652())
	{
		__LIB_6__::func_887(cParam0, 1048576);
	}
	if (!__LIB_6__::func_862(cParam0, 134217728))
	{
		if ((__LIB_6__::func_862(cParam0, 1048576) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 524288)) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1))
		{
			if (!Global_1935630.f_12)
			{
				WEAPON::_0xB832F1A686B9B810(Global_35, true, 0);
				__LIB_6__::func_868(cParam0, 134217728);
			}
		}
	}
	else if ((!__LIB_6__::func_862(cParam0, 1048576) || __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 524288)) || __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1))
	{
		if (!Global_1935630.f_12)
		{
			WEAPON::_0xB832F1A686B9B810(Global_35, false, 0);
			__LIB_6__::func_887(cParam0, 134217728);
		}
	}
}

void func_48(char[4] cParam0)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1048576))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, true);
	}
}

void func_49(char[4] cParam0)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2097152))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
	}
}

bool func_50(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_24(iParam1);
	if (!__LIB_4__::func_976(iVar0))
	{
		return false;
	}
	iVar1 = __LIB_4__::func_564(iParam2);
	if (!__LIB_4__::func_565(iVar1))
	{
		return false;
	}
	if (!__LIB_8__::func_691(cParam0, iParam1, iParam2))
	{
		return true;
	}
	Stack.Push(cParam0);
	Call_Loc(cParam0->f_1[iVar0 /*22*/][iVar1]);
	if (StackVal)
	{
		return true;
	}
	return false;
}

void func_51(char[4] cParam0)
{
	if (!__LIB_0__::func_2() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		__LIB_1__::func_148(&(cParam0->f_603));
	}
}

bool func_52(char[4] cParam0, int iParam1)
{
	if (__LIB_6__::func_862(cParam0, 4194304))
	{
		return false;
	}
	if (!__LIB_8__::func_705(cParam0, iParam1, 2))
	{
		return false;
	}
	return true;
}

void func_53(char[4] cParam0)
{
	__LIB_5__::func_309(&(cParam0->f_7375));
}

void func_54(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	iVar0 = uParam0->f_2078;
	if (iVar0 >= 0 && !__LIB_4__::func_579(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1406[iVar0 /*41*/].f_1, true) <= uParam0->f_1406[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_2082 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1735[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_2082), __LIB_1__::func_569(uParam0->f_1735[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_2082), __LIB_0__::func_166(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1735[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_2082.f_8), __LIB_1__::func_569(uParam0->f_1735[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_2082.f_8), __LIB_4__::func_616(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_2082)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_2082.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1735[iVar0 /*22*/])
		{
			if (!__LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 8))
			{
				if (!__LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 8))
				{
					__LIB_4__::func_706(&iVar19, uParam0->f_1735[iVar0 /*22*/].f_1);
					__LIB_4__::func_707(&(uParam0->f_2294), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_1406[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1735[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 65)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1735[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (__LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1735[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292) || iVar26 != uParam0->f_2292))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_2082));
											__LIB_4__::func_612(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1735[iVar0 /*22*/].f_18 != 0f || uParam0->f_1735[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_3__::func_978(Global_35, iVar23, 1), uParam0->f_1735[iVar0 /*22*/].f_18, 0f, uParam0->f_1735[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1735[iVar0 /*22*/].f_18 != 0f || uParam0->f_1735[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_0__::func_152(Global_36, uParam0->f_1406[iVar0 /*41*/].f_1, 1), uParam0->f_1735[iVar0 /*22*/].f_18, 0f, uParam0->f_1735[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_1406[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_1406[iVar0 /*41*/].f_14;
							bVar29 = __LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 2);
							bVar30 = (__LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = __LIB_0__::func_1(uParam0->f_1735[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_2082));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									__LIB_0__::func_489(0, 0);
								}
								bVar32 = true;
								__LIB_4__::func_612(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_2082), 4))
							{
								bVar32 = (bVar32 || uParam0->f_2098.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_2098.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_2098.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_2098.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_2098.f_22 != bVar30);
								uParam0->f_2098.f_16 = iVar23;
								uParam0->f_2098.f_17 = { vVar20 };
								uParam0->f_2098.f_20 = fVar27;
								uParam0->f_2098.f_21 = fVar28;
								uParam0->f_2098.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_2098 = { uParam0->f_2082 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_2098));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_2082), 9))
							{
								bVar32 = (bVar32 || uParam0->f_2121.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_2121.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_2121.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_2121.f_21 != bVar30);
								uParam0->f_2121.f_16 = iVar23;
								uParam0->f_2121.f_17 = { vVar20 };
								uParam0->f_2121.f_20 = !bVar31;
								uParam0->f_2121.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_2121 = { uParam0->f_2082 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_2121));
								}
							}
							Jump @1468; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_2082)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_2082));
							}
							StringCopy(&(uParam0->f_2082), "", 64);
							StringCopy(&(uParam0->f_2082.f_8), "", 64);
							__LIB_4__::func_617(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

bool func_55(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	if (__LIB_0__::func_755(sParam1, 1))
	{
		return false;
	}
	if (__LIB_4__::func_623(sParam1) == 8)
	{
		return true;
	}
	if (iParam3 != sParam1->f_11 || (sParam1->f_11 == 49 && iParam2 != 25))
	{
		return false;
	}
	if ((iParam4 == 3 && __LIB_4__::func_623(sParam1) == 0) && (__LIB_0__::func_91() || Global_16))
	{
		return true;
	}
	bVar0 = false;
	if ((iParam4 == 4 || iParam4 == 5) || iParam4 == 6)
	{
		bVar0 = true;
	}
	switch (__LIB_4__::func_623(sParam1))
	{
		case 2:
			return (((!__LIB_8__::func_650(cParam0) || bParam5) && bVar0) && !__LIB_8__::func_705(cParam0, iParam2, 67108864));
		case 1:
			return ((!__LIB_0__::func_91() && !CAM::IS_GAMEPLAY_HINT_ACTIVE()) && bVar0);
		case 14:
			return (!__LIB_0__::func_91() && (Global_16 || CAM::IS_GAMEPLAY_HINT_ACTIVE()));
		case 4:
			return ((__LIB_8__::func_650(cParam0) || __LIB_8__::func_705(cParam0, iParam2, 1073741824 /* Float: 2f */)) && bVar0);
		case 3:
			return (iParam4 == 7 || __LIB_8__::func_705(cParam0, iParam2, 67108864));
		case 5:
		case 15:
		case 17:
		case 18:
			return ((__LIB_6__::func_889(cParam0) == sParam1->f_12 && bVar0) && (bVar0 || __LIB_4__::func_623(sParam1) == 15));
		case 6:
		case 16:
		case 19:
		case 20:
			return ((__LIB_8__::func_618(cParam0) == sParam1->f_12 && bVar0) && (bVar0 || __LIB_4__::func_623(sParam1) == 16));
		case 11:
			return __LIB_6__::func_862(cParam0, 2097152);
		case 12:
			return __LIB_8__::func_705(cParam0, iParam2, 8388608);
		case 13:
			return (!__LIB_8__::func_705(cParam0, iParam2, 8388608) && bVar0);
	}
	return false;
}

void func_56(char[4] cParam0, int iParam1)
{
	__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), iParam1);
}

void func_57(char[4] cParam0, char* sParam1, bool bParam2)
{
	if (!__LIB_8__::func_652(cParam0))
	{
		StringCopy(&(cParam0->f_13146), UILOG::_UILOG_GET_CACHED_OBJECTIVE(), 128);
	}
	else
	{
		StringCopy(&(cParam0->f_13162), UILOG::_UILOG_GET_CACHED_OBJECTIVE(), 128);
	}
	__LIB_1__::func_422(sParam1, 7500, bParam2, 1, 0, 0, -1, -1, 0);
	UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
}

bool func_58(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;
	bVar0 = false;
	if ((iParam3 == 4 || iParam3 == 5) || iParam3 == 6)
	{
		bVar0 = true;
	}
	switch (iParam1)
	{
		case 0:
			return ((iParam3 == 3 && (__LIB_0__::func_91() || Global_16)) || (iParam3 == 2 && __LIB_6__::func_872(cParam0, 4)));
		case 14:
			return (!__LIB_0__::func_91() && (Global_16 || CAM::IS_GAMEPLAY_HINT_ACTIVE()));
		case 1:
			return ((!__LIB_0__::func_91() && !CAM::IS_GAMEPLAY_HINT_ACTIVE()) && bVar0);
		case 2:
			return (!__LIB_8__::func_650(cParam0) && bVar0);
		case 4:
			return ((__LIB_8__::func_650(cParam0) || __LIB_8__::func_705(cParam0, iParam2, 1073741824 /* Float: 2f */)) && bVar0);
		case 3:
			return iParam3 == 7;
		case 5:
			return __LIB_6__::func_889(cParam0) == iParam4;
		case 6:
			return __LIB_8__::func_618(cParam0) == iParam4;
		case 11:
			return __LIB_6__::func_862(cParam0, 2097152);
		case 12:
			return __LIB_8__::func_705(cParam0, iParam2, 8388608);
		case 13:
			return (!__LIB_8__::func_705(cParam0, iParam2, 8388608) && bVar0);
	}
	return false;
}

void func_59(char[4] cParam0, vector3 vParam1, float fParam4)
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
	__LIB_1__::func_148(&(cParam0->f_603));
}

void func_60(char[4] cParam0, int iParam1)
{
	cParam0->f_599 = iParam1;
	__LIB_1__::func_283(&(cParam0->f_600), 1);
}

void func_61(char[4] cParam0)
{
	if (!__LIB_0__::func_2() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		__LIB_1__::func_283(&(cParam0->f_603), 1);
	}
}

void func_62(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	__LIB_5__::func_111(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	__LIB_5__::func_118(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

int func_63(char[4] cParam0)
{
	int iVar0;
	if ((__LIB_0__::func_2() != -1 || __LIB_6__::func_864(cParam0) == 25) || __LIB_6__::func_864(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(cParam0->f_5423[iVar0 /*65*/])))
		{
			__LIB_5__::func_339(&(cParam0->f_5423[iVar0 /*65*/]));
		}
		iVar0++;
	}
	return 0;
}

bool func_64(char[4] cParam0)
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
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(Local_14))
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_14);
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

bool func_65(char[4] cParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (bParam2 && __LIB_4__::func_505(&(cParam0->f_8269)))
	{
		if (!__LIB_8__::func_705(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {__LIB_4__::func_542(cParam0->f_607)}, 3);
			if (__LIB_5__::func_498(&(cParam0->f_8269), &cVar1, 0, __LIB_5__::func_24(iParam1), 1, 0))
			{
				if (__LIB_4__::func_506(&(cParam0->f_8269)))
				{
					__LIB_5__::func_282(&(cParam0->f_8269));
				}
				__LIB_8__::func_707(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!__LIB_5__::func_574(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_66(char[4] cParam0)
{
	bool bVar0;
	bVar0 = (PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_TELEPORT_ACTIVE());
	if (__LIB_0__::func_265(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			PLAYER::STOP_PLAYER_TELEPORT();
		}
		if ((__LIB_0__::func_13(32768) && __LIB_4__::func_545()) && __LIB_0__::func_265(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
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

void func_67(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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
			iParam0 = __LIB_8__::func_677(iParam0);
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
		__LIB_0__::func_935(Global_40.f_11095.f_35);
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
					__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
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
					__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_2__::func_368(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
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

bool func_68(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	if (bParam5)
	{
		if (__LIB_0__::func_562(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || __LIB_1__::func_128(5))
	{
		if (__LIB_0__::func_978(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = __LIB_0__::func_979(vParam0);
	if (bParam6)
	{
		iVar1 = __LIB_1__::func_447(vParam0, 1);
		if (__LIB_0__::func_730(iVar1) || __LIB_0__::func_980(iVar0, 1))
		{
			return false;
		}
	}
	if (!__LIB_1__::func_769(iParam3, iParam4))
	{
		return false;
	}
	if (!__LIB_1__::func_744())
	{
		if (__LIB_0__::func_981(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam8))
	{
		if (!__LIB_1__::func_129(iVar0))
		{
			return false;
		}
		if (Global_1310720.f_23 >= 3)
		{
			if (Global_1310720.f_21 != -1)
			{
				if (Global_1310720.f_21 == __LIB_1__::func_447(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!__LIB_1__::func_460(iParam3, iParam4))
	{
		return false;
	}
	if (__LIB_0__::func_982(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!__LIB_0__::func_563(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (__LIB_0__::func_28())
	{
		if (VOLUME::_DOES_VOLUME_EXIST(bParam8))
		{
			if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(bParam8, vParam0))
			{
				return false;
			}
		}
		if (__LIB_8__::func_724(vParam0, bParam10) || __LIB_5__::func_499(vParam0, bParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

int func_69(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_2078;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_865[iParam1 /*18*/];
		fVar3 = uParam0->f_1406[uParam0->f_2078 /*41*/].f_7;
		fVar4 = uParam0->f_1406[uParam0->f_2078 /*41*/].f_7.f_1;
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
				if (!__LIB_5__::func_10(uParam0, iVar2))
				{
					uParam0->f_2075 = iParam1;
				}
				uParam0->f_865[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_1406[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_849))) || (!__LIB_0__::func_274(&(uParam0->f_1406[iVar2 /*41*/]), 128) && uParam0->f_2289))
			{
				if (uParam0->f_2289)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_2291, 0.1f, -1, false);
					if (!__LIB_4__::func_562(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_2291, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_2291, 24, 1000);
					__LIB_5__::func_358(uParam0, 8);
				}
				else
				{
					__LIB_4__::func_532(uParam0, 131072);
					__LIB_5__::func_358(uParam0, 11);
				}
			}
			else if (uParam0->f_2287)
			{
				__LIB_5__::func_358(uParam0, 5);
			}
			else
			{
				__LIB_5__::func_495(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_2259)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_0__::func_264(&(uParam0->f_2259)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_5__::func_495(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_2259)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_4__::func_575(uParam0, uParam0->f_2078))
			{
				iVar1 |= 2048;
			}
			if (__LIB_5__::func_79(Global_35, &(uParam0->f_2076), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_5__::func_495(uParam0);
			}
			if ((!uParam0->f_2287 && !uParam0->f_2289) || bVar0)
			{
				uParam0->f_2076 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_5__::func_495(uParam0);
				}
				else
				{
					__LIB_5__::func_586(uParam0, iParam1, bParam2);
					__LIB_1__::func_148(&(uParam0->f_2259));
					__LIB_5__::func_358(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_2259)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				__LIB_5__::func_358(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_1406[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_2293)))
				{
					__LIB_5__::func_386(uParam0->f_2293, 0);
				}
			}
			__LIB_1__::func_148(&(uParam0->f_2259));
			__LIB_5__::func_358(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_2259)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_1406[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_5__::func_358(uParam0, 10);
				}
				else
				{
					__LIB_5__::func_358(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_2259)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_5__::func_358(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_0__::func_264(&(uParam0->f_2259)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_4__::func_575(uParam0, uParam0->f_2078))
			{
				iVar1 |= 2048;
			}
			if (__LIB_5__::func_79(Global_35, &(uParam0->f_2076), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_2076 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_2291, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_5__::func_358(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_264(&(uParam0->f_2259)) >= 0.75f)
			{
				if (!__LIB_4__::func_562(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_2291, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_2291);
				__LIB_4__::func_532(uParam0, 131072);
				__LIB_5__::func_358(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_70(char[4] cParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 0);
	iVar0 = __LIB_6__::func_880(cParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	iVar1 = __LIB_0__::func_402(iVar0);
	iVar2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	bVar3 = false;
	if (SCRIPTS::IS_THREAD_ACTIVE(iVar2, false) && __LIB_0__::func_825(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			__LIB_5__::func_374(7);
		}
		else
		{
			__LIB_2__::func_145(iVar0, 0);
		}
		__LIB_6__::func_881(cParam0, 16);
		PED::SET_PED_CONFIG_FLAG(iVar0, 219, false);
	}
}

void func_71(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (uParam0->f_2023[iVar2 /*15*/].f_11 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2023[iVar2 /*15*/].f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2288) && !uParam0->f_2023[iVar2 /*15*/].f_13)
			{
				PED::_0xE9B168527B337BF0(uParam0->f_2288, uParam0->f_2023[iVar2 /*15*/].f_12);
				POPULATION::_0xF74E134F40192884(uParam0->f_2288, 1);
				uParam0->f_2023[iVar2 /*15*/].f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_2077 != 0 || __LIB_4__::func_562(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
					}
					uParam0->f_2077 = 0;
					__LIB_4__::func_563(uParam0, 33554432);
				}
				bVar3 = __LIB_0__::func_1(uParam0->f_2023[iVar2 /*15*/].f_10, 131072);
				if (__LIB_0__::func_393(Global_35, uParam0->f_2023[iVar2 /*15*/].f_12, 0, 1))
				{
					if (uParam0->f_2078 >= 0)
					{
						__LIB_5__::func_377(uParam0, uParam0->f_2023[iVar2 /*15*/].f_10, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					}
					if (bVar3)
					{
						__LIB_4__::func_636();
					}
					__LIB_5__::func_596(uParam0, iVar2, iVar0, bVar3);
				}
				else if (__LIB_4__::func_637(&(uParam0->f_2023[iVar2 /*15*/])) != 0)
				{
					__LIB_5__::func_596(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (__LIB_0__::func_1(uParam0->f_2023[iVar2 /*15*/].f_10, 4))
			{
				if (uParam0->f_2078 >= 0)
				{
					if (((__LIB_0__::func_94(Global_35, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1) > uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 && __LIB_0__::func_393(uParam0->f_2288, uParam0->f_2023[iVar2 /*15*/].f_12, 0, 1)) || uParam0->f_2077 != 0) || __LIB_4__::func_562(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (__LIB_5__::func_79(Global_35, &(uParam0->f_2077), iVar4, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
							uParam0->f_2077 = 0;
							__LIB_4__::func_563(uParam0, 33554432);
						}
						else
						{
							__LIB_4__::func_532(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

void func_72(int iParam0, char* sParam1)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	StringCopy(&(Global_1835011[iParam0 /*74*/].f_9), sParam1, 24);
}

void func_73(int iParam0, float fParam1)
{
	iParam0->f_428.f_434 = fParam1;
}

void func_74(int iParam0, float fParam1)
{
	iParam0->f_428.f_435 = fParam1;
}

void func_75(int iParam0)
{
	__LIB_5__::func_411(&(iParam0->f_428));
	__LIB_5__::func_410(iParam0, 8);
}

void func_76(var uParam0, int iParam1, bool bParam2)
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
	if (!__LIB_4__::func_725(uParam0, 65536))
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
	if (!__LIB_4__::func_725(uParam0, 4096) && uParam0->f_1896)
	{
		return;
	}
	if (!__LIB_4__::func_725(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_7__::func_445(uParam0);
	__LIB_5__::func_415(uParam0, uParam0->f_1897, uParam0->f_1899);
	__LIB_5__::func_195(uParam0);
	if (uParam0->f_1900 && !uParam0->f_1899)
	{
		if (((((uParam0->f_1895 >= 0 && uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 > 0f) && uParam0->f_1688 >= 0) && !__LIB_0__::func_266(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, (uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_4__::func_725(uParam0, 33554432)) && !__LIB_4__::func_725(uParam0, 4))
		{
			__LIB_5__::func_614(uParam0, uParam0->f_1897);
			return;
		}
	}
	if (!__LIB_4__::func_725(uParam0, 4))
	{
		if (__LIB_5__::func_196(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1684 = uParam0->f_1688;
				__LIB_4__::func_757(uParam0, 8);
				return;
			}
		}
		else
		{
			__LIB_5__::func_614(uParam0, uParam0->f_1897);
		}
		if (uParam0->f_1016[uParam0->f_1690 /*41*/].f_29)
		{
			fVar0 = __LIB_5__::func_533(uParam0, uParam0->f_1690);
			if (fVar0 < 0f || (uParam0->f_1897 && fVar0 < 1f))
			{
				uParam0->f_1688 = uParam0->f_1690;
				if (!bParam2)
				{
					uParam0->f_1684 = uParam0->f_1690;
					__LIB_4__::func_757(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1689 == -1f || fVar0 <= uParam0->f_1689) || uParam0->f_1690 == uParam0->f_1688)
				{
					if (uParam0->f_1690 != uParam0->f_1688)
					{
					}
					uParam0->f_1688 = uParam0->f_1690;
					uParam0->f_1689 = fVar0;
					__LIB_4__::func_757(uParam0, 16);
					if (((!__LIB_4__::func_725(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, true) < (uParam0->f_1016[uParam0->f_1688 /*41*/].f_11 + 5f))
					{
						__LIB_5__::func_424(uParam0);
						__LIB_4__::func_757(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1688 == uParam0->f_1690)
			{
				__LIB_4__::func_755(uParam0, 16);
			}
		}
		if (uParam0->f_1690 + 1 >= 8)
		{
			uParam0->f_1690 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1690 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_1016[iVar2 /*41*/].f_29)
				{
					uParam0->f_1690 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1690 = 0;
			}
		}
		if (uParam0->f_1688 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2) && uParam0->f_1897)
		{
			return;
		}
	}
	if (__LIB_4__::func_725(uParam0, 16))
	{
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		if (uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1879))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 + uParam0->f_1016[uParam0->f_1688 /*41*/].f_10))
			{
				__LIB_5__::func_420(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1899 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1879)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1901) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1901, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
			}
		}
		else if ((uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1898))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1898, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1897 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1898) > 1.25f) || __LIB_4__::func_725(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1879) && __LIB_5__::func_533(uParam0, uParam0->f_1688) < 10000f) && __LIB_4__::func_725(uParam0, 16)) || __LIB_4__::func_725(uParam0, 4))
		{
			if (!__LIB_4__::func_725(uParam0, 4))
			{
				__LIB_4__::func_757(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_5__::func_139(uParam0, uParam0->f_1688))
			{
				iVar7 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1686), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1686 = 0;
				__LIB_4__::func_755(uParam0, 4);
			}
		}
	}
	else if (__LIB_4__::func_725(uParam0, 4))
	{
		__LIB_4__::func_755(uParam0, 4);
	}
}

void func_77(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1894)
		{
			if (uParam0->f_475[iVar0 /*18*/].f_7)
			{
				__LIB_7__::func_447(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_475[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_5__::func_401(uParam0, iVar0);
				if (bVar1)
				{
					__LIB_8__::func_914(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_5__::func_139(uParam0, uParam0->f_1684))
		{
			__LIB_5__::func_612(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1691;
	while (iVar0 <= (uParam0->f_1894 - 1))
	{
		if (uParam0->f_475[iVar0 /*18*/].f_7)
		{
			__LIB_7__::func_447(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_475[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_5__::func_401(uParam0, iVar0);
			if (bVar1)
			{
				__LIB_8__::func_914(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1691 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1691 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

bool func_78(int iParam0, bool bParam1, bool bParam2)
{
	if (__LIB_1__::func_394(iParam0, bParam1, bParam2, 1))
	{
		return true;
	}
	return false;
}

int func_79(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar0 /*3*/]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0 /*3*/], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_80(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar0 /*3*/]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0 /*3*/], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_81(int iParam0, char* sParam1, char* sParam2)
{
	vector3 vVar0;
	bool bVar12;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0, sParam1, &vVar0, bVar12, sParam2, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

float func_82(int iParam0, char* sParam1, char* sParam2)
{
	struct<4> Var0;
	bool bVar12;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return 40000f;
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0, sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_3.f_2;
	}
	return 40000f;
}

int func_83(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return 0;
	}
	if (__LIB_9__::func_19(iParam0))
	{
		return -1;
	}
	return Global_23118[iParam0 /*11*/].f_3;
}

void func_84(var uParam0, struct<8> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return;
	}
	uParam0->f_814 = { Param1 };
}

void func_85(int iParam0)
{
	Global_1934765.f_67 = (Global_1934765.f_67 || iParam0);
}

int func_86(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 263, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 168, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 186, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 265, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 171, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 137, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 229, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 259, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 48, true);
	switch (iParam1)
	{
		case 0:
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 321, true);
			break;
		case 1:
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS"));
			PED::SET_PED_CONFIG_FLAG(iParam0, 40, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 152, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 154, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 25, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 166, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 87, true);
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS"));
			EVENT::SET_DECISION_MAKER(iParam0, joaat("DM_MEDIUM_DOMESTIC_ANIMAL"));
			break;
	}
	return 1;
}

int func_87(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!__LIB_0__::func_132(uParam0[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_88(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!__LIB_0__::func_132(uParam0[iVar0 /*3*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_89(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = __LIB_5__::func_34(uParam0, iParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	}
	return 0;
}

void func_90(int iParam0)
{
	if (__LIB_9__::func_29(iParam0) == 57)
	{
		MAP::_0x6786D7AFAC3162B3(-1145496915);
		MAP::_0x6786D7AFAC3162B3(-1043953850);
		MAP::_0x6786D7AFAC3162B3(-1783502982);
	}
	else if (MAP::_0xE38450DBCBC70E3D(iParam0, -1305340593) || MAP::_0xE38450DBCBC70E3D(iParam0, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iParam0);
	}
}

void func_91(var uParam0, int iParam1)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(iParam1, true))
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1, true, false))
	{
		return;
	}
	iVar0 = __LIB_5__::func_433(&(uParam0->f_1126), iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if (!__LIB_5__::func_459(uParam0->f_1126[iVar0 /*67*/].f_3, __LIB_4__::func_939(uParam0)))
	{
		return;
	}
	uParam0->f_1126[iVar0 /*67*/].f_66 = 1;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	__LIB_9__::func_36(__LIB_0__::func_23(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

bool func_93()
{
	return __LIB_5__::func_556(1);
}

struct<8> func_94(int iParam0)
{
	char cVar0[64];
	StringCopy(&cVar0, __LIB_5__::func_95(iParam0), 64);
	StringConCat(&cVar0, "_ABANDON", 64);
	return cVar0;
}

void func_95(int iParam0)
{
	int iVar0;
	if (__LIB_9__::func_29(iParam0) == 57)
	{
		MAP::_0x563FCB6620523917(-1145496915, -1482012664);
		MAP::_0x563FCB6620523917(-1043953850, -1482012664);
		MAP::_0x563FCB6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((__LIB_9__::func_30(iParam0) == 4 || __LIB_9__::func_30(iParam0) == 12) || __LIB_1__::func_905(__LIB_9__::func_30(iParam0)) == 4) || (__LIB_0__::func_622(__LIB_9__::func_30(iParam0), 8) && ((__LIB_9__::func_30(iParam0) == 2 || __LIB_9__::func_30(iParam0) == 0) || __LIB_9__::func_30(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		MAP::_0x563FCB6620523917(iParam0, iVar0);
	}
}

int func_96(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	float fVar9;
	if ((iParam0 < 0 || iParam1 < 0) || iParam2 < 0)
	{
		return 0;
	}
	if (iParam0 >= 24)
	{
		iParam0 = 0;
	}
	iVar0 = __LIB_0__::func_23();
	if (__LIB_0__::func_41(iVar0) > iParam0)
	{
		if (__LIB_0__::func_40(iVar0) + 1 > __LIB_0__::func_44(__LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0)))
		{
			if (__LIB_0__::func_39(iVar0) == 11)
			{
				__LIB_1__::func_159(&iVar1, iParam2, iParam1, iParam0, 1, 0, __LIB_0__::func_710(iVar0) + 1);
			}
			else
			{
				__LIB_1__::func_159(&iVar1, iParam2, iParam1, iParam0, 1, __LIB_0__::func_39(iVar0) + 1, __LIB_0__::func_710(iVar0));
			}
		}
		else
		{
			__LIB_1__::func_159(&iVar1, iParam2, iParam1, iParam0, __LIB_0__::func_40(iVar0) + 1, __LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0));
		}
	}
	else
	{
		__LIB_1__::func_159(&iVar1, iParam2, iParam1, iParam0, __LIB_0__::func_40(iVar0), __LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0));
	}
	if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 9999999)
	{
		if (__LIB_1__::func_426(iVar1, 1))
		{
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
			return 1;
		}
		if (!bParam3)
		{
			if (!__LIB_1__::func_426(iVar1, 1))
			{
				__LIB_9__::func_36(iVar0, iVar1, &iVar2, &iVar3, &iVar4, &uVar5, &uVar6, &uVar7);
				if (iVar4 == 0)
				{
					if (iVar3 == 0 && iVar2 <= 5)
					{
						CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
						CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
					}
					else
					{
						iVar8 = BUILTIN::FLOOR((2000f / (BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(60))));
						CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(iVar8);
					}
				}
				else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
				{
					fVar9 = (IntToFloat((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() - 2000)) * 0.1f);
					fVar9 = (IntToFloat(CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE()) - fVar9);
					if (MISC::ABSF((fVar9 - 2000f)) < 2000f)
					{
						fVar9 = 2000f;
					}
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(BUILTIN::FLOOR(fVar9));
				}
			}
		}
	}
	else if (!__LIB_1__::func_426(iVar1, 1))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
	return 0;
}

void func_97(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	__LIB_4__::func_707(sParam0, iParam2);
	__LIB_8__::func_886(iParam1, fParam3);
}

bool func_98(var uParam0)
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
	if (!__LIB_0__::func_75(&(uParam0->f_13109)))
	{
		__LIB_1__::func_283(&(uParam0->f_13109), 0);
	}
	else if (__LIB_0__::func_265(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (__LIB_3__::func_358(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < __LIB_4__::func_955(uParam0->f_5421))
		{
			iVar2 = __LIB_4__::func_956(uParam0->f_5421, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar3 = __LIB_4__::func_956(uParam0->f_5421, iVar1);
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
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(Local_14))
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_14);
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

void func_99(var uParam0, int iParam1, int iParam2)
{
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_6__::func_910(&(Global_1835011[uParam0->f_607 /*74*/].f_22), iParam1, iParam2);
}

void func_100(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_3__::func_358(__LIB_4__::func_998(uParam0)))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_4__::func_955(__LIB_4__::func_998(uParam0)))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_5421));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				__LIB_5__::func_360(uParam0, iVar1, sParam1, bParam2);
			}
			iVar0++;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		iVar2 = 0;
		while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(Local_14))
		{
			iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Local_14));
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				__LIB_5__::func_360(uParam0, iVar3, sParam1, bParam2);
			}
			iVar2++;
		}
	}
}

void func_101(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_693(__LIB_3__::func_918(uParam0->f_607));
	if (__LIB_0__::func_318(iVar0))
	{
		__LIB_4__::func_997(iVar0, iParam1);
	}
}

int func_102(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (bParam4)
	{
		if (!MAP::DOES_BLIP_EXIST(uParam0->f_5303) || (!MAP::_DOES_ENTITY_HAVE_BLIP(iParam1) && iParam2 == joaat("BLIP_STYLE_PLAYER_HORSE")))
		{
			if (ITEMSET::IS_ITEMSET_VALID(iParam3))
			{
				__LIB_5__::func_444(&iParam3, 0);
			}
			__LIB_8__::func_799(uParam0, 0, iParam1);
			__LIB_5__::func_575(uParam0);
			iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam1);
			if (!bParam5)
			{
				if (iParam2 == joaat("BLIP_STYLE_PLAYER_HORSE"))
				{
					if (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == PLAYER::_0x46FA0AE18F4C7FA9(PLAYER::GET_PLAYER_INDEX()))
					{
						__LIB_1__::func_718(7);
						iVar1 = MAP::GET_BLIP_FROM_ENTITY(iParam1);
						if (MAP::DOES_BLIP_EXIST(iVar1))
						{
							MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, -546708623);
							MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, 231194138);
						}
					}
					else
					{
						if (!MAP::DOES_BLIP_EXIST(iVar0))
						{
							uParam0->f_5303 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam1);
						}
						else
						{
							MAP::_BLIP_SET_STYLE(iVar0, iParam2);
							uParam0->f_5303 = iVar0;
						}
						MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, -546708623);
						MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, 231194138);
					}
				}
				else
				{
					if (!MAP::DOES_BLIP_EXIST(iVar0))
					{
						uParam0->f_5303 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam1);
					}
					else
					{
						MAP::_BLIP_SET_STYLE(iVar0, iParam2);
						uParam0->f_5303 = iVar0;
					}
					MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, -546708623);
					MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, 231194138);
				}
			}
			else
			{
				uParam0->f_5303 = iVar0;
			}
		}
	}
	else
	{
		bVar2 = (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == PLAYER::_0x46FA0AE18F4C7FA9(PLAYER::GET_PLAYER_INDEX()));
		if (MAP::DOES_BLIP_EXIST(uParam0->f_5303) || bVar2)
		{
			if (ITEMSET::IS_ITEMSET_VALID(iParam3))
			{
				__LIB_5__::func_444(&iParam3, 1);
			}
			if (bVar2)
			{
				__LIB_1__::func_721(7);
				iVar3 = MAP::GET_BLIP_FROM_ENTITY(iParam1);
				if (MAP::DOES_BLIP_EXIST(iVar3))
				{
					MAP::_BLIP_REMOVE_MODIFIER(iVar3, -546708623);
					MAP::_BLIP_REMOVE_MODIFIER(iVar3, 231194138);
				}
				__LIB_8__::func_799(uParam0, 1, iParam1);
				__LIB_5__::func_575(uParam0);
			}
			else if (MAP::DOES_BLIP_EXIST(uParam0->f_5303))
			{
				if (!__LIB_5__::func_558(uParam0, iParam1, 1024))
				{
					if (!__LIB_5__::func_558(uParam0, iParam1, 128))
					{
						MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_5303, -546708623);
						MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_5303, 231194138);
						MAP::REMOVE_BLIP(&(uParam0->f_5303));
					}
					else
					{
						MAP::_BLIP_SET_STYLE(uParam0->f_5303, iParam2);
						MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_5303, -546708623);
						MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_5303, 231194138);
					}
					__LIB_8__::func_799(uParam0, 1, iParam1);
					__LIB_5__::func_575(uParam0);
				}
				else
				{
					__LIB_8__::func_799(uParam0, 1, iParam1);
					__LIB_5__::func_575(uParam0);
					MAP::_BLIP_SET_STYLE(uParam0->f_5303, iParam2);
					MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, -546708623);
					MAP::_BLIP_SET_MODIFIER(uParam0->f_5303, 231194138);
				}
			}
			else
			{
				__LIB_8__::func_799(uParam0, 1, iParam1);
				__LIB_5__::func_575(uParam0);
			}
			uParam0->f_5303 = 0;
		}
	}
	return 1;
}

int func_103(var uParam0, var uParam1, bool bParam2)
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
	__LIB_5__::func_339(uParam1);
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

void func_104(var uParam0, int iParam1, int iParam2)
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
			__LIB_9__::func_69(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_105(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_865[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_6__::func_917(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_9__::func_69(uParam0, iParam1, 0, 0);
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
				if (__LIB_0__::func_265(&(uParam0->f_2262)) >= IntToFloat((uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_25 / 1000)))
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

void func_106(int iParam0)
{
	Global_1935436.f_18.f_3 = iParam0;
}

void func_107(var uParam0, char[32] cParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
	{
		return;
	}
	uParam0->f_454 = { cParam1 };
}

void func_108(int iParam0, vector3 vParam1)
{
	__LIB_0__::func_487(&(iParam0->f_428), vParam1);
}

void func_109(int iParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8)
{
	__LIB_4__::func_741(&(iParam0->f_428), &cParam1);
	__LIB_5__::func_410(iParam0, 8);
}

int func_110(var uParam0)
{
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2);
	return 1;
}

void func_111(var uParam0)
{
	__LIB_0__::func_7(&Global_1935630, 1048576);
}

void func_112(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	__LIB_7__::func_881(iParam0, &iVar0, &iVar1);
	if (!__LIB_1__::func_102(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!__LIB_0__::func_447(iParam0, 1024))
	{
		return;
	}
	__LIB_0__::func_379(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = uParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
}

Vector3 func_113(int iParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_83(iParam0))
	{
		return Global_36;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		vVar0 = { __LIB_1__::func_974(PLAYER::PLAYER_ID()) };
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				vVar0 = { -1337.402f, 2452.91f, 307.9791f };
				break;
			case 3:
				vVar0 = { -1338.439f, 2428.414f, 307.2766f };
				break;
			case 4:
				vVar0 = { -1322.4f, 2426f, 307.9f };
				break;
			case 5:
				vVar0 = { -308.3586f, 782.1924f, 117.7538f };
				break;
			case 6:
				vVar0 = { -97.375f, -36.5433f, 94.8554f };
				break;
			case 14:
				vVar0 = { -254.86f, 720.18f, 114.37f };
				break;
			case 24:
				vVar0 = { 702.3f, -1220.9f, 45.2f };
				break;
			case 25:
				vVar0 = { 1185.571f, -76.8852f, 94.2109f };
				break;
			case 8:
				vVar0 = { 905.082f, 1294.843f, 231.7543f };
				break;
			case 36:
				vVar0 = { 2653.425f, -1265.137f, 51.2522f };
				break;
			case 7:
				vVar0 = { -272.3134f, 786.3967f, 117.7775f };
				break;
			case 10:
				vVar0 = { -349.4977f, -366.3566f, 86.2997f };
				break;
			case 16:
				vVar0 = { 688.5411f, -1249.06f, 43.1303f };
				break;
			case 17:
				vVar0 = { 1335.68f, -1322.95f, 77.07f };
				break;
			case 19:
				vVar0 = { 1673.17f, -1396.88f, 43.57f };
				break;
			case 21:
				vVar0 = { 1297.878f, -1268.003f, 75.6016f };
				break;
			case 22:
				vVar0 = { 661.5433f, -1240.129f, 43.1674f };
				break;
			case 18:
				vVar0 = { 753.216f, -1079.868f, 56.0014f };
				break;
			case 20:
				vVar0 = { 1011.58f, -1725.89f, 47.09f };
				break;
			case 26:
				vVar0 = { 688.1236f, -1232.855f, 43.2355f };
				break;
			case 33:
				vVar0 = { 1876.616f, -1854.658f, 41.4154f };
				break;
			case 34:
				vVar0 = { 2538.548f, -1202.893f, 52.5581f };
				break;
			case 29:
				vVar0 = { 2754.522f, -1383.792f, 45.2117f };
				break;
			case 32:
				vVar0 = { 1870.408f, -1842.527f, 41.7562f };
				break;
			case 37:
				vVar0 = { 1830.609f, -1816.024f, 45.0415f };
				break;
			case 11:
				vVar0 = { -1796.448f, -368.0258f, 160.266f };
				break;
			case 12:
				vVar0 = { -1552.635f, -315.4827f, 145.8309f };
				break;
			case 27:
				vVar0 = { 2596.806f, -1212.287f, 52.2666f };
				break;
			case 28:
				vVar0 = { 2464f, -1188.746f, 46.7464f };
				break;
			case 30:
				vVar0 = { 1862.25f, -1840.176f, 41.6041f };
				break;
			case 31:
				vVar0 = { 2137.771f, -618.0017f, 40.6232f };
				break;
			case 42:
				vVar0 = { 1001.376f, -6718.156f, 58.3266f };
				break;
			case 44:
				vVar0 = { 2266.855f, -767.1865f, 41.388f };
				break;
			case 45:
				vVar0 = { 2796.889f, -1190.525f, 46.5459f };
				break;
			case 46:
				vVar0 = { 2874.222f, -244.1363f, 41.6331f };
				break;
			case 40:
				vVar0 = { 1549.179f, -7149.792f, 62.8666f };
				break;
			case 41:
				vVar0 = { 1339.214f, -7266.655f, 56.7801f };
				break;
			case 54:
				vVar0 = { 2925.663f, 1290.41f, 43.5145f };
				break;
			case 55:
				vVar0 = { 2794.379f, 510.5758f, 66.2777f };
				break;
			case 56:
				vVar0 = { 595.0852f, 1694.919f, 186.5126f };
				break;
			case 48:
				vVar0 = { 496.0803f, 2230.18f, 246.6552f };
				break;
			case 49:
				vVar0 = { 2349.25f, 1354.504f, 104.7196f };
				break;
			case 58:
				vVar0 = { 2358.58f, 1351.238f, 104.9683f };
				break;
			case 50:
				vVar0 = { 2352.493f, 1368.096f, 105.0149f };
				break;
			case 51:
				vVar0 = { 427.1917f, 1380.477f, 169.4343f };
				break;
			case 52:
				vVar0 = { 479.6426f, 2150.891f, 240.877f };
				break;
			case 60:
				vVar0 = { -1588.494f, 400.6734f, 105.4726f };
				break;
			case 65:
				vVar0 = { -2572.093f, 448.8413f, 144.8921f };
				break;
			case 66:
				vVar0 = { -2580.406f, 407.1148f, 148.1711f };
				break;
			case 62:
				vVar0 = { -2583.168f, 393.3636f, 148.3663f };
				break;
			case 63:
				vVar0 = { -2529.541f, 367.5437f, 151.1168f };
				break;
			case 74:
				vVar0 = { -831.9793f, -1309.56f, 42.63682f };
				break;
			case 75:
				vVar0 = { -1653.5f, -1379f, 84f };
				break;
			case 64:
				vVar0 = { -2557.122f, 423.5369f, 146.8822f };
				break;
			case 67:
				vVar0 = { -2573.764f, 459.4782f, 144.6351f };
				break;
			case 68:
				vVar0 = { -1643.294f, -1409.516f, 82.095f };
				break;
			case 47:
				vVar0 = { 2800.993f, -1194.401f, 46.1827f };
				break;
			case 38:
			case 39:
				vVar0 = { 2006.844f, -4500.964f, 42.2633f };
				break;
			case 13:
				vVar0 = { -867.4744f, -1086.111f, 57.0144f };
				break;
			case 23:
				vVar0 = { 675.4856f, -1241.778f, 42.9353f };
				break;
			case 2:
				vVar0 = { -1336.013f, 2435.868f, 307.5496f };
				break;
			case 43:
				vVar0 = { 1302.809f, -6838.127f, 42.2677f };
				break;
			case 9:
				vVar0 = { -118.0703f, -31.0125f, 94.7967f };
				break;
			case 57:
				vVar0 = { 2358.756f, 1347.649f, 104.9628f };
				break;
			case 53:
				vVar0 = { 723.5786f, -1248.568f, 44.0862f };
				break;
			case 69:
				vVar0 = { -299.5792f, 784.5674f, 118.1264f };
				break;
			case 70:
				vVar0 = { -1546.94f, -1443.202f, 92.8534f };
				break;
			case 76:
				vVar0 = { -1649.89f, -1374.552f, 82.9631f };
				break;
			case 77:
				vVar0 = { -1541.56f, -1458.055f, 93.6257f };
				break;
			case 35:
				vVar0 = { 1889.67f, -1875.908f, 41.8095f };
				break;
			case 72:
				vVar0 = { -786.398f, -1330.46f, 42.6404f };
				break;
			case 15:
				vVar0 = { -116.3872f, -33.3869f, 94.7574f };
				break;
			case 71:
				vVar0 = { -1650.936f, -1376.447f, 82.9628f };
				break;
			default:
				vVar0 = { __LIB_1__::func_204(iParam0) + Vector(8f, -15f, 8f) };
				break;
		}
	}
	__LIB_0__::func_634(&vVar0, 50, 10, 0);
	return vVar0;
}

bool func_114(int iParam0, int iParam1, int iParam2)
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
	return MAP::_BLIP_REMOVE_MODIFIER(iVar0, iParam1);
}

void func_115(int iParam0)
{
	Global_26796.f_774 = (Global_26796.f_774 - (Global_26796.f_774 && iParam0));
}

void func_116(struct<2> Param0, bool bParam2)
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
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), bParam2);
			}
		}
		iVar0++;
	}
}

void func_117(struct<2> Param0, int iParam2)
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
			if (ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), iParam2);
			}
		}
		iVar0++;
	}
}

void func_118(int iParam0)
{
	Global_40.f_4283 = iParam0;
	Global_40.f_4283.f_1 = __LIB_1__::func_953(iParam0);
}

void func_119()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		Global_1357549.f_1497.f_32[iVar0 /*5*/] = { 0f, 0f, 0f };
		Global_1357549.f_1497.f_32[iVar0 /*5*/].f_3 = 0f;
		Global_1357549.f_1497.f_32[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	Global_1357549.f_1497.f_108 = 0;
}

int func_120(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (__LIB_0__::func_86(Global_1357549.f_1497.f_32[iVar0 /*5*/]))
		{
			Global_1357549.f_1497.f_32[iVar0 /*5*/] = { vParam0 };
			Global_1357549.f_1497.f_32[iVar0 /*5*/].f_3 = fParam3;
			Global_1357549.f_1497.f_32[iVar0 /*5*/].f_4 = iParam4;
			Global_1357549.f_1497.f_108++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_121()
{
	return Global_1327590.f_19615;
}

bool func_122(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < Global_1327590.f_19574);
}

void func_123(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		__LIB_0__::func_490(uParam0[iVar0], bParam1);
		iVar0++;
	}
}

int func_124(struct<2> Param0, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	if (!__LIB_3__::func_358(Param0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < __LIB_4__::func_955(Param0))
	{
		iVar2 = __LIB_4__::func_956(Param0, iVar1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					if (__LIB_0__::func_272(iVar3, iParam2))
					{
						iVar0++;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_125(char[4] cParam0, char[4] cParam1)
{
	__LIB_4__::func_568(&(cParam0->f_7375), cParam1);
	__LIB_8__::func_665(cParam0, 33554432);
}

int func_126(var uParam0)
{
	return __LIB_4__::func_586(&(uParam0->f_7375));
}

void func_127()
{
	__LIB_0__::func_804(1591451572);
	__LIB_0__::func_804(-349064220);
	__LIB_0__::func_804(1776302352);
	__LIB_0__::func_804(-523522517);
}

void func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_61();
	if (__LIB_0__::func_20(iVar0))
	{
		iVar1 = __LIB_5__::func_824(iVar0);
		if (__LIB_0__::func_69(iVar1))
		{
			Global_40.f_9384[iVar1 /*2*/] = (Global_40.f_9384[iVar1 /*2*/] - Global_40.f_9384[iVar1 /*2*/] & 1);
		}
	}
	iVar2 = __LIB_1__::func_953(iParam0);
	iVar3 = __LIB_5__::func_824(iVar2);
	if (__LIB_0__::func_69(iVar3))
	{
		Global_40.f_9384[iVar3 /*2*/] |= 1;
		Global_40.f_6 = { Global_1395601.f_5[iVar3 /*28*/].f_2 };
		VOLUME::_0x748C5F51A18CB8F0(0);
		VOLUME::_0x748C5F51A18CB8F0(1);
	}
}

void func_129(char[4] cParam0)
{
	__LIB_4__::func_994(cParam0);
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		__LIB_6__::func_868(cParam0, 1024);
	}
}

void func_130(int iParam0)
{
	vector3 vVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	__LIB_7__::func_910(vVar0, 0);
}

bool func_131(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (!__LIB_9__::func_32(cParam0, iParam1, &iVar0))
	{
		return false;
	}
	return __LIB_4__::func_531(&(cParam0->f_5423[iVar0 /*65*/]), iParam2);
}

void func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			__LIB_5__::func_812(2097152);
			break;
		case 1:
			__LIB_5__::func_812(4194304);
			break;
		case 2:
			__LIB_5__::func_812(16777216);
			break;
		case 3:
			__LIB_5__::func_812(33554432);
			break;
		case 5:
			__LIB_5__::func_812(67108864);
			break;
		case 4:
			__LIB_5__::func_812(134217728);
			break;
		case 6:
			__LIB_5__::func_812(268435456);
			break;
		case 7:
			__LIB_5__::func_812(536870912);
			break;
		case 8:
			__LIB_5__::func_812(1073741824 /* Float: 2f */);
			break;
	}
}

bool func_133(char[4] cParam0, int iParam1)
{
	var uVar0;
	return __LIB_9__::func_32(cParam0, iParam1, &uVar0);
}

void func_134(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_9__::func_32(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (!__LIB_4__::func_629(iParam3, &iVar1))
	{
		return;
	}
	cParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/] = iParam2;
}

void func_135(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_9__::func_32(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (!__LIB_4__::func_629(iParam3, &iVar1))
	{
		return;
	}
	cParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_1 = iParam2;
}

void func_136(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_9__::func_32(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (!__LIB_4__::func_629(iParam3, &iVar1))
	{
		return;
	}
	cParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_2 = iParam2;
}

void func_137(char[4] cParam0, int iParam1, int iParam2)
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
	__LIB_0__::func_7(&(cParam0->f_5423[iVar0 /*65*/].f_6), iParam2);
}

bool func_138(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_44 != -1)
	{
		if (Global_1347702[iParam0 /*49*/].f_44 != 0)
		{
			if (!__LIB_2__::func_117(Global_1347702[iParam0 /*49*/].f_44))
			{
				return false;
			}
		}
	}
	return true;
}

void func_139(char[4] cParam0, int iParam1)
{
	int iVar0;
	struct<24> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_9__::func_32(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1) && __LIB_8__::func_676(cParam0, ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		EVENT::_0x4465C3D1475BD3FD(ENTITY::GET_ENTITY_MODEL(iParam1));
	}
	if (MAP::DOES_BLIP_EXIST(cParam0->f_5423[iVar0 /*65*/].f_8))
	{
		MAP::REMOVE_BLIP(&(cParam0->f_5423[iVar0 /*65*/].f_8));
	}
	Var1.f_5 = 3;
	Var1.f_10 = -1;
	Var1.f_12 = 5;
	Var1.f_23 = 10;
	Var1.f_23.f_1 = 3;
	Var1.f_23.f_1.f_1 = 500;
	Var1.f_23.f_1.f_2 = 10000;
	Var1.f_23.f_1.f_4 = 3;
	Var1.f_23.f_1.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	MISC::_COPY_MEMORY(&(cParam0->f_5423[iVar0 /*65*/]), &(cParam0->f_5423[(cParam0->f_13145 - 1) /*65*/]), 65);
	MISC::_COPY_MEMORY(&(cParam0->f_5423[(cParam0->f_13145 - 1) /*65*/]), &Var1, 65);
	cParam0->f_13145 = (cParam0->f_13145 - 1);
}

void func_140(char[4] cParam0)
{
	if (!__LIB_6__::func_862(cParam0, 8388608))
	{
		if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) == 5 || __LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) == 6)
		{
			if (!__LIB_0__::func_270())
			{
				if (__LIB_0__::func_265(&(cParam0->f_13112)) < 5f)
				{
					PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 0);
				}
			}
			else
			{
				__LIB_1__::func_148(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	}
}

void func_141(char[4] cParam0, int iParam1, int iParam2)
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
	__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), iParam2);
}

void func_142(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	char* sVar0;
	sVar0 = __LIB_0__::func_958(iParam7, sParam1, sParam3, sParam4, sParam5, sParam6);
	if (MISC::GET_HASH_KEY(sParam1) != cParam0->f_5302)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
		cParam0->f_5302 = MISC::GET_HASH_KEY(sParam1);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(1, __LIB_9__::func_41(cParam0), MISC::GET_HASH_KEY(sParam1), sParam1, fParam2 >= 0.9f, false, false);
	}
	__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 33554432);
}

void func_143(bool bParam0)
{
	if (__LIB_8__::func_761())
	{
		__LIB_8__::func_765(0);
		if (INVENTORY::_0x7C7E4AB748EA3B07())
		{
			INVENTORY::_0x6968CE7AC32F6788(5);
		}
		else
		{
			INVENTORY::_0x6968CE7AC32F6788(1);
		}
		__LIB_8__::func_785(Global_35, &Global_1347400, 1);
		if (bParam0)
		{
			__LIB_3__::func_840();
		}
	}
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		iVar1 = __LIB_3__::func_323(iVar0);
		if (iVar1 != -1)
		{
			if (__LIB_5__::func_864(iVar1) != -1 && iVar1 != __LIB_0__::func_61())
			{
				if (iVar0 == Global_1934051.f_33 && __LIB_1__::func_59(iVar0))
				{
					__LIB_1__::func_96(iVar0, 7148155);
					__LIB_1__::func_230(&(Global_1934051.f_33), 0);
				}
				iVar2 = __LIB_0__::func_560(iVar1, 19);
				if (iVar2 != -1)
				{
					if (iVar0 == Global_1914319.f_15936[iVar2 /*6*/] && __LIB_1__::func_59(iVar0))
					{
						if (Global_1914319.f_15936[iVar2 /*6*/].f_5)
						{
							Global_1914319.f_15936[iVar2 /*6*/].f_5 = 0;
						}
						__LIB_1__::func_230(&(Global_1914319.f_15936[iVar2 /*6*/]), 0);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_145(char[4] cParam0)
{
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 16777216))
	{
		return false;
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
	{
		return false;
	}
	if (!Global_1935630.f_12)
	{
		return ((TASK::GET_IS_TASK_ACTIVE(Global_35, 3) || __LIB_0__::func_491(Global_35, -2017877118)) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1));
	}
	return false;
}

void func_146(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam1, iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar1, false, iParam2, false))
		{
			sParam3 = __LIB_5__::func_555(iVar1);
		}
	}
	__LIB_5__::func_111(uParam0, iVar0, sParam3, iParam4, iParam5, 1);
}

void func_147(char[4] cParam0, int iParam1, int iParam2)
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
	__LIB_5__::func_73(&(cParam0->f_5423[iVar0 /*65*/]), iParam2);
}

bool func_148()
{
	if (__LIB_9__::func_93())
	{
		return true;
	}
	return false;
}

void func_149(var uParam0, int iParam1)
{
	__LIB_6__::func_909(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, __LIB_8__::func_664(uParam0, iParam1));
}

void func_150(char[4] cParam0, int iParam1)
{
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 67108864))
	{
		if (MAP::DOES_BLIP_EXIST(cParam0->f_5303))
		{
			MAP::REMOVE_BLIP(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		__LIB_8__::func_670(cParam0, iParam1, 2);
		__LIB_6__::func_876(cParam0, 0);
		__LIB_9__::func_60(cParam0, 0);
		__LIB_6__::func_868(cParam0, 8);
		__LIB_6__::func_887(cParam0, -2147483648);
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 67108864);
		__LIB_6__::func_887(cParam0, 4);
		__LIB_6__::func_887(cParam0, 8192);
		__LIB_6__::func_887(cParam0, 536870912);
		__LIB_6__::func_881(cParam0, 4);
		__LIB_0__::func_869(0);
		__LIB_0__::func_868(0);
		__LIB_6__::func_887(cParam0, 2);
		__LIB_0__::func_769();
		cParam0->f_5302 = 0;
		__LIB_9__::func_35(cParam0);
		if ((__LIB_9__::func_40(cParam0) == 25 || __LIB_9__::func_40(cParam0) == 26) && __LIB_0__::func_13(32768))
		{
			__LIB_8__::func_665(cParam0, 524288);
		}
		if (__LIB_0__::func_2() == 0)
		{
			if (PED::_0xB655DB7582AEC805(Global_35))
			{
				__LIB_1__::func_965(0);
				PED::_0xF6262491C7704A63(Global_35, 0);
			}
			else if (Global_1935630.f_12)
			{
				__LIB_5__::func_113(1, 1);
			}
		}
	}
}

bool func_151(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	if (__LIB_0__::func_755(sParam1, 2))
	{
		return false;
	}
	if (__LIB_0__::func_755(sParam1, 1))
	{
		return false;
	}
	iVar0 = __LIB_4__::func_623(sParam1);
	if (iVar0 == 8)
	{
		return true;
	}
	bVar1 = false;
	if (sParam1->f_11 == 49 && iParam2 == 25)
	{
		bVar1 = true;
	}
	if ((iParam3 < sParam1->f_11 || iParam3 > sParam1->f_13) && !bVar1)
	{
		return false;
	}
	if (iVar0 == 5 || iVar0 == 6)
	{
		if ((iParam3 == sParam1->f_11 && iParam4 != 5) && iParam4 != 6)
		{
			return false;
		}
		if (iParam3 > sParam1->f_11)
		{
			return true;
		}
	}
	if (iParam3 >= sParam1->f_11 || bVar1)
	{
		return __LIB_9__::func_58(cParam0, iVar0, iParam2, iParam4, sParam1->f_12);
	}
	return false;
}

bool func_152(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	if (!__LIB_0__::func_755(sParam1, 1))
	{
		return false;
	}
	if (__LIB_0__::func_755(sParam1, 2))
	{
		return false;
	}
	if (iParam3 > sParam1->f_13)
	{
		return true;
	}
	bVar0 = false;
	if (sParam1->f_11 == 49 && iParam2 == 25)
	{
		bVar0 = true;
	}
	iVar1 = __LIB_4__::func_624(sParam1);
	if (((iVar1 == 5 || iVar1 == 6) && iParam4 != 5) && iParam4 != 6)
	{
		return false;
	}
	if (iParam3 == sParam1->f_13 || bVar0)
	{
		return __LIB_9__::func_58(cParam0, iVar1, iParam2, iParam4, sParam1->f_14);
	}
	return false;
}

void func_153(char[4] cParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_3__::func_358(__LIB_8__::func_645(cParam0)))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_4__::func_955(__LIB_8__::func_645(cParam0)))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, cParam0->f_5421));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				__LIB_8__::func_717(cParam0, iVar1, sParam1, bParam2);
			}
			iVar0++;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		iVar2 = 0;
		while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(Local_14))
		{
			iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Local_14));
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				__LIB_8__::func_717(cParam0, iVar3, sParam1, bParam2);
			}
			iVar2++;
		}
	}
}

void func_154(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	__LIB_9__::func_62(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	__LIB_5__::func_118(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_155(char[4] cParam0)
{
	int iVar0;
	struct<8> Var1;
	char[] cVar9[8];
	iVar0 = 1;
	if (!__LIB_5__::func_347(__LIB_6__::func_866(cParam0), __LIB_6__::func_872(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { __LIB_5__::func_300(__LIB_6__::func_866(cParam0)) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
	{
		if (!__LIB_5__::func_464(__LIB_6__::func_866(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!__LIB_9__::func_65(cParam0, __LIB_6__::func_864(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (__LIB_6__::func_872(cParam0, 4) && !PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {__LIB_4__::func_542(cParam0->f_607)}, 3);
	if (!__LIB_4__::func_505(&(cParam0->f_8269)))
	{
		if (!__LIB_5__::func_341(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_156(char[4] cParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
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
	__LIB_1__::func_283(&(cParam0->f_13118), 0);
}

int func_157(int iParam0, var uParam1, int iParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		__LIB_2__::func_899(uParam1, 0, iVar0);
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
						*iParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
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
								*iParam2 = 2;
								__LIB_2__::func_831(iParam0, uParam1, *iParam2);
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
							*iParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *iParam2);
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
							*iParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *iParam2);
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
						*iParam2 = 4;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*iParam2 = 256;
						__LIB_2__::func_831(iParam0, uParam1, *iParam2);
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
				*iParam2 = 131072;
				__LIB_2__::func_831(iParam0, uParam1, *iParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*iParam2 = 262144;
				__LIB_2__::func_831(iParam0, uParam1, *iParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_158(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_8__::func_811(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = __LIB_0__::func_247(1);
	if (bParam1)
	{
		__LIB_4__::func_529(fVar0);
	}
	if (bParam2)
	{
		fParam0 = __LIB_7__::func_835(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	__LIB_6__::func_172(1, __LIB_0__::func_251(fParam0, -100f, 100f), bParam1);
}

void func_159(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_8__::func_811(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = __LIB_0__::func_247(2);
	if (bParam1)
	{
		__LIB_4__::func_529(fVar0);
	}
	if (bParam2)
	{
		fParam0 = __LIB_7__::func_835(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	__LIB_6__::func_172(2, __LIB_0__::func_251(fParam0, -100f, 100f), bParam1);
}

void func_160(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_8__::func_811(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = __LIB_0__::func_247(0);
	if (bParam1)
	{
		__LIB_4__::func_529(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		__LIB_4__::func_530();
	}
	if (bParam2)
	{
		fParam0 = __LIB_7__::func_835(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	__LIB_6__::func_172(0, __LIB_0__::func_251(fParam0, -100f, 100f), bParam1);
}

void func_161(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32 != 0)
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	__LIB_5__::func_250(iParam0);
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[iParam0 /*49*/].f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		__LIB_7__::func_655(iParam0, __LIB_4__::func_816(iParam0), 0, 1);
	}
	else if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		__LIB_7__::func_655(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		__LIB_7__::func_655(iParam0, vParam2, 0, 0);
	}
	MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 724623647);
	__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
}

void func_162(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	__LIB_9__::func_1(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

void func_163(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!__LIB_0__::func_609(8))
	{
		return;
	}
	if (Global_26796.f_627 == 0)
	{
		return;
	}
	Global_1946804.f_1497 = Global_26796.f_627;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[iVar0 /*3*/] };
		iVar0++;
	}
	__LIB_1__::func_828(1);
	Global_1946804.f_2657 = { Global_26796.f_627.f_121 };
	__LIB_0__::func_460();
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		__LIB_1__::func_701(iVar2, 0);
		iVar1 = __LIB_0__::func_161(__LIB_1__::func_710(iVar2), 1);
		if (iVar1 >= 39)
		{
		}
		else if (Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0])
		{
			INVENTORY::_0x46743BBFEDBC859E(__LIB_0__::func_162(0), iVar2, 1);
		}
		else
		{
			INVENTORY::_0x46743BBFEDBC859E(__LIB_0__::func_162(0), iVar2, 0);
		}
		iVar0++;
	}
	if (!bParam0)
	{
		return;
	}
	iVar3 = Global_1946804.f_1497;
	iVar4 = __LIB_0__::func_449(iVar3);
	if (iVar4 == -1)
	{
		iVar4 = 0;
		__LIB_9__::func_4(Global_35, iVar4, &(Global_1946804.f_1949), 1, iVar3, 1);
	}
	else
	{
		__LIB_9__::func_4(Global_35, iVar4, &(Global_1946804.f_1949), 1, 0, 1);
	}
}

int func_164(int iParam0, bool bParam1, bool bParam2)
{
	return __LIB_9__::func_5(iParam0, &(Global_1946804.f_1949), bParam1, 0, 1, bParam2);
}

void func_165(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2284)
		{
			if (uParam0->f_865[iVar0 /*18*/].f_7)
			{
				__LIB_9__::func_104(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_865[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_5__::func_80(uParam0, iVar0);
				if (bVar1)
				{
					__LIB_9__::func_105(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_4__::func_575(uParam0, uParam0->f_2074))
		{
			__LIB_9__::func_69(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_2081;
	while (iVar0 <= (uParam0->f_2284 - 1))
	{
		if (uParam0->f_865[iVar0 /*18*/].f_7)
		{
			__LIB_9__::func_104(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_865[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_5__::func_80(uParam0, iVar0);
			if (bVar1)
			{
				__LIB_9__::func_105(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_2081 = iVar0 + 1;
					}
					else
					{
						uParam0->f_2081 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_166(int iParam0, int iParam1)
{
	__LIB_4__::func_755(&(iParam0->f_958), iParam1);
}

void func_167(int iParam0, int iParam1)
{
	__LIB_4__::func_757(&(iParam0->f_958), iParam1);
}

void func_168(int iParam0)
{
	__LIB_5__::func_187(&(iParam0->f_428));
	__LIB_5__::func_410(iParam0, 8);
}

int func_169(int iParam0)
{
	return __LIB_5__::func_340(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

void func_170(var uParam0, int iParam1, bool bParam2)
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
	if (!__LIB_4__::func_725(uParam0, 65536))
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
	if (!__LIB_4__::func_725(uParam0, 4096) && uParam0->f_1896)
	{
		return;
	}
	if (!__LIB_4__::func_725(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	__LIB_5__::func_515(uParam0);
	__LIB_5__::func_415(uParam0, uParam0->f_1897, uParam0->f_1899);
	__LIB_5__::func_195(uParam0);
	if (uParam0->f_1900 && !uParam0->f_1899)
	{
		if (((((uParam0->f_1895 >= 0 && uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 > 0f) && uParam0->f_1688 >= 0) && !__LIB_0__::func_266(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, (uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_4__::func_725(uParam0, 33554432)) && !__LIB_4__::func_725(uParam0, 4))
		{
			__LIB_5__::func_614(uParam0, uParam0->f_1897);
			return;
		}
	}
	if (!__LIB_4__::func_725(uParam0, 4))
	{
		if (__LIB_5__::func_196(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1684 = uParam0->f_1688;
				__LIB_4__::func_757(uParam0, 8);
				return;
			}
		}
		else
		{
			__LIB_5__::func_614(uParam0, uParam0->f_1897);
		}
		if (uParam0->f_1016[uParam0->f_1690 /*41*/].f_29)
		{
			fVar0 = __LIB_5__::func_533(uParam0, uParam0->f_1690);
			if (fVar0 < 0f || (uParam0->f_1897 && fVar0 < 1f))
			{
				uParam0->f_1688 = uParam0->f_1690;
				if (!bParam2)
				{
					uParam0->f_1684 = uParam0->f_1690;
					__LIB_4__::func_757(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1689 == -1f || fVar0 <= uParam0->f_1689) || uParam0->f_1690 == uParam0->f_1688)
				{
					if (uParam0->f_1690 != uParam0->f_1688)
					{
					}
					uParam0->f_1688 = uParam0->f_1690;
					uParam0->f_1689 = fVar0;
					__LIB_4__::func_757(uParam0, 16);
					if (((!__LIB_4__::func_725(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, true) < (uParam0->f_1016[uParam0->f_1688 /*41*/].f_11 + 5f))
					{
						__LIB_5__::func_424(uParam0);
						__LIB_4__::func_757(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1688 == uParam0->f_1690)
			{
				__LIB_4__::func_755(uParam0, 16);
			}
		}
		if (uParam0->f_1690 + 1 >= 8)
		{
			uParam0->f_1690 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1690 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_1016[iVar2 /*41*/].f_29)
				{
					uParam0->f_1690 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1690 = 0;
			}
		}
		if (uParam0->f_1688 < 0)
		{
			return;
		}
		if (__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2) && uParam0->f_1897)
		{
			return;
		}
	}
	if (__LIB_4__::func_725(uParam0, 16))
	{
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		if (uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = __LIB_0__::func_152(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 || VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1879))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 + uParam0->f_1016[uParam0->f_1688 /*41*/].f_10))
			{
				__LIB_5__::func_420(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1899 && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1879)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1901) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1901, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
			}
		}
		else if ((uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1898))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1898, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1897 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1898) > 1.25f) || __LIB_4__::func_725(uParam0, 4))
	{
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1875, uParam0->f_1879) && __LIB_5__::func_533(uParam0, uParam0->f_1688) < 10000f) && __LIB_4__::func_725(uParam0, 16)) || __LIB_4__::func_725(uParam0, 4))
		{
			if (!__LIB_4__::func_725(uParam0, 4))
			{
				__LIB_4__::func_757(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!__LIB_5__::func_139(uParam0, uParam0->f_1688))
			{
				iVar7 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1686), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1686 = 0;
				__LIB_4__::func_755(uParam0, 4);
			}
		}
	}
	else if (__LIB_4__::func_725(uParam0, 4))
	{
		__LIB_4__::func_755(uParam0, 4);
	}
}

void func_171(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	fVar3 = BUILTIN::TO_FLOAT(iParam5);
	iVar0 = __LIB_4__::func_674(BUILTIN::TO_FLOAT(*uParam0), fVar3);
	iVar1 = __LIB_4__::func_675(BUILTIN::TO_FLOAT(*uParam1), fVar3);
	iVar2 = __LIB_4__::func_675(BUILTIN::TO_FLOAT(*uParam2), fVar3);
	*uParam0 = (*uParam0 / iParam5);
	*uParam1 = (*uParam1 / iParam5);
	*uParam2 = (*uParam2 / iParam5);
	*uParam3 = (*uParam3 / iParam5);
	*uParam1 = (*uParam1 + iVar0);
	*uParam2 = (*uParam2 + iVar1);
	*uParam3 = (*uParam3 + iVar2);
	if (bParam4)
	{
		*uParam3 = (*uParam3 * -1);
		*uParam2 = (*uParam2 * -1);
		*uParam1 = (*uParam1 * -1);
		*uParam0 = (*uParam0 * -1);
	}
}

int func_172(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*iParam0)[iVar0], Global_35, 1, 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_173(vector3 vParam0, vector3 vParam3)
{
	return PED::ADD_SCENARIO_BLOCKING_AREA((vParam0.x - vParam3.x), (vParam0.y - vParam3.y), (vParam0.z - vParam3.z), (vParam0.x + vParam3.x), (vParam0.y + vParam3.y), (vParam0.z + vParam3.z), 0, 15);
}

bool func_174()
{
	return !__LIB_7__::func_823(2);
}

void func_175(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, float fParam9, float fParam10, int iParam11, float fParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
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
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var0, iParam8, fParam9, fParam10, iParam11, iParam13, fParam12);
	}
	else if (!__LIB_0__::func_138(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var11, iParam8, fParam9, fParam10, iParam11, iParam13, fParam12);
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

bool func_176(char[4] cParam0)
{
	return __LIB_5__::func_448(&(cParam0->f_7375), 1);
}

void func_177(char[4] cParam0, int iParam1)
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
		cParam0->f_1[iVar0 /*22*/][iVar1] = 58256;
		MISC::CLEAR_BIT(&(cParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

float func_178(float fParam0)
{
	if (!__LIB_0__::func_899(fParam0))
	{
		return 0f;
	}
	if (__LIB_0__::func_901(fParam0))
	{
		return fParam0->f_2;
	}
	return (__LIB_0__::func_36() - fParam0->f_1);
}

void func_179(char[4] cParam0, int iParam1)
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
	cParam0->f_5423[iVar0 /*65*/].f_6 = 0;
}

bool func_180(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (uParam0->f_2075 < 0)
	{
		return true;
	}
	switch (uParam0->f_865[uParam0->f_2075 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (__LIB_1__::func_583(&(uParam0->f_2262)) >= 15f)
			{
				__LIB_4__::func_532(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_2158)
			{
				if (__LIB_1__::func_583(&(uParam0->f_2262)) >= 15f)
				{
					__LIB_4__::func_532(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(__LIB_4__::func_620(uParam0)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(__LIB_4__::func_620(uParam0), false))
				{
					uParam0->f_2158 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(__LIB_4__::func_620(uParam0));
				bVar1 = ANIMSCENE::_IS_ANIM_SCENE_FINISHED(__LIB_4__::func_620(uParam0), false);
				bVar2 = ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(__LIB_4__::func_620(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return __LIB_1__::func_583(&(uParam0->f_2262)) >= 15f;
	}
	return false;
}

void func_181(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_FIELD_MANUAL"):
			__LIB_7__::func_787(16);
			break;
	}
}

void func_182()
{
	if (__LIB_7__::func_791())
	{
		return;
	}
	if (__LIB_7__::func_792())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432 /* Float: -1f */);
		Global_1914319.f_18996.f_1 = 1;
	}
	else if (Global_1914319.f_18996.f_4 != 0)
	{
		__LIB_0__::func_45(__LIB_7__::func_793(), 10000, 0, 0, 0, 1);
		Global_1914319.f_18996.f_4 = 0;
	}
}

void func_183(bool bParam0)
{
	if ((__LIB_0__::func_2() != -1 || !bParam0) || __LIB_0__::func_71(Global_35))
	{
		__LIB_7__::func_774();
		return;
	}
	if (__LIB_0__::func_644(8388608) && !__LIB_0__::func_27(Global_1392040.f_1, 2048))
	{
		__LIB_4__::func_229(16777216);
		return;
	}
	__LIB_7__::func_774();
}

bool func_184(int iParam0)
{
	int iVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (__LIB_7__::func_824(iVar0))
	{
		return true;
	}
	return false;
}

int func_185(int iParam0)
{
	if (__LIB_0__::func_144(iParam0, 0))
	{
		if (__LIB_0__::func_192(iParam0, -1242251796))
		{
			if (__LIB_0__::func_192(iParam0, 2060589226))
			{
				return __LIB_7__::func_812();
			}
			return __LIB_7__::func_813();
		}
		else if (__LIB_0__::func_192(iParam0, 1919582297))
		{
			return __LIB_7__::func_803();
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565))
		{
			return __LIB_7__::func_804();
		}
	}
	if (Global_1935496.f_12)
	{
		return __LIB_7__::func_813();
	}
	else
	{
		return __LIB_7__::func_804();
	}
	return __LIB_7__::func_804();
}

int func_186(bool bParam0)
{
	int iVar0;
	if (__LIB_7__::func_817(1) && !Global_1392040.f_2)
	{
		if (bParam0)
		{
			__LIB_0__::func_45("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((__LIB_7__::func_817(2) && !Global_1392040.f_2) && MISC::GET_GAME_TIMER() >= Global_36615)
	{
		if (bParam0)
		{
			iVar0 = __LIB_5__::func_264(Global_35);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					__LIB_0__::func_45("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			__LIB_0__::func_45("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (__LIB_7__::func_817(4194304))
	{
		return 0;
	}
	return 1;
}

void func_187(char[4] cParam0)
{
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, __LIB_9__::func_41(cParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(2, __LIB_9__::func_41(cParam0));
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(1, __LIB_9__::func_41(cParam0)))
	{
		__LIB_1__::func_781(cParam0->f_607);
	}
}

void func_188(char[4] cParam0)
{
	if (!__LIB_6__::func_862(cParam0, 8388608))
	{
		if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) == 5 || __LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) == 6)
		{
			if (!__LIB_0__::func_270())
			{
				if (__LIB_1__::func_583(&(cParam0->f_13112)) < 5f)
				{
					PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 0);
				}
			}
			else
			{
				__LIB_2__::func_259(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	}
}

void func_189(char[4] cParam0)
{
	__LIB_9__::func_34(cParam0);
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
}

void func_190(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	__LIB_5__::func_553(iParam1, bParam2);
	if (bParam3 && __LIB_9__::func_32(cParam0, iParam1, &uVar0))
	{
		if (bParam2)
		{
			if (!__LIB_9__::func_131(cParam0, iParam1, 32))
			{
				__LIB_9__::func_141(cParam0, iParam1, 32);
			}
		}
		else if (__LIB_9__::func_131(cParam0, iParam1, 32))
		{
			__LIB_9__::func_147(cParam0, iParam1, 32);
		}
	}
}

void func_191(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	__LIB_2__::func_259(&(uParam0->f_2259));
}

bool func_192()
{
	if ((((__LIB_4__::func_807(0) && !__LIB_7__::func_811()) || __LIB_7__::func_825()) || Global_1935689.f_1) || __LIB_7__::func_729())
	{
		return false;
	}
	return true;
}

void func_193(struct<16> Param0, var uParam16, bool bParam17, bool bParam18)
{
	struct<18> Var0;
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam16))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam17)
	{
		if (Param0.f_15)
		{
			if (bParam18)
			{
				Var0.f_12 = 255;
				Var0.f_13 = 255;
				Var0.f_17 = -1;
				Var0 = { Param0 };
				Var0.f_16 = uParam16;
				Var0.f_17 = Param0.f_2;
				__LIB_6__::func_111(&(Global_1058888.f_43200), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 16, 4, &uParam16);
}

void func_194(char[4] cParam0, vector3 vParam1, float fParam4)
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
	__LIB_2__::func_259(&(cParam0->f_603));
}

void func_195(char[4] cParam0, int iParam1)
{
	cParam0->f_599 = iParam1;
	__LIB_4__::func_89(&(cParam0->f_600), 1);
}

void func_196(char[4] cParam0)
{
	if (!__LIB_0__::func_2() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		__LIB_4__::func_89(&(cParam0->f_603), 1);
	}
}

void func_197(char[4] cParam0)
{
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8388608))
	{
		if (__LIB_9__::func_145(cParam0))
		{
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			__LIB_5__::func_112();
		}
		else
		{
			HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
			__LIB_8__::func_685(cParam0, __LIB_6__::func_864(cParam0), 8388608);
		}
	}
}

void func_198(char[4] cParam0, int iParam1)
{
	__LIB_6__::func_909(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, __LIB_8__::func_664(cParam0, iParam1));
}

void func_199(var uParam0, char* sParam1, char[4] cParam2)
{
	struct<8> Var0;
	char cVar8[32];
	if (__LIB_6__::func_875(cParam2, 1))
	{
		__LIB_5__::func_1(&(cParam2->f_7375));
	}
	__LIB_8__::func_648(cParam2);
	if (!__LIB_0__::func_84(uParam0, 301989888))
	{
		__LIB_5__::func_317(uParam0, &(cParam2->f_10792));
	}
	if (__LIB_0__::func_81(uParam0) == 2 && (__LIB_0__::func_1(uParam0->f_860, 16384) || __LIB_0__::func_84(uParam0, 268435456)))
	{
		Var0 = { __LIB_5__::func_65(uParam0) };
		__LIB_4__::func_980(uParam0, &Var0);
	}
	__LIB_5__::func_492(uParam0, sParam1);
	if (__LIB_0__::func_84(uParam0, 131072))
	{
		__LIB_0__::func_99(uParam0, 0);
	}
	if (__LIB_0__::func_100())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		__LIB_0__::func_101();
	}
	if (__LIB_0__::func_102())
	{
		__LIB_1__::func_26(1);
	}
	__LIB_1__::func_414(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	__LIB_4__::func_621(uParam0, cVar8);
	__LIB_0__::func_722(1, 0);
	__LIB_4__::func_570(uParam0);
	if (__LIB_0__::func_103() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, __LIB_0__::func_731(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_4__::func_584(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_796);
	}
	__LIB_5__::func_318(uParam0);
	__LIB_5__::func_83(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_804);
	Global_43800 = uParam0->f_804;
	StringCopy(&Global_43802, sParam1, 24);
}

bool func_200(int iParam0)
{
	if (__LIB_4__::func_835(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1225639.f_10, iParam0) != 1)
		{
			__LIB_7__::func_833(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1225639.f_10, iParam0) == 1;
}

void func_201(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_43619[iVar0 /*12*/]))
		{
			cParam0->f_7375.f_13[iVar0 /*12*/] = { Global_43619[iVar0 /*12*/] };
			__LIB_5__::func_118(&(cParam0->f_10792), Global_43619[iVar0 /*12*/], &(Global_43619[iVar0 /*12*/].f_1), 0);
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

void func_202()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (__LIB_0__::func_31(iVar17))
		{
			iVar18 = __LIB_0__::func_271(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489.f_58 = -15;
	__LIB_1__::func_561(&(Global_1359489.f_55));
	if (__LIB_1__::func_198(joaat("CSTAG_PLAYER_AWAY"), 1))
	{
		__LIB_1__::func_449(joaat("CSTAG_PLAYER_AWAY"), 1, 0);
	}
}

void func_203(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_699(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		__LIB_0__::func_288(iParam0, 56, 1);
		__LIB_4__::func_89(&(Global_1359489.f_40), 1);
	}
	__LIB_0__::func_904(iParam0, 0);
	__LIB_0__::func_289(iParam0, 4, 0);
	__LIB_0__::func_745(iParam0);
	__LIB_0__::func_706(iParam0);
	__LIB_0__::func_290(iParam0, 37, 1);
	bVar0 = __LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = __LIB_0__::func_748(iParam0, 0);
	bVar2 = PERSCHAR::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (__LIB_0__::func_287(iParam0, 64, 1))
	{
		__LIB_0__::func_290(iParam0, 64, 1);
	}
	if (bParam3)
	{
		__LIB_0__::func_290(iParam0, 33, 1);
		__LIB_0__::func_290(iParam0, 34, 1);
		__LIB_1__::func_27(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		__LIB_0__::func_707(iParam0, 1, 1, 0);
		if (bParam6)
		{
			__LIB_0__::func_288(iParam0, 30, 1);
		}
		if (bParam7)
		{
			__LIB_0__::func_288(iParam0, 35, 1);
			if (bParam8)
			{
				__LIB_0__::func_288(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			__LIB_0__::func_705(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		__LIB_0__::func_290(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		__LIB_0__::func_288(iParam0, 33, 1);
		__LIB_0__::func_707(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			__LIB_4__::func_89(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			__LIB_1__::func_561(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			__LIB_0__::func_288(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			__LIB_1__::func_197(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (__LIB_0__::func_287(iParam0, 45, 1))
	{
		__LIB_0__::func_290(iParam0, 45, 1);
	}
	__LIB_0__::func_176(iParam0, 16, 1);
	__LIB_0__::func_290(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
		{
			__LIB_1__::func_463(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

int func_204(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_0__::func_899(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_4__::func_89(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_1__::func_561(fParam4);
	}
	if (__LIB_0__::func_899(fParam4))
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
		if (__LIB_1__::func_583(fParam4) >= fParam9)
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

void func_205(char[4] cParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
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
	__LIB_4__::func_89(&(cParam0->f_13118), 0);
}

void func_206(char[4] cParam0)
{
	var uVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	iVar16 = __LIB_6__::func_864(cParam0);
	iVar17 = __LIB_5__::func_24(iVar16);
	iVar18 = __LIB_8__::func_663(cParam0, iVar16);
	if (cParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2504)
		{
			if (__LIB_0__::func_755(&(cParam0->f_8269[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_9__::func_151(cParam0, &(cParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_4__::func_972(&(cParam0->f_8269[iVar19 /*16*/]));
				}
				else if (__LIB_9__::func_152(cParam0, &(cParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_5__::func_29(&(cParam0->f_8269[iVar19 /*16*/]));
					if (iVar19 < (cParam0->f_8269.f_2504 - 1))
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269[iVar19 /*16*/]), &(cParam0->f_8269[(cParam0->f_8269.f_2504 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(cParam0->f_8269[cParam0->f_8269.f_2504 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269[iVar19 /*16*/]), &uVar0, 16);
					}
					cParam0->f_8269.f_2504 = (cParam0->f_8269.f_2504 - 1);
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2505 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2505)
		{
			if (__LIB_0__::func_755(&(cParam0->f_8269.f_641[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_9__::func_55(cParam0, &(cParam0->f_8269.f_641[iVar19 /*16*/]), iVar16, iVar17, iVar18, 1))
				{
					__LIB_4__::func_990(&(cParam0->f_8269.f_641[iVar19 /*16*/]));
					if (iVar19 < (cParam0->f_8269.f_2505 - 1))
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_641[iVar19 /*16*/]), &(cParam0->f_8269.f_641[(cParam0->f_8269.f_2505 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_641[(cParam0->f_8269.f_2505 - 1) /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_641[iVar19 /*16*/]), &uVar0, 16);
					}
					cParam0->f_8269.f_2505 = (cParam0->f_8269.f_2505 - 1);
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2506 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2506)
		{
			if (__LIB_0__::func_755(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_9__::func_55(cParam0, &(cParam0->f_8269.f_1282[iVar19 /*16*/]), iVar16, iVar17, iVar18, 0))
				{
					if (__LIB_1__::func_388(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), 1))
					{
						if (__LIB_0__::func_755(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), 4))
						{
							__LIB_4__::func_991(&(cParam0->f_8269));
						}
						if (iVar19 < (cParam0->f_8269.f_2506 - 1))
						{
							MISC::_COPY_MEMORY(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), &(cParam0->f_8269.f_1282[(cParam0->f_8269.f_2506 - 1) /*16*/]), 16);
							MISC::_COPY_MEMORY(&(cParam0->f_8269.f_1282[(cParam0->f_8269.f_2506 - 1) /*16*/]), &uVar0, 16);
							iVar19 = (iVar19 - 1);
						}
						else
						{
							MISC::_COPY_MEMORY(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), &uVar0, 16);
						}
						cParam0->f_8269.f_2506 = (cParam0->f_8269.f_2506 - 1);
					}
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2507 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2507)
		{
			if (__LIB_0__::func_755(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_9__::func_151(cParam0, &(cParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_9__::func_153(cParam0, &(cParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
					__LIB_0__::func_324(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
				}
				else if (__LIB_9__::func_152(cParam0, &(cParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_9__::func_153(cParam0, &(cParam0->f_8269.f_2243[iVar19 /*16*/]), 0);
					__LIB_0__::func_324(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), 2);
					if (iVar19 < (cParam0->f_8269.f_2507 - 1))
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), &(cParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), 16);
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), &uVar0, 16);
					}
					cParam0->f_8269.f_2507 = (cParam0->f_8269.f_2507 - 1);
				}
			}
			iVar19++;
		}
	}
}

bool func_207(char[4] cParam0, char[4] cParam1)
{
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 256))
	{
		if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 65536))
		{
			if (__LIB_0__::func_116(cParam1))
			{
				__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 131072);
			}
			__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 65536);
		}
		if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 131072))
		{
			if (!__LIB_4__::func_562(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				__LIB_5__::func_585(&(cParam0->f_7375), &(cParam0->f_10792));
				__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 256);
			}
		}
		else
		{
			__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 256);
		}
	}
	return __LIB_5__::func_577(&(cParam0->f_7375), cParam1, (__LIB_6__::func_862(cParam0, 33554432) || (CAM::IS_SCREEN_FADED_OUT() && !__LIB_6__::func_862(cParam0, 1073741824 /* Float: 2f */))), 1);
}

var func_208(char[4] cParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, float fParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)
{
	var uVar0;
	char* sVar1;
	__LIB_9__::func_142(cParam0, sParam1, fParam5, sParam6, sParam7, sParam8, sParam9, iParam10);
	if (bParam4)
	{
		UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		uVar0 = __LIB_1__::func_422(sParam1, iParam3, bParam4, 1, sParam6, sParam7, sParam8, sParam9, iParam10);
	}
	else if (!__LIB_5__::func_491(cParam0, sParam1))
	{
		sVar1 = __LIB_0__::func_958(iParam10, sParam1, sParam6, sParam7, sParam8, sParam9);
		UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		uVar0 = __LIB_0__::func_565(sVar1, iParam3, 0, 0, 0, 1);
	}
	return uVar0;
}

bool func_209(vector3 vParam0, float fParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_5__::func_219(iVar0))
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

void func_210(int iParam0, bool bParam1, bool bParam2)
{
	__LIB_7__::func_847(iParam0, 100f, bParam1, bParam2, 1, 2);
}

void func_211(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_JN"), 0);
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_ALASKAN_GINSENG_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_ALASKAN_GINSENG_JN"), 0);
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_AMERICAN_GINSENG_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_AMERICAN_GINSENG_JN"), 0);
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BAY_BOLETE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BAY_BOLETE_JN"), 0);
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BLACKBERRY_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BLACKBERRY_JN"), 0);
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BLACK_CURRANT_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BLACK_CURRANT_JN"), 0);
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BULRUSH_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BULRUSH_JN"), 0);
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BURDOCK_ROOT_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_BURDOCK_ROOT_JN"), 0);
			}
			break;
		case 39:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CARROT_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CARROT_JN"), 0);
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CHANTERELLE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CHANTERELLE_JN"), 0);
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CIGAR_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CIGAR_ORCHID_JN"), 0);
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_JN"), 0);
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CREEPING_THYME_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_CREEPING_THYME_JN"), 0);
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_DESERT_SAGE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_DESERT_SAGE_JN"), 0);
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_JN"), 0);
			}
			break;
		case 15:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_ENGLISH_MACE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_ENGLISH_MACE_JN"), 0);
			}
			break;
		case 40:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_FEVERFEW_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_FEVERFEW_JN"), 0);
			}
			break;
		case 17:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_GHOST_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_GHOST_ORCHID_JN"), 0);
			}
			break;
		case 18:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_GOLDEN_CURRANT_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_GOLDEN_CURRANT_JN"), 0);
			}
			break;
		case 16:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_HUCKLEBERRY_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_HUCKLEBERRY_JN"), 0);
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_JN"), 0);
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_INDIAN_TOBACCO_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_INDIAN_TOBACCO_JN"), 0);
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_JN"), 0);
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_JN"), 0);
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_MILKWEED_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_MILKWEED_JN"), 0);
			}
			break;
		case 41:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_MINT_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_MINT_JN"), 0);
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_JN"), 0);
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_JN"), 0);
			}
			break;
		case 26:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_OLEANDER_SAGE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_OLEANDER_SAGE_JN"), 0);
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_OREGANO_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_OREGANO_JN"), 0);
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_PARASOL_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_PARASOL_JN"), 0);
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_PRAIRIE_POPPY_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_PRAIRIE_POPPY_JN"), 0);
			}
			break;
		case 30:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_JN"), 0);
			}
			break;
		case 31:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_JN"), 0);
			}
			break;
		case 33:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RASPBERRY_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RASPBERRY_JN"), 0);
			}
			break;
		case 32:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_JN"), 0);
			}
			break;
		case 34:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RED_SAGE_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_RED_SAGE_JN"), 0);
			}
			break;
		case 35:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_JN"), 0);
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_SPIDER_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_SPIDER_ORCHID_JN"), 0);
			}
			break;
		case 37:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_VANILLA_FLOWER_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_VANILLA_FLOWER_JN"), 0);
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_JN"), 0);
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_WINTERBERRY_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_WINTERBERRY_JN"), 0);
			}
			break;
		case 43:
			if (bParam1 == 1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_YARROW_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_HERB_YARROW_JN"), 0);
			}
			break;
		default:
			break;
	}
}

void func_212(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
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
		__LIB_9__::func_67(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			__LIB_9__::func_67(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_213(char[4] cParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_6__::func_864(cParam0) == 25 || __LIB_6__::func_864(cParam0) == 26)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(cParam0->f_5423[iVar0 /*65*/])))
		{
			iVar1 = cParam0->f_5423[iVar0 /*65*/];
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				ENTITY::_SET_ENTITY_HEALTH(iVar1, ENTITY::GET_ENTITY_MAX_HEALTH(iVar1, false), 0);
			}
			if (__LIB_5__::func_130(&(cParam0->f_5423[iVar0 /*65*/]), __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1)))
			{
				iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					iVar3 = 0;
					__LIB_0__::func_495(&iVar3, 9);
					if (bParam1)
					{
						COMPANION::_0x1740E3DEE0AE4D27(iVar2, iVar3);
					}
					else
					{
						COMPANION::_0xDEB369F6AD168C58(iVar2, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_214(var uParam0, int iParam1, bool bParam2)
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
	__LIB_8__::func_897(uParam0);
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

void func_215(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_357(iParam1);
	if (iVar0 != __LIB_0__::func_357(iParam0))
	{
		return;
	}
	__LIB_7__::func_843(iParam0, iParam1, 1);
}

int func_216(int iParam0)
{
	return iParam0->f_3;
}

void func_217(char[4] cParam0)
{
	__LIB_6__::func_869(cParam0, 2);
}

void func_218(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	Var2 = { __LIB_0__::func_14(joaat("TOTAL_PLAYING_TIME")) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		Global_40.f_9632[iParam0 /*4*/].f_3 = (iVar1 + iParam1);
	}
}

void func_219(int iParam0)
{
	if (!PED::IS_PED_INJURED(Global_35))
	{
		PED::_0x6569F31A01B4C097(Global_35, 2, iParam0);
		PED::_0x6569F31A01B4C097(Global_35, 3, iParam0);
	}
}

void func_220(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::REMOVE_FROM_ITEMSET(iParam0, iParam1);
		}
	}
}

void func_221(var uParam0, int iParam1)
{
	if (uParam0->f_3 != iParam1)
	{
		uParam0->f_3 = iParam1;
	}
}

bool func_222(char[4] cParam0, int iParam1)
{
	return __LIB_0__::func_84(&(cParam0->f_7375), iParam1);
}

void func_223(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*8*/])->f_3 = iParam1;
		iVar0++;
	}
}

void func_224(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, 0, -1f, 0);
		}
	}
}

bool func_225(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		iVar1 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ((ENTITY::IS_ENTITY_A_PED(iVar1) || ENTITY::IS_ENTITY_A_VEHICLE(iVar1)) || ENTITY::IS_ENTITY_AN_OBJECT(iVar1)))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
				return iVar0 == iParam0;
			}
		}
	}
	return false;
}

bool func_226()
{
	return Global_1327590.f_9 != -1;
}

bool func_227()
{
	return Global_1327590.f_10 != -1;
}

struct<8> func_228(int iParam0)
{
	char cVar0[64];
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "vig_playlist_colter", 64);
			break;
		case 1:
			StringCopy(&cVar0, "vig_playlist_colter", 64);
			break;
		case 2:
			StringCopy(&cVar0, "vig_playlist_colter", 64);
			break;
		case 3:
			StringCopy(&cVar0, "vig_playlist_hosea_focus", 64);
			break;
		case 4:
			StringCopy(&cVar0, "vig_playlist_lowkey_hso", 64);
			break;
		case 5:
			StringCopy(&cVar0, "vig_playlist_music_snknj", 64);
			break;
		case 6:
			StringCopy(&cVar0, "vig_playlist_music_pns", 64);
			break;
		case 10:
			StringCopy(&cVar0, "vig_playlist_mud1_post", 64);
			break;
		case 7:
			StringCopy(&cVar0, "vig_playlist_dtc1_post", 64);
			break;
		case 8:
			StringCopy(&cVar0, "vig_playlist_dtc3_post", 64);
			break;
		case 12:
			StringCopy(&cVar0, "vig_playlist_sad1_post", 64);
			break;
		case 9:
			StringCopy(&cVar0, "vig_playlist_gang3_post", 64);
			break;
		case 13:
			StringCopy(&cVar0, "vig_playlist_strauss31_post", 64);
			break;
		case 11:
			StringCopy(&cVar0, "vig_playlist_mud5_post", 64);
			break;
		case 14:
			StringCopy(&cVar0, "vig_playlist_party_hso", 64);
			break;
		case 15:
			StringCopy(&cVar0, "vig_playlist_party_sdb", 64);
			break;
		case 16:
			StringCopy(&cVar0, "vig_playlist_fud1_post", 64);
			break;
	}
	return cVar0;
}

int func_229(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_230()
{
	var uVar0;
	return uVar0;
}

float func_231(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

void func_232(char[4] cParam0, int iParam1)
{
	__LIB_4__::func_554(&(cParam0->f_7375), iParam1);
	__LIB_4__::func_996(&(cParam0->f_10792), iParam1);
}

void func_233(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		__LIB_3__::func_932(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
}

int func_234(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
			Var0.f_14 = iParam7;
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

Vector3 func_235(int iParam0, vector3 vParam1, float fParam4)
{
	return __LIB_1__::func_868(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vParam1, fParam4);
}

void func_236(var uParam0)
{
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, __LIB_9__::func_41(uParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(2, __LIB_9__::func_41(uParam0));
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(1, __LIB_9__::func_41(uParam0)))
	{
		__LIB_1__::func_781(uParam0->f_607);
	}
}

void func_237(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (!__LIB_5__::func_459(iParam3, __LIB_6__::func_864(cParam0)) && !__LIB_5__::func_459(iParam3, __LIB_9__::func_40(cParam0)))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam2))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam1))
	{
		return;
	}
	iVar0 = __LIB_4__::func_968(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_460(&(cParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam2))
	{
		*uParam2 = ANIMSCENE::_CREATE_ANIM_SCENE(cParam1, iParam4, sParam5, false, true);
	}
	cParam0->f_1126[iVar0 /*67*/].f_1 = *uParam2;
	cParam0->f_1126[iVar0 /*67*/] = cParam1;
	cParam0->f_1126[iVar0 /*67*/].f_3 = (cParam0->f_1126[iVar0 /*67*/].f_3 || iParam3);
	cParam0->f_1126[iVar0 /*67*/].f_65 = iParam6;
	cParam0->f_1126[iVar0 /*67*/].f_66 = bParam7;
	if (!bParam7)
	{
		__LIB_0__::func_7(&(cParam0->f_1126[iVar0 /*67*/].f_2), 4);
	}
}

void func_238(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!__LIB_5__::func_459(iParam3, __LIB_6__::func_864(cParam0)) && !__LIB_5__::func_459(iParam3, __LIB_9__::func_40(cParam0)))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam1, false))
	{
		return;
	}
	iVar0 = __LIB_5__::func_433(&(cParam0->f_1126), iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/]) && MISC::ARE_STRINGS_EQUAL(cParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/], sParam2))
		{
			return;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/]))
		{
			cParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/] = sParam2;
			cParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/].f_2 = (cParam0->f_1126[iVar0 /*67*/].f_4[iVar1 /*3*/].f_2 || iParam3);
			return;
		}
		iVar1++;
	}
}

void func_239(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1347702[iParam0 /*49*/].f_41))
	{
		__LIB_9__::func_130(Global_1347702[iParam0 /*49*/].f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			PATHFIND::_0xD17672447692478E(Global_1347702[iParam0 /*49*/].f_41, 0);
		}
		VOLUME::_DELETE_VOLUME(Global_1347702[iParam0 /*49*/].f_41);
	}
}

void func_240(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 256 != 0 && __LIB_0__::func_296(0, 0, 1))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 16 != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_36 == 0)
	{
		return;
	}
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_38 = __LIB_4__::func_824(iParam0);
	if (!bParam5 && __LIB_4__::func_826(iParam0))
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::_BLIP_ADD_FOR_RADIUS(Global_1347702[iParam0 /*49*/].f_38, __LIB_4__::func_816(iParam0), Global_1347702[iParam0 /*49*/].f_18);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	else
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::_BLIP_ADD_FOR_COORD(Global_1347702[iParam0 /*49*/].f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	if (iParam0 == 61)
	{
		__LIB_0__::func_326(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCEXO");
	}
	__LIB_5__::func_241(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[iParam0 /*49*/].f_37, 64, iParam0);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_4__::func_825(iParam0);
		iVar0 = __LIB_1__::func_953(Global_40.f_4283);
		if (__LIB_0__::func_20(iVar0) && __LIB_1__::func_59(Global_1888801[iVar0 /*35*/].f_13))
		{
			bVar1 = true;
			bVar2 = __LIB_5__::func_246(iVar0);
		}
		if (__LIB_4__::func_827(iParam0, bVar1, iVar0))
		{
			__LIB_8__::func_715(Global_1347702[iParam0 /*49*/].f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_IS_RADAR_HIDDEN_2() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 1 == 0)
	{
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		if (((!__LIB_4__::func_826(iParam0) || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1)) || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 512)) || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 2048))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 580546400);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32768 == 0)
	{
		if ((Global_1347702[iParam0 /*49*/].f_36 == joaat("BLIP_RC") && Global_1347702[iParam0 /*49*/].f_12 & 1 == 0) && Global_1347702[iParam0 /*49*/].f_12 & 2 != 0)
		{
			MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -211388321);
		}
		else
		{
			__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 32768);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (__LIB_4__::func_828(iParam0))
		{
			if (iParam0 == 97)
			{
				__LIB_1__::func_240(185, 0);
			}
			else
			{
				__LIB_1__::func_240(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {Global_1347702[iParam0 /*49*/].f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = Global_1347702[iParam0 /*49*/].f_37;
			Global_1347702[iParam0 /*49*/].f_40 = __LIB_0__::func_45(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		__LIB_3__::func_727(iParam0, 2);
	}
}

void func_241(char[4] cParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (__LIB_5__::func_31(&(cParam0->f_5423[iVar0 /*65*/])))
		{
			iVar1 = cParam0->f_5423[iVar0 /*65*/];
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam2 != iVar1)
			{
				if (bParam1)
				{
					__LIB_9__::func_147(cParam0, iVar1, 4096);
					if (__LIB_9__::func_131(cParam0, iVar1, 1024))
					{
						iVar2 = MAP::GET_BLIP_FROM_ENTITY(iVar1);
						if (MAP::DOES_BLIP_EXIST(iVar2))
						{
							MAP::_BLIP_SET_MODIFIER(iVar2, -546708623);
							MAP::_BLIP_SET_MODIFIER(iVar2, 231194138);
						}
					}
				}
				else
				{
					__LIB_9__::func_141(cParam0, iVar1, 4096);
					if (__LIB_9__::func_131(cParam0, iVar1, 1024))
					{
						iVar3 = MAP::GET_BLIP_FROM_ENTITY(iVar1);
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

bool func_242(int iParam0)
{
	float fVar0;
	if (__LIB_0__::func_291(Global_1347702[iParam0 /*49*/].f_15) == 2 || iParam0 == __LIB_0__::func_957(Global_1347343.f_2))
	{
		return true;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 32 != 0)
	{
		return true;
	}
	fVar0 = BUILTIN::VDIST2(__LIB_1__::func_440(iParam0), Global_36);
	if (fVar0 < (Global_1347702[iParam0 /*49*/].f_16 * Global_1347702[iParam0 /*49*/].f_16))
	{
		return true;
	}
	return false;
}

void func_243(char[4] cParam0, char[4] cParam1)
{
	__LIB_5__::func_494(&(cParam0->f_7375), cParam1, __LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) != 5);
}

bool func_244(char[4] cParam0, char[4] cParam1)
{
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 256))
	{
		if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 65536))
		{
			if (__LIB_0__::func_116(cParam1))
			{
				__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 131072);
			}
			__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 65536);
		}
		if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 131072))
		{
			if (!__LIB_4__::func_562(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				__LIB_5__::func_585(&(cParam0->f_7375), &(cParam0->f_10792));
				__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 256);
			}
		}
		else
		{
			__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 256);
		}
	}
	return __LIB_8__::func_930(&(cParam0->f_7375), cParam1, (__LIB_6__::func_862(cParam0, 33554432) || (CAM::IS_SCREEN_FADED_OUT() && !__LIB_6__::func_862(cParam0, 1073741824 /* Float: 2f */))), 1);
}

int func_245(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	char cVar7[16];
	if (__LIB_0__::func_13(32768))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_2();
	if ((bParam4 && __LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 512)) && !__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 1024))
	{
		if (__LIB_0__::func_104())
		{
			return 0;
		}
	}
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return 0;
	}
	if (!__LIB_5__::func_546(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((__LIB_1__::func_25(Global_1835011[20 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - __LIB_5__::func_452()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((__LIB_1__::func_25(Global_1835011[19 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - __LIB_5__::func_452()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!__LIB_1__::func_25(Global_1347702[62 /*49*/].f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		bVar3 = Global_1835011[iParam0 /*74*/].f_70;
		if (__LIB_4__::func_844(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || __LIB_3__::func_740(&(Global_1835011[iParam0 /*74*/]), 2))
			{
				if (__LIB_1__::func_43(iParam0))
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, __LIB_0__::func_135(iParam0));
					bVar2 = true;
				}
				else
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, __LIB_1__::func_204(iParam0));
				}
			}
			else if (__LIB_1__::func_43(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_AREA(1673015813, __LIB_0__::func_135(iParam0), __LIB_5__::func_453(iParam0), __LIB_5__::func_454(iParam0));
				bVar2 = true;
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_RADIUS(1673015813, __LIB_5__::func_455(iParam0), __LIB_5__::func_456(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!__LIB_1__::func_43(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, __LIB_5__::func_449(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, __LIB_0__::func_135(iParam0));
				bVar2 = true;
			}
		}
		else if (__LIB_5__::func_542(iParam0))
		{
			if (iParam0 == 7)
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(-1337945352, __LIB_1__::func_204(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, __LIB_1__::func_204(iParam0));
			}
		}
		else
		{
			Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, __LIB_1__::func_204(iParam0));
		}
		Global_1835011[iParam0 /*74*/].f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || __LIB_1__::func_43(iParam0))
			{
				__LIB_1__::func_109(iParam2, 4194304);
			}
			else
			{
				__LIB_4__::func_728(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*74*/].f_27, 63, iParam0);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*74*/].f_27, Global_1835011[iParam0 /*74*/].f_26, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Global_1835011[iParam0 /*74*/].f_27, &(Global_1835011[iParam0 /*74*/].f_39));
		}
		if (!__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 1024) && !__LIB_5__::func_542(iParam0))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 580546400);
			__LIB_0__::func_7(&(Global_1835011[iParam0 /*74*/].f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!__LIB_5__::func_542(iParam0))
	{
		MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, -1986290853);
	}
	if (bParam3 || __LIB_3__::func_740(&(Global_1835011[iParam0 /*74*/]), 2))
	{
		MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
	}
	iVar4 = __LIB_1__::func_953(Global_40.f_4283);
	if (__LIB_0__::func_20(iVar4) && __LIB_1__::func_59(Global_1888801[iVar4 /*35*/].f_13))
	{
		bVar5 = true;
		bVar6 = __LIB_5__::func_246(iVar4);
	}
	if (__LIB_4__::func_815(iParam0, bVar5, iVar4))
	{
		__LIB_8__::func_715(Global_1835011[iParam0 /*74*/].f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !__LIB_0__::func_474(579))
	{
		__LIB_5__::func_473(579, Global_1835011[iParam0 /*74*/].f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 4096) && !__LIB_0__::func_90(&(Global_1835011[iParam0 /*74*/].f_29), 8192)) && IntToFloat(__LIB_5__::func_452()) >= 10f) && !Global_1935630.f_12) && !Global_16) && !__LIB_3__::func_138(Global_35, joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))) && !PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED"))) && !PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_SLEEP_BEDROLL")))
	{
		if (!__LIB_4__::func_844(iParam0, iVar0) || (fParam1 >= (__LIB_5__::func_539(iParam0) * __LIB_5__::func_539(iParam0)) && !Global_1835011[iParam0 /*74*/].f_70))
		{
			MemCopy(&cVar7, {Global_1835011[iParam0 /*74*/].f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			__LIB_0__::func_45(&cVar7, 10000, 0, 0, 0, 1);
			__LIB_0__::func_7(&(Global_1835011[iParam0 /*74*/].f_29), 8192);
		}
	}
	return 1;
}

void func_246(var uParam0, char* sParam1, char[4] cParam2)
{
	struct<8> Var0;
	char cVar8[32];
	if (__LIB_6__::func_875(cParam2, 1))
	{
		__LIB_5__::func_1(&(cParam2->f_7375));
	}
	__LIB_8__::func_648(cParam2);
	if (!__LIB_0__::func_84(uParam0, 301989888))
	{
		__LIB_5__::func_317(uParam0, &(cParam2->f_10792));
	}
	if (__LIB_0__::func_81(uParam0) == 2 && (__LIB_0__::func_1(uParam0->f_860, 16384) || __LIB_0__::func_84(uParam0, 268435456)))
	{
		Var0 = { __LIB_5__::func_65(uParam0) };
		__LIB_4__::func_980(uParam0, &Var0);
	}
	__LIB_5__::func_492(uParam0, sParam1);
	if (__LIB_0__::func_84(uParam0, 131072))
	{
		__LIB_0__::func_99(uParam0, 0);
	}
	if (__LIB_0__::func_100())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		__LIB_0__::func_101();
	}
	if (__LIB_0__::func_102())
	{
		__LIB_1__::func_26(1);
	}
	__LIB_1__::func_737(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	__LIB_4__::func_621(uParam0, cVar8);
	__LIB_0__::func_722(1, 0);
	__LIB_4__::func_570(uParam0);
	if (__LIB_0__::func_103() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, __LIB_0__::func_731(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_4__::func_584(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_796);
	}
	__LIB_5__::func_318(uParam0);
	__LIB_5__::func_83(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_804);
	Global_43800 = uParam0->f_804;
	StringCopy(&Global_43802, sParam1, 24);
}

int func_247(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (__LIB_8__::func_616(uParam0))
	{
		if (!__LIB_4__::func_988(&(uParam0->f_7375), iParam1, 4))
		{
			__LIB_5__::func_17(&(uParam0->f_7375), iParam1, 4);
			return 1;
		}
	}
	return __LIB_6__::func_911(&(uParam0->f_7375), iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_248(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_43619[iVar0 /*12*/]))
		{
			uParam0->f_7375.f_13[iVar0 /*12*/] = { Global_43619[iVar0 /*12*/] };
			__LIB_5__::func_118(&(uParam0->f_10792), Global_43619[iVar0 /*12*/], &(Global_43619[iVar0 /*12*/].f_1), 0);
		}
		iVar0++;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43800))
	{
		uParam0->f_7375.f_804 = Global_43800;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_7375.f_804);
	}
	if (__LIB_0__::func_1(Global_1935630, 524288))
	{
		__LIB_0__::func_8(&Global_1935630, 524288);
		__LIB_8__::func_665(uParam0, 67108864);
	}
}

void func_249(int iParam0, int iParam1, bool bParam2)
{
	if (__LIB_1__::func_187(iParam0))
	{
		return;
	}
	if (iParam1 == 1 || __LIB_0__::func_627(iParam0, 0))
	{
		if ((bParam2 || __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 65536)) || __LIB_9__::func_138(iParam0))
		{
			if (bParam2 && !__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 1024))
			{
				__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 1024);
			}
			__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_12), 1024);
			__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_12), 32768);
			__LIB_4__::func_380(iParam0);
		}
	}
}

void func_250(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_804, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_804)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	if ((__LIB_4__::func_988(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_804, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_804))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_3__::func_120();
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
	if (__LIB_0__::func_1(uParam0->f_861, 512))
	{
		bVar2 = true;
	}
	if (__LIB_4__::func_711(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_804);
		__LIB_3__::func_120();
	}
}

void func_251(char[4] cParam0)
{
	if (!__LIB_4__::func_505(&(cParam0->f_8269)))
	{
		return;
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 268435456))
	{
		return;
	}
	__LIB_9__::func_206(cParam0);
}

void func_252(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
	__LIB_1__::func_774(iParam1, 0, bParam4, bParam5, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_253(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return iVar0;
	}
	bVar1 = __LIB_9__::func_133(cParam0, iParam1);
	bVar2 = (ENTITY::IS_ENTITY_A_PED(iParam1) && __LIB_0__::func_407(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)));
	if (bVar2)
	{
		iVar3 = __LIB_4__::func_656(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
	}
	if (bVar1)
	{
		__LIB_9__::func_141(cParam0, iParam1, 128);
		if (bParam4)
		{
			__LIB_9__::func_141(cParam0, iParam1, 1024);
		}
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && bParam4)
	{
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam1);
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
		else if (__LIB_9__::func_133(cParam0, iParam1) && MAP::DOES_BLIP_EXIST(iVar0))
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
				iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam3, iParam1);
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
		if (__LIB_9__::func_32(cParam0, iParam1, &iVar4))
		{
			__LIB_5__::func_339(&(cParam0->f_5423[iVar4 /*65*/]));
		}
	}
	if (bVar2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		__LIB_6__::func_919(iVar3);
	}
	return iVar0;
}

void func_254(char[4] cParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	bVar0 = (ENTITY::IS_ENTITY_A_PED(iParam1) && __LIB_0__::func_407(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)));
	if (bVar0)
	{
		iVar1 = __LIB_4__::func_656(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
		if (bVar0)
		{
			__LIB_0__::func_745(iVar1);
			if (MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(iVar2)))
			{
				MAP::_BLIP_REMOVE_MODIFIER(MAP::GET_BLIP_FROM_ENTITY(iVar2), -546708623);
				MAP::_BLIP_REMOVE_MODIFIER(MAP::GET_BLIP_FROM_ENTITY(iVar2), 231194138);
			}
		}
		else if (__LIB_9__::func_133(cParam0, iParam1) && MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(iParam1)))
		{
			MAP::_BLIP_REMOVE_MODIFIER(MAP::GET_BLIP_FROM_ENTITY(iParam1), -546708623);
			MAP::_BLIP_REMOVE_MODIFIER(MAP::GET_BLIP_FROM_ENTITY(iParam1), 231194138);
		}
		else
		{
			__LIB_3__::func_608(iParam1);
		}
	}
	if (__LIB_9__::func_133(cParam0, iParam1))
	{
		__LIB_9__::func_147(cParam0, iParam1, 1024);
		if (bParam2)
		{
			__LIB_9__::func_141(cParam0, iParam1, 128);
		}
		else
		{
			__LIB_9__::func_147(cParam0, iParam1, 128);
		}
		if (__LIB_9__::func_32(cParam0, iParam1, &iVar3))
		{
			__LIB_5__::func_339(&(cParam0->f_5423[iVar3 /*65*/]));
		}
	}
	if (bVar0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		__LIB_6__::func_919(iVar1);
	}
}

void func_255(var uParam0)
{
	int iVar0;
	__LIB_5__::func_213(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[iVar0 /*41*/].f_22)) && __LIB_5__::func_156(uParam0, iVar0)) && !__LIB_0__::func_164(&(uParam0->f_1016[iVar0 /*41*/]), 1))
			{
				if (!__LIB_5__::func_157(uParam0, &(uParam0->f_1016[iVar0 /*41*/].f_22)))
				{
					__LIB_1__::func_104(&(uParam0->f_1771), uParam0->f_1016[iVar0 /*41*/].f_22, 0, -1, 1, 0);
				}
				__LIB_4__::func_639(&(uParam0->f_1016[iVar0 /*41*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_256(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_475[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_5__::func_523(uParam0, iParam2, iParam1);
			break;
		case 4:
			__LIB_5__::func_612(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_0__::func_265(&(uParam0->f_1872)) >= IntToFloat((uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_5__::func_213(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_1__::func_104(&(uParam0->f_1771), uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_475[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1685 = iParam1;
			break;
	}
}

int func_257(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	if (((PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, bParam6, bParam7) && (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iVar0))) && ENTITY::IS_ENTITY_A_PED(iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == *uParam0)
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, iParam1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, iParam2);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, iParam3);
		return 1;
	}
	if (bParam4)
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, 0);
	}
	return 0;
}

bool func_258(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(iParam0->f_3, iParam1);
}

var func_259(int iParam0)
{
	return Global_40.f_9571[iParam0 /*10*/].f_9;
}

bool func_260(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (__LIB_1__::func_373(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_261(var uParam0)
{
	__LIB_1__::func_400(uParam0, 1);
	__LIB_2__::func_619(uParam0, 1);
	__LIB_1__::func_404(uParam0, 1);
}

void func_262(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 65536);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 65536);
	}
}

bool func_263(var uParam0, int iParam1)
{
	if (__LIB_2__::func_466(&(uParam0->f_106[iParam1 /*17*/]), 1, 0) && !__LIB_1__::func_489(&(uParam0->f_106[iParam1 /*17*/]), 13))
	{
		return true;
	}
	return false;
}

void func_264(var uParam0, int iParam1, bool bParam2)
{
	__LIB_2__::func_411(&(uParam0->f_106[iParam1 /*17*/]), bParam2, 0);
}

void func_265()
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
		__LIB_0__::func_11();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_266(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		__LIB_0__::func_516(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_267(var uParam0, char* sParam1, bool bParam2)
{
	__LIB_0__::func_11(uParam0, sParam1);
	if (!bParam2)
	{
		__LIB_3__::func_90(*uParam0, -2147483642);
	}
	else
	{
		__LIB_3__::func_121(*uParam0, -2147483648, 0, 12);
	}
	if (__LIB_0__::func_272(uParam0->f_1, 0))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 389, false);
	}
	__LIB_0__::func_290(*uParam0, 51, 1);
	if (__LIB_1__::func_22(*uParam0))
	{
		__LIB_1__::func_774(*uParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		Global_1360165[*uParam0 /*1157*/].f_69 = 234527101;
	}
	if (!bParam2)
	{
		if (__LIB_0__::func_702(uParam0->f_10))
		{
			__LIB_1__::func_559(uParam0->f_10, 0, 2);
		}
	}
	if (__LIB_0__::func_139(uParam0->f_25))
	{
		__LIB_1__::func_748(&(uParam0->f_25), 1, 1);
	}
	if (__LIB_0__::func_139(uParam0->f_26))
	{
		__LIB_1__::func_748(&(uParam0->f_26), 1, 1);
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(uParam0->f_50)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(uParam0->f_50)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_50));
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(sParam1->f_17)))
	{
		__LIB_6__::func_728(&(sParam1->f_35));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_18))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_18);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_19, false);
		__LIB_1__::func_544(uParam0->f_18);
		VOLUME::_DELETE_VOLUME(uParam0->f_18);
	}
	if (__LIB_1__::func_262(531))
	{
		__LIB_1__::func_263(531);
	}
	if (__LIB_0__::func_30(sParam1->f_471))
	{
		Global_1391438.f_594 = sParam1->f_471;
	}
	if (sParam1->f_472 != -1)
	{
		__LIB_6__::func_793(*uParam0, sParam1->f_472);
	}
	Global_40.f_6563.f_274[uParam0->f_13 /*20*/].f_12 = 0;
	if (!bParam2)
	{
		if (uParam0->f_78.f_15)
		{
			__LIB_3__::func_19(&(Global_1391438.f_493));
		}
		else if (Global_1391438.f_7[0 /*99*/].f_9 == uParam0->f_9)
		{
			__LIB_3__::func_19(&(Global_1391438.f_7[0 /*99*/]));
		}
		else
		{
			__LIB_3__::func_19(&(Global_1391438.f_7[1 /*99*/]));
		}
	}
	else if (Global_1391438.f_7[0 /*99*/].f_9 == uParam0->f_9)
	{
		Global_1391438.f_7[0 /*99*/].f_7 = 1;
	}
	else
	{
		Global_1391438.f_7[1 /*99*/].f_7 = 1;
	}
}

void func_268(int iParam0)
{
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 5, 0, iParam0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 50, 0, iParam0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 49, 0, iParam0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 11, 0, iParam0);
}

void func_269(var uParam0)
{
	int iVar0;
	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(*uParam0, &(uParam0->f_11));
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(uParam0->f_11.f_1[iVar0], &(uParam0->f_33[iVar0 /*7*/]));
		iVar0++;
	}
}

void func_270(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			ENTITY::_0x18FF3110CF47115D(uParam0->f_174, 2, 0);
			uParam0->f_176 = 1;
		}
	}
}

float func_271(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	switch (iParam0)
	{
		case 0:
			fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			break;
		case 1:
			fVar0 = PED::_GET_PED_STAMINA(Global_35);
			fVar1 = PED::_GET_PED_MAX_STAMINA(Global_35);
			break;
		case 2:
			fVar0 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar1 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2f);
}

void func_272(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	fVar0 = (50f * fParam0);
	iVar1 = BUILTIN::ROUND((fVar0 + IntToFloat(ENTITY::GET_ENTITY_HEALTH(Global_35))));
	if (bParam1 && fVar0 < 0f)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, fVar0, 0, 0);
	}
	else if (fParam0 <= 0f || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_273(float fParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), (fParam0 * 14f), 0, 0, 0);
}

void func_274(float fParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (fParam0 == -1f)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_CHARGE_PED_STAMINA(Global_35, (fParam0 * IntToFloat(iVar0)));
	}
}

void func_275(int iParam0, int iParam1)
{
	struct<2> Var0;
	Var0 = { __LIB_0__::func_38(joaat("EATEN"), __LIB_6__::func_847(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
	__LIB_0__::func_15(__LIB_0__::func_358(joaat("HERBS_EATEN")), iParam1);
}

void func_276(int iParam0)
{
	int iVar0;
	float fVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = __LIB_4__::func_53(iParam0);
	fVar1 = __LIB_6__::func_571(iParam0);
	if ((Global_1347477.f_117 || !__LIB_0__::func_293(31)) || !__LIB_0__::func_962(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (__LIB_0__::func_963(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477.f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	__LIB_1__::func_606(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(6, __LIB_0__::func_526(iParam0), fVar1), "itemtype_textures", __LIB_0__::func_527(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_277(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	fVar0 = __LIB_0__::func_260(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!__LIB_0__::func_293(17))
	{
		return;
	}
	if (__LIB_6__::func_152())
	{
		iVar1 = __LIB_0__::func_261(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = __LIB_0__::func_261(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477.f_195 = __LIB_0__::func_23();
			__LIB_7__::func_846(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		__LIB_7__::func_845(&fVar3, &fVar4);
		__LIB_1__::func_557(13, __LIB_0__::func_251(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			__LIB_1__::func_240(94, 0);
		}
	}
}

void func_278(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (__LIB_6__::func_42(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = __LIB_6__::func_43(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			__LIB_7__::func_836(-1);
			__LIB_1__::func_299(0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = __LIB_6__::func_43(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			__LIB_7__::func_837(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = __LIB_6__::func_43(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			__LIB_7__::func_838(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			__LIB_9__::func_210(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			__LIB_9__::func_210(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			__LIB_9__::func_210(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_279(var uParam0)
{
	return;
}

void func_280(int iParam0, var uParam1, vector3 vParam2, var uParam5)
{
	var uVar0;
	__LIB_1__::func_867(&uVar0, 0);
	if (!__LIB_0__::func_86(vParam2))
	{
		*uParam1 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam2, 0f, 0f, 0f, uParam5, uParam5, uParam5, "Activity Volume");
		switch (iParam0)
		{
			case 654481153:
				__LIB_1__::func_867(&uVar0, 5);
				__LIB_1__::func_867(&uVar0, 21);
				break;
			case 1784895540:
				__LIB_1__::func_867(&uVar0, 5);
				__LIB_1__::func_867(&uVar0, 23);
				break;
			case -1670940721:
				__LIB_1__::func_867(&uVar0, 5);
				__LIB_1__::func_867(&uVar0, 12);
				break;
			case -1341684320:
				__LIB_1__::func_867(&uVar0, 24);
				__LIB_1__::func_867(&uVar0, 4);
				break;
			case -1511391406:
				__LIB_1__::func_867(&uVar0, 25);
				__LIB_1__::func_867(&uVar0, 4);
				break;
			case 931703394:
				__LIB_1__::func_867(&uVar0, 26);
				__LIB_1__::func_867(&uVar0, 4);
				break;
			case -1567081107:
				__LIB_1__::func_867(&uVar0, 27);
				__LIB_1__::func_867(&uVar0, 4);
				break;
			case 380107708:
				__LIB_1__::func_867(&uVar0, 3);
				break;
			default:
				__LIB_1__::func_867(&uVar0, 5);
				break;
		}
	}
	else
	{
		*uParam1 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(Global_36, 0f, 0f, 0f, uParam5, uParam5, uParam5, "Activity Volume");
		PED::_0x7C00CFC48A782DC0(*uParam1, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	COMPANION::_0x3CAAD93FA5B9579A(*uParam1, 2, uVar0);
}

int func_281(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return Global_1140157[iParam0 /*19*/].f_1.f_1;
}

int func_282(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (!NETWORK::_0x271F95E55C663B8B(&uVar0, uParam1))
	{
		return 0;
	}
	Var1.f_1 = 10;
	Var1.f_14 = 255;
	Var1.f_12 = iParam2;
	Var1.f_14 = iParam3;
	Var1.f_13 = iParam4;
	__LIB_8__::func_986(uParam1, iParam0, Var1);
	return 1;
}

bool func_283(var uParam0, int iParam1)
{
	switch (__LIB_0__::func_372(uParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 2110129666)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -358392831)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 391077233)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 1010970643)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == 382283982)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -498826883)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == -1222090749)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 1641476577)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 690458252)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_FLIPPED_BASE"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -277062447)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_FLIPPED_BASE"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -180517239)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == -2082844535)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_284(var uParam0, int iParam1)
{
	switch (__LIB_0__::func_372(uParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == -1424266966)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -487508500)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == -1791047090)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 760057945)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == -1043439814)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -2077441721)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 1972630951)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 2000759837)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 374699583)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -1340223099)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -1570312122 || iParam1 == -1563464392)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == 416212934)
			{
				return true;
			}
			break;
		case -1239610997:
			if ((iParam1 == 1087288635 || iParam1 == 1761334567) || iParam1 == 504129763)
			{
				return true;
			}
			break;
		case 632545869:
			if ((iParam1 == -212251684 || iParam1 == -1401979141) || iParam1 == -1983586928)
			{
				return true;
			}
			break;
		case -793205628:
			if (iParam1 == 136592566 || iParam1 == 16062911)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_285(var uParam0, var uParam1)
{
	if (!uParam0->f_141 && __LIB_7__::func_657((*uParam1)[0 /*9*/], uParam0->f_130))
	{
		uParam0->f_141 = 1;
		__LIB_0__::func_11((*uParam1)[0 /*9*/]);
	}
}

bool func_286(var uParam0, var uParam1)
{
	if (__LIB_7__::func_620(uParam0, uParam1[0 /*9*/]))
	{
		__LIB_7__::func_617(0, (*uParam1)[0 /*9*/]);
		__LIB_1__::func_976(uParam0, uParam1);
		return true;
	}
	return false;
}

void func_287(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_0__::func_144((*uParam0)[iVar0 /*9*/], 0))
		{
			__LIB_7__::func_660(uParam0[iVar0 /*9*/]);
		}
		iVar0++;
	}
}

Vector3 func_288(int iParam0)
{
	vector3 vVar0;
	struct<5> Var3;
	if (__LIB_7__::func_661(&Var3, iParam0) && __LIB_7__::func_662(&Var3))
	{
		__LIB_7__::func_663(Var3, 924198834, &vVar0, 1);
	}
	return vVar0;
}

Vector3 func_289(int iParam0)
{
	vector3 vVar0;
	struct<5> Var3;
	if (__LIB_7__::func_661(&Var3, iParam0) && __LIB_7__::func_662(&Var3))
	{
		__LIB_7__::func_663(Var3, 1334964216, &vVar0, 1);
	}
	return vVar0;
}

void func_290(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					__LIB_7__::func_622(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					__LIB_7__::func_622(&(uParam0->f_5), 1, 2, 1, 0);
					break;
				case 1724675796:
					__LIB_7__::func_622(&(uParam0->f_5), 2, 1, 1, 0);
					break;
				case 276123595:
					__LIB_7__::func_622(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -139224928:
					__LIB_7__::func_622(&(uParam0->f_5), 4, 1, 1, 0);
					break;
				case -29447330:
					__LIB_7__::func_622(&(uParam0->f_5), 5, 2, 1, 0);
					break;
				case 159464507:
					__LIB_7__::func_622(&(uParam0->f_5), 6, 1, 1, 0);
					break;
				case 1175698187:
					__LIB_7__::func_622(&(uParam0->f_5), 7, 2, 0, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_291(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					__LIB_7__::func_622(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case -641080715:
					__LIB_7__::func_622(&(uParam0->f_5), iVar2, 2, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_292(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					__LIB_7__::func_622(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					__LIB_7__::func_622(&(uParam0->f_5), 2, 3, 1, 0);
					break;
				case 276123595:
					__LIB_7__::func_622(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -29447330:
					__LIB_7__::func_622(&(uParam0->f_5), 4, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
	uParam0->f_5 = iParam1;
	__LIB_7__::func_622(&(uParam0->f_5), 1, 1, 1, 0);
}

void func_293(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (iParam1)
			{
				case joaat("DOCUMENT_NOTE_STRAUSS_2"):
				case joaat("DOCUMENT_NOTE_STRAUSS_1"):
				case joaat("DOCUMENT_NOTE_STRAUSS_6"):
				case joaat("DOCUMENT_NOTE_STRAUSS_5"):
				case joaat("DOCUMENT_NOTE_STRAUSS_4"):
				case joaat("DOCUMENT_NOTE_STRAUSS_3"):
					switch (uParam0->f_5.f_2[iVar1 /*5*/])
					{
						case 1410847083:
							__LIB_7__::func_622(&(uParam0->f_5), iVar2, 1, 1, 0);
							iVar2++;
							break;
						case 1724675796:
							__LIB_7__::func_622(&(uParam0->f_5), iVar2, 6, 1, 0);
							iVar2++;
							break;
						case -641080715:
							__LIB_7__::func_622(&(uParam0->f_5), iVar2, 5, 0, __LIB_0__::func_192(iParam1, -1804424566));
							iVar2++;
							break;
						case 276123595:
							__LIB_7__::func_622(&(uParam0->f_5), iVar2, 5, 0, 0);
							iVar2++;
							break;
					}
					break;
				default:
					switch (uParam0->f_5.f_2[iVar1 /*5*/])
					{
						case 1410847083:
							__LIB_7__::func_622(&(uParam0->f_5), iVar2, 1, 1, 0);
							iVar2++;
							break;
						case 1724675796:
							__LIB_7__::func_622(&(uParam0->f_5), iVar2, 3, 1, 0);
							iVar2++;
							break;
						case -641080715:
							__LIB_7__::func_622(&(uParam0->f_5), iVar2, 2, 0, 0);
							iVar2++;
							break;
					}
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_294(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					__LIB_7__::func_622(&(uParam0->f_5), 0, 1, 1, 0);
					break;
				case 1724675796:
					__LIB_7__::func_622(&(uParam0->f_5), 1, 0, 1, 0);
					break;
				case -139224928:
					__LIB_7__::func_622(&(uParam0->f_5), 2, 0, 1, 0);
					break;
				case -641080715:
					__LIB_7__::func_622(&(uParam0->f_5), 3, 0, 1, 0);
					break;
				case 276123595:
					__LIB_7__::func_622(&(uParam0->f_5), 4, 3, 1, 0);
					break;
				case -29447330:
					__LIB_7__::func_622(&(uParam0->f_5), 5, 3, 1, 0);
					break;
				case 1175698187:
					__LIB_7__::func_622(&(uParam0->f_5), 6, 3, 1, 0);
					break;
				case 852595847:
					__LIB_7__::func_622(&(uParam0->f_5), 7, 3, 1, 0);
					break;
				case 1488412754:
					__LIB_7__::func_622(&(uParam0->f_5), 8, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_295(var uParam0)
{
	if (!Global_1935689.f_9)
	{
		if (((__LIB_0__::func_192(Global_1911772, -1472964441) || __LIB_0__::func_192(Global_1911772, 1841149704)) || __LIB_0__::func_192(Global_1911772, 566155764)) || __LIB_0__::func_192(Global_1911772, -228153877))
		{
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 1;
			Global_1935496.f_59.f_1 = Global_1911772;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
		}
	}
	Global_1911772 = 0;
	Global_36632 = 0;
	Global_36621 = 2;
	Global_1911866[0 /*9*/].f_2 = 0;
	__LIB_7__::func_670(uParam0);
}

void func_296(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	Var0.f_3 = 1;
	Var0.f_4 = iParam0;
	SCRIPTS::_0x31010318BA9897AC(&uVar5, PLAYER::PLAYER_ID());
	__LIB_7__::func_673(&Var0, uVar5);
}

void func_297(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (uParam0->f_135 < 0 || uParam0->f_135 >= 12)
	{
		return;
	}
	iVar0 = uParam0->f_135;
	if (iVar0 == 0)
	{
		switch (iParam1)
		{
			case joaat("DOCUMENT_NEWSPAPER_ED_01"):
			case joaat("DOCUMENT_NEWSPAPER_ED_01_SD"):
			case joaat("DOCUMENT_NEWSPAPER_ED_01_NH"):
				if (__LIB_0__::func_895(__LIB_5__::func_436(3)) == 0)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
				break;
		}
	}
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Newspaper");
	iVar2 = 0;
	while (iVar2 < 15)
	{
		iVar3 = 0;
		if (iVar2 < uParam0->f_5.f_2[iVar0 /*5*/].f_1)
		{
			if (uParam0->f_5.f_2[iVar0 /*5*/].f_2 == 0)
			{
			}
			else if (ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(iParam1, uParam0->f_5.f_2[iVar0 /*5*/].f_2) == 0)
			{
			}
			else
			{
				iVar3 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar0 /*5*/].f_2, iVar2);
				bVar4 = true;
				if (iVar3 == joaat("NONE") || iVar3 == 0)
				{
					bVar4 = false;
				}
				__LIB_7__::func_674(iVar2, uVar1, bVar4, iVar3);
			}
			iVar2++;
		}
	}
}

void func_298(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 159464507:
				case 1410847083:
					__LIB_7__::func_675(iParam1, &(uParam0->f_5), &uVar2, 0);
					break;
				case -2016692014:
				case 1724675796:
					__LIB_7__::func_675(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -1720361947:
				case -139224928:
					__LIB_7__::func_675(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -641080715:
				case -29447330:
				case 276123595:
					__LIB_7__::func_675(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
				case 852595847:
				case 1175698187:
				case 1488412754:
					__LIB_7__::func_675(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_299(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[10];
	int iVar14;
	int iVar15;
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	iVar1 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	iVar2 = Global_40.f_4283;
	if (__LIB_7__::func_595(ENTITY::GET_ENTITY_MODEL(iVar0), iVar2))
	{
		iVar1 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	}
	else
	{
		__LIB_7__::func_664(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar3);
		iVar15 = 0;
		while (iVar15 < 10)
		{
			if (!__LIB_0__::func_144(uVar3[iVar15], 0))
			{
			}
			else if (!__LIB_5__::func_796(uVar3[iVar15]))
			{
			}
			else
			{
				iVar14 = __LIB_7__::func_651(uVar3[iVar15], iVar2);
				if (__LIB_7__::func_596(iVar14, iVar1))
				{
					iVar1 = iVar14;
				}
			}
			iVar15++;
		}
	}
	__LIB_7__::func_597(&iVar1);
	if (__LIB_7__::func_596(iVar1, Global_1357549.f_1492))
	{
		Global_1357549.f_1492 = iVar1;
	}
}

bool func_300(var uParam0, var uParam1)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return false;
	}
	if (__LIB_7__::func_682(uParam0, uParam1) && (MISC::GET_GAME_TIMER() >= Global_36615 || !__LIB_7__::func_607(Global_1911772)))
	{
		uParam0->f_144 = 1;
		return false;
	}
	return true;
}

int func_301(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!__LIB_1__::func_418(&iVar0, 0, iVar95, &Var1) && !__LIB_1__::func_418(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			__LIB_7__::func_677(iVar0, &Var1);
			if (__LIB_0__::func_144(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_302(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	vector3 vVar0[24];
	if (iParam1 >= 24)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 24);
	}
	uParam0->f_64[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "style", iParam2);
	StringCopy(&cVar0, "divider", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	uParam0->f_89[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_89[iParam1], "isVisible", iParam3);
}

bool func_303()
{
	return __LIB_7__::func_481(1);
}

void func_304(var uParam0)
{
	int iVar0;
	__LIB_5__::func_90(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1406[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1406[iVar0 /*41*/].f_22)) && __LIB_4__::func_638(uParam0, iVar0)) && !__LIB_0__::func_164(&(uParam0->f_1406[iVar0 /*41*/]), 1))
			{
				if (!__LIB_5__::func_8(uParam0, &(uParam0->f_1406[iVar0 /*41*/].f_22)))
				{
					__LIB_2__::func_813(&(uParam0->f_2161), uParam0->f_1406[iVar0 /*41*/].f_22, 0, -1, 1, 0);
				}
				__LIB_4__::func_639(&(uParam0->f_1406[iVar0 /*41*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_305(var uParam0, int iParam1)
{
	__LIB_8__::func_929(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1, __LIB_5__::func_280(uParam0, iParam1));
}

bool func_306(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (bParam2 && __LIB_4__::func_505(&(uParam0->f_8269)))
	{
		if (!__LIB_5__::func_331(uParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {__LIB_4__::func_542(uParam0->f_607)}, 3);
			if (__LIB_5__::func_498(&(uParam0->f_8269), &cVar1, 0, __LIB_5__::func_24(iParam1), 1, 0))
			{
				if (__LIB_4__::func_506(&(uParam0->f_8269)))
				{
					__LIB_5__::func_282(&(uParam0->f_8269));
				}
				__LIB_5__::func_334(uParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!__LIB_5__::func_340(&(uParam0->f_638), &(uParam0->f_819), &(uParam0->f_1020), &(uParam0->f_1081), &(uParam0->f_1124), &(uParam0->f_1126), &(uParam0->f_5147), &(uParam0->f_5188), &(uParam0->f_5239), &(uParam0->f_5249), &(uParam0->f_5265), &(uParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_307(var uParam0, char[4] cParam1)
{
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 256))
	{
		if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 65536))
		{
			if (__LIB_0__::func_116(cParam1))
			{
				__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 131072);
			}
			__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 65536);
		}
		if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 131072))
		{
			if (!__LIB_4__::func_562(&(uParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				__LIB_5__::func_585(&(uParam0->f_7375), &(uParam0->f_10792));
				__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 256);
			}
		}
		else
		{
			__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 256);
		}
	}
	return __LIB_8__::func_930(&(uParam0->f_7375), cParam1, (__LIB_4__::func_937(uParam0, 33554432) || (CAM::IS_SCREEN_FADED_OUT() && !__LIB_4__::func_937(uParam0, 1073741824 /* Float: 2f */))), 1);
}

void func_308(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10)
{
	__LIB_5__::func_505(uParam0, &uParam1, "", bParam9, bParam10);
}

void func_309(int iParam0)
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
				if (__LIB_1__::func_62(-525676072, &iVar1))
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
			__LIB_1__::func_775(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		__LIB_5__::func_391(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_310(var uParam0, var uParam1)
{
	*uParam1 = uParam0->f_2;
	uParam1->f_174 = uParam0->f_1;
	uParam1->f_175 = Global_35;
}

int func_311(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			uParam0->f_174 = TASK::_0x05A0100EA714DB68(Global_35, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1234314267))
		{
			__LIB_9__::func_270(uParam0);
			return 1;
		}
	}
	if (!uParam0->f_177)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1895155945))
		{
			uParam0->f_177 = 1;
		}
	}
	return 0;
}

void func_312(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		return;
	}
	if (bParam3 || __LIB_0__::func_192(iParam0, -537818634))
	{
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("MEDICINE_ITEMS_USED")), 1);
	}
	if (__LIB_0__::func_192(iParam0, -1457797660))
	{
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("PROVISION_ITEMS_USED")), 1);
	}
	if (__LIB_0__::func_192(iParam0, 1573112293))
	{
		__LIB_9__::func_275(__LIB_6__::func_846(&iParam0), 1);
	}
	if (__LIB_0__::func_192(iParam0, 1939071949))
	{
		__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED"), joaat("TONIC")), 1);
	}
	switch (iParam0)
	{
		case joaat("CONSUMABLE_OAT_CAKES"):
		case joaat("CONSUMABLE_SUGARCUBE"):
		case joaat("CONSUMABLE_HAYCUBE"):
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED"), joaat("FEED_BAG")), 1);
			break;
	}
	switch (iParam0)
	{
		case joaat("CONSUMABLE_MOONSHINE"):
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED"), joaat("MOONSHINE")), 1);
			break;
		case joaat("CONSUMABLE_WHISKEY_USED"):
		case joaat("CONSUMABLE_WHISKEY"):
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED"), joaat("WHISKEY")), 1);
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED"), joaat("COCAINE_GUM")), 1);
			break;
		case joaat("CONSUMABLE_SNAKE_OIL"):
		case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
		case joaat("CONSUMABLE_SNAKE_OIL_USED"):
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED"), joaat("SNAKE_OIL")), 1);
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO"):
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED"), joaat("CHEWING_TOBACCO")), 1);
			break;
		case joaat("CONSUMABLE_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_HORSE_MEDICINE_USED"):
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED"), joaat("HORSE_PILLS")), 1);
			break;
		case joaat("CONSUMABLE_COVER_SCENT_USED"):
		case joaat("CONSUMABLE_COVER_SCENT"):
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED"), joaat("COVER_SCENT")), 1);
			break;
		case joaat("CONSUMABLE_HERBIVORE_BAIT"):
		case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED"), joaat("POTENT_HERBIVORE_BAIT")), 1);
			break;
		case joaat("CONSUMABLE_PREDATOR_BAIT"):
		case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED"), joaat("POTENT_PREDATOR_BAIT")), 1);
			break;
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (iParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("USED"), joaat("SPECIAL_TONIC")), 1);
		}
	}
	if (bParam2)
	{
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("DEADEYE_ITEMS_USED")), 1);
	}
}

bool func_313(vector3 vParam0)
{
	int iVar0;
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return true;
		}
	}
	return false;
}

void func_314(var uParam0, vector3 vParam1, int iParam4)
{
	struct<14> Var0;
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
	Var0 = { vParam1 };
	Var0.f_3 = 0;
	Var0.f_8 = 4;
	Var0.f_13 = 3;
	Var0.f_7 = iParam4;
	_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
}

int func_315(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return 0;
	}
	__LIB_0__::func_68(iParam0, 0, 0);
	if (__LIB_0__::func_724(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, 0);
		if (iVar0 != 0)
		{
			return OBJECT::_0x0943113E02322164(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0), iParam1);
		}
	}
	return 0;
}

int func_316(var uParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(uParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

void func_317(int iParam0, int iParam1)
{
	Global_1911859[iParam0 /*3*/] = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
	Global_1911859[iParam0 /*3*/].f_1 = iParam1;
	Global_1911859[iParam0 /*3*/].f_2 = 1;
}

void func_318(var uParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	if ((__LIB_0__::func_192(*uParam0, 1573112293) || __LIB_0__::func_192(*uParam0, 672467738)) || __LIB_0__::func_192(*uParam0, -550842268))
	{
		bVar8 = true;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1935496.f_26 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (-943921969 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar1 = __LIB_9__::func_271(0, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_9__::func_272((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 1);
			__LIB_0__::func_597(0, 7000);
			bVar10 = true;
		}
		else if (-1104847406 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar2 = __LIB_9__::func_271(2, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_9__::func_273((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_0__::func_597(2, 7000);
			bVar9 = true;
		}
		else if (381158954 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar3 = __LIB_9__::func_271(1, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_9__::func_274((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
			__LIB_0__::func_597(1, 7000);
		}
		else if (-416929031 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar4 = __LIB_6__::func_41((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
			if (__LIB_7__::func_848(&(uParam0->f_9), &(uParam0->f_10), fVar4))
			{
				__LIB_9__::func_160(fVar4, 1, bVar8, 1);
				__LIB_0__::func_597(0, 7000);
			}
			bVar10 = true;
		}
		else if (1857353317 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar5 = __LIB_6__::func_41((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
			if (__LIB_7__::func_848(&(uParam0->f_9), &(uParam0->f_10), fVar5))
			{
				__LIB_9__::func_159(fVar5, 1, bVar8, 1);
				__LIB_0__::func_597(2, 7000);
				bVar9 = true;
			}
		}
		else if (1681823811 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			fVar6 = __LIB_6__::func_41((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
			if (__LIB_7__::func_848(&(uParam0->f_9), &(uParam0->f_10), fVar6))
			{
				__LIB_9__::func_158(fVar6, 1, bVar8, 1);
				__LIB_0__::func_597(1, 7000);
			}
		}
		else if (-816334026 == uParam0->f_33[iVar0 /*7*/].f_1)
		{
			__LIB_9__::func_277((BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 1 == uParam0->f_1);
		}
		else if (bParam1)
		{
			if (2062242710 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(19, fVar7);
				bVar10 = true;
			}
			else if (-826379728 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(20, fVar7);
				bVar9 = true;
			}
			else if (-1191740624 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(18, fVar7);
			}
			else if (1869697234 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(0, fVar7);
				bVar10 = true;
			}
			else if (1342237631 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(2, fVar7);
				bVar9 = true;
			}
			else if (-1240225157 == uParam0->f_33[iVar0 /*7*/].f_1)
			{
				fVar7 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
				__LIB_9__::func_278(1, fVar7);
			}
		}
		iVar0++;
	}
	if (bVar10)
	{
		if (fVar4 > 0f || fVar1 > 0f)
		{
			iVar11 = 1;
		}
	}
	__LIB_9__::func_312(*uParam0, bParam1, bVar9, iVar11);
	__LIB_9__::func_270(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

void func_319(int iParam0)
{
	Global_1415412 = (Global_1415412 || iParam0);
}

void func_320(int iParam0)
{
	Global_1415412 = (Global_1415412 - (Global_1415412 && iParam0));
}

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CART02"):
		case joaat("BUGGY03"):
		case joaat("CART03"):
		case joaat("BUGGY01"):
		case joaat("BUGGY02"):
		case joaat("CART01"):
		case joaat("CART04"):
		case joaat("CART08"):
		case joaat("CART07"):
		case joaat("CART06"):
		case joaat("CART05"):
			return 1;
		case joaat("COACH5"):
		case joaat("LOGWAGON"):
		case joaat("COACH6"):
		case joaat("COACH3"):
		case joaat("COACH4"):
		case joaat("WAGONDAIRY01X"):
		case joaat("CHUCKWAGON000X"):
		case joaat("COACH2"):
		case joaat("CHUCKWAGON002X"):
			return 2;
		case joaat("WAGON03X"):
		case joaat("WAGON05X"):
		case joaat("SUPPLYWAGON"):
		case joaat("STAGECOACH006X"):
		case joaat("STAGECOACH005X"):
		case joaat("STAGECOACH003X"):
		case joaat("WAGON02X"):
		case joaat("UTILLIWAG"):
		case joaat("WAGON06X"):
		case joaat("STAGECOACH002X"):
		case joaat("WAGON04X"):
		case joaat("STAGECOACH001X"):
			return 3;
		case joaat("OILWAGON01X"):
			return 4;
		default:
			break;
	}
	return 0;
}

void func_322(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		DECORATOR::DECOR_SET_INT(*uParam0, "wagonFenceValue", iParam1);
	}
}

int func_323(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (__LIB_0__::func_27(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_27(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_27(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_27(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_27(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_27(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_27(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_27(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

float func_324(int iParam0)
{
	if (!__LIB_2__::func_618(iParam0))
	{
		return 0f;
	}
	if (__LIB_2__::func_611(iParam0))
	{
		return iParam0->f_2;
	}
	return (__LIB_0__::func_36() - iParam0->f_1);
}

bool func_325(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

void func_326(char[4] cParam0, vector3 vParam1)
{
	cParam0->f_5413 = { vParam1 };
}

void func_327(char* sParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
	{
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam0, &iVar0);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam0, Global_36, &iVar1);
		if (bParam1)
		{
			MAP::_START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE(sParam0, iVar1, iVar0, iParam2, true, false);
		}
		else
		{
			MAP::_START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE(sParam0, iVar1, iVar0, iParam2, false, true);
		}
		MAP::SET_GPS_CUSTOM_ROUTE_RENDER(true, 3, 30);
	}
}

int func_328(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((*uParam0)[iVar0 /*4*/] != 0)
		{
			if ((*uParam0)[iVar0 /*4*/] == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_329(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!__LIB_0__::func_131(uParam0[iVar0 /*4*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_330(int iParam0, char* sParam1)
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		return true;
	}
	if (ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
	{
		return false;
	}
	return false;
}

bool func_331(int iParam0, int iParam1)
{
	int iVar0;
	if ((PLAYER::IS_PLAYER_PLAYING(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (((PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &iVar0, 0, 0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1) || ((PLAYER::_0xBEA3A6E5F5F79A6F(iParam0, &iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_332(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_17(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
		{
			HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), 0);
			return 1;
		}
	}
	return 0;
}

bool func_333(int iParam0)
{
	return __LIB_6__::func_690(iParam0, 7);
}

int func_334(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_97)
	{
		if ((*uParam0)[iVar0 /*4*/] == iParam1)
		{
			(*uParam0)[iVar0 /*4*/] = 0;
			StringCopy(&((uParam0[iVar0 /*4*/])->f_1), "", 24);
			if (iVar0 != (uParam0->f_97 - 1))
			{
				(*uParam0)[iVar0 /*4*/] = (*uParam0)[(uParam0->f_97 - 1) /*4*/];
				(uParam0[iVar0 /*4*/])->f_1 = { (uParam0[(uParam0->f_97 - 1) /*4*/])->f_1 };
				(*uParam0)[(uParam0->f_97 - 1) /*4*/] = 0;
				StringCopy(&((uParam0[(uParam0->f_97 - 1) /*4*/])->f_1), "", 24);
			}
			uParam0->f_97 = (uParam0->f_97 - 1);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_335(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), true) <= 50f;
}

void func_336(int iParam0, vector3 vParam1, vector3 vParam4, int iParam7, bool bParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	PED::CLEAR_PED_NON_CREATION_AREA();
	vVar0 = { __LIB_2__::func_66(vParam1, vParam4, iParam7) };
	vVar3 = { __LIB_2__::func_67(vParam1, vParam4, iParam7) };
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar0, vVar3, 0);
	if (PED::_0x91A5F9CBEBB9D936(*iParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*iParam0, bParam8);
	}
}

bool func_337(int iParam0)
{
	return __LIB_6__::func_690(iParam0, 6);
}

int func_338(char[4] cParam0)
{
	return __LIB_4__::func_586(&(cParam0->f_7375));
}

bool func_339(int iParam0)
{
	return (__LIB_6__::func_690(iParam0, 4) || __LIB_6__::func_690(iParam0, 5));
}

void func_340(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if ((VEHICLE::_IS_DRAFT_VEHICLE(iParam0) || __LIB_4__::func_831(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			VEHICLE::_0xD826690B5CF3BEFF(iParam0, 0f);
			VEHICLE::_0x850CE59DEC2028F3(iParam0, 0);
		}
		VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(iParam0, false);
		VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(iParam0, false);
		VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iParam0, true);
		VEHICLE::_0x6090A031C69F384E(iParam0, 0);
		VEHICLE::SET_VEHICLE_CAN_BREAK(iParam0, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam0, false);
	}
}

int func_341(char[4] cParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_3__::func_358(cParam0->f_5421))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(cParam0->f_5421))
	{
		iVar1 = __LIB_4__::func_956(cParam0->f_5421, iVar0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1)) && DECORATOR::DECOR_EXIST_ON(iVar1, __LIB_4__::func_611()))
		{
			iVar2 = DECORATOR::DECOR_GET_INT(iVar1, __LIB_4__::func_611());
			if (iVar2 == iParam1)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_342(char[4] cParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = __LIB_5__::func_34(cParam0, iParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	}
	return 0;
}

int func_343(int iParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = __LIB_3__::func_661(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_ON_MOUNT(iParam0))
		{
			iVar0 = __LIB_3__::func_661(PED::GET_MOUNT(iParam0));
		}
	}
	return iVar0;
}

bool func_344()
{
	if ((((!AUDIO::_0xA2CAC9DEF0195E6F(0) && !__LIB_0__::func_270()) && CAM::IS_SCREEN_FADED_IN()) && !CAM::IS_SCREEN_FADING_IN()) && !__LIB_9__::func_148())
	{
		return true;
	}
	return false;
}

void func_345(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_804, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_804)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	if ((__LIB_4__::func_988(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_804, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_804))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
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
	if (__LIB_0__::func_1(uParam0->f_861, 512))
	{
		bVar2 = true;
	}
	if (__LIB_5__::func_579(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_804);
		__LIB_1__::func_625();
	}
}

int func_346(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (__LIB_8__::func_616(cParam0))
	{
		if (!__LIB_4__::func_988(&(cParam0->f_7375), iParam1, 4))
		{
			__LIB_5__::func_17(&(cParam0->f_7375), iParam1, 4);
			return 1;
		}
	}
	return __LIB_6__::func_911(&(cParam0->f_7375), iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_347(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32 != 0)
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	__LIB_5__::func_250(iParam0);
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[iParam0 /*49*/].f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		__LIB_9__::func_240(iParam0, __LIB_4__::func_816(iParam0), 0, 1);
	}
	else if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		__LIB_9__::func_240(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		__LIB_9__::func_240(iParam0, vParam2, 0, 0);
	}
	MAP::_BLIP_SET_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 724623647);
	__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
}

int func_348(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return iParam2;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					__LIB_2__::func_998(iVar9, &uVar6, &uVar7, &iVar5, &uVar8);
					__LIB_2__::func_999(&iVar0, iVar9, iVar5, uVar6);
					if (!__LIB_0__::func_144(iVar0, 0))
					{
						iVar0 = __LIB_5__::func_797(iVar2);
					}
				}
				else
				{
					iVar0 = __LIB_5__::func_797(iVar2);
				}
				if (iVar0 == iParam1)
				{
					PED::_0xED00D72F81CF7278(iVar2, 0, 0);
					if (bParam3)
					{
						__LIB_8__::func_932(iVar2);
						ENTITY::_DELETE_CARRIABLE(&iVar2);
					}
					iParam2 = (iParam2 - 1);
				}
			}
			iVar3++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iParam2;
}

int func_349(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	if (!__LIB_8__::func_692(iParam0))
	{
		return 0;
	}
	if ((__LIB_1__::func_25(Global_1347702[59 /*49*/].f_15, 1) && !__LIB_1__::func_25(Global_1347702[61 /*49*/].f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (__LIB_8__::func_693(PLAYER::PLAYER_ID(), 1, 0))
	{
		if ((!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27) && !__LIB_5__::func_542(iParam0)) && !Global_43891)
		{
			__LIB_9__::func_245(iParam0, BUILTIN::VDIST2(__LIB_5__::func_449(iParam0), Global_36), -1, 1, 1);
			__LIB_5__::func_450(&(Global_1835011[iParam0 /*74*/]), 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!__LIB_4__::func_378(__LIB_5__::func_538(iParam0), __LIB_3__::func_918(iParam0), 0, Global_1835011[iParam0 /*74*/].f_21, iParam3))
		{
			return 0;
		}
		if (__LIB_5__::func_543(1) > 1)
		{
			if (Global_1835011[iParam0 /*74*/].f_73 <= 0)
			{
				Global_1835011[iParam0 /*74*/].f_73 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - Global_1835011[iParam0 /*74*/].f_73) < 60000)
			{
				if (__LIB_8__::func_990(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549.f_1494 & 32768 != 0) && __LIB_0__::func_266(Global_35, __LIB_1__::func_469(iParam0), 50f, 1, 1))
				{
					if (!GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
					{
						Global_1835011[iParam0 /*74*/].f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(Global_1835011[iParam0 /*74*/].f_72, __LIB_1__::func_469(iParam0), 5f);
					}
					if (CAM::IS_SCREEN_FADED_IN() && (GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1835011[iParam0 /*74*/].f_72) || CAM::IS_SPHERE_VISIBLE(__LIB_1__::func_469(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = __LIB_1__::func_319(Global_1835011[iParam0 /*74*/].f_1);
	if (!__LIB_0__::func_79(iVar0))
	{
		return 0;
	}
	else if (Global_1835011[iParam0 /*74*/].f_73 != 0)
	{
		Global_1835011[iParam0 /*74*/].f_73 = 0;
		__LIB_8__::func_991(iParam0);
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[iParam0 /*74*/].f_72);
		}
	}
	if (bParam1)
	{
		__LIB_5__::func_506(Global_1835011[iParam0 /*74*/].f_1);
	}
	else if (!Global_1879534)
	{
		__LIB_0__::func_301(4);
	}
	return 1;
}

bool func_350(char[4] cParam0, char* sParam1, int iParam2, float fParam3, char* sParam4)
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
		__LIB_0__::func_37(&(cParam0->f_13106));
		return true;
	}
	if (iParam2 != 2 && iParam2 != 3)
	{
		__LIB_1__::func_283(&(cParam0->f_13106), 0);
	}
	if ((__LIB_1__::func_285(&(cParam0->f_13106), fParam3) || fParam3 <= 0f) || (iParam2 == 2 && iParam2 == 3))
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
						__LIB_0__::func_37(&(cParam0->f_13106));
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
						if (!__LIB_0__::func_75(&(cParam0->f_13106)) && __LIB_8__::func_711(cParam0, sParam1, 0))
						{
							__LIB_1__::func_283(&(cParam0->f_13106), 0);
							return false;
						}
						if (__LIB_0__::func_75(&(cParam0->f_13106)))
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
		__LIB_0__::func_37(&(cParam0->f_13106));
		return true;
	}
	return false;
}

void func_351(char[4] cParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	__LIB_9__::func_156(cParam0, &cParam1, "", bParam9, bParam10);
}

int func_352(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_973(iParam0, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_970(iParam0, uParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_833(uParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_353(char[4] cParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_6__::func_862(cParam0, 16777216))
	{
		__LIB_8__::func_712(cParam0);
		__LIB_6__::func_887(cParam0, 65536);
		return 0;
	}
	if (!__LIB_8__::func_705(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { __LIB_8__::func_688(cParam0, iParam1) };
	if (__LIB_9__::func_207(cParam0, &Var0))
	{
		if (!__LIB_6__::func_862(cParam0, 65536))
		{
			__LIB_6__::func_868(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

int func_354(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (bParam4)
	{
		if (!MAP::DOES_BLIP_EXIST(cParam0->f_5303) || (!MAP::_DOES_ENTITY_HAVE_BLIP(iParam1) && iParam2 == joaat("BLIP_STYLE_PLAYER_HORSE")))
		{
			if (ITEMSET::IS_ITEMSET_VALID(iParam3))
			{
				__LIB_5__::func_444(&iParam3, 0);
			}
			__LIB_9__::func_241(cParam0, 0, iParam1);
			__LIB_9__::func_63(cParam0);
			iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam1);
			if (!bParam5)
			{
				if (iParam2 == joaat("BLIP_STYLE_PLAYER_HORSE"))
				{
					if (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == PLAYER::_0x46FA0AE18F4C7FA9(PLAYER::GET_PLAYER_INDEX()))
					{
						__LIB_1__::func_718(7);
						iVar1 = MAP::GET_BLIP_FROM_ENTITY(iParam1);
						if (MAP::DOES_BLIP_EXIST(iVar1))
						{
							MAP::_BLIP_SET_MODIFIER(cParam0->f_5303, -546708623);
							MAP::_BLIP_SET_MODIFIER(cParam0->f_5303, 231194138);
						}
					}
					else
					{
						if (!MAP::DOES_BLIP_EXIST(iVar0))
						{
							cParam0->f_5303 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam1);
						}
						else
						{
							MAP::_BLIP_SET_STYLE(iVar0, iParam2);
							cParam0->f_5303 = iVar0;
						}
						MAP::_BLIP_SET_MODIFIER(cParam0->f_5303, -546708623);
						MAP::_BLIP_SET_MODIFIER(cParam0->f_5303, 231194138);
					}
				}
				else
				{
					if (!MAP::DOES_BLIP_EXIST(iVar0))
					{
						cParam0->f_5303 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam1);
					}
					else
					{
						MAP::_BLIP_SET_STYLE(iVar0, iParam2);
						cParam0->f_5303 = iVar0;
					}
					MAP::_BLIP_SET_MODIFIER(cParam0->f_5303, -546708623);
					MAP::_BLIP_SET_MODIFIER(cParam0->f_5303, 231194138);
				}
			}
			else
			{
				cParam0->f_5303 = iVar0;
			}
		}
	}
	else
	{
		bVar2 = (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == PLAYER::_0x46FA0AE18F4C7FA9(PLAYER::GET_PLAYER_INDEX()));
		if (MAP::DOES_BLIP_EXIST(cParam0->f_5303) || bVar2)
		{
			if (ITEMSET::IS_ITEMSET_VALID(iParam3))
			{
				__LIB_5__::func_444(&iParam3, 1);
			}
			if (bVar2)
			{
				__LIB_1__::func_721(7);
				iVar3 = MAP::GET_BLIP_FROM_ENTITY(iParam1);
				if (MAP::DOES_BLIP_EXIST(iVar3))
				{
					MAP::_BLIP_REMOVE_MODIFIER(iVar3, -546708623);
					MAP::_BLIP_REMOVE_MODIFIER(iVar3, 231194138);
				}
				__LIB_9__::func_241(cParam0, 1, iParam1);
				__LIB_9__::func_63(cParam0);
			}
			else if (MAP::DOES_BLIP_EXIST(cParam0->f_5303))
			{
				if (!__LIB_9__::func_131(cParam0, iParam1, 1024))
				{
					if (!__LIB_9__::func_131(cParam0, iParam1, 128))
					{
						MAP::_BLIP_REMOVE_MODIFIER(cParam0->f_5303, -546708623);
						MAP::_BLIP_REMOVE_MODIFIER(cParam0->f_5303, 231194138);
						MAP::REMOVE_BLIP(&(cParam0->f_5303));
					}
					else
					{
						MAP::_BLIP_SET_STYLE(cParam0->f_5303, iParam2);
						MAP::_BLIP_REMOVE_MODIFIER(cParam0->f_5303, -546708623);
						MAP::_BLIP_REMOVE_MODIFIER(cParam0->f_5303, 231194138);
					}
					__LIB_9__::func_241(cParam0, 1, iParam1);
					__LIB_9__::func_63(cParam0);
				}
				else
				{
					__LIB_9__::func_241(cParam0, 1, iParam1);
					__LIB_9__::func_63(cParam0);
					MAP::_BLIP_SET_STYLE(cParam0->f_5303, iParam2);
					MAP::_BLIP_SET_MODIFIER(cParam0->f_5303, -546708623);
					MAP::_BLIP_SET_MODIFIER(cParam0->f_5303, 231194138);
				}
			}
			else
			{
				__LIB_9__::func_241(cParam0, 1, iParam1);
				__LIB_9__::func_63(cParam0);
			}
			cParam0->f_5303 = 0;
		}
	}
	return 1;
}

void func_355(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
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
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(39) || __LIB_1__::func_154(39)))
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
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(41) || __LIB_1__::func_154(41)))
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
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(49) || __LIB_1__::func_154(49)))
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
	sVar2 = __LIB_1__::func_801(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
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
	if (__LIB_8__::func_939(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (__LIB_1__::func_165(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (__LIB_0__::func_938(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_356(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!__LIB_0__::func_79(iParam1))
	{
		iParam1 = __LIB_0__::func_80(__LIB_3__::func_918(iParam0));
		if (!__LIB_0__::func_79(iParam1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		if ((bParam2 || bParam6) && (!__LIB_4__::func_844(iParam0, -1) || Global_1835011[iParam0 /*74*/].f_70))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
		}
		else
		{
			if (__LIB_0__::func_104())
			{
				if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
				{
					if (Global_1835011[iParam0 /*74*/].f_27 == Global_1905944.f_5698)
					{
						__LIB_2__::func_347(1);
					}
				}
			}
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*74*/].f_27));
			if (__LIB_4__::func_844(iParam0, -1) && __LIB_8__::func_617(iParam0))
			{
				__LIB_9__::func_245(iParam0, fParam5, iParam1, bParam2, 1);
				__LIB_5__::func_450(&(Global_1835011[iParam0 /*74*/]), 2);
			}
		}
	}
	else if ((bParam2 && !__LIB_5__::func_451(iParam0)) && !Global_43891)
	{
		__LIB_9__::func_245(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (__LIB_3__::func_919(iParam1, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*74*/].f_12));
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false) && !__LIB_2__::func_774(iParam0)) && !__LIB_3__::func_919(iParam1, 1024))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1835011[iParam0 /*74*/].f_16, 1);
	}
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[iParam0 /*74*/].f_72);
	}
	if (bParam4)
	{
		__LIB_1__::func_722(Global_1835011[iParam0 /*74*/].f_1);
	}
	else
	{
		__LIB_4__::func_728(iParam1, 3831);
	}
	Global_1835011[iParam0 /*74*/].f_73 = 0;
}

void func_357(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_1__::func_22(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			__LIB_9__::func_252(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_358(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = __LIB_4__::func_770(&(iParam0->f_428), iParam1);
	if (iVar0 < 0)
	{
		return;
	}
	__LIB_0__::func_143(&(iParam0->f_428.f_13[iVar0 /*12*/]), iParam2);
}

bool func_359(char* sParam0)
{
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
	{
		return true;
	}
	return false;
}

void func_360(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	iVar0 = joaat("PROP_HITCHINGPOST");
	iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam1, iVar0, fParam4, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		TASK::_TASK_USE_SCENARIO_POINT(iParam0, iVar1, 0, -1, true, bParam5, iVar0, false, -1f, false);
	}
}

int func_361(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		__LIB_0__::func_516(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_362(char[4] cParam0, int iParam1)
{
	__LIB_4__::func_532(&(cParam0->f_10792), iParam1);
}

void func_363(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = *uParam0;
	if (iVar0 > *iParam1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar1]))
		{
			__LIB_0__::func_325(iParam1[iVar1]);
		}
		iVar1++;
	}
}

void func_364(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	__LIB_0__::func_566(iParam0, bParam1);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam2, iParam3, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam2, iParam3, 0, -1, -1, 2);
}

bool func_365(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return ((PED::_0xC8D523BF5BBD3808(iParam0, joaat("EVENT_SHOT_FIRED")) || PED::_0xC8D523BF5BBD3808(iParam0, joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"))) || PED::_0xC8D523BF5BBD3808(iParam0, joaat("EVENT_SHOT_FIRED_WHIZZED_BY")));
}

bool func_366(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam1))
	{
		return false;
	}
	return PED::_IS_PED_USING_SCENARIO_POINT(iParam0, iParam1);
}

int func_367(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	if (!__LIB_3__::func_358(Param0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < __LIB_4__::func_955(Param0))
	{
		iVar2 = __LIB_4__::func_956(Param0, iVar1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_368(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 16;
			break;
		case 1:
			*iParam1 = 8;
			break;
		case 2:
			*iParam1 = 13;
			break;
		default:
			return false;
	}
	return true;
}

float func_369(char[4] cParam0)
{
	return __LIB_1__::func_583(&(cParam0->f_603));
}

int func_370(int iParam0)
{
	if (__LIB_5__::func_260(iParam0, 1))
	{
		return 1;
	}
	else if (__LIB_5__::func_260(iParam0, 128))
	{
		return 128;
	}
	else if (__LIB_5__::func_260(iParam0, 256))
	{
		return 256;
	}
	else if (__LIB_5__::func_260(iParam0, 512))
	{
		return 512;
	}
	else if (__LIB_5__::func_260(iParam0, 1024))
	{
		return 1024;
	}
	else if (__LIB_5__::func_260(iParam0, 2048))
	{
		return 2048;
	}
	else if (__LIB_5__::func_260(iParam0, 4096))
	{
		return 4096;
	}
	else if (__LIB_5__::func_260(iParam0, 65536))
	{
		return 65536;
	}
	else if (__LIB_5__::func_260(iParam0, 16384))
	{
		return 16384;
	}
	else if (__LIB_5__::func_260(iParam0, 262144))
	{
		return 262144;
	}
	else if (__LIB_5__::func_260(iParam0, 524288))
	{
		return 524288;
	}
	else if (__LIB_5__::func_260(iParam0, 1048576))
	{
		return 1048576;
	}
	else if (__LIB_5__::func_260(iParam0, 2097152))
	{
		return 2097152;
	}
	else if (__LIB_5__::func_260(iParam0, 32768))
	{
		return 32768;
	}
	else if (__LIB_5__::func_260(iParam0, 131072))
	{
		return 131072;
	}
	else if (__LIB_5__::func_260(iParam0, 134217728))
	{
		return 134217728;
	}
	else if (__LIB_5__::func_260(iParam0, 1073741824 /* Float: 2f */))
	{
		return 1073741824 /* Float: 2f */;
	}
	return 0;
}

void func_371(char[4] cParam0, int iParam1, int iParam2)
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
	__LIB_1__::func_336(&(cParam0->f_5423[iVar0 /*65*/].f_6), iParam2);
}

void func_372(char[4] cParam0, char[4] cParam1, int iParam2)
{
	int iVar0;
	if (__LIB_6__::func_872(cParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_8__::func_766(&(cParam0->f_1081), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_8__::func_786(&(cParam0->f_1081));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1081[iVar0 /*3*/] = cParam1;
	cParam0->f_1081[iVar0 /*3*/].f_2 = (cParam0->f_1081[iVar0 /*3*/].f_2 || iParam2);
}

void func_373(char[4] cParam0)
{
	if (!__LIB_0__::func_2() == 0 || NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		__LIB_2__::func_259(&(cParam0->f_603));
	}
}

void func_374(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_4__::func_562(uParam0, 512))
	{
		return;
	}
	if (__LIB_9__::func_178(&(uParam0->f_2262)) < 2f)
	{
		return;
	}
	if (__LIB_4__::func_711(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_4__::func_532(uParam0, 524288);
	}
}

int func_375(int iParam0)
{
	return __LIB_5__::func_60(iParam0, 0);
}

void func_376(var uParam0)
{
	int iVar0;
	if (!uParam0->f_2287)
	{
		if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 8192) && PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_WALK"), false, 0, false);
		}
		if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 65536) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
		{
			if (__LIB_4__::func_575(uParam0, uParam0->f_2074))
			{
				__LIB_4__::func_774(uParam0->f_1406[uParam0->f_2074 /*41*/].f_7);
			}
		}
	}
	if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 16) && (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
		if (__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 65536))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else
		{
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
		}
		__LIB_9__::func_191(uParam0, 1);
	}
	else if ((!__LIB_4__::func_575(uParam0, uParam0->f_2074) && !__LIB_4__::func_579(uParam0, 4)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		__LIB_9__::func_191(uParam0, 3);
	}
	else
	{
		__LIB_9__::func_191(uParam0, 6);
	}
}

bool func_377(char[4] cParam0)
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
	if (!__LIB_0__::func_899(&(cParam0->f_13109)))
	{
		__LIB_4__::func_89(&(cParam0->f_13109), 0);
	}
	else if (__LIB_1__::func_583(&(cParam0->f_13109)) >= 10f)
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
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(Local_14))
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_14);
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

void func_378(char[4] cParam0, int iParam1)
{
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 67108864))
	{
		if (MAP::DOES_BLIP_EXIST(cParam0->f_5303))
		{
			MAP::REMOVE_BLIP(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		__LIB_8__::func_670(cParam0, iParam1, 2);
		__LIB_6__::func_876(cParam0, 0);
		__LIB_9__::func_195(cParam0, 0);
		__LIB_6__::func_868(cParam0, 8);
		__LIB_6__::func_887(cParam0, -2147483648);
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 67108864);
		__LIB_6__::func_887(cParam0, 4);
		__LIB_6__::func_887(cParam0, 8192);
		__LIB_6__::func_887(cParam0, 536870912);
		__LIB_6__::func_881(cParam0, 4);
		__LIB_0__::func_869(0);
		__LIB_0__::func_868(0);
		__LIB_6__::func_887(cParam0, 2);
		__LIB_0__::func_769();
		cParam0->f_5302 = 0;
		__LIB_9__::func_35(cParam0);
		if ((__LIB_9__::func_40(cParam0) == 25 || __LIB_9__::func_40(cParam0) == 26) && __LIB_0__::func_13(32768))
		{
			__LIB_8__::func_665(cParam0, 524288);
		}
		if (__LIB_0__::func_2() == 0)
		{
			if (PED::_0xB655DB7582AEC805(Global_35))
			{
				__LIB_1__::func_965(0);
				PED::_0xF6262491C7704A63(Global_35, 0);
			}
			else if (Global_1935630.f_12)
			{
				__LIB_5__::func_113(1, 1);
			}
		}
	}
}

void func_379(var uParam0)
{
	uParam0->f_2075 = -1;
	__LIB_4__::func_574(uParam0, 0);
	__LIB_0__::func_115(uParam0, 3);
	__LIB_9__::func_191(uParam0, 0);
	__LIB_1__::func_561(&(uParam0->f_2259));
	__LIB_5__::func_359(uParam0);
	__LIB_1__::func_561(&(uParam0->f_2262));
}

void func_380(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4[5];
	int iVar20;
	var uVar21;
	int iVar24;
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	__LIB_5__::func_323(uParam0, iParam1, &vVar1, &fVar0);
	__LIB_5__::func_115(uParam0, __LIB_0__::func_1(uParam0->f_1735[uParam0->f_865[iParam1 /*18*/] /*22*/].f_1, 8));
	__LIB_2__::func_259(&(uParam0->f_2259));
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", true, -1);
	if (uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_39 != 0)
	{
		if (!__LIB_5__::func_97(uParam0, uParam0->f_865[iParam1 /*18*/]))
		{
			__LIB_4__::func_639(&(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/]), 4);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, __LIB_0__::func_165(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_39), true, -1);
		}
	}
	__LIB_4__::func_774(vVar1);
	if (uParam0->f_865[iParam1 /*18*/].f_15 < 1f)
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, uParam0->f_865[iParam1 /*18*/].f_15);
		__LIB_4__::func_612(uParam0, 32);
	}
	if (__LIB_0__::func_84(&(uParam0->f_865[iParam1 /*18*/]), 16))
	{
		__LIB_5__::func_369(uParam0, uParam0->f_865[iParam1 /*18*/], &vVar4, vVar1, fVar0, &uVar21);
		TASK::TASK_FLUSH_ROUTE();
		iVar24 = 0;
		while (iVar24 < 5)
		{
			TASK::TASK_EXTEND_ROUTE(vVar4[iVar24 /*3*/]);
			iVar24++;
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		__LIB_5__::func_98(uParam0, iParam1, bParam2, &vVar4);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		__LIB_5__::func_99(uParam0, iParam1, bParam2, vVar1);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
}

void func_381(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		__LIB_1__::func_281(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			__LIB_3__::func_590(iParam0, 0);
		}
	}
}

bool func_382(char[4] cParam0)
{
	bool bVar0;
	bVar0 = (PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_TELEPORT_ACTIVE());
	if (__LIB_1__::func_583(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			PLAYER::STOP_PLAYER_TELEPORT();
		}
		if ((__LIB_0__::func_13(32768) && __LIB_4__::func_545()) && __LIB_1__::func_583(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
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

bool func_383(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return __LIB_9__::func_247(uParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_384(char[4] cParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10)
{
	__LIB_9__::func_205(cParam0, &uParam1, "", bParam9, bParam10);
}

void func_385(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
	__LIB_9__::func_203(iParam1, 0, bParam4, bParam5, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_386()
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
	if (!__LIB_3__::func_907(iVar0))
	{
		return 0;
	}
	return __LIB_6__::func_915(iVar0, 0);
}

int func_387(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!__LIB_3__::func_907(iParam0))
	{
		return 0;
	}
	if (__LIB_5__::func_100(iParam0))
	{
		iVar0 = 0;
		if (__LIB_0__::func_357(iParam0) == 81053684)
		{
			if (bParam1)
			{
				__LIB_1__::func_683(&iVar0, 2);
			}
		}
		return __LIB_6__::func_915(iParam0, iVar0);
	}
	return 0;
}

void func_388(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_6__::func_775();
	}
	else
	{
		return;
	}
	__LIB_0__::func_591();
	Global_40.f_9.f_14 = __LIB_0__::func_23();
	Global_40.f_9.f_20 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (__LIB_0__::func_826())
		{
			__LIB_0__::func_322(Global_1310720.f_1);
		}
		else if (__LIB_0__::func_61() == __LIB_1__::func_447(Global_36, 1) && __LIB_0__::func_592() != 2)
		{
			__LIB_0__::func_322(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			__LIB_0__::func_322(Global_36);
		}
		__LIB_1__::func_627(Global_36, &vVar0, &uVar4);
		if (!__LIB_0__::func_826())
		{
			if (__LIB_0__::func_62(vVar0, Global_36) < __LIB_0__::func_62(Global_40.f_9.f_7, Global_36))
			{
				__LIB_0__::func_322(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = __LIB_1__::func_447(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		__LIB_1__::func_627(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		__LIB_0__::func_7(&Global_1935630, 8192);
	}
	__LIB_1__::func_780();
}

void func_389(var uParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		Local_14 = ITEMSET::CREATE_ITEMSET(false);
	}
}

bool func_390(int iParam0)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bVar0 = PED::IS_PED_ON_FOOT(Global_35);
	if (!bVar0 && __LIB_2__::func_27(iParam0, 1048576))
	{
		__LIB_4__::func_727(iParam0, 1048576);
		return false;
	}
	if (!__LIB_2__::func_27(iParam0, 8388608))
	{
		if (BUILTIN::VDIST2(__LIB_1__::func_204(*iParam0), Global_36) < (10f * 10f))
		{
			__LIB_5__::func_410(iParam0, 8388608);
			__LIB_1__::func_283(&(iParam0->f_2890), 0);
		}
		else
		{
			return false;
		}
	}
	if (!__LIB_2__::func_27(iParam0, 1048576))
	{
		if (bVar0)
		{
			__LIB_5__::func_410(iParam0, 1048576);
		}
		else
		{
			iVar1 = 131072;
			vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, __LIB_1__::func_204(*iParam0)) };
			if (vVar2.x > 0f)
			{
				iVar1 = 262144;
			}
			if (__LIB_2__::func_660(Global_35, &(iParam0->f_421), 0, 256, iVar1, 1084227584 /* Float: 5f */, 100, 0, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
		}
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_422) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_422, true, 0))
	{
		return true;
	}
	else if (BUILTIN::VDIST2(__LIB_1__::func_204(*iParam0), Global_36) < (2.5f * 2.5f))
	{
		return true;
	}
	else if (!__LIB_2__::func_27(iParam0, 2097152))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, __LIB_1__::func_204(*iParam0), 1f, 20000, 0.25f, 0, 40000f);
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
		PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 1, false);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, iParam0->f_3, -1, 0, 51, 0);
		}
		__LIB_5__::func_410(iParam0, 2097152);
	}
	if (__LIB_0__::func_75(&(iParam0->f_2890)))
	{
		if (__LIB_0__::func_265(&(iParam0->f_2890)) >= 15f)
		{
			return true;
		}
	}
	return false;
}

void func_391()
{
	__LIB_0__::func_7(&(Global_1879514.f_6), 16);
}

void func_392(char[4] cParam0)
{
	__LIB_6__::func_869(cParam0, 1);
}

void func_393(int iParam0)
{
	Global_1934182.f_74 = (Global_1934182.f_74 - (Global_1934182.f_74 && iParam0));
}

void func_394(var uParam0, bool bParam1, bool bParam2)
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
	MISC::_0x2FCD528A397E5C88(uParam0, iVar0);
}

void func_395(char[4] cParam0)
{
	cParam0->f_607 = cParam0->f_607;
}

bool func_396(char[4] cParam0, int iParam1)
{
	iParam1 = iParam1;
	return cParam0->f_607 == cParam0->f_607;
}

void func_397(char* sParam0, var uParam1)
{
	var uVar0[1];
	if (CAM::_0xDD0B7C5AE58F721D(sParam0) && !CAM::_0x927B810E43E99932(sParam0))
	{
		CAM::_0xB8B207C34285E978(sParam0);
		uVar0[0] = uParam1;
		CAM::_0xFEB8646818294C75(sParam0, &uVar0);
	}
}

void func_398(int iParam0)
{
	char* sVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		switch (iVar1)
		{
			case 0:
				sVar0 = "dead_a";
				break;
			case 1:
				sVar0 = "dead_b";
				break;
			case 2:
				sVar0 = "dead_c";
				break;
			case 3:
				sVar0 = "dead_d";
				break;
			case 4:
				sVar0 = "dead_e";
				break;
			case 5:
				sVar0 = "dead_f";
				break;
			case 6:
				sVar0 = "dead_g";
				break;
			case 7:
				sVar0 = "dead_h";
				break;
		}
		TASK::TASK_PLAY_ANIM(iParam0, "AI_DAMAGE@DEAD@BASE", sVar0, 1000f, -4f, -1, 139268, 0.99f, false, 0, false, 0, false);
		PED::_0x2208438012482A1A(iParam0, false, false);
	}
}

int func_399(char[4] cParam0)
{
	return __LIB_0__::func_127(&(cParam0->f_7375));
}

void func_400(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7, bool bParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	PED::CLEAR_PED_NON_CREATION_AREA();
	vVar0 = { __LIB_2__::func_66(vParam1, vParam4, uParam7) };
	vVar3 = { __LIB_2__::func_67(vParam1, vParam4, uParam7) };
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar0, vVar3, 0);
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam8);
	}
}

int func_401(var uParam0)
{
	if (!__LIB_0__::func_899(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (__LIB_0__::func_901(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (__LIB_0__::func_485() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_402(vector3 vParam0, vector3 vParam3)
{
	return __LIB_8__::func_838(vParam0, vParam3, 0f, 0f, 0f);
}

void func_403(char[4] cParam0, int iParam1, char[4] cParam2, int iParam3)
{
	__LIB_4__::func_632(&(cParam0->f_7375), cParam2, iParam1, iParam3);
}

bool func_404(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (__LIB_0__::func_636(vVar1, vVar4) > __LIB_1__::func_136(iParam0))
	{
		return true;
	}
	return false;
}

void func_405(int iParam0)
{
	__LIB_3__::func_229(iParam0);
	__LIB_0__::func_123(iParam0, 32);
}

bool func_406(float fParam0, float fParam1)
{
	if ((((((!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) && !PED::IS_PED_AIMING_FROM_COVER(Global_35)) && !PED::IS_PED_SHOOTING(Global_35)) && !PED::IS_PED_RELOADING(Global_35))
	{
		if (!__LIB_0__::func_899(fParam0))
		{
			__LIB_2__::func_259(fParam0);
		}
		else if (__LIB_9__::func_178(fParam0) >= fParam1)
		{
			return true;
		}
		else if (((fParam1 > 15f && __LIB_3__::func_996(Global_35)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_264(Global_35)))) && __LIB_9__::func_178(fParam0) < (fParam1 - 15f))
		{
			__LIB_1__::func_585(fParam0, (fParam1 - 15f));
		}
	}
	else if (__LIB_0__::func_899(fParam0))
	{
		__LIB_1__::func_561(fParam0);
	}
	return false;
}

void func_407(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 35)
	{
		iVar0 = __LIB_0__::func_560(iParam0, iVar1);
		if (__LIB_1__::func_917(iVar0))
		{
			__LIB_4__::func_932(iVar0, bParam1);
		}
		iVar1++;
	}
}

bool func_408(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return __LIB_9__::func_346(cParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

int func_409(char[4] cParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_6__::func_862(cParam0, 16777216))
	{
		__LIB_8__::func_712(cParam0);
		__LIB_6__::func_887(cParam0, 65536);
		return 0;
	}
	if (!__LIB_8__::func_705(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { __LIB_8__::func_688(cParam0, iParam1) };
	if (__LIB_9__::func_244(cParam0, &Var0))
	{
		if (!__LIB_6__::func_862(cParam0, 65536))
		{
			__LIB_6__::func_868(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_410(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_M1899"), 0, bParam2) && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_PISTOL_M1899");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_MAUSER"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_PISTOL_MAUSER");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_LEMAT"), 0, bParam2) && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_REVOLVER_LEMAT");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"), 0, bParam2) && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_REVOLVER_DOUBLEACTION");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_SEMIAUTO"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_PISTOL_SEMIAUTO");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_SCHOFIELD"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_REVOLVER_SCHOFIELD");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL_VOLCANIC"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_PISTOL_VOLCANIC");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SHOTGUN_SAWEDOFF"), 0, bParam2))
	{
		iVar0 = joaat("WEAPON_SHOTGUN_SAWEDOFF");
	}
	else
	{
		iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		__LIB_1__::func_766(iParam0, iVar0, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	if (iVar0 == 0)
	{
		return;
	}
	if (bParam1)
	{
		TASK::TASK_SWAP_WEAPON(iParam0, 1, 0, 0, 0);
	}
	else if (iParam0 == Global_35)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, 0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, true, 0, false, false);
}

void func_411(char[4] cParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && __LIB_0__::func_407(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		bVar0 = true;
		iVar1 = __LIB_4__::func_656(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
		if (bParam3)
		{
			if (__LIB_9__::func_131(cParam0, iParam1, 1024))
			{
				__LIB_9__::func_141(cParam0, iParam1, 8192);
			}
			else
			{
				__LIB_0__::func_900(iVar1);
			}
		}
		else if (!__LIB_9__::func_131(cParam0, iParam1, 8192))
		{
			if (__LIB_0__::func_51(&(Global_1360165[iVar1 /*1157*/].f_12), 8) && !__LIB_9__::func_131(cParam0, iParam1, 1024))
			{
				__LIB_0__::func_745(iVar1);
			}
		}
		else
		{
			__LIB_9__::func_147(cParam0, iParam1, 8192);
		}
	}
	if (bParam3)
	{
		__LIB_9__::func_354(cParam0, iParam1, iParam2, iParam4, 1, bVar0);
	}
	else if (MAP::DOES_BLIP_EXIST(cParam0->f_5303) || iParam2 == joaat("BLIP_STYLE_PLAYER_HORSE"))
	{
		__LIB_9__::func_354(cParam0, iParam1, iParam2, iParam4, 0, bVar0);
	}
}

void func_412(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_1__::func_22(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			__LIB_9__::func_385(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_413(char[4] cParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!__LIB_9__::func_32(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (bParam2)
	{
		__LIB_5__::func_73(&(cParam0->f_5423[iVar0 /*65*/]), 256);
	}
	else
	{
		__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 256);
	}
	__LIB_5__::func_130(&(cParam0->f_5423[iVar0 /*65*/]), bParam2);
}

void func_414(var uParam0, int iParam1, bool bParam2)
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
	__LIB_5__::func_488(uParam0);
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

bool func_415(int iParam0)
{
	return !__LIB_2__::func_27(iParam0, 64);
}

void func_416(int iParam0)
{
	Global_1934182.f_74 = (Global_1934182.f_74 || iParam0);
}

void func_417(int iParam0, float fParam1)
{
	iParam0->f_2887 = fParam1;
}

void func_418(var uParam0, char[4] cParam1, int iParam2, char[4] cParam3, char[4] cParam4, int iParam5)
{
	__LIB_5__::func_152(uParam0, 4);
	if (__LIB_5__::func_517(uParam0, &cParam1, iParam5))
	{
		__LIB_0__::func_115(uParam0, 1);
	}
}

bool func_419(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
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

int func_420(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	__LIB_6__::func_656(iParam0, 1);
	__LIB_1__::func_830(iVar0);
	if (bParam1)
	{
		__LIB_1__::func_284(&Global_1899778, iVar0);
	}
	__LIB_6__::func_581(iVar0);
	return 1;
}

void func_421(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		__LIB_0__::func_516(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

Vector3 func_422(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2681.173f, 1935.781f, 101.8587f;
		case 3:
			return -2828.721f, -422.1472f, 186.4498f;
		case 4:
			return 289.5062f, 2288.324f, 313.0248f;
		case 5:
			return -1940.045f, 1743.173f, 234.5481f;
		case 6:
			return -3916.118f, -3672.374f, 47.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_423()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uLocal_24[iVar0]))
		{
			VOLUME::_0xFDFECC6EE4491E11(uLocal_24[iVar0]);
		}
		iVar0++;
	}
}

float func_424(int iParam0)
{
	float fVar0;
	fVar0 = 50f;
	switch (iParam0)
	{
		case 1:
		case 5:
		case 6:
			fVar0 = 20f;
			break;
	}
	return fVar0;
}

int func_425(int iParam0)
{
	int iVar0;
	iVar0 = 2;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
			if (__LIB_1__::func_985())
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

bool func_426(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_654(iParam0);
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (__LIB_0__::func_821(iVar1) == iVar0)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_427(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (uParam0->f_8)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
			uParam0->f_8 = 0;
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_3));
		}
		uParam0->f_3 = 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
	}
	if (uParam0->f_9)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Special_Ambient_Horse", false);
		PED::_0x7D4E70A67A651C71(1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_5__::func_654(uParam0->f_1));
		uParam0->f_9 = 0;
	}
}

void func_428(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	fVar0 = __LIB_9__::func_424(uParam0->f_1);
	vVar1 = { fVar0, fVar0, fVar0 };
	uParam0->f_4 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_5, __LIB_1__::func_977(), vVar1, "Special Ambient Horse Unalerted");
}

int func_429(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (__LIB_0__::func_62(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_430(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	*uParam0 = 0;
	uParam0->f_2 = __LIB_9__::func_425(iParam1);
	uParam0->f_5 = { __LIB_9__::func_422(iParam1) };
}

bool func_431(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_3, true))
	{
		return true;
	}
	if (PED::_0x77525BBF433F2CD6(uParam0->f_3))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_3, joaat("EVENT_ANIMAL_DETECTED_THREAT")))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_3, joaat("EVENT_ANIMAL_TAMING_CALLOUT")))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_3, joaat("EVENT_PLAYER_IN_CLOSE_PROXIMITY_TO_HORSE")))
	{
		return true;
	}
	if (__LIB_9__::func_426(uParam0->f_1))
	{
		return true;
	}
	return false;
}

bool func_432(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_2__::func_410(15))
	{
		return false;
	}
	iVar0 = __LIB_5__::func_654(iParam0);
	if (__LIB_0__::func_575(iVar0))
	{
		if (!__LIB_0__::func_313())
		{
			return false;
		}
	}
	iVar1 = Global_40.f_11945[iParam0];
	__LIB_1__::func_446(&iVar1, 0, 0, 0, __LIB_5__::func_661(iParam0), 0, 0, 0);
	if (!__LIB_1__::func_426(iVar1, 1))
	{
		return false;
	}
	if (__LIB_9__::func_426(iParam0))
	{
		return false;
	}
	return true;
}

void func_433()
{
	Global_1347477.f_6 = 0;
}

int func_434()
{
	return Global_1946804.f_1497.f_1[1 /*3*/];
}

bool func_435(int iParam0)
{
	switch (iParam0)
	{
		case -2017785881:
		case -1900633994:
		case -1511041621:
		case -1471756535:
		case -1147723761:
		case -1051664629:
		case -986108061:
		case -929316746:
		case -827216318:
		case -736147717:
		case -245303732:
		case -193909113:
		case 282876023:
		case 602337354:
		case 963009459:
		case 1012091683:
		case 1334801974:
		case 1471627791:
			return true;
		default:
			break;
	}
	return false;
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case -986108061:
			return 1156231582 /* GXTEntry: "Buzzed" */;
		case -1051664629:
			return joaat("CLOTHING_ITEM_HAIR_SWEPT_BACK");
		case 1471627791:
			return -2120294484 /* GXTEntry: "Swept Back Fade" */;
		case 1012091683:
			return -814448122 /* GXTEntry: "Left Parted" */;
		case 282876023:
			return 1279519416 /* GXTEntry: "Left Parted Fade" */;
		case 1334801974:
			return 933586678 /* GXTEntry: "Right Parted" */;
		case -736147717:
			return 1612093252 /* GXTEntry: "Right Parted Fade" */;
		case -245303732:
			return 530132198 /* GXTEntry: "Middle Parted" */;
		case -1900633994:
			return -499492817 /* GXTEntry: "Middle Parted Fade" */;
		case -1511041621:
			return -1392593303 /* GXTEntry: "Buzzed" */;
		case -193909113:
			return -2091943191 /* GXTEntry: "Left Parted" */;
		case -929316746:
			return 1165676701 /* GXTEntry: "Left Parted Fade" */;
		case -1147723761:
			return 1380556716 /* GXTEntry: "Middle Parted" */;
		case 963009459:
			return -1140711191 /* GXTEntry: "Middle Parted Fade" */;
		case 602337354:
			return -1189021969 /* GXTEntry: "Right Parted" */;
		case -1471756535:
			return 862555979 /* GXTEntry: "Right Parted Fade" */;
		case -2017785881:
			return -674783297 /* GXTEntry: "Swept Back" */;
		case -827216318:
			return 279124309 /* GXTEntry: "Swept Back Fade" */;
		default:
			break;
	}
	return 0;
}

void func_437()
{
	Global_1347477.f_6 = 1;
}

void func_438(int iParam0)
{
	iLocal_14 = iParam0;
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -70852636;
		case 1:
			return -452152720;
		case 2:
			return -1659460987;
		case 3:
			return -1906834168;
		case 4:
			return -1073518498;
		case 5:
			return -1304572717;
		case 6:
			return 1715418323;
		case 7:
			return 1468307294;
		case 8:
			return -1986397304;
		case 9:
			return 2061000197;
		default:
			break;
	}
	return 0;
}

int func_440()
{
	if (__LIB_0__::func_241() == 1160113249)
	{
		return -1392593303 /* GXTEntry: "Buzzed" */;
	}
	return 1156231582 /* GXTEntry: "Buzzed" */;
}

void func_441()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			__LIB_0__::func_242(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), iVar0, iVar1);
			iVar1++;
		}
		return;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		__LIB_0__::func_243(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), iVar0, iVar1);
		iVar1++;
	}
}

int func_442(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	if (Global_1905943)
	{
		return 0;
	}
	Global_1905943 = iParam3;
	if (Global_1905943)
	{
	}
	if (Global_1905941 == iParam0)
	{
		return 1;
	}
	if (Global_40.f_7729 == iParam0 && !bParam2)
	{
		Global_1905941 = iParam0;
		return 1;
	}
	if (Global_40.f_7729 != Global_1905941 && !bParam2)
	{
		return 0;
	}
	if (!__LIB_0__::func_450(iParam0))
	{
		return 0;
	}
	if (!__LIB_1__::func_122(iParam0) && !bParam2)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_223(iParam0);
	if (iParam0 > 5 && !__LIB_1__::func_87(iVar0, Global_1946804.f_1))
	{
	}
	Global_1905941 = iParam0;
	__LIB_0__::func_828(iParam0, 1024);
	DECORATOR::DECOR_SET_BOOL(Global_35, "outfitChanged", false);
	DECORATOR::DECOR_SET_BOOL(Global_35, "playerChangeOutfits", true);
	if (bParam2)
	{
		__LIB_0__::func_806(iParam0, 32768);
	}
	if (bParam1)
	{
		__LIB_0__::func_806(iParam0, 8192);
	}
	return 1;
}

void func_443(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	fVar3 = BUILTIN::TO_FLOAT(iParam5);
	iVar0 = __LIB_4__::func_674(BUILTIN::TO_FLOAT(*iParam0), fVar3);
	iVar1 = __LIB_4__::func_675(BUILTIN::TO_FLOAT(*iParam1), fVar3);
	iVar2 = __LIB_4__::func_675(BUILTIN::TO_FLOAT(*uParam2), fVar3);
	*iParam0 = (*iParam0 / iParam5);
	*iParam1 = (*iParam1 / iParam5);
	*uParam2 = (*uParam2 / iParam5);
	*uParam3 = (*uParam3 / iParam5);
	*iParam1 = (*iParam1 + iVar0);
	*uParam2 = (*uParam2 + iVar1);
	*uParam3 = (*uParam3 + iVar2);
	if (bParam4)
	{
		*uParam3 = (*uParam3 * -1);
		*uParam2 = (*uParam2 * -1);
		*iParam1 = (*iParam1 * -1);
		*iParam0 = (*iParam0 * -1);
	}
}

int func_444(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (bParam4 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = __LIB_1__::func_435(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = ENTITY::GET_ENTITY_MODEL(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
	}
	if (!__LIB_4__::func_988(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_804, sParam2))
		{
			__LIB_5__::func_17(uParam0, iParam1, 4);
			return 1;
		}
		else if (iParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_804, sParam2))
		{
			__LIB_5__::func_17(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

void func_445(bool bParam0)
{
	if (__LIB_7__::func_790() && (bParam0 || __LIB_1__::func_426(Global_40.f_7748, 1)))
	{
		Global_40.f_7748.f_3 = 0;
		if (bParam0)
		{
			Global_40.f_7748 = __LIB_0__::func_23();
		}
		else
		{
			__LIB_1__::func_240(492, 1);
		}
		__LIB_1__::func_452(9, 0, 0, 0, 0);
	}
}

void func_446()
{
	int iVar0;
	if (__LIB_4__::func_665() <= 3)
	{
		iVar0 = __LIB_0__::func_23();
		__LIB_1__::func_446(&iVar0, 0, 0, 0, 2, 0, 0, 0);
		DECORATOR::DECOR_SET_INT(Global_35, "hairShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "hairLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "hairShort");
	}
}

bool func_447(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	char[] cVar9[8];
	iVar0 = 1;
	if (!__LIB_5__::func_347(__LIB_4__::func_941(uParam0), __LIB_4__::func_948(uParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { __LIB_5__::func_300(__LIB_4__::func_941(uParam0)) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
	{
		if (!__LIB_5__::func_464(__LIB_4__::func_941(uParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!__LIB_9__::func_306(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		iVar0 = 0;
	}
	if (__LIB_4__::func_948(uParam0, 4) && !PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {__LIB_4__::func_542(uParam0->f_607)}, 3);
	if (!__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		if (!__LIB_5__::func_341(&(uParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_448(var uParam0)
{
	var uVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	iVar16 = __LIB_4__::func_939(uParam0);
	iVar17 = __LIB_5__::func_24(iVar16);
	iVar18 = __LIB_5__::func_279(uParam0, iVar16);
	if (uParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2504)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_583(uParam0, &(uParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_4__::func_972(&(uParam0->f_8269[iVar19 /*16*/]));
				}
				else if (__LIB_5__::func_584(uParam0, &(uParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_5__::func_29(&(uParam0->f_8269[iVar19 /*16*/]));
					if (iVar19 < (uParam0->f_8269.f_2504 - 1))
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269[iVar19 /*16*/]), &(uParam0->f_8269[(uParam0->f_8269.f_2504 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(uParam0->f_8269[uParam0->f_8269.f_2504 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269[iVar19 /*16*/]), &uVar0, 16);
					}
					uParam0->f_8269.f_2504 = (uParam0->f_8269.f_2504 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2505 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2505)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269.f_641[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_489(uParam0, &(uParam0->f_8269.f_641[iVar19 /*16*/]), iVar16, iVar17, iVar18, 1))
				{
					__LIB_4__::func_990(&(uParam0->f_8269.f_641[iVar19 /*16*/]));
					if (iVar19 < (uParam0->f_8269.f_2505 - 1))
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_641[iVar19 /*16*/]), &(uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1) /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_641[iVar19 /*16*/]), &uVar0, 16);
					}
					uParam0->f_8269.f_2505 = (uParam0->f_8269.f_2505 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2506 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2506)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_489(uParam0, &(uParam0->f_8269.f_1282[iVar19 /*16*/]), iVar16, iVar17, iVar18, 0))
				{
					if (__LIB_1__::func_388(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), 1))
					{
						if (__LIB_0__::func_755(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), 4))
						{
							__LIB_4__::func_991(&(uParam0->f_8269));
						}
						if (iVar19 < (uParam0->f_8269.f_2506 - 1))
						{
							MISC::_COPY_MEMORY(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), &(uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1) /*16*/]), 16);
							MISC::_COPY_MEMORY(&(uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1) /*16*/]), &uVar0, 16);
							iVar19 = (iVar19 - 1);
						}
						else
						{
							MISC::_COPY_MEMORY(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), &uVar0, 16);
						}
						uParam0->f_8269.f_2506 = (uParam0->f_8269.f_2506 - 1);
					}
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2507 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2507)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_583(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_8__::func_907(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
					__LIB_0__::func_324(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
				}
				else if (__LIB_5__::func_584(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_8__::func_907(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), 0);
					__LIB_0__::func_324(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), 2);
					if (iVar19 < (uParam0->f_8269.f_2507 - 1))
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), &(uParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), 16);
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), &uVar0, 16);
					}
					uParam0->f_8269.f_2507 = (uParam0->f_8269.f_2507 - 1);
				}
			}
			iVar19++;
		}
	}
}

int func_449(var uParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_4__::func_937(uParam0, 16777216))
	{
		__LIB_5__::func_345(uParam0);
		__LIB_4__::func_969(uParam0, 65536);
		return 0;
	}
	if (!__LIB_5__::func_331(uParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { __LIB_5__::func_299(uParam0, iParam1) };
	if (__LIB_9__::func_307(uParam0, &Var0))
	{
		if (!__LIB_4__::func_937(uParam0, 65536))
		{
			__LIB_4__::func_944(uParam0, 65536);
		}
		return 1;
	}
	return 0;
}

bool func_450(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	if (__LIB_4__::func_626(uParam1, 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) || ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
			}
			if (uParam1->f_9 == 14)
			{
				__LIB_4__::func_935(uParam0, 64);
			}
			else if (ENTITY::IS_ENTITY_A_PED(*uParam1) && __LIB_4__::func_531(uParam1, 32))
			{
				CAM::_0x6E969927CF632608(1);
				CAM::_0xE3639DB78B3B5400(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1));
				bVar0 = true;
			}
			__LIB_9__::func_308(uParam0, __LIB_5__::func_361(uParam1->f_9, uParam1->f_4), !bVar0, 0);
			return true;
		}
		if (uParam1->f_9 == 40)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1);
			if ((PED::_0xB655DB7582AEC805(iVar1) || TASK::IS_PED_IN_WRITHE(iVar1)) && !__LIB_5__::func_128())
			{
				__LIB_9__::func_308(uParam0, __LIB_5__::func_362(uParam1->f_9), 1, 0);
				return true;
			}
		}
		if (__LIB_5__::func_3(uParam1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) || ENTITY::IS_ENTITY_DEAD(uParam1->f_1))
			{
				if (__LIB_0__::func_27(uParam1->f_64, 16))
				{
					__LIB_9__::func_308(uParam0, __LIB_5__::func_363(uParam1->f_9, uParam1->f_4), 1, 0);
					return true;
				}
				else if (__LIB_0__::func_27(uParam1->f_64, 8))
				{
					__LIB_9__::func_308(uParam0, __LIB_5__::func_364(uParam1->f_9, uParam1->f_4), 1, 0);
					return true;
				}
			}
			else if (__LIB_0__::func_27(uParam1->f_64, 8))
			{
				if (__LIB_3__::func_320(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_1)) < 1)
				{
					__LIB_9__::func_308(uParam0, __LIB_5__::func_364(uParam1->f_9, uParam1->f_4), 1, 0);
					return true;
				}
			}
		}
	}
	return false;
}

void func_451(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_71(Global_35))
	{
		return;
	}
	if (__LIB_4__::func_626(uParam1, 512))
	{
		if (ENTITY::IS_ENTITY_A_PED(*uParam1) && !__LIB_0__::func_125(*uParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !__LIB_0__::func_71(iVar0))
			{
				bVar1 = PED::_0x947E43F544B6AB34(iVar0, PLAYER::GET_PLAYER_INDEX(), 10, __LIB_5__::func_87(uParam1, 512));
				if (!bVar1)
				{
					bVar1 = (PED::_0x947E43F544B6AB34(iVar0, PLAYER::GET_PLAYER_INDEX(), 11, __LIB_5__::func_87(uParam1, 512)) && (__LIB_0__::func_71(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)));
				}
				if (bVar1)
				{
					if (__LIB_4__::func_627(uParam1, 512) <= 0 || !__LIB_5__::func_319(uParam1, 512))
					{
						__LIB_5__::func_320(uParam1, 512);
					}
					if (__LIB_5__::func_88(uParam1) || __LIB_5__::func_321(uParam1, 512))
					{
						__LIB_9__::func_308(uParam0, __LIB_5__::func_365(uParam1->f_9, uParam1->f_4), 1, 0);
					}
				}
			}
		}
	}
}

void func_452(var uParam0, var uParam1, int iParam2)
{
	struct<2> Var0;
	struct<8> Var6;
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		return;
	}
	if (__LIB_4__::func_626(uParam1, 16))
	{
		if (SCRIPTS::GET_EVENT_DATA(0, iParam2, &Var0, 6))
		{
			if (((((ENTITY::DOES_ENTITY_EXIST(*uParam1) && ENTITY::DOES_ENTITY_EXIST(Var0.f_1)) && (Var0.f_1 == *uParam1 || (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && Var0.f_1 == uParam1->f_1))) && ENTITY::IS_ENTITY_A_PED(Var0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == Global_35) && (__LIB_5__::func_88(uParam1) || !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1)))
			{
				if (uParam1->f_9 == 14)
				{
					__LIB_4__::func_935(uParam0, 64);
				}
				Var6 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
				if (Var0.f_1 == uParam1->f_1 && !ENTITY::IS_ENTITY_A_VEHICLE(uParam1->f_1))
				{
					Var6 = { __LIB_5__::func_367(uParam1->f_9, uParam1->f_4) };
				}
				__LIB_9__::func_308(uParam0, Var6, 1, 0);
			}
		}
	}
}

void func_453(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	struct<8> Var9;
	struct<8> Var17;
	if (SCRIPTS::GET_EVENT_DATA(0, iParam2, &vVar0, 9))
	{
		if (((ENTITY::DOES_ENTITY_EXIST(vVar0.x) && (vVar0.x == *uParam1 || (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && vVar0.x == uParam1->f_1))) && ENTITY::IS_ENTITY_A_PED(vVar0.y)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y) == Global_35)
		{
			if (__LIB_4__::func_626(uParam1, 8) && (__LIB_5__::func_4(vVar0.z) || vVar0.z == joaat("WEAPON_FIRE")))
			{
				if (__LIB_4__::func_627(uParam1, 8) <= 0 || !__LIB_5__::func_319(uParam1, 8))
				{
					__LIB_5__::func_320(uParam1, 8);
					PED::_0xD67B6F3BCF81BA47(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 128);
				}
				if (__LIB_5__::func_88(uParam1) || __LIB_5__::func_321(uParam1, 8))
				{
					if (uParam1->f_9 == 14)
					{
						__LIB_4__::func_935(uParam0, 64);
					}
					Var9 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
					if (vVar0.x == uParam1->f_1 && !ENTITY::IS_ENTITY_A_VEHICLE(uParam1->f_1))
					{
						Var9 = { __LIB_5__::func_367(uParam1->f_9, uParam1->f_4) };
					}
					__LIB_9__::func_308(uParam0, Var9, 1, 0);
				}
				return;
			}
			if (__LIB_4__::func_626(uParam1, 4) && __LIB_0__::func_154(vVar0.z))
			{
				if (__LIB_4__::func_627(uParam1, 4) <= 0 || !__LIB_5__::func_319(uParam1, 4))
				{
					__LIB_5__::func_320(uParam1, 4);
				}
				if (__LIB_5__::func_88(uParam1) || __LIB_5__::func_321(uParam1, 4))
				{
					Var17 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
					if (vVar0.x == uParam1->f_1 && !ENTITY::IS_ENTITY_A_VEHICLE(uParam1->f_1))
					{
						Var17 = { __LIB_5__::func_367(uParam1->f_9, uParam1->f_4) };
					}
					__LIB_9__::func_308(uParam0, Var17, 1, 0);
				}
			}
		}
	}
}

void func_454(var uParam0, var uParam1)
{
	vector3 vVar0;
	struct<8> Var3;
	struct<8> Var11;
	struct<8> Var19;
	struct<8> Var27;
	if (uParam1->f_9 == 14 && !ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_THROWN_MOLOTOV"), 5f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_THROWN_DYNAMITE"), 5f, true))
		{
			__LIB_4__::func_935(uParam0, 64);
			Var3 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
			__LIB_9__::func_308(uParam0, Var3, 1, 0);
		}
		else if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_BOW"), 8f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_BOW_IMPROVED"), 8f, true)) && WEAPON::_IS_WEAPON_BOW(Global_1935630.f_44)) && WEAPON::_0x7E7B19A4355FEE13(Global_35, WEAPON::_0x6CA484C9A7377E4F(Global_35, 1)) == joaat("AMMO_ARROW_DYNAMITE"))
		{
			__LIB_4__::func_935(uParam0, 64);
			Var11 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
			__LIB_9__::func_308(uParam0, Var11, 1, 0);
		}
		else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, vVar0, 8f))
		{
			__LIB_4__::func_935(uParam0, 64);
			Var19 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
			__LIB_9__::func_308(uParam0, Var19, 1, 0);
		}
		else if (__LIB_4__::func_626(uParam1, -2147483648) && !__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 207))
		{
			__LIB_4__::func_935(uParam0, 64);
			Var27 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
			__LIB_9__::func_308(uParam0, Var27, 1, 0);
		}
	}
}

void func_455(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (__LIB_4__::func_637(&(uParam0->f_2023[iParam1 /*15*/])))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!__LIB_0__::func_1(uParam0->f_2023[iParam1 /*15*/].f_10, 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_2293)))
				{
					__LIB_9__::func_387(uParam0->f_2293, 0);
					__LIB_4__::func_666(&(uParam0->f_2023[iParam1 /*15*/]), 2);
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_1(uParam0->f_2023[iParam1 /*15*/].f_10, 256))
			{
				if (!__LIB_4__::func_795())
				{
					__LIB_4__::func_666(&(uParam0->f_2023[iParam1 /*15*/]), 0);
				}
			}
			else
			{
				__LIB_4__::func_666(&(uParam0->f_2023[iParam1 /*15*/]), 0);
			}
			break;
		case 2:
			if (!__LIB_4__::func_790())
			{
				__LIB_4__::func_666(&(uParam0->f_2023[iParam1 /*15*/]), 0);
			}
			break;
	}
}

void func_456(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	bool bVar9;
	switch (__LIB_5__::func_381(&iVar0))
	{
		case 1:
			__LIB_9__::func_308(uParam0, Var1, 1, 0);
			break;
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_13178))
			{
				uParam0->f_13178 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (__LIB_0__::func_6(iVar0) && iVar0 == __LIB_3__::func_918(uParam0->f_607))
			{
				bVar9 = true;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13178, bVar9);
			break;
	}
}

void func_457(char[4] cParam0)
{
	__LIB_6__::func_869(cParam0, 2);
	__LIB_6__::func_869(cParam0, 1);
}

int func_458(int iParam0)
{
	int iVar0;
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (iVar0 == iParam0 || iVar0 == 27)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_459(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = PLAYER::_0x0139637A3BFF8B6D(uParam0, &iVar0);
	if (!PLAYER::_0x0772F87D7B07719A(PLAYER::PLAYER_ID(), iVar0, iVar1))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), iVar0, iVar1);
	}
}

int func_460(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_0__::func_272((*uParam0)[iVar1], iParam1))
		{
			iVar2++;
		}
		iVar1++;
	}
	return iVar2;
}

void func_461(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
		{
			STREAMING::_REQUEST_IMAP(iParam0);
		}
	}
	else if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REMOVE_IMAP(iParam0);
	}
}

void func_462(int iParam0)
{
	iLocal_194 = iParam0;
}

int func_463(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_17(*iParam0);
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), 0);
		return 1;
	}
	return 0;
}

void func_464(var uParam0, char* sParam1, int iParam2)
{
	if (ANIMSCENE::_0x6F1F0B17109309DA(*uParam0, sParam1) && ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam1, *iParam2, 0);
	}
}

bool func_465(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_357(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return true;
	}
	return false;
}

int func_466(var uParam0)
{
	switch (__LIB_6__::func_889(uParam0))
	{
		case 0:
			return 1;
	}
	return 0;
}

bool func_467()
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_1__::func_549(81053684, &iVar0))
	{
		return true;
	}
	if (__LIB_1__::func_549(-525676072, &iVar0))
	{
		return true;
	}
	return false;
}

bool func_468(var uParam0, char* sParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	struct<8> Var20;
	int iVar28;
	vector3 vVar29;
	int iVar32;
	int iVar33;
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_2279);
	if (!bVar0)
	{
		uParam0->f_2279 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
	}
	bVar1 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_2279);
	if (!bVar1)
	{
		return false;
	}
	__LIB_5__::func_91(uParam0);
	__LIB_0__::func_19(uParam0, iParam2);
	if (__LIB_4__::func_562(uParam0, 16384))
	{
		__LIB_4__::func_518(uParam0);
	}
	Var2.f_10 = joaat("WEAPON_UNARMED");
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		__LIB_4__::func_642(uParam0, iVar18);
		if (__LIB_4__::func_643(uParam0, 0))
		{
			if (__LIB_4__::func_644(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					uParam0->f_1406[iVar16 /*41*/].f_27 = 0;
					__LIB_4__::func_645(uParam0, 1, &(uParam0->f_1406[iVar16 /*41*/].f_1));
					__LIB_4__::func_645(uParam0, 2, &(uParam0->f_1406[iVar16 /*41*/].f_1.f_1));
					__LIB_4__::func_645(uParam0, 3, &(uParam0->f_1406[iVar16 /*41*/].f_1.f_2));
					__LIB_4__::func_645(uParam0, 4, &(uParam0->f_1406[iVar16 /*41*/].f_11));
					__LIB_4__::func_645(uParam0, 5, &(uParam0->f_1406[iVar16 /*41*/].f_12));
					__LIB_4__::func_645(uParam0, 6, &(uParam0->f_1406[iVar16 /*41*/].f_13));
					__LIB_4__::func_645(uParam0, 7, &(uParam0->f_1406[iVar16 /*41*/].f_4));
					__LIB_4__::func_645(uParam0, 8, &(uParam0->f_1406[iVar16 /*41*/].f_4.f_1));
					__LIB_4__::func_645(uParam0, 9, &(uParam0->f_1406[iVar16 /*41*/].f_4.f_2));
					__LIB_4__::func_645(uParam0, 10, &(uParam0->f_1406[iVar16 /*41*/].f_7));
					__LIB_4__::func_645(uParam0, 11, &(uParam0->f_1406[iVar16 /*41*/].f_7.f_1));
					__LIB_4__::func_645(uParam0, 12, &(uParam0->f_1406[iVar16 /*41*/].f_7.f_2));
					__LIB_4__::func_645(uParam0, 13, &(uParam0->f_1406[iVar16 /*41*/].f_10));
					__LIB_4__::func_645(uParam0, 14, &(uParam0->f_1406[iVar16 /*41*/].f_14));
					__LIB_4__::func_645(uParam0, 15, &(uParam0->f_1406[iVar16 /*41*/].f_15));
					if (__LIB_4__::func_644(uParam0, 16, &iVar17))
					{
						uParam0->f_1406[iVar16 /*41*/] = iVar17;
					}
					__LIB_4__::func_645(uParam0, 19, &(uParam0->f_1406[iVar16 /*41*/].f_16));
					__LIB_4__::func_645(uParam0, 20, &(uParam0->f_1406[iVar16 /*41*/].f_17));
					__LIB_4__::func_645(uParam0, 31, &(uParam0->f_1406[iVar16 /*41*/].f_18));
					if (__LIB_4__::func_646(uParam0, 21, &Var20))
					{
						MemCopy(&(uParam0->f_1406[iVar16 /*41*/].f_19), {Var20}, 3);
					}
					if (__LIB_4__::func_646(uParam0, 22, &Var20))
					{
						MemCopy(&(uParam0->f_1406[iVar16 /*41*/].f_22), {Var20}, 3);
					}
					__LIB_4__::func_644(uParam0, 23, &(uParam0->f_1406[iVar16 /*41*/].f_25));
					__LIB_5__::func_92(uParam0, &(uParam0->f_1406[iVar16 /*41*/].f_27));
					if (__LIB_4__::func_646(uParam0, 35, &(uParam0->f_1406[iVar16 /*41*/].f_30)))
					{
					}
					if (__LIB_4__::func_644(uParam0, 39, &iVar17))
					{
						uParam0->f_1406[iVar16 /*41*/].f_39 = iVar17;
					}
					else
					{
						uParam0->f_1406[iVar16 /*41*/].f_39 = 1;
					}
					if (__LIB_4__::func_645(uParam0, 40, &(uParam0->f_1406[iVar16 /*41*/].f_40)))
					{
						__LIB_4__::func_639(&(uParam0->f_1406[iVar16 /*41*/]), 2);
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1406[iVar16 /*41*/].f_30)))
					{
						uParam0->f_1406[iVar16 /*41*/].f_30 = { __LIB_0__::func_137() };
					}
					uParam0->f_1406[iVar16 /*41*/].f_29 = 1;
					if (uParam0->f_2285 == -1 || uParam0->f_1406[uParam0->f_2285 /*41*/].f_17 < uParam0->f_1406[iVar16 /*41*/].f_17)
					{
						uParam0->f_2285 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1406[iVar18 /*41*/].f_29)
		{
			vVar29 = { vVar29 + uParam0->f_1406[iVar18 /*41*/].f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(BUILTIN::TO_FLOAT(iVar28)) };
	uParam0->f_2290 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1406[iVar18 /*41*/].f_29)
		{
			if (!__LIB_1__::func_410(vVar29, uParam0->f_1406[iVar18 /*41*/].f_1, 5f, 1))
			{
				uParam0->f_2290 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				__LIB_4__::func_642(uParam0, iVar18);
				if (__LIB_4__::func_643(uParam0, 45))
				{
					if (__LIB_4__::func_644(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							__LIB_4__::func_647(&(uParam0->f_1912[iVar16 /*10*/]), 2);
							__LIB_4__::func_646(uParam0, 46, &(uParam0->f_1912[iVar16 /*10*/]));
							if (__LIB_4__::func_648(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									__LIB_4__::func_647(&(uParam0->f_1912[iVar16 /*10*/]), 1);
								}
							}
							if (__LIB_4__::func_644(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									__LIB_4__::func_647(&(uParam0->f_1912[iVar16 /*10*/]), 8);
								}
								else if (iVar17 == 2)
								{
									__LIB_4__::func_647(&(uParam0->f_1912[iVar16 /*10*/]), 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 65)
			{
				iVar16 = -1;
				__LIB_4__::func_642(uParam0, iVar18);
				if (__LIB_4__::func_643(uParam0, 50))
				{
					if (__LIB_4__::func_644(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					__LIB_4__::func_644(uParam0, 43, &(Var2.f_3));
					if (__LIB_4__::func_646(uParam0, 52, &Var20))
					{
						MemCopy(&(Var2.f_4), {Var20}, 4);
					}
					__LIB_4__::func_645(uParam0, 53, &(Var2.f_8));
					if (__LIB_4__::func_644(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					__LIB_4__::func_648(uParam0, 55, &(Var2.f_11));
					__LIB_4__::func_648(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (__LIB_5__::func_93(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 65)
						{
							uParam0->f_3[iVar32 /*13*/].f_3 = Var2.f_3;
							uParam0->f_3[iVar32 /*13*/].f_4 = { Var2.f_4 };
							uParam0->f_3[iVar32 /*13*/].f_8 = Var2.f_8;
							uParam0->f_3[iVar32 /*13*/].f_10 = Var2.f_10;
							uParam0->f_3[iVar32 /*13*/].f_11 = Var2.f_11;
							uParam0->f_3[iVar32 /*13*/].f_12 = Var2.f_12;
							uParam0->f_3[iVar32 /*13*/] = 1;
							if (__LIB_4__::func_649(Var2.f_1))
							{
								__LIB_4__::func_532(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			__LIB_4__::func_642(uParam0, iVar18);
			if (__LIB_4__::func_643(uParam0, 82))
			{
				if (__LIB_4__::func_646(uParam0, 83, &Var20))
				{
					MemCopy(&(uParam0->f_849), {Var20}, 4);
				}
				__LIB_4__::func_646(uParam0, 84, &(uParam0->f_849.f_4));
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_849.f_4)))
				{
					if (uParam0->f_849.f_15 == 1)
					{
						uParam0->f_849.f_4 = { __LIB_0__::func_134() };
					}
					else if (uParam0->f_849.f_15 == 2)
					{
						uParam0->f_849.f_4 = { __LIB_0__::func_137() };
					}
					else
					{
						uParam0->f_849.f_4 = { __LIB_0__::func_137() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				__LIB_4__::func_642(uParam0, iVar18);
				if (__LIB_4__::func_643(uParam0, 57))
				{
					if (__LIB_4__::func_644(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_865[iVar16 /*18*/].f_8 = 0;
							__LIB_4__::func_644(uParam0, 58, &(uParam0->f_865[iVar16 /*18*/]));
							if (__LIB_4__::func_644(uParam0, 59, &iVar17))
							{
								uParam0->f_865[iVar16 /*18*/].f_1 = __LIB_4__::func_650(iVar17);
							}
							if (__LIB_4__::func_644(uParam0, 60, &iVar17))
							{
								uParam0->f_865[iVar16 /*18*/].f_2 = __LIB_4__::func_651(iVar17);
							}
							__LIB_4__::func_644(uParam0, 61, &(uParam0->f_865[iVar16 /*18*/].f_3));
							__LIB_4__::func_645(uParam0, 67, &(uParam0->f_865[iVar16 /*18*/].f_10));
							__LIB_4__::func_645(uParam0, 70, &(uParam0->f_865[iVar16 /*18*/].f_11));
							__LIB_4__::func_645(uParam0, 68, &(uParam0->f_865[iVar16 /*18*/].f_9));
							__LIB_4__::func_644(uParam0, 72, &(uParam0->f_865[iVar16 /*18*/].f_5));
							__LIB_4__::func_645(uParam0, 77, &(uParam0->f_865[iVar16 /*18*/].f_12));
							__LIB_4__::func_644(uParam0, 78, &(uParam0->f_865[iVar16 /*18*/].f_13));
							__LIB_4__::func_644(uParam0, 79, &(uParam0->f_865[iVar16 /*18*/].f_14));
							if (__LIB_4__::func_644(uParam0, 73, &iVar17))
							{
								uParam0->f_865[iVar16 /*18*/].f_17 = iVar17;
							}
							if (__LIB_4__::func_644(uParam0, 75, &iVar17))
							{
								uParam0->f_865[iVar16 /*18*/].f_4 = iVar17;
								bVar15 = true;
							}
							__LIB_4__::func_645(uParam0, 80, &(uParam0->f_865[iVar16 /*18*/].f_15));
							if (__LIB_4__::func_648(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 1;
								}
							}
							if (__LIB_4__::func_648(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 512;
								}
							}
							if (__LIB_4__::func_648(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 2;
								}
							}
							if (__LIB_4__::func_648(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 16;
								}
							}
							if (__LIB_4__::func_648(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 32;
								}
							}
							if (__LIB_4__::func_648(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 4;
								}
							}
							if (__LIB_4__::func_648(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 64;
								}
							}
							if (__LIB_4__::func_648(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 128;
								}
							}
							if (__LIB_4__::func_648(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_865[iVar16 /*18*/].f_8 |= 256;
								}
							}
							if (!bVar15 && uParam0->f_865[iVar16 /*18*/].f_2 == 9)
							{
								uParam0->f_865[iVar16 /*18*/].f_4 = uParam0->f_865[iVar16 /*18*/].f_3;
								uParam0->f_865[iVar16 /*18*/].f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							uParam0->f_865[iVar16 /*18*/].f_16 = uParam0->f_865[iVar16 /*18*/].f_2;
							uParam0->f_865[iVar16 /*18*/].f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_2284 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				__LIB_4__::func_642(uParam0, iVar18);
				if (__LIB_4__::func_643(uParam0, 85))
				{
					__LIB_4__::func_644(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						__LIB_4__::func_648(uParam0, 87, &(uParam0->f_1735[iVar18 /*22*/]));
						__LIB_4__::func_646(uParam0, 96, &(uParam0->f_1735[iVar18 /*22*/].f_2));
						__LIB_4__::func_646(uParam0, 97, &(uParam0->f_1735[iVar18 /*22*/].f_10));
						__LIB_4__::func_645(uParam0, 93, &(uParam0->f_1735[iVar18 /*22*/].f_18));
						__LIB_4__::func_645(uParam0, 94, &(uParam0->f_1735[iVar18 /*22*/].f_19));
						__LIB_4__::func_644(uParam0, 95, &(uParam0->f_1735[iVar18 /*22*/].f_20));
						uParam0->f_1735[iVar18 /*22*/].f_1 = 0;
						__LIB_5__::func_11(uParam0, &(uParam0->f_1735[iVar18 /*22*/].f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				__LIB_4__::func_642(uParam0, iVar18);
				if (__LIB_4__::func_643(uParam0, 98))
				{
					if (__LIB_4__::func_644(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_2023[iVar16 /*15*/].f_10 = 0;
							__LIB_8__::func_921(uParam0, 99, &(uParam0->f_2023[iVar16 /*15*/]));
							__LIB_8__::func_921(uParam0, 100, &(uParam0->f_2023[iVar16 /*15*/].f_6));
							__LIB_8__::func_921(uParam0, 101, &(uParam0->f_2023[iVar16 /*15*/].f_3));
							if (__LIB_4__::func_644(uParam0, 102, &iVar17))
							{
								uParam0->f_2023[iVar16 /*15*/].f_9 = iVar17;
							}
							__LIB_5__::func_92(uParam0, &(uParam0->f_2023[iVar16 /*15*/].f_10));
							uParam0->f_2023[iVar16 /*15*/].f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			DATAFILE::_DATAFILE_UNLOAD(uParam0->f_2279);
			__LIB_4__::func_532(uParam0, 1);
			__LIB_4__::func_532(uParam0, 16384);
			__LIB_5__::func_12(uParam0);
			return true;
		}
	}
}

void func_469(float fParam0)
{
	if (__LIB_0__::func_247(1) < fParam0)
	{
		__LIB_6__::func_172(1, fParam0, 0);
	}
	if (__LIB_0__::func_247(2) < fParam0)
	{
		__LIB_6__::func_172(2, fParam0, 0);
	}
	if (__LIB_0__::func_247(0) < fParam0)
	{
		__LIB_6__::func_172(0, fParam0, 0);
	}
}

void func_470(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	iVar0 = __LIB_1__::func_710(iParam0);
	iVar1 = __LIB_0__::func_161(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (__LIB_0__::func_779(iParam0) && __LIB_6__::func_107(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && __LIB_0__::func_156(32768)) || Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && iParam0 != Global_1946804.f_1497.f_1[iVar1 /*3*/])
	{
		if (__LIB_0__::func_779(Global_1946804.f_1497.f_1[iVar1 /*3*/]) && __LIB_6__::func_107(Global_1946804.f_1497.f_1[iVar1 /*3*/]))
		{
			iParam1 |= 32;
		}
		if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (__LIB_0__::func_357(iParam0))
		{
			case 81053684:
				if (__LIB_1__::func_549(-525676072, &uVar3))
				{
					iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
						Jump @434; //curOff = 294
						if (__LIB_0__::func_156(32768))
						{
							__LIB_0__::func_968(__LIB_0__::func_158(iVar1, 1));
						}
						if (__LIB_0__::func_156(32768) || (__LIB_1__::func_549(-2061583405, &iVar4) && !__LIB_6__::func_107(iVar4)))
						{
							PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
						}
						if (__LIB_1__::func_549(81053684, &iVar4))
						{
							iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
							}
							Global_1946804.f_2377[iVar1 /*2*/] = iParam0;
							__LIB_3__::func_16(iVar0, iParam1, 6);
						}
					}
				}
				default:
					break;
		}
	}
}

int func_471(char[4] cParam0, vector3 vParam1, char* sParam4, char* sParam5, int iParam6, float fParam7, float fParam8, bool bParam9, bool bParam10)
{
	char cVar0[64];
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
	{
		return 0;
	}
	if (!__LIB_0__::func_266(PLAYER::PLAYER_PED_ID(), vParam1, fParam8, 1, 1))
	{
		StringCopy(&cVar0, sParam5, 64);
		__LIB_9__::func_351(cParam0, cVar0, 1, 0);
		return 1;
	}
	else if (!__LIB_0__::func_266(PLAYER::PLAYER_PED_ID(), vParam1, fParam7, 1, 1))
	{
		if (!__LIB_8__::func_642(cParam0, iParam6))
		{
			__LIB_9__::func_57(cParam0, sParam4, bParam9);
			__LIB_8__::func_698(cParam0, iParam6);
		}
		return 1;
	}
	else if (__LIB_8__::func_642(cParam0, iParam6))
	{
		__LIB_8__::func_699(cParam0, iParam6);
		if (!__LIB_8__::func_652(cParam0))
		{
			if (bParam10)
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
	return 0;
}

bool func_472(char[4] cParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	if (__LIB_4__::func_626(uParam1, 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) || ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
			}
			if (uParam1->f_9 == 14)
			{
				__LIB_6__::func_860(cParam0, 64);
			}
			else if (ENTITY::IS_ENTITY_A_PED(*uParam1) && __LIB_4__::func_531(uParam1, 32))
			{
				CAM::_0x6E969927CF632608(1);
				CAM::_0xE3639DB78B3B5400(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1));
				bVar0 = true;
			}
			__LIB_9__::func_351(cParam0, __LIB_5__::func_361(uParam1->f_9, uParam1->f_4), !bVar0, 0);
			return true;
		}
		if (uParam1->f_9 == 40)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1);
			if ((PED::_0xB655DB7582AEC805(iVar1) || TASK::IS_PED_IN_WRITHE(iVar1)) && !__LIB_5__::func_128())
			{
				__LIB_9__::func_351(cParam0, __LIB_5__::func_362(uParam1->f_9), 1, 0);
				return true;
			}
		}
		if (__LIB_5__::func_3(uParam1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) || ENTITY::IS_ENTITY_DEAD(uParam1->f_1))
			{
				if (__LIB_0__::func_27(uParam1->f_64, 16))
				{
					__LIB_9__::func_351(cParam0, __LIB_5__::func_363(uParam1->f_9, uParam1->f_4), 1, 0);
					return true;
				}
				else if (__LIB_0__::func_27(uParam1->f_64, 8))
				{
					__LIB_9__::func_351(cParam0, __LIB_5__::func_364(uParam1->f_9, uParam1->f_4), 1, 0);
					return true;
				}
			}
			else if (__LIB_0__::func_27(uParam1->f_64, 8))
			{
				if (__LIB_3__::func_320(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_1)) < 1)
				{
					__LIB_9__::func_351(cParam0, __LIB_5__::func_364(uParam1->f_9, uParam1->f_4), 1, 0);
					return true;
				}
			}
		}
	}
	return false;
}

void func_473(char[4] cParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_71(Global_35))
	{
		return;
	}
	if (__LIB_4__::func_626(uParam1, 512))
	{
		if (ENTITY::IS_ENTITY_A_PED(*uParam1) && !__LIB_0__::func_125(*uParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !__LIB_0__::func_71(iVar0))
			{
				bVar1 = PED::_0x947E43F544B6AB34(iVar0, PLAYER::GET_PLAYER_INDEX(), 10, __LIB_5__::func_87(uParam1, 512));
				if (!bVar1)
				{
					bVar1 = (PED::_0x947E43F544B6AB34(iVar0, PLAYER::GET_PLAYER_INDEX(), 11, __LIB_5__::func_87(uParam1, 512)) && (__LIB_0__::func_71(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)));
				}
				if (bVar1)
				{
					if (__LIB_4__::func_627(uParam1, 512) <= 0 || !__LIB_5__::func_319(uParam1, 512))
					{
						__LIB_5__::func_320(uParam1, 512);
					}
					if (__LIB_5__::func_88(uParam1) || __LIB_5__::func_321(uParam1, 512))
					{
						__LIB_9__::func_351(cParam0, __LIB_5__::func_365(uParam1->f_9, uParam1->f_4), 1, 0);
					}
				}
			}
		}
	}
}

void func_474(char[4] cParam0, var uParam1, int iParam2)
{
	struct<2> Var0;
	struct<8> Var6;
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1))
	{
		return;
	}
	if (__LIB_4__::func_626(uParam1, 16))
	{
		if (SCRIPTS::GET_EVENT_DATA(0, iParam2, &Var0, 6))
		{
			if (((((ENTITY::DOES_ENTITY_EXIST(*uParam1) && ENTITY::DOES_ENTITY_EXIST(Var0.f_1)) && (Var0.f_1 == *uParam1 || (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && Var0.f_1 == uParam1->f_1))) && ENTITY::IS_ENTITY_A_PED(Var0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == Global_35) && (__LIB_5__::func_88(uParam1) || !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1)))
			{
				if (uParam1->f_9 == 14)
				{
					__LIB_6__::func_860(cParam0, 64);
				}
				Var6 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
				if (Var0.f_1 == uParam1->f_1 && !ENTITY::IS_ENTITY_A_VEHICLE(uParam1->f_1))
				{
					Var6 = { __LIB_5__::func_367(uParam1->f_9, uParam1->f_4) };
				}
				__LIB_9__::func_351(cParam0, Var6, 1, 0);
			}
		}
	}
}

void func_475(char[4] cParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	struct<8> Var9;
	struct<8> Var17;
	if (SCRIPTS::GET_EVENT_DATA(0, iParam2, &vVar0, 9))
	{
		if (((ENTITY::DOES_ENTITY_EXIST(vVar0.x) && (vVar0.x == *uParam1 || (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && vVar0.x == uParam1->f_1))) && ENTITY::IS_ENTITY_A_PED(vVar0.y)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y) == Global_35)
		{
			if (__LIB_4__::func_626(uParam1, 8) && (__LIB_5__::func_4(vVar0.z) || vVar0.z == joaat("WEAPON_FIRE")))
			{
				if (__LIB_4__::func_627(uParam1, 8) <= 0 || !__LIB_5__::func_319(uParam1, 8))
				{
					__LIB_5__::func_320(uParam1, 8);
					PED::_0xD67B6F3BCF81BA47(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 128);
				}
				if (__LIB_5__::func_88(uParam1) || __LIB_5__::func_321(uParam1, 8))
				{
					if (uParam1->f_9 == 14)
					{
						__LIB_6__::func_860(cParam0, 64);
					}
					Var9 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
					if (vVar0.x == uParam1->f_1 && !ENTITY::IS_ENTITY_A_VEHICLE(uParam1->f_1))
					{
						Var9 = { __LIB_5__::func_367(uParam1->f_9, uParam1->f_4) };
					}
					__LIB_9__::func_351(cParam0, Var9, 1, 0);
				}
				return;
			}
			if (__LIB_4__::func_626(uParam1, 4) && __LIB_0__::func_154(vVar0.z))
			{
				if (__LIB_4__::func_627(uParam1, 4) <= 0 || !__LIB_5__::func_319(uParam1, 4))
				{
					__LIB_5__::func_320(uParam1, 4);
				}
				if (__LIB_5__::func_88(uParam1) || __LIB_5__::func_321(uParam1, 4))
				{
					Var17 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
					if (vVar0.x == uParam1->f_1 && !ENTITY::IS_ENTITY_A_VEHICLE(uParam1->f_1))
					{
						Var17 = { __LIB_5__::func_367(uParam1->f_9, uParam1->f_4) };
					}
					__LIB_9__::func_351(cParam0, Var17, 1, 0);
				}
			}
		}
	}
}

void func_476(char[4] cParam0, var uParam1)
{
	vector3 vVar0;
	struct<8> Var3;
	struct<8> Var11;
	struct<8> Var19;
	struct<8> Var27;
	if (uParam1->f_9 == 14 && !ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_THROWN_MOLOTOV"), 5f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_THROWN_DYNAMITE"), 5f, true))
		{
			__LIB_6__::func_860(cParam0, 64);
			Var3 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
			__LIB_9__::func_351(cParam0, Var3, 1, 0);
		}
		else if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_BOW"), 8f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_BOW_IMPROVED"), 8f, true)) && WEAPON::_IS_WEAPON_BOW(Global_1935630.f_44)) && WEAPON::_0x7E7B19A4355FEE13(Global_35, WEAPON::_0x6CA484C9A7377E4F(Global_35, 1)) == joaat("AMMO_ARROW_DYNAMITE"))
		{
			__LIB_6__::func_860(cParam0, 64);
			Var11 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
			__LIB_9__::func_351(cParam0, Var11, 1, 0);
		}
		else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, vVar0, 8f))
		{
			__LIB_6__::func_860(cParam0, 64);
			Var19 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
			__LIB_9__::func_351(cParam0, Var19, 1, 0);
		}
		else if (__LIB_4__::func_626(uParam1, -2147483648) && !__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 207))
		{
			__LIB_6__::func_860(cParam0, 64);
			Var27 = { __LIB_5__::func_366(uParam1->f_9, uParam1->f_4) };
			__LIB_9__::func_351(cParam0, Var27, 1, 0);
		}
	}
}

void func_477(char[4] cParam0)
{
	int iVar0;
	struct<8> Var1;
	bool bVar9;
	switch (__LIB_5__::func_381(&iVar0))
	{
		case 1:
			__LIB_9__::func_351(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(cParam0->f_13178))
			{
				cParam0->f_13178 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
			}
			if (__LIB_0__::func_6(iVar0) && iVar0 == __LIB_3__::func_918(cParam0->f_607))
			{
				bVar9 = true;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(cParam0->f_13178, bVar9);
			break;
	}
}

void func_478(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
				Jump @1416; //curOff = 526
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
				Jump @1416; //curOff = 657
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1416; //curOff = 692
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

int func_479(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_725(uParam0, 32768))
	{
		return 1;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_1896 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1897 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_1899 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1897)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1898 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1898 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1899)
		{
			uParam0->f_1901 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1902 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_5__::func_192(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_9__::func_76(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_725(uParam0, 524288))
				{
					__LIB_5__::func_222(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_751(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_5__::func_419(uParam0, iParam5);
					return 1;
				}
			}
			if (!__LIB_4__::func_725(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 16))
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
			if (uParam0->f_1684 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_5__::func_139(uParam0, uParam0->f_1684))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_1688 >= 0)
					{
						__LIB_5__::func_420(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1688 >= 0)
				{
					__LIB_5__::func_420(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_7__::func_445(uParam0);
			}
		}
	}
	bVar0 = __LIB_5__::func_421(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_4__::func_725(uParam0, 268435456) && bVar1) && !__LIB_4__::func_725(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902);
			if (uParam0->f_1684 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1016[uParam0->f_1684 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1902)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_4__::func_757(uParam0, 131072);
				__LIB_4__::func_757(uParam0, 268435456);
			}
		}
		if (__LIB_4__::func_756(uParam0, 64) || (uParam0->f_1684 >= 0 && !__LIB_0__::func_274(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_4__::func_725(uParam0, 131072))
	{
		__LIB_5__::func_140(uParam0);
		if (!__LIB_4__::func_725(uParam0, 262144))
		{
			if ((bVar0 && __LIB_4__::func_725(uParam0, 65536)) || __LIB_4__::func_725(uParam0, 131072))
			{
				__LIB_4__::func_757(uParam0, 32768);
				__LIB_4__::func_751(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_1769 = 1;
				__LIB_5__::func_419(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_9__::func_77(uParam0, iParam5);
		__LIB_5__::func_141(uParam0);
		if (!__LIB_5__::func_142(uParam0, 1))
		{
			__LIB_4__::func_786(uParam0);
		}
		__LIB_5__::func_143(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_5__::func_606(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_5__::func_529(uParam0);
			break;
		case 2:
			__LIB_5__::func_522(uParam0);
			break;
		case 3:
			if (__LIB_5__::func_144(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_420(uParam0, uParam0->f_1016[uParam0->f_1684 /*41*/].f_27, uParam0->f_1345[uParam0->f_1684 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1872));
				__LIB_4__::func_751(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_4__::func_725(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_5__::func_145(uParam0))
				{
					__LIB_4__::func_751(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_5__::func_146(uParam0))
				{
					__LIB_4__::func_751(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1685 >= 0 || __LIB_0__::func_264(&(uParam0->f_1872)) >= 15f)
			{
				if (__LIB_5__::func_399(uParam0, iParam5))
				{
					if (__LIB_5__::func_147(uParam0))
					{
						uParam0->f_1685 = __LIB_5__::func_193(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1872));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_4__::func_751(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_4__::func_751(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_5__::func_419(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (__LIB_5__::func_399(uParam0, iParam5))
			{
				__LIB_5__::func_419(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return 1;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

void func_480(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_4__::func_552(&(cParam0->f_7375), iParam1);
	if (iVar0 != -1)
	{
		__LIB_0__::func_143(&(cParam0->f_7375.f_13[iVar0 /*12*/]), iParam2);
	}
}

int func_481()
{
	return Global_1900383.f_378.f_11;
}

bool func_482(vector3 vParam0, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam3;
	Var0.f_1 = sParam4;
	Var0.f_2 = iParam8;
	Var0.f_3 = iParam5;
	Var0.f_4 = iParam6;
	Var0.f_5 = iParam7;
	return __LIB_8__::func_780(vParam0, &Var0);
}

void func_483(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (!__LIB_5__::func_459(iParam3, __LIB_6__::func_864(cParam0)) && !__LIB_5__::func_459(iParam3, __LIB_9__::func_40(cParam0)))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam2))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam1))
	{
		return;
	}
	iVar0 = __LIB_4__::func_968(&(cParam0->f_1126), cParam1, *iParam2);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_460(&(cParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam2))
	{
		*iParam2 = ANIMSCENE::_CREATE_ANIM_SCENE(cParam1, iParam4, sParam5, false, true);
	}
	cParam0->f_1126[iVar0 /*67*/].f_1 = *iParam2;
	cParam0->f_1126[iVar0 /*67*/] = cParam1;
	cParam0->f_1126[iVar0 /*67*/].f_3 = (cParam0->f_1126[iVar0 /*67*/].f_3 || iParam3);
	cParam0->f_1126[iVar0 /*67*/].f_65 = iParam6;
	cParam0->f_1126[iVar0 /*67*/].f_66 = bParam7;
	if (!bParam7)
	{
		__LIB_0__::func_7(&(cParam0->f_1126[iVar0 /*67*/].f_2), 4);
	}
}

void func_484(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_6__::func_872(cParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_9__::func_328(&(cParam0->f_5147), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_9__::func_329(&(cParam0->f_5147));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5147[iVar0 /*4*/] = iParam1;
	cParam0->f_5147[iVar0 /*4*/].f_3 = (cParam0->f_5147[iVar0 /*4*/].f_3 || iParam2);
}

bool func_485(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
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
	return iVar0;
}

void func_486(char[4] cParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (__LIB_3__::func_358(__LIB_8__::func_645(cParam0)))
	{
		iVar0 = 0;
		while (iVar0 < __LIB_4__::func_955(__LIB_8__::func_645(cParam0)))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, cParam0->f_5421));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				__LIB_8__::func_717(cParam0, iVar1, sParam1, bParam2);
			}
			iVar0++;
		}
	}
}

Vector3 func_487(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	bVar2 = 9999999f;
	__LIB_1__::func_456(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (__LIB_0__::func_479() == 0 && !__LIB_0__::func_795(0))
		{
			bVar14 = true;
		}
	}
	if (!__LIB_0__::func_720(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = __LIB_1__::func_699();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!__LIB_1__::func_120(Global_1310720.f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { __LIB_0__::func_953(iVar0, iVar1) };
			bVar11 = __LIB_0__::func_954(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_9__::func_68(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					bVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}
}

int func_488(char[4] cParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (__LIB_9__::func_472(cParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_0__::func_31(uParam1->f_10))
	{
		PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 53, true);
	}
	__LIB_5__::func_339(uParam1);
	__LIB_5__::func_311(uParam1);
	if (!bParam2)
	{
		__LIB_9__::func_473(cParam0, uParam1);
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
	__LIB_9__::func_476(cParam0, uParam1);
	__LIB_5__::func_75(uParam1);
	return 0;
}

bool func_489(int iParam0, int iParam1)
{
	return __LIB_0__::func_84(&(iParam0->f_428), iParam1);
}

bool func_490(int iParam0)
{
	__LIB_5__::func_410(iParam0, 262144);
	if (__LIB_9__::func_390(iParam0))
	{
		__LIB_5__::func_410(iParam0, 65536);
		return true;
	}
	return false;
}

void func_491(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (!__LIB_0__::func_31(iParam1))
	{
		return;
	}
	__LIB_0__::func_130(iParam2);
	if (bParam4)
	{
		__LIB_5__::func_422(iParam0, iParam2, 0);
	}
	if (!bParam6)
	{
		if (!__LIB_2__::func_27(iParam0, 4194304))
		{
			bParam6 = __LIB_3__::func_740(&(Global_1835011[*iParam0 /*74*/]), 1024);
			bVar0 = __LIB_3__::func_740(&(Global_1835011[*iParam0 /*74*/]), 65536);
		}
	}
	__LIB_1__::func_774(iParam1, bParam3, bParam4, bParam5, -1082130432 /* Float: -1f */, 1, 1, bParam6, bVar0, 0, 0);
}

int func_492(var uParam0)
{
	return uParam0->f_11;
}

int func_493(var uParam0)
{
	return uParam0->f_8;
}

Vector3 func_494(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return 100;
		case 13:
		case 19:
		case 34:
			return 101;
		case 20:
			return 102;
		case 43:
			return 103;
		case 39:
			return 104;
		case 11:
			return 105;
		case 26:
			return 106;
		case 5:
		case 33:
		case 42:
			return 107;
	}
	return -1;
}

bool func_496(var uParam0)
{
	return uParam0->f_20 != 3;
}

void func_497(var uParam0, int iParam1)
{
	uParam0->f_11 = iParam1;
}

void func_498(var uParam0)
{
	TASK::_0x73F0D0327BFA0812(uParam0->f_38);
}

bool func_499(var uParam0)
{
	if (!TASK::_0x5E5D96BE25E9DF68(uParam0->f_38))
	{
		return false;
	}
	return true;
}

bool func_500(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return (Global_38105[iParam0 /*9*/].f_3 && iParam1) != 0;
	}
	return (Global_27573[iParam0 /*9*/].f_3 && iParam1) != 0;
}

void func_501(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (__LIB_0__::func_2() != -1)
	{
		Global_38105[iParam0 /*9*/].f_3 = (Global_38105[iParam0 /*9*/].f_3 - (Global_38105[iParam0 /*9*/].f_3 && iParam1));
		return;
	}
	Global_27573[iParam0 /*9*/].f_3 = (Global_27573[iParam0 /*9*/].f_3 - (Global_27573[iParam0 /*9*/].f_3 && iParam1));
}

void func_502(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (__LIB_0__::func_2() != -1)
	{
		Global_38105[iParam0 /*9*/].f_4[iParam1] |= 4096;
		return;
	}
	Global_27573[iParam0 /*9*/].f_4[iParam1] |= 4096;
}

bool func_503(int iParam0)
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
			return true;
		default:
			return false;
	}
	return false;
}

void func_504(var uParam0)
{
	COLLECTION::_0x3EA62E56F386C997(uParam0, 1);
}

bool func_505(int iParam0)
{
	return iParam0 != 3;
}

bool func_506(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return Global_38105[iParam0 /*9*/] > 0;
	}
	return Global_27573[iParam0 /*9*/] > 0;
}

int func_507(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return Global_38105[iParam0 /*9*/];
	}
	else
	{
		return Global_27573[iParam0 /*9*/];
	}
	return 0;
}

void func_508(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	switch (iParam0)
	{
		case 0:
			(*uParam2)[0] = 1;
			(*uParam2)[1] = 2;
			(*uParam2)[2] = 3;
			break;
		case 1:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
		case 2:
			(*uParam2)[0] = 3;
			(*uParam2)[1] = 4;
			(*uParam2)[2] = 5;
			break;
		case 3:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
		default:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
	}
	(*uParam1)[0] = 0;
	(*uParam1)[1] = 67;
	(*uParam1)[2] = 139;
	(*uParam1)[3] = 223;
	(*uParam1)[4] = 293;
	(*uParam1)[5] = 359;
	iVar0 = 5;
	while (iVar0 >= 1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0 + 1);
		uVar2 = (*uParam1)[iVar1];
		(*uParam1)[iVar1] = (*uParam1)[iVar0];
		(*uParam1)[iVar0] = uVar2;
		iVar0 = (iVar0 + -1);
	}
}

void func_509(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > 500)
	{
		return;
	}
	if (__LIB_0__::func_2() != -1)
	{
		Global_38105[iParam0 /*9*/].f_4[iParam1] = iParam2;
	}
	Global_27573[iParam0 /*9*/].f_4[iParam1] = iParam2;
}

bool func_510(bool bParam0)
{
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
	return false;
}

int func_511(int iParam0)
{
	return Global_1146442.f_1[iParam0 /*11*/].f_3;
}

bool func_512(int iParam0)
{
	return iParam0 != -1;
}

int func_513(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1112589856;
		case 9:
			return 270657460;
		case 10:
			return 1485944635;
		case 14:
			return 767056202;
		case 17:
			return -1064869901;
		case 21:
			return -16133028;
		case 22:
			return -1268393363;
		case 24:
			return 5452285;
		case 25:
			return -491162917;
		case 30:
			return 1819699601;
		case 32:
			return 1077382670;
		case 35:
			return 1298182602;
		case 36:
			return -345586569;
		default:
			break;
	}
	return 0;
}

int func_514(int iParam0)
{
	return COLLECTION::_0x5461C821D00FE15A(1777389635, iParam0);
}

bool func_515(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return Global_38105[iParam0 /*9*/].f_2 != -15;
	}
	return Global_27573[iParam0 /*9*/].f_2 != -15;
}

var func_516(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return Global_38105[iParam0 /*9*/].f_2;
	}
	return Global_27573[iParam0 /*9*/].f_2;
}

bool func_517(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return Global_38105[iParam0 /*9*/].f_4[iParam1] & 1073741824 != 0;
	}
	return Global_27573[iParam0 /*9*/].f_4[iParam1] & 1073741824 != 0;
}

void func_518(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (__LIB_0__::func_2() != -1)
	{
		Global_38105[iParam0 /*9*/].f_4[iParam1] = (Global_38105[iParam0 /*9*/].f_4[iParam1] - Global_38105[iParam0 /*9*/].f_4[iParam1] & 4096);
		return;
	}
	Global_27573[iParam0 /*9*/].f_4[iParam1] = (Global_27573[iParam0 /*9*/].f_4[iParam1] - Global_27573[iParam0 /*9*/].f_4[iParam1] & 4096);
}

void func_519(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (__LIB_0__::func_2() != -1)
	{
		Global_38105[iParam0 /*9*/].f_3 = (Global_38105[iParam0 /*9*/].f_3 || iParam1);
		return;
	}
	Global_27573[iParam0 /*9*/].f_3 = (Global_27573[iParam0 /*9*/].f_3 || iParam1);
}

bool func_520(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return false;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return Global_38105[iParam0 /*9*/].f_4[iParam1] & 4096 != 0;
	}
	return Global_27573[iParam0 /*9*/].f_4[iParam1] & 4096 != 0;
}

bool func_521(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 28:
		case 31:
			return true;
		default:
			break;
	}
	return false;
}

void func_522(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = uParam0->f_4[iParam1] & 511;
	*iParam2 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 3584, 9);
	*uParam4 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 57344, 13);
}

bool func_523(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 28:
		case 31:
			return true;
	}
	return false;
}

void func_524(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 500)
	{
		return;
	}
	if (__LIB_0__::func_2() != -1)
	{
		Global_38105[iParam0 /*9*/].f_2 = __LIB_0__::func_23();
		return;
	}
	Global_27573[iParam0 /*9*/].f_2 = __LIB_0__::func_23();
}

Vector3 func_525(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1f, -1f, -1f;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return __LIB_9__::func_494(Global_38105[iParam0 /*9*/].f_1);
	}
	return __LIB_9__::func_494(Global_27573[iParam0 /*9*/].f_1);
}

void func_526(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	struct<5> Var0;
	Var0.f_2 = -15;
	Var0.f_4 = 4;
	MISC::_COPY_MEMORY(uParam0, &Var0, 9);
	*uParam0 = iParam1;
	uParam0->f_1 = __LIB_3__::func_321(vParam2);
	uParam0->f_2 = iParam5;
}

bool func_527()
{
	return __LIB_0__::func_1(Global_1572887.f_6, 1);
}

void func_528(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	iVar0 = -1;
	__LIB_3__::func_414(uParam0, vParam1, fParam4, 4, iVar0, 0);
}

bool func_529(int iParam0, int iParam1, int iParam2)
{
	return __LIB_0__::func_1(Global_1146517[iParam2 /*7*/][iParam0], iParam1);
}

int func_530()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (__LIB_1__::func_75(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_531(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
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
		__LIB_3__::func_611(iParam0, iParam1, bParam2, iParam4);
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
		if (iParam3 || iParam4)
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

int func_532(var uParam0, var uParam1, bool bParam2, var uParam3)
{
	if (*uParam0 < 5)
	{
		if (((__LIB_0__::func_91() || (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, *uParam1))) || !__LIB_9__::func_303()) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(*uParam1);
			}
			return 1;
		}
		else
		{
			Global_1935496.f_127 = 1;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (bParam2)
			{
				__LIB_1__::func_283(uParam3, 0);
			}
			if (__LIB_0__::func_75(uParam3) && __LIB_0__::func_265(uParam3) > 2f)
			{
				__LIB_0__::func_19(uParam0, 1);
				__LIB_0__::func_37(uParam3);
			}
			break;
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@sal1@ig@sal1_ig12_wake_up@sal1_ig12_wake_up", 0, "Herb_PL", false, true);
			__LIB_0__::func_19(uParam0, 2);
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				__LIB_0__::func_19(uParam0, 5);
			}
			break;
		case 5:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35);
				__LIB_0__::func_19(uParam0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_533(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_JN"), 0);
			}
			break;
		case 2:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_ALASKAN_GINSENG_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_ALASKAN_GINSENG_JN"), 0);
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_AMERICAN_GINSENG_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_AMERICAN_GINSENG_JN"), 0);
			}
			break;
		case 4:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BAY_BOLETE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BAY_BOLETE_JN"), 0);
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BLACKBERRY_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BLACKBERRY_JN"), 0);
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BLACK_CURRANT_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BLACK_CURRANT_JN"), 0);
			}
			break;
		case 11:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BULRUSH_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BULRUSH_JN"), 0);
			}
			break;
		case 7:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BURDOCK_ROOT_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BURDOCK_ROOT_JN"), 0);
			}
			break;
		case 39:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CARROT_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CARROT_JN"), 0);
			}
			break;
		case 8:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CHANTERELLE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CHANTERELLE_JN"), 0);
			}
			break;
		case 9:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CIGAR_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CIGAR_ORCHID_JN"), 0);
			}
			break;
		case 10:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_JN"), 0);
			}
			break;
		case 12:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CREEPING_THYME_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CREEPING_THYME_JN"), 0);
			}
			break;
		case 13:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_DESERT_SAGE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_DESERT_SAGE_JN"), 0);
			}
			break;
		case 14:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_JN"), 0);
			}
			break;
		case 15:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_ENGLISH_MACE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_ENGLISH_MACE_JN"), 0);
			}
			break;
		case 40:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_FEVERFEW_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_FEVERFEW_JN"), 0);
			}
			break;
		case 17:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_GHOST_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_GHOST_ORCHID_JN"), 0);
			}
			break;
		case 18:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_GOLDEN_CURRANT_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_GOLDEN_CURRANT_JN"), 0);
			}
			break;
		case 16:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_HUCKLEBERRY_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_HUCKLEBERRY_JN"), 0);
			}
			break;
		case 19:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_JN"), 0);
			}
			break;
		case 20:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_INDIAN_TOBACCO_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_INDIAN_TOBACCO_JN"), 0);
			}
			break;
		case 21:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_JN"), 0);
			}
			break;
		case 22:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_JN"), 0);
			}
			break;
		case 23:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_MILKWEED_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_MILKWEED_JN"), 0);
			}
			break;
		case 41:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_MINT_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_MINT_JN"), 0);
			}
			break;
		case 24:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_JN"), 0);
			}
			break;
		case 25:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_JN"), 0);
			}
			break;
		case 26:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_OLEANDER_SAGE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_OLEANDER_SAGE_JN"), 0);
			}
			break;
		case 27:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_OREGANO_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_OREGANO_JN"), 0);
			}
			break;
		case 28:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_PARASOL_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_PARASOL_JN"), 0);
			}
			break;
		case 29:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_PRAIRIE_POPPY_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_PRAIRIE_POPPY_JN"), 0);
			}
			break;
		case 30:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_JN"), 0);
			}
			break;
		case 31:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_JN"), 0);
			}
			break;
		case 33:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RASPBERRY_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RASPBERRY_JN"), 0);
			}
			break;
		case 32:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_JN"), 0);
			}
			break;
		case 34:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RED_SAGE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RED_SAGE_JN"), 0);
			}
			break;
		case 35:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_JN"), 0);
			}
			break;
		case 36:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_SPIDER_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_SPIDER_ORCHID_JN"), 0);
			}
			break;
		case 37:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_VANILLA_FLOWER_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_VANILLA_FLOWER_JN"), 0);
			}
			break;
		case 38:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_JN"), 0);
			}
			break;
		case 42:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_WINTERBERRY_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_WINTERBERRY_JN"), 0);
			}
			break;
		case 43:
			if (iParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_YARROW_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_YARROW_JN"), 0);
			}
			break;
		default:
			break;
	}
}

void func_534(int iParam0, bool bParam1)
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
				__LIB_9__::func_277(BUILTIN::TO_FLOAT(Var22.f_2), 1);
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

bool func_535(int iParam0)
{
	return !__LIB_9__::func_503(iParam0);
}

void func_536(var uParam0, int iParam1)
{
	if (!__LIB_9__::func_505(iParam1))
	{
		return;
	}
	if (__LIB_9__::func_493(uParam0) == iParam1)
	{
		return;
	}
	uParam0->f_8 = iParam1;
}

void func_537(var uParam0, int iParam1)
{
	if (!__LIB_9__::func_505(iParam1))
	{
		return;
	}
	if (__LIB_0__::func_773(uParam0) == iParam1)
	{
		return;
	}
	uParam0->f_9 = iParam1;
}

int func_538(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 3;
		case 3:
			return 3;
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 15:
			return 0;
		case 16:
			return 1;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 23:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 31:
			return 0;
		case 33:
			return 1;
		case 34:
			return 0;
		case 37:
			return 3;
		case 38:
			return 0;
		case 39:
			return 0;
		case 40:
			return 0;
		case 41:
			return 0;
		case 42:
			return 1;
		case 43:
			return 0;
		case 1:
			return 3;
		case 9:
			return 3;
		case 10:
			return 3;
		case 14:
			return 3;
		case 17:
			return 3;
		case 21:
			return 3;
		case 22:
			return 3;
		case 24:
			return 3;
		case 25:
			return 3;
		case 30:
			return 3;
		case 32:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_539(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 15:
			return 0;
		case 16:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 23:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 31:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 37:
			return 0;
		case 38:
			return 0;
		case 39:
			return 0;
		case 40:
			return 0;
		case 41:
			return 0;
		case 42:
			return 0;
		case 43:
			return 4;
		case 1:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 14:
			return 0;
		case 17:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 30:
			return 0;
		case 32:
			return 0;
		case 35:
			return 0;
		case 36:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_540(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 2;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 2;
		case 8:
			return 2;
		case 11:
			return 3;
		case 12:
			return 3;
		case 13:
			return 2;
		case 15:
			return 2;
		case 16:
			return 1;
		case 18:
			return 2;
		case 19:
			return 2;
		case 20:
			return 2;
		case 23:
			return 2;
		case 26:
			return 2;
		case 27:
			return 3;
		case 28:
			return 2;
		case 29:
			return 2;
		case 31:
			return 2;
		case 33:
			return 1;
		case 34:
			return 2;
		case 37:
			return 1;
		case 38:
			return 2;
		case 39:
			return 2;
		case 40:
			return 2;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 2;
		case 1:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 14:
			return 1;
		case 17:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 30:
			return 1;
		case 32:
			return 1;
		case 35:
			return 1;
		case 36:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_541(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 4;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 3;
		case 8:
			return 4;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 15:
			return 3;
		case 16:
			return 2;
		case 18:
			return 3;
		case 19:
			return 3;
		case 20:
			return 3;
		case 23:
			return 3;
		case 26:
			return 3;
		case 27:
			return 4;
		case 28:
			return 4;
		case 29:
			return 3;
		case 31:
			return 4;
		case 33:
			return 2;
		case 34:
			return 3;
		case 37:
			return 1;
		case 38:
			return 3;
		case 39:
			return 3;
		case 40:
			return 3;
		case 41:
			return 4;
		case 42:
			return 2;
		case 43:
			return 3;
		case 1:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 14:
			return 1;
		case 17:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 30:
			return 1;
		case 32:
			return 1;
		case 35:
			return 1;
		case 36:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_542(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("COMPOSITE_LOOTABLE_ALASKAN_GINSENG_ROOT_DEF");
		case 3:
			return joaat("COMPOSITE_LOOTABLE_AMERICAN_GINSENG_ROOT_DEF");
		case 4:
			return joaat("COMPOSITE_LOOTABLE_BAY_BOLETE_DEF");
		case 5:
			return joaat("COMPOSITE_LOOTABLE_BLACK_BERRY_DEF");
		case 6:
			return joaat("COMPOSITE_LOOTABLE_BLACK_CURRANT_DEF");
		case 7:
			return joaat("COMPOSITE_LOOTABLE_BURDOCK_ROOT_DEF");
		case 8:
			return joaat("COMPOSITE_LOOTABLE_CHANTERELLES_DEF");
		case 11:
			return joaat("COMPOSITE_LOOTABLE_COMMON_BULRUSH_DEF");
		case 12:
			return joaat("COMPOSITE_LOOTABLE_CREEPING_THYME_DEF");
		case 13:
			return joaat("COMPOSITE_LOOTABLE_DESERT_SAGE_DEF");
		case 15:
			return joaat("COMPOSITE_LOOTABLE_ENGLISH_MACE_DEF");
		case 16:
			return joaat("COMPOSITE_LOOTABLE_EVERGREEN_HUCKLEBERRY_DEF");
		case 18:
			return joaat("COMPOSITE_LOOTABLE_GOLDEN_CURRANT_DEF");
		case 19:
			return joaat("COMPOSITE_LOOTABLE_HUMMINGBIRD_SAGE_DEF");
		case 20:
			return joaat("COMPOSITE_LOOTABLE_INDIAN_TOBACCO_DEF");
		case 23:
			return joaat("COMPOSITE_LOOTABLE_MILKWEED_DEF");
		case 26:
			return joaat("COMPOSITE_LOOTABLE_OLEANDER_SAGE_DEF");
		case 27:
			return joaat("COMPOSITE_LOOTABLE_OREGANO_DEF");
		case 28:
			return joaat("COMPOSITE_LOOTABLE_PARASOL_MUSHROOM_DEF");
		case 29:
			return joaat("COMPOSITE_LOOTABLE_PRAIRIE_POPPY_DEF");
		case 31:
			return joaat("COMPOSITE_LOOTABLE_RAMS_HEAD_DEF");
		case 33:
			return joaat("COMPOSITE_LOOTABLE_RED_RASPBERRY_DEF");
		case 34:
			return joaat("COMPOSITE_LOOTABLE_RED_SAGE_DEF");
		case 37:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_VANILLA_DEF");
		case 38:
			return joaat("COMPOSITE_LOOTABLE_VIOLET_SNOWDROP_DEF");
		case 39:
			return joaat("COMPOSITE_LOOTABLE_WILD_CARROT_DEF");
		case 40:
			return joaat("COMPOSITE_LOOTABLE_WILD_FEVERFEW_DEF");
		case 41:
			return joaat("COMPOSITE_LOOTABLE_WILD_MINT_DEF");
		case 42:
			return joaat("COMPOSITE_LOOTABLE_WINTERGREEN_BERRY_DEF");
		case 43:
			return joaat("COMPOSITE_LOOTABLE_YARROW_DEF");
		case 1:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_ACUNA_STAR_DEF");
		case 9:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_CIGAR_DEF");
		case 10:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_CLAM_SHELL_DEF");
		case 14:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_DRAGONS_DEF");
		case 17:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_GHOST_DEF");
		case 21:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_LADY_NIGHT_DEF");
		case 22:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_LADY_SLIPPER_DEF");
		case 24:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_MOCCASIN_DEF");
		case 25:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_NIGHT_SCENTED_DEF");
		case 30:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_QUEENS_DEF");
		case 32:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_RAT_TAIL_DEF");
		case 35:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_SPARROWS_DEF");
		case 36:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_SPIDER_DEF");
		default:
			break;
	}
	return 0;
}

void func_543(var uParam0)
{
	var uVar0[6];
	var uVar7[3];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	__LIB_9__::func_508(uParam0->f_20, &uVar0, &uVar7);
	if (uParam0->f_22 > 4)
	{
		uParam0->f_22 = 4;
	}
	if (uParam0->f_21 <= 0)
	{
		uParam0->f_21 = 1;
	}
	iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_21, uParam0->f_22 + 1);
	iVar12 = 0;
	while (iVar12 <= (iVar11 - 1))
	{
		if (uVar0[iVar12] == 0)
		{
			iVar13 = 0;
		}
		else
		{
			iVar13 = uVar7[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)];
		}
		if (uParam0->f_23 > 0)
		{
			iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_23);
		}
		iVar15 = ((uVar0[iVar12] || BUILTIN::SHIFT_LEFT(iVar13, 9)) || BUILTIN::SHIFT_LEFT(iVar14, 13)) | 1073741824;
		__LIB_9__::func_509(uParam0->f_24, iVar12, iVar15);
		iVar12++;
	}
}

void func_544(var uParam0)
{
	var uVar0[6];
	var uVar7;
	int iVar11;
	int iVar12;
	uVar7 = 3;
	__LIB_9__::func_508(uParam0->f_20, &uVar0, &uVar7);
	if (uParam0->f_23 > 0)
	{
		iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_23);
	}
	iVar12 = ((uVar0[0] || BUILTIN::SHIFT_LEFT(0, 9)) || BUILTIN::SHIFT_LEFT(iVar11, 13)) | 1073741824;
	__LIB_9__::func_509(uParam0->f_24, 0, iVar12);
}

bool func_545(var uParam0)
{
	if (__LIB_9__::func_510(1))
	{
		return false;
	}
	if (__LIB_9__::func_493(uParam0) == 1)
	{
		if (Global_1913813 == 0)
		{
			return false;
		}
	}
	return true;
}

void func_546(int iParam0, bool bParam1)
{
	int iVar0;
	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_9__::func_517(iParam0, iVar0))
		{
			__LIB_9__::func_518(iParam0, iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		__LIB_9__::func_519(iParam0, 1);
	}
}

bool func_547(int iParam0)
{
	int iVar0;
	if (iParam0 <= -1)
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!__LIB_9__::func_517(iParam0, iVar0))
		{
		}
		else if (!__LIB_9__::func_520(iParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_548(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (__LIB_9__::func_517(uParam0->f_24, iVar1) && uParam0->f_13[iVar1] != iVar0)
		{
			TASK::_0x5758B1EE0C3FD4AC(uParam0->f_13[iVar1], 0);
			uParam0->f_13[iVar1] = 0;
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (__LIB_1__::func_565(&(uParam0->f_28[iVar2])))
		{
			GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_28[iVar2]), 1);
			uParam0->f_28[iVar2] = -1;
		}
		if (__LIB_1__::func_565(&(uParam0->f_33[iVar2])))
		{
			GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_33[iVar2]), 1);
			uParam0->f_33[iVar2] = -1;
		}
		iVar2++;
	}
	iLocal_15 = 0;
}

void func_549(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (__LIB_0__::func_1(Global_1935630, 2097152))
	{
		bVar0 = true;
	}
	if (__LIB_9__::func_493(uParam0) == 2)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_22)
	{
		if (__LIB_9__::func_512(uParam0->f_13[iVar1]))
		{
			MISC::_0x082C043C7AFC3747(uParam0->f_13[iVar1], 1);
			MISC::_0x40D72189F46D2E15(uParam0->f_13[iVar1], 1);
		}
		iVar1++;
	}
}

void func_550(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (__LIB_0__::func_2() != -1)
	{
		__LIB_9__::func_522(&(Global_38105[iParam0 /*9*/]), iParam1, iParam2, iParam3, uParam4);
		return;
	}
	__LIB_9__::func_522(&(Global_27573[iParam0 /*9*/]), iParam1, iParam2, iParam3, uParam4);
}

int func_551(int iParam0)
{
	var uVar0;
	int iVar45;
	bool bVar46;
	if (Global_1913678.f_133)
	{
		uVar0 = 44;
		iVar45 = 0;
		while (iVar45 <= 1)
		{
			if (Global_1913678[iParam0 /*3*/][iVar45] != 0)
			{
				bVar46 = true;
			}
			else
			{
				iVar45++;
			}
		}
		if (!bVar46)
		{
			return iParam0;
		}
		__LIB_7__::func_900(&uVar0, 44, 1);
		iVar45 = 0;
		while (iVar45 <= 43)
		{
			if (iVar45 == iParam0)
			{
			}
			else if (__LIB_0__::func_694(&(Global_1913678[iParam0 /*3*/]), iVar45, 44))
			{
				return iVar45;
			}
			iVar45++;
		}
		return iParam0;
	}
	return iParam0;
}

int func_552(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_86(vParam1))
	{
		return -1;
	}
	fVar1 = 25f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < 500)
	{
		if (!__LIB_9__::func_506(iVar3))
		{
			return iVar2;
		}
		else if (__LIB_9__::func_507(iVar3) != iParam0)
		{
			Jump @108; //curOff = 70
		}
		else
		{
			fVar0 = __LIB_0__::func_62(vParam1, __LIB_9__::func_525(iVar3));
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_553(int iParam0, vector3 vParam1)
{
	int iVar0;
	if (iParam0 <= 0)
	{
		return -1;
	}
	if (__LIB_0__::func_86(vParam1))
	{
		return -1;
	}
	if (Global_40.f_9273 >= 500)
	{
		Global_40.f_9273 = 0;
	}
	iVar0 = Global_40.f_9273;
	__LIB_9__::func_526(&(Global_27573[iVar0 /*9*/]), iParam0, vParam1, -15);
	Global_40.f_9273++;
	return iVar0;
}

bool func_554(var uParam0)
{
	var uVar0;
	int iVar1;
	if (iLocal_15 < 4)
	{
		if (!__LIB_0__::func_86(vLocal_23[iLocal_15 /*3*/]))
		{
			if (!Global_1913812)
			{
				iVar1 = 0;
				if (((((((uParam0->f_18 == 1 || uParam0->f_18 == 9) || uParam0->f_18 == 10) || uParam0->f_18 == 17) || uParam0->f_18 == 21) || uParam0->f_18 == 25) || uParam0->f_18 == 32) || uParam0->f_18 == 36)
				{
					iVar1 |= 2;
					vLocal_23[iLocal_15 /*3*/] = { vLocal_23[iLocal_15 /*3*/] + __LIB_3__::func_509(0f, 0.737008f, 1.81999f, uParam0->f_3) };
				}
				if (uParam0->f_18 == 37)
				{
					iVar1 |= 2;
					vLocal_23[iLocal_15 /*3*/] = { vLocal_23[iLocal_15 /*3*/] + __LIB_3__::func_509(0f, 0.5f, 1.81999f, uParam0->f_3) };
				}
				if (__LIB_9__::func_520(uParam0->f_24, iLocal_15))
				{
					iVar1 |= 1;
				}
				uParam0->f_13[iLocal_15] = TASK::_0x5B4BBE80AD5972DC(uParam0->f_38, vLocal_23[iLocal_15 /*3*/], __LIB_3__::func_745((uParam0->f_3 + (IntToFloat(iLocal_15) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f)))), iVar1, &uVar0, iLocal_36[iLocal_15]);
				if (__LIB_9__::func_521(uParam0->f_18))
				{
					uParam0->f_28[iLocal_15] = GRAPHICS::_0xFA50F79257745E74(vLocal_23[iLocal_15 /*3*/], 0.37f, 4, 27, 0);
				}
				if (uParam0->f_18 == 38)
				{
					__LIB_9__::func_528(&(uParam0->f_33[iLocal_15]), vLocal_23[iLocal_15 /*3*/], 0.15f);
				}
				iLocal_15++;
				Global_1913812 = 1;
			}
		}
		else
		{
			return true;
		}
		return false;
	}
	return true;
}

bool func_555(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam1 != -1)
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			if (Global_1146442.f_1[iVar1 /*11*/].f_1 == iParam1 && __LIB_9__::func_529(iVar1, 128, iVar0))
			{
				if (bParam2)
				{
					if (Global_1146749.f_20[iVar1 /*16*/] >= 2)
					{
						return true;
					}
				}
				else if (Global_1146749.f_20[iVar1 /*16*/] >= 6)
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	return false;
}

bool func_556(int iParam0)
{
	switch (iParam0)
	{
		case 21:
			return __LIB_1__::func_154(43);
		case 22:
		case 24:
			return __LIB_9__::func_530() >= 1;
		case 1:
		case 9:
		case 17:
			return __LIB_9__::func_530() >= 2;
		case 25:
		case 32:
		case 36:
			return __LIB_9__::func_530() >= 3;
		case 10:
		case 14:
		case 30:
		case 35:
			return __LIB_9__::func_530() >= 4;
		default:
			break;
	}
	return false;
}

void func_557(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_3__::func_959(iParam0))
	{
		return;
	}
	if (__LIB_6__::func_115(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = __LIB_9__::func_503(iParam0);
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_2() != -1)
		{
		}
		else
		{
			__LIB_3__::func_971(iParam0);
		}
	}
	__LIB_4__::func_109(iParam0, 1);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_9__::func_533(iParam0, __LIB_4__::func_110());
	}
	__LIB_7__::func_832(iParam0, 1);
	if (bParam2)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 6);
		}
	}
}

void func_558(var uParam0)
{
	Global_43839[uParam0->f_18] = (Global_43839[uParam0->f_18] - 1);
	SCRIPTS::_0xE7282390542F570D(uParam0->f_5);
	if (__LIB_9__::func_493(uParam0) == 1 && TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_6))
	{
		Global_1913813 = uParam0->f_6;
	}
	__LIB_9__::func_548(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_559(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	uVar4 = uParam0->f_2;
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, (uParam0->f_2 + 2f), &uVar4, false))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, (uParam0->f_2 + 10f), &uVar4, false))
		{
			uParam0->f_12++;
			if (uParam0->f_12 >= 50)
			{
				uParam0->f_12 = 0;
				return -1;
			}
			else
			{
				return 0;
			}
		}
	}
	uParam0->f_2 = uVar4;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!__LIB_9__::func_517(uParam0->f_24, iVar0))
		{
		}
		else
		{
			__LIB_9__::func_550(uParam0->f_24, iVar0, &iVar1, &iVar2, &uVar3);
			vLocal_23[iVar0 /*3*/] = (*uParam0 + (IntToFloat(iVar1) * BUILTIN::COS(BUILTIN::TO_FLOAT(iVar2))));
			vLocal_23[iVar0 /*3*/].f_1 = (uParam0->f_1 + (IntToFloat(iVar1) * BUILTIN::SIN(BUILTIN::TO_FLOAT(iVar2))));
			vLocal_23[iVar0 /*3*/].f_2 = uParam0->f_2;
			if (uParam0->f_23 > 0)
			{
				iLocal_36[iVar0] = uVar3;
			}
			else
			{
				iLocal_36[iVar0] = -1;
			}
			if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_23[iVar0 /*3*/], vLocal_23[iVar0 /*3*/].f_1, (vLocal_23[iVar0 /*3*/].f_2 + 10f), &(vLocal_23[iVar0 /*3*/].f_2), false))
			{
				uParam0->f_12 = 0;
				return -1;
			}
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	return 1;
}

bool func_560(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	if (__LIB_0__::func_86(vParam1))
	{
		return false;
	}
	if (*iParam4 <= -1)
	{
		*iParam4 = __LIB_9__::func_552(iParam0, vParam1);
	}
	if (*iParam4 <= -1)
	{
		return false;
	}
	fVar14 = -1f;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_9__::func_517(*iParam4, iVar0))
		{
			if (bParam6 && __LIB_9__::func_520(*iParam4, iVar0))
			{
			}
			else
			{
				vVar8 = { __LIB_9__::func_525(*iParam4) };
				__LIB_9__::func_550(*iParam4, iVar0, &iVar1, &iVar2, &uVar3);
				vVar5.x = (vVar8.x + (IntToFloat(iVar1) * BUILTIN::COS(BUILTIN::TO_FLOAT(iVar2))));
				vVar5.f_1 = (vVar8.y + (IntToFloat(iVar1) * BUILTIN::SIN(BUILTIN::TO_FLOAT(iVar2))));
				fVar15 = __LIB_0__::func_62(vParam1, vVar5);
				if (fVar14 < 0f || (fVar14 >= 0f && fVar15 < fVar14))
				{
					fVar14 = fVar15;
					iVar4 = iVar0;
					vVar11 = { vVar5 };
				}
			}
		}
		iVar0++;
	}
	if (__LIB_0__::func_62(vParam1, vVar11) < 25f)
	{
		*iParam5 = iVar4;
		return true;
	}
	return false;
}

void func_561(var uParam0, int iParam1)
{
	uParam0->f_18 = __LIB_9__::func_551(iParam1);
	uParam0->f_19 = __LIB_3__::func_960(uParam0->f_18);
	uParam0->f_20 = __LIB_9__::func_538(uParam0->f_18);
	uParam0->f_23 = __LIB_9__::func_539(uParam0->f_18);
	uParam0->f_21 = __LIB_9__::func_540(uParam0->f_18);
	uParam0->f_22 = __LIB_9__::func_541(uParam0->f_18);
	uParam0->f_38 = __LIB_9__::func_542(uParam0->f_18);
}

void func_562(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4) && __LIB_9__::func_527()) && __LIB_9__::func_555(PLAYER::PLAYER_ID(), 1, 0)) && __LIB_9__::func_511(0) == joaat("HERBALIST"))
	{
		bVar0 = true;
	}
	if (!bVar0 && !(uParam0->f_18 == 11 || uParam0->f_18 == 26))
	{
		return;
	}
	if (__LIB_7__::func_829(uParam0->f_18) || uParam0->f_8 == 1)
	{
		bVar0 = true;
	}
	if (__LIB_9__::func_493(uParam0) == 2)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_22)
		{
			if (__LIB_9__::func_512(uParam0->f_13[iVar1]))
			{
				MISC::_0x40D72189F46D2E15(uParam0->f_13[iVar1], 0);
			}
			iVar1++;
		}
	}
}

bool func_563(int iParam0, float fParam1)
{
	int iVar0;
	iVar0 = __LIB_9__::func_507(iParam0);
	if (!__LIB_9__::func_503(iVar0) || __LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_9__::func_556(iVar0) && __LIB_1__::func_75(COLLECTION::_0x126CBEBBA46693CF(BUILTIN::FLOOR(fParam1), 1777389635, 0)))
	{
		return true;
	}
	return false;
}

void func_564(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_75(&(uParam0->f_25)))
	{
		__LIB_2__::func_462(&(uParam0->f_25), 1f, 0);
	}
	if (__LIB_0__::func_265(&(uParam0->f_25)) >= 1f)
	{
		__LIB_1__::func_148(&(uParam0->f_25));
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (__LIB_2__::func_157(Global_36581[iVar0 /*2*/], *uParam0))
			{
				__LIB_9__::func_537(uParam0, Global_36581[iVar0 /*2*/].f_1);
			}
			iVar0++;
		}
		if (__LIB_9__::func_503(uParam0->f_18) && !__LIB_9__::func_556(uParam0->f_18))
		{
			if (__LIB_9__::func_514(__LIB_9__::func_513(uParam0->f_18)) >= (__LIB_0__::func_439(__LIB_3__::func_960(uParam0->f_18)) - 1))
			{
				__LIB_9__::func_537(uParam0, 1);
			}
		}
	}
}

void func_565(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__::func_960(iParam0);
	iVar1 = __LIB_6__::func_846(&iVar0);
	if (iVar1 != iParam0)
	{
		__LIB_4__::func_109(iVar1, 4);
	}
	if (!__LIB_3__::func_959(iParam0))
	{
		return;
	}
	if (__LIB_7__::func_829(iParam0))
	{
		return;
	}
	__LIB_4__::func_109(iParam0, 4);
	__LIB_7__::func_832(iParam0, bParam1);
	if (!__LIB_6__::func_115(iParam0))
	{
		__LIB_9__::func_557(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 6);
		}
	}
}

bool func_566(int iParam0, float fParam1)
{
	int iVar0;
	if (iParam0 <= -1)
	{
		return false;
	}
	if (!__LIB_9__::func_515(iParam0))
	{
		return false;
	}
	if (__LIB_9__::func_563(iParam0, fParam1))
	{
		return false;
	}
	iVar0 = __LIB_9__::func_516(iParam0);
	__LIB_7__::func_846(&iVar0, 0, 0, 0, 0, 3, 0, 0);
	if (__LIB_1__::func_426(iVar0, 1))
	{
		return true;
	}
	return false;
}

bool func_567(var uParam0)
{
	if (__LIB_0__::func_396(Global_35) && __LIB_1__::func_923())
	{
		return true;
	}
	__LIB_9__::func_564(uParam0);
	if (__LIB_9__::func_505(__LIB_0__::func_773(uParam0)))
	{
		if (__LIB_9__::func_493(uParam0) != __LIB_0__::func_773(uParam0))
		{
			__LIB_9__::func_536(uParam0, __LIB_0__::func_773(uParam0));
		}
	}
	else if (__LIB_9__::func_493(uParam0) != Global_36580)
	{
		__LIB_9__::func_536(uParam0, Global_36580);
	}
	if (__LIB_9__::func_493(uParam0) == 1)
	{
		return true;
	}
	return false;
}

bool func_568(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	if (__LIB_9__::func_560(iParam0, vParam4, &iVar0, &iVar1, 0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && iParam1 == Global_35)
		{
			iVar2 = __LIB_6__::func_847(iParam0);
			TELEMETRY::_TELEMETRY_HERB_PICKED(iVar2);
			COMPENDIUM::COMPENDIUM_HERB_PICKED(iVar2, vParam4);
			if (!__LIB_6__::func_115(iParam0))
			{
				__LIB_9__::func_557(iParam0, 0, 1);
			}
			if (__LIB_0__::func_2() == -1)
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					iVar3 = __LIB_9__::func_495(iParam0);
					if (iVar3 != -1)
					{
						__LIB_1__::func_240(iVar3, 1);
					}
				}
			}
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("PICK"), iVar2), iParam3);
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("HERBS_PICKED_TOTAL")), iParam3);
			if (__LIB_9__::func_523(iParam0))
			{
				__LIB_0__::func_15(__LIB_0__::func_358(joaat("HERBS_PICKED_MUSHROOMS")), iParam3);
			}
		}
		__LIB_9__::func_524(iVar0);
		__LIB_9__::func_502(iVar0, iVar1);
	}
	else
	{
		return false;
	}
	return true;
}

void func_569(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar0 = Param0.f_18;
	iVar1 = Param0.f_24;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (iVar1 != -1)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1027129856))
		{
			if (__LIB_9__::func_568(iVar0, Global_35, 0, 1, __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX())))
			{
				if (__LIB_9__::func_303() && PED::IS_PED_ON_FOOT(Global_35))
				{
					if (iVar0 == 26 || iVar0 == 11)
					{
						bVar2 = true;
					}
					else if (iVar0 == 29)
					{
						iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
						if (iVar3 == 3)
						{
							bVar2 = true;
						}
					}
				}
				__LIB_9__::func_565(iVar0, 1, 1);
				__LIB_9__::func_534(__LIB_3__::func_960(iVar0), !bVar2);
				__LIB_9__::func_531(__LIB_3__::func_960(iVar0), 1, 0, 0, 0);
				__LIB_9__::func_275(iVar0, 1);
			}
		}
		__LIB_9__::func_532(uParam39, uParam40, bVar2, uParam41);
	}
}

int func_570(int iParam0)
{
	if (!__LIB_3__::func_959(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
			return joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED");
		case 3:
			return joaat("CONSUMABLE_POTENT_MEDICINE");
		case 6:
			return joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED");
		case 7:
			return joaat("CONSUMABLE_HORSE_REVIVER");
		case 13:
			return joaat("CONSUMABLE_POTENT_RESTORATIVE");
		case 15:
			return joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED");
		case 18:
			return joaat("CONSUMABLE_POTENT_HORSE_STIMULANT");
		case 19:
			return joaat("CONSUMABLE_POTENT_TONIC");
		case 20:
			return joaat("CONSUMABLE_POTENT_SNAKE_OIL");
		case 23:
			return joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED");
		case 26:
			return joaat("CONSUMABLE_COVER_SCENT");
		case 29:
			return joaat("CONSUMABLE_POTENT_RESTORATIVE");
		case 34:
			return joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED");
		case 38:
			return joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT");
		case 40:
			return joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED");
		case 43:
			return joaat("CONSUMABLE_POTENT_MEDICINE");
	}
	return 0;
}

int func_571(int iParam0, char[4] cParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return 0;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
	{
		return 1;
	}
	return 0;
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 0;
		case 16:
			return 1;
		case 36:
			return 2;
		case 79:
			return 3;
		case 125:
			return 4;
		case 127:
			return 5;
		case 118:
			return 6;
		case 129:
			return 7;
		case 114:
			return 8;
		default:
			break;
	}
	return -1;
}

bool func_573(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(Global_40.f_11864[iParam0 /*2*/].f_1, iParam1);
}

int func_574()
{
	STREAMING::REQUEST_ANIM_DICT(__LIB_3__::func_494());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_3__::func_494()))
	{
		return 0;
	}
	return 1;
}

char* func_575(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DEAD_POSE_01";
		case 1:
			return "DEAD_POSE_02";
		case 2:
			return "DEAD_POSE_03";
		case 3:
			return "DEAD_POSE_04";
		case 4:
			return "DEAD_POSE_05";
		case 5:
			return "DEAD_POSE_06";
		default:
			break;
	}
	return __LIB_3__::func_497("[BEAT]", "BEAT_GET_DEATH_ANIM_NAME_BY_INDEX: Invalid Index.");
}

bool func_576(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		__LIB_2__::func_899(uParam1, 0, iVar0);
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
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
								*uParam2 = 2;
								__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
						*uParam2 = 4;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
				*uParam2 = 131072;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 0;
		case 16:
			if (!__LIB_0__::func_181() && !__LIB_1__::func_185(59))
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 9:
			return 2;
		case 79:
			return 1;
		case 109:
			return 3;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
	}
	return -1;
}

bool func_578(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_973(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_970(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_833(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_579()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35) && CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	return true;
}

void func_580(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!(uParam0[iVar0 /*14*/])->f_11)
		{
			if ((uParam0[iVar0 /*14*/])->f_7 != 0)
			{
				if ((uParam0[iVar0 /*14*/])->f_13 > -1)
				{
					iVar10 = (uParam0[iVar0 /*14*/])->f_13;
					vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*(uParam0[iVar10 /*14*/]), (uParam0[iVar0 /*14*/])->f_6, *(uParam0[iVar0 /*14*/])) };
					(uParam0[iVar0 /*14*/])->f_8 = OBJECT::CREATE_OBJECT((uParam0[iVar0 /*14*/])->f_7, vVar7, true, true, false, false, true);
					if (!(uParam0[iVar10 /*14*/])->f_11)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iVar0 /*14*/])->f_8, (uParam0[iVar10 /*14*/])->f_8, 0, *(uParam0[iVar0 /*14*/]), (uParam0[iVar0 /*14*/])->f_3, false, false, false, false, 2, true, false, false);
					}
					else
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iVar0 /*14*/])->f_8, (uParam0[iVar10 /*14*/])->f_9, 0, *(uParam0[iVar0 /*14*/]), (uParam0[iVar0 /*14*/])->f_3, false, false, false, false, 2, true, false, false);
					}
				}
				else
				{
					(uParam0[iVar0 /*14*/])->f_8 = OBJECT::CREATE_OBJECT((uParam0[iVar0 /*14*/])->f_7, *(uParam0[iVar0 /*14*/]), true, true, true, false, true);
					vVar1 = { ENTITY::GET_ENTITY_COORDS((uParam0[iVar0 /*14*/])->f_8, true, false) };
				}
				ENTITY::SET_ENTITY_ROTATION((uParam0[iVar0 /*14*/])->f_8, (uParam0[iVar0 /*14*/])->f_3, 2, true);
				if ((uParam0[iVar0 /*14*/])->f_12)
				{
					ENTITY::FREEZE_ENTITY_POSITION((uParam0[iVar0 /*14*/])->f_8, (uParam0[iVar0 /*14*/])->f_12);
				}
				else
				{
					PHYSICS::ACTIVATE_PHYSICS((uParam0[iVar0 /*14*/])->f_8);
					ENTITY::_0x9587913B9E772D29((uParam0[iVar0 /*14*/])->f_8, 0);
				}
			}
		}
		else
		{
			(uParam0[iVar0 /*14*/])->f_9 = VEHICLE::CREATE_VEHICLE((uParam0[iVar0 /*14*/])->f_7, *(uParam0[iVar0 /*14*/]), (uParam0[iVar0 /*14*/])->f_6, true, true, false, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*14*/])->f_8))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS((uParam0[iVar0 /*14*/])->f_8, true, false) };
			vVar4 = { ENTITY::GET_ENTITY_ROTATION((uParam0[iVar0 /*14*/])->f_8, 2) };
		}
		else if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*14*/])->f_9))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS((uParam0[iVar0 /*14*/])->f_9, true, false) };
			vVar4 = { ENTITY::GET_ENTITY_ROTATION((uParam0[iVar0 /*14*/])->f_9, 2) };
		}
		iVar0++;
	}
}

bool func_581(int iParam0, int iParam1)
{
	if (iParam0->f_3 < iParam1)
	{
		return false;
	}
	return true;
}

void func_582(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 4;
	}
	else
	{
		Global_1894899 = (Global_1894899 - Global_1894899 & 4);
	}
}

int func_583(int iParam0)
{
	switch (iParam0)
	{
		case 79:
			return 273461605;
		case 16:
			return -857964358;
		case 9:
			return -868076593;
		case 36:
			return 1205826474;
		case 127:
			return 2136753624;
		case 125:
			return -796902762;
		case 118:
			return 1360745816;
		case 129:
			return 1672143046;
		case 114:
			return 1804403874;
		default:
			break;
	}
	return -1;
}

void func_584(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			iVar1 = iVar0;
			Jump @68; //curOff = 42
		}
		else if ((*uParam0)[iVar0] == iParam1)
		{
		}
		iVar0++;
	}
	if (iVar1 > -1)
	{
		(*uParam0)[iVar1] = iParam1;
	}
}

void func_585(int iParam0)
{
	Global_1898091 = (Global_1898091 - (Global_1898091 && iParam0));
}

void func_586(char* sParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (*sParam0 <= 1)
	{
		return;
	}
	iVar0 = (*sParam0 - 1);
	while (iVar0 >= 1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		uVar2 = (*sParam0)[iVar1];
		(*sParam0)[iVar1] = (*sParam0)[iVar0];
		(*sParam0)[iVar0] = uVar2;
		iVar0 = (iVar0 + -1);
	}
}

void func_587(int iParam0, int iParam1)
{
	if (iParam1 == iParam0->f_3)
	{
	}
	iParam0->f_3 = iParam1;
}

void func_588(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	*uParam0 = (*uParam0 || iParam1);
}

void func_589(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar0]))
		{
			STREAMING::REQUEST_ANIM_DICT((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_590(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0], false);
		}
		iVar0++;
	}
}

bool func_591(char* sParam0, char* sParam1)
{
	void fVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		fVar0 = HUD::_TEXT_DATABASE_REQUEST(sParam0);
		if (fVar0 == 0)
		{
			return false;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	fVar0 = HUD::_TEXT_DATABASE_REQUEST(sParam1);
	if (fVar0 == 0)
	{
		return false;
	}
	return true;
}

bool func_592(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar0]))
		{
			iVar1 = 1;
		}
		else if (!STREAMING::HAS_ANIM_DICT_LOADED((*uParam0)[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_593(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0 && !STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_594(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
}

void func_595(int iParam0)
{
	iLocal_562 = iParam0;
}

void func_596(int iParam0, bool bParam1)
{
	if (iParam0->f_205 != 9)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, bParam1);
	}
}

void func_597(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	if (__LIB_0__::func_2() != -1)
	{
		uVar0 = Global_36638.f_1444[*iParam0];
		MISC::SET_BIT(&uVar0, *iParam1);
		Global_36638.f_1444[*iParam0] = uVar0;
		return;
	}
	uVar1 = Global_40.f_7832[*iParam0];
	MISC::SET_BIT(&uVar1, *iParam1);
	Global_40.f_7832[*iParam0] = uVar1;
}

bool func_598(int iParam0)
{
	return (Global_1898091 && iParam0) != 0;
}

void func_599(int iParam0)
{
	Global_1898091 = (Global_1898091 || iParam0);
}

void func_600(int iParam0, bool bParam1)
{
	switch (iParam0->f_205)
	{
		case 9:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SB_HIDEOUT_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SB_HIDEOUT_END");
			}
			break;
		case 36:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_ABANDON");
			}
			break;
		case 79:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_BH_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_BH_ABANDON");
			}
			break;
		case 125:
		case 127:
			AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
			break;
	}
}

void func_601(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_602(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 2;
		case 79:
			return 1;
		case 36:
			return 0;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
		case 16:
			if (__LIB_0__::func_181())
			{
				return 4;
			}
			else
			{
				return 0;
			}
			break;
	}
	return -1;
}

void func_603(int iParam0)
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 36:
			iVar0 = joaat("GANG_ODRISCOLL");
			iVar1 = joaat("SIX_POINT_CABIN");
			break;
		case 16:
			if (!__LIB_0__::func_181())
			{
				iVar0 = joaat("GANG_ODRISCOLL");
				iVar1 = joaat("HANGING_DOG_RANCH");
			}
			else
			{
				iVar0 = joaat("GANG_RANCHERS");
				iVar1 = joaat("HANGING_DOG_RANCH_LARAMIE");
			}
			break;
		case 9:
			iVar0 = joaat("GANG_EXCONFED");
			iVar1 = joaat("SHADY_BELLE");
			break;
		case 79:
			iVar0 = joaat("GANG_INBRED");
			iVar1 = joaat("BEAVER_HOLLOW");
			break;
		case 125:
			iVar0 = joaat("GANG_BANDITOS");
			iVar1 = joaat("TWIN_ROCKS");
			break;
		case 127:
			iVar0 = joaat("GANG_BANDITOS");
			iVar1 = joaat("THIEVES_LANDING");
			break;
		case 118:
			iVar0 = joaat("GANG_BANDITOS");
			iVar1 = joaat("FORT_MERCER");
			break;
		case 114:
			iVar0 = joaat("GANG_BANDITOS");
			iVar1 = joaat("GAPTOOTH_BREACH");
			break;
		case 129:
			iVar0 = joaat("GANG_BANDITOS");
			iVar1 = joaat("SOLOMONS_FOLLY");
			break;
	}
	COMPENDIUM::COMPENDIUM_GANG_HIDEOUT_FOUND(iVar0, iVar1);
}

bool func_604(var uParam0)
{
	if (__LIB_0__::func_51(&(uParam0->f_7), 1))
	{
		return true;
	}
	return false;
}

void func_605(int iParam0, int iParam1)
{
	__LIB_0__::func_7(&(Global_40.f_11864[iParam0 /*2*/].f_1), iParam1);
}

Vector3 func_606(int iParam0, bool bParam1)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 9:
			vVar0 = { 1897.123f, -1863.157f, 46.0415f };
			break;
		case 16:
			vVar0 = { -2205.06f, 704.86f, 107.62f };
			break;
		case 36:
			vVar0 = { -45.93f, 1230.82f, 175.19f };
			break;
		case 79:
			vVar0 = { 2351f, 1335.5f, 102.4f };
			break;
		case 125:
			vVar0 = { -3962.021f, -2137.957f, -5.9562f };
			break;
		case 127:
			vVar0 = { -1411.857f, -2333.451f, 42.1056f };
			break;
		case 118:
			vVar0 = { -4201.647f, -3440.702f, 47.5009f };
			break;
		case 129:
			vVar0 = { -5415.055f, -3654.25f, -13.4989f };
			break;
		case 114:
			vVar0 = { -5984.121f, -3249.982f, -22.5604f };
			break;
		default:
			return 0f, 0f, 0f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, VOLUME::_GET_VOLUME_COORDS(__LIB_0__::func_559(iParam0)), false) > 2f && !bParam1)
	{
	}
	return vVar0;
}

void func_607(int iParam0, bool bParam1)
{
	char* sVar0;
	switch (iParam0->f_205)
	{
		case 79:
			sVar0 = "AZ_hideout_beaver_hollow";
			break;
		case 118:
			sVar0 = "AZ_hideout_fort_mercer";
			break;
		case 16:
			sVar0 = "AZ_hideout_hanging_dog_ranch";
			break;
		case 9:
			sVar0 = "AZ_hideout_shady_belle";
			break;
		case 36:
			sVar0 = "AZ_hideout_six_point_cabin";
			break;
		case 127:
			sVar0 = "AZ_hideout_thieves_landing";
			break;
		case 125:
			sVar0 = "AZ_hideout_Twin_Rocks";
			break;
		default:
			return;
	}
	if (__LIB_0__::func_51(&(iParam0->f_5), 262144) == bParam1)
	{
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_7(&(iParam0->f_5), 262144);
	}
	else
	{
		__LIB_0__::func_8(&(iParam0->f_5), 262144);
	}
	AUDIO::SET_AMBIENT_ZONE_STATE(sVar0, bParam1, true);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, true, true);
}

int func_608(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (__LIB_2__::func_1((iParam0[iVar0 /*9*/])->f_5, 0, 1))
		{
			iVar1++;
			if (iVar1 > iParam1)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_609(var uParam0, int iParam1, int iParam2)
{
	if (!__LIB_2__::func_1(uParam0->f_5, 0, 0) || DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "proc_bounty_target"))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		__LIB_0__::func_325(&(uParam0->f_6));
	}
	uParam0->f_6 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, uParam0->f_5);
	if (iParam2 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(uParam0->f_6, iParam2);
	}
}

void func_610(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_0__::func_51(&(iParam0->f_5), 32768))
		{
			LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
			__LIB_0__::func_7(&(iParam0->f_5), 32768);
		}
	}
	else if (__LIB_0__::func_51(&(iParam0->f_5), 32768))
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_8(&(iParam0->f_5), 32768);
	}
}

bool func_611(bool bParam0)
{
	return __LIB_0__::func_1(*bParam0, 1);
}

bool func_612(bool bParam0)
{
	return __LIB_0__::func_1(*bParam0, 2);
}

void func_613(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	__LIB_0__::func_495(&iVar0, 0);
	__LIB_0__::func_495(&iVar0, 17);
	__LIB_0__::func_495(&iVar0, 28);
	if (bParam1)
	{
		COMPANION::_0x3CAAD93FA5B9579A(iParam0->f_215, 2, iVar0);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_215))
	{
		COMPANION::_0x7274F84B1501B523(iParam0->f_215);
	}
}

int func_614(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (MAP::DOES_BLIP_EXIST((iParam0[iVar0 /*9*/])->f_6) && __LIB_2__::func_1((iParam0[iVar0 /*9*/])->f_5, 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_615(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_9__::func_572(iParam0);
	Global_40.f_11864[iVar0 /*2*/] = iParam1;
}

void func_616(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_340(iParam0) & 65535;
	iVar1 = BUILTIN::SHIFT_LEFT(iParam1, 16);
	__LIB_0__::func_341(iParam0, (iVar1 + iVar0));
}

bool func_617(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_9__::func_572(iParam0);
	return __LIB_9__::func_573(iVar0, 16);
}

bool func_618(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (!__LIB_0__::func_20(iParam0))
	{
		return true;
	}
	if (__LIB_0__::func_21(iParam0, 16))
	{
		return true;
	}
	if (__LIB_0__::func_730(iParam0) && !__LIB_1__::func_928(iParam0))
	{
	}
	if (__LIB_1__::func_902(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (__LIB_0__::func_29(iParam1))
		{
			iVar0 = iParam1;
		}
		if (__LIB_0__::func_29(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1897950 < iVar0 || Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!__LIB_0__::func_730(iParam0) || __LIB_1__::func_928(iParam0)) || __LIB_1__::func_903(Global_1897950))
			{
				__LIB_1__::func_940(Global_1897950, 0);
			}
			Global_1897950++;
			iVar2++;
			if (Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return true;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return false;
			}
		}
	}
	return true;
}

void func_619(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam3 < 0)
	{
		iParam3 = (iParam0->f_199 - 1);
	}
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (__LIB_2__::func_1((iParam1[iVar0 /*9*/])->f_5, 0, 1))
		{
			ENTITY::SET_ENTITY_VISIBLE((iParam1[iVar0 /*9*/])->f_5, true);
		}
		iVar0++;
	}
}

bool func_620(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_4__::func_6(iParam0);
	if (!__LIB_0__::func_6(iVar0))
	{
		return false;
	}
	return __LIB_1__::func_44(iVar0);
}

void func_621(int iParam0)
{
	int iVar0;
	if (iParam0 < 0)
	{
		return;
	}
	if (!__LIB_0__::func_86(Global_1393237.f_11[iParam0 /*30*/].f_3))
	{
		__LIB_7__::func_910(Global_1393237.f_11[iParam0 /*30*/].f_3, 0);
		PED::_0x9851DE7AEC10B4E1(Global_1393237.f_11[iParam0 /*30*/].f_3, 20f, 1, 0);
	}
	Global_1393237.f_11[iParam0 /*30*/] = -15;
	Global_1393237.f_11[iParam0 /*30*/].f_2 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_3 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_6 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_9 = 0f;
	if (__LIB_5__::func_733(iParam0, 8388608))
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 8388608;
	}
	else
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 0;
		if (Global_1393237.f_11[iParam0 /*30*/].f_17 != __LIB_1__::func_976())
		{
		}
		Global_1393237.f_11[iParam0 /*30*/].f_17 = __LIB_1__::func_976();
	}
	Global_1393237.f_11[iParam0 /*30*/].f_11 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_12 = 0;
	Global_1393237.f_11[iParam0 /*30*/].f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_14[iVar0] = 0;
		iVar0++;
	}
	__LIB_3__::func_533(iParam0, 1);
	Global_1393237.f_11[iParam0 /*30*/].f_29 = 0;
	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[0]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[0]));
		}
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[1]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[1]));
		}
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1393237.f_11[iParam0 /*30*/].f_21))
	{
		__LIB_7__::func_910(Global_1393237.f_11[iParam0 /*30*/].f_3, 1);
	}
}

void func_622(int iParam0)
{
	if (__LIB_1__::func_149(1) <= 0)
	{
		return;
	}
}

bool func_623(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < __LIB_1__::func_149(1))
	{
		iVar1 = __LIB_1__::func_237(iVar0);
		if (__LIB_0__::func_31(iVar1))
		{
			iVar2 = __LIB_0__::func_167(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
				{
					if (__LIB_2__::func_1(iVar2, 0, 1))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_5, iVar2, 1, 1))
						{
							return true;
						}
					}
					if (__LIB_2__::func_1(uParam1->f_5, 0, 1))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar2, uParam1->f_5, 1, 1))
						{
							return true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_624(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_9__::func_577(iParam0);
	if (iVar0 >= 6 || iVar0 < 0)
	{
		return false;
	}
	return Global_40.f_9571[iVar0 /*10*/].f_1 == 5;
}

bool func_625(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_973(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_970(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_833(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_626(int iParam0)
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
			__LIB_3__::func_707(iVar0, 1);
		}
		else
		{
			__LIB_3__::func_707(iVar1, 1);
		}
	}
}

void func_627(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_4__::func_6(iParam0);
	if (!__LIB_0__::func_6(iVar0))
	{
		return;
	}
	if (iVar0 != __LIB_0__::func_298(0))
	{
		__LIB_1__::func_645(iVar0);
	}
	else
	{
		__LIB_1__::func_645(iVar0);
	}
}

void func_628(int iParam0)
{
	switch (iParam0->f_205)
	{
		case 16:
			break;
		case 79:
			break;
		default:
			break;
	}
}

void func_629(int iParam0)
{
	iParam0->f_136.f_9 = { 0f, 0f, 0f };
	iParam0->f_136.f_12 = 1;
	iParam0->f_136.f_13 = 30f;
	iParam0->f_136.f_14 = 100f;
	iParam0->f_136.f_15 = -1;
	iParam0->f_136.f_16 = 1500;
	iParam0->f_136.f_17 = 1000;
	iParam0->f_136.f_6 = 25f;
}

float func_630(int iParam0)
{
	return 18f;
}

bool func_631()
{
	return __LIB_9__::func_598(8);
}

void func_632(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (__LIB_0__::func_51(&((iParam0[iParam1 /*9*/])->f_7), 16))
	{
		*fParam2 = 0.1f;
		*fParam3 = 0.5f;
	}
	else
	{
		*fParam2 = 0.4f;
		*fParam3 = 1f;
	}
	if (!__LIB_1__::func_376((iParam0[iParam1 /*9*/])->f_5))
	{
		if (PED::IS_PED_FACING_PED((iParam0[iParam1 /*9*/])->f_5, Global_35, 70f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((iParam0[iParam1 /*9*/])->f_5))
		{
			*fParam2 = (*fParam2 / 2f);
			*fParam3 = (*fParam3 / 2f);
		}
	}
}

bool func_633(int iParam0)
{
	float fVar0;
	if (__LIB_0__::func_86(iParam0->f_6.f_20))
	{
		return true;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, iParam0->f_6.f_20, true);
	fVar0 = (fVar0 * fVar0);
	if (!CAM::IS_SPHERE_VISIBLE(iParam0->f_6.f_20, iParam0->f_6.f_23) && fVar0 > iParam0->f_6.f_24)
	{
		return false;
	}
	if (CAM::IS_SPHERE_VISIBLE(iParam0->f_6.f_20, iParam0->f_6.f_23) && fVar0 > iParam0->f_6.f_25)
	{
		return false;
	}
	return true;
}

void func_634(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	iVar0 = 0;
	switch (iParam0->f_205)
	{
		case 79:
			iVar0 = joaat("INBRED");
			break;
		case 16:
			if (!__LIB_0__::func_181())
			{
				iVar0 = joaat("ODRISCOLLS");
			}
			else
			{
				iVar0 = joaat("RANCHERS");
			}
			break;
		case 9:
			iVar0 = joaat("EX_CONFED");
			break;
		case 36:
			iVar0 = joaat("ODRISCOLLS");
			break;
		case 125:
			iVar0 = joaat("BANDITOS");
			break;
		case 127:
			iVar0 = joaat("BANDITOS");
			break;
		default:
			iParam0->f_200 = 0;
			return;
	}
	if (iVar0 != 0)
	{
		Var1 = { __LIB_0__::func_38(joaat("KILLED"), iVar0) };
		STATS::STAT_ID_GET_INT(&Var1, &(iParam0->f_200));
	}
}

int func_635(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	switch (*uParam0)
	{
		case 0:
			__LIB_9__::func_589(uParam1);
			__LIB_9__::func_590(uParam2);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3) || __LIB_9__::func_591(sParam3, sParam4))
			{
				*uParam0 = 1;
			}
			break;
		case 1:
			if (!__LIB_9__::func_592(uParam1))
			{
				return 0;
			}
			if (!__LIB_9__::func_593(uParam2))
			{
				return 0;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				if (!HUD::_TEXT_DATABASE_HAS_LOADED(sParam3))
				{
					return 0;
				}
			}
			return 1;
	}
	return 0;
}

bool func_636()
{
	return __LIB_9__::func_598(2);
}

void func_637(var uParam0, int iParam1, int iParam2)
{
	__LIB_9__::func_609(uParam0, iParam1, iParam2);
}

float func_638(bool bParam0)
{
	if (!__LIB_9__::func_611(bParam0))
	{
		return bParam0->f_1;
	}
	if (__LIB_9__::func_612(bParam0))
	{
		return bParam0->f_2;
	}
	return (__LIB_0__::func_36() - bParam0->f_1);
}

void func_639(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_9__::func_613(iParam0, 1);
		__LIB_9__::func_599(2);
	}
	else
	{
		if (__LIB_9__::func_598(2))
		{
			__LIB_9__::func_613(iParam0, 0);
		}
		__LIB_9__::func_585(2);
	}
}

void func_640(var uParam0, bool bParam1)
{
	if (bParam1 || !__LIB_9__::func_611(uParam0))
	{
		__LIB_1__::func_148(uParam0);
	}
}

bool func_641(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_51(&(iParam1->f_5), 33554432))
	{
		if (__LIB_9__::func_614(iParam0) <= 0)
		{
			__LIB_0__::func_7(&(iParam1->f_5), 33554432);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_642(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_1(uParam0->f_5, 0, 1))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(uParam0->f_5, false, false);
		if (!__LIB_0__::func_51(&(uParam0->f_7), 512))
		{
			if (bParam1)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				if (bParam4)
				{
					TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 4000, 0, 0, 0);
				}
				if (iVar0 != 0)
				{
					if (bParam2 && (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0) || WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)))
					{
						__LIB_3__::func_534(uParam0->f_5, Global_35, 250, 0, 1, 1);
					}
				}
				TASK::TASK_COMBAT_PED(0, Global_35, iParam5, 0);
				__LIB_1__::func_474(uParam0->f_5, &iVar1, 0.1f, 0.3f, 1, 1);
			}
			else
			{
				TASK::TASK_COMBAT_PED(uParam0->f_5, Global_35, 0, 0);
			}
		}
		if (bParam3)
		{
			if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "proc_bounty_target"))
			{
				__LIB_9__::func_609(uParam0, joaat("BLIP_STYLE_ENEMY"), 0);
			}
		}
		return 1;
	}
	return 0;
}

void func_643(int iParam0)
{
	int iVar0;
	if (__LIB_9__::func_617(iParam0))
	{
		return;
	}
	iVar0 = __LIB_9__::func_572(iParam0);
	__LIB_9__::func_605(iVar0, 16);
}

bool func_644(int iParam0)
{
	if (!__LIB_0__::func_51(&(iParam0->f_5), 1024))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0->f_215, Global_36))
		{
			if (__LIB_2__::func_1(Global_35, 0, 1))
			{
				__LIB_9__::func_596(iParam0, 1);
				__LIB_0__::func_7(&(iParam0->f_5), 1024);
				return true;
			}
		}
	}
	else if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0->f_215, Global_36) && __LIB_0__::func_746(Global_1888801[iParam0->f_205 /*35*/]) != 3)
	{
		if (__LIB_2__::func_1(Global_35, 0, 1))
		{
			__LIB_9__::func_596(iParam0, 0);
			__LIB_0__::func_8(&(iParam0->f_5), 1024);
			return true;
		}
	}
	return false;
}

void func_645(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iParam4)
	{
		case 1:
			iVar1 = 0;
			iVar2 = 2;
			break;
		case 0:
			iVar1 = 3;
			iVar2 = 5;
			break;
		default:
			iVar1 = 0;
			iVar2 = 5;
			break;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (BUILTIN::VDIST(Global_1393237.f_11[iVar0 /*30*/].f_3, vParam0) < fParam3)
		{
			__LIB_9__::func_621(iVar0);
		}
		iVar0++;
	}
}

void func_646(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (*uParam0 == 0)
	{
		return;
	}
	uParam0->f_5 = __LIB_1__::func_545(*uParam0, uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!__LIB_0__::func_51(&(uParam0->f_7), 2))
	{
		if (__LIB_0__::func_51(&(uParam0->f_7), 8))
		{
			iVar0 = __LIB_1__::func_545(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::_SET_PED_ON_MOUNT(uParam0->f_5, iVar0, -1, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_5);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, iParam1);
		if (__LIB_0__::func_51(&(uParam0->f_7), 4))
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam0->f_5, uParam0->f_1, 2f, 1, 0, 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_5, !bParam2);
	}
	else
	{
		__LIB_1__::func_864(uParam0->f_5, 0, 0);
	}
	PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
}

int func_647(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam5 == 0)
	{
		if (iParam1->f_199 > 0)
		{
			iParam5 = (iParam1->f_199 - 1);
		}
		else
		{
			iParam5 = (*iParam0 - 1);
		}
	}
	iVar1 = __LIB_0__::func_259((iParam5 - iParam4) + 1, 5);
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam1->f_191 == -1)
	{
		iParam1->f_191 = iParam4;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iParam1->f_191 > ((iParam4 + iVar2) - 1) || iParam1->f_191 < iParam4)
		{
			iParam1->f_191 = iParam4;
		}
		if (!__LIB_1__::func_376((iParam0[iParam1->f_191 /*9*/])->f_5) || bParam3)
		{
			if (__LIB_9__::func_576((iParam0[iParam1->f_191 /*9*/])->f_5, &(iParam1->f_155), &(iParam1->f_183), 0))
			{
				if (bParam2)
				{
					__LIB_9__::func_609(iParam0[iParam1->f_191 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
				}
				return iParam1->f_191;
			}
		}
		else if (__LIB_1__::func_376((iParam0[iParam1->f_191 /*9*/])->f_5))
		{
			if (__LIB_0__::func_665((iParam0[iParam1->f_191 /*9*/])->f_5, Global_35, 0, 1) < 2f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((iParam0[iParam1->f_191 /*9*/])->f_5, Global_35, 17))
			{
				if (bParam2)
				{
					__LIB_9__::func_609(iParam0[iParam1->f_191 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
				}
				return iParam1->f_191;
			}
		}
		iParam1->f_191++;
		iVar0++;
	}
	return -1;
}

bool func_648(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_9__::func_624(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_296(6206, 1, 1))
		{
			iVar0 = __LIB_0__::func_298(0);
			iVar1 = __LIB_0__::func_700(iVar0);
			return false;
		}
		if (bParam1)
		{
			if (__LIB_0__::func_61() == iParam0)
			{
				return false;
			}
			switch (iParam0)
			{
				case 36:
					if (!__LIB_1__::func_187(63))
					{
						return false;
					}
					if (__LIB_1__::func_185(76) || __LIB_0__::func_181())
					{
						return false;
					}
					break;
				case 125:
					if (!__LIB_0__::func_26())
					{
						return false;
					}
					break;
				case 129:
					if (!__LIB_0__::func_313())
					{
						return false;
					}
					if (__LIB_0__::func_627(19, 0))
					{
						return false;
					}
					break;
				case 114:
					if (!__LIB_0__::func_313())
					{
						return false;
					}
					if (__LIB_0__::func_627(20, 0))
					{
						return false;
					}
					break;
				case 9:
					break;
			}
		}
	}
	else if (__LIB_0__::func_2() == 0)
	{
		return false;
	}
	else
	{
		return false;
	}
	if (__LIB_0__::func_21(iParam0, 256))
	{
		return false;
	}
	if (bParam1)
	{
		iVar2 = __LIB_4__::func_6(iParam0);
		if (!__LIB_0__::func_6(iVar2))
		{
			return false;
		}
		iVar3 = __LIB_0__::func_933(iVar2);
		if (__LIB_5__::func_771(iVar3))
		{
			__LIB_1__::func_446(&iVar3, 0, 0, 0, 5, 0, 0, 0);
			if (!__LIB_1__::func_426(iVar3, 1))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_649(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iParam4 == 0)
	{
		iParam4 = (iParam2 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (__LIB_9__::func_625((iParam1[iVar0 /*9*/])->f_5, 0, &(iParam0->f_155), &(iParam0->f_183), 0, 0) && !PED::GET_PED_CONFIG_FLAG((iParam1[iVar0 /*9*/])->f_5, 9, false))
		{
			iParam0->f_192 = (iParam1[iVar0 /*9*/])->f_5;
			iParam0->f_190 = iVar0;
			return true;
		}
		else if (__LIB_9__::func_623(iParam0, iParam1[iVar0 /*9*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_650(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_4__::func_6(iParam0);
	if (!__LIB_0__::func_6(iVar0))
	{
		return;
	}
	iVar1 = __LIB_9__::func_602(iParam0);
	if (iVar1 != -1)
	{
		Global_1392050[iVar1 /*14*/].f_1 |= 16;
	}
	__LIB_1__::func_559(iVar0, 0, 2);
	__LIB_9__::func_615(iParam0, iParam1);
}

void func_651(int iParam0)
{
	iLocal_548 = iParam0;
}

void func_652(int iParam0)
{
	iLocal_554 = iParam0;
}

void func_653(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

void func_654(bool bParam0)
{
	if (bParam0)
	{
		if (!__LIB_9__::func_631())
		{
			__LIB_9__::func_599(8);
		}
	}
	else if (__LIB_9__::func_631())
	{
		__LIB_9__::func_585(8);
	}
}

int func_655(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 1000000f;
	iVar2 = iParam2;
	while (iVar2 <= iParam3)
	{
		if ((iParam0[iVar2 /*9*/])->f_5 != iParam1)
		{
			if (__LIB_2__::func_1((iParam0[iVar2 /*9*/])->f_5, 0, 1) || !bParam5)
			{
				fVar1 = __LIB_0__::func_665((iParam0[iVar2 /*9*/])->f_5, iParam1, 1, 1);
				if (fVar1 < fVar0)
				{
					fVar0 = fVar1;
					iVar3 = iVar2;
				}
			}
		}
		iVar2++;
	}
	if (fVar1 < fParam4)
	{
		return iVar3;
	}
	return -1;
}

bool func_656(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	if (iParam0->f_201 > 0)
	{
		PED::_0xED9582B3DA8F02B4(iParam0->f_201);
	}
	else
	{
		PED::_0xED9582B3DA8F02B4(iParam0->f_199);
	}
	if (__LIB_9__::func_635(&(iParam0->f_1), uParam1, uParam2, sParam3, sParam4) && PED::_0x5E420FF293EE5472())
	{
		return true;
	}
	return false;
}

void func_657(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0->f_196 >= iParam0->f_199)
		{
			iParam0->f_196 = 0;
		}
		if (__LIB_2__::func_1((iParam1[iParam0->f_196 /*9*/])->f_5, 0, 1))
		{
			(iParam1[iVar0 /*9*/])->f_8 = __LIB_0__::func_665((iParam1[iParam0->f_196 /*9*/])->f_5, Global_35, 0, 1);
			if (iParam1[iVar0 /*9*/])->f_8 < __LIB_9__::func_630(iParam0)
			{
				if (!__LIB_0__::func_51(&((iParam1[iParam0->f_196 /*9*/])->f_7), 16))
				{
					__LIB_0__::func_8(&((iParam1[iParam0->f_196 /*9*/])->f_7), 32);
					__LIB_9__::func_588(&((iParam1[iParam0->f_196 /*9*/])->f_7), 16, 1);
				}
			}
			else if (!__LIB_0__::func_51(&((iParam1[iParam0->f_196 /*9*/])->f_7), 32))
			{
				__LIB_0__::func_8(&((iParam1[iParam0->f_196 /*9*/])->f_7), 16);
				__LIB_9__::func_588(&((iParam1[iParam0->f_196 /*9*/])->f_7), 32, 1);
			}
			if (!__LIB_0__::func_51(&(iParam0->f_5), 65536))
			{
				if (__LIB_1__::func_472((iParam1[iParam0->f_196 /*9*/])->f_5, 45f, 30f, (iParam1[iVar0 /*9*/])->f_8, 70f))
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS((iParam1[iParam0->f_196 /*9*/])->f_5, true, false) };
					__LIB_0__::func_7(&(iParam0->f_5), 65536);
				}
			}
		}
		iParam0->f_196++;
		iVar0++;
	}
}

bool func_658(bool bParam0, float fParam1)
{
	if (!__LIB_9__::func_611(bParam0))
	{
		return false;
	}
	if (__LIB_9__::func_638(bParam0) > fParam1)
	{
		return true;
	}
	return false;
}

Vector3 func_659(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_136(iParam0, 0)))
	{
		return ENTITY::GET_ENTITY_COORDS(__LIB_3__::func_136(iParam0, 0), false, false);
	}
	return 0f, 0f, 0f;
}

bool func_660(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = __LIB_4__::func_139(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = __LIB_0__::func_646(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1935630.f_44) || WEAPON::_IS_WEAPON_TORCH(Global_1935630.f_44))
			{
				if (uParam1->f_12 <= 5f)
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

void func_661(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	bool bVar0;
	__LIB_9__::func_585(128);
	iParam0->f_205 = iParam1;
	bVar0 = __LIB_0__::func_51(&(iParam0->f_5), 1048576);
	iParam0->f_202 = { __LIB_9__::func_606(iParam0->f_205, bVar0) };
	iParam0->f_187 = MISC::GET_RANDOM_INT_IN_RANGE(7502, 10000);
	if (iParam0->f_205 == 16)
	{
		__LIB_0__::func_568(iParam0->f_202, 120f, 0);
	}
	else
	{
		__LIB_0__::func_568(iParam0->f_202, 80f, 0);
	}
	__LIB_9__::func_607(iParam0, 1);
	__LIB_6__::func_905(&(iParam0->f_155));
	__LIB_4__::func_228(&(iParam0->f_155));
	__LIB_9__::func_261(&(iParam0->f_155));
	__LIB_1__::func_398(&(iParam0->f_155), 1);
	__LIB_3__::func_407(&(iParam0->f_155), BUILTIN::TO_FLOAT(iParam3));
	__LIB_2__::func_906(&(iParam0->f_155), 50);
	__LIB_1__::func_975(&(iParam0->f_155), 8f);
	__LIB_9__::func_586(sParam2);
	__LIB_9__::func_628(iParam0);
	if (!__LIB_1__::func_200(65))
	{
		__LIB_0__::func_11(iParam0);
	}
	__LIB_9__::func_629(iParam0);
	__LIB_9__::func_634(iParam0);
	__LIB_0__::func_928(&(iParam0->f_38), Global_35, "ARTHUR", 0);
}

bool func_662(vector3 vParam0, var uParam3, int iParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10)
{
	float fVar0;
	if (fParam8 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam8)
		{
			return false;
		}
	}
	fVar0 = __LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vParam0, 1);
	if (fVar0 < fParam7)
	{
		if (__LIB_4__::func_425(vParam0, 0, uParam3, iParam4, fParam5, fParam6, fParam7, fParam9, 0))
		{
			return true;
		}
		if (fVar0 < fParam10)
		{
			*iParam4 = 0f;
			return true;
		}
	}
	return false;
}

bool func_663(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 < 0)
	{
		iParam4 = (iParam0->f_199 - 1);
	}
	if (iParam0->f_197 < iParam3)
	{
		iParam0->f_197 = iParam3;
	}
	if ((*iParam1)[iParam0->f_197 /*9*/] != 0)
	{
		__LIB_9__::func_646(iParam1[iParam0->f_197 /*9*/], iParam2, 1);
	}
	iParam0->f_197++;
	if (iParam0->f_197 > iParam4)
	{
		return true;
	}
	return false;
}

void func_664(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_474(302))
	{
		return;
	}
	if (__LIB_0__::func_61() == iParam0->f_205)
	{
		return;
	}
	if (!__LIB_3__::func_222(iParam0->f_205))
	{
		return;
	}
	if (__LIB_0__::func_296(32, 0, 1))
	{
		return;
	}
	if (__LIB_0__::func_627(83, 0))
	{
		return;
	}
	if (!__LIB_9__::func_648(iParam0->f_205, 0))
	{
		return;
	}
	if (__LIB_0__::func_51(&(iParam0->f_5), 1024))
	{
		if (__LIB_1__::func_373(iParam0->f_202, 0.2f, 0.8f, 0f, 0.99f))
		{
			__LIB_0__::func_378(302, &iVar0, &iVar1);
			__LIB_1__::func_207(iVar0, iVar1);
			__LIB_9__::func_597(&iVar0, &iVar1);
			__LIB_0__::func_384("GANG_PROGRESS", "TF_SP_GANG_HIDEOUTS", 0, 0, -2, 0, 0, 0, 0, 1, 1);
		}
	}
}

int func_665()
{
	return 10;
}

void func_666(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_9__::func_588(&(uParam0->f_7), 1, 0);
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_7), 1);
	}
}

void func_667(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	switch (iParam5)
	{
		case 0:
			TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(0, vParam1, fParam4, bParam7, bParam8, false, false);
			break;
		case 2:
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vParam1, fParam4, bParam7, false, bParam8, false, false);
			break;
		case 1:
			TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(0, vParam1, fParam4, bParam7, bParam8, false, false);
			break;
		case 3:
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(0, vParam1, fParam4, bParam7, false, bParam8, false, false);
			break;
	}
	if (bParam8)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam6))
		{
			TASK::TASK_WANDER_IN_VOLUME(0, iParam6, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
		}
		else
		{
			TASK::TASK_WANDER_IN_AREA(0, vParam1, fParam4, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
		}
	}
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_668(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	float fVar1;
	float fVar2;
	if (((iParam1[iParam2 /*9*/])->f_5 == iParam0->f_192 && !bParam8) || !__LIB_2__::func_1((iParam1[iParam2 /*9*/])->f_5, 0, 1))
	{
		return;
	}
	__LIB_9__::func_632(iParam1, iParam2, &fVar1, &fVar2);
	__LIB_2__::func_357((iParam1[iParam2 /*9*/])->f_5, Global_36, 2, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (__LIB_0__::func_51(&((iParam1[iParam2 /*9*/])->f_7), 32) || __LIB_1__::func_376((iParam1[iParam2 /*9*/])->f_5))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			if (bParam7)
			{
				TASK::TASK_PLAY_ANIM(0, sParam3, sParam4, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			}
			else if (__LIB_1__::func_985())
			{
				TASK::TASK_PLAY_ANIM(0, sParam3, sParam4, 8f, -4f, MISC::GET_RANDOM_INT_IN_RANGE(500, 1200), 0, 0f, false, 0, false, 0, false);
			}
		}
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), -1f, -1f, -1f);
		if ((__LIB_1__::func_985() || bParam6) && !__LIB_0__::func_51(&((iParam1[iParam2 /*9*/])->f_7), 16))
		{
			PED::SET_PED_CONFIG_FLAG((iParam1[iParam2 /*9*/])->f_5, 246, true);
			TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 4000, 0, 0, 1);
		}
	}
	else if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((iParam1[iParam2 /*9*/])->f_5))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), -1f, -1f, -1f);
		__LIB_3__::func_534((iParam1[iParam2 /*9*/])->f_5, Global_35, 500, 0, 1, 1);
	}
	if (bParam5)
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	}
	__LIB_1__::func_474((iParam1[iParam2 /*9*/])->f_5, &iVar0, fVar1, fVar2, 1, 1);
}

void func_669(var uParam0, vector3 vParam1, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		if (__LIB_2__::func_1(uParam0->f_5, 0, 1))
		{
			if (!__LIB_9__::func_604(uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_5, 518218985, true) == 1 || bParam7)
				{
					if (__LIB_1__::func_992(uParam0->f_5, vParam1, 1) > IntToFloat((iParam4 * iParam4)))
					{
						MAP::REMOVE_BLIP(&(uParam0->f_6));
					}
					else if (__LIB_9__::func_658(bParam5, fParam6))
					{
						MAP::REMOVE_BLIP(&(uParam0->f_6));
						if (__LIB_0__::func_94(uParam0->f_5, vParam1, 1) < IntToFloat((iParam4 / 3)))
						{
						}
					}
				}
			}
		}
	}
}

bool func_670(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_1(uParam0->f_5, 0, 1))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(uParam0->f_5, false, false);
		if (!__LIB_0__::func_51(&(uParam0->f_7), 512))
		{
			if (bParam1)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				if (bParam4)
				{
					TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 4000, 0, 0, 0);
				}
				if (iVar0 != 0)
				{
					if (bParam2 && (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0) || WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)))
					{
						__LIB_3__::func_534(uParam0->f_5, Global_35, 250, 0, 1, 1);
					}
				}
				TASK::TASK_COMBAT_PED(0, Global_35, iParam5, 0);
				__LIB_1__::func_474(uParam0->f_5, &iVar1, 0.1f, 0.3f, 1, 1);
			}
			else
			{
				TASK::TASK_COMBAT_PED(uParam0->f_5, Global_35, 0, 0);
			}
		}
		if (bParam3)
		{
			if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "proc_bounty_target"))
			{
				__LIB_9__::func_609(uParam0, joaat("BLIP_STYLE_ENEMY"), 0);
			}
		}
		return true;
	}
	return false;
}

bool func_671(bool bParam0, float fParam1)
{
	if (__LIB_9__::func_658(bParam0, fParam1))
	{
		__LIB_9__::func_653(bParam0);
		return true;
	}
	return false;
}

bool func_672(int iParam0, int iParam1)
{
	if (PED::IS_PED_SHOOTING((iParam0[iParam1 /*9*/])->f_5))
	{
		return true;
	}
	if (!PED::IS_PED_IN_COMBAT((iParam0[iParam1 /*9*/])->f_5, 0))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((iParam0[iParam1 /*9*/])->f_5, Global_35, 17))
	{
		return true;
	}
	if (__LIB_1__::func_992((iParam0[iParam1 /*9*/])->f_5, Global_36, 1) < 100f)
	{
		return true;
	}
	return false;
}

int func_673(var uParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { __LIB_3__::func_448(iParam1) };
	return __LIB_7__::func_433(uParam0, vVar0, vParam2, 0);
}

void func_674(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (*uParam0 == 0)
	{
		return;
	}
	uParam0->f_5 = __LIB_1__::func_545(*uParam0, uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!__LIB_0__::func_51(&(uParam0->f_7), 2))
	{
		if (__LIB_0__::func_51(&(uParam0->f_7), 8))
		{
			iVar0 = __LIB_1__::func_545(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::_SET_PED_ON_MOUNT(uParam0->f_5, iVar0, -1, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_5);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, iParam1);
		if (__LIB_0__::func_51(&(uParam0->f_7), 4))
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam0->f_5, uParam0->f_1, 2f, 1, false, 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_5, !bParam2);
	}
	else
	{
		__LIB_1__::func_864(uParam0->f_5, 0, 0);
	}
	PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
}

bool func_675(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		__LIB_2__::func_899(uParam1, 0, iVar0);
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
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
								*uParam2 = 2;
								__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
						*uParam2 = 4;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (__LIB_9__::func_660(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 131072;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

void func_676()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (__LIB_0__::func_31(iVar17))
		{
			iVar18 = __LIB_0__::func_271(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489.f_58 = -15;
	__LIB_9__::func_653(&(Global_1359489.f_55));
	if (__LIB_1__::func_198(joaat("CSTAG_PLAYER_AWAY"), 1))
	{
		__LIB_1__::func_449(joaat("CSTAG_PLAYER_AWAY"), 1, 0);
	}
}

bool func_677(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_899(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_973(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_970(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_5__::func_678(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_5__::func_683(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_678(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_4__::func_6(iParam0);
	if (!__LIB_0__::func_6(iVar0))
	{
		return;
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	__LIB_7__::func_766(iParam0, 57, __LIB_2__::func_116(iParam0, 1), 0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	if (__LIB_0__::func_746(iVar0) != 4)
	{
		__LIB_0__::func_7(&Global_1935630, 32);
	}
	if (__LIB_1__::func_25(iVar0, 1))
	{
		__LIB_6__::func_778(iVar0);
	}
	iVar1 = __LIB_9__::func_602(iParam0);
	if (iVar1 != -1)
	{
		__LIB_2__::func_304(0, iVar1, 0, 12, 0);
	}
	__LIB_9__::func_603(iParam0);
	__LIB_1__::func_298(iVar0, 1);
	__LIB_1__::func_821(iVar0, 1, __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1));
	__LIB_9__::func_643(iParam0);
	__LIB_0__::func_703(0, 12);
}

void func_679(int iParam0)
{
	if (iParam0->f_195 == 0)
	{
		if (__LIB_9__::func_644(iParam0))
		{
		}
		if (__LIB_0__::func_746(Global_1888801[iParam0->f_205 /*35*/]) == 3)
		{
			if (__LIB_2__::func_1(Global_35, 0, 1))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
			}
		}
		__LIB_9__::func_664(iParam0);
	}
	if (!__LIB_0__::func_51(&(iParam0->f_5), 1073741824 /* Float: 2f */))
	{
		if (!__LIB_9__::func_636())
		{
			if (iParam0->f_3 >= 4 && iParam0->f_3 < 8)
			{
				__LIB_9__::func_639(iParam0, 1);
				__LIB_9__::func_610(iParam0, 1);
			}
		}
		else if (iParam0->f_3 >= 8)
		{
			__LIB_9__::func_639(iParam0, 0);
			__LIB_9__::func_654(0);
		}
	}
	if (iParam0->f_195 < 5)
	{
		iParam0->f_195++;
	}
	else
	{
		iParam0->f_195 = 0;
	}
}

void func_680(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4)
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
	__LIB_6__::func_726(&uVar2, 0);
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

bool func_681(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_51(&(iParam0->f_5), 256) && !__LIB_0__::func_270())
	{
		iVar0 = __LIB_4__::func_6(iParam0->f_205);
		if (__LIB_0__::func_746(iVar0) == 3 || __LIB_0__::func_746(iVar0) == 4)
		{
			__LIB_9__::func_627(iParam0->f_205);
			__LIB_0__::func_7(&(iParam0->f_5), 4096);
		}
		__LIB_1__::func_422("H_HIDE_FAIL", 7500, 0, 1, 0, 0, -1, -1, 0);
		__LIB_0__::func_7(&(iParam0->f_5), 256);
		return true;
	}
	return false;
}

void func_682(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
}

int func_683(int iParam0, char[4] cParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		return 0;
	}
	return 1;
}

bool func_684(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam1, MISC::GET_HASH_KEY(sParam2)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_685(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] - (Global_40.f_9571[iParam1 /*10*/] && iParam0));
}

int func_686(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 3:
			iVar0 = 8;
			break;
		case 4:
			iVar0 = 16;
			break;
		case 5:
			iVar0 = 32;
			break;
		case 6:
			iVar0 = 512;
			break;
		default:
			return 0;
	}
	return iVar0;
}

void func_687(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_392(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&(Global_1934765.f_53[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40567.f_46 = 1;
			MISC::SET_BIT(&(Global_1058888.f_40567.f_28[iVar1]), iVar2);
		}
		else
		{
			MISC::SET_BIT(&(Global_1055058[iVar3 /*116*/].f_72.f_28[iVar1]), iVar2);
		}
	}
}

void func_688(var uParam0, char* sParam1, int iParam2, char[4] cParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!__LIB_2__::func_1(iParam2, 0, 1))
		{
			return;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam1, iParam2, 0);
}

bool func_689(float fParam0)
{
	if (__LIB_0__::func_481(1))
	{
		return true;
	}
	if (__LIB_9__::func_611(&uLocal_0) && !__LIB_9__::func_671(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

int func_690(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	vVar0 = { __LIB_3__::func_448(iParam1) };
	vVar3 = { __LIB_3__::func_448(iParam2) };
	return __LIB_4__::func_492(iParam0, vVar0, vVar3, iParam2);
}

int func_691(int iParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { __LIB_3__::func_448(iParam1) };
	return __LIB_4__::func_492(iParam0, vVar0, vParam2, 0);
}

void func_692(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bVar1 = __LIB_0__::func_51(&(iParam1->f_5), 128);
	iVar0 = 0;
	while (iVar0 < iParam1->f_199)
	{
		__LIB_9__::func_669(iParam0[iVar0 /*9*/], iParam1->f_202, iParam2, &(iParam1->f_211), iParam3, bVar1);
		iVar0++;
	}
}

int func_693(int iParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, bool bParam5, int iParam6)
{
	return __LIB_3__::func_154(&(iParam0->f_38), cParam3, iParam1, iParam2, iParam4, bParam5, iParam6, 0);
}

bool func_694(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iParam4 == 0)
	{
		iParam4 = (iParam2 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (__LIB_9__::func_677((iParam1[iVar0 /*9*/])->f_5, 0, &(iParam0->f_155), &(iParam0->f_183), 0, 0) && !PED::GET_PED_CONFIG_FLAG((iParam1[iVar0 /*9*/])->f_5, 9, false))
		{
			iParam0->f_192 = (iParam1[iVar0 /*9*/])->f_5;
			iParam0->f_190 = iVar0;
			return true;
		}
		else if (__LIB_9__::func_623(iParam0, iParam1[iVar0 /*9*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_695(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_9__::func_620(iParam1->f_205) && !__LIB_0__::func_1(Global_1935630, 32))
	{
		iVar0 = 0;
		while (iVar0 < iParam1->f_199)
		{
			if (ENTITY::DOES_ENTITY_EXIST((iParam0[iVar0 /*9*/])->f_5))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((iParam0[iVar0 /*9*/])->f_5, Global_35, 1, 1))
				{
					__LIB_9__::func_678(iParam1->f_205);
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_696(int iParam0)
{
	MISC::_0xDE2C3B74D2B3705C(iParam0, 0);
}

void func_697(var uParam0, bool bParam1)
{
	*uParam0 = TASK::ADD_COVER_POINT(uParam0->f_1, uParam0->f_4, uParam0->f_6, uParam0->f_5, uParam0->f_7, bParam1);
}

bool func_698(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!*iParam1)
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
		*iParam1 = 1;
	}
	if ((TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503, true) == 1 && TASK::GET_SEQUENCE_PROGRESS(iParam0) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503, true) != 1)
	{
		return true;
	}
	return false;
}

void func_699(var uParam0, char* sParam1, bool bParam2, char[4] cParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(*uParam0, sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, sParam1, bParam2, false);
	}
}

bool func_700(int iParam0, vector3 vParam1, var uParam4, float fParam5, int iParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		*uParam4 = __LIB_3__::func_326(iParam0, vParam1, iParam6, iParam7);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		return __LIB_6__::func_696(*uParam4, fParam5);
	}
	return false;
}

bool func_701(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_199)
	{
		if (!bParam3 || __LIB_2__::func_1((iParam1[iVar1 /*9*/])->f_5, 0, 1))
		{
			fVar0 = __LIB_0__::func_94((iParam1[iVar1 /*9*/])->f_5, Global_36, 1);
			if (fVar0 < fParam2)
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

int func_702(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!bParam2 || __LIB_2__::func_1((iParam0[iVar0 /*9*/])->f_5, 0, 1))
		{
			if ((iParam0[iVar0 /*9*/])->f_5 == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_703(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return false;
	}
	__LIB_0__::func_68(iParam0, 0, 0);
	if (__LIB_0__::func_724(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, 0);
		if (iVar0 != 0)
		{
			return OBJECT::_0x0943113E02322164(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0), iParam1);
		}
	}
	return false;
}

int func_704(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	if (iParam0->f_201 > 0)
	{
		PED::_0xED9582B3DA8F02B4(iParam0->f_201);
	}
	else
	{
		PED::_0xED9582B3DA8F02B4(iParam0->f_199);
	}
	if (__LIB_9__::func_635(&(iParam0->f_1), uParam1, uParam2, sParam3, sParam4) && PED::_0x5E420FF293EE5472())
	{
		return 1;
	}
	return 0;
}

var func_705(var uParam0, int iParam1)
{
	*uParam0 = __LIB_1__::func_268(Global_1888801[iParam1 /*35*/]);
	if (*uParam0 >= 4)
	{
		*uParam0 = 3;
	}
	return *uParam0;
}

int func_706(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	vVar0 = { __LIB_3__::func_448(iParam1) };
	vVar3 = { __LIB_3__::func_448(iParam2) };
	return __LIB_7__::func_433(uParam0, vVar0, vVar3, iParam2);
}

void func_707(int iParam0, int iParam1)
{
	__LIB_1__::func_948(iParam0, 1, 0, 0, 1, 0, 0, 0);
}

void func_708(var uParam0, char* sParam1, var uParam2, int iParam3, vector3 vParam4)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_5, 518218985, true) != 1)
		{
			if (!__LIB_9__::func_604(uParam0))
			{
				if (!__LIB_0__::func_86(vParam4))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::_TASK_FLEE_FROM_PED(0, Global_35, vParam4, -1f, -1, 5120, 1077936128 /* Float: 3f */, 0);
					__LIB_1__::func_474(uParam0->f_5, &iVar0, 0, 0, 1, 1);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					*uParam2 = 1;
				}
				if (!*uParam2)
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_2__::func_303(uParam0->f_5, Global_35, sParam1, "", 70f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					*uParam2 = 1;
				}
			}
			PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
		}
	}
}

bool func_709(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!__LIB_2__::func_136(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_9__::func_689(fParam0))
	{
		return false;
	}
	return true;
}

void func_710(var uParam0)
{
	if (__LIB_0__::func_139(*uParam0))
	{
		__LIB_1__::func_196(uParam0, 1, 1);
	}
}

void func_711(var uParam0)
{
	switch (uParam0->f_205)
	{
		case 16:
			break;
		case 79:
			break;
		default:
			break;
	}
}

void func_712(var uParam0)
{
	uParam0->f_136.f_9 = { 0f, 0f, 0f };
	uParam0->f_136.f_12 = 1;
	uParam0->f_136.f_13 = 30f;
	uParam0->f_136.f_14 = 100f;
	uParam0->f_136.f_15 = -1;
	uParam0->f_136.f_16 = 1500;
	uParam0->f_136.f_17 = 1000;
	uParam0->f_136.f_6 = 25f;
}

void func_713(var uParam0)
{
	int iVar0;
	struct<2> Var1;
	iVar0 = 0;
	switch (uParam0->f_205)
	{
		case 79:
			iVar0 = joaat("INBRED");
			break;
		case 16:
			if (!__LIB_0__::func_181())
			{
				iVar0 = joaat("ODRISCOLLS");
			}
			else
			{
				iVar0 = joaat("RANCHERS");
			}
			break;
		case 9:
			iVar0 = joaat("EX_CONFED");
			break;
		case 36:
			iVar0 = joaat("ODRISCOLLS");
			break;
		case 125:
			iVar0 = joaat("BANDITOS");
			break;
		case 127:
			iVar0 = joaat("BANDITOS");
			break;
		default:
			uParam0->f_200 = 0;
			return;
	}
	if (iVar0 != 0)
	{
		Var1 = { __LIB_0__::func_38(joaat("KILLED"), iVar0) };
		STATS::STAT_ID_GET_INT(&Var1, &(uParam0->f_200));
	}
}

void func_714(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 4096);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 4096);
	}
}

void func_715(int iParam0, var uParam1, bool bParam2)
{
	__LIB_2__::func_766(uParam1, Local_50.f_215, 1);
}

bool func_716(int iParam0, var uParam1, var uParam2, float fParam3)
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
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
								*uParam2 = 2;
								__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
						*uParam2 = 4;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
				*uParam2 = 131072;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

void func_717(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_8__::func_556(iParam0);
}

void func_718(int iParam0, int iParam1)
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(iParam0, 1, iParam1, 0, 0);
			}
		}
	}
}

bool func_719(int iParam0)
{
	if (!PED::IS_PED_FACING_PED(Global_35, iParam0, 80f) && ENTITY::GET_ENTITY_SPEED(Global_35) >= 1f)
	{
		return true;
	}
	return false;
}

Vector3 func_720(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;
	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return __LIB_3__::func_857(vParam0, fParam3, fParam4);
}

void func_721(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	__LIB_3__::func_583(iParam0, vParam1, 0f, 0f, 0f, 0f, 0f, 0f, uParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_722(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	bool bVar0;
	__LIB_9__::func_585(128);
	uParam0->f_205 = iParam1;
	bVar0 = __LIB_0__::func_51(&(uParam0->f_5), 1048576);
	uParam0->f_202 = { __LIB_9__::func_606(uParam0->f_205, bVar0) };
	uParam0->f_187 = MISC::GET_RANDOM_INT_IN_RANGE(7502, 10000);
	if (uParam0->f_205 == 16)
	{
		__LIB_0__::func_568(uParam0->f_202, 120f, 0);
	}
	else
	{
		__LIB_0__::func_568(uParam0->f_202, 80f, 0);
	}
	__LIB_9__::func_607(uParam0, 1);
	__LIB_6__::func_905(&(uParam0->f_155));
	__LIB_4__::func_228(&(uParam0->f_155));
	__LIB_9__::func_261(&(uParam0->f_155));
	__LIB_1__::func_398(&(uParam0->f_155), 1);
	__LIB_3__::func_407(&(uParam0->f_155), BUILTIN::TO_FLOAT(iParam3));
	__LIB_2__::func_906(&(uParam0->f_155), 50);
	__LIB_1__::func_975(&(uParam0->f_155), 8f);
	__LIB_9__::func_586(sParam2);
	__LIB_9__::func_711(uParam0);
	if (!__LIB_1__::func_200(65))
	{
		__LIB_0__::func_11(uParam0);
	}
	__LIB_9__::func_712(uParam0);
	__LIB_9__::func_713(uParam0);
	__LIB_0__::func_928(&(uParam0->f_38), Global_35, "ARTHUR", 0);
}

bool func_723(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_5__::func_686(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_4__::func_237(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_5__::func_678(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_5__::func_683(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_724(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4)
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
	__LIB_1__::func_748(&(iParam1->f_214), 1, 1);
	__LIB_9__::func_601(uParam2);
	if (iParam1->f_201 > 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		HUD::_TEXT_DATABASE_DELETE(sParam4);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_6__::func_726(&uVar2, 0);
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

void func_725(int iParam0)
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
				if (__LIB_1__::func_62(-525676072, &iVar1))
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
			__LIB_1__::func_775(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		__LIB_9__::func_717(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_726(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_9__::func_717(50);
			}
			else
			{
				__LIB_9__::func_717(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_9__::func_717(51);
			}
			else
			{
				__LIB_9__::func_717(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
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
			__LIB_9__::func_717(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

bool func_727()
{
	return __LIB_4__::func_54(2, 16777216);
}

void func_728(bool bParam0, bool bParam1, bool bParam2)
{
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("CFJ_FATHER"), bParam0);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("CFJ_SON"), bParam1);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("CFJ_SON_OLDER"), bParam2);
}

void func_729(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_770(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9422[iParam0 /*7*/].f_5 = (Global_40.f_9422[iParam0 /*7*/].f_5 - (Global_40.f_9422[iParam0 /*7*/].f_5 && iParam1));
}

void func_730(int iParam0)
{
	Global_40.f_9422[iParam0 /*7*/] = __LIB_0__::func_23();
}

void func_731(int iParam0)
{
	iLocal_20 = iParam0;
}

void func_732(int iParam0)
{
	Global_40.f_9422[iParam0 /*7*/].f_1 = __LIB_0__::func_23();
}

void func_733(int iParam0)
{
	iLocal_57 = iParam0;
}

void func_734(int iParam0)
{
	iLocal_76 = iParam0;
}

void func_735(int iParam0)
{
	iLocal_21 = iParam0;
}

int func_736()
{
	return joaat("S_ABE_CABINET01X");
}

Vector3 func_737()
{
	return 1787.445f, -83.474f, 57.1635f;
}

int func_738()
{
	return joaat("PROP_PLAYER_HIDDEN_CABINET");
}

void func_739(int iParam0)
{
	iLocal_29 = iParam0;
}

void func_740(int iParam0)
{
	iLocal_31 = iParam0;
}

void func_741(int iParam0)
{
	iLocal_32 = iParam0;
}

void func_742(int iParam0)
{
	iLocal_30 = iParam0;
}

void func_743(int iParam0)
{
	iLocal_34 = iParam0;
}

void func_744(int iParam0)
{
	iLocal_36 = iParam0;
}

void func_745(int iParam0)
{
	iLocal_47 = iParam0;
}

bool func_746()
{
	return __LIB_0__::func_770(1, 131072);
}

bool func_747()
{
	return __LIB_4__::func_54(1, 4096);
}

bool func_748()
{
	return __LIB_4__::func_54(1, 2048);
}

bool func_749(int iParam0)
{
	if (iParam0 == Global_1911772 && TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return true;
	}
	return false;
}

Vector3 func_750()
{
	return -392.2639f, 1594.13f, 197.9412f;
}

int func_751()
{
	return joaat("WORLD_HUMAN_SMOKE");
}

float func_752(var uParam0)
{
	return uParam0->f_206;
}

void func_753(int iParam0)
{
	iLocal_75 = iParam0;
}

bool func_754(var uParam0)
{
	if (uParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

void func_755(int iParam0)
{
	iLocal_37 = iParam0;
}

bool func_756(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	return false;
}

bool func_757()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return false;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_SKIP_CUTSCENE")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_SKIP_CUTSCENE")))
	{
		return true;
	}
	return false;
}

void func_758(int iParam0)
{
	iLocal_28 = iParam0;
}

void func_759(int iParam0)
{
	iLocal_51 = iParam0;
}

bool func_760()
{
	return __LIB_0__::func_756(1, 4194304);
}

Vector3 func_761()
{
	return -412.5212f, 1712.71f, 215.1205f;
}

int func_762()
{
	return 3;
}

var func_763(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8)
{
	return TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(uParam0, iParam1, vParam2, iParam5, iParam6, iParam7, iParam8);
}

bool func_764(int iParam0, int iParam1)
{
	return (Global_1392240.f_1[iParam0 /*18*/].f_17 && iParam1) != 0;
}

bool func_765(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar25;
	*iParam3 = 0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SELL_PRICE(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (!bParam4)
	{
	}
	*iParam3 = Var0.f_3;
	if (*uParam2 < Var0.f_3)
	{
		return false;
	}
	iVar25 = 0;
	while (iVar25 < Var0.f_3)
	{
		if (!bParam4)
		{
		}
		*(uParam2[iVar25 /*2*/]) = { Var0.f_4[iVar25 /*2*/] };
		iVar25++;
	}
	return true;
}

bool func_766()
{
	return __LIB_0__::func_756(1, 2097152);
}

Vector3 func_767()
{
	return -418.7617f, 1728.813f, 216.2592f;
}

bool func_768(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 7);
}

int func_769(int iParam0, int iParam1, int iParam2, int iParam3)
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
					(*iParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*iParam1)[iVar5])
				{
					(*iParam0)[iVar3] = iVar1;
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

void func_770(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_756(iParam0, iParam1))
	{
		return;
	}
	Global_1392240.f_1[iParam0 /*18*/].f_14 = (Global_1392240.f_1[iParam0 /*18*/].f_14 - (Global_1392240.f_1[iParam0 /*18*/].f_14 && iParam1));
}

void func_771(int iParam0, int iParam1)
{
	if (!__LIB_4__::func_54(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9422[iParam0 /*7*/].f_4 = (Global_40.f_9422[iParam0 /*7*/].f_4 - (Global_40.f_9422[iParam0 /*7*/].f_4 && iParam1));
}

void func_772(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 32768);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 32768);
	}
}

void func_773(float fParam0)
{
	if (!__LIB_0__::func_899(fParam0))
	{
	}
	if (__LIB_0__::func_901(fParam0))
	{
		fParam0->f_1 = (__LIB_0__::func_36() - fParam0->f_2);
		fParam0->f_2 = 0f;
		__LIB_0__::func_785(fParam0, 2);
	}
}

void func_774(float fParam0)
{
	if (!__LIB_0__::func_899(fParam0))
	{
	}
	if (!__LIB_0__::func_901(fParam0))
	{
		fParam0->f_2 = (__LIB_0__::func_36() - fParam0->f_1);
		__LIB_0__::func_784(fParam0, 2);
	}
}

bool func_775(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		switch (*uParam4)
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
					*uParam4 = 1;
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
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, fParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_1__::func_474(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
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
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, fParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_1__::func_474(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
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
								*uParam4 = 3;
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

Vector3 func_776(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vVar0 = { __LIB_3__::func_114(iParam0, iParam1, fParam2) };
	return ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + vVar0;
}

void func_777(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
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
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var0, iParam8, fParam9, fParam10, fParam11, fParam13, fParam12);
	}
	else if (!__LIB_0__::func_138(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var11, iParam8, fParam9, fParam10, fParam11, fParam13, fParam12);
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

void func_778(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	int iVar0;
	Global_1945938[iParam0 /*18*/].f_4 = iParam1;
	Global_1945938[iParam0 /*18*/] = iParam4;
	Global_1945938[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945938[iParam0 /*18*/].f_2 = iParam5;
	Global_1945938[iParam0 /*18*/].f_6 = { vParam6 };
	Global_1945938[iParam0 /*18*/].f_9 = fParam9;
	Global_1945938[iParam0 /*18*/].f_10 = iParam10;
	Global_1945938[iParam0 /*18*/].f_11 = iParam11;
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_5 = iParam12;
	Global_1945938[iParam0 /*18*/].f_1 = 2;
	Global_1945938[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, bParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, bParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1945938[iParam0 /*18*/].f_3 = iVar0;
	__LIB_0__::func_629(iParam0, 1);
	__LIB_0__::func_185(iParam0, 1);
	__LIB_0__::func_186(iParam0, 128);
}

void func_779(int iParam0, int iParam1)
{
	if (__LIB_0__::func_27(iParam0->f_3, iParam1))
	{
		__LIB_1__::func_681(&(iParam0->f_3), iParam1);
	}
}

void func_780(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_27(iParam0->f_3, iParam1))
	{
		__LIB_1__::func_683(&(iParam0->f_3), iParam1);
	}
}

bool func_781(int iParam0, int* iParam1, var uParam2)
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
				__LIB_5__::func_684(uParam2, 0, 0, 1, 0);
				__LIB_0__::func_7(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (__LIB_0__::func_27(iParam1->f_10, 1))
		{
			__LIB_5__::func_682(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			__LIB_0__::func_8(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_782(int iParam0, var uParam1, var uParam2, float fParam3)
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
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
								*uParam2 = 2;
								__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
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
						*uParam2 = 4;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (__LIB_9__::func_660(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 131072;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_783(int iParam0)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return true;
	}
	return __LIB_1__::func_25(Global_1392626[iParam0 /*32*/].f_3, 1);
}

bool func_784(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
			__LIB_7__::func_449(iParam0, 1, 0, bParam2, iParam1);
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

bool func_785(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && __LIB_1__::func_800(iParam0))
		{
			__LIB_7__::func_449(iParam0, iParam1, 1, &bParam2, iParam3);
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

void func_786(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (iParam0 == 0 && __LIB_0__::func_13(32768))
	{
		return;
	}
	if (!__LIB_0__::func_13(32768))
	{
		__LIB_9__::func_388(1, bParam1);
	}
	MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
	MISC::_COPY_MEMORY(&(Global_2621440[iParam0 /*12066*/]), &Global_40, 12066);
	MISC::_COPY_MEMORY(&(Global_2645573[iParam0 /*5398*/]), &Global_12106, 5398);
	MISC::_COPY_MEMORY(&(Global_2656370[iParam0 /*3206*/]), &Global_17504, 3206);
	MISC::_COPY_MEMORY(&(Global_2662783[iParam0 /*2408*/]), &Global_20710, 2408);
	MISC::_COPY_MEMORY(&(Global_2667600[iParam0 /*1769*/]), &Global_23118, 1769);
	MISC::_COPY_MEMORY(&(Global_2671139[iParam0 /*1909*/]), &Global_24887, 1909);
	MISC::_COPY_MEMORY(&(Global_2674958[iParam0 /*777*/]), &Global_26796, 777);
	MISC::_COPY_MEMORY(&(Global_2676513[iParam0 /*4501*/]), &Global_27573, 4501);
	MISC::_COPY_MEMORY(&(Global_2685516[iParam0 /*4234*/]), &Global_32074, 4234);
	if (__LIB_0__::func_13(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = __LIB_0__::func_23();
	}
}

int func_787(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam3 && ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
	{
		return 0;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
	return 1;
}

bool func_788(int iParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
		return false;
	}
	return true;
}

void func_789(int iParam0)
{
	iLocal_126 = iParam0;
}

void func_790(int iParam0)
{
	if (iParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(iParam0, false);
	}
}

bool func_791(int iParam0)
{
	if (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return false;
	}
	return true;
}

bool func_792(int iParam0, char[4] cParam1, float fParam2, int iParam3)
{
	float fVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return iParam3;
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
	{
		return iParam3;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0);
	if (fVar0 >= fParam2)
	{
		return true;
	}
	return false;
}

void func_793(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, bParam3);
}

void func_794(int iParam0, char* sParam1, bool bParam2, char* sParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iParam0, sParam1) == bParam2)
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam1, bParam2, false);
}

Vector3 func_795(int iParam0)
{
	vector3 vVar0;
	if (iParam0 == 1)
	{
		vVar0 = { -112.7718f, -14.35461f, 94.83463f };
		return vVar0;
	}
	else if (iParam0 == 2)
	{
		vVar0 = { 702.2569f, -1228.507f, 44.13517f };
		return vVar0;
	}
	return vVar0;
}

Vector3 func_796(int iParam0)
{
	vector3 vVar0;
	if (iParam0 == 1)
	{
		vVar0 = { -115.7837f, -19.4531f, 94.93417f };
		return vVar0;
	}
	else if (iParam0 == 2)
	{
		vVar0 = { 708.1083f, -1226.013f, 44.2366f };
		return vVar0;
	}
	return vVar0;
}

bool func_797()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_15))
	{
		return true;
	}
	iLocal_15 = __LIB_0__::func_271(2);
	return false;
}

void func_798(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!__LIB_2__::func_1(iParam2, 0, 1))
		{
			return;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, sParam1, iParam2, 0);
}

int func_799(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
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
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	__LIB_0__::func_568(vParam1, fParam4, 0);
	TASK::CLEAR_PED_TASKS(iParam0, true, false);
	iVar0 = joaat("PROP_HITCHINGPOST");
	iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam1, iVar0, fParam4, 1, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		TASK::_TASK_USE_SCENARIO_POINT(iParam0, iVar1, 0, -1, true, bParam5, iVar0, false, -1f, false);
	}
	else
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
	return 1;
}

void func_800(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		Global_43616 = ITEMSET::CREATE_ITEMSET(false);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_43616))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_43616);
	}
}

void func_801(char* sParam0, int iParam1)
{
	__LIB_7__::func_911(&(sParam0->f_35), iParam1);
}

void func_802(int iParam0)
{
	Global_1914296.f_22 = (Global_1914296.f_22 - (Global_1914296.f_22 && iParam0));
}

int func_803()
{
	if (Global_40.f_1095 <= -1 || Global_40.f_1095 >= 7)
	{
		Global_40.f_1095 = 0;
	}
	return Global_40.f_1095;
}

void func_804(int iParam0)
{
	Global_1914296.f_22 = (Global_1914296.f_22 || iParam0);
}

void func_805(int iParam0)
{
	if (!__LIB_4__::func_233(iParam0))
	{
		Global_1392040.f_1 = (Global_1392040.f_1 || iParam0);
	}
}

int func_806(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (iParam1 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 3;
	}
	else
	{
		iVar1 = PED::_GET_PED_QUALITY(iParam0);
		switch (iVar1)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 1;
				break;
			case -1:
			case 2:
				iVar0 = 2;
				break;
		}
	}
	return iVar0;
}

bool func_807(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_CRAB_01"):
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_SONGBIRD_01"):
		case joaat("A_C_CHIPMUNK_01"):
		case joaat("A_C_ORIOLE_01"):
		case joaat("A_C_ROBIN_01"):
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_SPARROW_01"):
		case joaat("A_C_FROGBULL_01"):
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_CEDARWAXWING_01"):
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_CROW_01"):
		case joaat("A_C_PIGEON"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
		case joaat("A_C_WOODPECKER_01"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
		case joaat("A_C_BAT_01"):
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHPERCH_01_SM"):
		case joaat("A_C_WOODPECKER_02"):
		case joaat("A_C_RAT_01"):
		case joaat("A_C_SQUIRREL_01"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
		case joaat("A_C_TOAD_01"):
		case joaat("A_C_BLUEJAY_01"):
		case joaat("A_C_CAROLINAPARAKEET_01"):
		case joaat("A_C_CARDINAL_01"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
		case joaat("A_C_QUAIL_01"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_808(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (__LIB_0__::func_192(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

bool func_809(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

void func_810(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	iVar4 = ENTITY::_0x59B57C4B06531E1E(vVar1, 5f, iVar0, 3);
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		if (!ENTITY::IS_AN_ENTITY(iVar6))
		{
		}
		else
		{
			iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
			{
			}
			else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar7, iParam0))
			{
			}
			else if (TASK::_0x0CCFE72B43C9CF96(iVar7))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				iVar8 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar6);
				OBJECT::DELETE_OBJECT(&iVar8);
			}
		}
		iVar5++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

int func_811(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (__LIB_0__::func_192(iParam0, -839724752))
	{
		return 1;
	}
	return 0;
}

int func_812(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return joaat("BREED_MANGY_BACKUP");
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("BREED_AMERICANPAINT_OVERO");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("BREED_AMERICANPAINT_TOBIANO");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("BREED_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("BREED_AMERICANPAINT_GREYOVERO");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("BREED_AMERICANSTANDARDBRED_BLACK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("BREED_ANDALUSIAN_DARKBAY");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("BREED_ANDALUSIAN_ROSEGRAY");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("BREED_ANDALUSIAN_PERLINO");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("BREED_APPALOOSA_BLANKET");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("BREED_APPALOOSA_LEOPARDBLANKET");
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
			return joaat("BREED_APPALOOSA_FEWSPOTTED_PC");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("BREED_APPALOOSA_BROWNLEOPARD");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("BREED_APPALOOSA_LEOPARD");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("BREED_ARABIAN_BLACK");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("BREED_ARABIAN_REDCHESTNUT");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
			return joaat("BREED_ARABIAN_REDCHESTNUT_PC");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("BREED_ARABIAN_ROSEGREYBAY");
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return joaat("BREED_ARABIAN_WARPEDBRINDLE_PC");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("BREED_ARABIAN_WHITE");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("BREED_ARDENNES_BAYROAN");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("BREED_ARDENNES_STRAWBERRYROAN");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("BREED_ARDENNES_IRONGREYROAN");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("BREED_BELGIAN_BLONDCHESTNUT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("BREED_BELGIAN_MEALYCHESTNUT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("BREED_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("BREED_KENTUCKYSADDLE_BLACK");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return joaat("BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("BREED_KENTUCKYSADDLE_GREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("BREED_KENTUCKYSADDLE_SILVERBAY");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("BREED_MORGAN_BAY");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("BREED_MORGAN_BAYROAN");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("BREED_MORGAN_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
			return joaat("BREED_MORGAN_LIVERCHESTNUT_PC");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("BREED_MORGAN_PALOMINO");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("BREED_MUSTANG_GRULLODUN");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("BREED_MUSTANG_WILDBAY");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("BREED_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("BREED_NOKOTA_BLUEROAN");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("BREED_NOKOTA_WHITEROAN");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("BREED_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("BREED_SHIRE_DARKBAY");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("BREED_SHIRE_LIGHTGREY");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("BREED_SUFFOLKPUNCH_SORREL");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("BREED_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("BREED_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return joaat("BREED_TENNESSEEWALKER_GOLDPALOMINO_PC");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("BREED_TENNESSEEWALKER_REDROAN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("BREED_TENNESSEEWALKER_FLAXENROAN");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("BREED_THOROUGHBRED_BLOODBAY");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("BREED_THOROUGHBRED_DAPPLEGREY");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("BREED_THOROUGHBRED_BRINDLE");
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("BREED_THOROUGHBRED_BLACKCHESTNUT");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("BREED_TURKOMAN_DARKBAY");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("BREED_TURKOMAN_GOLD");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("BREED_TURKOMAN_SILVER");
		case joaat("A_C_DONKEY_01"):
			return joaat("BREED_DONKEY");
		case joaat("A_C_HORSEMULE_01"):
			return joaat("BREED_MULE");
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return joaat("BREED_MULE_PAINTED");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("BREED_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("BREED_ARABIAN_GREY");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("BREED_MUSTANG_GOLDENDUN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY"):
			return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
		case joaat("A_C_HORSE_SHIRE_RAVENBLACK"):
			return joaat("BREED_SHIRE_RAVENBLACK");
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return joaat("BREED_BUELL_WARVETS");
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
			return joaat("BREED_JOHN_ENDLESSSUMMER");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return joaat("BREED_MURFREEBROOD_MANGE_01");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return joaat("BREED_MURFREEBROOD_MANGE_02");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return joaat("BREED_MURFREEBROOD_MANGE_03");
		case joaat("A_C_HORSE_WINTER02_01"):
			return joaat("BREED_WINTER02_01");
		case joaat("A_C_HORSE_EAGLEFLIES"):
			return joaat("BREED_EAGLEFLIES");
		case joaat("A_C_HORSE_GANG_BILL"):
			return joaat("BREED_GANG_BILL");
		case joaat("A_C_HORSE_GANG_CHARLES"):
			return joaat("BREED_GANG_CHARLES");
		case joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return joaat("BREED_GANG_CHARLES_ENDLESSSUMMER");
		case joaat("A_C_HORSE_GANG_DUTCH"):
			return joaat("BREED_GANG_DUTCH");
		case joaat("A_C_HORSE_GANG_HOSEA"):
			return joaat("BREED_GANG_HOSEA");
		case joaat("A_C_HORSE_GANG_JAVIER"):
			return joaat("BREED_GANG_JAVIER");
		case joaat("A_C_HORSE_GANG_JOHN"):
			return joaat("BREED_GANG_JOHN");
		case joaat("A_C_HORSE_GANG_KAREN"):
			return joaat("BREED_GANG_KAREN");
		case joaat("A_C_HORSE_GANG_KIERAN"):
			return joaat("BREED_GANG_KIERAN");
		case joaat("A_C_HORSE_GANG_LENNY"):
			return joaat("BREED_GANG_LENNY");
		case joaat("A_C_HORSE_GANG_MICAH"):
			return joaat("BREED_GANG_MICAH");
		case joaat("A_C_HORSE_GANG_SADIE"):
			return joaat("BREED_GANG_SADIE");
		case joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
			return joaat("BREED_GANG_SADIE_ENDLESSSUMMER");
		case joaat("A_C_HORSE_GANG_SEAN"):
			return joaat("BREED_GANG_SEAN");
		case joaat("A_C_HORSE_GANG_TRELAWNEY"):
			return joaat("BREED_GANG_TRELAWNEY");
		case joaat("A_C_HORSE_GANG_UNCLE"):
			return joaat("BREED_GANG_UNCLE");
		case joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
			return joaat("BREED_GANG_UNCLE_ENDLESSSUMMER");
		default:
			break;
	}
	return 0;
}

int func_813(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return joaat("A_C_HORSE_AMERICANPAINT_OVERO");
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return joaat("A_C_HORSE_AMERICANPAINT_TOBIANO");
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO");
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return joaat("A_C_HORSE_ANDALUSIAN_DARKBAY");
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY");
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return joaat("A_C_HORSE_ANDALUSIAN_PERLINO");
		case joaat("BREED_APPALOOSA_BLANKET"):
			return joaat("A_C_HORSE_APPALOOSA_BLANKET");
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET");
		case joaat("BREED_APPALOOSA_FEWSPOTTED_PC"):
			return joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC");
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD");
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return joaat("A_C_HORSE_APPALOOSA_LEOPARD");
		case joaat("BREED_ARABIAN_BLACK"):
			return joaat("A_C_HORSE_ARABIAN_BLACK");
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return joaat("A_C_HORSE_ARABIAN_REDCHESTNUT");
		case joaat("BREED_ARABIAN_REDCHESTNUT_PC"):
			return joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC");
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY");
		case joaat("BREED_ARABIAN_WARPEDBRINDLE_PC"):
			return joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC");
		case joaat("BREED_ARABIAN_WHITE"):
			return joaat("A_C_HORSE_ARABIAN_WHITE");
		case joaat("BREED_ARDENNES_BAYROAN"):
			return joaat("A_C_HORSE_ARDENNES_BAYROAN");
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN");
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return joaat("A_C_HORSE_ARDENNES_IRONGREYROAN");
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT");
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT");
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
		case joaat("BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC");
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("BREED_MORGAN_BAY"):
			return joaat("A_C_HORSE_MORGAN_BAY");
		case joaat("BREED_MORGAN_BAYROAN"):
			return joaat("A_C_HORSE_MORGAN_BAYROAN");
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
		case joaat("BREED_MORGAN_LIVERCHESTNUT_PC"):
			return joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC");
		case joaat("BREED_MORGAN_PALOMINO"):
			return joaat("A_C_HORSE_MORGAN_PALOMINO");
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return joaat("A_C_HORSE_MUSTANG_GRULLODUN");
		case joaat("BREED_MUSTANG_WILDBAY"):
			return joaat("A_C_HORSE_MUSTANG_WILDBAY");
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return joaat("A_C_HORSE_NOKOTA_BLUEROAN");
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return joaat("A_C_HORSE_NOKOTA_WHITEROAN");
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("BREED_SHIRE_DARKBAY"):
			return joaat("A_C_HORSE_SHIRE_DARKBAY");
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return joaat("A_C_HORSE_SHIRE_LIGHTGREY");
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL");
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("BREED_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC");
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN");
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY");
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY");
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return joaat("A_C_HORSE_THOROUGHBRED_BRINDLE");
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT");
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return joaat("A_C_HORSE_TURKOMAN_DARKBAY");
		case joaat("BREED_TURKOMAN_GOLD"):
			return joaat("A_C_HORSE_TURKOMAN_GOLD");
		case joaat("BREED_TURKOMAN_SILVER"):
			return joaat("A_C_HORSE_TURKOMAN_SILVER");
		case joaat("BREED_DONKEY"):
			return joaat("A_C_DONKEY_01");
		case joaat("BREED_MULE"):
			return joaat("A_C_HORSEMULE_01");
		case joaat("BREED_MULE_PAINTED"):
			return joaat("A_C_HORSEMULEPAINTED_01");
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN");
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("BREED_ARABIAN_GREY"):
			return joaat("A_C_HORSE_ARABIAN_GREY");
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return joaat("A_C_HORSE_MUSTANG_GOLDENDUN");
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return joaat("A_C_HORSE_SHIRE_RAVENBLACK");
		case joaat("BREED_BUELL_WARVETS"):
			return joaat("A_C_HORSE_BUELL_WARVETS");
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return joaat("A_C_HORSE_MURFREEBROOD_MANGE_02");
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
		case joaat("BREED_WINTER02_01"):
			return joaat("A_C_HORSE_WINTER02_01");
		case joaat("BREED_EAGLEFLIES"):
			return joaat("A_C_HORSE_EAGLEFLIES");
		case joaat("BREED_GANG_BILL"):
			return joaat("A_C_HORSE_GANG_BILL");
		case joaat("BREED_GANG_CHARLES"):
			return joaat("A_C_HORSE_GANG_CHARLES");
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER");
		case joaat("BREED_GANG_DUTCH"):
			return joaat("A_C_HORSE_GANG_DUTCH");
		case joaat("BREED_GANG_HOSEA"):
			return joaat("A_C_HORSE_GANG_HOSEA");
		case joaat("BREED_GANG_JAVIER"):
			return joaat("A_C_HORSE_GANG_JAVIER");
		case joaat("BREED_GANG_JOHN"):
			return joaat("A_C_HORSE_GANG_JOHN");
		case joaat("BREED_GANG_KAREN"):
			return joaat("A_C_HORSE_GANG_KAREN");
		case joaat("BREED_GANG_KIERAN"):
			return joaat("A_C_HORSE_GANG_KIERAN");
		case joaat("BREED_GANG_LENNY"):
			return joaat("A_C_HORSE_GANG_LENNY");
		case joaat("BREED_GANG_MICAH"):
			return joaat("A_C_HORSE_GANG_MICAH");
		case joaat("BREED_GANG_SADIE"):
			return joaat("A_C_HORSE_GANG_SADIE");
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER");
		case joaat("BREED_GANG_SEAN"):
			return joaat("A_C_HORSE_GANG_SEAN");
		case joaat("BREED_GANG_TRELAWNEY"):
			return joaat("A_C_HORSE_GANG_TRELAWNEY");
		case joaat("BREED_GANG_UNCLE"):
			return joaat("A_C_HORSE_GANG_UNCLE");
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER");
		case joaat("BREED_MANGY_BACKUP"):
			return joaat("A_C_HORSE_MP_MANGY_BACKUP");
		default:
			break;
	}
	return 0;
}

void func_814(int iParam0, int iParam1, int iParam2)
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
	iParam2 = __LIB_0__::func_309(iParam2, 0, 100);
	if (__LIB_9__::func_368(iParam1, &iVar0))
	{
		ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, iVar0, iParam2);
	}
}

int func_815(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	__LIB_7__::func_642(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, iVar0, iVar1);
	return uVar4;
}

int func_816()
{
	return 6;
}

void func_817(int iParam0)
{
	if (__LIB_4__::func_233(iParam0))
	{
		Global_1392040.f_1 = (Global_1392040.f_1 - (Global_1392040.f_1 && iParam0));
	}
}

int func_818(var uParam0)
{
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			return 1;
	}
	return 0;
}

void func_819(int iParam0)
{
	__LIB_1__::func_936(iParam0, 134217728);
}

void func_820(int iParam0, int iParam1, int iParam2)
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
	iParam2 = __LIB_0__::func_309(iParam2, 0, 100);
	if (__LIB_8__::func_622(iParam1, &iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0, iParam2);
	}
}

void func_821(var uParam0)
{
	__LIB_8__::func_920(&(uParam0->f_7375));
}

void func_822(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = __LIB_0__::func_398(7);
	}
	else
	{
		iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	}
	__LIB_7__::func_594(iVar0, iParam0, iParam1);
}

bool func_823(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { __LIB_0__::func_949(0) };
	Var0.f_4 = 724026534;
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return __LIB_0__::func_939(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

void func_824(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_4__::func_948(uParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_9__::func_328(&(uParam0->f_5147), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_9__::func_329(&(uParam0->f_5147));
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_5147[iVar0 /*4*/] = iParam1;
	uParam0->f_5147[iVar0 /*4*/].f_3 = (uParam0->f_5147[iVar0 /*4*/].f_3 || iParam2);
}

void func_825(var uParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, float fParam6, bool bParam7)
{
	int iVar0;
	if (!__LIB_5__::func_459(iParam3, __LIB_4__::func_939(uParam0)) && !__LIB_5__::func_459(iParam3, __LIB_5__::func_475(uParam0)))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam2))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(cParam1))
	{
		return;
	}
	iVar0 = __LIB_4__::func_968(&(uParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_460(&(uParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam2))
	{
		*uParam2 = ANIMSCENE::_CREATE_ANIM_SCENE(cParam1, iParam4, sParam5, false, true);
	}
	uParam0->f_1126[iVar0 /*67*/].f_1 = *uParam2;
	uParam0->f_1126[iVar0 /*67*/] = cParam1;
	uParam0->f_1126[iVar0 /*67*/].f_3 = (uParam0->f_1126[iVar0 /*67*/].f_3 || iParam3);
	uParam0->f_1126[iVar0 /*67*/].f_65 = fParam6;
	uParam0->f_1126[iVar0 /*67*/].f_66 = bParam7;
	if (!bParam7)
	{
		__LIB_0__::func_7(&(uParam0->f_1126[iVar0 /*67*/].f_2), 4);
	}
}

void func_826(int iParam0, float fParam1)
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
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_821(iParam0);
	iVar1 = __LIB_0__::func_819(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iVar1 >= iVar2)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = (Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 + fParam1);
	iVar3 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	__LIB_5__::func_986(iVar3, BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1));
	iVar4 = __LIB_5__::func_987(iVar3);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar4;
	PED::_0xA69899995997A63B(iVar3, iVar4);
	__LIB_1__::func_17(iVar4);
	if (iVar4 > iVar1)
	{
		__LIB_6__::func_495(iParam0, iVar4);
		if (iParam0 == 6)
		{
			if (iVar4 == 1)
			{
				if (__LIB_0__::func_293(42))
				{
					__LIB_1__::func_240(19, 1);
				}
				else
				{
					__LIB_1__::func_240(20, 1);
				}
			}
		}
		if (iVar4 == 2)
		{
			__LIB_1__::func_240(21, 1);
		}
		else if (iVar4 == 3)
		{
			__LIB_1__::func_240(22, 1);
		}
		else if (iVar4 == 4)
		{
			__LIB_1__::func_240(23, 1);
		}
		if (iVar4 >= 2)
		{
			iVar5 = __LIB_6__::func_95(iVar3);
			iVar6 = __LIB_1__::func_976();
			__LIB_6__::func_498(iVar6, iVar5 + 1);
			iVar7 = __LIB_6__::func_96(iVar3);
			iVar8 = __LIB_0__::func_16();
			__LIB_6__::func_498(iVar8, iVar7 + 1);
		}
		COMPENDIUM::COMPENDIUM_HORSE_BONDING(iVar3, iVar4);
		__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSE_BOND_INCREASED")), 1);
		if (iVar4 == iVar2)
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSES_REACHED_MAX_BOND")), 1);
		}
		__LIB_0__::func_703(0, -1);
	}
}

int func_827(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	float fVar9;
	if ((iParam0 < 0 || iParam1 < 0) || iParam2 < 0)
	{
		return 0;
	}
	if (iParam0 >= 24)
	{
		iParam0 = 0;
	}
	iVar0 = __LIB_0__::func_23();
	if (__LIB_0__::func_41(iVar0) > iParam0)
	{
		if (__LIB_0__::func_40(iVar0) + 1 > __LIB_0__::func_44(__LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0)))
		{
			if (__LIB_0__::func_39(iVar0) == 11)
			{
				__LIB_1__::func_159(&iVar1, iParam2, iParam1, iParam0, 1, 0, __LIB_0__::func_710(iVar0) + 1);
			}
			else
			{
				__LIB_1__::func_159(&iVar1, iParam2, iParam1, iParam0, 1, __LIB_0__::func_39(iVar0) + 1, __LIB_0__::func_710(iVar0));
			}
		}
		else
		{
			__LIB_1__::func_159(&iVar1, iParam2, iParam1, iParam0, __LIB_0__::func_40(iVar0) + 1, __LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0));
		}
	}
	else
	{
		__LIB_1__::func_159(&iVar1, iParam2, iParam1, iParam0, __LIB_0__::func_40(iVar0), __LIB_0__::func_39(iVar0), __LIB_0__::func_710(iVar0));
	}
	if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 9999999)
	{
		if (__LIB_1__::func_426(iVar1, 1))
		{
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
			return 1;
		}
		if (!bParam3)
		{
			if (!__LIB_1__::func_426(iVar1, 1))
			{
				__LIB_4__::func_704(iVar0, iVar1, &iVar2, &iVar3, &iVar4, &uVar5, &uVar6, &uVar7);
				if (iVar4 == 0)
				{
					if (iVar3 == 0 && iVar2 <= 5)
					{
						CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
						CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
					}
					else
					{
						iVar8 = BUILTIN::FLOOR((2000f / (BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(60))));
						CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(iVar8);
					}
				}
				else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
				{
					fVar9 = (IntToFloat((CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() - 2000)) * 0.1f);
					fVar9 = (IntToFloat(CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE()) - fVar9);
					if (MISC::ABSF((fVar9 - 2000f)) < 2000f)
					{
						fVar9 = 2000f;
					}
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(BUILTIN::FLOOR(fVar9));
				}
			}
		}
	}
	else if (!__LIB_1__::func_426(iVar1, 1))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
	return 0;
}

bool func_828(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (__LIB_5__::func_261(uParam0))
	{
		if (!__LIB_4__::func_988(&(uParam0->f_7375), iParam1, 4))
		{
			__LIB_5__::func_17(&(uParam0->f_7375), iParam1, 4);
			return true;
		}
	}
	return __LIB_6__::func_911(&(uParam0->f_7375), iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_829(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	__LIB_9__::func_146(&(uParam0->f_7375), iParam1, iParam2, sParam3, iParam4, iParam5);
}

void func_830(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		__LIB_4__::func_181(&(Global_1347702[iParam0 /*49*/].f_14));
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 16);
		__LIB_5__::func_250(iParam0);
		if ((!__LIB_5__::func_245(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43891) || bParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			UIFEED::_0x2F901291EF177B02(Global_1347702[iParam0 /*49*/].f_40, 0);
			__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
			__LIB_0__::func_325(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		else
		{
			__LIB_4__::func_838(iParam0, 16384);
			__LIB_9__::func_347(iParam0, 1, __LIB_1__::func_440(iParam0));
		}
	}
}

bool func_831(int iParam0)
{
	if (__LIB_0__::func_599(iParam0) && __LIB_1__::func_707(iParam0, 1, 0))
	{
		return true;
	}
	else if (__LIB_0__::func_600(iParam0) && __LIB_9__::func_301(iParam0))
	{
		return true;
	}
	return false;
}

bool func_832(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_83(iParam0))
	{
		return true;
	}
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false))
	{
		return true;
	}
	iVar0 = __LIB_0__::func_80(__LIB_3__::func_918(iParam0));
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return true;
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
			return true;
		}
	}
	return false;
}

void func_833(var uParam0)
{
	if (!__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		return;
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 268435456))
	{
		return;
	}
	__LIB_9__::func_448(uParam0);
}

void func_834(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_80(__LIB_3__::func_918(iParam0));
	if (__LIB_0__::func_79(iVar0) && Global_1835011[iParam0 /*74*/].f_71)
	{
		Global_1835011[iParam0 /*74*/].f_71 = 0;
	}
	if (!bParam1)
	{
		__LIB_9__::func_356(iParam0, -1, 0, 1, 0, 0, 0);
		__LIB_1__::func_559(__LIB_3__::func_918(iParam0), 1, 2);
	}
}

int func_835(int iParam0)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_27;
}

int func_836(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x886171A12F400B89(iParam1, iVar0, 1);
	if (iVar5 > *uParam0)
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
					(*uParam0)[iVar3] = iVar2;
					iVar3++;
					if (iVar3 >= *uParam0)
					{
					}
					else
					{
						iVar4++;
					}
					ITEMSET::DESTROY_ITEMSET(iVar0);
					return iVar3;
				}
			}
		}
	}
}

void func_837(int iParam0)
{
	struct<12> Var0;
	int iVar12;
	if (__LIB_0__::func_127(&(iParam0->f_428)) > 15)
	{
	}
	iVar12 = 0;
	while (iVar12 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_428.f_13[iVar12 /*12*/]))
		{
			Global_43619[iVar12 /*12*/] = { iParam0->f_428.f_13[iVar12 /*12*/] };
		}
		else
		{
			Global_43619[iVar12 /*12*/] = { Var0 };
		}
		iVar12++;
	}
}

bool func_838(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_6__::func_814(iParam1, uParam2, 0);
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

bool func_839(int iParam0)
{
	var uVar0;
	bool bVar1;
	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (__LIB_7__::func_687())
			{
			}
		}
		else
		{
			__LIB_1__::func_283(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_0__::func_264(&(iParam0->f_37)) >= 1.5f;
		if ((!__LIB_1__::func_750(&uVar0) || __LIB_7__::func_687()) || bVar1)
		{
			if (bVar1)
			{
				__LIB_6__::func_800();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

int func_840(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	iParam1->f_10 = __LIB_0__::func_97(iParam1->f_10);
	if (iParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (iParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*iParam1)
	{
		if (__LIB_0__::func_86(iParam1->f_6))
		{
		}
	}
	bVar0 = __LIB_0__::func_28();
	if (*iParam1)
	{
		if (bVar0 && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (__LIB_1__::func_105(5))
			{
				__LIB_1__::func_162(5);
				__LIB_1__::func_778(5);
				__LIB_0__::func_149(0);
				__LIB_0__::func_148(0);
			}
		}
	}
	if (__LIB_0__::func_979(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (iParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = iParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*iParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !iParam1->f_5)
			{
				__LIB_1__::func_54(iParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*iParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (iParam1->f_3)
	{
		if (iParam1->f_10 == 0)
		{
			if (!__LIB_1__::func_105(0) && __LIB_1__::func_105(1))
			{
				__LIB_1__::func_779(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (iParam1->f_4)
	{
		if (iParam1->f_10 == 0)
		{
			if (__LIB_0__::func_988())
			{
				__LIB_0__::func_989();
			}
			__LIB_0__::func_149(0);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(iParam1->f_6);
		}
	}
	if (!__LIB_0__::func_797(iParam1->f_10))
	{
		if (*iParam1)
		{
			if ((__LIB_0__::func_821(iParam1->f_10) == 0 || __LIB_0__::func_809(iParam1->f_10) == 0) || __LIB_0__::func_815(iParam1->f_10) == 0)
			{
				__LIB_2__::func_308(iParam1->f_10);
			}
			__LIB_1__::func_106(iParam1->f_10);
			__LIB_0__::func_822(iParam1->f_10, iParam1->f_6, iParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = iParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (iParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!__LIB_0__::func_86(iParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, iParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, iParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (__LIB_1__::func_107(iParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*iParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !iParam1->f_5)
		{
			if (*iParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (iParam1->f_4)
	{
		if (iParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { __LIB_1__::func_622(iParam1->f_10) };
			Var10 = { __LIB_2__::func_229() };
			__LIB_1__::func_163(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!iParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!__LIB_0__::func_823(iParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		__LIB_0__::func_824(iParam1->f_10);
		if (iParam1->f_2 && !__LIB_0__::func_86(iParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, iParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, iParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	__LIB_1__::func_108(iParam1->f_10);
	if (__LIB_0__::func_823(iParam1->f_10))
	{
		iVar16 = __LIB_0__::func_825(iParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

bool func_841(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 58))
	{
		if (bParam1)
		{
			return ENTITY::IS_ENTITY_IN_AIR(iParam0, 1);
		}
		return true;
	}
	return false;
}

int func_842()
{
	if (__LIB_5__::func_846() == -1)
	{
		return -1;
	}
	return __LIB_1__::func_953(__LIB_5__::func_846());
}

int func_843(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && __LIB_0__::func_12() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

int func_844(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (__LIB_1__::func_985())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = __LIB_0__::func_55(__LIB_1__::func_985(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_845(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -372503450;
		case 1:
			return 1523666538;
		case 2:
			return 4951849;
		case 3:
			return -1644197791;
		case 4:
			return -1503385932;
		case 5:
			return 87178501;
		case 6:
			return -188752474;
		case 7:
			return -349166975;
		case 8:
			return -1290927903;
		case 9:
			return 637563550;
		case 10:
			return 1475355982;
		case 11:
			return 1724443719;
		case 12:
			return 1050506191;
		case 13:
			return 1623565947;
		case 14:
			return -1962265862;
		case 15:
			return 1526203407;
		default:
			break;
	}
	return 0;
}

int func_846(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13083484;
		case 1:
			return 333045931;
		case 2:
			return 1902076494;
		case 3:
			return -453294510;
		case 4:
			return 904770332;
		case 5:
			return 1407413829;
		case 6:
			return 45199580;
		case 7:
			return -140390317;
		case 8:
			return 1415123831;
		case 9:
			return 1789471985;
		case 10:
			return -2000773121;
		case 11:
			return 21224643;
		case 12:
			return -1026516599;
		case 13:
			return -1026066875;
		case 14:
			return -1536975869;
		case 15:
			return -412469442;
		default:
			break;
	}
	return 0;
}

void func_847(int iParam0, int iParam1, int iParam2)
{
	Global_1934051.f_115 = iParam1;
	Global_1934051.f_116 = iParam0;
	Global_1934051.f_117 = iParam2;
	Global_1934051.f_118 = 1;
}

int func_848(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("AT_BEAR_LEGENDARY");
		case 1:
			return joaat("AT_BEAVER_LEGENDARY");
		case 2:
			return joaat("AT_RAM_LEGENDARY");
		case 3:
			return joaat("AT_BUFFALO_LEGENDARY");
		case 4:
			return joaat("AT_BOAR_LEGENDARY");
		case 5:
			return joaat("AT_BUCK_LEGENDARY");
		case 6:
			return joaat("AT_BUFFALO_TATANKA");
		case 7:
			return joaat("AT_GATOR_BULL");
		case 8:
			return joaat("AT_COUGAR_LEGENDARY");
		case 9:
			return joaat("AT_COYOTE_LEGENDARY");
		case 10:
			return joaat("AT_ELK_LEGENDARY");
		case 11:
			return joaat("AT_FOX_LEGENDARY");
		case 12:
			return joaat("AT_MOOSE_LEGENDARY");
		case 13:
			return joaat("AT_PANTHER_LEGENDARY");
		case 14:
			return joaat("AT_PRONGHORN_LEGENDARY");
		case 15:
			return joaat("AT_WOLF_LEGENDARY");
		default:
			break;
	}
	return 0;
}

void func_849(var uParam0)
{
	if (uParam0->f_680)
	{
		AUDIO::_0x6AB944DF68B512D3(uParam0->f_679);
		uParam0->f_680 = 0;
	}
	if (uParam0->f_614 > 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_677))
		{
			AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_677, false, true);
		}
	}
}

void func_850(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_572[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_572[iVar0], false);
		}
		iVar0++;
	}
	if (uParam0->f_12.f_1 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_1, false);
	}
}

int func_851(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_572[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_572[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (uParam0->f_12.f_1 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_1))
		{
			return 0;
		}
		else if (uParam0->f_12.f_5)
		{
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_12.f_9))
			{
				if (uParam0->f_12.f_7 > 0)
				{
					uParam0->f_12.f_9 = PED::_0x273915CE30780986(uParam0->f_12.f_1, uParam0->f_12.f_7);
				}
				else
				{
					uParam0->f_12.f_9 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_12.f_1, uParam0->f_12.f_8);
				}
				return 0;
			}
			else if (!PED::_0x610438375E5D1801(uParam0->f_12.f_9))
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_852(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		return true;
	}
	if (ENTITY::_0x8DE41E9902E85756(uParam0->f_12) && !__LIB_3__::func_996(Global_35))
	{
		return true;
	}
	return false;
}

int func_853(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 64;
		case 5:
			return 16;
		case 6:
			return 32;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
	}
	return 0;
}

int func_854(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("A_C_BEAR_01");
			return 1;
		case 1:
			*uParam1 = joaat("A_C_BEAVER_01");
			return 1;
		case 2:
			*uParam1 = joaat("A_C_BIGHORNRAM_01");
			return 1;
		case 3:
			*uParam1 = joaat("A_C_BUFFALO_01");
			return 1;
		case 4:
			*uParam1 = joaat("A_C_BOAR_01");
			return 1;
		case 5:
			*uParam1 = joaat("A_C_BUCK_01");
			return 1;
		case 6:
			*uParam1 = joaat("A_C_BUFFALO_TATANKA_01");
			return 1;
		case 7:
			*uParam1 = joaat("A_C_ALLIGATOR_02");
			return 1;
		case 8:
			*uParam1 = joaat("A_C_COUGAR_01");
			return 1;
		case 9:
			*uParam1 = joaat("A_C_COYOTE_01");
			return 1;
		case 10:
			*uParam1 = joaat("A_C_ELK_01");
			return 1;
		case 11:
			*uParam1 = joaat("A_C_FOX_01");
			return 1;
		case 12:
			*uParam1 = joaat("A_C_MOOSE_01");
			return 1;
		case 13:
			*uParam1 = joaat("A_C_PANTHER_01");
			return 1;
		case 14:
			*uParam1 = joaat("A_C_PRONGHORN_01");
			return 1;
		case 15:
			*uParam1 = joaat("A_C_WOLF");
			return 1;
	}
	return 0;
}

int func_855(int iParam0, char* sParam1, int iParam2, float fParam3, int iParam4, int iParam5, float fParam6, int iParam7)
{
	int iVar0;
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return 0;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return 0;
	}
	if (ENTITY::_0x29BA9F78321E5A6C(iParam0, sParam1, iParam2, fParam3, iParam4, iParam5, 0, 0, 0, fParam6, 0, iParam7))
	{
		return 1;
	}
	return 0;
}

bool func_856(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
		case 8:
		case 9:
		case 11:
		case 13:
		case 15:
			return true;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 10:
		case 12:
		case 14:
			return false;
		default:
			break;
	}
	return false;
}

int func_857(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

int func_858(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_357(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

void func_859(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (iParam0 == 0)
		{
			__LIB_1__::func_265(Global_35, "HUNTING_MEDIUM", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
		}
		else if (iParam0 == 1)
		{
			__LIB_1__::func_265(Global_35, "HUNTING_NEAR", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
		}
	}
	else if (iParam0 == 0)
	{
		__LIB_1__::func_265(Global_35, "HUNTING_FAR", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
	}
	else if (iParam0 == 1)
	{
		__LIB_1__::func_265(Global_35, "HUNTING_MEDIUM", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
	}
	else if (iParam0 == 2)
	{
		__LIB_1__::func_265(Global_35, "HUNTING_NEAR", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
	}
}

int func_860(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (__LIB_0__::func_192(iParam0, 173360570))
	{
		return 1;
	}
	return 0;
}

Vector3 func_861()
{
	return __LIB_1__::func_344("ATZ_INS_FUR");
}

Vector3 func_862()
{
	return __LIB_1__::func_344("ATZ_INS_KLR");
}

Vector3 func_863()
{
	return __LIB_1__::func_344("ATZ_INS_BLD");
}

Vector3 func_864()
{
	return __LIB_1__::func_344("ATZ_INS_BRK");
}

Vector3 func_865()
{
	return __LIB_1__::func_344("ATZ_INS_TRB");
}

int func_866(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	iVar0 = -1;
	iVar1 = -1;
	fVar4 = -1f;
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (!__LIB_1__::func_917(iVar0))
		{
		}
		else if (__LIB_1__::func_921(iVar0) != iParam0)
		{
		}
		else if (bParam1)
		{
			if (!__LIB_3__::func_339(iVar0))
			{
			}
			else
			{
				iVar2 = __LIB_9__::func_843(iVar0);
				if (bParam3)
				{
					if (!__LIB_3__::func_222(iVar2))
					{
					}
					else if (bParam2)
					{
						if (__LIB_0__::func_730(iVar2))
						{
						}
						else
						{
							fVar3 = __LIB_0__::func_94(Global_35, __LIB_4__::func_846(iVar0), 1);
							if (fVar3 < fVar4 || fVar4 == -1f)
							{
								iVar1 = iVar0;
								fVar4 = fVar3;
							}
						}
						iVar0++;
						return iVar1;
					}
				}
			}
		}
	}
}

bool func_867(int iParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14[15];
	int iVar45;
	int iVar46;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	*iParam2 = 0;
	Var0 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &iVar13))
			{
				if (__LIB_0__::func_976(iVar13, iParam1, &Var14, &iVar45, 1, 0))
				{
					iVar46 = 0;
					while (iVar46 < iVar45)
					{
						if (iParam0 == Var14[iVar46 /*2*/])
						{
							*iParam2 = (*iParam2 + Var14[iVar46 /*2*/].f_1);
						}
						iVar46++;
					}
				}
			}
			iVar12++;
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
	}
	return true;
}

bool func_868(var uParam0)
{
	float fVar0;
	fVar0 = (uParam0->f_9 + 20f);
	uParam0->f_3 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_627, 0f, 0f, 0f, fVar0, fVar0, fVar0, "HuntingZoneRestrictionPending");
	__LIB_2__::func_261(uParam0->f_3, "Hunting Zone Target Pending", 0, 0, 8192, 0, -1082130432 /* Float: -1f */);
	return true;
}

void func_869(int iParam0, int iParam1, vector3 vParam2, bool bParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
	{
		MAP::_0xD8C7162AB2E2AF45(iVar1);
	}
	if (bParam5 && joaat("AT_HORSE") != iParam0)
	{
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(iParam0, uParam6);
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_40.f_39 == joaat("PLAYER_ZERO"))
		{
			iVar2 = __LIB_6__::func_932(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				__LIB_1__::func_465(iVar2, 0);
			}
		}
		else
		{
			iVar2 = __LIB_6__::func_932(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar2))
				{
					iVar2 = __LIB_6__::func_932(iParam0, iParam1, 0);
					if (iVar2 != 0)
					{
						__LIB_1__::func_465(iVar2, 0);
					}
				}
			}
		}
	}
}

bool func_870(var uParam0)
{
	float fVar0;
	var uVar1;
	int iVar6[4];
	if (*uParam0 != -1)
	{
		if (!__LIB_2__::func_410(15))
		{
			return true;
		}
		if (Global_40.f_9319[*uParam0 /*4*/].f_1)
		{
			return true;
		}
		else if (__LIB_0__::func_23() < Global_40.f_9319[*uParam0 /*4*/].f_2)
		{
			__LIB_1__::func_240(201, 1);
			return true;
		}
	}
	if (*uParam0 == 1)
	{
		if ((__LIB_4__::func_267(123) || __LIB_1__::func_200(123)) || __LIB_7__::func_852(123))
		{
			return true;
		}
		else
		{
			fVar0 = 10f;
		}
	}
	else if (*uParam0 == 13)
	{
		fVar0 = 10f;
	}
	else if (*uParam0 == 5)
	{
		fVar0 = 10f;
	}
	else if (*uParam0 == 12)
	{
		fVar0 = 50f;
	}
	else
	{
		fVar0 = (uParam0->f_9 - 15f);
	}
	uVar1 = 4;
	iVar6[0] = 4096;
	iVar6[1] = 16384;
	iVar6[2] = 16;
	iVar6[3] = 8192;
	if (VOLUME::_0x51E52C9687FCDEEC(uParam0->f_627, fVar0, &uVar1, &iVar6, 0))
	{
		__LIB_1__::func_240(200, 1);
		return true;
	}
	return false;
}

bool func_871(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (uParam0->f_11 > 0)
	{
		bVar0 = false;
		bVar1 = false;
		if ((MISC::GET_GAME_TIMER() - uParam0->f_613) > 1200000)
		{
			bVar0 = true;
		}
		if (__LIB_0__::func_383() || __LIB_0__::func_1(Global_1935630, 131072))
		{
			bVar0 = true;
		}
		if ((SCRIPTS::_0x9E4EF615E307FBBE() && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("HUNTING1")) == 0) && !__LIB_2__::func_774(15))
		{
			bVar0 = true;
		}
		else if (__LIB_2__::func_776() && *uParam0 != 0)
		{
			iVar2 = __LIB_0__::func_64(0);
			if (iVar2 != 9 && iVar2 != 7)
			{
				bVar0 = true;
			}
		}
		else if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			if (!Global_40.f_9319[*uParam0 /*4*/].f_1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12) && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12))
					{
						__LIB_1__::func_240(200, 1);
					}
				}
			}
			bVar0 = true;
		}
		if (bVar0)
		{
			if (uParam0->f_622)
			{
				if (Global_40.f_9319[*uParam0 /*4*/].f_1)
				{
					bVar1 = true;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12) && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12))
					{
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					__LIB_1__::func_265(Global_35, "HUNTING_LOST_TRAIL", joaat("SPEECH_PARAMS_STANDARD"), 0, 0, 0, 0, 1);
				}
				if (__LIB_0__::func_23() > Global_40.f_9319[*uParam0 /*4*/].f_2)
				{
					Global_40.f_9319[*uParam0 /*4*/].f_2 = __LIB_0__::func_23();
					__LIB_2__::func_670(&(Global_40.f_9319[*uParam0 /*4*/].f_2), 0, 0, 24, 0, 0, 0, 0);
				}
			}
			return true;
		}
	}
	return false;
}

int func_872()
{
	return 9;
}

int func_873(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_874(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam0 != 0)
	{
		iVar3 = __LIB_0__::func_357(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = __LIB_9__::func_858(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

void func_875(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_9__::func_872())
	{
		if (uParam0->f_31[iVar0 /*36*/].f_26 == 0)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_31[iVar0 /*36*/].f_10))
			{
				__LIB_3__::func_142(uParam0->f_31[iVar0 /*36*/].f_10);
			}
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[iVar0 /*36*/]))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_31[iVar0 /*36*/]));
			}
		}
		iVar0++;
	}
}

void func_876(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	fVar0 = 9999f;
	iVar1 = 0;
	bVar3 = PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID());
	iVar2 = 0;
	while (iVar2 < __LIB_9__::func_872())
	{
		fVar4 = 0f;
		if (uParam0->f_31[iVar2 /*36*/].f_13)
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[iVar2 /*36*/]))
			{
				MAP::_BLIP_SET_MODIFIER(uParam0->f_31[iVar2 /*36*/], -1186550032);
			}
			fVar4 = __LIB_1__::func_992(Global_35, uParam0->f_31[iVar2 /*36*/].f_17, 1);
			if (fVar4 < fVar0)
			{
				fVar0 = fVar4;
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_31[iVar1 /*36*/], -1186550032);
	if (bVar3)
	{
		MAP::_BLIP_SET_MODIFIER(uParam0->f_31[iVar1 /*36*/], 1641478980);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_31[iVar1 /*36*/], 1641478980);
	}
}

bool func_877(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = __LIB_5__::func_998(iParam1);
	if (!__LIB_9__::func_874(iParam0, Var0.f_4))
	{
		return false;
	}
	iVar5 = __LIB_0__::func_936(iParam0, &Var0, 1, 0);
	iVar6 = __LIB_0__::func_788(iParam0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return false;
	}
	return true;
}

bool func_878(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	var uVar6;
	if (!__LIB_9__::func_877(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == 1)
	{
		if (__LIB_9__::func_860(iParam0) && __LIB_9__::func_857(iParam0))
		{
			iVar0 = 0;
			if (__LIB_9__::func_867(iParam0, 369710026, &iVar0))
			{
				iParam2 = iVar0;
			}
		}
	}
	Var1.f_4 = __LIB_5__::func_998(iParam1);
	Var1 = { __LIB_0__::func_949(0) };
	if (!__LIB_1__::func_792(iParam0, &uVar6, &Var1, iParam2, 752097756, 1))
	{
		return false;
	}
	return true;
}

void func_879(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	var uVar5[15];
	int iVar21;
	var uVar22;
	iVar0 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar21 = __LIB_9__::func_853(iParam0);
	__LIB_9__::func_854(iParam0, &uVar22);
	iVar4 = PED::_0xB29C553BA582D09E(&uVar5, uVar22, 2, 4);
	if (iVar4 > 0 && iVar4 < 15)
	{
		bVar1 = true;
		bVar2 = false;
		iVar3 = 0;
		while (iVar3 < iVar4)
		{
			iVar0 = 0;
			if (__LIB_9__::func_867(uVar5[iVar3], 369710026, &iVar0))
			{
				iVar0 = (iVar0 - __LIB_6__::func_327(uVar5[iVar3], 1));
				if (iVar0 > 0)
				{
					if (__LIB_9__::func_877(uVar5[iVar3], 1))
					{
						if (!__LIB_9__::func_878(uVar5[iVar3], 1, iVar0))
						{
							bVar1 = false;
						}
						else
						{
							bVar2 = true;
						}
					}
				}
			}
			if (bParam1 && __LIB_9__::func_867(uVar5[iVar3], -768110908, &iVar0))
			{
				iVar0 = (iVar0 - __LIB_6__::func_327(uVar5[iVar3], 0));
				if (iVar0 > 0)
				{
					if (__LIB_9__::func_877(uVar5[iVar3], 0))
					{
						if (!__LIB_9__::func_878(uVar5[iVar3], 0, iVar0))
						{
							bVar1 = false;
						}
						else
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar3++;
		}
		if (bVar1)
		{
			Global_40.f_9319[iParam0 /*4*/].f_3 = 0;
			__LIB_1__::func_581(&(Global_20710.f_2407), iVar21);
			if (bVar2)
			{
				__LIB_1__::func_240(467, 1);
			}
			__LIB_0__::func_703(0, -1);
		}
	}
}

void func_880(var uParam0)
{
	int iVar0;
	if (uParam0->f_626)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "isInspectingGround", false, -1);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		uParam0->f_626 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uParam0->f_12);
			PLAYER::_0x00B156AFEBCC5AE0(uParam0->f_12);
		}
		if (!uParam0->f_621 || ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12) || uParam0->f_619)
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
			else
			{
				ENTITY::_SET_ENTITY_HEALTH(uParam0->f_12, 0, Global_35);
				Global_40.f_9319[*uParam0 /*4*/].f_1 = 1;
				MAP::_MAP_DISCOVERY_SET_ENABLED(__LIB_9__::func_845(*uParam0));
				MAP::_0xD8C7162AB2E2AF45(__LIB_9__::func_846(*uParam0));
				__LIB_0__::func_703(0, -1);
				if (!__LIB_0__::func_474(466))
				{
					__LIB_9__::func_847(__LIB_9__::func_866(18, 0, 0, 0), 466, 40000);
				}
			}
		}
		else
		{
			if (uParam0->f_619 && uParam0->f_11 == 8)
			{
				if (__LIB_3__::func_996(Global_35) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_264(Global_35)) == uParam0->f_12)
				{
					__LIB_9__::func_879(*uParam0, 1);
					__LIB_9__::func_869(__LIB_9__::func_848(*uParam0), uParam0->f_12.f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true, false), 1, 0);
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("TRACKED"), __LIB_9__::func_848(*uParam0)), 1);
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("KILLED"), __LIB_9__::func_848(*uParam0)), 1);
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("SKINNED"), __LIB_9__::func_848(*uParam0)), 1);
					STATS::_0xA59590050F80FF2E(__LIB_9__::func_848(*uParam0), 0, 1, 0);
					ENTITY::_0x6BCF5F3D8FFE988D(uParam0->f_12, 1);
					TASK::_0xA21AA2F0C2180125(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_12), 0);
					PERSISTENCE::_0x9D16896F0DBE78A2(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true, false), 1f);
				}
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
	}
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_12.f_9))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam0->f_12.f_9);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_3))
	{
		__LIB_1__::func_544(uParam0->f_3);
		VOLUME::_DELETE_VOLUME(uParam0->f_3);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2))
	{
		__LIB_1__::func_544(uParam0->f_2);
		VOLUME::_DELETE_VOLUME(uParam0->f_2);
		__LIB_0__::func_484(&(uParam0->f_5), uParam0->f_4, 0);
	}
	if (*uParam0 == 15)
	{
		FLOCK::_0x706B434FEFAD6A24(-1f);
		FLOCK::_0xA881F5C77A560906(-1f);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_6));
	}
	iVar0 = 0;
	while (iVar0 < __LIB_9__::func_872())
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[iVar0 /*36*/].f_1))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uParam0->f_31[iVar0 /*36*/].f_1));
			if (uParam0->f_31[iVar0 /*36*/].f_9 != -1)
			{
				GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_31[iVar0 /*36*/].f_9), 1);
			}
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[iVar0 /*36*/]))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_31[iVar0 /*36*/]));
			}
			if (uParam0->f_31[iVar0 /*36*/].f_3 != 0)
			{
				ENTITY::_0xD2B9C78537ED5759(uParam0->f_31[iVar0 /*36*/].f_3);
			}
		}
		__LIB_0__::func_172(uParam0->f_31[iVar0 /*36*/].f_10);
		__LIB_1__::func_748(&(uParam0->f_31[iVar0 /*36*/].f_16), 1, 1);
		iVar0++;
	}
	__LIB_9__::func_849(uParam0);
}

int func_881()
{
	return 4;
}

int func_882()
{
	return 12;
}

int func_883(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 4;
			break;
		case 1:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 4;
			break;
	}
	return iVar0;
}

void func_884(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_9__::func_882())
	{
		if (uParam0->f_31[iVar0 /*36*/].f_26 == 0)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_31[iVar0 /*36*/].f_10))
			{
				__LIB_3__::func_142(uParam0->f_31[iVar0 /*36*/].f_10);
			}
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[iVar0 /*36*/]))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_31[iVar0 /*36*/]));
			}
		}
		iVar0++;
	}
}

void func_885(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	fVar0 = 9999f;
	iVar1 = 0;
	bVar3 = PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID());
	iVar2 = 0;
	while (iVar2 < __LIB_9__::func_882())
	{
		fVar4 = 0f;
		if (uParam0->f_31[iVar2 /*36*/].f_13)
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[iVar2 /*36*/]))
			{
				MAP::_BLIP_SET_MODIFIER(uParam0->f_31[iVar2 /*36*/], -1186550032);
			}
			fVar4 = __LIB_1__::func_992(Global_35, uParam0->f_31[iVar2 /*36*/].f_17, 1);
			if (fVar4 < fVar0)
			{
				fVar0 = fVar4;
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_31[iVar1 /*36*/], -1186550032);
	if (bVar3)
	{
		MAP::_BLIP_SET_MODIFIER(uParam0->f_31[iVar1 /*36*/], 1641478980);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_31[iVar1 /*36*/], 1641478980);
	}
}

void func_886(var uParam0)
{
	int iVar0;
	if (uParam0->f_626)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "isInspectingGround", false, -1);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		uParam0->f_626 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uParam0->f_12);
			PLAYER::_0x00B156AFEBCC5AE0(uParam0->f_12);
		}
		if (!uParam0->f_621 || ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12) || uParam0->f_619)
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
			else
			{
				ENTITY::_SET_ENTITY_HEALTH(uParam0->f_12, 0, Global_35);
				Global_40.f_9319[*uParam0 /*4*/].f_1 = 1;
				MAP::_MAP_DISCOVERY_SET_ENABLED(__LIB_9__::func_845(*uParam0));
				MAP::_0xD8C7162AB2E2AF45(__LIB_9__::func_846(*uParam0));
				__LIB_0__::func_703(0, -1);
				if (!__LIB_0__::func_474(466))
				{
					__LIB_9__::func_847(__LIB_9__::func_866(18, 0, 0, 0), 466, 40000);
				}
			}
		}
		else
		{
			if (uParam0->f_619 && uParam0->f_11 == 8)
			{
				if (__LIB_3__::func_996(Global_35) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_264(Global_35)) == uParam0->f_12)
				{
					__LIB_9__::func_879(*uParam0, 1);
					__LIB_9__::func_869(__LIB_9__::func_848(*uParam0), uParam0->f_12.f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true, false), 1, 0);
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("TRACKED"), __LIB_9__::func_848(*uParam0)), 1);
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("KILLED"), __LIB_9__::func_848(*uParam0)), 1);
					__LIB_0__::func_15(__LIB_0__::func_38(joaat("SKINNED"), __LIB_9__::func_848(*uParam0)), 1);
					STATS::_0xA59590050F80FF2E(__LIB_9__::func_848(*uParam0), 0, 1, 0);
					ENTITY::_0x6BCF5F3D8FFE988D(uParam0->f_12, 1);
					TASK::_0xA21AA2F0C2180125(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_12), 0);
					PERSISTENCE::_0x9D16896F0DBE78A2(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true, false), 1f);
				}
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
	}
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_12.f_9))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam0->f_12.f_9);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_3))
	{
		__LIB_1__::func_544(uParam0->f_3);
		VOLUME::_DELETE_VOLUME(uParam0->f_3);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2))
	{
		__LIB_1__::func_544(uParam0->f_2);
		VOLUME::_DELETE_VOLUME(uParam0->f_2);
		__LIB_0__::func_484(&(uParam0->f_5), uParam0->f_4, 0);
	}
	if (*uParam0 == 15)
	{
		FLOCK::_0x706B434FEFAD6A24(-1f);
		FLOCK::_0xA881F5C77A560906(-1f);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_6));
	}
	iVar0 = 0;
	while (iVar0 < __LIB_9__::func_882())
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31[iVar0 /*36*/].f_1))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uParam0->f_31[iVar0 /*36*/].f_1));
			if (uParam0->f_31[iVar0 /*36*/].f_9 != -1)
			{
				GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_31[iVar0 /*36*/].f_9), 1);
			}
			if (MAP::DOES_BLIP_EXIST(uParam0->f_31[iVar0 /*36*/]))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_31[iVar0 /*36*/]));
			}
			if (uParam0->f_31[iVar0 /*36*/].f_3 != 0)
			{
				ENTITY::_0xD2B9C78537ED5759(uParam0->f_31[iVar0 /*36*/].f_3);
			}
		}
		__LIB_0__::func_172(uParam0->f_31[iVar0 /*36*/].f_10);
		__LIB_1__::func_748(&(uParam0->f_31[iVar0 /*36*/].f_16), 1, 1);
		iVar0++;
	}
	__LIB_9__::func_849(uParam0);
}

void func_887(char[4] cParam0)
{
	PED::_0xED9582B3DA8F02B4(cParam0->f_13105);
}

void func_888(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	iVar0 = __LIB_0__::func_17(*iParam0);
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), sParam2, 1, 0, 0, 0);
	}
}

void func_889()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 258, false);
		PLAYER::_0xD1A70C1E8D1031FE(PLAYER::PLAYER_ID(), 1);
	}
}

void func_890(int iParam0)
{
	iLocal_756 = iParam0;
}

int func_891(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return -1817923036;
		default:
			break;
	}
	return joaat("META_OUTFIT_COOL_WEATHER");
}

int func_892(char[4] cParam0)
{
	return __LIB_4__::func_543(cParam0->f_607);
}

int func_893(int iParam0)
{
	if (!__LIB_9__::func_122(iParam0))
	{
		return -1;
	}
	return Global_1327590.f_19574[iParam0 /*8*/];
}

void func_894(int iParam0, int iParam1)
{
	__LIB_0__::func_7(&(Global_1914319.f_3[iParam0 /*446*/].f_6), iParam1);
}

bool func_895(int iParam0)
{
	if (!__LIB_9__::func_122(iParam0))
	{
		return false;
	}
	return Global_1327590.f_19574[iParam0 /*8*/] != -1;
}

void func_896(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		__LIB_1__::func_951(iParam0[iVar0]);
		iVar0++;
	}
}

bool func_897()
{
	return __LIB_3__::func_128(Global_35, &(Global_1946804.f_1735));
}

void func_898(var uParam0, int iParam1)
{
	if (uParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		uParam0->f_8 = __LIB_0__::func_485();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	__LIB_1__::func_350(uParam0, 0);
	*iParam1 = 0;
	uParam0->f_16 = 0;
}

int func_899(bool bParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	if (__LIB_1__::func_992(Global_35, vParam3, 1) > 225f)
	{
		return 1;
	}
	if (*bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				*bParam0 = 0;
			}
			else
			{
				return 1;
			}
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*iParam2))
	{
		*iParam2 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam3, iParam8, 1f, 0, false);
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_ENTITY(*iParam2, "PrimaryItem");
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
		TXD::_REQUEST_STREAMED_TXD(iParam6, false);
		return 0;
	}
	else
	{
		if (!TXD::_HAS_STREAMED_TXD_LOADED(iParam6))
		{
			TXD::_REQUEST_STREAMED_TXD(iParam6, false);
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				DECORATOR::DECOR_SET_INT(*uParam1, "letter_item", iParam7);
				return 0;
			}
			else
			{
				OBJECT::_SET_APPLY_OBJECT_TXD(*uParam1, iParam6, 0, 0);
				TXD::_SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(iParam6);
				*bParam0 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_900()
{
	__LIB_4__::func_603(&(Global_1946804.f_1735));
}

void func_901(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 45)
	{
		iVar1 = __LIB_5__::func_277(iVar0);
		if (__LIB_0__::func_144(iVar1, 0))
		{
			(*uParam1)[iVar0] = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, iVar1);
		}
		iVar0++;
	}
}

void func_902(char[4] cParam0)
{
	__LIB_8__::func_920(&(cParam0->f_7375));
}

void func_903(int* iParam0)
{
	__LIB_3__::func_157(iParam0, "", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
}

void func_904(char[4] cParam0, int iParam1, int iParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (bParam3)
		{
			if (!__LIB_9__::func_131(cParam0, iParam1, 128))
			{
				__LIB_9__::func_141(cParam0, iParam1, 128);
			}
		}
		else if (__LIB_9__::func_131(cParam0, iParam1, 128))
		{
			__LIB_9__::func_147(cParam0, iParam1, 128);
		}
	}
}

bool func_905(int iParam0, int* iParam1, var uParam2)
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
				__LIB_0__::func_7(&(iParam1->f_10), 1);
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
			__LIB_0__::func_8(&(iParam1->f_10), 1);
		}
	}
	return false;
}

void func_906(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_139(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		__LIB_1__::func_281(&(iParam1->f_6), 0, 1);
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

int func_907(int iParam0, var uParam1, int iParam2, bool bParam3)
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
		__LIB_9__::func_162(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

void func_908(int iParam0)
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
			__LIB_9__::func_162(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (__LIB_1__::func_701(iVar2, 0))
		{
			__LIB_1__::func_704(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

int func_909(char[4] cParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	if (((__LIB_0__::func_2() != -1 || __LIB_6__::func_864(cParam0) == 25) || __LIB_6__::func_864(cParam0) == 26) || Global_1935630.f_12)
	{
		return 0;
	}
	bVar0 = __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(cParam0->f_5423[iVar1 /*65*/])))
		{
			if (__LIB_5__::func_58(cParam0->f_5423[iVar1 /*65*/].f_7, iParam1))
			{
				__LIB_9__::func_488(cParam0, &(cParam0->f_5423[iVar1 /*65*/]), bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

bool func_910(char[4] cParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, bool bParam10)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam1) && iParam9 == joaat("BLIP_STYLE_COMPANION"))
	{
		iParam9 = 408396114;
	}
	bVar0 = __LIB_9__::func_471(cParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), sParam2, sParam3, 1, sParam4, iParam5, fParam7, fParam8);
	if (__LIB_6__::func_863(cParam0) != 1 && __LIB_6__::func_862(cParam0, 64))
	{
		if (bParam10)
		{
			__LIB_9__::func_411(cParam0, iParam1, iParam9, bVar0, iParam6);
		}
		__LIB_6__::func_887(cParam0, 64);
	}
	return bVar0;
}

void func_911(var uParam0, int iParam1, bool bParam2)
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
	__LIB_9__::func_54(uParam0);
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

void func_912(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(*iParam1, 21))
	{
		__LIB_3__::func_97(iParam1);
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_36) || !__LIB_0__::func_272(*iParam0, 0))
	{
		return;
	}
	iParam1->f_36 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, 0f, 0.55f, 0.55f, 3f);
	VOLUME::_0x5B23DFF8E0948BB2(iParam1->f_36, 1);
}

bool func_913(float fParam0, float fParam1)
{
	if (__LIB_3__::func_514(fParam0, fParam1))
	{
		__LIB_1__::func_561(fParam0);
		return true;
	}
	return false;
}

void func_914(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_899(&(iParam0->f_2893)))
	{
		__LIB_4__::func_89(&(iParam0->f_2893), 0);
	}
	if (__LIB_1__::func_583(&(iParam0->f_2893)) >= 1f)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_425))
		{
			iVar0 = __LIB_0__::func_398(7);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (!__LIB_2__::func_27(iParam0, 512))
				{
					PED::_0xE9B168527B337BF0(iVar0, iParam0->f_425);
					__LIB_5__::func_410(iParam0, 512);
				}
			}
			else if (__LIB_2__::func_27(iParam0, 512))
			{
				__LIB_4__::func_727(iParam0, 512);
			}
		}
		__LIB_2__::func_259(&(iParam0->f_2893));
	}
}

void func_915(int iParam0, bool bParam1)
{
	vector3 vVar0[24];
	if (!CAM::IS_SCREEN_FADED_OUT() && !__LIB_2__::func_27(iParam0, 4))
	{
		if (__LIB_1__::func_583(&(iParam0->f_2896)) <= 0.5f)
		{
			return;
		}
		__LIB_2__::func_259(&(iParam0->f_2896));
		if ((__LIB_0__::func_296(0, 0, 1) && !__LIB_2__::func_27(iParam0, 65536)) && !__LIB_3__::func_919(iParam0->f_2889, 1024))
		{
			return;
		}
	}
	if (__LIB_2__::func_27(iParam0, 128))
	{
		return;
	}
	if (__LIB_2__::func_27(iParam0, 134217728))
	{
		if (!__LIB_2__::func_27(iParam0, 16777216))
		{
			__LIB_4__::func_778(iParam0, 16);
			if (__LIB_5__::func_132(iParam0))
			{
				__LIB_6__::func_924(iParam0);
			}
			__LIB_5__::func_410(iParam0, 16777216);
		}
		cVar0 = { __LIB_4__::func_681(*iParam0) };
		if (__LIB_5__::func_518(&(iParam0->f_428), &cVar0, bParam1, 0))
		{
			if (!__LIB_3__::func_919(iParam0->f_2889, 128))
			{
				__LIB_1__::func_109(iParam0->f_2889, 128);
			}
		}
		else if (__LIB_3__::func_919(iParam0->f_2889, 128))
		{
			__LIB_4__::func_728(iParam0->f_2889, 128);
		}
	}
}

bool func_916(int iParam0)
{
	vector3 vVar0;
	bool bVar3;
	vVar0 = { __LIB_4__::func_681(*iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		if (__LIB_2__::func_774(*iParam0))
		{
			return true;
		}
		return false;
	}
	bVar3 = __LIB_0__::func_91();
	if (bVar3)
	{
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	}
	if (!__LIB_2__::func_27(iParam0, 32))
	{
		if (__LIB_0__::func_91())
		{
			__LIB_5__::func_410(iParam0, 32);
		}
		else if (__LIB_1__::func_583(&(iParam0->f_2884)) >= 60f)
		{
			return true;
		}
	}
	else
	{
		if (!__LIB_0__::func_91())
		{
			return true;
		}
		if (!__LIB_2__::func_27(iParam0, 4096))
		{
			if (__LIB_2__::func_774(*iParam0))
			{
				__LIB_5__::func_410(iParam0, 4096);
			}
			else
			{
				__LIB_5__::func_180(iParam0);
			}
		}
		else if (!__LIB_2__::func_774(*iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_917(int iParam0, int iParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	__LIB_5__::func_217(iParam0);
	__LIB_5__::func_205(iParam0);
	__LIB_5__::func_208(iParam0, iParam1, 0);
	__LIB_5__::func_418(iParam0, iParam1);
	__LIB_5__::func_426(*iParam0, iParam1);
}

int func_918(var uParam0, int iParam1)
{
	vector3 vVar0;
	*iParam1 = *uParam0;
	PED::_0xED9582B3DA8F02B4(10);
	iParam1->f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(*uParam0));
	__LIB_0__::func_16(iParam1);
	if (__LIB_5__::func_204(iParam1))
	{
		__LIB_5__::func_411(&(iParam1->f_428));
		__LIB_5__::func_531(iParam1);
		__LIB_5__::func_410(iParam1, 16777216);
		__LIB_4__::func_722(iParam1, 8);
	}
	else
	{
		__LIB_4__::func_722(iParam1, 0);
	}
	if (!__LIB_2__::func_27(iParam1, 1073741824 /* Float: 2f */))
	{
		__LIB_5__::func_105(*iParam1);
		__LIB_5__::func_178(*iParam1);
	}
	vVar0 = { __LIB_4__::func_681(*iParam1) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		__LIB_5__::func_410(iParam1, 134217728);
	}
	__LIB_4__::func_89(&(iParam1->f_2896), 0);
	return 1;
}

void func_919(var uParam0)
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
	__LIB_8__::func_726(uParam0, 1);
	__LIB_5__::func_186(uParam0);
	__LIB_4__::func_750(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_4__::func_784(uParam0, 4);
	__LIB_5__::func_187(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_4__::func_744(uParam0);
	__LIB_1__::func_561(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_501, 128));
	if (!__LIB_0__::func_1(uParam0->f_501, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_920(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (VOLUME::_DOES_VOLUME_EXIST((*iParam0)[iVar0]))
		{
			VOLUME::_DELETE_VOLUME((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

Vector3 func_921(char* sParam0)
{
	vector3 vVar0;
	int iVar3;
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam0, &iVar3);
	TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, (iVar3 - 1), &vVar0);
	return vVar0;
}

bool func_922(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_1934765.f_30[iVar1], iVar2);
}

bool func_923(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!INTERIOR::IS_INTERIOR_READY(iParam0))
		{
			return false;
		}
	}
	if (iParam1 || Global_1934765.f_271)
	{
		return true;
	}
	return ((INTERIOR::_GET_INTERIOR_FROM_GAME_VIEWPORT() != iParam0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != iParam0) || CAM::IS_SCREEN_FADED_OUT());
}

void func_924(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_1934765.f_30[iVar1]), iVar2);
}

void func_925(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_1934765.f_30[iVar1]), iVar2);
}

var func_926(var uParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	Var0 = { uParam0->f_4[iParam1 /*8*/] };
	StringConCat(&Var0, "@", 64);
	StringConCat(&Var0, &(uParam0->f_21[iParam2 /*8*/]), 64);
	return HUD::_0xD8402B858F4DDD88(&Var0, HUD::GET_LENGTH_OF_LITERAL_STRING(&Var0));
}

int func_927(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (iParam2 == -1)
	{
		return -1;
	}
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((*uParam0)[iVar0 /*4*/] == iParam1 && (uParam0[iVar0 /*4*/])->f_3 == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_928(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::DOES_GROUP_EXIST(iParam1))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(iParam0, iParam1);
}

int func_929(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 2069893421;
		case 1:
			return 1747661667;
		case 2:
			return -875426853;
		case 3:
			return 757105507;
		case 4:
			return -1879729569;
		case 5:
			return 787316203;
		case 6:
			return 2129028479;
		case 7:
			return 1261138928;
		case 8:
			return -1894256235;
		case 9:
			return 1706052688;
		case 10:
			return 1285391378;
		case 11:
			return 693005399;
		case 12:
			return 790678034;
		case 13:
			return 2031132011;
		case 14:
			return -1019271530;
		case 15:
			return 1183803081;
		case 16:
			return 1338756401;
		case 17:
			return 744226541;
		case 18:
			return 530671939;
		case 19:
			return -367868014;
		case 20:
			return -1549775456;
		case 21:
			return -1604265010;
		case 22:
			return -1827447245;
		case 23:
			return -759061492;
		case 24:
			return 1105471824;
		case 25:
			return -2048056274;
		case 26:
			return 1741725206;
		case 27:
			return 1901448492;
		case 28:
			return 911414965;
		case 29:
			return 1062881804;
		case 30:
			return -944178516;
		case 31:
			return 1400887301;
		case 32:
			return 1865339861;
		case 33:
			return 1440632655;
		case 34:
			return -1157194180;
		case 35:
			return -1151085798;
		case 36:
			return -1915486054;
		case 37:
			return -377574959;
		case 38:
			return -102827824;
		case 39:
			return 41932468;
		case 40:
			return 1437199060;
		case 41:
			return 1985273028;
		case 42:
			return -1988984077;
		case 43:
			return 1261539922;
		case 44:
			return -1190908814;
		case 45:
			return 805845691;
		case 46:
			return 214785091;
		case 47:
			return -1169075737;
		case 48:
			return -2073547330;
		case 49:
			return 1472024063;
		case 50:
			return -585098035;
		case 51:
			return -2141145462;
		case 52:
			return -832908671;
		case 53:
			return 1961205920;
		case 54:
			return -2038873145;
		case 55:
			return -1327698122;
		case 56:
			return 992695664;
		case 57:
			return -937655290;
		case 58:
			return -1914604474;
		case 59:
			return 205166155;
		case 60:
			return 1780028424;
		case 61:
			return -835345303;
		case 62:
			return 558731558;
		case 63:
			return 1921351553;
		case 64:
			return -378561682;
		case 65:
			return 1306457250;
		case 66:
			return 1131758526;
		case 67:
			return 358997942;
		case 68:
			return -1976230089;
		case 69:
			return -907971236;
		case 70:
			return 253727941;
		case 71:
			return -1271310569;
		case 72:
			return -1461871483;
		case 73:
			return -1239377811;
		case 74:
			return 1639899405;
		case 75:
			return -1816811601;
		case 76:
			return -2139497371;
		case 77:
			return 978801228;
		case 78:
			return -1309844859;
		case 79:
			return -102545856;
		case 80:
			return -1882615108;
		case 81:
			return 104820669;
		case 82:
			return 72801698;
		case 83:
			return -1533288167;
		case 84:
			return 2041846130;
		case 85:
			return -350556716;
		case 86:
			return -353010695;
		case 87:
			return -692335380;
		case 88:
			return 1504223919;
		case 89:
			return -520556863;
		case 90:
			return 713508039;
		case 91:
			return -82191741;
		case 92:
			return -1221836150;
		case 93:
			return 229544920;
		case 94:
			return 1423490462;
		case 95:
			return 266787856;
		case 96:
			return -863017340;
		case 97:
			return 175025255;
		case 98:
			return -2066076661;
		case 99:
			return 745945503;
		case 100:
			return -596510485;
		case 101:
			return 1995043222;
		case 102:
			return 709801630;
		case 103:
			return 1190538002;
		case 104:
			return -1812870325;
		case 105:
			return 1753192824;
		case 106:
			return -936508922;
		case 107:
			return -1672929718;
		case 108:
			return 1562378696;
		case 109:
			return 7562841;
		case 110:
			return 1250977037;
		case 111:
			return 1139025222;
		case 112:
			return 1128086492;
		case 113:
			return -1948083328;
		case 114:
			return joaat("SLOT_UNARMED");
		case 115:
			return 1314299724;
		case 116:
			return 0;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

struct<2> func_930()
{
	struct<2> Var0;
	Var0.f_1 = -1;
	Var0 = -1;
	return Var0;
}

void func_931(int iParam0)
{
	Global_40.f_7748.f_4 = (Global_40.f_7748.f_4 || iParam0);
}

void func_932(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (iVar1 >= iParam2 && iVar1 < (iParam2 + iParam1))
		{
			fVar0 = 0f;
		}
		else
		{
			fVar0 = 1f;
		}
		switch (iVar1)
		{
			case 0:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip01_Ctrl", fVar0);
				break;
			case 1:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip02_Ctrl", fVar0);
				break;
			case 2:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip03_Ctrl", fVar0);
				break;
			case 3:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip04_Ctrl", fVar0);
				break;
			case 4:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip05_Ctrl", fVar0);
				break;
			case 5:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip06_Ctrl", fVar0);
				break;
			case 6:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip07_Ctrl", fVar0);
				break;
			case 7:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip08_Ctrl", fVar0);
				break;
			case 8:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip09_Ctrl", fVar0);
				break;
			case 9:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip10_Ctrl", fVar0);
				break;
		}
		iVar1++;
	}
}

bool func_933()
{
	return Global_1572887.f_80.f_63 != 0;
}

int func_934(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("P_CHIPS_BLA01X");
			return 1;
		case 1:
			*uParam0 = joaat("P_CHIPS_CAMP01X");
			return 1;
		case 2:
			*uParam0 = joaat("P_CHIPS_GAR_KOR01X");
			return 1;
		case 3:
			*uParam0 = joaat("P_CHIPS05X10_RHO");
			return 1;
		case 4:
			*uParam0 = joaat("P_CHIPS_FLA01X");
			return 1;
		case 5:
			*uParam0 = joaat("P_CHIPS_LA_BAS01X");
			return 1;
		case 6:
			*uParam0 = joaat("P_CHIPS_OPI01X");
			return 1;
		case 7:
			*uParam0 = joaat("P_CHIPS_VAL01X");
			return 1;
		case 8:
			*uParam0 = joaat("P_CHIPS_VAL01X");
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_935(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("P_CARDSSPLIT01X_BLA");
			return 1;
		case 1:
			*uParam0 = joaat("P_CARDSSPLIT01X_CAMP");
			return 1;
		case 2:
			*uParam0 = joaat("P_CARDSSPLIT01X_GK");
			return 1;
		case 3:
			*uParam0 = joaat("P_CARDSSPLIT01X_RHO");
			return 1;
		case 4:
			*uParam0 = joaat("P_CARDSSPLIT01X_RRS");
			return 1;
		case 5:
			*uParam0 = joaat("P_CARDSSPLIT01X_STD_LABASTILLE");
			return 1;
		case 6:
			*uParam0 = joaat("P_CARDSSPLIT01X_STD_OPIUM");
			return 1;
		case 7:
			*uParam0 = joaat("P_CARDSSPLIT01X_VAL");
			return 1;
		case 8:
			*uParam0 = joaat("P_CARDSSPLIT01X_VAN");
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_936(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 5;
		case 5:
			return 6;
		case 6:
			return 5;
		case 7:
			return 2;
		case 8:
			return 1;
		case 9:
			return 2;
		case 10:
			return 4;
		case 11:
			return 3;
		case 12:
			return 6;
		case 14:
			return 6;
		case 15:
			return 6;
		case 16:
			return 2;
		case 17:
			return 6;
		case 18:
			return 0;
		case 26:
			return 6;
		case 28:
			return 5;
		case 29:
			return 2;
		case 34:
			return 5;
		case 35:
			return 1;
		case 36:
			return 4;
		case 37:
			return 7;
		case 38:
			return 5;
		case 39:
			return 1;
		case 41:
			return 1;
		case 45:
			return 0;
		case 46:
			return 5;
		case 47:
			return 6;
		case 48:
			return 1;
		case 50:
			return 7;
		case 51:
			return 6;
		case 52:
			return 4;
		case 53:
			return 7;
		case 56:
			return 6;
		case 58:
			return 4;
		case 61:
			return 6;
		case 63:
			return 3;
		case 64:
			return 6;
		case 66:
			return 6;
		case 67:
			return 7;
		case 68:
			return 3;
		case 71:
			return 7;
		case 73:
			return 6;
		case 75:
			return 6;
		case 76:
			return 7;
		default:
			break;
	}
	return 8;
}

char* func_937(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_VOFX_MALE_AVOID_01";
		case 1:
			return "MINIGAME_VOFX_MALE_AVOID_02";
		case 2:
			return "MINIGAME_VOFX_MALE_AVOID_03";
		case 3:
			return "MINIGAME_VOFX_MALE_AVOID_04";
		case 4:
			return "MINIGAME_VOFX_MALE_AVOID_05";
		case 5:
			return "MINIGAME_VOFX_MALE_AGGRESSIVE_01";
		case 6:
			return "MINIGAME_VOFX_MALE_AGGRESSIVE_03";
		case 7:
			return "MINIGAME_VOFX_MALE_TIMID_01";
		case 8:
			return "unknown";
		default:
			break;
	}
	return "unknown";
}

void func_938(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11)
{
	vector3 vVar0;
	vVar0 = { vParam4 - vParam0 };
	*uParam10 = ((vVar0.x * BUILTIN::COS(-fParam3)) - (vVar0.y * BUILTIN::SIN(-fParam3)));
	uParam10->f_1 = ((vVar0.x * BUILTIN::SIN(-fParam3)) + (vVar0.y * BUILTIN::COS(-fParam3)));
	uParam10->f_2 = vVar0.z;
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z - fParam3);
}

int func_939(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < iParam1)
	{
		return iParam1;
	}
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	return iParam0;
}

void func_940(var uParam0)
{
	if (*uParam0 != 0)
	{
		*uParam0 = 0;
	}
}

void func_941(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	if (Global_1058888.f_42784[iParam0 /*12*/].f_4 == iParam1 && !bParam2)
	{
		return;
	}
	Global_1058888.f_42784[iParam0 /*12*/].f_4 = iParam1;
	HUD::_SET_MP_GAMER_TAG_TOP_ICON(Global_1058888.f_42784[iParam0 /*12*/].f_2, iParam1);
}

void func_942(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	if (Global_1058888.f_42784[iParam0 /*12*/].f_6 == iParam1)
	{
		return;
	}
	Global_1058888.f_42784[iParam0 /*12*/].f_6 = iParam1;
	HUD::_SET_MP_GAMER_TAG_SECONDARY_ICON(Global_1058888.f_42784[iParam0 /*12*/].f_2, iParam1);
}

bool func_943(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1058888.f_42357.f_164), iParam0);
}

int func_944(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 30;
		case 2:
			return 75;
		case 3:
			return 175;
		case 4:
			return 625;
		case 5:
			return 1000;
		default:
			break;
	}
	return 30;
}

void func_945(int iParam0, bool bParam1)
{
	if (*iParam0 != -1)
	{
		__LIB_1__::func_68(*iParam0, -1);
		__LIB_1__::func_69(*iParam0, 0);
		__LIB_1__::func_70(*iParam0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[*iParam0]))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[*iParam0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[*iParam0]));
		}
	}
	*iParam0 = -1;
}

void func_946(int iParam0, int iParam1)
{
	__LIB_0__::func_8(&(Global_1914319.f_3[iParam0 /*446*/].f_6), iParam1);
}

int func_947(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = __LIB_9__::func_891(iParam1);
	if (!__LIB_0__::func_205(iParam0, iVar0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") && DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		iVar2 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
		iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
		if (iVar1 == iVar0 && PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar2))
		{
			return 1;
		}
		else
		{
			__LIB_0__::func_60(iParam0);
		}
	}
	iVar3 = PED::_REQUEST_METAPED_OUTFIT(ENTITY::GET_ENTITY_MODEL(iParam0), iVar0);
	DECORATOR::DECOR_SET_INT(iParam0, "metaped_outfit_request", iVar3);
	DECORATOR::DECOR_SET_INT(iParam0, "metaped_outfit_request_name", iVar0);
	return 1;
}

void func_948(char[4] cParam0, int iParam1)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(iParam1, true))
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1, true, false))
	{
		return;
	}
	iVar0 = __LIB_5__::func_433(&(cParam0->f_1126), iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if (!__LIB_5__::func_459(cParam0->f_1126[iVar0 /*67*/].f_3, __LIB_6__::func_864(cParam0)))
	{
		return;
	}
	cParam0->f_1126[iVar0 /*67*/].f_66 = 1;
}

void func_949(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		PLAYER::_0x28A13BF6B05C3D83(PLAYER::PLAYER_ID(), true);
		PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), fParam1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 159, true);
		PLAYER::_0xBBA140062B15A8AC(PLAYER::PLAYER_ID());
	}
	else
	{
		if (!__LIB_6__::func_666(13))
		{
			PLAYER::_0x28A13BF6B05C3D83(PLAYER::PLAYER_ID(), false);
		}
		PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0f);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 159, false);
		PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
	}
}

bool func_950(int iParam0)
{
	return __LIB_1__::func_935(iParam0, 8);
}

void func_951(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_1__::func_936(iParam0, 256);
		__LIB_1__::func_937(iParam0, 512);
		__LIB_1__::func_937(iParam0, 1048576);
	}
	else
	{
		__LIB_1__::func_937(iParam0, 256);
	}
	if (bParam2)
	{
		__LIB_1__::func_946(iParam0);
	}
}

void func_952(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	iVar0 = __LIB_3__::func_970(iParam0);
	if (!bParam1)
	{
		__LIB_1__::func_113(iVar0, sParam4, iParam5);
	}
	__LIB_1__::func_430(iVar0, bParam1, fParam2, iParam3, 752097756);
}

int func_953(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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
		__LIB_1__::func_223(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, bParam12, bParam13);
		return iVar1;
	}
	return 0;
}

bool func_954(int iParam0, int iParam1, char* sParam2, float fParam3)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam2))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	if (__LIB_6__::func_768(iParam0, vVar0, sParam2, fParam3))
	{
		return true;
	}
	return false;
}

void func_955(int iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_0__::func_450(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_122(iParam0))
	{
		if (__LIB_1__::func_123(iParam0))
		{
			__LIB_0__::func_828(iParam0, 2);
			__LIB_0__::func_828(iParam0, 4);
			if (bParam2)
			{
				if (!__LIB_0__::func_296(0, 0, 1))
				{
					__LIB_0__::func_703(1, 4);
				}
			}
		}
	}
}

void func_956(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_4__::func_562(uParam0, 512))
	{
		return;
	}
	if (__LIB_0__::func_264(&(uParam0->f_2262)) < 2f)
	{
		return;
	}
	if (__LIB_8__::func_356(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_4__::func_532(uParam0, 524288);
	}
}

void func_957(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_804, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_804)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_3__::func_120();
		}
		return;
	}
	if ((__LIB_4__::func_988(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_804, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_804))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_3__::func_120();
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
	if (__LIB_0__::func_1(uParam0->f_861, 512))
	{
		bVar2 = true;
	}
	if (__LIB_8__::func_356(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_804);
		__LIB_3__::func_120();
	}
}

void func_958(char[4] cParam0)
{
	var uVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	iVar16 = __LIB_6__::func_864(cParam0);
	iVar17 = __LIB_5__::func_24(iVar16);
	iVar18 = __LIB_8__::func_663(cParam0, iVar16);
	if (cParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2504)
		{
			if (__LIB_0__::func_755(&(cParam0->f_8269[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_9__::func_151(cParam0, &(cParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_4__::func_972(&(cParam0->f_8269[iVar19 /*16*/]));
				}
				else if (__LIB_9__::func_152(cParam0, &(cParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_5__::func_29(&(cParam0->f_8269[iVar19 /*16*/]));
					if (iVar19 < (cParam0->f_8269.f_2504 - 1))
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269[iVar19 /*16*/]), &(cParam0->f_8269[(cParam0->f_8269.f_2504 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(cParam0->f_8269[cParam0->f_8269.f_2504 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269[iVar19 /*16*/]), &uVar0, 16);
					}
					cParam0->f_8269.f_2504 = (cParam0->f_8269.f_2504 - 1);
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2505 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2505)
		{
			if (__LIB_0__::func_755(&(cParam0->f_8269.f_641[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_9__::func_55(cParam0, &(cParam0->f_8269.f_641[iVar19 /*16*/]), iVar16, iVar17, iVar18, 1))
				{
					__LIB_4__::func_990(&(cParam0->f_8269.f_641[iVar19 /*16*/]));
					if (iVar19 < (cParam0->f_8269.f_2505 - 1))
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_641[iVar19 /*16*/]), &(cParam0->f_8269.f_641[(cParam0->f_8269.f_2505 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_641[(cParam0->f_8269.f_2505 - 1) /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_641[iVar19 /*16*/]), &uVar0, 16);
					}
					cParam0->f_8269.f_2505 = (cParam0->f_8269.f_2505 - 1);
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2506 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2506)
		{
			if (__LIB_0__::func_755(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_9__::func_55(cParam0, &(cParam0->f_8269.f_1282[iVar19 /*16*/]), iVar16, iVar17, iVar18, 0))
				{
					if (__LIB_1__::func_388(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), 1))
					{
						if (__LIB_0__::func_755(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), 4))
						{
							__LIB_4__::func_991(&(cParam0->f_8269));
						}
						if (iVar19 < (cParam0->f_8269.f_2506 - 1))
						{
							MISC::_COPY_MEMORY(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), &(cParam0->f_8269.f_1282[(cParam0->f_8269.f_2506 - 1) /*16*/]), 16);
							MISC::_COPY_MEMORY(&(cParam0->f_8269.f_1282[(cParam0->f_8269.f_2506 - 1) /*16*/]), &uVar0, 16);
							iVar19 = (iVar19 - 1);
						}
						else
						{
							MISC::_COPY_MEMORY(&(cParam0->f_8269.f_1282[iVar19 /*16*/]), &uVar0, 16);
						}
						cParam0->f_8269.f_2506 = (cParam0->f_8269.f_2506 - 1);
					}
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2507 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2507)
		{
			if (__LIB_0__::func_755(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_9__::func_151(cParam0, &(cParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_9__::func_486(cParam0, &(cParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
					__LIB_0__::func_324(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
				}
				else if (__LIB_9__::func_152(cParam0, &(cParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_9__::func_486(cParam0, &(cParam0->f_8269.f_2243[iVar19 /*16*/]), 0);
					__LIB_0__::func_324(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), 2);
					if (iVar19 < (cParam0->f_8269.f_2507 - 1))
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), &(cParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), 16);
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(cParam0->f_8269.f_2243[iVar19 /*16*/]), &uVar0, 16);
					}
					cParam0->f_8269.f_2507 = (cParam0->f_8269.f_2507 - 1);
				}
			}
			iVar19++;
		}
	}
}

void func_959(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = Global_35;
	}
	__LIB_9__::func_900();
	Global_1905942 = Global_40.f_7729;
	if (__LIB_0__::func_156(32768))
	{
		__LIB_7__::func_361(&(Global_1946804.f_1735.f_120));
		__LIB_0__::func_945();
	}
	if (Global_40.f_7729 <= -1)
	{
		Global_1905942 = 0;
		__LIB_9__::func_4(iParam0, Global_1905942, &(Global_1946804.f_1735), 0, Global_1946804.f_1497, 0);
	}
	else if (Global_40.f_7729 <= 5)
	{
		__LIB_9__::func_4(iParam0, Global_1905942, &(Global_1946804.f_1735), 0, Global_1946804.f_1497, 0);
	}
	else
	{
		__LIB_9__::func_4(iParam0, Global_1905942, &(Global_1946804.f_1735), 0, 0, 0);
	}
}

void func_960(int iParam0, bool bParam1)
{
	__LIB_7__::func_363(&(Global_1946804.f_1735.f_120));
	__LIB_9__::func_5(iParam0, &(Global_1946804.f_1735), bParam1, 0, 1, 1);
}

void func_961(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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
			bVar1 = __LIB_9__::func_907(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = __LIB_9__::func_907(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = __LIB_9__::func_907(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = __LIB_9__::func_907(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = __LIB_9__::func_907(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = __LIB_9__::func_907(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
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

bool func_962(char[4] cParam0, int iParam1, char[4] cParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	struct<8> Var0;
	char cVar8[64];
	Var0 = { __LIB_6__::func_907(iParam1) };
	cVar8 = { __LIB_0__::func_865(iParam1) };
	return __LIB_9__::func_910(cParam0, __LIB_0__::func_271(iParam1), &Var0, &cVar8, cParam2, iParam3, iParam4, fParam5, fParam6, iParam7, 1);
}

void func_963(int iParam0)
{
	Global_20710.f_1168[iParam0] = (Global_20710.f_1168[iParam0] - 1);
	Global_20710.f_1322[iParam0] = -15;
}

void func_964(int iParam0, char[32] cParam1)
{
	__LIB_9__::func_107(&(iParam0->f_428), cParam1);
}

void func_965(int iParam0, char[4] cParam1, bool bParam2)
{
	__LIB_5__::func_516(&(iParam0->f_428), cParam1, bParam2);
}

void func_966(int iParam0)
{
	Global_26796.f_774 = (Global_26796.f_774 || iParam0);
}

void func_967(int iParam0)
{
	Global_1946804.f_1 = iParam0;
}

bool func_968(int iParam0)
{
	return Global_32074.f_2697.f_6[iParam0 /*6*/].f_4;
}

void func_969(int iParam0, int iParam1)
{
	if (__LIB_4__::func_810(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] = (Global_40.f_9052.f_11[iParam0] || iParam1);
	}
}

void func_970()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar4 = 0;
		while (iVar4 < 5)
		{
			__LIB_0__::func_242(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), iVar0, iVar4);
			__LIB_0__::func_242(&(Global_1946804.f_1497.f_1[iVar1 /*3*/]), iVar1, iVar4);
			__LIB_0__::func_242(&(Global_1946804.f_1497.f_1[iVar2 /*3*/]), iVar2, iVar4);
			__LIB_0__::func_242(&(Global_1946804.f_1497.f_1[iVar3 /*3*/]), iVar3, iVar4);
			iVar4++;
		}
		return;
	}
	iVar4 = 0;
	while (iVar4 < 5)
	{
		__LIB_0__::func_243(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), iVar0, iVar4);
		__LIB_0__::func_243(&(Global_1946804.f_1497.f_1[iVar1 /*3*/]), iVar1, iVar4);
		__LIB_0__::func_243(&(Global_1946804.f_1497.f_1[iVar2 /*3*/]), iVar2, iVar4);
		__LIB_0__::func_243(&(Global_1946804.f_1497.f_1[iVar3 /*3*/]), iVar3, iVar4);
		iVar4++;
	}
}

int func_971(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -888790689;
		case 1:
			return -2126063412;
		case 2:
			return -368305354;
		case 3:
			return -1500843424;
		case 4:
			return 2034750397;
		case 5:
			return -1689805015;
		case 6:
			return 1855421528;
		case 7:
			return -1844483462;
		case 8:
			return -618101597;
		case 9:
			return -516195177;
		case 10:
			return 1193363351;
		default:
			break;
	}
	return 0;
}

int func_972(int iParam0)
{
	if (__LIB_0__::func_241() == 1160113249)
	{
		switch (iParam0)
		{
			case 0:
				return 1331190543;
			case 1:
				return 1336948195;
			case 2:
				return 216184750;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return joaat("CLOTHING_ITEM_BEARD_SINGLE");
		case 1:
			return joaat("CLOTHING_ITEM_CHOPS_NORMAL");
		case 2:
			return joaat("CLOTHING_ITEM_STACHE_NORMAL");
		default:
			break;
	}
	return 0;
}

void func_973(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
	}
	else if (iParam1 > 48)
	{
		iParam1 = 48;
	}
	Global_1347702[iParam0 /*49*/].f_47 = iParam1;
}

void func_974(int iParam0)
{
	if (!__LIB_2__::func_824(iParam0))
	{
		return;
	}
	if (!__LIB_2__::func_960(iParam0))
	{
	}
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_4 = 1;
}

int func_975(int iParam0)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	return Global_40.f_4942[iParam0 /*60*/].f_6;
}

void func_976(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_241() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar2 = 1;
	}
	iVar0 = __LIB_9__::func_439(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 1;
		if (((iVar0 == -1906834168 && uParam0->f_1[iVar1 /*3*/] != __LIB_9__::func_440()) || iVar0 == -452152720) || iVar0 == -70852636)
		{
			uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
			Global_1946804.f_2656 = iParam1;
		}
		else if (__LIB_0__::func_219(uParam0->f_1[iVar1 /*3*/], iVar2, iVar0, __LIB_0__::func_2() != -1) != -1)
		{
			uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
			Global_1946804.f_2656 = iParam1;
		}
	}
}

int func_977(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[10];
	int iVar21;
	int iVar22;
	if (!__LIB_9__::func_765(iParam0, iParam1, &Var0, &iVar21, bParam2))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar22 = 0;
	while (iVar22 < iVar21)
	{
		if (Var0[iVar22 /*2*/] == joaat("CURRENCY_CASH"))
		{
			return Var0[iVar22 /*2*/].f_1;
		}
		else if (Var0[iVar22 /*2*/] == 0)
		{
		}
		else
		{
			iVar22++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

void func_978(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_204(iParam0, 32768, 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(PERSCHAR::_0xA00DF706C60173D1(__LIB_0__::func_725(iParam0, 1)), true);
		if (bParam2)
		{
			Global_1360165[iParam0 /*1157*/].f_126 = __LIB_0__::func_992(iParam0);
		}
	}
	else
	{
		__LIB_0__::func_176(iParam0, 32768, 1);
	}
}

void func_979(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	switch (Global_40.f_7731[iParam0 /*5*/])
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
		case 10:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}
	if (bParam3)
	{
		__LIB_9__::func_171(uParam1, uParam2, &uVar0, &uVar1, 0, __LIB_4__::func_670(iParam0));
	}
}

bool func_980(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && !TASK::_0x0C3CB2E600C8977D(Global_35, 1))
		{
			if (((TASK::_0x02EBBB3989B7E695(Global_35) || (bParam0 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))) || (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35) && TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_35, "SCENARIO_POINT_TRANS_COMPLETE"))) || (__LIB_0__::func_644(16777216) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336)))
			{
				return true;
			}
		}
	}
	return false;
}

int func_981(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return 0;
}

bool func_982(int iParam0)
{
	if (!__LIB_7__::func_823(32))
	{
		return false;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
	{
		return false;
	}
	if (!__LIB_9__::func_174())
	{
		return false;
	}
	if (__LIB_6__::func_14(16))
	{
		return false;
	}
	if (!GANG::_0xD6F6ACF4392187FB(Global_1225639.f_14) || !GANG::_0x424B17A7DC5C90BC(PLAYER::INT_TO_PLAYERINDEX(Global_1225639)))
	{
		return false;
	}
	if (iParam0 == 1 && __LIB_0__::func_27(Global_1131433.f_8, 1))
	{
		return false;
	}
	return true;
}

void func_983(int iParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	if (__LIB_3__::func_740(&(Global_1835011[iParam0 /*74*/]), 8192))
	{
		bVar0 = true;
	}
	Global_1835011[iParam0 /*74*/].f_63 = 0;
	if (!bParam1 && bVar0)
	{
		Global_1835011[iParam0 /*74*/].f_63 |= 2;
		Global_1835011[iParam0 /*74*/].f_63 |= 8192;
	}
}

int func_984(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	__LIB_7__::func_642(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (__LIB_2__::func_999(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_985(int iParam0)
{
	if (!__LIB_9__::func_192())
	{
		return 0;
	}
	__LIB_7__::func_794(iParam0);
	Global_1898068.f_4 = 1;
	return 1;
}

int func_986(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 1573112293))
	{
		return __LIB_9__::func_185(iParam0);
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case -77448735:
			if (__LIB_7__::func_795(iParam0))
			{
				return __LIB_9__::func_185(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return __LIB_9__::func_185(iParam0);
		case 1802292908:
			return __LIB_7__::func_796();
		case -2061583405:
		case -1719060085:
		case 81053684:
			return __LIB_7__::func_797();
		case -525676072:
			return __LIB_7__::func_797();
		case 1779021115:
			if (__LIB_0__::func_144(iParam0, 0))
			{
				if (iParam0 == joaat("WEAPON_KIT_CAMERA"))
				{
					return __LIB_7__::func_798();
				}
			}
			return __LIB_7__::func_799();
		case -1823706425:
			return __LIB_7__::func_800();
		case -854348463:
			return __LIB_7__::func_801();
		default:
			if (__LIB_0__::func_144(iParam0, 0))
			{
				if (__LIB_0__::func_192(iParam0, 1192444843) || __LIB_0__::func_192(iParam0, -1540973036))
				{
					return __LIB_7__::func_802();
				}
				else if (__LIB_0__::func_192(iParam0, 1919582297))
				{
					return __LIB_7__::func_803();
				}
				else if (__LIB_0__::func_192(iParam0, 1147021565))
				{
					return __LIB_7__::func_804();
				}
				switch (iParam0)
				{
					case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
					case -1448210800: /* GXTEntry: "Crafting Tools" */
						return __LIB_7__::func_805();
					case joaat("KIT_HORSE_BRUSH"):
						return __LIB_7__::func_806();
				}
			}
			return __LIB_7__::func_796();
	}
	return __LIB_7__::func_796();
}

void func_987(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_1__::func_748(uParam0[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_988(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;
	Var0 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		STATS::_0xBD861AE8A5181ED7(&Var0, iParam1);
	}
	__LIB_9__::func_822(iParam0, iParam1);
	return __LIB_9__::func_823(iParam0, iParam1, bParam2, iParam3);
}

void func_989(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[10];
	int iVar14;
	int iVar15;
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	iVar1 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	iVar2 = Global_40.f_4283;
	if (__LIB_7__::func_595(ENTITY::GET_ENTITY_MODEL(iVar0), iVar2))
	{
		iVar1 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	}
	else
	{
		__LIB_9__::func_815(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar3);
		iVar15 = 0;
		while (iVar15 < 10)
		{
			if (!__LIB_0__::func_144(uVar3[iVar15], 0))
			{
			}
			else if (!__LIB_5__::func_796(uVar3[iVar15]))
			{
			}
			else
			{
				iVar14 = __LIB_7__::func_651(uVar3[iVar15], iVar2);
				if (__LIB_7__::func_596(iVar14, iVar1))
				{
					iVar1 = iVar14;
				}
			}
			iVar15++;
		}
	}
	__LIB_7__::func_597(&iVar1);
	if (__LIB_7__::func_596(iVar1, Global_1357549.f_1492))
	{
		Global_1357549.f_1492 = iVar1;
	}
}

int func_990(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return __LIB_4__::func_60(Global_1835011[iParam0 /*74*/].f_1);
}

void func_991(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_ACUNAS_STAR_ORCHID_JN"), 0);
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_ALASKAN_GINSENG_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_ALASKAN_GINSENG_JN"), 0);
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_AMERICAN_GINSENG_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_AMERICAN_GINSENG_JN"), 0);
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BAY_BOLETE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BAY_BOLETE_JN"), 0);
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BLACKBERRY_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BLACKBERRY_JN"), 0);
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BLACK_CURRANT_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BLACK_CURRANT_JN"), 0);
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BULRUSH_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BULRUSH_JN"), 0);
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BURDOCK_ROOT_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_BURDOCK_ROOT_JN"), 0);
			}
			break;
		case 39:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CARROT_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CARROT_JN"), 0);
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CHANTERELLE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CHANTERELLE_JN"), 0);
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CIGAR_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CIGAR_ORCHID_JN"), 0);
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CLAMSHELL_ORCHID_JN"), 0);
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CREEPING_THYME_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_CREEPING_THYME_JN"), 0);
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_DESERT_SAGE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_DESERT_SAGE_JN"), 0);
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_JN"), 0);
			}
			break;
		case 15:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_ENGLISH_MACE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_ENGLISH_MACE_JN"), 0);
			}
			break;
		case 40:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_FEVERFEW_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_FEVERFEW_JN"), 0);
			}
			break;
		case 17:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_GHOST_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_GHOST_ORCHID_JN"), 0);
			}
			break;
		case 18:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_GOLDEN_CURRANT_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_GOLDEN_CURRANT_JN"), 0);
			}
			break;
		case 16:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_HUCKLEBERRY_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_HUCKLEBERRY_JN"), 0);
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_HUMMINGBIRD_SAGE_JN"), 0);
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_INDIAN_TOBACCO_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_INDIAN_TOBACCO_JN"), 0);
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_JN"), 0);
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_LADY_SLIPPER_ORCHID_JN"), 0);
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_MILKWEED_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_MILKWEED_JN"), 0);
			}
			break;
		case 41:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_MINT_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_MINT_JN"), 0);
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_MOCCASIN_ORCHID_JN"), 0);
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_JN"), 0);
			}
			break;
		case 26:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_OLEANDER_SAGE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_OLEANDER_SAGE_JN"), 0);
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_OREGANO_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_OREGANO_JN"), 0);
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_PARASOL_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_PARASOL_JN"), 0);
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_PRAIRIE_POPPY_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_PRAIRIE_POPPY_JN"), 0);
			}
			break;
		case 30:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_QUEENS_ORCHIDS_JN"), 0);
			}
			break;
		case 31:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RAMSHEAD_ORCHID_JN"), 0);
			}
			break;
		case 33:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RASPBERRY_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RASPBERRY_JN"), 0);
			}
			break;
		case 32:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RAT_TAIL_ORCHID_JN"), 0);
			}
			break;
		case 34:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RED_SAGE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_RED_SAGE_JN"), 0);
			}
			break;
		case 35:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_SPARROWS_EGG_ORCHID_JN"), 0);
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_SPIDER_ORCHID_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_SPIDER_ORCHID_JN"), 0);
			}
			break;
		case 37:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_VANILLA_FLOWER_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_VANILLA_FLOWER_JN"), 0);
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_VIOLET_SNOWDROP_JN"), 0);
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_WINTERBERRY_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_WINTERBERRY_JN"), 0);
			}
			break;
		case 43:
			if (bParam1 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_YARROW_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_HERB_YARROW_JN"), 0);
			}
			break;
		default:
			break;
	}
}

int func_992(int iParam0, int iParam1)
{
	int iVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_35) || PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar0, false) == Global_35)
		{
			if (iParam1 == joaat("KIT_WARDROBE"))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_9__::func_184(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_993(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (__LIB_4__::func_832() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1225639.f_10;
	iVar6 = Global_1225639.f_14;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, __LIB_0__::func_93());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, __LIB_0__::func_93());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, __LIB_0__::func_93());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || __LIB_4__::func_833(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (Global_1225639.f_21[iVar2])
		{
			iVar10 = Global_1225639.f_120[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (__LIB_4__::func_841(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1225639.f_54[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && __LIB_1__::func_960(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!__LIB_9__::func_200(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

bool func_994()
{
	int iVar0;
	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		return false;
	}
	iVar0 = __LIB_7__::func_914(Global_36, 0);
	if (iVar0 >= 8 && iVar0 <= 12)
	{
		return true;
	}
	return false;
}

bool func_995(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = __LIB_0__::func_421(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (__LIB_1__::func_707(iVar2, 1, 0) || __LIB_0__::func_530(__LIB_0__::func_529(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_426(__LIB_0__::func_421(iVar0))), __LIB_0__::func_426(__LIB_0__::func_421(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = __LIB_0__::func_942() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = __LIB_0__::func_965() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_531(iVar0)), __LIB_0__::func_531(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = __LIB_1__::func_35(iParam3, __LIB_0__::func_532(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (__LIB_1__::func_764(iVar2) - iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
				else
				{
					bVar1 = __LIB_1__::func_764(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (__LIB_1__::func_764(iVar2) + iParam7) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			else
			{
				bVar1 = __LIB_1__::func_764(iVar2) >= __LIB_1__::func_34(iParam3, __LIB_0__::func_533(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_534(iVar2)), __LIB_0__::func_534(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (__LIB_0__::func_314(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_535(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), __LIB_0__::func_535(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = __LIB_0__::func_438() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = __LIB_0__::func_528() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_0__::func_536(iVar0)), __LIB_0__::func_536(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = __LIB_1__::func_35(iParam3, __LIB_0__::func_532(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (__LIB_1__::func_764(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = __LIB_9__::func_831(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = __LIB_9__::func_831(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(__LIB_1__::func_72(iVar2)), __LIB_1__::func_72(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_996(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (__LIB_9__::func_831(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_9__::func_831(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_9__::func_831(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_9__::func_831(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_9__::func_831(iVar1))
		{
			*sParam2++;
		}
		if (__LIB_9__::func_831(iVar0) && __LIB_9__::func_831(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_9__::func_831(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_9__::func_831(iVar1))
		{
			*sParam2++;
		}
		if (__LIB_9__::func_831(iVar2))
		{
			*sParam2++;
		}
		if ((__LIB_9__::func_831(iVar0) && __LIB_9__::func_831(iVar1)) && __LIB_9__::func_831(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_9__::func_831(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_9__::func_831(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_9__::func_831(iVar1))
		{
			*sParam2++;
		}
		if (__LIB_9__::func_831(iVar2))
		{
			*sParam2++;
		}
		if (__LIB_9__::func_831(iVar3))
		{
			*sParam2++;
		}
		if (((__LIB_9__::func_831(iVar0) && __LIB_9__::func_831(iVar1)) && __LIB_9__::func_831(iVar2)) && __LIB_9__::func_831(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_997(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 10;
	iVar1 = Global_1946804.f_1497.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipHatFidget", true, 15);
		__LIB_1__::func_775(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, -358215195, 1, 1, 1, 0, 1, 0);
		__LIB_1__::func_704(iParam0, 0);
		return;
	}
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipHatFidget", true, 15);
	__LIB_1__::func_775(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	if (__LIB_0__::func_156(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
		__LIB_0__::func_945();
		__LIB_0__::func_155(128);
		return;
	}
	if (iVar1 == Global_1946804.f_57[iVar0 /*11*/])
	{
		__LIB_1__::func_704(iParam0, 1);
		return;
	}
	if (__LIB_1__::func_431(-2061583405, 0))
	{
		if (__LIB_6__::func_107(iVar1))
		{
			__LIB_1__::func_704(iVar1, 0);
		}
		else
		{
			__LIB_1__::func_853(iVar1, 1, 1, 0);
		}
		__LIB_1__::func_704(iParam0, 1);
		return;
	}
	if (__LIB_6__::func_107(iVar1))
	{
		__LIB_1__::func_704(iVar1, 0);
		__LIB_1__::func_704(iParam0, 1);
	}
	else if (__LIB_6__::func_107(iParam0))
	{
		if (iParam0 != __LIB_0__::func_856(0))
		{
			__LIB_9__::func_215(iParam0, iVar1);
			__LIB_1__::func_704(iParam0, 0);
			__LIB_1__::func_704(iVar1, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			__LIB_0__::func_155(128);
			__LIB_1__::func_704(iParam0, 1);
		}
	}
}

int func_998(int iParam0)
{
	if (WEAPON::_IS_WEAPON_PISTOL(iParam0))
	{
		return joaat("GROUP_PISTOL");
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iParam0))
	{
		return joaat("GROUP_REVOLVER");
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(iParam0))
	{
		return joaat("GROUP_REPEATER");
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iParam0))
	{
		return joaat("GROUP_RIFLE");
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iParam0))
	{
		return joaat("GROUP_SHOTGUN");
	}
	else if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
	{
		return joaat("GROUP_SNIPER");
	}
	return 0;
}

bool func_999(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}
