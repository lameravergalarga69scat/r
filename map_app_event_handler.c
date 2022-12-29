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
	int iScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	struct<4> Var0;
	struct<4> Var4;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	Var4.f_13 = -1;
	Var4.f_24 = -1;
	Var4.f_25 = -1;
	Var4.f_26 = -1;
	Var4.f_27 = -1;
	Var4.f_28 = 1;
	func_1(&Var4);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_2(&Var4);
	}
	while (true)
	{
		while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0))
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &Var0))
			{
				func_3(&Var0, &Var4);
				switch (Var0.f_2)
				{
					case joaat("ZONE"):
						Var4.f_4 = { Var0 };
						Var4 = { Var0 };
						switch (Var0)
						{
							case -1740156697:
								func_4(&Var4);
								break;
							case -632467210:
								Var4.f_24 = -1;
								Var4.f_25 = -1;
								func_5(&Var4);
								break;
						}
						Var4.f_28 = 1;
						break;
					case joaat("BLIP"):
						Var4 = { Var0 };
						switch (Var0)
						{
							case -1740156697:
								func_6(&Var4);
								break;
							case -632467210:
								func_7(&Var4);
								Var4 = { Var4.f_4 };
								func_4(&Var4);
								break;
							case -1203660660:
								func_8(&Var4);
								break;
						}
						break;
				}
				UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
			}
		}
		func_9(&Var4);
		func_10(&Var4);
		BUILTIN::WAIT(0);
	}
	func_2(&Var4);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	struct<30> Var0;
	Var0.f_13 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = 1;
	*uParam0 = { Var0 };
	uParam0->f_14 = -1;
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH("", "MapFocus");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "Region", "");
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_8, "ItemHovered", 0);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "HoveredName", "");
	HUD::_TEXT_DATABASE_REQUEST("FMMC");
	if (TXD::_DOES_STREAMED_TXD_EXIST(-1859668514))
	{
		TXD::_REQUEST_STREAMED_TXD(-1859668514, false);
	}
	uParam0->f_28 = 1;
}

void func_2(var uParam0)
{
	func_11(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(int iParam0, var uParam1)
{
	switch (iParam0->f_2)
	{
		case joaat("DISTRICT"):
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_24 = __LIB_0__::func_506(func_12(iParam0));
					uParam1->f_28 = 1;
					break;
			}
			break;
		case joaat("TEXT_WRITTEN"):
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_26 = func_12(iParam0);
					uParam1->f_28 = 1;
					break;
			}
			break;
		case joaat("TEXT_PRINTED"):
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_27 = func_12(iParam0);
					uParam1->f_28 = 1;
					break;
			}
			break;
		case joaat("TOWN"):
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_25 = __LIB_10__::func_851(func_12(iParam0));
					uParam1->f_28 = 1;
					break;
			}
			break;
	}
}

int func_4(var uParam0)
{
	uParam0->f_13 = uParam0->f_1;
	switch (func_15(uParam0))
	{
		case 2:
			uParam0->f_16 = func_16(uParam0->f_13);
			break;
		case 0:
			uParam0->f_16 = __LIB_9__::func_28(uParam0->f_14);
			break;
		case 1:
			uParam0->f_16 = func_18(uParam0->f_15);
			break;
		default:
			func_19(uParam0);
			return 0;
	}
	func_19(uParam0);
	return 1;
}

void func_5(var uParam0)
{
	func_19(uParam0);
}

int func_6(var uParam0)
{
	uParam0->f_19 = uParam0->f_1;
	if (!func_20(uParam0->f_19, &(uParam0->f_17)))
	{
		uParam0->f_19 = 0;
		return 0;
	}
	switch (uParam0->f_17)
	{
		case 63:
			if (func_21(uParam0->f_19, &(uParam0->f_22)))
			{
				uParam0->f_20 = MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(MISC::GET_HASH_KEY(&(Global_1835011[uParam0->f_22 /*74*/].f_8)));
			}
			else
			{
				uParam0->f_20 = -1640799778;
			}
			break;
		case 64:
			if (func_22(uParam0->f_19, &(uParam0->f_23)))
			{
				uParam0->f_20 = MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(MISC::GET_HASH_KEY(&(Global_1347702[uParam0->f_23 /*49*/].f_3)));
			}
			else
			{
				uParam0->f_20 = -1;
			}
			break;
		case 62:
			switch (func_15(uParam0))
			{
				case 0:
					uParam0->f_16 = __LIB_9__::func_28(uParam0->f_14);
					uParam0->f_20 = func_23(uParam0->f_13);
					if (!TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_20))
					{
						uParam0->f_20 = func_24();
					}
					break;
			}
			break;
		default:
			uParam0->f_20 = func_25(uParam0->f_17, uParam0->f_19);
			break;
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_20))
	{
		TXD::_REQUEST_STREAMED_TXD(uParam0->f_20, true);
		uParam0->f_21 = 1;
		return 1;
	}
	return 0;
}

void func_7(var uParam0)
{
	struct<2> Var0;
	func_26(uParam0);
	uParam0->f_17 = { Var0 };
	uParam0->f_17 = 0;
	uParam0->f_19 = 0;
	uParam0->f_22 = -1;
	uParam0->f_23 = -1;
	func_27(uParam0);
}

int func_8(var uParam0)
{
	if (uParam0->f_19 != uParam0->f_1)
	{
		return 0;
	}
	if (!func_20(uParam0->f_19, &(uParam0->f_17)))
	{
		uParam0->f_19 = 0;
		return 0;
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_20))
	{
		if (!uParam0->f_21)
		{
			uParam0->f_29 = 0;
			UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("MAP"), joaat("SHOW_INFO"));
			return 1;
		}
	}
	return 0;
}

void func_9(var uParam0)
{
	if (uParam0->f_28)
	{
		func_28(uParam0);
		uParam0->f_28 = 0;
	}
}

void func_10(var uParam0)
{
	if (func_29(uParam0))
	{
		switch (uParam0->f_17)
		{
			case 63:
				func_30(uParam0->f_19, uParam0);
				break;
			case 64:
				func_31(uParam0->f_19, uParam0);
				break;
			case 62:
				func_32(uParam0->f_13, uParam0);
				break;
			case 82:
				func_33(uParam0->f_19, uParam0);
				break;
			case 83:
				func_34(uParam0->f_19, uParam0);
				break;
			case 84:
				func_35(uParam0->f_19, uParam0);
				break;
			case 85:
				func_36(uParam0->f_19, uParam0);
				break;
			case 86:
				func_37(uParam0->f_17, uParam0);
				break;
			default:
				func_37(uParam0->f_17, uParam0);
				break;
		}
	}
}

void func_11(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_8);
}

int func_12(int iParam0)
{
	if (iParam0->f_1 != 0)
	{
		return iParam0->f_1;
	}
	return -1;
}

int func_15(var uParam0)
{
	if (uParam0->f_13 == -1)
	{
		return -1;
	}
	uParam0->f_16 = func_16(uParam0->f_13);
	if (uParam0->f_16 != 0)
	{
		return 2;
	}
	uParam0->f_14 = __LIB_10__::func_851(uParam0->f_13);
	if (__LIB_0__::func_20(uParam0->f_14))
	{
		return 0;
	}
	uParam0->f_15 = __LIB_0__::func_506(uParam0->f_13);
	if (__LIB_0__::func_69(uParam0->f_15))
	{
		return 1;
	}
	return -1;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AMBARINO"):
			return joaat("REGION_AMBARINO");
		case joaat("LEMOYNE"):
			return joaat("REGION_LEMOYNE");
		case joaat("NEWAUSTIN"):
			return joaat("REGION_NEW_AUSTIN");
		case joaat("NEWHANOVER"):
			return joaat("REGION_NEW_HANOVER");
		case joaat("WESTELIZABETH"):
			return joaat("REGION_WEST_ELIZABETH");
		case joaat("LOWERWESTELIZABETH"):
			return joaat("REGION_LOWER_WEST_ELIZABETH");
		case joaat("UPPERWESTELIZABETH"):
			return joaat("REGION_UPPER_WEST_ELIZABETH");
		case joaat("GUARMA"):
			return joaat("REGION_GUARMA");
		default:
			break;
	}
	return 0;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DISTRICT_BAYOU_NWA");
		case 1:
			return joaat("DISTRICT_BIG_VALLEY");
		case 2:
			return joaat("DISTRICT_BLUEGILL_MARSH");
		case 3:
			return joaat("DISTRICT_CUMBERLAND_FOREST");
		case 4:
			return joaat("DISTRICT_GREAT_PLAINS");
		case 5:
			return joaat("DISTRICT_GRIZZLIES");
		case 6:
			return joaat("DISTRICT_GRIZZLIES_EAST");
		case 7:
			return joaat("DISTRICT_GRIZZLIES_WEST");
		case 8:
			return joaat("DISTRICT_GUAMA");
		case 9:
			return joaat("DISTRICT_HEARTLAND");
		case 10:
			return joaat("DISTRICT_ROANOKE_RIDGE");
		case 11:
			return joaat("DISTRICT_SCARLETT_MEADOWS");
		case 12:
			return joaat("DISTRICT_TALL_TREES");
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
		default:
			break;
	}
	return 0;
}

void func_19(var uParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bVar0 = false;
	iVar1 = 0;
	sVar2 = "";
	iVar3 = __LIB_10__::func_851(uParam0->f_13);
	iVar4 = uParam0->f_24;
	if (!__LIB_0__::func_69(iVar4))
	{
		iVar4 = __LIB_0__::func_506(uParam0->f_13);
	}
	if (!__LIB_0__::func_69(iVar4))
	{
		iVar5 = __LIB_10__::func_29(__LIB_5__::func_235(iVar3, 1, 1));
	}
	else
	{
		iVar5 = __LIB_1__::func_905(iVar4);
	}
	if ((__LIB_10__::func_38(iVar4) || __LIB_10__::func_853(iVar5)) || __LIB_9__::func_19(iVar3))
	{
		if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
		}
		else
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
		}
		bVar0 = true;
	}
	else if (__LIB_0__::func_630(iVar5))
	{
		iVar1 = __LIB_10__::func_854(iVar5);
		if (iVar1 > 0)
		{
			bVar0 = true;
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_MAP_UI_BOUNTY_CASH", iVar1);
		}
	}
	if (!bVar0)
	{
		if ((56 == uParam0->f_14 && !__LIB_1__::func_185(52)) || (__LIB_0__::func_293(44) && (105 == uParam0->f_14 || 95 == uParam0->f_14)))
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "NO_WEAPON_REGION");
			bVar0 = true;
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_12, sVar2);
}

bool func_20(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bVar2 = MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &uVar1);
	*uParam1 = uVar0;
	uParam1->f_1 = uVar1;
	return bVar2;
}

bool func_21(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1898330)
	{
		if (!__LIB_0__::func_6(Global_1898330[iVar0]))
		{
		}
		else if (Global_1898346[iVar0 /*6*/].f_3 == 1)
		{
			*uParam1 = Global_1898346[iVar0 /*6*/].f_4;
			if ((__LIB_0__::func_83(*uParam1) && MAP::DOES_BLIP_EXIST(Global_1835011[*uParam1 /*74*/].f_27)) && Global_1835011[*uParam1 /*74*/].f_27 == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_22(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (((__LIB_0__::func_5(Global_40.f_450[iVar0]) && MAP::DOES_BLIP_EXIST(Global_1347702[Global_40.f_450[iVar0] /*49*/].f_37)) && Global_1347702[Global_40.f_450[iVar0] /*49*/].f_37 == iParam0) && !__LIB_0__::func_1(Global_1347702[Global_40.f_450[iVar0] /*49*/].f_12, 16777216))
		{
			*uParam1 = Global_40.f_450[iVar0];
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LAGRAS"):
			return joaat("ZONE_LAGRAS");
		case joaat("STDENIS"):
			return joaat("ZONE_SAINT_DENIS");
		case joaat("STRAWBERRY"):
			return joaat("ZONE_STRAWBERRY");
		case joaat("BLACKWATER"):
			return joaat("ZONE_BLACKWATER");
		case joaat("EMERALD"):
			return joaat("ZONE_EMERALD_RANCH");
		case joaat("VALENTINE"):
			return joaat("ZONE_VALENTINE");
		case joaat("ANNESBURG"):
			return joaat("ZONE_ANNESBURG");
		case joaat("VANHORN"):
			return joaat("ZONE_VAN_HORN_TRADING_POST");
		case joaat("RHODES"):
			return joaat("ZONE_RHODES");
		case joaat("ARMADILLO"):
			return joaat("ZONE_ARMADILLO");
		case joaat("TUMBLEWEED"):
			return joaat("ZONE_TUMBLEWEED");
		default:
			break;
	}
	return -1;
}

int func_24()
{
	return joaat("ZONE_VALENTINE");
}

int func_25(int iParam0, int iParam1)
{
	var uVar0;
	struct<16> Var1;
	int iVar17;
	var uVar18;
	int iVar19;
	iVar17 = -1;
	switch (iParam0)
	{
		case 13:
			return -834434971;
		case 14:
			return -1014339941;
		case 15:
			return -1131397804;
		case 17:
			return -1211307166;
		case 18:
			return 909802596;
		case 19:
			return -1932898631;
		case 47:
			return -1212983574;
		case 48:
			return -1805795741;
		case 49:
			return -1949319444;
		case 53:
			return -40867973;
		case 54:
			return -700024937;
		case 55:
			return -422762807;
		case 56:
			return 1307627757;
		case 57:
			return -1341878153;
		case 58:
			return 1334885374;
		case 59:
			return 1718870684;
		case 82:
			return -1640799778;
		case 83:
			return -1640799778;
		case 84:
			return -1640799778;
		case 85:
			return -1640799778;
		case 86:
			return -1640799778;
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
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
		case 51:
		case 60:
		case 61:
			Var1 = { func_54(iParam1, iParam0, &uVar0) };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 16:
			iVar17 = MISC::GET_HASH_KEY("MAP_CARD_BLK_BOUNTY");
			break;
		case 50:
			Var1 = { func_55() };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 46:
		case 52:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
			Var1 = { func_56(iParam0, iParam1, &uVar0) };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			StringCopy(&Var1, func_57(iParam0), 128);
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
			MAP::SET_BLIP_FLASHES(iParam1, &uVar18, &iVar19);
			StringCopy(&Var1, func_58(iVar19), 128);
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
	}
	if (iVar17 != -1)
	{
		return iVar17;
	}
	return -1;
}

void func_26(var uParam0)
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_8);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_9);
}

void func_27(var uParam0)
{
	if (!UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("MAP"), joaat("HIDE_INFO")))
	{
		uParam0->f_29 = 1;
	}
	else
	{
		uParam0->f_29 = 0;
	}
}

void func_28(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	sVar0 = func_59(uParam0->f_26, uParam0->f_27);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		if (uParam0->f_25 != -1)
		{
			iVar1 = __LIB_12__::func_563(uParam0->f_25);
		}
		if (uParam0->f_24 != -1)
		{
			iVar2 = __LIB_5__::func_641(uParam0->f_24);
			iVar3 = __LIB_5__::func_642(uParam0->f_24);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar1) && !MISC::IS_STRING_NULL_OR_EMPTY(iVar2))
		{
			sVar0 = MISC::_CREATE_VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", iVar1, iVar2);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(iVar3))
		{
			sVar0 = MISC::_CREATE_VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", iVar2, iVar3);
		}
		else
		{
			sVar0 = "";
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_10, sVar0);
}

bool func_29(var uParam0)
{
	if (uParam0->f_29)
	{
		func_27(uParam0);
	}
	if (!uParam0->f_21)
	{
		return false;
	}
	if (uParam0->f_17 == 0)
	{
		uParam0->f_21 = 0;
		return false;
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_20) && TXD::_HAS_STREAMED_TXD_LOADED(uParam0->f_20))
	{
		uParam0->f_21 = 0;
		return true;
	}
	return false;
}

void func_30(int iParam0, var uParam1)
{
	char cVar0[16];
	int iVar2;
	if (!__LIB_0__::func_83(uParam1->f_22))
	{
		if (!func_21(iParam0, &(uParam1->f_22)))
		{
			return;
		}
	}
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1835011[uParam1->f_22 /*74*/].f_26);
	MemCopy(&cVar0, {Global_1835011[uParam1->f_22 /*74*/].f_8}, 2);
	StringConCat(&cVar0, "_DESC_PM", 16);
	if (!HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
	{
		StringCopy(&cVar0, "", 16);
	}
	iVar2 = MISC::GET_HASH_KEY(&(Global_1835011[uParam1->f_22 /*74*/].f_8));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&cVar0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", iVar2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(iVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::MISSIONDATA_GET_TEXTURE_NAME(iVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360 /* GXTEntry: "Bounty:" */);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "$0.00");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_31(int iParam0, var uParam1)
{
	char cVar0[16];
	int iVar2;
	if (!__LIB_0__::func_5(uParam1->f_23))
	{
		if (!func_22(iParam0, &(uParam1->f_23)))
		{
			return;
		}
	}
	else if (__LIB_0__::func_1(Global_1347702[uParam1->f_23 /*49*/].f_12, 16777216))
	{
		return;
	}
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1347702[uParam1->f_23 /*49*/].f_36);
	MemCopy(&cVar0, {Global_1347702[uParam1->f_23 /*49*/].f_3}, 2);
	StringConCat(&cVar0, "_DESC_PM", 16);
	if (!HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
	{
		MemCopy(&cVar0, {Global_1347702[uParam1->f_23 /*49*/].f_3}, 2);
		StringConCat(&cVar0, "_DESC", 16);
	}
	iVar2 = MISC::GET_HASH_KEY(&(Global_1347702[uParam1->f_23 /*49*/].f_3));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&cVar0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", iVar2);
	if (!__LIB_0__::func_1(Global_1347702[uParam1->f_23 /*49*/].f_12, 1) && (__LIB_0__::func_1(Global_1347702[uParam1->f_23 /*49*/].f_12, 2) || Global_1347702[uParam1->f_23 /*49*/].f_36 == joaat("BLIP_RC")))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", -1859668514);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", joaat("IMAGE"));
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(iVar2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::MISSIONDATA_GET_TEXTURE_NAME(iVar2));
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360 /* GXTEntry: "Bounty:" */);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "$0.00");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_32(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "Zone");
	uParam1->f_20 = func_23(iParam0);
	iVar0 = __LIB_1__::func_882(uParam1->f_14);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_64(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(__LIB_5__::func_641(iVar0)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", func_65(iParam0));
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam1->f_20))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_23(iParam0));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", func_23(iParam0));
	}
	else
	{
		uParam1->f_20 = func_24();
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", uParam1->f_20);
	}
	iVar1 = __LIB_1__::func_905(iVar0);
	if (__LIB_0__::func_630(iVar1))
	{
		iVar2 = __LIB_10__::func_854(iVar1);
		if (iVar2 > 0)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", iVar2);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_NO_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
		}
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_town", uParam1->f_9);
}

void func_33(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	struct<7> Var2;
	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	Var2 = { __LIB_10__::func_852(PLAYER::INT_TO_PLAYERINDEX(iVar1)) };
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", __LIB_0__::func_666(PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(iVar1)), joaat("COLOR_PURE_WHITE")));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISC::GET_HASH_KEY(func_69(0, &Var2, __LIB_12__::func_440(0))));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", -486609646 /* GXTEntry: "Player Rank" */);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", func_70(iVar1));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_player", uParam1->f_9);
}

void func_34(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(func_71(iVar1)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(uParam1->f_17, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_35(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1058888.f_43923.f_283[iVar1 /*306*/]);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(uParam1->f_17, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_36(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_72(iVar1));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(uParam1->f_17, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_37(int iParam0, var uParam1)
{
	int iVar0;
	struct<16> Var1;
	char cVar17[128];
	char cVar33[128];
	var uVar49;
	int iVar50;
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	StringCopy(&cVar17, func_73(iParam0), 128);
	switch (func_74(iParam0))
	{
		case 1:
			Var1 = { func_54(uParam1->f_19, iParam0, &iVar0) };
			if (iParam0 == 16)
			{
				StringCopy(&Var1, "MAP_CARD_BOUNTY", 128);
			}
			StringCopy(&cVar33, __LIB_12__::func_563(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(&cVar17));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 2:
			StringCopy(&Var1, func_57(iParam0), 128);
			iVar0 = __LIB_1__::func_447(MAP::GET_BLIP_COORDS(uParam1->f_19), 1);
			StringCopy(&cVar33, __LIB_12__::func_563(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 3:
			Var1 = { func_56(iParam0, uParam1->f_19, &iVar0) };
			StringCopy(&cVar33, __LIB_12__::func_563(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 4:
			MAP::SET_BLIP_FLASHES(uParam1->f_19, &uVar49, &iVar50);
			StringCopy(&cVar17, __LIB_0__::func_759(func_76(iVar50)), 128);
			StringCopy(&Var1, func_78(iVar50), 128);
			iVar0 = __LIB_1__::func_447(MAP::GET_BLIP_COORDS(uParam1->f_19), 1);
			StringCopy(&cVar33, __LIB_12__::func_563(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 5:
			Var1 = { func_79(iVar0) };
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
			break;
		default:
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
			break;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(iParam0, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_value", 0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

struct<16> func_54(int iParam0, int iParam1, var uParam2)
{
	struct<16> Var0;
	vector3 vVar16;
	char cVar19[128];
	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		return Var0;
	}
	vVar16 = { MAP::GET_BLIP_COORDS(iParam0) };
	*uParam2 = __LIB_1__::func_447(vVar16, 1);
	while (vVar16.z < 200f && !__LIB_0__::func_20(*uParam2))
	{
		vVar16.f_2 = (vVar16.z + 25f);
		*uParam2 = __LIB_1__::func_447(vVar16, 1);
	}
	if (!__LIB_0__::func_20(*uParam2))
	{
		return Var0;
	}
	StringCopy(&Var0, "MAP_CARD_", 128);
	cVar19 = __LIB_5__::func_638(*uParam2);
	StringConCat(&Var0, &cVar19, 128);
	StringConCat(&Var0, "_", 128);
	StringConCat(&Var0, func_93(iParam1, *uParam2, vVar16), 128);
	return Var0;
}

struct<16> func_55()
{
	char cVar0[128];
	StringCopy(&cVar0, "MAP_CARD_NBX_STAGECOACH", 128);
	return cVar0;
}

struct<16> func_56(int iParam0, int iParam1, int iParam2)
{
	struct<16> Var0;
	vector3 vVar16;
	if (!MAP::DOES_BLIP_EXIST(iParam1))
	{
		return Var0;
	}
	vVar16 = { MAP::GET_BLIP_COORDS(iParam1) };
	if (vVar16.z == 0f)
	{
		__LIB_0__::func_634(&vVar16, 50, 10, 0);
	}
	if (vVar16.z == 0f)
	{
		vVar16.f_2 = Global_36.f_2;
	}
	*iParam2 = __LIB_1__::func_447(vVar16, 1);
	if (!__LIB_0__::func_20(*iParam2))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 52:
			StringCopy(&Var0, "MAP_CARD_CAMP_", 128);
			StringConCat(&Var0, func_95(*iParam2), 128);
			break;
		case 46:
			StringCopy(&Var0, "MAP_CARD_CAMP_BEECHERSHOPE", 128);
			break;
		case 65:
			StringCopy(&Var0, "MAP_CARD_CAMP_FOOD", 128);
			break;
		case 66:
			StringCopy(&Var0, "MAP_CARD_CAMP_TITHING_BOX", 128);
			break;
		case 67:
			StringCopy(&Var0, "MAP_CARD_CAMP_BUTCHER", 128);
			break;
		case 68:
			StringCopy(&Var0, "MAP_CARD_CAMP_HORSE_HITCH", 128);
			break;
		case 69:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_AMMO", 128);
			break;
		case 70:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_MEDICINE", 128);
			break;
		case 71:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_PROVISIONS", 128);
			break;
		case 72:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_POKER", 128);
			break;
		case 73:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_FIVE_FINGER", 128);
			break;
		case 74:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_DOMINOES", 128);
			break;
	}
	return Var0;
}

char* func_57(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MAP_CARD_MINIGAMES_BLACKJACK";
		case 7:
			return "MAP_CARD_MINIGAMES_FENCE_BUILDING";
		case 3:
			return "MAP_CARD_MINIGAMES_POKER";
		case 5:
			return "MAP_CARD_MINIGAMES_COW_MILKING";
		case 6:
			return "MAP_CARD_MINIGAMES_CLEANING_STALLS";
		case 2:
			return "MAP_CARD_MINIGAMES_DOMINOES_BLOCK";
		case 8:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_THREES";
		case 9:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_FIVES";
		case 10:
			return "MAP_CARD_MINIGAMES_DOMINOES_DRAW";
		case 4:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_CLASSIC";
		case 11:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_GUTS";
		default:
			break;
	}
	return "";
}

char* func_58(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return "MAP_CARD_CAMP_HORSESHOE_HUNTING_CHARLES";
		case joaat("HAI_FISHING_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_JAVIER";
		case joaat("HAI_FISHING_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_KIERAN";
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return "MAP_CARD_CAMP_HORSESHOE_FIVE_FINGER_FILLET_LENNY";
		case joaat("HAI_HUNTING_06"):
			return "MAP_CARD_CAMP_SHADYBELLE_HUNTING_PEARSON";
		case joaat("HAI_DOMINOES_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_DOMINOES_TILLY";
		case joaat("HAI_COACH_ROBBERY_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_SEAN";
		case joaat("HAI_COACH_ROBBERY_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_BILL";
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FIVE_FINGER_FILLET_MICAH";
		case joaat("HAI_BANK_ROBBERY_01"):
			return "MAP_CARD_CAMP_SHADYBELLE_BANK_ROBBERY_CHARLES";
		case joaat("HAI_COACH_ROBBERY_03"):
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_MICAH";
		case joaat("HAI_COACH_ROBBERY_04"):
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_LENNY";
		case joaat("HAI_RUSTLING_02"):
			return "MAP_CARD_CAMP_SHADYBELLE_RUSTLING_UNCLE";
		case joaat("HAI_HOME_ROBBERY_01"):
			return "MAP_CARD_CAMP_HORSESHOE_HOME_ROBBERY_JAVIER";
		default:
			break;
	}
	return "";
}

char* func_59(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = uParam1;
	if (iParam0 != -1)
	{
		iVar1 = func_96(iParam0);
		if (iVar1 == 0 || MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
		{
			iVar0 = iParam0;
		}
	}
	if (iVar0 == -1)
	{
		return "";
	}
	return MISC::_CREATE_VAR_STRING(0, iVar0);
}

int func_64(int iParam0)
{
	char* sVar0;
	sVar0 = func_98(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sVar0);
}

int func_65(int iParam0)
{
	char cVar0[64];
	char cVar8[64];
	StringCopy(&cVar0, func_98(iParam0), 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar8, "MAP_CARD_", 64);
	StringConCat(&cVar8, &cVar0, 64);
	StringConCat(&cVar8, "_DESC", 64);
	return MISC::GET_HASH_KEY(&cVar8);
}

char* func_69(int iParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(uParam1))
	{
		return "Invalid Handle";
	}
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
		default:
			sVar0 = "Unknown Type";
			break;
			sVar0 = NETWORK::_0xB5C4B18B12A2AF23(uParam1, 0);
			break;
		case 1:
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (iVar1 < 0)
			{
				sVar0 = NETWORK::_0xCAF4CA2F87779F8F(uParam1, 0);
			}
			else
			{
				sVar0 = func_103(iVar1);
			}
			break;
	}
	return sVar0;
}

int func_70(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1140157[iParam0 /*19*/];
}

char* func_71(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "NM_PLAYLIST_ADVERSARY_MEDIUM";
		case 3:
			return "NM_PLAYLIST_ADVERSARY_LARGE";
		case 4:
			return "NM_PLAYLIST_SPECIAL_MODES_1";
		case 5:
			return "NM_PLAYLIST_SPECIAL_MODES_2";
		case 0:
			return "NM_PLAYLIST_RACE";
		case 6:
			return "NM_PLAYLIST_NOMINATED";
		case 7:
			return "NM_BUCKET_NOMINATED_SERIES_SMALL";
		case 8:
			return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
		case 9:
			return "NM_BUCKET_NOMINATED_SERIES_LARGE";
		case 11:
			return "NM_PLAYLIST_ORBIS_SERIES_1";
		case 12:
			return "NM_PLAYLIST_ORBIS_SERIES_2";
		case 13:
			return "NM_PLAYLIST_ORBIS_SERIES_3";
		default:
			break;
	}
	return "NM_PLAYLIST_FFA";
}

var func_72(int iParam0)
{
	int iVar0;
	if (func_105(func_104(iParam0)))
	{
		iVar0 = joaat("GIVER_NAME");
	}
	else
	{
		iVar0 = joaat("GIVER_STRANGER_NAME");
	}
	return Global_1116295[iParam0 /*44*/].f_11.f_7[func_106(iVar0, 1)];
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "BLIP_MG_POKER";
		case 1:
			return "BLIP_MG_BLACKJACK";
		case 2:
			return "BLIP_MG_DOMINOES";
		case 7:
			return "BLIP_MG_FENCE_BUILDING";
		case 4:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 5:
			return "BLIP_SUMMER_COW";
		case 6:
			return "BLIP_SUMMER_HORSE";
		case 8:
			return "BLIP_MG_DOMINOES_ALL3S";
		case 9:
			return "BLIP_MG_DOMINOES_ALL5S";
		case 10:
			return "BLIP_MG_DOMINOES_DRAW";
		case 11:
			return "BLIP_MG_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "BLIP_MG_FIVE_FINGER_FILLET_GUTS";
		case 14:
			return "BLIP_PROC_LOANSHARK";
		case 13:
			return "BLIP_AMBIENT_HERD";
		case 15:
			return "BLIP_PROC_BANK";
		case 16:
			return "BLIP_PROC_BOUNTY_POSTER";
		case 17:
			return "BLIP_AMBIENT_COACH";
		case 18:
			return "BLIP_AMBIENT_TRAIN";
		case 19:
			return "BLIP_AMBIENT_RIVERBOAT";
		case 20:
			return "BLIP_SHOP_STORE";
		case 21:
			return "BLIP_SHOP_SHADY_STORE";
		case 22:
			return "BLIP_AMBIENT_QUARTERMASTER";
		case 23:
			return "BLIP_SHOP_GUNSMITH";
		case 24:
			return "BLIP_SHOP_COACH_FENCING";
		case 25:
			return "BLIP_SHOP_DOCTOR";
		case 26:
			return "BLIP_SHOP_TAILOR";
		case 28:
			return "BLIP_SHOP_BLACKSMITH";
		case 29:
			return "BLIP_SHOP_TRAINER";
		case 33:
			return "BLIP_POST_OFFICE";
		case 34:
			return "BLIP_POST_OFFICE_REC";
		case 30:
			return "BLIP_SHOP_TRAIN";
		case 31:
			return "BLIP_SHOP_BARBER";
		case 32:
			return "BLIP_SHOP_BUTCHER";
		case 35:
			return "BLIP_SHOP_TACKLE";
		case 36:
			return "BLIP_SHOP_ANIMAL_TRAPPER";
		case 37:
			return "BLIP_SHOP_HORSE";
		case 38:
			return "BLIP_SHOP_HORSE_FENCING";
		case 39:
			return "BLIP_SHOP_HORSE_SADDLE";
		case 40:
			return "BLIP_AMBIENT_NEWSPAPER";
		case 41:
			return "BLIP_SHOP_MARKET_STALL";
		case 42:
			return "BLIP_SHOP_MARKET_STALL";
		case 43:
			return "BLIP_HOTEL_BED";
		case 44:
			return "BLIP_PHOTO_STUDIO";
		case 27:
			return "BLIP_SALOON";
		case 45:
			return "BLIP_STABLE";
		case 46:
			return "BLIP_PROC_HOME";
		case 47:
			return "BLIP_PROC_HOME_LOCKED";
		case 48:
			return "BLIP_PROC_HOME";
		case 49:
			return "BLIP_AMBIENT_TELEGRAPH";
		case 50:
			return "BLIP_AMBIENT_COACH_TAXI";
		case 51:
			return "BLIP_AMBIENT_THEATRE";
		case 52:
			return "BLIP_REGION_CARAVAN";
		case 65:
			return "BLIP_CAMP_EAT";
		case 66:
			return "BLIP_AMBIENT_TITHING";
		case 67:
			return "BLIP_SHOP_PEARSON";
		case 68:
			return "BLIP_CAMP_HITCH";
		case 69:
			return "BLIP_SUPPLIES_AMMO";
		case 70:
			return "BLIP_SUPPLIES_HEALTH";
		case 71:
			return "BLIP_SUPPLIES_FOOD";
		case 72:
			return "BLIP_MG_POKER";
		case 73:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 74:
			return "BLIP_MG_DOMINOES";
		case 75:
			return "BLIP_REGION_HUNTING";
		case 76:
			return "BLIP_MG_FISHING";
		case 77:
			return "BLIP_ROBBERY_COACH";
		case 78:
			return "BLIP_REGION_HUNTING";
		case 79:
			return "BLIP_ROBBERY_BANK";
		case 80:
			return "BLIP_MG_DOMINOES";
		case 81:
			return "BLIP_AMBIENT_HERD";
		case 53:
			return "BLIP_EVENT_APPLESEED";
		case 54:
			return "BLIP_EVENT_CASTOR";
		case 55:
			return "BLIP_EVENT_RAILROAD_CAMP";
		case 56:
			return "BLIP_EVENT_RIGGS_CAMP";
		case 57:
			return "BLIP_REGION_HIDEOUT";
		case 58:
			return "BLIP_PROC_HOME";
		case 59:
			return "BLIP_MG_FISHING";
		case 60:
			return "BLIP_AMBIENT_THEATRE";
		case 61:
			return "BLIP_AMBIENT_THEATRE";
		default:
			return "";
	}
	return "";
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return 2;
		case 16:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
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
		case 51:
		case 60:
		case 61:
			return 1;
		case 46:
		case 52:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
			return 3;
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
			return 4;
		case 50:
			return 5;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return 1784895540;
		case joaat("HAI_FISHING_01"):
			return 654481153;
		case joaat("HAI_FISHING_02"):
			return 654481153;
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return -1511391406;
		case joaat("HAI_HUNTING_06"):
			return 1784895540;
		case joaat("HAI_DOMINOES_01"):
			return -1567081107;
		case joaat("HAI_COACH_ROBBERY_01"):
			return -919476462;
		case joaat("HAI_COACH_ROBBERY_02"):
			return -919476462;
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return -1511391406;
		case joaat("HAI_BANK_ROBBERY_01"):
			return -1670940721;
		case joaat("HAI_COACH_ROBBERY_03"):
			return -919476462;
		case joaat("HAI_COACH_ROBBERY_04"):
			return -919476462;
		case joaat("HAI_RUSTLING_02"):
			return 754620122;
		case joaat("HAI_HOME_ROBBERY_01"):
			return 565221344;
		default:
			break;
	}
	return 234527101;
}

char* func_78(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return "CAHT02_DESC";
		case joaat("HAI_FISHING_01"):
			return "CAFS01_DESC";
		case joaat("HAI_FISHING_02"):
			return "CAFS02_DESC";
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return "CAFFF05_DESC";
		case joaat("HAI_HUNTING_06"):
			return "CAHT06_DESC";
		case joaat("HAI_DOMINOES_01"):
			return "CADM05_DESC";
		case joaat("HAI_COACH_ROBBERY_01"):
			return "CACR02_DESC";
		case joaat("HAI_COACH_ROBBERY_02"):
			return "CACR03_DESC";
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return "MGFFF_DESC";
		case joaat("HAI_BANK_ROBBERY_01"):
			return "CABR01_DESC";
		case joaat("HAI_COACH_ROBBERY_03"):
			return "CACR01_DESC";
		case joaat("HAI_COACH_ROBBERY_04"):
			return "CACR04_DESC";
		case joaat("HAI_RUSTLING_02"):
			return "CARS02_DESC";
		case joaat("HAI_HOME_ROBBERY_01"):
			return "PHHOM_DESC";
		default:
			break;
	}
	return "";
}

struct<16> func_79(int iParam0)
{
	char cVar0[128];
	switch (iParam0)
	{
		case 105:
			StringCopy(&cVar0, "MAP_CARD_TAXI_RHODES", 128);
			break;
		case 5:
			StringCopy(&cVar0, "MAP_CARD_TAXI_SAINTDENIS", 128);
			break;
		case 76:
			StringCopy(&cVar0, "MAP_CARD_TAXI_VALENTINE", 128);
			break;
		case 26:
			StringCopy(&cVar0, "MAP_CARD_TAXI_STRAWBERRY", 128);
			break;
		case 38:
			StringCopy(&cVar0, "MAP_CARD_TAXI_BLACKWATER", 128);
			break;
		default:
			StringCopy(&cVar0, "MAP_CARD_TAXI_RHODES", 128);
			break;
	}
	return cVar0;
}

char* func_93(int iParam0, int iParam1, vector3 vParam2)
{
	switch (iParam0)
	{
		case 20:
			return "GENERALSTORE";
		case 21:
			return "FENCE";
		case 23:
			return "GUNSMITH";
		case 25:
			return "DOCTOR";
		case 26:
			return "TAILOR";
		case 28:
			return "BLACKSMITH";
		case 33:
			switch (iParam1)
			{
				case 105:
					return "TRAINSTATION";
				default:
					return "DEPOT";
			}
			break;
		case 34:
			return "DEPOT";
		case 30:
			switch (iParam1)
			{
				case 5:
					return "DEPOT";
				default:
					return "TRAINSTATION";
			}
			break;
		case 31:
			return "BARBER";
		case 32:
			return "BUTCHER";
		case 35:
			return "BAITSHOP";
		case 36:
			return "TRAPPER";
		case 37:
			return "HORSESHOP";
		case 38:
			return "HORSESHOP";
		case 40:
			return "NEWSPAPER";
		case 41:
			return "MARKET";
		case 42:
			return "MARKET";
		case 43:
			return "HOTEL";
		case 44:
			return "PHOTOGRAPHER";
		case 51:
			return "MAGICLANTERN";
		case 60:
			return "VAUDEVILLE";
		case 61:
			return "VAUDEVILLE";
		case 50:
			return "STAGECOACH";
		case 27:
			switch (iParam1)
			{
				case 5:
					if (BUILTIN::VDIST(vParam2, 2796f, -1167f, vParam2.z) <= 25f)
					{
						return "SLUMSALOON";
					}
					else
					{
						return "NICESALOON";
					}
					break;
				case 76:
					if (BUILTIN::VDIST(vParam2, -308f, 807.05f, vParam2.z) <= 25f)
					{
						return "SALOON_BARBER";
					}
					else
					{
						return "SALOON2";
					}
					break;
				default:
					return "SALOON";
			}
			break;
		case 16:
			return "BOUNTY";
	}
	return "";
}

char* func_95(int iParam0)
{
	switch (__LIB_5__::func_864(iParam0))
	{
		case 6:
			return "BEAVERHOLLOW";
		case 2:
			return "CLEMENSPOINT";
		case 0:
			return "COLTER";
		case 4:
			return "GUARMA";
		case 1:
			return "HORSESHOE";
		case 5:
			return "LAKAY";
		case 3:
			return "SHADYBELLE";
		case 7:
			return "PRONGHORN";
	}
	return "";
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case joaat("W_4_ABANDONED_MISSION"):
			return 993246734;
		case joaat("W_4_ABANDONED_TRADING_POST"):
			return 1352537560;
		case joaat("W_4_FIRE_LOOKOUT_TOWER"):
			return -1262808306;
		case joaat("W_4_FLATTENED_CABIN"):
			return 1582457845;
		case joaat("W_5_FORT_BRENNAND"):
			return 460210291;
		case joaat("W_5_LIMPANY"):
			return 2021420613;
		case joaat("W_4_METEOR_HOUSE"):
			return 1195199040;
		case joaat("W_4_OIL_DERRICK"):
			return -1212881551;
		case joaat("W_4_PLEASANCE"):
			return -2011320133;
		case joaat("W_4_ROADSIDE_BROTHEL"):
			return -1988847961;
		case joaat("W_4_THE_OLD_BACCHUS_PLACE"):
			return 2056389698;
		case joaat("W_4_TRADING_POST"):
			return -942443338;
		case joaat("W_4_TWO_CROWS"):
			return 539572870;
		case joaat("W_4_UTOPIAN_COLONY_BUILDING"):
			return 66159563;
		case joaat("W_4_WITCHES_CAULDRON"):
			return 387869270;
		case joaat("W_4_APPLESEED_TIMBER_COMPANY"):
			return -496244122;
		case joaat("W_4_CASTORS_RIDGE"):
			return -238119963;
		case joaat("W_4_CENTRAL_UNION_RAILROAD_1"):
			return 1028223611;
		case joaat("W_4_CENTRAL_UNION_RAILROAD_2"):
			return 730222325;
		case joaat("W_4_CENTRAL_UNION_RAILROAD_3"):
			return -597970767;
		case joaat("W_4_FORT_RIGGS_HOLDING_CAMP"):
			return -732274047;
		case joaat("W_5_BEAVER_HOLLOW"):
			return -1368676121;
		case joaat("W_4_CLEMENS_POINT"):
			return 759314201;
		case joaat("W_4_COLTER"):
			return 1826504111;
		case joaat("W_4_GAPTOOTH_BREACH"):
			return 1728445882;
		case joaat("W_4_HANGING_DOG_RANCH"):
			return -12216052;
		case joaat("W_4_HORSESHOE_OVERLOOK"):
			return -431488293;
		case joaat("W_4_PIKES_BASIN"):
			return 1474106589;
		case joaat("W_4_SHADY_BELLE"):
			return -353968602;
		case joaat("W_4_SIX_POINT_CABIN"):
			return -918096609;
		case joaat("W_4_SOLOMONS_FOLLY"):
			return 1979340260;
		case joaat("W_4_ABERDEEN_PIG_FARM"):
			return 1472232821;
		case joaat("W_4_ADLER_RANCH"):
			return 462373845;
		case joaat("W_4_CARMODY_DELL"):
			return -1836330842;
		case joaat("W_4_CATFISH_JACKSONS"):
			return -1150244084;
		case joaat("W_4_CHEZ_PORTER"):
			return -1727895786;
		case joaat("W_4_LARNED_SOD"):
			return -1101810198;
		case joaat("W_4_LONNIES_SHACK"):
			return 2143316225;
		case joaat("W_4_MACLEANS_HOUSE"):
			return 121074776;
		case joaat("W_4_PAINTED_SKY"):
			return -2086563810;
		case joaat("W_4_RIDGEWOOD_FARM"):
			return -1332669948;
		case joaat("W_4_VAN_HORN_MANSION"):
			return 85299473;
		case joaat("W_4_WATSONS_CABIN"):
			return -1813267128;
		case joaat("W_4_WILLARDS_REST"):
			return 458479023;
		case joaat("W_5_BERYLS_DREAM"):
			return -678676588;
		case joaat("W_5_BLACK_BALSAM_RISE"):
			return 1602161184;
		case joaat("W_5_BLACK_BONE_FOREST"):
			return -656861063;
		case joaat("W_4_BRITTLEBRUSH_TRAWL"):
			return 1735191955;
		case joaat("W_5_BROKEN_TREE"):
			return 2073023198;
		case joaat("W_4_CANEBREAK_MANOR"):
			return -1941572412;
		case joaat("W_5_CHADWICK_FARM"):
			return 215480587;
		case joaat("W_4_CLINGMAN"):
			return 545498183;
		case joaat("W_4_COCHINAY"):
			return 820139809;
		case joaat("W_4_COMPSONS_STEAD"):
			return 2063457042;
		case joaat("W_4_COPPERHEAD_LANDING"):
			return 1006072805;
		case joaat("W_4_CUEVA_SECA"):
			return 428613469;
		case joaat("W_4_DOVERHILL"):
			return -161135375;
		case joaat("W_4_DOWNES_RANCH"):
			return -1276637644;
		case joaat("W_4_EVELYN_MILLER_CAMP"):
			return -960425936;
		case joaat("W_4_FACE_ROCK"):
			return 532401286;
		case joaat("W_4_FIRWOOD_RISE"):
			return -1347759053;
		case joaat("W_5_FISHINGSPOT"):
			return 1542246539;
		case joaat("W_4_GREENHOLLOW"):
			return 1740117339;
		case joaat("W_4_GUTHRIE_FARM"):
			return 770074951;
		case joaat("W_4_HAGEN_ORCHARDS"):
			return -237206861;
		case joaat("W_4_HILL_HAVEN_RANCH"):
			return 1877776161;
		case joaat("W_4_HOUSEBOAT"):
			return 1837393665;
		case joaat("W_4_LAKE_DON_JULIO_HOUSE"):
			return 1603579970;
		case joaat("W_4_LONE_MULE_STEAD"):
			return -1456731677;
		case joaat("W_4_LUCKYS_CABIN"):
			return -1344767066;
		case joaat("W_4_MACOMBS_END"):
			return 1092217275;
		case joaat("W_4_MERKINS_WALLER"):
			return 1855549007;
		case joaat("W_4_MICAHS_HIDEOUT"):
			return -875696111;
		case joaat("W_4_MILLESANI_CLAIM"):
			return -91026072;
		case joaat("W_4_MOSSY_FLATS"):
			return 1876184276;
		case joaat("W_4_NEKOTI_ROCK"):
			return -876779166;
		case joaat("W_4_ODDFELLOWS_REST"):
			return -1116738159;
		case joaat("W_4_OLD_GREENBANK_MILL"):
			return 415864829;
		case joaat("W_4_OLD_TOMS_BLIND"):
			return -1408667066;
		case joaat("W_4_PLEASANCE_HOUSE"):
			return -1730421200;
		case joaat("W_4_PRINZ_CO"):
			return 1374995365;
		case joaat("W_6_RADLEYS_HOUSE"):
			return -1393093729;
		case joaat("W_5_RADLEYS_PASTURE"):
			return -1623232489;
		case joaat("W_4_RATTLESNAKE_HOLLOW"):
			return -1394664008;
		case joaat("W_4_REPENTANCE"):
			return -325788416;
		case joaat("W_4_RILEYS_CHARGE"):
			return -1807212021;
		case joaat("W_4_RIO_DEL_LOBO_HOUSE"):
			return -792566558;
		case joaat("W_4_SCRATCHING_POST"):
			return -2089448537;
		case joaat("W_4_SILENT_STEAD"):
			return 82527577;
		case joaat("W_4_SILTWATER_STRAND"):
			return -1354901649;
		case joaat("W_4_STILLWATER_CABIN"):
			return -1585921053;
		case joaat("W_4_STILT_SHACK"):
			return 222265732;
		case joaat("W_4_TANNERS_REACH"):
			return 1561007383;
		case joaat("W_4_TAXIDERMIST_HOUSE"):
			return 1104975149;
		case joaat("W_4_THE_HANGING_ROCK"):
			return 1515744307;
		case joaat("W_4_THE_LOFT"):
			return 893855320;
		case joaat("W_5_VALLEY_VIEW"):
			return 235472255;
		case joaat("W_4_VENTERS_PLACE"):
			return -1173041902;
		case joaat("W_4_VETERANS_HOMESTEAD"):
			return 326709244;
		case joaat("W_4_WALLACE_OVERLOOK"):
			return -1337880478;
		case joaat("W_5_ARGIL_RISE"):
			return 205568929;
		case joaat("W_4_BAYGALL_EDGE"):
			return 276890716;
		case joaat("W_4_BEAR_CLAW"):
			return -2110824426;
		case joaat("W_4_CAIRN_LODGE"):
			return 43681669;
		case joaat("W_4_CLAWSONS_REST"):
			return 562599937;
		case joaat("W_4_CRAWDAD_WILLIES"):
			return 1822876181;
		case joaat("W_5_DEER_COTTAGE"):
			return -683043834;
		case joaat("W_4_DODDS_BLUFF"):
			return 532503220;
		case joaat("W_4_DORMIN_CREST"):
			return 379859357;
		case joaat("W_4_FAIRVALE_SHANTY"):
			return 1610646968;
		case joaat("W_4_GILL_LANDING"):
			return 1268001912;
		case joaat("W_4_GRANGERS_HOGGERY"):
			return 653958186;
		case joaat("W_4_HANIS_BETHEL"):
			return -1917132299;
		case joaat("W_5_HURON_GLEN"):
			return -134804027;
		case joaat("W_5_LENORA_VIEW"):
			return 1116308524;
		case joaat("W_4_MANITO_GLADE"):
			return 1625008147;
		case joaat("W_4_MARTHAS_SWAIN"):
			return -727372692;
		case joaat("W_4_OLD_HARRY_FEN"):
			return 1354284392;
		case joaat("W_4_OLD_TRAIL_RISE"):
			return 1871337449;
		case joaat("W_4_OSMAN_GROVE"):
			return -1249289544;
		case joaat("W_4_PLANTERS_BAWN"):
			return 1714554710;
		case joaat("W_6_REED_COTTAGE"):
			return -443207523;
		case joaat("W_4_RIDGE_VIEW"):
			return -33677540;
		case joaat("W_4_ROBARD_FARM"):
			return -763271696;
		case joaat("W_4_SAWBONE_CLEARING"):
			return 2027689141;
		case joaat("W_4_SHEPHERDS_RISE"):
			return -1484929764;
		case joaat("W_4_SWADBASS_POINT"):
			return -1430883057;
		case joaat("W_4_TRAPPERS_CABIN"):
			return 2133877879;
		case joaat("W_5_VETTERS_ECHO"):
			return -508074447;
		case joaat("W_4_BEECHERS_HOPE"):
			return -507075109;
		case joaat("W_4_BUTCHER_CREEK"):
			return 147256338;
		case joaat("W_4_COOTS_CHAPEL"):
			return 929640770;
		case joaat("W_4_CORNWALL_KEROSENE_TAR"):
			return 648073069;
		case joaat("W_4_EWING_BASIN"):
			return 653799702;
		case joaat("W_5_GRAND_KORRIGAN_DOCKED"):
			return -296815465;
		case joaat("W_5_GRAND_KORRIGAN_SEA"):
			return 1944800674;
		case joaat("W_4_PRONGHORN_RANCH"):
			return 221661572;
		default:
			break;
	}
	return 0;
}

char* func_98(int iParam0)
{
	switch (iParam0)
	{
		case joaat("VANHORN"):
			return "VHT";
		case joaat("EMERALD"):
			return "EMR";
		case joaat("ANNESBURG"):
			return "ANN";
		case joaat("LAGRAS"):
			return "LAG";
		case joaat("RHODES"):
			return "RHO";
		case joaat("STRAWBERRY"):
			return "STR";
		case joaat("BLACKWATER"):
			return "BLA";
		case joaat("STDENIS"):
			return "NBX";
		case joaat("VALENTINE"):
			return "VAL";
		case joaat("ARMADILLO"):
			return "AMD";
		case joaat("TUMBLEWEED"):
			return "TBL";
		default:
			break;
	}
	return "";
}

char* func_103(int iParam0)
{
	return NETWORK::_0x356F9FB0698C1FEB(iParam0, 0);
}

int func_104(int iParam0)
{
	return Global_1116295[iParam0 /*44*/];
}

bool func_105(int iParam0)
{
	return func_114(func_113(func_112(iParam0), joaat("HAS_BEEN_INTERACTED_WITH")));
}

int func_106(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("GIVER_NAME"):
			return 0;
		case joaat("GIVER_STRANGER_NAME"):
			return 1;
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

int func_112(int iParam0)
{
	int iVar0;
	iVar0 = func_117(iParam0);
	return iVar0;
}

struct<2> func_113(int iParam0, int iParam1)
{
	return func_118(iParam1, iParam0);
}

int func_114(var uParam0, var uParam1)
{
	var uVar0;
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return 0;
	}
	else if (!STATS::STAT_ID_GET_BOOL(&uParam0, &uVar0))
	{
		return 0;
	}
	return uVar0;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WAR_VET"):
			return joaat("GFH_WAR_VET");
		case joaat("FLACO_HERNANDEZ"):
			return joaat("GFH_FLACO_HERNANDEZ");
		case joaat("JOSIAH_TRELAWNY"):
			return joaat("GFH_JOSIAH_TRELAWNY");
		case joaat("JOE"):
			return joaat("GFH_JOE");
		case joaat("SEAN_MACQUIRE"):
			return joaat("GFH_SEAN_MACQUIRE");
		case joaat("BLACK_BELLE"):
			return joaat("GFH_BLACK_BELLE");
		case joaat("SADIE_ADLER"):
			return joaat("GFH_SADIE_ADLER");
		case joaat("MAMMA_WATSON"):
			return joaat("GFH_MAMMA_WATSON");
		case joaat("THOMAS_SKIFF_CAPTAIN"):
			return joaat("GFH_THOMAS_SKIFF_CAPTAIN");
		case joaat("OBEDIAH_HINTON"):
			return joaat("GFH_OBEDIAH_HINTON");
		case joaat("LANGTON"):
			return joaat("GFH_LANGTON");
		case joaat("BONNIE"):
			return joaat("GFH_BONNIE");
		case joaat("SHAKY"):
			return joaat("GFH_SHAKY");
		case joaat("WALLACE_TRAIN_CLERK"):
			return joaat("GFH_TRAIN_CLERK_WALLACE");
		default:
			break;
	}
	return 0;
}

struct<2> func_118(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	if (iParam0 == 0)
	{
		return Var2;
	}
	if (iParam1 == 0)
	{
		return Var2;
	}
	Var0 = { __LIB_0__::func_38(iParam0, iParam1) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

