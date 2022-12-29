bool func_0(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			*iParam1 = 0;
			break;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			*iParam1 = 1;
			break;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			*iParam1 = 2;
			break;
		default:
			return false;
	}
	return true;
}

int func_1(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_801(uParam0, &iVar1, &iVar0, bParam1))
	{
		iVar0 = -1;
	}
	else
	{
		__LIB_0__::func_238(iVar1);
	}
	return iVar0;
}

bool func_2(var uParam0, var uParam1, bool bParam2)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(__LIB_0__::func_162(bParam2), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_3(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_1329.f_1[iParam0 /*9*/].f_7)
	{
		if (Global_1946804.f_1329.f_1[iParam0 /*9*/][iVar0] == iParam1)
		{
			*uParam2 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_4(int iParam0)
{
	vector3 vVar0;
	vVar0.f_1 = joaat("INVENTORY_ITEMS");
	vVar0.x = joaat("_PLACEHOLDER");
	switch (iParam0)
	{
		case joaat("TP_CARD_SET_GUN_02_REWARD"):
		case joaat("TP_CARD_SET_ART_01_REWARD"):
		case joaat("TP_CARD_SET_LND_01_REWARD"):
		case joaat("TP_CARD_SET_PLT_02_REWARD"):
		case joaat("TP_CARD_SET_ACT_01_REWARD"):
		case joaat("TP_CARD_SET_INV_01_REWARD"):
		case joaat("TP_CARD_SET_VEH_01_REWARD"):
		case joaat("TP_CARD_SET_ART_02_REWARD"):
		case joaat("TP_CARD_SET_HOR_01_REWARD"):
		case joaat("TP_CARD_SET_PAM_01_REWARD"):
		case joaat("TP_CARD_SET_LND_02_REWARD"):
		case joaat("TP_CARD_SET_SPT_02_REWARD"):
		case joaat("TP_CARD_SET_HOR_02_REWARD"):
		case joaat("TP_CARD_SET_INV_02_REWARD"):
		case joaat("TP_CARD_SET_AML_02_REWARD"):
		case joaat("TP_CARD_SET_PLT_01_REWARD"):
		case joaat("TP_CARD_SET_VEH_02_REWARD"):
		case joaat("TP_CARD_SET_ACT_02_REWARD"):
		case joaat("TP_CARD_SET_GRL_01_REWARD"):
		case joaat("TP_CARD_SET_AML_01_REWARD"):
		case joaat("TP_CARD_SET_PAM_02_REWARD"):
		case joaat("TP_CARD_SET_SPT_01_REWARD"):
		case joaat("TP_CARD_SET_GRL_02_REWARD"):
		case joaat("TP_CARD_SET_FINAL_REWARD"):
		case joaat("TP_CARD_SET_GUN_01_REWARD"):
			vVar0.f_1 = MISC::GET_HASH_KEY("toast_log_blips");
			vVar0.x = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			break;
		case joaat("TP_DB_INVITATION_01"):
		case joaat("TP_DB_QUARTZ_CHUNK_01"):
		case joaat("TP_DB_SKULL_STATUE_01"):
			vVar0.f_1 = MISC::GET_HASH_KEY("toast_log_blips");
			vVar0.x = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			break;
		case joaat("TP_ORCHID_REWARD_01"):
			vVar0.f_1 = MISC::GET_HASH_KEY("toast_log_blips");
			vVar0.x = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			break;
		case joaat("TP_RF_INVITATION_01"):
		case joaat("TP_LF_TEN_FISH_MAILED_02"):
		case joaat("TP_LF_TEN_FISH_MAILED_01"):
		case joaat("TP_LF_ONE_FISH_MAILED_01"):
			vVar0.f_1 = MISC::GET_HASH_KEY("toast_log_blips");
			vVar0.x = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_RAREFISH");
			break;
		case joaat("TP_RC_ROCK_STATUE_01"):
		case joaat("TP_RC_WHISKEY_01"):
		case joaat("TP_RC_INVITATION_01"):
		case joaat("TP_RC_TEN_DOLLARS_01"):
			vVar0.f_1 = MISC::GET_HASH_KEY("toast_log_blips");
			vVar0.x = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			break;
		case joaat("TP_TAXIDERMY_REWARD_03"):
		case joaat("TP_TAXIDERMY_REWARD_04"):
		case joaat("TP_TAXIDERMY_REWARD_02"):
		case joaat("TP_TAXIDERMY_REWARD_04_ALT"):
		case joaat("TP_TAXIDERMY_REWARD_05"):
		case joaat("TP_TAXIDERMY_REWARD_01"):
		case joaat("TP_TAXIDERMY_REWARD_04_ES"):
			vVar0.f_1 = MISC::GET_HASH_KEY("toast_log_blips");
			vVar0.x = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_TAXIDERMY");
			break;
		case joaat("TP_MAYOR_REWARD_LETTER_01_JN"):
		case joaat("TP_CATALOGUE_LETTER_01"):
		case joaat("TP_FOR_MY_ART_LETTER"):
		case joaat("TP_MAYOR_REWARD_LETTER_02"):
		case joaat("TP_MAYOR_REWARD_LETTER_01"):
		case joaat("TP_RMAY_LETTER_2"):
		case joaat("TP_RMAY_LETTER_3"):
		case joaat("TP_MAYOR_REWARD_LETTER_02_JN"):
		case joaat("TP_BRENDA_LETTER_08"):
		case joaat("TP_RMAY_LETTER_1"):
		case joaat("TP_BRENDA_LETTER_04"):
		case joaat("TP_RCAL_LEVIN_LETTER"):
		case joaat("TP_RCAL_LEVIN_LETTER_JN"):
		case joaat("TP_RSAD_PEARSONS_LETTER"):
			vVar0.f_1 = MISC::GET_HASH_KEY("toast_log_blips");
			vVar0.x = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_TAXIDERMY");
			break;
		default:
			vVar0.f_1 = MISC::GET_HASH_KEY("inventory_items");
			vVar0.x = MISC::GET_HASH_KEY("PROVISION_BEAUS_GIFT_1");
			break;
	}
	return vVar0;
}

void func_5(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1935689.f_19.f_2[iParam0 /*2*/].f_1 = bParam1;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	var uVar2;
	iVar0 = iParam1;
	while (iVar0 <= 15)
	{
		uVar1 = (*iParam0)[iVar0 /*2*/];
		uVar2 = (iParam0[iVar0 /*2*/])->f_1;
		(*iParam0)[iVar0 /*2*/] = *iParam2;
		(iParam0[iVar0 /*2*/])->f_1 = *iParam3;
		*iParam2 = uVar1;
		*iParam3 = uVar2;
		iVar0++;
	}
}

int func_7(int iParam0)
{
	if (!INVENTORY::_0x245D07651B1D183B(iParam0, 1879048192))
	{
		return 0;
	}
	if (INVENTORY::_0x245D07651B1D183B(iParam0, 268435456))
	{
		return 1;
	}
	if (INVENTORY::_0x245D07651B1D183B(iParam0, 536870912))
	{
		return 2;
	}
	return 3;
}

void func_8(int iParam0, char* sParam1, int iParam2, bool bParam3, char* sParam4, bool bParam5, char* sParam6, char* sParam7)
{
	var uVar0;
	var uVar1;
	uVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_10199, Global_1935689.f_10193);
	uVar1 = uVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, uVar1, sParam1, iParam2->f_1, *iParam2, sParam4, bParam3, bParam5, sParam6, sParam7);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Global_1935689.f_10199, Global_1935689.f_10193, iParam0);
	Global_1935689.f_10193++;
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 1250092473:
			return -2102478220;
		case -450913544:
			return 225031420;
		case 788010710:
			return -1696372134;
		case -1505978566:
			return 225031420;
		case -893163968:
			return -2102478220;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 225031420;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 225031420;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 225031420;
		default:
			break;
	}
	return 0;
}

void func_10(var uParam0, int iParam1)
{
	int iVar0;
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = __LIB_0__::func_357(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 177369922:
			__LIB_0__::func_19(uParam0, iParam1);
			break;
		case -1551449832:
			__LIB_0__::func_115(uParam0, iParam1);
			break;
	}
}

char* func_11()
{
	return "STABLE_RENAME_MOUNT_PROMPT";
}

char* func_12()
{
	return "STABLE_RENAME_MOUNT_DESC";
}

void func_13(int iParam0)
{
	int iVar0[3];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		iVar0[iVar5] = PED::_0x0CEEB6F4780B1F2F(iParam0, iVar5);
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		iVar6 = iVar0[iVar5];
		if (iVar6 == 0)
		{
		}
		else
		{
			PED::_0x627F7F3A0C4C51FF(iParam0, iVar0[iVar5]);
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		iVar4 = PED::_0x0CEEB6F4780B1F2F(iParam0, iVar5);
		iVar7 = iVar4;
		iVar5++;
	}
}

bool func_14(int iParam0)
{
	return Global_1935689.f_19.f_2[iParam0 /*2*/].f_1;
}

void func_15(int iParam0)
{
	Global_1935689.f_19.f_2[iParam0 /*2*/] = 0;
	Global_1935689.f_19.f_2[iParam0 /*2*/].f_1 = 0;
}

bool func_16(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return true;
	}
	return false;
}

var func_17(struct<5> Param0, int iParam5, int iParam6, int iParam7)
{
	var uVar0;
	Param0.f_2 = iParam5;
	Param0.f_3 = iParam6;
	Param0.f_4 = iParam7;
	uVar0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Param0);
	return uVar0;
}

int func_18(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_19(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (Param0.f_9 < 1)
	{
		return false;
	}
	if (!__LIB_0__::func_144(Param0.f_8, 0))
	{
		return false;
	}
	if (__LIB_0__::func_357(Param0.f_8) == 0)
	{
		return false;
	}
	return true;
}

bool func_20(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, joaat("BASKET"), iParam1))
	{
		return false;
	}
	return true;
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_12__::func_533(iParam0, iParam1);
	__LIB_9__::func_814(iParam0, iParam1, (iVar0 + iParam2));
}

bool func_22(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 19;
			break;
		case 1:
			*uParam1 = 18;
			break;
		default:
			return false;
	}
	return true;
}

bool func_23(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_KIT_WATCHES"):
			return true;
	}
	return false;
}

bool func_24()
{
	return __LIB_7__::func_589(1);
}

bool func_25(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_GAMEY_BIRD"):
		case joaat("CI_TAG_FOLDER_BIG_GAME"):
		case joaat("CI_TAG_FOLDER_GRISTLY_MUTTON"):
		case joaat("CI_TAG_FOLDER_HERPTILE_MEAT"):
		case joaat("CI_TAG_FOLDER_SUCCULENT_FISH"):
		case joaat("CI_TAG_FOLDER_STRINGY_MEAT"):
		case joaat("CI_TAG_FOLDER_MATURE_VENISON"):
		case joaat("CI_TAG_FOLDER_GAME"):
		case joaat("CI_TAG_FOLDER_CRUSTACEAN"):
		case joaat("CI_TAG_FOLDER_FLAKEY_FISH"):
		case joaat("CI_TAG_FOLDER_PLUMP_BIRD"):
		case joaat("CI_TAG_FOLDER_PRIME_BEEF"):
		case joaat("CI_TAG_FOLDER_GRITTY_FISH"):
		case joaat("CI_TAG_FOLDER_TENDER_PORK"):
		case joaat("CI_TAG_FOLDER_EXOTIC_BIRD"):
			return true;
	}
	return false;
}

bool func_26(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_CIG_CARD_SPT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_AML_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_GUN_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_GRL_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_LND_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_ACT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_PLT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_INV_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_ART_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_PAM_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_HOR_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_VEH_SET"):
			return true;
	}
	return false;
}

bool func_27(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_2__::func_804(iParam0, 512);
	return bVar0;
}

void func_28(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	__LIB_14__::func_283(iVar0);
}

void func_29(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	__LIB_0__::func_7(&(Global_1914319.f_18594[iParam0]), 1);
}

void func_30(char* sParam0)
{
	Global_1914319.f_18963 = __LIB_0__::func_45(sParam0, 10000, 0, 0, 0, 1);
}

int func_31(var uParam0)
{
	return __LIB_12__::func_475(&(uParam0->f_2031));
}

void func_32(int iParam0)
{
	UNLOCK::_UNLOCK_SET_NEW(__LIB_0__::func_17(iParam0), false);
}

int func_33(var uParam0)
{
	return __LIB_0__::func_81(&(uParam0->f_2031));
}

bool func_34()
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (!__LIB_0__::func_222(2, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_35()
{
	return __LIB_0__::func_604() == joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
}

int func_36()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	iVar2 = 0;
	iVar3 = 0;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar1) == -999503751)
		{
			if (__LIB_0__::func_604() == iVar1)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		iVar0++;
	}
	iVar3 = __LIB_0__::func_551(-999503751, 1);
	if (!bVar4)
	{
		iVar3 = (iVar3 - 1);
	}
	return (iVar3 - iVar2);
}

int func_37(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam1 >= __LIB_1__::func_169(iParam0, bParam2))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 18)
	{
		iVar2 = Global_1946804.f_2657[iVar1];
		if (__LIB_0__::func_144(iVar2, 0))
		{
			if (__LIB_0__::func_357(iVar2) == iParam0)
			{
				if (iVar0 == iParam1)
				{
					return iVar2;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_38(var uParam0, bool bParam1)
{
	__LIB_12__::func_491(2);
	__LIB_12__::func_491(2048);
	return 1;
}

var func_39(var uParam0)
{
	if (uParam0->f_42 > 1)
	{
		if ((uParam0->f_42 - 1) >= 0)
		{
			return uParam0->f_31[(uParam0->f_42 - 1)];
		}
	}
	return __LIB_0__::func_85(uParam0);
}

int func_40(bool bParam0)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(__LIB_12__::func_480(bParam0), __LIB_12__::func_481());
	return iVar0;
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (__LIB_0__::func_192(iParam0, -393037696))
	{
		iParam0 = __LIB_12__::func_540(iParam0);
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	bVar1 = false;
	iVar2 = iParam1;
	iVar3 = __LIB_0__::func_786();
	switch (iVar2)
	{
		case joaat("SHOP_HONOR_HIGH"):
			bVar1 = iVar3 >= 240;
			break;
		case joaat("SHOP_HONOR_LOW"):
			bVar1 = iVar3 >= 120;
			break;
		case joaat("SHOP_HONOR_AMORAL"):
			bVar1 = iVar3 < 120;
			break;
		case 1014511709:
			bVar1 = iVar3 <= -160;
			break;
		case joaat("SHOP_HONOR_GOOD_4"):
			bVar1 = iVar3 >= 160;
			break;
	}
	if (bVar1)
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
		return 1;
	}
	if (iVar2 == joaat("SHOP_HONOR_AMORAL") && !bVar1)
	{
		return 1;
	}
	return 0;
}

bool func_42()
{
	if (((Global_1935689.f_17 == 1 || Global_1935689.f_17 == 2) || __LIB_6__::func_126()) || __LIB_7__::func_775())
	{
		return true;
	}
	return false;
}

Vector3 func_43(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { __LIB_1__::func_868(vParam0, vParam3, 1065353216 /* Float: 1f */) };
	vVar3 = { MISC::ASIN(vVar0.z), 0f, MISC::ATAN2(-vVar0.x, vVar0.y) };
	return vVar3;
}

bool func_44(int iParam0)
{
	if (iParam0 == 1279130184)
	{
		if (__LIB_7__::func_790())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return iParam0 == __LIB_9__::func_434();
}

bool func_45(int iParam0)
{
	if (!__LIB_4__::func_661(iParam0))
	{
		return false;
	}
	return Global_40.f_7731[iParam0 /*5*/] > 1;
}

char[] func_46(int iParam0)
{
	char cVar0[64];
	StringCopy(&cVar0, __LIB_12__::func_508(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return __LIB_11__::func_876(&cVar0);
}

int func_47(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_630(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_931(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (__LIB_0__::func_492(1) < iVar0)
	{
		return 0;
	}
	return 1;
}

int func_48(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 177369922:
			return __LIB_0__::func_81(&uParam0);
		case -1551449832:
			return __LIB_0__::func_78(&uParam0);
	}
	return 0;
}

int func_49(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	switch (iParam6)
	{
		case -1346384396:
			return __LIB_0__::func_81(&uParam0);
		case -712836614:
			return __LIB_0__::func_78(&uParam0);
		case -1629133289:
			return __LIB_4__::func_576(&uParam0);
		case 1302066700:
			return __LIB_4__::func_813(&uParam0);
		case 599669344:
			return __LIB_4__::func_819(&uParam0);
		case -1555511632:
			return __LIB_0__::func_85(&uParam0);
	}
	return 0;
}

int func_50(var uParam0, int iParam1)
{
	if (__LIB_0__::func_787(iParam1))
	{
		uParam0->f_2031.f_84 = iParam1;
		uParam0->f_148.f_1281.f_1 = iParam1;
		Global_1914319.f_16855.f_36 = iParam1;
		return 1;
	}
	uParam0->f_2031.f_84 = 0;
	Global_1914319.f_16855.f_36 = 0;
	return 0;
}

bool func_51(int iParam0, int iParam1)
{
	var uVar0;
	var uVar31;
	uVar0 = 15;
	if (!__LIB_0__::func_976(iParam0, iParam1, &uVar0, &uVar31, 1, 0))
	{
		return false;
	}
	return true;
}

bool func_52(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	*iParam2 = 0;
	if (iParam1 == 207706105)
	{
		iVar0 = -999503751;
	}
	else if (iParam1 == -1998614617)
	{
		iVar0 = -525676072;
	}
	else if (iParam1 == -357182937)
	{
		iVar0 = -2061583405;
	}
	*iParam2 = __LIB_1__::func_169(iVar0, 1);
	return true;
}

struct<4> func_53(bool bParam0)
{
	return __LIB_0__::func_429(318222581, __LIB_0__::func_949(bParam0), 1591329969, bParam0);
}

bool func_54(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_8__::func_622(iParam1, &iVar0))
	{
		if (ATTRIBUTE::_0x200373A8DF081F22(iParam0, iVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_55()
{
	if (Global_1935689.f_10189 == -182626652)
	{
		switch (__LIB_11__::func_524())
		{
			case 10:
			case 18:
			case 19:
				return true;
		}
	}
	else if (Global_1935689.f_10189 == -2074770370)
	{
		return __LIB_7__::func_775();
	}
	else if (Global_1935689.f_10189 == -693134279)
	{
		return true;
	}
	return false;
}

bool func_56(int iParam0)
{
	if (__LIB_0__::func_144(iParam0, 0))
	{
		if (__LIB_0__::func_192(iParam0, -1242251796))
		{
			if (__LIB_0__::func_192(iParam0, 2060589226))
			{
				return __LIB_7__::func_579(512);
			}
			return __LIB_7__::func_579(256);
		}
		else if (__LIB_0__::func_192(iParam0, 1919582297))
		{
			return __LIB_7__::func_579(8192);
		}
	}
	if (Global_1935496.f_12)
	{
		return __LIB_7__::func_579(256);
	}
	else
	{
		return __LIB_7__::func_579(2);
	}
	return __LIB_7__::func_579(2);
}

void func_57(int iParam0, int iParam1)
{
	__LIB_12__::func_514(iParam0, iParam1, 0);
}

int func_58(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, __LIB_11__::func_454());
	return iVar0;
}

int func_59(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, __LIB_9__::func_816());
	return iVar0;
}

int func_60(int iParam0, int iParam1)
{
	struct<2> Var0;
	vector3 vVar22;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	*iParam0 = 0;
	*iParam1 = 0;
	Var0.f_1 = 20;
	iVar31 = __LIB_0__::func_857(856287005);
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		iVar30 = __LIB_12__::func_495(856287005, iVar32);
		if (iVar30 != 0)
		{
			if (__LIB_1__::func_439(iVar30, &iVar29))
			{
				if (__LIB_0__::func_144(iVar29, 0))
				{
					if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar29, &Var0) && Var0 > 0)
					{
						iVar33 = 0;
						while (iVar33 < Var0)
						{
							if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar33], &vVar22))
							{
								if (vVar22.y == 2086291460)
								{
									*iParam1 = (*iParam1 + vVar22.z);
								}
								else if (vVar22.y == -1620444701)
								{
									*iParam0 = (*iParam0 + vVar22.z);
								}
							}
							iVar33++;
						}
					}
				}
			}
		}
		iVar32++;
	}
	return 1;
}

char* func_61(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return "HORSE_CLASS_RIDING";
		case joaat("HORSE_CLASS_DRAFT"):
			return "HORSE_CLASS_DRAFT";
		case joaat("HORSE_CLASS_RACE"):
			return "HORSE_CLASS_RACE";
		case joaat("HORSE_CLASS_WAR"):
			return "HORSE_CLASS_WAR";
		case joaat("HORSE_CLASS_WORK"):
			return "HORSE_CLASS_WORK";
		case joaat("HORSE_CLASS_MULTI"):
			return __LIB_12__::func_539(iParam1);
		case joaat("HORSE_CLASS_SUPERIOR"):
			return "HORSE_CLASS_SUPERIOR";
		case joaat("HORSE_CLASS_OTHER"):
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

char* func_62(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_5__::func_773(iParam0);
	switch (iVar0)
	{
		case 1:
			return "HORSE_GENDER_MALE";
		case 2:
			return "HORSE_GENDER_FEMALE";
	}
	return "HORSE_GENDER_UNKNOWN";
}

bool func_63(char* sParam0, char* sParam1, char* sParam2, int iParam3, char* sParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	char* sVar3;
	int iVar4;
	struct<4> Var5;
	int iVar24;
	MISC::_0x5CB71EAA1429A358(256);
	MISC::DISPLAY_ONSCREEN_KEYBOARD(4, sParam1, sParam2, sParam0, "", "", "", iParam3);
	bVar1 = true;
	bVar2 = false;
	sVar3 = "";
	iVar4 = -1;
	Var5.f_2 = 4;
	iVar24 = 0;
	while (bVar1)
	{
		iVar0 = MISC::UPDATE_ONSCREEN_KEYBOARD();
		sVar3 = MISC::GET_ONSCREEN_KEYBOARD_RESULT();
		if (!bVar2)
		{
			switch (iVar0)
			{
				case 2:
				case 3:
					bVar1 = false;
					break;
				case 1:
					bVar2 = true;
					break;
			}
		}
		else
		{
			if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(iVar4))
			{
				SOCIALCLUB::SC_PROFANITY_CHECK_STRING(sVar3, &iVar4);
			}
			if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(iVar4))
			{
			}
			else
			{
				*sParam4 = { __LIB_0__::func_482(sVar3) };
				if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(iVar4))
				{
					bVar1 = false;
					return true;
				}
				else
				{
					if (iVar24 == 0)
					{
						Var5.f_2 = 0;
						Var5.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
						Var5.f_3.f_3 = 0;
						if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4) || MISC::_IS_STRING_SPACE(sParam4))
						{
							iVar24 = __LIB_5__::func_637(&Var5, "ERROR_PROFANITY_HEADER", "ERROR_WHITESPACE_ONLY", 0, 0, 1);
						}
						else if (SOCIALCLUB::SC_PROFANITY_GET_STRING_STATUS(iVar4) == 1)
						{
							iVar24 = __LIB_5__::func_637(&Var5, "ERROR_PROFANITY_HEADER", "ERROR_FAILEDPROFANITY", 0, 0, 1);
						}
						else if (SOCIALCLUB::SC_PROFANITY_GET_STRING_STATUS(iVar4) == 4)
						{
							iVar24 = __LIB_5__::func_637(&Var5, "ERROR_PROFANITY_HEADER", "ERROR_PROFANITY_INVALID_CHARS", 0, 0, 1);
						}
						else
						{
							iVar24 = __LIB_5__::func_637(&Var5, "ERROR_PROFANITY_HEADER", "ERROR_PROFANITY_SERVICE_DOWN", 0, 0, 1);
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_ACCEPT")))
					{
						_NAMESPACE77::_0x00A15B94CBA4F76F(iVar24);
						iVar24 = 0;
						bVar1 = false;
						StringCopy(sParam4, "", 64);
						return false;
					}
				}
			}
		}
		BUILTIN::WAIT(0);
	}
	return false;
}

bool func_64(struct<4> Param0, int iParam4, int iParam5)
{
	struct<12> Var0;
	Var0.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	if (!__LIB_0__::func_144(Var0.f_4, 0))
	{
		return false;
	}
	if (__LIB_9__::func_977(Var0.f_4, iParam4, 0) == 0)
	{
		return false;
	}
	if (iParam5 > Var0.f_11)
	{
		return false;
	}
	return true;
}

bool func_65(int iParam0)
{
	if (__LIB_12__::func_515(iParam0))
	{
		return true;
	}
	if (__LIB_12__::func_516(iParam0))
	{
		return true;
	}
	if (__LIB_12__::func_517(iParam0))
	{
		return true;
	}
	if (__LIB_12__::func_518(iParam0))
	{
		return true;
	}
	if (__LIB_12__::func_519(iParam0))
	{
		return true;
	}
	if (__LIB_12__::func_521(iParam0))
	{
		return true;
	}
	if (__LIB_12__::func_520(iParam0))
	{
		return true;
	}
	return false;
}

int func_66(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, __LIB_9__::func_881());
	return iVar0;
}

bool func_67(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<11> Var16;
	int iVar30;
	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { __LIB_0__::func_523(0, iParam0, -1591664384, -1591664384, 0, 0) };
	__LIB_0__::func_524(&Var2, __LIB_1__::func_124());
	if (__LIB_0__::func_801(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (__LIB_0__::func_236(&Var16, iVar30, iVar0, iVar1))
			{
				if (__LIB_0__::func_144(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && __LIB_0__::func_688(Var16.f_4))
					{
					}
					else
					{
						*iParam1 = Var16.f_4;
						__LIB_0__::func_238(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		__LIB_0__::func_238(iVar0);
	}
	return false;
}

int func_68(int* iParam0)
{
	int iVar0;
	iVar0 = __LIB_12__::func_133(iParam0->f_1);
	if (iVar0 == 0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0->f_1, &iVar0))
		{
		}
	}
	return iVar0;
}

bool func_69(int* iParam0)
{
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		__LIB_1__::func_19(*iParam0, 4);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		__LIB_1__::func_19(*iParam0, 2);
		return false;
	}
	__LIB_1__::func_19(*iParam0, 1);
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0) == 2113164098)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

void func_70(int iParam0, int iParam1, int iParam2)
{
	__LIB_9__::func_820(iParam0, iParam1, (__LIB_12__::func_529(iParam0, iParam1) + iParam2));
}

void func_71(int iParam0)
{
	if (__LIB_12__::func_547(iParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA_FORT");
		return;
	}
	if (__LIB_12__::func_517(iParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA");
		return;
	}
}

float func_72()
{
	int iVar0;
	float fVar1;
	iVar0 = __LIB_0__::func_786();
	fVar1 = 1f;
	if (iVar0 < 80)
	{
		return fVar1;
	}
	if (iVar0 >= 280)
	{
		fVar1 = (fVar1 - 0.5f);
	}
	else if (iVar0 >= 200)
	{
		fVar1 = (fVar1 - 0.25f);
	}
	else
	{
		fVar1 = (fVar1 - 0.1f);
	}
	return fVar1;
}

int func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	fVar0 = (*uParam3 + (fParam7 * 2f));
	fVar1 = (*uParam4 + (fParam8 * 2f));
	if (fVar1 > fParam12)
	{
		fVar1 = fParam12;
	}
	if (fVar1 < fParam11)
	{
		fVar1 = fParam11;
	}
	if (fVar0 > fParam10)
	{
		fVar0 = fParam10;
	}
	if (fVar0 < fParam9)
	{
		fVar0 = fParam9;
	}
	vVar2 = { (*uParam5 + fVar0), 0f, (*uParam6 + fVar1) };
	vVar5 = { __LIB_8__::func_353(vVar2) };
	vVar8 = { *uParam1 - vVar5 * Vector(Global_1914319.f_19461.f_194, Global_1914319.f_19461.f_194, Global_1914319.f_19461.f_194) };
	*uParam0 = { vVar8 };
	*uParam2 = { vVar2 };
	*uParam3 = fVar0;
	*uParam4 = fVar1;
	return 1;
}

int func_74()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		switch (iVar1)
		{
			case 2:
			case 3:
			case 4:
				if (__LIB_1__::func_105(iVar1))
				{
					iVar0++;
				}
				break;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_75(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	if (__LIB_1__::func_280(iParam0, &uVar0, uParam1, iParam2))
	{
		if (uParam1->f_16 <= 0.1f && uParam1->f_20 <= 0.1f)
		{
			return true;
		}
		return false;
	}
	return false;
}

int func_76(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = __LIB_7__::func_665(iParam0);
		if (!__LIB_0__::func_144(iVar0, 0))
		{
			iVar0 = __LIB_8__::func_694(iParam0);
		}
	}
	else
	{
		iVar0 = __LIB_8__::func_694(iParam0);
	}
	return iVar0;
}

bool func_77(int iParam0, int iParam1, int iParam2)
{
	struct<13> Var0;
	var uVar16;
	struct<4> Var22;
	struct<22> Var26;
	Var0.f_7 = 752097756;
	Var0.f_8 = 1056964608;
	Var0.f_9 = 1065353216;
	Var0.f_4 = iParam0;
	Var0 = { __LIB_0__::func_429(iParam0, __LIB_1__::func_117(0), iParam2, 0) };
	Var0.f_6 = iParam1;
	Var0.f_12 = 1;
	Var22 = { __LIB_0__::func_217() };
	if (__LIB_0__::func_639(&Var0, &Var22))
	{
		return false;
	}
	if (WEAPON::_GIVE_WEAPON_TO_PED(Global_35, &Var0, &uVar16))
	{
		Var26.f_9 = -1591664384;
		if (INVENTORY::_0x025A1B1FB03FBF61(__LIB_0__::func_162(0), &Var0, &Var26, 22, 1))
		{
			if (!Var26.f_21)
			{
				Var26.f_21 = 1;
				INVENTORY::_0xD80A8854DB5CFBA5(__LIB_0__::func_162(0), &Var0, &Var26, 22);
			}
		}
		return true;
	}
	return false;
}

bool func_78(int iParam0, int iParam1, float fParam2)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;
	*fParam2 = 1f;
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_720(22, &Var0))
	{
		return false;
	}
	Var0.f_2 = -1023752283;
	Var0.f_3 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar6 = __LIB_14__::func_454(iParam0);
		__LIB_14__::func_453(iVar6, &uVar5);
		Var0.f_2 = uVar5;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam2, &Var0);
		if (*fParam2 < 1f)
		{
			*fParam2 = 1f;
		}
		return true;
	}
	return false;
}

int func_79(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
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
					__LIB_7__::func_642(iVar9, &iVar6, &uVar7, &iVar5, &uVar8);
					__LIB_2__::func_999(&iVar0, iVar9, iVar5, iVar6);
					if (!__LIB_0__::func_144(iVar0, 0))
					{
						iVar0 = __LIB_8__::func_694(iVar2);
					}
				}
				else
				{
					iVar0 = __LIB_8__::func_694(iVar2);
				}
				if (iVar0 == iParam1)
				{
					PED::_0xED00D72F81CF7278(iVar2, 0, 0);
					if (bParam3)
					{
						__LIB_9__::func_299(iVar2);
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

void func_80(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam3 <= 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam2 == -1)
	{
		return;
	}
	iVar0 = __LIB_9__::func_927(uParam0, iParam1, iParam2);
	if (iVar0 != -1)
	{
		(uParam0[iVar0 /*4*/])->f_2 = ((uParam0[iVar0 /*4*/])->f_2 + iParam3);
		(uParam0[iVar0 /*4*/])->f_1 = __LIB_0__::func_23();
		__LIB_1__::func_446(&((uParam0[iVar0 /*4*/])->f_1), 0, 0, 5, 0, 0, 0, 0);
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 <= (*uParam0 - 1))
	{
		if ((*uParam0)[iVar2 /*4*/] == 0)
		{
			(*uParam0)[iVar2 /*4*/] = iParam1;
			(uParam0[iVar2 /*4*/])->f_2 = iParam3;
			(uParam0[iVar2 /*4*/])->f_1 = __LIB_0__::func_23();
			__LIB_1__::func_446(&((uParam0[iVar2 /*4*/])->f_1), 0, 0, 5, 0, 0, 0, 0);
			(uParam0[iVar2 /*4*/])->f_3 = iParam2;
			return;
		}
		if (__LIB_1__::func_110((uParam0[iVar1 /*4*/])->f_1, (uParam0[iVar2 /*4*/])->f_1, 1))
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	(*uParam0)[iVar1 /*4*/] = iParam1;
	(uParam0[iVar1 /*4*/])->f_2 = iParam3;
	(uParam0[iVar1 /*4*/])->f_1 = __LIB_0__::func_23();
	__LIB_1__::func_446(&((uParam0[iVar1 /*4*/])->f_1), 0, 0, 5, 0, 0, 0, 0);
	(uParam0[iVar1 /*4*/])->f_3 = iParam2;
}

int func_81()
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383.f_393))
	{
		__LIB_0__::func_989();
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar0, 0);
	__LIB_0__::func_149(-1);
	__LIB_0__::func_148(3);
	return 1;
}

void func_82(int iParam0)
{
	int iVar0;
	if (Global_40.f_7731[iParam0 /*5*/] <= 0)
	{
		return;
	}
	iVar0 = (Global_40.f_7731[iParam0 /*5*/] - 1);
	__LIB_10__::func_876(iParam0, iVar0, 0);
	if (__LIB_4__::func_631())
	{
		if (Global_40.f_7748.f_1 >= 9)
		{
			__LIB_8__::func_987();
		}
		else
		{
			__LIB_8__::func_988();
		}
	}
}

bool func_83()
{
	int iVar0;
	float fVar1;
	iVar0 = __LIB_0__::func_398(7);
	fVar1 = -1f;
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (__LIB_0__::func_821(7) != 0)
		{
			fVar1 = __LIB_1__::func_136(7);
			if (fVar1 != -1f)
			{
				if (__LIB_0__::func_48(Global_35, iVar0, fVar1, 1))
				{
					return false;
				}
			}
		}
	}
	if (__LIB_5__::func_917() != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1900383.f_393))
		{
			if (__LIB_0__::func_48(Global_35, Global_1900383.f_393, 5f, 1))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_84(int iParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	if (__LIB_4__::func_377(1024))
	{
		return false;
	}
	if (!__LIB_0__::func_293(43))
	{
		return false;
	}
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
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (__LIB_1__::func_16(iParam0))
	{
		return false;
	}
	if (__LIB_1__::func_15(iParam0))
	{
		return false;
	}
	if (__LIB_11__::func_451(iParam0))
	{
		return false;
	}
	if (__LIB_12__::func_202(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (__LIB_12__::func_545(iVar0))
	{
		return false;
	}
	if (__LIB_12__::func_546(iVar0))
	{
		return false;
	}
	bVar1 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::GET_MOUNT(Global_35) == iParam0)
		{
			bVar1 = true;
		}
		else
		{
			return false;
		}
	}
	if (bVar1)
	{
		if (iParam0 != __LIB_12__::func_548())
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
			__LIB_12__::func_544();
			__LIB_12__::func_549(iParam0);
			__LIB_12__::func_550(vVar2);
		}
		iVar5 = MISC::GET_GAME_TIMER();
		iVar6 = __LIB_12__::func_551();
		if (iVar6 == 0)
		{
			__LIB_12__::func_552(iVar5);
			return false;
		}
		if (iVar6 + 2000 > iVar5)
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_552(0);
	}
	if (__LIB_12__::func_553(iParam0, &uVar7, 100f))
	{
		return false;
	}
	iVar8 = PLAYER::PLAYER_ID();
	if (__LIB_2__::func_173(iVar8, 1, 0, 1))
	{
		return false;
	}
	if (LAW::_0x0BB6DE7D23C60626(iVar8))
	{
	}
	if (LAW::_0x69E181772886F48B(iVar8))
	{
		return false;
	}
	if (LAW::_0xF0FBFB9AB15F7734(iVar8, 1, 0))
	{
		return false;
	}
	if (!__LIB_12__::func_574(iParam0))
	{
		return false;
	}
	return true;
}

void func_85(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_4))
	{
		__LIB_1__::func_281(&(uParam0->f_4), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_5), 8);
}

bool func_86()
{
	if ((__LIB_0__::func_2() == -1 && __LIB_1__::func_25(Global_1835011[60 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

int func_87(int iParam0, int iParam1, bool bParam2, int iParam3)
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
		return 0;
	}
	*bParam2 = 0;
	Var0 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &iVar13))
			{
				if (__LIB_0__::func_357(iVar13) == 526314052)
				{
					if (__LIB_6__::func_327(iVar13, 3) > 0)
					{
					}
					else
					{
						Jump @142; //curOff = 125
						if (__LIB_6__::func_327(iVar13, 0) > 0)
						{
						}
						else if (__LIB_0__::func_976(iVar13, iParam1, &Var14, &iVar45, 1, 0))
						{
							iVar46 = 0;
							while (iVar46 < iVar45)
							{
								if (iParam0 == Var14[iVar46 /*2*/])
								{
									*bParam2 = 1;
									*iParam3 = (*iParam3 + Var14[iVar46 /*2*/].f_1);
								}
								iVar46++;
							}
						}
					}
					iVar12++;
					ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
					return 1;
				}
			}
		}
	}
}

int func_88()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = iVar0;
		if (iVar1 == 1)
		{
		}
		else if (iVar1 == 0)
		{
		}
		else if (iVar1 == 4 && __LIB_12__::func_577())
		{
		}
		else if (!__LIB_1__::func_105(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

void func_89()
{
	int iVar0;
	if (Global_40.f_7748.f_1 <= 0)
	{
		return;
	}
	iVar0 = (Global_40.f_7748.f_1 - 1);
	__LIB_10__::func_877(iVar0, 0);
}

bool func_90(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && __LIB_1__::func_679(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (__LIB_8__::func_574(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

void func_91(int iParam0, int iParam1, int iParam2)
{
	__LIB_12__::func_575(iParam0, iParam1, (__LIB_11__::func_884(iParam0, iParam1) + iParam2));
}

void func_92(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			__LIB_10__::func_369(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_93(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
		__LIB_10__::func_370(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
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
						__LIB_2__::func_624(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_4__::func_101(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_4__::func_452(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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

bool func_94(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	iVar0 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	__LIB_0__::func_191();
	if (!__LIB_1__::func_713(&(Global_1946804.f_1378), &iVar0, iParam0, -1, 0, 1))
	{
		return false;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7731[0 /*5*/];
	}
	if (iParam3 == -1)
	{
		iParam3 = Global_40.f_7731[1 /*5*/];
	}
	if (iParam4 == -1)
	{
		iParam4 = Global_40.f_7731[2 /*5*/];
	}
	__LIB_10__::func_814(iParam2, iParam3, iParam4);
	if ((iParam2 == 0 && iParam3 == 0) && iParam4 == 0)
	{
		__LIB_10__::func_838(iParam1, joaat("MPC_MOD_HEAD_SUPER_CLEAN_SHAVE"), joaat("MP_COMPONENT_TYPE_HEAD"), 1, 1, 0);
	}
	else
	{
		__LIB_10__::func_838(iParam1, joaat("BASE"), joaat("MP_COMPONENT_TYPE_HEAD"), 1, 1, 0);
	}
	if (bParam5)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			__LIB_1__::func_452(1, 96, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(1, 96, 1, iParam1, 0);
		}
	}
	__LIB_0__::func_245(1);
	return true;
}

void func_95(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_MULTI_ITEM_TRIM_HAIR"):
			__LIB_12__::func_83(Global_35, iParam1, 1);
			break;
	}
}

bool func_96(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	__LIB_0__::func_191();
	iVar1 = 0;
	if (!__LIB_1__::func_713(&(Global_1946804.f_1378), &bVar0, 0, iParam1, 1, 1))
	{
		return false;
	}
	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 2;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
	}
	else
	{
		iVar2 |= 1;
	}
	__LIB_1__::func_452(1, iVar1, iVar2, iParam0, 0);
	if (__LIB_0__::func_2() != -1 && !bVar0)
	{
		__LIB_1__::func_452(4, 0, 0, iParam0, 0);
		__LIB_1__::func_452(5, 0, 0, iParam0, 0);
		__LIB_1__::func_452(6, 0, 0, iParam0, 0);
	}
	return true;
}

bool func_97(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	__LIB_0__::func_191();
	iVar1 = 0;
	if (!__LIB_1__::func_713(&(Global_1946804.f_1378), &bVar0, iParam1, -1, 1, 1))
	{
		return false;
	}
	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 2;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
	}
	else
	{
		iVar2 |= 1;
	}
	__LIB_1__::func_452(1, iVar1, iVar2, iParam0, 0);
	if (__LIB_0__::func_2() != -1 && !bVar0)
	{
		__LIB_1__::func_452(4, 0, 0, iParam0, 0);
		__LIB_1__::func_452(5, 0, 0, iParam0, 0);
		__LIB_1__::func_452(6, 0, 0, iParam0, 0);
	}
	return true;
}

int func_98(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!__LIB_12__::func_570(iParam0) && !__LIB_12__::func_129(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = __LIB_0__::func_372(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (__LIB_0__::func_778(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = __LIB_0__::func_374(iVar15, iVar1);
			if (__LIB_0__::func_144(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = __LIB_12__::func_153(iVar14);
				if (iVar16 != 0)
				{
					if (iParam1 != 0)
					{
						iVar17 = __LIB_6__::func_327(iVar14, iParam1);
					}
					else
					{
						iVar17 = __LIB_1__::func_614(iVar14, 0, 0);
					}
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * __LIB_12__::func_155(iVar16, __LIB_12__::func_154(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		__LIB_0__::func_375(iVar1);
	}
	return iVar0;
}

void func_99(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!__LIB_0__::func_293(43))
		{
			return;
		}
	}
	iVar0 = __LIB_0__::func_821(iParam0);
	if (__LIB_12__::func_545(iVar0) || __LIB_12__::func_546(iVar0))
	{
		return;
	}
	iVar1 = __LIB_0__::func_819(iParam0);
	if (iVar1 >= __LIB_5__::func_921(iVar0))
	{
		return;
	}
	if (__LIB_6__::func_299(iParam0, iParam1))
	{
		return;
	}
	if (__LIB_6__::func_300(iParam0, iParam1))
	{
		return;
	}
	fVar2 = __LIB_5__::func_922(iParam0, iParam1);
	fVar3 = __LIB_5__::func_923(iParam1);
	fVar3 = (fVar3 * (1f + Global_40.f_11095.f_68));
	switch (iParam1)
	{
		case 1:
			iVar4 = __LIB_0__::func_398(iParam0);
			if (__LIB_6__::func_84(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (__LIB_5__::func_778())
			{
				fVar3 = (fVar3 * 2f);
			}
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 + fVar3);
			break;
		case 4:
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 + fVar3);
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = __LIB_0__::func_833(iParam0);
				fVar6 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
				fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		default:
			__LIB_6__::func_134(iParam1, fVar3);
			break;
	}
	__LIB_9__::func_826(iParam0, fVar3);
	__LIB_5__::func_924(iParam0, iParam1, (fVar2 + fVar3));
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iParam0)
	{
		case joaat("CLOTHING_MULTI_ITEM_TRIM_ALL"):
			iVar0 = (__LIB_4__::func_605(0) - iParam1);
			iVar1 = (__LIB_4__::func_605(1) - iParam1);
			iVar2 = (__LIB_4__::func_605(2) - iParam1);
			if (iVar0 <= -1)
			{
				iVar0 = 0;
			}
			if (iVar1 <= -1)
			{
				iVar1 = 0;
			}
			if (iVar2 <= -1)
			{
				iVar2 = 0;
			}
			__LIB_12__::func_584(Global_35, iVar0, iVar1, iVar2, 1);
			break;
		case joaat("CLOTHING_MULTI_ITEM_TRIM_CHIN"):
			__LIB_12__::func_584(Global_35, (__LIB_4__::func_605(0) - iParam1), -1, -1, 1);
			break;
		case joaat("CLOTHING_MULTI_ITEM_TRIM_CHOPS"):
			__LIB_12__::func_584(Global_35, -1, (__LIB_4__::func_605(1) - iParam1), -1, 1);
			break;
		case joaat("CLOTHING_MULTI_ITEM_TRIM_STACHE"):
			__LIB_12__::func_584(Global_35, -1, -1, (__LIB_4__::func_605(2) - iParam1), 1);
			break;
	}
}

bool func_101()
{
	if ((Global_1935689.f_10195 != (Global_1935689.f_19.f_203 - 1) || __LIB_12__::func_587(__LIB_8__::func_716(0), Global_1935689.f_10190, 0) > 0) || Global_1935689.f_10195 == 15)
	{
		return true;
	}
	return false;
}

void func_102()
{
	bool bVar0;
	if (!__LIB_6__::func_338(456315479))
	{
		bVar0 = true;
		if (!__LIB_6__::func_338(1486898918))
		{
			if (__LIB_5__::func_862(12, 0) > 1)
			{
				__LIB_6__::func_339(1486898918);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!__LIB_6__::func_338(1500419820))
		{
			if (__LIB_5__::func_862(3, 0) > 2)
			{
				__LIB_6__::func_339(1500419820);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!__LIB_6__::func_338(-1642438278))
		{
			if (__LIB_5__::func_862(4, 0) > 2)
			{
				__LIB_6__::func_339(-1642438278);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!__LIB_6__::func_338(-1784068921))
		{
			if (__LIB_12__::func_578())
			{
				__LIB_6__::func_339(-1784068921);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			__LIB_6__::func_339(456315479);
		}
	}
}

void func_103()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_12__::func_589(iVar0);
		iVar0++;
	}
}

bool func_104(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	if (__LIB_0__::func_317() == 3)
	{
		vVar0 = { __LIB_1__::func_546(__LIB_0__::func_317()) };
		fVar3 = (__LIB_1__::func_496() + 7f);
		if (__LIB_1__::func_410(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vVar0, fVar3, 0))
		{
			return true;
		}
	}
	else if (__LIB_7__::func_443(iParam0))
	{
		return true;
	}
	return false;
}

void func_105(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_9__::func_996(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_11__::func_106(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_9__::func_996(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_11__::func_106(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_9__::func_996(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_11__::func_106(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_9__::func_996(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_11__::func_106(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_9__::func_996(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_11__::func_106(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_106(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		__LIB_9__::func_996(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_11__::func_106(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_107(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (__LIB_9__::func_996(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			__LIB_11__::func_106(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_11__::func_106(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_108()
{
	int iVar0;
	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_0__::func_630(iVar0))
		{
			__LIB_14__::func_230(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_109(var uParam0)
{
	*uParam0 = *uParam0;
}

void func_110(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (bParam2)
		{
			PERSCHAR::_0x2DF89CD2ED1D0BDE(iParam0, 1689938120);
		}
		else
		{
			PERSCHAR::_0x2DF89CD2ED1D0BDE(iParam0, 1754194240);
		}
	}
	else if (bParam2)
	{
		PERSCHAR::_0x2DF89CD2ED1D0BDE(iParam0, joaat("META_OUTFIT_DEFAULT"));
	}
	else
	{
		PERSCHAR::_0x2DF89CD2ED1D0BDE(iParam0, -880473644);
	}
}

bool func_111(int iParam0, int iParam1)
{
	return (Global_1051260.f_48[iParam0 /*78*/].f_54 && iParam1) != 0;
}

int func_112(int iParam0)
{
	return Global_1051260.f_48[iParam0 /*78*/].f_6;
}

void func_113(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	Global_20710.f_1167 = iParam0;
}

bool func_114(int iParam0, var uParam1)
{
	if ((iParam0 == 9 || iParam0 == 29) || iParam0 == 19)
	{
		return false;
	}
	return true;
}

void func_115(int iParam0)
{
	Global_1914319.f_17369 = iParam0;
}

int func_116(int iParam0)
{
	if (((((iParam0 == 10 || iParam0 == 17) || iParam0 == 31) || iParam0 == 12) || iParam0 == 13) || iParam0 == 14)
	{
		return 1;
	}
	return 0;
}

bool func_117(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
		case 10:
		case 19:
		case 22:
		case 31:
			return false;
		default:
			break;
	}
	switch (iParam1)
	{
		case 27:
			return false;
		default:
			break;
	}
	return true;
}

bool func_118(int iParam0)
{
	switch (iParam0)
	{
		case 56:
		case 57:
		case 58:
		case 59:
		case 68:
		case 69:
		case 73:
		case 79:
		case 91:
			return false;
		default:
			break;
	}
	return true;
}

bool func_119(int iParam0, int iParam1)
{
	return (Global_1051260.f_48[iParam0 /*78*/].f_1 && iParam1) != 0;
}

void func_120(bool bParam0)
{
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(2077578434);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(2077578434);
	}
}

void func_121(bool bParam0)
{
	Global_1914319.f_17375 = bParam0;
}

bool func_122(int iParam0)
{
	return (((iParam0 == 31 || iParam0 == 9) || iParam0 == 10) || iParam0 == 32);
}

void func_123(int iParam0)
{
	Global_1109400.f_3 = (Global_1109400.f_3 - (Global_1109400.f_3 && iParam0));
}

void func_124(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_1985))
	{
		if (uParam0->f_2 != 18 && uParam0->f_2 != 10)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::SET_CAM_ACTIVE(uParam0->f_1985, false);
		CAM::DESTROY_CAM(uParam0->f_1985, true);
		uParam0->f_1985 = 0;
	}
}

void func_125(var uParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(uParam0->f_1267) && DATAFILE::_0x603AC35FD4602C76(uParam0->f_1267))
	{
		DATAFILE::_DATAFILE_UNLOAD(uParam0->f_1267);
	}
	uParam0->f_1268 = 0;
	uParam0->f_1267 = 0;
}

void func_126(var uParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		Global_1914319.f_3[uParam0->f_2 /*446*/].f_7 = (Global_1914319.f_3[uParam0->f_2 /*446*/].f_7 - Global_1914319.f_3[uParam0->f_2 /*446*/].f_7 & 8192);
	}
	else if ((Global_1051260.f_48[uParam0->f_2 /*78*/].f_54 & 32768 == 0 && Global_1051260.f_48[uParam0->f_2 /*78*/].f_54 & 16384 == 0) && Global_1051260.f_48[uParam0->f_2 /*78*/].f_54 & 65536 == 0)
	{
		Global_1051260.f_48[uParam0->f_2 /*78*/].f_1 = (Global_1051260.f_48[uParam0->f_2 /*78*/].f_1 - Global_1051260.f_48[uParam0->f_2 /*78*/].f_1 & 8192);
	}
}

bool func_127(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	return (Global_1051260.f_2779[iParam0] && iParam1) != 0;
}

void func_128(var uParam0, bool bParam1)
{
	uParam0->f_1273 = bParam1;
}

var func_129(var uParam0)
{
	return uParam0->f_1266;
}

void func_130(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1724))
	{
		uParam0->f_1724 = ANIMSCENE::_CREATE_ANIM_SCENE("script@ambient@shop@CATALOG_PLAYER", 0, 0, false, true);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1725))
	{
		uParam0->f_1725 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@catalogue_generic", 0, 0, false, true);
	}
}

void func_131(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	int iVar12;
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1724, uParam0->f_1727, uParam0->f_1730, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1724, "player", Global_35, 0);
	vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1744, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_1744, 2) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1745))
	{
		uParam0->f_1745 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_1743, vVar0, false, true, false, true);
		iVar12 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Catalog");
		uParam0->f_4.f_274 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar12, "CatalogEntityIndex", uParam0->f_1745);
	}
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_1745, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1745, true);
	ENTITY::SET_ENTITY_COORDS(uParam0->f_1745, vVar0, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_1745, vVar3, 2, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1724, "CATALOG", uParam0->f_1745, 0);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1745, false);
	ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1724, &vVar6, &uVar9, 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1724, vVar0.x, vVar0.y, vVar6.z, vVar3, 2);
}

char* func_132(var uParam0)
{
	return "INT_Catalogue_Exposure";
}

bool func_133(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_1791[iParam1])
	{
		if (bParam2)
		{
			uParam0->f_1791[iParam1] = 0;
		}
		return true;
	}
	return false;
}

void func_134(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_1212 = bParam1;
	if (bParam2)
	{
		Global_20710.f_2401 = !bParam1;
	}
}

void func_135(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1791[iParam1] = iParam2;
}

void func_136(var uParam0)
{
	uParam0->f_1266 = 0;
}

void func_137(var uParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1281))
	{
		return;
	}
	if (bParam1)
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1281, false);
	}
	else
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1281, true);
	}
}

void func_138(char* sParam0, char* sParam1)
{
	AUDIO::_0xAC84686C06184B0D(sParam0, sParam1);
}

void func_139(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[uParam0->f_2 /*446*/].f_23);
		iVar1 = Global_1914319.f_3[uParam0->f_2 /*446*/].f_17;
	}
	else
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051260.f_48[uParam0->f_2 /*78*/].f_19);
		iVar1 = Global_1051260.f_48[uParam0->f_2 /*78*/].f_6;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1) && !PED::_IS_PED_USING_SCENARIO_POINT(iVar0, iVar1))
		{
			if (bParam1)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
			}
			TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar1, 0, 0, true, bParam1, 0, false, -1f, false);
		}
	}
}

void func_140(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_30))
	{
		ENTITY::DELETE_ENTITY(&(uParam0->f_30));
	}
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
}

void func_141(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam1 == uParam0->f_141[iVar0 /*7*/])
		{
			uParam0->f_141[iVar0 /*7*/] = -1;
			uParam0->f_141[iVar0 /*7*/].f_1 = 0;
			uParam0->f_141[iVar0 /*7*/].f_3 = 0;
			uParam0->f_141[iVar0 /*7*/].f_2 = 0;
			uParam0->f_141[iVar0 /*7*/].f_4 = 0f;
			uParam0->f_141[iVar0 /*7*/].f_5 = 0f;
			uParam0->f_141[iVar0 /*7*/].f_6 = 0f;
		}
		iVar0++;
	}
}

void func_142(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam1 == (*uParam0)[iVar0 /*7*/])
		{
			(*uParam0)[iVar0 /*7*/] = -1;
			(uParam0[iVar0 /*7*/])->f_1 = 0;
			(uParam0[iVar0 /*7*/])->f_3 = 0;
			(uParam0[iVar0 /*7*/])->f_2 = 0;
			(uParam0[iVar0 /*7*/])->f_4 = 0f;
			(uParam0[iVar0 /*7*/])->f_5 = 0f;
			(uParam0[iVar0 /*7*/])->f_6 = 0f;
		}
		iVar0++;
	}
}

bool func_143(int iParam0)
{
	if (iParam0 != 8 && iParam0 != 33)
	{
		return false;
	}
	return true;
}

int func_144(var uParam0)
{
	return uParam0->f_436[uParam0->f_281 /*185*/];
}

bool func_145(var uParam0)
{
	switch (*uParam0)
	{
		case -1:
		case 5:
		case 11:
		case 15:
		case 16:
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
		case 34:
			return false;
		default:
			break;
	}
	return true;
}

bool func_146(var uParam0)
{
	if (uParam0->f_59 > 0 && uParam0->f_59 != 5)
	{
		return true;
	}
	return false;
}

void func_147(var uParam0)
{
	if (uParam0->f_52 != 0)
	{
		uParam0->f_52 = 0;
	}
}

void func_148(var uParam0)
{
	uParam0->f_60 = 0;
	uParam0->f_62 = 0;
}

var func_149(var uParam0)
{
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_22);
	return StackVal;
}

bool func_150(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 7:
			return true;
	}
	return false;
}

bool func_151(var uParam0)
{
	int iVar0;
	iVar0 = PED::_0x7CC2186C32D3540A(uParam0->f_4, PLAYER::PLAYER_ID());
	return (iVar0 == 2 || iVar0 == 3);
}

void func_152(int iParam0)
{
	Global_1109400.f_3 = (Global_1109400.f_3 || iParam0);
}

void func_153(int iParam0)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return;
	}
	Global_20710[iParam0 /*45*/].f_43 = 0;
}

void func_154(int iParam0, bool bParam1)
{
	if (__LIB_1__::func_917(iParam0))
	{
		if (bParam1)
		{
			Global_1914319.f_19001[iParam0 /*3*/].f_2 = 1;
		}
		else
		{
			Global_1914319.f_19001[iParam0 /*3*/].f_2 = 0;
		}
	}
}

bool func_155(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	return Global_1914319.f_19001[iParam0 /*3*/].f_2 == 1;
}

bool func_156(var uParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(uParam0->f_1267))
	{
		return __LIB_0__::func_27(uParam0->f_1268, 1);
	}
	return false;
}

void func_157(var uParam0, var uParam1)
{
	*uParam0 = 31;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 22, &uParam1);
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SHOP_ASB_GUNSMITH");
		case 1:
			return joaat("SHOP_ASB_NEWSPAPER_BOY");
		case 2:
			return joaat("SHOP_ASB_POST_OFFICE");
		case 3:
			return joaat("SHOP_ASB_TRAIN_STATION");
		case 120:
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
		case 95:
			return joaat("SHOP_AMD_GENERAL_STORE");
		case 96:
			return joaat("SHOP_AMD_POST_OFFICE");
		case 97:
			return joaat("SHOP_AMD_BARTENDER");
		case 127:
			return joaat("SHOP_ANYWHERE_HANDHELD");
		case 10:
			return joaat("SHOP_BLK_BUTCHER");
		case 6:
			return joaat("SHOP_BLK_BANK");
		case 7:
			return joaat("SHOP_BLK_GENERAL_STORE");
		case 11:
			return joaat("SHOP_BLK_BARTENDER");
		case 8:
			return joaat("SHOP_BLK_GUNSMITH");
		case 9:
			return joaat("SHOP_BLK_BARBER");
		case 13:
			return joaat("SHOP_BLK_HORSE_SHOP");
		case 14:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 15:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 16:
			return joaat("SHOP_BLK_NEWSPAPER_BOY");
		case 106:
			return joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN");
		case 107:
			return joaat("SHOP_BLK_COACH");
		case 17:
			return joaat("SHOP_BLK_TAILOR");
		case 12:
			return joaat("SHOP_BLK_PHOTO_STUDIO");
		case 128:
			return joaat("SHOP_BVH_DOCTOR");
		case 129:
			return joaat("SHOP_BVH_GENERAL_STORE");
		case 130:
			return joaat("SHOP_BVH_GUNSMITH");
		case 131:
			return joaat("SHOP_BVH_HORSE_TRAINER");
		case 151:
			return joaat("SHOP_CAMP_SHAVING");
		case 132:
			return joaat("SHOP_CLM_DOCTOR");
		case 133:
			return joaat("SHOP_CLM_GENERAL_STORE");
		case 134:
			return joaat("SHOP_CLM_GUNSMITH");
		case 136:
			return joaat("SHOP_CLM_HORSE_FENCE");
		case 135:
			return joaat("SHOP_CLM_HORSE_TRAINER");
		case 150:
			return joaat("SHOP_CLOTHING");
		case 101:
			return joaat("SHOP_DYNAMIC");
		case 18:
			return joaat("SHOP_EMR_FENCE");
		case 19:
			return joaat("SHOP_EMR_GENERAL_STORE");
		case 20:
			return joaat("SHOP_EMR_POST_OFFICE");
		case 21:
			return joaat("SHOP_EMR_TRAIN_STATION");
		case 137:
			return joaat("SHOP_HSO_DOCTOR");
		case 138:
			return joaat("SHOP_HSO_GENERAL_STORE");
		case 139:
			return joaat("SHOP_HSO_GUNSMITH");
		case 140:
			return joaat("SHOP_HSO_HORSE_TRAINER");
		case 22:
			return joaat("SHOP_LAG_BAIT_STORE");
		case 23:
			return joaat("SHOP_RGG_POST_OFFICE");
		case 24:
			return joaat("SHOP_RGG_TRAIN_STATION");
		case 25:
			return joaat("SHOP_RHO_BANK");
		case 26:
			return joaat("SHOP_RHO_BUTCHER");
		case 33:
			return joaat("SHOP_RHO_BARTENDER");
		case 27:
			return joaat("SHOP_RHO_FENCE");
		case 28:
			return joaat("SHOP_RHO_GENERAL_STORE");
		case 29:
			return joaat("SHOP_RHO_GUNSMITH");
		case 30:
			return joaat("SHOP_RHO_POST_OFFICE");
		case 31:
			return joaat("SHOP_RHO_TRAIN_STATION");
		case 112:
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
		case 32:
			return joaat("SHOP_RHO_NEWSPAPER_BOY");
		case 35:
			return joaat("SHOP_SCM_HORSE_SHOP");
		case 36:
			return joaat("SHOP_SDN_BANK");
		case 37:
			return joaat("SHOP_SDN_BARBER");
		case 52:
			return joaat("SHOP_SDN_BARTENDER");
		case 38:
			return joaat("SHOP_SDN_BUTCHER");
		case 39:
			return joaat("SHOP_SDN_DOCTOR");
		case 40:
			return joaat("SHOP_SDN_EXOTIC");
		case 41:
			return joaat("SHOP_SDN_FENCE");
		case 42:
			return joaat("SHOP_SDN_GENERAL_STORE");
		case 43:
			return joaat("SHOP_SDN_GUNSMITH");
		case 44:
			return joaat("SHOP_SDN_HORSE_SHOP");
		case 45:
			return joaat("SHOP_SDN_POST_OFFICE");
		case 46:
			return joaat("SHOP_SDN_TRAIN_STATION");
		case 47:
			return joaat("SHOP_SDN_TAILOR");
		case 48:
			return joaat("SHOP_SDN_MARKET");
		case 49:
			return joaat("SHOP_SDN_FRENCH_MARKET");
		case 50:
			return joaat("SHOP_SDN_FRENCH_MARKET");
		case 51:
			return joaat("SHOP_SDN_NEWSPAPER_BOY");
		case 55:
			return joaat("SHOP_SDN_TRAPPER");
		case 53:
			return joaat("SHOP_SDN_BARTENDER_SLUM");
		case 109:
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
		case 110:
			return joaat("SHOP_SDN_COACH");
		case 54:
			return joaat("SHOP_SDN_PHOTO_STUDIO");
		case 145:
			return joaat("SHOP_SHB_DOCTOR");
		case 146:
			return joaat("SHOP_SHB_GENERAL_STORE");
		case 147:
			return joaat("SHOP_SHB_GUNSMITH");
		case 148:
			return joaat("SHOP_SHB_HORSE_TRAINER");
		case 60:
			return joaat("SHOP_STR_BUTCHER");
		case 66:
			return joaat("SHOP_STR_BARTENDER");
		case 61:
			return joaat("SHOP_STR_GENERAL_STORE");
		case 62:
			return joaat("SHOP_STR_WELCOME_CENTER");
		case 63:
			return joaat("SHOP_STR_HORSE_SHOP");
		case 64:
			return joaat("SHOP_STR_NEWSPAPER_BOY");
		case 65:
			return joaat("SHOP_STR_POST_OFFICE");
		case 114:
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
		case 68:
			return joaat("SHOP_VAL_BANK");
		case 69:
			return joaat("SHOP_VAL_BARBER");
		case 70:
			return joaat("SHOP_VAL_BARTENDER");
		case 72:
			return joaat("SHOP_VAL_BUTCHER");
		case 73:
			return joaat("SHOP_VAL_DOCTOR");
		case 74:
			return joaat("SHOP_VAL_GENERAL_STORE");
		case 75:
			return joaat("SHOP_VAL_GUNSMITH");
		case 76:
			return joaat("SHOP_VAL_HORSE_SHOP");
		case 77:
			return joaat("SHOP_VAL_POST_OFFICE");
		case 78:
			return joaat("SHOP_VAL_TRAIN_STATION");
		case 80:
			return joaat("SHOP_VAL_NEWSPAPER_BOY");
		case 79:
			return joaat("SHOP_VAL_HOTEL");
		case 81:
			return joaat("SHOP_VAL_BARTENDER_SLUM");
		case 102:
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
		case 103:
			return joaat("SHOP_VAL_COACH");
		case 82:
			return joaat("SHOP_VAN_GENERAL_STORE");
		case 86:
			return joaat("SHOP_VAN_POST_OFFICE");
		case 85:
			return joaat("SHOP_VAN_POST_OFFICE");
		case 83:
			return joaat("SHOP_VAN_BARTENDER");
		case 116:
			return joaat("SHOP_VAN_COACH");
		case 84:
			return joaat("SHOP_VAN_HORSE_SHOP");
		case 87:
			return joaat("SHOP_WAL_GENERAL_STORE");
		case 89:
			return joaat("SHOP_WAL_POST_OFFICE");
		case 88:
			return joaat("SHOP_WAL_TRAIN_STATION");
		case 149:
			return joaat("SHOP_WEAPON_MOD_STORE");
		case 93:
			return joaat("SHOP_TBL_BARTENDER");
		case 90:
			return joaat("SHOP_TBL_GENERAL_STORE");
		case 91:
			return joaat("SHOP_TBL_GUNSMITH");
		case 94:
			return joaat("SHOP_TBL_HORSE_SHOP");
		case 92:
			return joaat("SHOP_TBL_BUTCHER");
		case 98:
			return joaat("SHOP_RYC_FENCE");
		case 126:
			return joaat("SHOP_WILDERNESS_SUPPLIES");
		case 152:
			return joaat("SHOP_CAMP_SHAVING");
		default:
			break;
	}
	return joaat("SHOP");
}

void func_159(var uParam0)
{
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

bool func_160(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 14 || iParam1 <= -1)
	{
		return false;
	}
	return __LIB_0__::func_27(uParam0->f_133[iParam1], iParam2);
}

bool func_161(var uParam0, var uParam1)
{
	*uParam0 = *uParam0;
	uParam1 = uParam1;
	return true;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 31:
			return 1;
	}
	return 0;
}

int func_163()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return 0;
	}
	iVar1 = PED::_GET_LASSO_TARGET(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return 0;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (PED::IS_PED_DEAD_OR_DYING(iVar2, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(iVar2))
	{
		return 0;
	}
	return 1;
}

void func_164(var uParam0)
{
	uParam0->f_2006 = 0;
}

bool func_165(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 10:
		case 18:
			return false;
		default:
			break;
	}
	return true;
}

void func_166(char* sParam0, char* sParam1)
{
	AUDIO::_0x6339C1EA3979B5F7(sParam0, sParam1);
}

void func_167(var uParam0, var uParam1)
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_4.f_1190))
	{
		uParam0->f_4.f_1190 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1752))
		{
			CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4.f_1190, uParam0->f_1752, 0.101f, 1.358f, 0.5381f, true);
			CAM::POINT_CAM_AT_ENTITY(uParam0->f_4.f_1190, uParam0->f_1752, 0.2912f, -1.6309f, 0.3644f, true);
		}
		else
		{
			CAM::SET_CAM_ROT(uParam0->f_4.f_1190, ENTITY::GET_ENTITY_ROTATION(uParam0->f_1744, 2) + Vector(3.6417f, 0f, -3.3193f), 2);
			CAM::SET_CAM_COORD(uParam0->f_4.f_1190, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1744, 0.1525f, -0.523f, 0.4721f));
		}
		CAM::SET_CAM_FOV(uParam0->f_4.f_1190, 37f);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

bool func_168(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_1210))
	{
		uParam0->f_1210 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-356826253);
		return false;
	}
	if (uParam0->f_221 != 34)
	{
		UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_1210, -132805333);
	}
	else
	{
		UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_1210, -238370630);
	}
	if (!UISTATEMACHINE::_UISTATEMACHINE_EXISTS(-102170019))
	{
		if (!UISTATEMACHINE::_UISTATEMACHINE_CREATE(-102170019, uParam0->f_1210))
		{
			return false;
		}
		return false;
	}
	return true;
}

int func_169(var uParam0)
{
	*uParam0 = *uParam0;
	return 1;
}

void func_170(char* sParam0)
{
	AUDIO::_0x9428447DED71FC7E(sParam0);
}

void func_171(var uParam0)
{
	uParam0->f_2303 = 1;
	uParam0->f_2305 = MISC::GET_GAME_TIMER();
}

void func_172(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_101, 297, bParam1);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_101, 315, !bParam1);
	}
}

void func_173(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_101, 130, !bParam1);
	}
}

bool func_174(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1109400.f_3 && iParam0) != 0;
	}
	return (Global_1108178[iParam1 /*37*/].f_3 && iParam0) != 0;
}

bool func_175(var uParam0)
{
	return uParam0->f_1273;
}

bool func_176(var uParam0)
{
	return uParam0->f_1.f_174[uParam0->f_1.f_185];
}

bool func_177(var uParam0)
{
	int iVar0;
	iVar0 = uParam0->f_1.f_185;
	if (uParam0->f_222)
	{
		if (iVar0 != 0 && iVar0 != 1)
		{
			if (uParam0->f_1.f_186[iVar0] > 0)
			{
				TASK::_0xB35370D5353995CB(Global_35, uParam0->f_1.f_186[iVar0], 1048576000 /* Float: 0.25f */);
			}
		}
		return true;
	}
	else
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
		{
			return false;
		}
		if (!ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1, &(uParam0->f_1.f_1[iVar0 /*8*/])))
		{
			return false;
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_1, &(uParam0->f_1.f_1[iVar0 /*8*/]), true);
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1, false))
		{
			if (iVar0 == 0 || iVar0 == 1)
			{
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_1, "player", &(uParam0->f_1.f_1[iVar0 /*8*/]), 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
			}
			else
			{
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_1);
			}
		}
		ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1, &(uParam0->f_1.f_1[iVar0 /*8*/]));
		return true;
	}
	return false;
}

bool func_178(var uParam0)
{
	int iVar0;
	iVar0 = uParam0->f_1.f_185;
	if (uParam0->f_222)
	{
		if (TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35) == uParam0->f_1.f_186[iVar0])
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
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
		{
			return false;
		}
		if (!ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1, &(uParam0->f_1.f_1[iVar0 /*8*/])))
		{
			return false;
		}
		if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1, &(uParam0->f_1.f_1[iVar0 /*8*/])))
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_1, &(uParam0->f_1.f_82[iVar0 /*8*/]), 1))
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

void func_179(var uParam0)
{
	struct<149> Var0;
	uParam0->f_281.f_1 = -1;
	Var0 = 16;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_81 = 16;
	Var0.f_115 = 16;
	uParam0->f_281.f_3 = { Var0 };
}

void func_180(var uParam0)
{
	uParam0->f_2 = 1;
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return joaat("INPUT_GAME_MENU_TAB_LEFT");
		case 5:
			return joaat("INPUT_GAME_MENU_TAB_RIGHT");
		case 0:
			return joaat("INPUT_GAME_MENU_ACCEPT");
		case 1:
			return joaat("INPUT_GAME_MENU_CANCEL");
		case 2:
			return joaat("INPUT_GAME_MENU_EXTRA_OPTION");
		case 3:
			return joaat("INPUT_GAME_MENU_OPTION");
		case 4:
			return joaat("INPUT_INSPECT_ZOOM");
		default:
			break;
	}
	return 0;
}

float func_182(float fParam0, float fParam1, float fParam2)
{
	fParam2 = (fParam2 * fParam2);
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_183(var uParam0)
{
	return uParam0->f_436[uParam0->f_281 /*185*/].f_3;
}

bool func_184(var uParam0)
{
	if (uParam0->f_150 > 8)
	{
		return true;
	}
	return false;
}

int func_185(var uParam0, int iParam1)
{
	return uParam0->f_1698[iParam1];
}

int func_186(var uParam0)
{
	if (uParam0->f_281.f_1 >= 4 || uParam0->f_281.f_1 < 0)
	{
		return 0;
	}
	return uParam0->f_436[uParam0->f_281 /*185*/].f_136[uParam0->f_281.f_1 /*3*/];
}

bool func_187(int iParam0)
{
	return ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0);
}

bool func_188(int iParam0)
{
	if ((((iParam0 == 0 || iParam0 == 1) || iParam0 == 0) || iParam0 == 12) || iParam0 == 13)
	{
		return true;
	}
	return false;
}

bool func_189(var uParam0)
{
	if (__LIB_0__::func_81(uParam0) == 4 || __LIB_0__::func_81(uParam0) == 8)
	{
		return true;
	}
	return false;
}

bool func_190(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 22);
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("INPUT_GAME_MENU_TAB_LEFT");
		case 1:
			return joaat("INPUT_GAME_MENU_TAB_RIGHT");
		case 3:
			return joaat("INPUT_GAME_MENU_ACCEPT");
		case 4:
			return joaat("INPUT_GAME_MENU_ACCEPT");
		case 5:
			return joaat("INPUT_GAME_MENU_CANCEL");
		case 6:
			return joaat("INPUT_GAME_MENU_CANCEL");
		case 7:
			return joaat("INPUT_GAME_MENU_EXTRA_OPTION");
		case 9:
			return joaat("INPUT_GAME_MENU_OPTION");
		case 8:
			return joaat("INPUT_INSPECT_ZOOM");
		default:
			break;
	}
	return 0;
}

Vector3 func_192(var uParam0)
{
	vector3 vVar0;
	if (uParam0->f_281.f_1 >= 4 || uParam0->f_281.f_1 < 0)
	{
		vVar0.f_1 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	return uParam0->f_436[uParam0->f_281 /*185*/].f_136[uParam0->f_281.f_1 /*3*/];
}

bool func_193(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam2 < 0)
	{
		return false;
	}
	if (!__LIB_14__::func_693(iParam0))
	{
		return false;
	}
	iVar0 = -1;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(iParam0, iParam1, iParam2, &iVar0))
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam0, iVar0, iParam3);
}

bool func_194(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam0, iParam1, &Var0))
	{
		iVar4 = 0;
		iVar5 = -1;
		iVar6 = -1;
		if (iParam2 >= 0 && iParam2 < Var0.f_3)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(iParam0, Var0, iParam2, &iVar4, &iVar5, &iVar6))
			{
				*uParam3 = iVar4;
				uParam3->f_1 = iVar6;
				uParam3->f_2 = iVar5;
				return true;
			}
		}
	}
	return false;
}

void func_195(var uParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_30))
	{
		return;
	}
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_30, bParam1);
}

char* func_196(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return "SHOP_PREV_ITEM";
		case 5:
			return "SHOP_NEXT_ITEM";
		case 0:
			return "IB_SELECT";
		case 1:
			return "SHOP_CLOSE";
		case 2:
			return "SHOP_VIEW";
		case 3:
			return "SHOP_READ";
		case 4:
			return "SHOP_ZOOM";
		default:
			break;
	}
	return "";
}

int func_197(var uParam0)
{
	return uParam0->f_1281.f_1;
}

bool func_198(var uParam0)
{
	return uParam0->f_1212;
}

char* func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOP_PREV_PAGE";
		case 1:
			return "SHOP_NEXT_PAGE";
		case 2:
			return "SHOP_PAGES";
		case 3:
			return "IB_SELECT";
		case 5:
			return "IB_BACK";
		case 6:
			return "SHOP_INDEX";
		case 7:
			return "SHOP_VIEW";
		case 9:
			return "SHOP_READ";
		case 8:
			return "SHOP_ZOOM";
		case 4:
			return "SHOP_AMMO_BUY_MAX";
		default:
			break;
	}
	return "";
}

void func_200(var uParam0)
{
	int iVar0;
	int iVar1;
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_30);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, -982327190, true);
		if (iVar0 != 1 && iVar0 != 0)
		{
			TASK::TASK_STAND_STILL(iVar1, -1);
		}
	}
}

void func_201(var uParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[uParam0->f_2 /*446*/].f_23))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[uParam0->f_2 /*446*/].f_23);
	}
	if (__LIB_0__::func_255(iVar0, 0))
	{
		return;
	}
	PED::SET_PED_RESET_FLAG(iVar0, 49, true);
	if (!PED::_0x268B3AEBF032A88D(iVar0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 216, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 190, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 217, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 518, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 519, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 229, true);
	}
}

bool func_202()
{
	return Global_1914319.f_17374;
}

bool func_203(int iParam0)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_73(2048))
	{
		return true;
	}
	return false;
}

bool func_204(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return true;
		case 18:
			return true;
		case 12:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		default:
			break;
	}
	return false;
}

bool func_205(int iParam0)
{
	return Global_1914319.f_3[iParam0 /*446*/].f_29 != 0;
}

void func_206(var uParam0, int iParam1)
{
	if (uParam0->f_51 != iParam1)
	{
		uParam0->f_51 = iParam1;
	}
}

int func_207(var uParam0)
{
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_42);
	return StackVal;
}

int func_208(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > iParam1 || (iParam2 != 0 && uParam0->f_59 == 5))
	{
		return iParam2;
	}
	return iParam1;
}

int func_209(var uParam0)
{
	switch (*uParam0)
	{
		case 4:
		case 10:
		case 12:
		case 13:
		case 14:
		case 17:
		case 18:
			return 0;
		default:
			break;
	}
	return 1;
}

void func_210(var uParam0)
{
	if (uParam0->f_53 != 0)
	{
		uParam0->f_53 = 0;
	}
}

void func_211(var uParam0)
{
	if (uParam0->f_51 != 0)
	{
		uParam0->f_51 = 0;
	}
}

void func_212(var uParam0)
{
	var uVar0;
	var uVar1;
	if (uParam0->f_53 != 2)
	{
		uVar0 = uParam0->f_53 + 1;
		uVar1 = uVar0;
		uParam0->f_53 = uVar1;
	}
}

bool func_213(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam1 && !__LIB_2__::func_805(uParam0->f_1))
	{
		if (*uParam0 == 15)
		{
			iVar1 = 19;
		}
		else
		{
			iVar1 = 24;
		}
		iVar2 = __LIB_0__::func_23();
		iVar0 = __LIB_0__::func_41(iVar2);
		if ((bParam2 && iVar0 > (iVar1 - 2)) || iVar0 > (iVar1 - 1))
		{
			return true;
		}
	}
	return false;
}

void func_214(var uParam0, int iParam1)
{
	if (uParam0->f_52 != iParam1)
	{
		uParam0->f_52 = iParam1;
	}
}

bool func_215(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_57, iParam1);
}

void func_216(var uParam0)
{
	__LIB_1__::func_491(&(uParam0->f_8[2 /*17*/]), 9);
	__LIB_1__::func_491(&(uParam0->f_8[1 /*17*/]), 9);
	__LIB_1__::func_491(&(uParam0->f_8[0 /*17*/]), 9);
	__LIB_1__::func_491(&(uParam0->f_8[3 /*17*/]), 9);
}

char* func_217(int iParam0)
{
	switch (iParam0)
	{
		case 19:
			return "SHOP_PROMPT_GROUP_PEARSON";
		default:
			break;
	}
	return "SHOP_PROMPT_GROUP_INVALID";
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1704254958;
		case 29:
			return -719331856;
		case 43:
			return 27105220;
		case 91:
			return 228853013;
		case 75:
			return -135590372;
		default:
			break;
	}
	if (__LIB_1__::func_921(iParam0) == 4)
	{
		return 1800050144;
	}
	return 0;
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1685867003;
		case 29:
			return 1414373034;
		case 43:
			return -194569467;
		case 91:
			return -403519241;
		case 75:
			return -1572249041;
		default:
			break;
	}
	if (__LIB_1__::func_921(iParam0) == 4)
	{
		return 751022404;
	}
	return 0;
}

void func_220(var uParam0, int iParam1)
{
	uParam0->f_1264 = iParam1;
}

int func_221(var uParam0)
{
	uParam0 = uParam0;
	return 1;
}

void func_222(var uParam0, int iParam1)
{
	uParam0->f_1265 = iParam1;
}

int func_223(var uParam0, int iParam1)
{
	uParam0->f_1262 = iParam1;
	return 1;
}

int func_224(var uParam0, int iParam1)
{
	uParam0->f_1263 = iParam1;
	return 1;
}

bool func_225(var uParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(uParam0->f_1267))
	{
		return __LIB_0__::func_27(uParam0->f_1268, 4);
	}
	return false;
}

bool func_226(int iParam0)
{
	return __LIB_0__::func_27(Global_1914319.f_16855.f_3, iParam0);
}

int func_227(var uParam0, int iParam1)
{
	int iVar0;
	if (iParam1 < 0)
	{
		return 0;
	}
	iVar0 = __LIB_14__::func_768();
	if (iVar0 == -1)
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_50, "ItemListEntryIndex", iParam1);
	}
	else if (DATABINDING::_VIRTUAL_COLLECTION_EXISTS(__LIB_14__::func_768()))
	{
		DATABINDING::_VIRTUAL_COLLECTION_SET_INTEREST_INDEX(__LIB_14__::func_768(), iParam1);
	}
	return 1;
}

void func_228()
{
	__LIB_14__::func_765(2048);
}

bool func_229(int iParam0)
{
	bool bVar0;
	bVar0 = ENTITY::IS_ENTITY_DEAD(Global_1914319.f_3[iParam0 /*446*/].f_23);
	return bVar0;
}

bool func_230(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_23))
	{
		return false;
	}
	return PED::IS_PED_FLEEING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[iParam0 /*446*/].f_23));
}

void func_231(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<15> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0.f_14 = iParam0;
		Var0 = iParam1;
		Var0.f_5 = iParam2;
		Var0.f_12 = 5;
		Var0.f_8 = iParam4;
		Var0.f_11 = iParam5;
		Var0.f_13 = iParam3;
		MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
	}
}

void func_232()
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
	}
}

bool func_233(var uParam0)
{
	if (__LIB_0__::func_81(uParam0) == 17 || __LIB_0__::func_81(uParam0) == 18)
	{
		return true;
	}
	return false;
}

void func_234(var uParam0)
{
	struct<10> Var0;
	Var0.f_3 = 1077936128;
	Var0.f_8 = -1;
	*uParam0 = { Var0 };
}

void func_235(int iParam0)
{
	Global_1225509.f_102 = iParam0;
	if (Global_1225509.f_102 < 0)
	{
		return;
	}
	Global_1225509.f_104 = { Global_1225509[Global_1225509.f_102 /*10*/].f_5 };
	Global_1225509.f_104.f_3 = Global_1225509[Global_1225509.f_102 /*10*/].f_4;
	Global_1225509.f_104.f_4 = Global_1225509[Global_1225509.f_102 /*10*/].f_8;
	Global_1225509.f_104.f_8 = 2;
	Global_1225509.f_104.f_7 = 1000;
}

void func_236(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 14 || iParam1 <= -1)
	{
		return;
	}
	__LIB_0__::func_8(&(uParam0->f_133[iParam1]), iParam2);
}

bool func_237(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_21, iParam1);
}

void func_238(var uParam0)
{
	uParam0->f_21 = 0;
}

bool func_239(var uParam0, char* sParam1)
{
	int iVar0;
	if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(sParam1))
	{
		HUD::REGISTER_NAMED_RENDERTARGET(sParam1, false);
		HUD::LINK_NAMED_RENDERTARGET(uParam0->f_1269);
		if (HUD::IS_NAMED_RENDERTARGET_LINKED(uParam0->f_1269))
		{
		}
		else
		{
			if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sParam1))
			{
				HUD::RELEASE_NAMED_RENDERTARGET(sParam1);
			}
			return false;
		}
	}
	iVar0 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sParam1);
	HUD::SET_TEXT_RENDER_ID(iVar0);
	return true;
}

bool func_240(var uParam0, int iParam1)
{
	switch (iParam1)
	{
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
		case 13:
			return true;
	}
	return false;
}

bool func_241(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		return false;
	}
	return false;
}

int func_242(int iParam0)
{
	switch (iParam0)
	{
		case -416870516:
			return 14;
		case -195968340:
			return 1;
		case -1406468552:
			return 5;
		case 1632947550:
			return 3;
		case 381795783:
			return 0;
		case -468109055:
			return 8;
		case -144780764:
			return 4;
		default:
			break;
	}
	return 3;
}

int func_243(var uParam0)
{
	return uParam0->f_281.f_1;
}

Vector3 func_244(var uParam0, int iParam1)
{
	vector3 vVar0;
	if (iParam1 >= uParam0->f_436[uParam0->f_281 /*185*/].f_149 || iParam1 < 0)
	{
		vVar0.f_1 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	return uParam0->f_436[uParam0->f_281 /*185*/].f_136[iParam1 /*3*/];
}

void func_245(var uParam0, int iParam1)
{
	uParam0->f_1266 = iParam1;
}

int func_246(var uParam0, int iParam1)
{
	return uParam0->f_1216[iParam1];
}

void func_247(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	vVar0 = { 0.0733f, -0.0235f, 0.3337f };
	vVar3 = { -51.7011f, 0f, -6.7993f };
	fVar6 = 44f;
	vVar7 = { -0.2511f, -0.2469f, 0.738f };
	vVar10 = { -53.3193f, 0f, -15.1085f };
	fVar13 = 42.9575f;
	if (((((iParam0 == joaat("WEAPON_PISTOL_MAUSER") || iParam0 == joaat("WEAPON_PISTOL_VOLCANIC")) || iParam0 == joaat("WEAPON_REVOLVER_CATTLEMAN")) || iParam0 == joaat("WEAPON_REVOLVER_DOUBLEACTION")) || iParam0 == joaat("WEAPON_REVOLVER_SCHOFIELD")) || iParam0 == joaat("WEAPON_REVOLVER_LEMAT"))
	{
		*uParam1 = { -0.038f, -0.0561f, 0.398f };
		uParam1->f_3 = { -51.8548f, 0f, -10.3125f };
		uParam1->f_6 = 44f;
	}
	else if (iParam0 == joaat("WEAPON_PISTOL_M1899"))
	{
		*uParam1 = { 0.006f, -0.02f, 0.359f };
		uParam1->f_3 = { -54.602f, 0f, -12.497f };
		uParam1->f_6 = 44.217f;
	}
	else if (iParam0 == joaat("WEAPON_PISTOL_SEMIAUTO"))
	{
		*uParam1 = { -0.0112f, 0.0191f, 0.4142f };
		uParam1->f_3 = { -56.9333f, 0f, -17.672f };
		uParam1->f_6 = 44f;
	}
	else if ((iParam0 == joaat("WEAPON_SHOTGUN_PUMP") || iParam0 == joaat("WEAPON_SHOTGUN_REPEATING")) || iParam0 == joaat("WEAPON_SHOTGUN_SEMIAUTO"))
	{
		*uParam1 = { -0.3331f, -0.3073f, 0.8458f };
		uParam1->f_3 = { -53.3192f, 0f, -21.4863f };
		uParam1->f_6 = 42.9575f;
	}
	else if (iParam0 == joaat("WEAPON_SHOTGUN_SAWEDOFF"))
	{
		*uParam1 = { -0.1337f, -0.1056f, 0.4964f };
		uParam1->f_3 = { -51.0933f, 0f, -16.7141f };
		uParam1->f_6 = 44f;
	}
	else if (iParam0 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
	{
		*uParam1 = { -0.3931f, -0.3254f, 0.902f };
		uParam1->f_3 = { -53.3192f, 0f, -25.0912f };
		uParam1->f_6 = 42.9575f;
	}
	else if (((iParam0 == joaat("WEAPON_REPEATER_CARBINE") || iParam0 == joaat("WEAPON_REPEATER_HENRY")) || iParam0 == joaat("WEAPON_REPEATER_WINCHESTER")) || iParam0 == joaat("WEAPON_REPEATER_EVANS"))
	{
		*uParam1 = { -0.3956f, -0.3022f, 0.8738f };
		uParam1->f_3 = { -52.6748f, 0f, -22.3677f };
		uParam1->f_6 = 42.9575f;
	}
	else if ((((iParam0 == joaat("WEAPON_RIFLE_BOLTACTION") || iParam0 == joaat("WEAPON_RIFLE_SPRINGFIELD")) || iParam0 == joaat("WEAPON_RIFLE_VARMINT")) || iParam0 == joaat("WEAPON_SNIPERRIFLE_CARCANO")) || iParam0 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
	{
		*uParam1 = { -0.4608f, -0.3398f, 0.9582f };
		uParam1->f_3 = { -53.3193f, 0f, -22.0317f };
		uParam1->f_6 = 42.9575f;
	}
	else if (iParam0 == joaat("WEAPON_MELEE_KNIFE"))
	{
		*uParam1 = { 0.0733f, -0.0235f, 0.3337f };
		uParam1->f_3 = { -51.7011f, 0f, -6.7993f };
		uParam1->f_6 = 44f;
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(iParam0))
	{
		*uParam1 = { vVar7 };
		uParam1->f_3 = { vVar10 };
		uParam1->f_6 = fVar13;
	}
	else
	{
		*uParam1 = { vVar0 };
		uParam1->f_3 = { vVar3 };
		uParam1->f_6 = fVar6;
	}
}

char* func_248(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return "CATALOG_CLOSE_PROMPT_TAG";
		case 0:
			return "CATALOG_TURN_LEFT_PROMPT_TAG";
		case 1:
			return "CATALOG_TURN_RIGHT_PROMPT_TAG";
		case 3:
			return "CATALOG_SELECT_PROMPT_TAG";
		case 4:
			return "CATALOG_HOLD_PROMPT_TAG";
		case 7:
			return "CATALOG_VIEW_PROMPT_TAG";
		case 9:
			return "CATALOG_READ_PROMPT_TAG";
		case 5:
			return "CATALOG_BACK_PROMPT_TAG";
		case 8:
			return "CATALOG_ZOOM_PROMPT_TAG";
	}
	return "";
}

bool func_249(int iParam0)
{
	return (Global_36638.f_45.f_350.f_953 && iParam0) != 0;
}

bool func_250(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		return true;
	}
	return true;
}

bool func_251(var uParam0, int iParam1)
{
	return uParam0->f_1698.f_8[iParam1];
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AMMO_ARROW"):
			return joaat("AMMO_ARROW_BUNDLE");
		default:
			break;
	}
	return iParam0;
}

bool func_253(var uParam0)
{
	if (uParam0->f_23)
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_24);
		return StackVal;
	}
	return false;
}

bool func_254(var uParam0)
{
	if (uParam0->f_59 == 5 || uParam0->f_59 == 0)
	{
		if ((uParam0->f_62 == 9 || uParam0->f_62 == 10) || uParam0->f_62 == 11)
		{
			return true;
		}
	}
	else if ((uParam0->f_61 == 9 || uParam0->f_61 == 10) || uParam0->f_61 == 11)
	{
		return true;
	}
	return false;
}

int func_255(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	if (*uParam0 != 33 && uParam0->f_1 != 69)
	{
		return 0;
	}
	iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1, -1);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]))
		{
			if (ENTITY::IS_ENTITY_DEAD(uVar2[iVar0]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uVar2[iVar0]))
			{
			}
			else if (uVar2[iVar0] == uParam0->f_4)
			{
			}
			else
			{
				return uVar2[iVar0];
			}
		}
		iVar0++;
	}
	return 0;
}

void func_256(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_57), iParam1);
}

bool func_257(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_58, iParam1);
}

void func_258(var uParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(uParam0->f_58), iParam1);
}

bool func_259(var uParam0)
{
	switch (uParam0->f_61)
	{
		case 8:
		case 9:
		case 13:
		case 14:
			return true;
	}
	return false;
}

bool func_260(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	return __LIB_0__::func_27(Global_1914319.f_3[iParam0 /*446*/].f_8, iParam1);
}

bool func_261(var uParam0)
{
	return (uParam0->f_1 > 2 && uParam0->f_1 < 24);
}

bool func_262(var uParam0)
{
	return uParam0->f_2279 == 2;
}

bool func_263(int iParam0)
{
	return Global_1051260.f_48[iParam0 /*78*/].f_53;
}

bool func_264(int iParam0)
{
	int iVar0;
	if (!PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, false, false))
	{
		return false;
	}
	else if (__LIB_0__::func_2() == -1)
	{
		if (iVar0 != Global_1914319.f_3[iParam0 /*446*/].f_23)
		{
			return false;
		}
	}
	else if (iVar0 != Global_1051260.f_48[iParam0 /*78*/].f_19)
	{
		return false;
	}
	return true;
}

bool func_265()
{
	return Global_1222969.f_1076.f_41 == 0;
}

bool func_266(int iParam0)
{
	if (iParam0 == 22)
	{
		return true;
	}
	return false;
}

float func_267(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 5f;
		default:
			break;
	}
	return 25f;
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("INPUT_SHOP_BUY");
		case 2:
			return joaat("INPUT_SHOP_SELL");
		case 3:
			return joaat("INPUT_SHOP_SPECIAL");
		case 5:
			return joaat("INPUT_SHOP_SPECIAL");
		case 6:
			return joaat("INPUT_SHOP_SPECIAL");
		case 7:
			return joaat("INPUT_SHOP_SPECIAL");
		case 4:
			return joaat("INPUT_SHOP_SPECIAL");
		case 10:
			return joaat("INPUT_SHOP_BOUNTY");
		case 11:
			return joaat("INPUT_SHOP_BUY");
		case 12:
			return joaat("INPUT_SHOP_SELL");
		case 13:
			return joaat("INPUT_SHOP_SPECIAL");
		default:
			break;
	}
	return joaat("INPUT_SHOP_BUY");
}

bool func_269(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_27))
		{
			return false;
		}
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_27, Global_36))
		{
			return true;
		}
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1051260.f_48[iParam0 /*78*/].f_32))
		{
			return false;
		}
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1051260.f_48[iParam0 /*78*/].f_32, Global_36))
		{
			return true;
		}
	}
	return false;
}

char* func_270(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "SHOP_BUY_PROMPT_TAG";
		case 2:
			return "SHOP_SELL_PROMPT_TAG";
		case 3:
			return "SHOP_CUSTOMIZE_PROMPT_TAG";
		case 4:
			return "SHOP_CRAFT_PROMPT_TAG";
	}
	return "";
}

bool func_271(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return false;
		case 15:
			return false;
		case 20:
			return false;
	}
	return true;
}

void func_272(var uParam0, int iParam1)
{
	__LIB_14__::func_800(uParam0, HUD::_GET_LABEL_TEXT_BY_HASH(iParam1));
}

int func_273(var uParam0, int iParam1, int iParam2)
{
	if (__LIB_0__::func_2() == 0)
	{
		return 1;
	}
	return 1;
}

int func_274(int iParam0)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return 0;
	}
	return Global_1914319.f_3[iParam0 /*446*/].f_412;
}

int func_275(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return 0;
	}
	if (iParam1 < 20)
	{
		return Global_1914319.f_3[iParam0 /*446*/].f_417[iParam1];
	}
	return 0;
}

int func_276(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_921(iParam0);
	return Global_1914319.f_3[iVar0 /*446*/].f_414;
}

bool func_277(var uParam0, int iParam1)
{
	if (uParam0->f_222)
	{
	}
	else
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
		{
			return false;
		}
		if (!ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1, &(uParam0->f_1.f_1[iParam1 /*8*/])))
		{
			return false;
		}
	}
	uParam0->f_1.f_185 = iParam1;
	return true;
}

char* func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "STAMP_SALE";
		case 1:
			return "STAMP_BESTVALUE";
		case 2:
			return "STAMP_COUPON";
		case 3:
			return "STAMP_LAST_CHANCE";
		case 4:
			return "STAMP_JUSTFORYOU";
		case 5:
			return "STAMP_LIMITEDSTOCK";
		case 6:
			return "STAMP_OPTIONS";
		case 7:
			return "STAMP_OWNED";
		case 8:
			return "STAMP_POPULAR";
		case 9:
			return "STAMP_SOLDOUT";
		case 10:
			return "STAMP_CASH";
		case 11:
			return "STAMP_GOLD";
		case 12:
			return "STAMP_LOCK";
		case 13:
			return "STAMP_LOCKED_RANK";
		case 14:
			return "STAMP_NEW";
		case 15:
			return "STAMP_UNLOCKED_RANK";
		case 16:
			return "STAMP_WISHLIST";
		default:
			break;
	}
	return "";
}

char* func_279(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return __LIB_14__::func_740();
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
			return "elements_stamps_icons";
		default:
			break;
	}
	return "";
}

int func_280(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(iParam0, iParam1, iParam2, &uVar0, &uVar1, &uVar2);
	return uVar0;
}

bool func_281(int iParam0)
{
	if (__LIB_0__::func_357(iParam0) == -2014019346)
	{
		return true;
	}
	return false;
}

bool func_282(var uParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		if (uParam0->f_281.f_2)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (uParam0->f_281.f_2)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 3;
	}
	switch (uParam0->f_436[iVar0 /*185*/])
	{
		case 1:
		case 14:
		case 15:
			return false;
		case 0:
			return true;
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
		case 13:
			return true;
		default:
			return false;
	}
	return false;
}

int func_283(var uParam0)
{
	return uParam0->f_436[uParam0->f_281 /*185*/].f_150;
}

int func_284(var uParam0)
{
	return uParam0->f_436[uParam0->f_281 /*185*/].f_149;
}

int func_285(var uParam0, int iParam1)
{
	if (iParam1 >= uParam0->f_436[uParam0->f_281 /*185*/].f_149 || iParam1 < 0)
	{
		return 0;
	}
	return uParam0->f_436[uParam0->f_281 /*185*/].f_136[iParam1 /*3*/];
}

int func_286(int iParam0, int iParam1)
{
	struct<6> Var0;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (iParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_287(int iParam0)
{
	return (iParam0 / 100);
}

bool func_288(var uParam0, var uParam1)
{
	*uParam1 = { uParam0->f_436[uParam0->f_281 /*185*/] };
	return true;
}

bool func_289(var uParam0)
{
	return (uParam0->f_281 == 0 || uParam0->f_281 == 2);
}

bool func_290(var uParam0, int iParam1)
{
	return uParam0->f_1216.f_11[iParam1];
}

bool func_291(var uParam0)
{
	return (uParam0->f_281 == 0 || uParam0->f_281 == 1);
}

bool func_292(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, -636571906))
	{
		return true;
	}
	return false;
}

int func_293(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	if (iParam0 != 0)
	{
		iVar0 = __LIB_0__::func_357(iParam0);
		if (iVar0 != 0)
		{
			if (iParam1 >= 0 && iParam1 < __LIB_9__::func_858(iParam0))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar0, iParam1, &uVar1))
				{
					return uVar1;
				}
			}
		}
	}
	return 0;
}

void func_294(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_192(iParam0, 58855631))
	{
		__LIB_14__::func_780(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

bool func_295(var uParam0)
{
	switch (*uParam0)
	{
		case 6:
		case 10:
		case 26:
		case 28:
		case 29:
			return true;
		default:
			break;
	}
	if (__LIB_0__::func_12() == 92 && *uParam0 == 4)
	{
		return true;
	}
	return false;
}

void func_296(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_58), iParam1);
}

void func_297(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	switch (iParam1)
	{
		case 1:
			switch (iParam2)
			{
				case 8:
				case 9:
				case 11:
					bVar0 = true;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam2)
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
				case 12:
				case 14:
				case default:
					bVar0 = true;
					break;
				case 0:
					break;
			}
			break;
		case 4:
			switch (iParam2)
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
				case 12:
				case 14:
				case default:
					bVar0 = true;
					break;
				case 0:
					break;
			}
			break;
	}
	if (bVar0)
	{
		iVar1 = __LIB_0__::func_23();
		Global_20710.f_1784[uParam0->f_1] = iVar1;
		__LIB_14__::func_724(uParam0->f_4, Global_35, uParam0->f_4, 0, 0, 10);
	}
}

bool func_298(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = uParam0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (iVar1 == Global_26796.f_26[iVar0 /*120*/].f_1)
			{
				*uParam1 = iVar0;
				return true;
			}
			iVar0++;
		}
		return false;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (iVar1 == Global_36638.f_45.f_350.f_26[iVar0 /*120*/].f_1)
			{
				*uParam1 = iVar0;
				return true;
			}
			iVar0++;
		}
		return false;
	}
	return false;
}

bool func_299(int iParam0)
{
	if (Global_1051260.f_48[iParam0 /*78*/].f_57 == -1)
	{
		return false;
	}
	return true;
}

int func_300()
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(__LIB_12__::func_478(), __LIB_14__::func_847());
	return iVar0;
}

int func_301(bool bParam0)
{
	if (bParam0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Global_1914319.f_16855.f_3.f_16, __LIB_14__::func_896());
	}
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Global_1914319.f_16855.f_3.f_10, __LIB_14__::func_896());
}

int func_302(bool bParam0)
{
	if (bParam0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Global_1914319.f_16855.f_3.f_16, __LIB_14__::func_897());
	}
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Global_1914319.f_16855.f_3.f_10, __LIB_14__::func_897());
}

bool func_303(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 160827531))
	{
		return true;
	}
	return false;
}

bool func_304(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	struct<14> Var16;
	if (iParam0 < 0)
	{
		return false;
	}
	Var2.f_9 = -1591664384;
	Var16 = { __LIB_0__::func_523(0, 2123222014, -1591664384, -1591664384, 0, 0) };
	if (!__LIB_0__::func_801(&Var16, &iVar0, &iVar1, 1))
	{
		return false;
	}
	if (iParam0 < iVar1)
	{
		if (__LIB_0__::func_236(&Var2, iParam0, iVar0, iVar1))
		{
			if (__LIB_0__::func_144(Var2.f_4, 0))
			{
				*iParam1 = Var2.f_4;
				__LIB_0__::func_238(iVar0);
				return true;
			}
		}
	}
	__LIB_0__::func_238(iVar0);
	return false;
}

bool func_305(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	char cVar7[32];
	if (__LIB_0__::func_356(iParam1) != joaat("HORSE_EQUIPMENT") && __LIB_0__::func_356(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	if (iParam1 == 357708345 || iParam1 == -377364164)
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = PED::_GET_METAPED_TYPE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	if (__LIB_0__::func_356(iParam1) == joaat("HORSE_EQUIPMENT"))
	{
		iVar1 = PED::_GET_METAPED_TYPE(__LIB_14__::func_898(uParam0));
	}
	else
	{
		iVar1 = PED::_GET_METAPED_TYPE(__LIB_14__::func_738(uParam0));
	}
	if (iVar1 == 4)
	{
		return false;
	}
	StringCopy(sParam2, "SwatchTxd", 32);
	StringCopy(sParam3, "slot", 32);
	iVar2 = uParam0->f_2031.f_49;
	if (!bParam4)
	{
		if (iVar2 >= 29)
		{
			iVar2 = 0;
		}
		else if (iVar2 < 0)
		{
			iVar2 = 29;
		}
	}
	else
	{
		iVar2 = 29;
	}
	MISC::_INT_TO_STRING(iVar2, "%i", &cVar3);
	if (iVar2 <= 9)
	{
		StringCopy(&cVar7, "0", 32);
		StringConCat(sParam3, &cVar7, 32);
	}
	StringConCat(sParam3, &cVar3, 32);
	GRAPHICS::_0x160921255327C591(iVar2, iVar0, iVar1, __LIB_0__::func_2() == 0);
	if (!bParam4)
	{
		iVar2++;
		uParam0->f_2031.f_49 = iVar2;
	}
	return true;
}

bool func_306(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	if (__LIB_14__::func_779(iParam1, &vVar0, iParam3, 0, 0, 0))
	{
		*sParam2 = { vVar0 };
	}
	else
	{
		return false;
	}
	return true;
}

bool func_307(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_2006, iParam1);
}

bool func_308(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 5:
		case 6:
			return true;
		default:
			break;
	}
	return false;
}

bool func_309(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam1 == 11)
	{
		Var0.f_2 = 1;
		Var0.f_3 = -15;
		if (!__LIB_12__::func_500(&(Global_1914319.f_17378), iParam0, &Var0))
		{
			return false;
		}
		return true;
	}
	else
	{
		if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY(__LIB_6__::func_676(iParam1), iParam0, &uVar5))
		{
			return false;
		}
		return true;
	}
	return false;
}

int func_310(var uParam0, var uParam1, bool bParam2, int iParam3, float fParam4)
{
	int iVar0;
	struct<2> Var1;
	if (bParam2)
	{
		iVar0 = uParam1->f_148;
	}
	else
	{
		iVar0 = uParam1->f_114;
	}
	if (iVar0 >= 16)
	{
		return 0;
	}
	fParam4 = __LIB_0__::func_251(fParam4, 0f, 1f);
	Var1.f_1 = iParam3;
	Var1 = fParam4;
	if (bParam2)
	{
		uParam1->f_115[iVar0 /*2*/] = { Var1 };
		uParam1->f_148++;
	}
	else
	{
		uParam1->f_81[iVar0 /*2*/] = { Var1 };
		uParam1->f_114++;
	}
	return 1;
}

int func_311(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (((iParam2 >= 16 || iParam2 < 0) || iParam3 >= 4) || iParam3 < 0)
	{
		return -2;
	}
	return (*uParam1[iParam2 /*5*/])[iParam3];
}

bool func_312(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (uParam1->f_115[iVar0 /*2*/].f_1 == iParam3)
		{
			*uParam2 = { uParam1->f_115[iVar0 /*2*/] };
			return true;
		}
		else if (uParam1->f_81[iVar0 /*2*/].f_1 == iParam3)
		{
			*uParam2 = { uParam1->f_81[iVar0 /*2*/] };
			return true;
		}
		iVar0++;
	}
	uParam2->f_1 = -1;
	*uParam2 = -1f;
	return false;
}

int func_313(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	struct<2> Var6;
	bVar4 = true;
	if (uParam2->f_1 < 0 || *uParam2 < 0f)
	{
		return 0;
	}
	if (bParam3)
	{
		iVar5 = uParam1->f_148;
	}
	else
	{
		iVar5 = uParam1->f_114;
	}
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		if (bParam3)
		{
			Var6 = { uParam1->f_115[iVar0 /*2*/] };
		}
		else
		{
			Var6 = { uParam1->f_81[iVar0 /*2*/] };
		}
		fVar2 = MISC::ABSF((*uParam2 - Var6));
		if (fVar2 <= fVar3 || bVar4)
		{
			fVar3 = fVar2;
			uVar1 = Var6.f_1;
			bVar4 = false;
		}
		iVar0++;
	}
	return uVar1;
}

bool func_314(var uParam0)
{
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_40);
	return StackVal;
}

void func_315(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	iVar0 = __LIB_14__::func_784(Global_1914319.f_19461.f_1);
	*uParam0 = { Global_1914319.f_19461.f_22[iVar0 /*12*/] };
	*uParam1 = { Global_1914319.f_19461.f_22[iVar0 /*12*/].f_3 };
	*uParam2 = Global_1914319.f_19461.f_22[iVar0 /*12*/].f_9;
	*uParam3 = { Global_1914319.f_19461.f_22[iVar0 /*12*/].f_6 };
	*uParam4 = Global_1914319.f_19461.f_22[iVar0 /*12*/].f_10;
	*uParam5 = Global_1914319.f_19461.f_22[iVar0 /*12*/].f_11;
}

int func_316(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	iVar0 = __LIB_14__::func_952(uParam1);
	if (iParam0 < 0 || iParam0 > iVar0)
	{
		return -1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(*uParam1, __LIB_12__::func_475(uParam1), iParam0, &uVar1))
	{
		return uVar1;
	}
	return -1;
}

void func_317(var uParam0)
{
	bool bVar0;
	bVar0 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_52, "SaddleStatsVisible");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "SaddleStatsVisible", !bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, __LIB_14__::func_809(), bVar0);
}

void func_318(var uParam0, int iParam1)
{
	int iVar0;
	if (__LIB_14__::func_870(uParam0))
	{
		iVar0 = __LIB_14__::func_871(uParam0);
		iParam1 = __LIB_0__::func_776(iVar0);
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_52, "ItemTitleInfo", iParam1);
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return joaat("FULLPAGE_LAYOUT_1");
		case 8:
			return joaat("FULLPAGE_LAYOUT_2");
		case 9:
			return joaat("FULLPAGE_LAYOUT_3");
		case 10:
			return joaat("FULLPAGE_LAYOUT_4");
		case 11:
			return joaat("FULLPAGE_LAYOUT_5");
		case 12:
			return joaat("FULLPAGE_LAYOUT_6");
		case 13:
			return joaat("ADVERT_FULLPAGE");
		case 3:
			return joaat("GRID_OF_3_LAYOUT_0");
		case 4:
			return joaat("GRID_OF_3_LAYOUT_1");
		case 5:
			return joaat("GRID_OF_4_LAYOUT_0");
		case 6:
			return joaat("GRID_OF_9_LAYOUT_0");
		default:
			break;
	}
	return 0;
}

bool func_320(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

int func_321(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("FULLPAGE_LAYOUT_1"):
			return 7;
		case joaat("FULLPAGE_LAYOUT_2"):
			return 8;
		case joaat("FULLPAGE_LAYOUT_3"):
			return 9;
		case joaat("FULLPAGE_LAYOUT_4"):
			return 10;
		case joaat("FULLPAGE_LAYOUT_5"):
			return 11;
		case joaat("FULLPAGE_LAYOUT_6"):
			return 12;
		case joaat("ADVERT_FULLPAGE"):
			return 13;
		case joaat("GRID_OF_3_LAYOUT_0"):
			return 3;
		case joaat("GRID_OF_3_LAYOUT_1"):
			return 4;
		case joaat("GRID_OF_4_LAYOUT_0"):
			return 5;
		case joaat("GRID_OF_9_LAYOUT_0"):
			return 6;
	}
	return 14;
}

void func_322(struct<9> Param0, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = Param0.f_8;
	if (INVENTORY::_0x2BAE4880DCDD560B(iVar0, 0))
	{
		iVar1 = __LIB_14__::func_949(iVar0, 0);
		if (!AUDIO::_0x6DF942C4179BE5AB(iVar1, joaat("HUD_SHOP_SOUNDSET")))
		{
			AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
		}
		else
		{
			AUDIO::_0xE8EAFF7B41EDD291(iVar1, joaat("HUD_SHOP_SOUNDSET"), 0);
		}
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

bool func_323(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	uVar2 = uParam1->f_1;
	uParam0->f_2 = __LIB_15__::func_17(*uParam1, -1218801571, 0, 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_2)
	{
		uParam1->f_1 = uVar2;
		if (!__LIB_15__::func_16(uParam1, -1218801571, iVar0, 0))
		{
			return false;
		}
		__LIB_15__::func_18(*uParam1, -2059916790, &iVar1, 0);
		switch (iVar1)
		{
			case joaat("ALBEDO"):
				__LIB_15__::func_18(*uParam1, -641661298, &(uParam0->f_3[0]), 0);
				break;
			case joaat("MATERIAL"):
				__LIB_15__::func_18(*uParam1, -641661298, &(uParam0->f_3[2]), 0);
				break;
			case joaat("NORMAL"):
				__LIB_15__::func_18(*uParam1, -641661298, &(uParam0->f_3[1]), 0);
				break;
			case joaat("SPECIAL"):
				__LIB_15__::func_18(*uParam1, -641661298, &(uParam0->f_3[3]), 0);
				break;
		}
		iVar0++;
	}
	uParam1->f_1 = uVar2;
	return true;
}

bool func_324(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 19;
			break;
		case 1:
			*iParam1 = 18;
			break;
		default:
			return false;
	}
	return true;
}

bool func_325(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_917(iParam1))
	{
		return false;
	}
	return __LIB_14__::func_689(iParam1);
}

bool func_326(var uParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(uParam0->f_1267))
	{
		return __LIB_0__::func_27(uParam0->f_1268, 8);
	}
	return false;
}

void func_327(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 14 || iParam1 <= -1)
	{
		return;
	}
	__LIB_0__::func_7(&(uParam0->f_133[iParam1]), iParam2);
}

int func_328()
{
	if (__LIB_0__::func_20(Global_20710.f_1167))
	{
		return Global_20710.f_1167;
	}
	return -1;
}

void func_329(var uParam0, int iParam1)
{
	if (__LIB_6__::func_76(uParam0->f_3))
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (__LIB_15__::func_27(uParam0->f_2) && uParam0->f_3 != 30)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
		if (!__LIB_10__::func_696(uParam0->f_3) && !__LIB_14__::func_702(uParam0->f_3))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		}
	}
	if (uParam0->f_2 == 2 || uParam0->f_2 == 1)
	{
		PED::SET_PED_RESET_FLAG(iParam1, 281, true);
	}
}

void func_330(int iParam0)
{
	if (__LIB_4__::func_922(iParam0, 8))
	{
		__LIB_14__::func_305(iParam0, 8);
	}
	if (__LIB_4__::func_922(iParam0, 1024))
	{
		__LIB_14__::func_305(iParam0, 1024);
	}
	if (__LIB_4__::func_922(iParam0, 2048))
	{
		__LIB_14__::func_305(iParam0, 2048);
	}
}

void func_331(int iParam0, bool bParam1)
{
	if (__LIB_14__::func_705(iParam0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 334, bParam1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 335, bParam1);
}

void func_332(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = false;
	bVar0 = __LIB_4__::func_922(uParam0->f_2, 16384);
	if (bVar0)
	{
		return;
	}
	bVar1 = __LIB_2__::func_804(uParam0->f_2, 67108864);
	if (!bVar1)
	{
		return;
	}
	if (!__LIB_2__::func_803(uParam0->f_2, &iVar2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	__LIB_1__::func_943(uParam0->f_2, 67108864);
	if (MISC::_0xE98D55C5983F2509(iVar2))
	{
	}
}

bool func_333(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_92, iParam1);
}

bool func_334(var uParam0)
{
	if ((__LIB_0__::func_81(uParam0) == 15 || __LIB_0__::func_81(uParam0) == 16) || __LIB_0__::func_81(uParam0) == 17)
	{
		return true;
	}
	return false;
}

int func_335(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, float fParam5, int iParam6)
{
	if (uParam0->f_222)
	{
		return 0;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam2))
	{
		return 0;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(iParam2, sParam3))
	{
		return 0;
	}
	fParam5 = __LIB_0__::func_251(fParam5, 0f, 0.9f);
	uParam0->f_1 = iParam2;
	StringCopy(&(uParam0->f_1.f_1[iParam1 /*8*/]), sParam3, 64);
	uParam0->f_1.f_163[iParam1] = fParam5;
	uParam0->f_1.f_174[iParam1] = iParam6;
	StringCopy(&(uParam0->f_1.f_82[iParam1 /*8*/]), sParam4, 64);
	return 1;
}

bool func_336(int iParam0)
{
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING") && !__LIB_0__::func_192(iParam0, -1979000645))
	{
		return true;
	}
	return false;
}

void func_337(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!WEAPON::IS_WEAPON_VALID(uParam0->f_1))
	{
		return;
	}
	if (uParam0->f_205)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_206)
	{
		if ((uParam0->f_3[iVar0] != 0 && __LIB_0__::func_356(uParam0->f_3[iVar0]) == joaat("WEAPON_MOD")) && !__LIB_0__::func_192(uParam0->f_3[iVar0], 1844906744))
		{
			iVar1 = WEAPON::_GET_WEAPON_COMPONENT_TYPE_MODEL(uParam0->f_3[iVar0]);
			if (STREAMING::IS_MODEL_VALID(iVar1))
			{
				STREAMING::REQUEST_MODEL(iVar1, false);
			}
		}
		iVar0++;
	}
}

bool func_338(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!WEAPON::IS_WEAPON_VALID(uParam0->f_1))
	{
		return true;
	}
	if (uParam0->f_205)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_206)
	{
		if ((uParam0->f_3[iVar0] != 0 && __LIB_0__::func_356(uParam0->f_3[iVar0]) == joaat("WEAPON_MOD")) && !__LIB_0__::func_192(uParam0->f_3[iVar0], 1844906744))
		{
			iVar1 = WEAPON::_GET_WEAPON_COMPONENT_TYPE_MODEL(uParam0->f_3[iVar0]);
			if (STREAMING::IS_MODEL_VALID(iVar1))
			{
				if (!STREAMING::HAS_MODEL_LOADED(iVar1))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	uParam0->f_205 = 1;
	return true;
}

void func_339(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_205)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_206)
	{
		if ((uParam0->f_3[iVar0] != 0 && __LIB_0__::func_356(uParam0->f_3[iVar0]) == joaat("WEAPON_MOD")) && !__LIB_0__::func_192(uParam0->f_3[iVar0], 1844906744))
		{
			iVar1 = WEAPON::_GET_WEAPON_COMPONENT_TYPE_MODEL(uParam0->f_3[iVar0]);
			if (STREAMING::IS_MODEL_VALID(iVar1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
			}
		}
		iVar0++;
	}
	uParam0->f_205 = 0;
}

bool func_340(var uParam0)
{
	if ((__LIB_0__::func_81(uParam0) == 9 || __LIB_0__::func_81(uParam0) == 10) || __LIB_0__::func_81(uParam0) == 11)
	{
		return true;
	}
	return false;
}

void func_341(var uParam0, float fParam1, int iParam2)
{
	int iVar0;
	iVar0 = -1;
	if (!__LIB_14__::func_712(uParam0, &iVar0))
	{
		return;
	}
	if (__LIB_14__::func_713(uParam0, iParam2))
	{
		__LIB_14__::func_714(uParam0, iParam2, fParam1);
		return;
	}
	uParam0->f_141[iVar0 /*7*/] = iParam2;
	uParam0->f_141[iVar0 /*7*/].f_1 = 4;
	uParam0->f_141[iVar0 /*7*/].f_6 = fParam1;
}

void func_342(var uParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	if (iParam1 == 0)
	{
		return;
	}
	if (__LIB_14__::func_713(uParam0, iParam3))
	{
		__LIB_14__::func_714(uParam0, iParam3, fParam2);
		return;
	}
	iVar0 = -1;
	if (!__LIB_14__::func_712(uParam0, &iVar0))
	{
		return;
	}
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	uParam0->f_141[iVar0 /*7*/] = iParam3;
	uParam0->f_141[iVar0 /*7*/].f_1 = 1;
	uParam0->f_141[iVar0 /*7*/].f_3 = 0;
	uParam0->f_141[iVar0 /*7*/].f_2 = iParam1;
	uParam0->f_141[iVar0 /*7*/].f_6 = fParam2;
}

void func_343(var uParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	if (iParam1 == 0)
	{
		return;
	}
	if (__LIB_14__::func_715(uParam0, iParam3))
	{
		__LIB_14__::func_716(uParam0, iParam3, fParam2);
		return;
	}
	iVar0 = -1;
	if (!__LIB_14__::func_717(uParam0, &iVar0))
	{
		return;
	}
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	(*uParam0)[iVar0 /*7*/] = iParam3;
	(uParam0[iVar0 /*7*/])->f_1 = 1;
	(uParam0[iVar0 /*7*/])->f_3 = 0;
	(uParam0[iVar0 /*7*/])->f_2 = iParam1;
	(uParam0[iVar0 /*7*/])->f_6 = fParam2;
}

void func_344(var uParam0, float fParam1, int iParam2)
{
	int iVar0;
	iVar0 = -1;
	if (!__LIB_14__::func_717(uParam0, &iVar0))
	{
		return;
	}
	if (__LIB_14__::func_715(uParam0, iParam2))
	{
		__LIB_14__::func_716(uParam0, iParam2, fParam1);
		return;
	}
	(*uParam0)[iVar0 /*7*/] = iParam2;
	(uParam0[iVar0 /*7*/])->f_1 = 4;
	(uParam0[iVar0 /*7*/])->f_6 = fParam1;
}

void func_345(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_1__::func_935(uParam0->f_3, 536870912))
		{
			HUD::_HIDE_HUD_COMPONENT(-1347445791);
			INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("WEAPON_FISHINGROD"));
			__LIB_1__::func_936(uParam0->f_3, 536870912);
		}
	}
	else if (__LIB_1__::func_935(uParam0->f_3, 536870912))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1347445791);
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("WEAPON_FISHINGROD"), 0);
		__LIB_1__::func_937(uParam0->f_3, 536870912);
	}
}

bool func_346(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	Var0 = Global_1914319.f_16934[iParam1];
	if (!__LIB_14__::func_733(&Var0, iParam2))
	{
		return false;
	}
	Var0.f_2 = 110382701;
	Var0.f_3 = iParam3;
	if (!DATAFILE::_DATAFILE_GET_INT(iParam0, &Var0))
	{
		return false;
	}
	return true;
}

bool func_347(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	Var0 = Global_1914319.f_16934[iParam1];
	if (!__LIB_14__::func_733(&Var0, iParam2))
	{
		return false;
	}
	Var0.f_2 = -99852754;
	Var0.f_3 = iParam3;
	if (!DATAFILE::_DATAFILE_GET_VECTOR(uParam0, &Var0))
	{
		return false;
	}
	return true;
}

bool func_348(float fParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	Var0 = Global_1914319.f_16934[iParam1];
	if (!__LIB_14__::func_733(&Var0, iParam2))
	{
		return false;
	}
	Var0.f_2 = 1059891245;
	Var0.f_3 = iParam3;
	if (!DATAFILE::_DATAFILE_GET_FLOAT(fParam0, &Var0))
	{
		return false;
	}
	return true;
}

bool func_349(var uParam0)
{
	if (__LIB_6__::func_76(uParam0->f_3) || uParam0->f_2 == 9)
	{
		if (((*uParam0 >= 3 && *uParam0 < 9) && *uParam0 != 7) && *uParam0 != 8)
		{
			if (uParam0->f_2 == 9)
			{
				return BUILTIN::VDIST(Global_36, uParam0->f_1949) <= 25f;
			}
			return true;
		}
	}
	else if (*uParam0 > 3 && *uParam0 < 8)
	{
		return true;
	}
	return false;
}

bool func_350(var uParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(uParam0->f_1267))
	{
		if (DATAFILE::_0x603AC35FD4602C76(uParam0->f_1267))
		{
			if (!__LIB_0__::func_27(uParam0->f_1268, 2))
			{
				__LIB_0__::func_7(&(uParam0->f_1268), 2);
			}
			return true;
		}
	}
	return false;
}

bool func_351(var uParam0)
{
	int iVar0;
	iVar0 = 1729714979;
	if (iVar0 == 0)
	{
		return true;
	}
	if (!DATAFILE::_0x7907969497EA92F5(uParam0->f_1267))
	{
		uParam0->f_1267 = DATAFILE::_0xCA56DD6AB7A39F64(iVar0);
		__LIB_0__::func_7(&(uParam0->f_1268), 1);
	}
	return true;
}

bool func_352(var uParam0)
{
	int iVar0;
	if (!__LIB_14__::func_778(uParam0))
	{
		return false;
	}
	if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("SHOP_MENU")))
	{
		return true;
	}
	iVar0 = UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("SHOP_MENU"), -1102306668);
	if (iVar0 == 0)
	{
		uParam0->f_2031.f_47 = 1;
		return true;
	}
	return false;
}

void func_353(int iParam0, var uParam1)
{
	__LIB_14__::func_735(iParam0);
}

int func_354(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if (uParam0->f_2031.f_79)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam1);
		iVar1 = 0;
		iVar2 = -1;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar3 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam1, iVar1);
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar3))
			{
				bVar4 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar3, __LIB_14__::func_736());
				if (bVar4)
				{
					iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar3, __LIB_14__::func_737());
					iVar5 = iVar2;
					if (PED::_0x93FFD92F05EC32FD(iVar5))
					{
						PED::_0x13E7320C762F0477(iVar5);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar3, __LIB_14__::func_737(), -1);
					}
				}
			}
			iVar1++;
		}
		uParam0->f_2031.f_79 = 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

bool func_355(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_1210))
	{
		uParam0->f_1210 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-356826253);
	}
	TXD::REQUEST_STREAMED_TEXTURE_DICT("DEFAULT_INDEX", false);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("CATALOG_INDEX_DOUBLE", false);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("DEFAULT_NOTE_PAGE", false);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("catalog_interior", false);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("DEFAULT_GRID_OF_3", false);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("DEFAULT_GRID_OF_3_TYPE_2", false);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("DEFAULT_GRID_OF_4", false);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("elements", false);
	TXD::REQUEST_STREAMED_TEXTURE_DICT(__LIB_14__::func_740(), false);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("elements_stamps_icons", false);
	HUD::_TEXT_DATABASE_REQUEST("SHOP");
	HUD::_TEXT_DATABASE_REQUEST("SATCH");
	return true;
}

bool func_356()
{
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("DEFAULT_INDEX"))
	{
		return false;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("CATALOG_INDEX_DOUBLE"))
	{
		return false;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("DEFAULT_NOTE_PAGE"))
	{
		return false;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("catalog_interior"))
	{
		return false;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("DEFAULT_GRID_OF_3"))
	{
		return false;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("DEFAULT_GRID_OF_3_TYPE_2"))
	{
		return false;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("DEFAULT_GRID_OF_4"))
	{
		return false;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("elements"))
	{
		return false;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED(__LIB_14__::func_740()))
	{
		return false;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("elements_stamps_icons"))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SHOP"))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SATCH"))
	{
		return false;
	}
	return true;
}

bool func_357(var uParam0)
{
	int iVar0;
	iVar0 = uParam0->f_1.f_185;
	if (uParam0->f_222)
	{
		return false;
	}
	else
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
		{
			return false;
		}
		if (!ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1, &(uParam0->f_1.f_1[iVar0 /*8*/])))
		{
			return false;
		}
		if (!ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1, &(uParam0->f_1.f_1[iVar0 /*8*/])))
		{
			return true;
		}
		uParam0->f_1.f_163[iVar0] = __LIB_0__::func_251(uParam0->f_1.f_163[iVar0], 0f, 0.9f);
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1) > uParam0->f_1.f_163[iVar0])
		{
			return true;
		}
	}
	return false;
}

void func_358(var uParam0)
{
	int iVar0;
	if (!__LIB_2__::func_803(uParam0->f_2, &iVar0))
	{
		return;
	}
	if (__LIB_0__::func_255(iVar0, 0))
	{
		return;
	}
	if (PED::_0x268B3AEBF032A88D(iVar0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 216, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 190, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 217, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 518, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 519, false);
		if (!__LIB_5__::func_779(uParam0->f_2, 2))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 146, false);
		}
	}
}

bool func_359(int iParam0, bool bParam1)
{
	struct<17> Var0;
	if (!__LIB_2__::func_173(iParam0, 0, 1, bParam1))
	{
		return false;
	}
	LAW::_0x9C5BD8C562565CE6(&Var0);
	return Var0.f_16;
}

int func_360(var uParam0)
{
	if (uParam0->f_31)
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_32);
		return StackVal;
	}
	switch (uParam0->f_52)
	{
		case 0:
			uParam0->f_44 = __LIB_14__::func_725(3);
			break;
		case 1:
			uParam0->f_44 = __LIB_14__::func_725(4);
			break;
	}
	return 1;
}

bool func_361(var uParam0)
{
	if (uParam0->f_2 == 1 && (uParam0->f_14 == 0 || __LIB_0__::func_357(uParam0->f_14) == -2014019346))
	{
		return false;
	}
	return true;
}

bool func_362(var uParam0)
{
	uParam0->f_44 = "";
	switch (Global_1914319.f_18903)
	{
		case 2:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(9);
					break;
			}
			break;
		case 65536:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(3);
					break;
				case 1:
					uParam0->f_44 = __LIB_14__::func_748(15);
					break;
				case 2:
					uParam0->f_44 = __LIB_14__::func_748(8);
					break;
				case 3:
					uParam0->f_44 = __LIB_14__::func_748(14);
					break;
				case 4:
					uParam0->f_44 = __LIB_14__::func_748(13);
					break;
				case 5:
					uParam0->f_44 = __LIB_14__::func_748(9);
					break;
			}
			break;
		case 4:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(15);
					break;
				case 1:
					uParam0->f_44 = __LIB_14__::func_748(8);
					break;
			}
			break;
		case 8:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_45 = 1;
					uParam0->f_44 = __LIB_14__::func_748(24);
					break;
				case 1:
					uParam0->f_44 = __LIB_14__::func_748(12);
					break;
			}
			break;
		case 16:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(3);
					break;
			}
			break;
		case 32:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(4);
					break;
			}
			break;
		case 131072:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(8);
					break;
				case 1:
					uParam0->f_45 = 1;
					uParam0->f_44 = __LIB_14__::func_748(25);
					break;
			}
			break;
		case 262144:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(14);
					break;
			}
			break;
		case 64:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(13);
					break;
			}
			break;
		case 128:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(6);
					break;
				case 1:
					uParam0->f_44 = __LIB_14__::func_748(8);
					break;
				case 2:
					uParam0->f_45 = 1;
					uParam0->f_44 = __LIB_14__::func_748(25);
					break;
			}
			break;
		case 256:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(11);
					break;
				case 1:
					uParam0->f_45 = 1;
					uParam0->f_44 = __LIB_14__::func_748(27);
					break;
			}
			break;
		case 512:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(5);
					break;
			}
			break;
		case 524288:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(15);
					break;
			}
			break;
		case 2048:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(1);
					break;
			}
			break;
		case 4096:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(2);
					break;
			}
			break;
		case 16384:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_45 = 1;
					uParam0->f_44 = __LIB_14__::func_748(23);
					break;
				case 1:
					uParam0->f_44 = __LIB_14__::func_748(7);
					break;
			}
			break;
		case 32768:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(4);
					break;
			}
			break;
		case 1048576:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(16);
					break;
			}
			break;
		case 2097152:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_45 = 1;
					uParam0->f_44 = __LIB_14__::func_748(24);
					break;
				case 1:
					uParam0->f_44 = __LIB_14__::func_748(17);
					break;
			}
			break;
		case 4194304:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(20);
					break;
				case 1:
					if (PED::IS_PED_FLEEING(uParam0->f_4))
					{
						uParam0->f_45 = 1;
						uParam0->f_44 = __LIB_14__::func_748(26);
					}
					break;
			}
			break;
		case 8388608:
			switch (uParam0->f_63)
			{
				case 0:
					uParam0->f_44 = __LIB_14__::func_748(18);
					break;
			}
			break;
	}
	return true;
}

bool func_363(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar5;
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_720(6, &Var0))
	{
		return false;
	}
	Var0.f_2 = 465794448;
	Var0.f_3 = __LIB_6__::func_676(iParam0);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar5 = __LIB_9__::func_843(iParam1);
		Var0.f_2 = 521381610;
		Var0.f_3 = __LIB_9__::func_28(iVar5);
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 701084451;
			*iParam2 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
			return true;
		}
	}
	return false;
}

bool func_364(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<4> Var0;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	struct<8> Var12;
	struct<8> Var20;
	var uVar28;
	var uVar29;
	vector3 vVar30;
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_720(6, &Var0))
	{
		return false;
	}
	Var0.f_2 = 465794448;
	Var0.f_3 = __LIB_6__::func_676(iParam0);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar5 = __LIB_9__::func_843(iParam1);
		Var0.f_2 = 521381610;
		Var0.f_3 = __LIB_9__::func_28(iVar5);
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = -412700030;
			Var0.f_3 = iParam2;
			if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
				Var0.f_2 = 932018906;
				DATAFILE::_DATAFILE_GET_HASH(&uVar8, &Var0);
				uVar6 = uVar8;
				Var0.f_2 = 1247398698;
				DATAFILE::_DATAFILE_GET_HASH(&uVar9, &Var0);
				uVar7 = uVar9;
				Var0.f_2 = 2067444527;
				DATAFILE::_DATAFILE_GET_BOOL(&uVar28, &Var0);
				Var0.f_2 = -2123036120;
				DATAFILE::_DATAFILE_GET_STRING(&Var20, &Var0);
				Var0.f_2 = 1712903544;
				DATAFILE::_DATAFILE_GET_STRING(&Var12, &Var0);
				Var0.f_2 = -1792709277;
				DATAFILE::_DATAFILE_GET_HASH(&uVar10, &Var0);
				uVar11 = uVar10;
				Var0.f_2 = 2125553816;
				DATAFILE::_DATAFILE_GET_BOOL(&uVar29, &Var0);
				Var0.f_2 = -1037227702;
				DATAFILE::_DATAFILE_GET_VECTOR(&vVar30, &Var0);
				*uParam3 = uVar6;
				uParam3->f_1 = uVar7;
				uParam3->f_19 = uVar28;
				uParam3->f_20 = uVar29;
				uParam3->f_21 = { vVar30 };
				uParam3->f_10 = { Var20 };
				uParam3->f_18 = uVar11;
				uParam3->f_2 = { Var12 };
				return true;
			}
		}
	}
	return false;
}

bool func_365(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_10)))
	{
		if (!INTERIOR::IS_VALID_INTERIOR(iParam1))
		{
			return false;
		}
		if (bParam2)
		{
			if (bParam3)
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam1, &(uParam0->f_10)))
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iParam1, &(uParam0->f_10), true);
				}
			}
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam1, &(uParam0->f_10)))
			{
				if (uParam0->f_20)
				{
					iVar0 = 2;
				}
				else
				{
					iVar0 = 0;
				}
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iParam1, &(uParam0->f_10), iVar0);
			}
		}
		else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam1, &(uParam0->f_10)))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iParam1, &(uParam0->f_10), true);
		}
	}
	if (__LIB_0__::func_30(uParam0->f_18))
	{
		if (!STREAMING::_0xCF45DF50C7775F2A())
		{
			if (bParam2)
			{
				__LIB_0__::func_401(uParam0->f_18);
			}
			else
			{
				__LIB_0__::func_400(uParam0->f_18);
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_366(var uParam0)
{
	HUD::_TEXT_DATABASE_DELETE("WARD");
	GRAPHICS::_0x37D7BDBA89F13959("CamTransition01");
	switch (__LIB_0__::func_2())
	{
		case -1:
			__LIB_14__::func_750(uParam0);
			break;
	}
}

void func_367(var uParam0)
{
	HUD::_TEXT_DATABASE_REQUEST("WARD");
	GRAPHICS::_0x5199405EABFBD7F0("CamTransition01");
	switch (__LIB_0__::func_2())
	{
		case -1:
			__LIB_14__::func_754(uParam0);
			break;
	}
}

int func_368(var uParam0, int iParam1)
{
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		*iParam1 = 17;
		return 0;
	}
	if (__LIB_7__::func_729())
	{
		*iParam1 = 15;
		return 0;
	}
	if (__LIB_3__::func_63())
	{
		*iParam1 = 1;
		return 0;
	}
	if (__LIB_0__::func_103())
	{
		*iParam1 = 2;
		return 0;
	}
	if (!__LIB_15__::func_27(uParam0->f_2))
	{
		*iParam1 = 4;
		return 0;
	}
	if (!__LIB_3__::func_339(uParam0->f_3) && !__LIB_2__::func_800())
	{
		*iParam1 = 5;
		return 0;
	}
	*iParam1 = 0;
	return 1;
}

void func_369(var uParam0)
{
	__LIB_4__::func_340(&(uParam0->f_8[0 /*17*/]));
	__LIB_4__::func_340(&(uParam0->f_8[1 /*17*/]));
	__LIB_4__::func_340(&(uParam0->f_8[2 /*17*/]));
	__LIB_4__::func_340(&(uParam0->f_8[3 /*17*/]));
}

bool func_370(var uParam0)
{
	int iVar0;
	if (!__LIB_6__::func_76(uParam0->f_3) && uParam0->f_2 != 21)
	{
		if (__LIB_2__::func_800())
		{
			if (!__LIB_2__::func_803(uParam0->f_2, &iVar0))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return false;
			}
			if (MISC::_0x4B101DBCC9482F2D(iVar0))
			{
				return false;
			}
		}
	}
	if (uParam0->f_2 == 19)
	{
		return true;
	}
	return false;
}

bool func_371(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<4> Var0;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	struct<8> Var9;
	var uVar17;
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_720(6, &Var0))
	{
		return false;
	}
	Var0.f_2 = 465794448;
	Var0.f_3 = __LIB_6__::func_676(iParam0);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar5 = __LIB_9__::func_843(iParam1);
		Var0.f_2 = 521381610;
		Var0.f_3 = __LIB_9__::func_28(iVar5);
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 791653025;
			Var0.f_3 = iParam2;
			if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
				Var0.f_2 = -2123036120;
				DATAFILE::_DATAFILE_GET_STRING(&Var9, &Var0);
				Var0.f_2 = -1792709277;
				DATAFILE::_DATAFILE_GET_HASH(&uVar6, &Var0);
				uVar8 = uVar6;
				Var0.f_2 = -205647334;
				DATAFILE::_DATAFILE_GET_HASH(&uVar7, &Var0);
				uVar17 = uVar7;
				*uParam3 = { Var9 };
				uParam3->f_8 = uVar8;
				uParam3->f_9 = uVar17;
				return true;
			}
		}
	}
	return false;
}

int func_372(var uParam0)
{
	var uVar0;
	uVar0 = __LIB_14__::func_799(&(uParam0->f_2031));
	return uVar0;
}

int func_373(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_14__::func_835();
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, -804795275);
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, 1184271882);
	iVar2 = (iVar2 + iVar0);
	iVar2 = __LIB_9__::func_939(iVar2, 1, iVar1);
	__LIB_14__::func_836(uParam0, iVar2);
	return 1;
}

bool func_374(int iParam0)
{
	if (iParam0 == 0 || __LIB_0__::func_357(iParam0) == -2014019346)
	{
		return false;
	}
	return true;
}

bool func_375(var uParam0)
{
	uParam0->f_1177 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_273, "CatalogItemInspection");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "isVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_1177, "itemLabel", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1177, "itemDescription", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1177, "purchaseLabel", "");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1177, "purchasePrice", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1177, "tokenPrice", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "isGoldPrice", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1177, "purchaseModifiedPrice", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "modifiedPriceVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "modifiedPriceGold", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "ammoVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1177, "ammoCurrent", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1177, "ammoMax", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1177, "ammoTextureDictionary", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1177, "ammoTexture", "");
	uParam0->f_1177.f_1 = INVENTORY::_0x9D21B185ABC2DBC4(uParam0->f_1177, "effects", 0, 0);
	uParam0->f_1177.f_2 = INVENTORY::_0x9D21B185ABC2DBC5(uParam0->f_1177, "stats", 0, __LIB_0__::func_749());
	uParam0->f_1177.f_3 = INVENTORY::_0x9D21B185ABC2DBC5(uParam0->f_1177, "compareStats", 0, __LIB_0__::func_749());
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_1177, "CompareLabel", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "NextItem", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "PreviousItem", false);
	return true;
}

int func_376(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(*uParam1))
	{
		return -1;
	}
	iVar0 = __LIB_14__::func_782(uParam1);
	if (iParam0 < 0 || iParam0 >= iVar0)
	{
		return -1;
	}
	iVar1 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(*uParam1, uParam1->f_12, iParam0, &iVar1))
	{
		return iVar1;
	}
	return -1;
}

bool func_377(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, var uParam6, int iParam7)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return __LIB_1__::func_208(iParam0, &Var0);
}

char* func_378(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return "SHOP_DOCTOR";
			case 4:
				return "SHOP_FENCE";
			case 6:
				return "SHOP_GUNSMITH";
			case 7:
				return "SHOP_TAILOR";
			case 2:
				return "SHOP_POSTOFFICE";
			case 1:
				return "SHOP_TRAINSTATION";
			case 8:
				return "SHOP_BARBER";
			case 11:
				return __LIB_11__::func_876(&(Global_1914319.f_17378.f_1006));
			case 3:
				return "SHOP_GENERAL";
			case 30:
				return "SHOP_COACH";
			case 9:
				return "SHOP_HORSE_SHOP";
			case 10:
				return "SHOP_BUTCHER";
			case 31:
				return "SHOP_HORSE_FENCE_MP";
			case 15:
				return "SHOP_BANK";
			case 17:
				return "SHOP_BAIT";
			case 33:
				return "SHOP_BARTENDER";
			case 18:
				return "SHOP_TRAPPER";
			case 20:
				return "SHOP_HOTEL";
			case 32:
				return "SHOP_WILDERNESS_SUPPLIES";
			case 21:
				return "SHOP_PHOTO_STUDIO";
			default:
				break;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam0 == 22)
		{
			return "SHOP_NEWSPAPER";
		}
		else if (iParam0 == 19)
		{
			return "SHOP_PEARSON_BUY";
		}
		else if (((iParam0 == 3 || iParam0 == 6) || iParam0 == 0) || iParam0 == 7)
		{
			return "SHOP_BROWSE_CATALOGUE";
		}
		else
		{
			return "SHOP_BUY";
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam0 == 19)
		{
			return "SHOP_PEARSON_DONATE";
		}
		else
		{
			return "SHOP_SELL";
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam0 == 32)
		{
			return "SHOP_WILDERNESS_SUPPLIES_FOLLOWER";
		}
		return "SHOP_CUSTOMIZE";
	}
	else if (iParam1 == 4)
	{
		return "SHOP_CRAFT";
	}
	else if (iParam1 == 5)
	{
		return "SHOP_BUTCHER_DROPOFF";
	}
	else if (iParam1 == 6)
	{
		return "SHOP_PELT_DROPOFF";
	}
	else if (iParam1 == 7)
	{
		return "SHOP_FISHBAG_DROPOFF";
	}
	else if (iParam1 == 10)
	{
		return "SHOP_POSTOFFICE_PAY_BOUNTY";
	}
	else if (iParam1 == 11)
	{
		return "SHOP_POSTOFFICE_RECEIVE_MAIL";
	}
	else if (iParam1 == 12)
	{
		return "SHOP_POSTOFFICE_SEND_MAIL";
	}
	else if (iParam1 == 13)
	{
		return "SHOP_POSTOFFICE_TRAIN_TICKETS";
	}
	return "";
}

bool func_379(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_14__::func_859(&(uParam0->f_2031));
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar1 = 0;
	if (!__LIB_14__::func_734(iParam1, &iVar1))
	{
		return false;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (__LIB_14__::func_813(iVar2, &(uParam0->f_2031)))
		{
			if (__LIB_0__::func_85(&(uParam0->f_2031)) == iVar1)
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_380(var uParam0, bool bParam1)
{
	int iVar0;
	__LIB_14__::func_796(uParam0, __LIB_12__::func_475(&(uParam0->f_2031)));
	iVar0 = 0;
	if (__LIB_5__::func_917() != 0 || (__LIB_5__::func_917() == 0 && __LIB_0__::func_479() == 5))
	{
		iVar0 = 1;
	}
	__LIB_14__::func_883(uParam0, (4 + iVar0));
	if (!uParam0->f_2031.f_80)
	{
		__LIB_14__::func_885(uParam0, 0);
	}
	return 1;
}

int func_381(var uParam0, bool bParam1)
{
	__LIB_14__::func_796(uParam0, __LIB_12__::func_475(&(uParam0->f_2031)));
	__LIB_14__::func_883(uParam0, 10);
	return 1;
}

int func_382(var uParam0, bool bParam1)
{
	__LIB_14__::func_796(uParam0, __LIB_15__::func_31(uParam0));
	if (!__LIB_14__::func_883(uParam0, 3))
	{
	}
	return 1;
}

void func_383(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_60))
	{
		uParam0->f_2031.f_60 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(uParam0->f_2031.f_50, 924730110);
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_60);
	}
	uParam0->f_2031.f_73 = 0;
	__LIB_14__::func_833(uParam0, 0);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_61))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2031.f_61);
	}
	uParam0->f_2031.f_61 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_50, -248239712);
}

bool func_384(var uParam0, var uParam1)
{
	if (uParam0->f_42 > 1)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(*uParam0, __LIB_15__::func_39(uParam0), uParam1))
		{
			return true;
		}
	}
	else
	{
		*uParam1 = { uParam0->f_5 };
		return true;
	}
	return false;
}

int func_385(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_2031.f_50, __LIB_14__::func_890());
}

int func_386(var uParam0, int iParam1)
{
	if (__LIB_14__::func_891(__LIB_15__::func_33(uParam0), iParam1, 1))
	{
		return 703647745 /* GXTEntry: "All" */;
	}
	if (__LIB_14__::func_891(__LIB_15__::func_33(uParam0), iParam1, 16))
	{
		return 644372540 /* GXTEntry: "Color" */;
	}
	if (__LIB_14__::func_891(__LIB_15__::func_33(uParam0), iParam1, 32))
	{
		return 931007774 /* GXTEntry: "Pattern" */;
	}
	return iParam1;
}

int func_387(var uParam0, int iParam1, bool bParam2)
{
	if (!DATABINDING::_VIRTUAL_COLLECTION_EXISTS(__LIB_14__::func_768()))
	{
		return 0;
	}
	DATABINDING::_VIRTUAL_COLLECTION_RESET(__LIB_14__::func_768());
	if (iParam1 >= 0)
	{
		uParam0->f_2031.f_102 = iParam1;
	}
	if (bParam2)
	{
		__LIB_14__::func_863(uParam0);
	}
	return 1;
}

void func_388(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Global_1914319.f_16855.f_3.f_1 == -729996127)
	{
		__LIB_12__::func_493(uParam0->f_2031.f_72);
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_60, uParam0->f_2031.f_72);
		__LIB_14__::func_817(&iVar0);
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, __LIB_12__::func_479());
		iVar2 = iVar1;
		__LIB_14__::func_818(iVar2);
	}
}

int func_389(var uParam0)
{
	int iVar0;
	if (uParam0->f_2031.f_98)
	{
		iVar0 = __LIB_14__::func_898(uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::_0xA0BC8FAED8CFEB3C(iVar0))
			{
				__LIB_14__::func_899(iVar0);
			}
			else
			{
				uParam0->f_2308 = iVar0;
			}
			uParam0->f_2031.f_98 = 0;
		}
	}
	return 1;
}

int func_390(bool bParam0)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(__LIB_14__::func_906(bParam0), __LIB_12__::func_481());
	return iVar0;
}

bool func_391(bool bParam0)
{
	if (bParam0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Global_1914319.f_16855.f_3.f_16, __LIB_14__::func_909());
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Global_1914319.f_16855.f_3.f_10, __LIB_14__::func_909());
}

int func_392(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_2031.f_73 <= 0 || iParam1 >= uParam0->f_2031.f_73)
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_2031.f_50, "currentPaletteIndex", iParam1);
	__LIB_12__::func_494(uParam0->f_2031.f_72, 0);
	iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_60, iParam1);
	__LIB_14__::func_821(&iVar0, 0);
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, __LIB_12__::func_479());
	iVar2 = iVar1;
	__LIB_14__::func_822(iVar2, 0);
	return 1;
}

int func_393(bool bParam0)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(__LIB_12__::func_480(bParam0), __LIB_14__::func_847());
	return iVar0;
}

bool func_394(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bVar3 = false;
	if (!__LIB_14__::func_916(iParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar4 = __LIB_14__::func_917(iParam0);
	__LIB_0__::func_557(&(Global_1946804.f_964), -380731322, *iParam1, iParam0, 1, Global_1946804.f_1329.f_1[iVar4 /*9*/][Global_1946804.f_1329.f_1[iVar4 /*9*/].f_8]);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	while (DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964)))
	{
		iVar2 = 0;
		while (iVar2 < Global_1946804.f_1329.f_29[iVar0 /*6*/].f_5)
		{
			if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &(Global_1946804.f_964), Global_1946804.f_1329.f_29[iVar0 /*6*/].f_1[iVar2]))
			{
				bVar3 = false;
			}
			else
			{
				iVar4 = __LIB_14__::func_917(Global_1946804.f_1329.f_29[iVar0 /*6*/].f_1[iVar2]);
				if (iVar1 != Global_1946804.f_1329.f_1[iVar4 /*9*/][Global_1946804.f_1329.f_1[iVar4 /*9*/].f_8])
				{
					bVar3 = false;
				}
				else
				{
					bVar3 = true;
					iVar2++;
				}
			}
		}
		if (!bVar3)
		{
		}
		else
		{
			if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &(Global_1946804.f_964), joaat("STATE_ID")))
			{
				return false;
			}
			*uParam2 = iVar1;
			return true;
		}
	}
	return false;
}

int func_395(int iParam0, int iParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*iParam1))
	{
		return 0;
	}
	iParam0->f_1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam1, __LIB_12__::func_481());
	*iParam0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam1, __LIB_12__::func_479());
	iParam0->f_2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam1, __LIB_14__::func_847());
	iParam0->f_3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam1, __LIB_14__::func_896());
	iParam0->f_4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam1, __LIB_14__::func_897());
	iParam0->f_5 = { __LIB_14__::func_895(iParam1) };
	iParam0->f_9 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*iParam1, __LIB_14__::func_909());
	iParam0->f_10 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*iParam1, __LIB_12__::func_482());
	return 1;
}

bool func_396(var uParam0, int iParam1)
{
	*iParam1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_59, "SADDLE");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, __LIB_12__::func_481(), 1837492866);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, __LIB_14__::func_847(), 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, "frontSlotTextureDict", joaat("BLIPS"));
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, "frontSlotTexture", joaat("BLIP_SADDLE"));
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, "frontSlotTextureColour", joaat("COLOR_WHITE"));
	if (__LIB_5__::func_917() == 3)
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam1, __LIB_14__::func_922(), -5180795);
	}
	else if (__LIB_5__::func_917() == 1)
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam1, __LIB_14__::func_922(), -50782933);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, __LIB_14__::func_909(), true);
	return true;
}

bool func_397(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;
	bool bVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	if (iParam1 >= 3 || iParam1 < 0)
	{
		return false;
	}
	MISC::_INT_TO_STRING(iParam1, "%d", &uVar0);
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_59, &uVar0);
	iVar4 = iParam1;
	bVar5 = true;
	iVar6 = __LIB_14__::func_738(uParam0);
	if (!__LIB_14__::func_927(iVar6, iVar4, &uVar7))
	{
		bVar5 = false;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, __LIB_12__::func_481(), -395279071);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, __LIB_14__::func_847(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, __LIB_14__::func_923(), MISC::_CREATE_VAR_STRING(0, __LIB_14__::func_839(iVar4)));
	if (bVar5)
	{
		if (Global_1946804.f_1329.f_1[iVar4 /*9*/].f_7 > 1)
		{
			iVar8 = Global_1946804.f_1329.f_1[iVar4 /*9*/].f_8;
			iVar9 = Global_1946804.f_1329.f_1[iVar4 /*9*/][iVar8];
			DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*iParam2, __LIB_14__::func_840(), iVar9);
			DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*iParam2, __LIB_14__::func_837(), iVar8);
		}
		else
		{
			bVar5 = false;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*iParam2, __LIB_14__::func_926(), bVar5);
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*iParam2, __LIB_14__::func_838(), Global_1946804.f_1329.f_1[iVar4 /*9*/].f_7);
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(bVar5);
		Stack.Push(uParam0);
		Stack.Push(__LIB_15__::func_31(uParam0));
		Stack.Push(iParam1);
		Stack.Push(-395279071);
		Call_Loc(uParam0->f_2031.f_120);
		bVar5 = (StackVal && StackVal);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, __LIB_14__::func_909(), bVar5);
	return true;
}

bool func_398(var uParam0, int iParam1)
{
	bool bVar0;
	*iParam1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_59, 317179309);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, __LIB_12__::func_481(), 317179309);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam1, __LIB_14__::func_922(), 1362641624);
	bVar0 = true;
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(uParam0);
		Stack.Push(__LIB_15__::func_31(uParam0));
		Stack.Push(-1);
		Stack.Push(317179309);
		Call_Loc(uParam0->f_2031.f_120);
		if (!StackVal)
		{
			bVar0 = false;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, __LIB_14__::func_909(), bVar0);
	return true;
}

bool func_399(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<4> Var0;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	struct<8> Var12;
	struct<8> Var20;
	var uVar28;
	var uVar29;
	vector3 vVar30;
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_720(6, &Var0))
	{
		return false;
	}
	Var0.f_2 = 465794448;
	Var0.f_3 = __LIB_6__::func_676(iParam0);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar5 = __LIB_9__::func_843(iParam1);
		Var0.f_2 = 521381610;
		Var0.f_3 = __LIB_9__::func_28(iVar5);
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2042406626;
			Var0.f_3 = iParam2;
			if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
				Var0.f_2 = 932018906;
				DATAFILE::_DATAFILE_GET_HASH(&uVar8, &Var0);
				uVar6 = uVar8;
				Var0.f_2 = 1247398698;
				DATAFILE::_DATAFILE_GET_HASH(&uVar9, &Var0);
				uVar7 = uVar9;
				Var0.f_2 = 2067444527;
				DATAFILE::_DATAFILE_GET_BOOL(&uVar28, &Var0);
				Var0.f_2 = -2123036120;
				DATAFILE::_DATAFILE_GET_STRING(&Var20, &Var0);
				Var0.f_2 = 1712903544;
				DATAFILE::_DATAFILE_GET_STRING(&Var12, &Var0);
				Var0.f_2 = -1792709277;
				DATAFILE::_DATAFILE_GET_HASH(&uVar10, &Var0);
				uVar11 = uVar10;
				Var0.f_2 = 2125553816;
				DATAFILE::_DATAFILE_GET_BOOL(&uVar29, &Var0);
				Var0.f_2 = -1037227702;
				DATAFILE::_DATAFILE_GET_VECTOR(&vVar30, &Var0);
				*uParam3 = uVar6;
				uParam3->f_1 = uVar7;
				uParam3->f_19 = uVar28;
				uParam3->f_20 = uVar29;
				uParam3->f_21 = { vVar30 };
				uParam3->f_10 = { Var20 };
				uParam3->f_18 = uVar11;
				uParam3->f_2 = { Var12 };
				return true;
			}
		}
	}
	return false;
}

int func_400(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	__LIB_14__::func_781(&iParam0);
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	iVar0 = __LIB_0__::func_936(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = __LIB_0__::func_800(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

char* func_401(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return "";
	}
	if (__LIB_14__::func_856(iParam0, &iVar0, 1525140568, 0))
	{
		return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
	}
	return "";
}

void func_402(var uParam0, int iParam1)
{
	struct<10> Var0;
	CAM::_0x11F32BB61B756732(uParam0, Global_1914319.f_19461.f_22[iParam1 /*12*/].f_11);
	Var0 = { __LIB_14__::func_857(iParam1) };
	CAM::_0xE4B7945EF4F1BFB2(uParam0, &Var0);
}

int func_403(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = *uParam0;
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return -1;
	}
	if (iVar0 == joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"))
	{
		return 3;
	}
	if (__LIB_0__::func_357(iVar0) != -999503751)
	{
		return -1;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar3 = uParam0->f_1[iVar2 /*3*/];
		if (!__LIB_0__::func_144(iVar3, 0))
		{
		}
		else if (!__LIB_12__::func_496(__LIB_0__::func_357(iVar3)))
		{
		}
		else
		{
			iVar4 = __LIB_14__::func_858(iVar3);
			if (iVar4 != -1)
			{
				iVar1 = (iVar1 + iVar4);
			}
		}
		iVar2++;
	}
	if (iVar1 >= 4)
	{
		return 2;
	}
	if (iVar1 <= 2)
	{
		return 0;
	}
	return 1;
}

bool func_404(int iParam0)
{
	if ((__LIB_14__::func_868(iParam0) && iParam0 != -999503751) && iParam0 != 0)
	{
		return true;
	}
	return false;
}

void func_405(var uParam0, int iParam1)
{
	__LIB_14__::func_804(uParam0, 1);
	__LIB_14__::func_869(uParam0, iParam1, 1);
	__LIB_14__::func_805(uParam0, 1, joaat("MENU_TEXTURES"), joaat("MENU_ICON_ALERT"));
}

void func_406(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_14__::func_870(uParam0))
	{
		iVar0 = __LIB_14__::func_871(uParam0);
		iParam1 = __LIB_14__::func_452(iVar0);
	}
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemDescription");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar1, "Text", iParam1);
}

void func_407(int iParam0, int iParam1)
{
	struct<2> Var0;
	char* sVar3;
	char* sVar4;
	int iVar5;
	char* sVar6;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return;
	}
	if (!__LIB_14__::func_779(iParam0, &Var0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			sVar3 = "ITEM_SAVED";
			sVar4 = "Transaction_Positive";
			iVar5 = joaat("COLOR_PURE_WHITE");
			break;
		case 1:
			sVar3 = "ITEM_DELETED";
			sVar4 = "Transaction_Negative";
			iVar5 = joaat("COLOR_GREYMID");
			break;
		case 2:
			sVar3 = "ITEM_STORED";
			sVar4 = "Transaction_Positive";
			iVar5 = joaat("COLOR_PURE_WHITE");
			break;
		case 3:
			sVar3 = "ITEM_REMOVED";
			sVar4 = "Transaction_Positive";
			iVar5 = joaat("COLOR_PURE_WHITE");
			break;
	}
	sVar6 = __LIB_0__::func_54(MISC::_CREATE_VAR_STRING(10, sVar3, MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iParam0))), iVar5);
	__LIB_0__::func_924(sVar6, Var0.f_1, MISC::GET_HASH_KEY(Var0), 0, iVar5, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

bool func_408(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (!__LIB_0__::func_222(2, iVar0))
		{
			*uParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_409(var uParam0)
{
	int iVar0;
	iVar0 = uParam0;
	if (iVar0 >= 1 && iVar0 <= 5)
	{
		return __LIB_0__::func_223(iVar0);
	}
	return 0;
}

void func_410(var uParam0, int iParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2031.f_53, __LIB_14__::func_953(iParam1), sParam2);
}

bool func_411(var uParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_53, __LIB_14__::func_866(iParam1));
}

bool func_412(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (uParam1->f_10 == 1)
	{
		iVar0 = __LIB_14__::func_816();
		iVar1 = __LIB_14__::func_952(&(uParam0->f_2031));
		if (iVar0 < iVar1 && iVar0 >= 0)
		{
			uParam0->f_2031.f_78 = iVar0;
			return __LIB_14__::func_862();
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_413(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	*iParam2 = 0;
	iVar0 = __LIB_15__::func_33(uParam0);
	iVar1 = __LIB_14__::func_918(iVar0, iParam1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (__LIB_14__::func_855(iVar0, iParam1, iVar2) != -1)
		{
			*iParam2++;
		}
		iVar2++;
	}
	return true;
}

int func_414(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	if (iParam2 > iParam1)
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		iParam1 = 0;
	}
	if (iParam2 != -1)
	{
		iParam2 = __LIB_0__::func_309(iParam2, 0, iParam1);
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 1184271882, iParam2);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 1184271882, iParam3);
	}
	iParam3 = __LIB_0__::func_309(iParam3, 0, iParam1);
	iVar0 = (iParam3 - 1);
	iVar0 = __LIB_0__::func_309(iVar0, 0, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, -2088148546, 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 997560919, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 1453173492, iVar0);
	if (iParam3 == 0)
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, -804795275, -10);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, -804795275, iParam3);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, -1569227938, bParam4);
	__LIB_14__::func_977(uParam0, bParam5);
	return 1;
}

int func_415(var uParam0)
{
	struct<7> Var0;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(*uParam0, __LIB_15__::func_39(uParam0), &Var0))
	{
		return Var0.f_6;
	}
	return -1;
}

int func_416(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_31[iVar0] != 0)
		{
			if (__LIB_14__::func_951(*uParam0, uParam0->f_31[iVar0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_417(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		__LIB_14__::func_978(uParam0);
	}
	__LIB_14__::func_887(uParam0, 0);
	return 1;
}

int func_418(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		__LIB_14__::func_978(uParam0);
	}
	return 1;
}

bool func_419(bool bParam0)
{
	if (bParam0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Global_1914319.f_16855.f_3.f_16, __LIB_14__::func_980());
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Global_1914319.f_16855.f_3.f_10, __LIB_14__::func_980());
}

bool func_420(int iParam0, var uParam1)
{
	int iVar0;
	struct<4> Var1;
	Var1 = -2109211296;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_241() == 1160113249)
		{
			Var1 = 1583685020;
		}
		else
		{
			Var1 = -572793833;
		}
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return false;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, 199808792))
	{
		(*uParam1)[0] = __LIB_14__::func_986(iVar0);
	}
	else
	{
		(*uParam1)[0] = -1;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, -468412711))
	{
		(*uParam1)[1] = __LIB_14__::func_986(iVar0);
	}
	else
	{
		(*uParam1)[1] = -1;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, -1592946273))
	{
		(*uParam1)[2] = __LIB_14__::func_986(iVar0);
	}
	else
	{
		(*uParam1)[2] = -1;
	}
	return true;
}

bool func_421(int iParam0)
{
	return ((__LIB_14__::func_876(iParam0) || __LIB_14__::func_877(iParam0)) || __LIB_14__::func_976(iParam0));
}

bool func_422()
{
	if (__LIB_9__::func_434() == -814448122 || (__LIB_9__::func_434() == -986108061 && !__LIB_14__::func_914(2)))
	{
		return Global_40.f_7748.f_1 > 1;
	}
	return Global_40.f_7748.f_1 > 2;
}

bool func_423(int iParam0)
{
	if (__LIB_14__::func_940(iParam0, -570078785))
	{
		return true;
	}
	return false;
}

void func_424(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	struct<17> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0.f_14 = iParam0;
		Var0 = iParam1;
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

int func_425(int iParam0)
{
	return __LIB_14__::func_950(&(Global_1914319.f_17378), iParam0);
}

bool func_426(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_241();
	if (__LIB_14__::func_951(iParam0, iParam1, 32))
	{
		if (iVar0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		{
			return false;
		}
	}
	else if (__LIB_14__::func_951(iParam0, iParam1, 16))
	{
		if (iVar0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		{
			return false;
		}
	}
	else if (__LIB_14__::func_951(iParam0, iParam1, 64))
	{
		if (iVar0 == 1160113249)
		{
			return false;
		}
	}
	else if (__LIB_14__::func_951(iParam0, iParam1, 128))
	{
		if (iVar0 == -2125499975 || iVar0 == -449205311)
		{
			return false;
		}
	}
	return true;
}

char* func_427(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return "";
	}
	if (__LIB_14__::func_856(iParam0, &iVar0, 1716021368, 0))
	{
		return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
	}
	return "";
}

void func_428(var uParam0)
{
	struct<2> Var0;
	vector3 vVar22;
	int iVar29;
	int iVar30;
	int iVar31;
	if (((((*uParam0 != 7 && *uParam0 != 8) && *uParam0 != 9) && *uParam0 != 10) && *uParam0 != 11) && *uParam0 != 12)
	{
		return;
	}
	Var0.f_1 = 20;
	iVar29 = uParam0->f_136[0 /*3*/];
	if (__LIB_0__::func_787(iVar29))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_4.f_96[0 /*8*/].f_1[0], "statLabel", joaat("SHOP_WEAPON_STAT_DAMAGE"));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_4.f_96[0 /*8*/].f_1[1], "statLabel", joaat("SHOP_WEAPON_STAT_RANGE"));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_4.f_96[0 /*8*/].f_1[2], "statLabel", joaat("SHOP_WEAPON_STAT_FIRERATE"));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_4.f_96[0 /*8*/].f_1[3], "statLabel", joaat("SHOP_WEAPON_STAT_RELOAD"));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_4.f_96[0 /*8*/].f_1[4], "statLabel", joaat("SHOP_WEAPON_STAT_ACCURACY"));
		if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar29, &Var0))
		{
		}
		else if (Var0 <= 0)
		{
		}
		else
		{
			iVar30 = 0;
			while (iVar30 < Var0)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar30], &vVar22))
				{
					if (vVar22.y == -266488916)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_4.f_96[0 /*8*/].f_1[0], "invertedCurrentStat", (100 - vVar22.z));
					}
					else if (vVar22.y == 1648497600)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_4.f_96[0 /*8*/].f_1[1], "invertedCurrentStat", (100 - vVar22.z));
					}
					else if (vVar22.y == -1856731002)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_4.f_96[0 /*8*/].f_1[2], "invertedCurrentStat", (100 - vVar22.z));
					}
					else if (vVar22.y == 2038990430)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_4.f_96[0 /*8*/].f_1[3], "invertedCurrentStat", (100 - vVar22.z));
					}
					else if (vVar22.y == 983649838)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_4.f_96[0 /*8*/].f_1[4], "invertedCurrentStat", (100 - vVar22.z));
					}
				}
				iVar30++;
			}
		}
		iVar31 = 0;
		while (iVar31 < 6)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_4.f_96[0 /*8*/].f_1[iVar31], "invertedPotentialStat", 0);
			iVar31++;
		}
	}
}

bool func_429(int iParam0)
{
	bool bVar0;
	struct<4> Var1;
	bVar0 = __LIB_0__::func_577(iParam0);
	if (bVar0 == 0)
	{
		return false;
	}
	Var1 = { __LIB_0__::func_949(0) };
	if (__LIB_14__::func_992(&Var1, bVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

void func_430(var uParam0, int iParam1)
{
	__LIB_1__::func_581(&(uParam0->f_2031.f_45), iParam1);
}

void func_431(var uParam0)
{
	bool bVar0;
	bVar0 = __LIB_14__::func_982(uParam0);
	__LIB_14__::func_885(uParam0, bVar0);
	__LIB_14__::func_886(uParam0, !bVar0);
}

int func_432(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		(*uParam1)[iVar3] = 0;
		iVar3++;
	}
	iVar4 = iParam0;
	Var5 = -2109211296;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_241() == 1160113249)
		{
			Var5 = 1583685020;
		}
		else
		{
			Var5 = -572793833;
		}
	}
	Var5.f_1 = iVar4;
	Var5.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var5);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var5))
	{
		return 0;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var5))
	{
		if (iVar0 >= *uParam1)
		{
			return 0;
		}
		DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var5, joaat("COMPONENT"));
		iVar2 = iVar1;
		DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var5, 1409451727);
		if (!__LIB_15__::func_0(iVar1, &iVar3))
		{
		}
		else
		{
			(*uParam1)[iVar3] = iVar2;
			iVar0++;
		}
	}
	return 1;
}

bool func_433(var uParam0, var uParam1)
{
	bool bVar0;
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_59, 2073652352);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, __LIB_12__::func_481(), 2073652352);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam1, __LIB_14__::func_922(), -1095179319 /* GXTEntry: "Rename Horse" */);
	bVar0 = true;
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(uParam0);
		Stack.Push(__LIB_15__::func_31(uParam0));
		Stack.Push(-1);
		Stack.Push(2073652352);
		Call_Loc(uParam0->f_2031.f_120);
		if (!StackVal)
		{
			bVar0 = false;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam1, __LIB_14__::func_909(), bVar0);
	return true;
}

int func_434(bool bParam0)
{
	struct<14> Var0;
	var uVar14;
	Var0 = { __LIB_0__::func_523(0, 2123222014, -1591664384, -1591664384, 0, 0) };
	uVar14 = __LIB_15__::func_1(&Var0, bParam0) + 1;
	return uVar14;
}

bool func_435(var uParam0)
{
	struct<10> Var0;
	int iVar14;
	struct<4> Var15;
	Var0.f_9 = -1591664384;
	iVar14 = __LIB_0__::func_162(1);
	Var15 = { __LIB_0__::func_949(1) };
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var15))
	{
		if (INVENTORY::_0x033EE4B89F3AC545(iVar14, &Var15, 1782082944) > 0)
		{
			if (INVENTORY::_0xBE012571B25F5ACA(iVar14, &Var15, 1782082944, 0, &Var0))
			{
				return __LIB_15__::func_2(&Var0, uParam0, 0);
			}
		}
	}
	return false;
}

bool func_436(int iParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	struct<4> Var15;
	struct<4> Var19;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	iVar14 = __LIB_0__::func_162(1);
	Var15 = { __LIB_0__::func_429(389943619, __LIB_0__::func_949(1), 1591329969, 1) };
	Var19 = { __LIB_0__::func_429(iParam0, Var15, 2123222014, 1) };
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var19))
	{
		if (INVENTORY::_0x033EE4B89F3AC545(iVar14, &Var19, -1824203570) > 0)
		{
			if (INVENTORY::_0xBE012571B25F5ACA(iVar14, &Var19, -1824203570, 0, &Var0))
			{
				if (__LIB_15__::func_2(&Var0, uParam1, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_437(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<5> Var8;
	bool bVar15;
	int iVar16;
	bVar15 = __LIB_0__::func_2() != -1;
	iVar16 = __LIB_0__::func_602(0);
	Var8 = uParam3;
	Var8.f_1 = Global_1946804.f_1329.f_29[iParam2 /*6*/];
	Var8.f_2 = joaat("STATE_ID");
	Var8.f_3 = 1;
	iVar6 = PED::_0xFFCC2DB2D9953401(iParam0, iVar16, bVar15);
	iVar2 = iVar6 + 1;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (iVar0 != iVar6)
		{
			iVar1 = PED::_0x6243635AF2F1B826(iParam0, iVar0, iVar16, bVar15);
			Var8.f_4 = iVar1;
		}
		else
		{
			Var8.f_4 = joaat("BASE");
			iVar1 = joaat("BASE");
		}
		DATAFILE::_0x91DED5DD64BB2691(&Var8);
		iVar4 = 0;
		while (iVar4 < Global_1946804.f_1329.f_29[iParam2 /*6*/].f_5)
		{
			if (!DATAFILE::_0x44B3A36933AC009C(&iVar3, &Var8, Global_1946804.f_1329.f_29[iParam2 /*6*/].f_1[iVar4]))
			{
			}
			else
			{
				iVar7 = __LIB_14__::func_917(Global_1946804.f_1329.f_29[iParam2 /*6*/].f_1[iVar4]);
				if (__LIB_15__::func_3(iVar7, iVar3, &uVar5))
				{
					if (iParam1 == iVar1)
					{
						Global_1946804.f_1329.f_1[iVar7 /*9*/].f_8 = uVar5;
					}
				}
				else
				{
					Global_1946804.f_1329.f_1[iVar7 /*9*/][Global_1946804.f_1329.f_1[iVar7 /*9*/].f_7] = iVar3;
					if (iParam1 == iVar1)
					{
						Global_1946804.f_1329.f_1[iVar7 /*9*/].f_8 = Global_1946804.f_1329.f_1[iVar7 /*9*/].f_7;
					}
					Global_1946804.f_1329.f_1[iVar7 /*9*/].f_7++;
				}
			}
			iVar4++;
		}
		iVar0++;
	}
}

float func_438(int iParam0)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	fVar0 = 0f;
	iVar3 = __LIB_0__::func_402(iParam0);
	if (iVar3 != -1)
	{
		iVar1 = __LIB_0__::func_819(iVar3);
		bVar2 = __LIB_14__::func_965(iVar3);
	}
	else
	{
		iVar1 = ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, 7);
		bVar2 = false;
	}
	if (bVar2)
	{
		switch (iVar1)
		{
			case 0:
				fVar0 = 0.5f;
				break;
			case 1:
				fVar0 = 0.5f;
				break;
			case 2:
				fVar0 = 0.65f;
				break;
			case 3:
				fVar0 = 0.8f;
				break;
			case 4:
				fVar0 = 0.95f;
				break;
			default:
				fVar0 = 0.5f;
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				fVar0 = 0.02f;
				break;
			case 1:
				fVar0 = 0.04f;
				break;
			case 2:
				fVar0 = 0.1f;
				break;
			case 3:
				fVar0 = 0.15f;
				break;
			case 4:
				fVar0 = 0.2f;
				break;
			default:
				fVar0 = 0.02f;
				break;
		}
	}
	return fVar0;
}

bool func_439(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<4> Var4;
	*uParam3 = 0;
	if (!__LIB_14__::func_693(iParam1))
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam1, iParam2, &Var4))
	{
		iVar0 = 0;
		while (iVar0 < Var4.f_3)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(iParam1, Var4, iVar0, &iVar3, &uVar1, &uVar2))
			{
				if (__LIB_0__::func_144(iVar3, 0))
				{
					if (__LIB_0__::func_779(iVar3) && __LIB_6__::func_107(iVar3))
					{
						*uParam3 = iVar3;
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_440(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_918(iParam0))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (!__LIB_2__::func_803(iParam0, &iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = Global_1914319.f_3[iParam0 /*446*/].f_10;
	}
	else
	{
		iVar1 = Global_1051260.f_48[iParam0 /*78*/].f_16;
	}
	__LIB_14__::func_993(iVar0, uParam1, iVar0, iParam2, __LIB_14__::func_632(iVar1), 0, 10);
	return 1;
}

void func_441(int iParam0)
{
	int iVar0;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	__LIB_15__::func_13(iVar0);
}

void func_442(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, float fParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_66, iParam3);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "iconTXD", "pausemenu_player");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "iconTexture", sParam7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "isIconVisible", true);
	if ((!bParam6 && fParam5 >= 0f) || (bParam6 && fParam5 <= 0f))
	{
		sVar1 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fParam5));
	}
	else
	{
		sVar1 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(fParam5));
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "label", sParam4);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "value", sVar1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "isEndIconVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "isRowActive", false);
	if (__LIB_0__::func_144(iParam2, 0))
	{
		iVar2 = __LIB_14__::func_998(iParam1, iParam2, iParam3);
		if (iVar2 == 2)
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "isEndIconVisible", true);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "endIconTexture", "rpg_arrow_down");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "endIconTXD", "menu_textures");
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "isRowActive", true);
		}
		else if (iVar2 == 1)
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "isEndIconVisible", true);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "endIconTexture", "rpg_arrow_up");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "endIconTXD", "menu_textures");
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "isRowActive", false);
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_66, -1, -519723266, iVar0);
}

void func_443(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_3__::func_563(uParam0->f_2, uParam0->f_3))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[uParam0->f_2 /*446*/].f_23))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[uParam0->f_2 /*446*/].f_23);
	}
	if (!__LIB_0__::func_272(iVar0, 0))
	{
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, true, 0, false) || WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, true, 1, false))
	{
		if (iVar1 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::_0x94A3C1B804D291EC(iVar0, 0, 0, 1, 1);
		}
	}
}

void func_444(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_27(uParam0->f_99, iParam1) && iParam1 == 32)
	{
		if (!__LIB_0__::func_27(uParam0->f_1, 1))
		{
			__LIB_14__::func_704(uParam0);
		}
		__LIB_2__::func_451(&(uParam0->f_77), 0);
	}
	__LIB_1__::func_581(&(uParam0->f_99), iParam1);
}

bool func_445(int iParam0)
{
	if (__LIB_0__::func_787(iParam0))
	{
		if (__LIB_0__::func_237(__LIB_0__::func_775(iParam0, 1)))
		{
			return false;
		}
		if (WEAPON::_0x705BE297EEBDB95D(__LIB_0__::func_775(iParam0, 1)) || WEAPON::_IS_WEAPON_MELEE(__LIB_0__::func_775(iParam0, 1)))
		{
			return true;
		}
	}
	return false;
}

float func_446(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	if (!__LIB_0__::func_720(3, &Var0))
	{
	}
	Var0.f_1 = 0;
	Var0.f_2 = 1732391141;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_FLOAT(&uVar5, &Var0))
	{
	}
	return uVar5;
}

void func_447(var uParam0)
{
	if (uParam0->f_59 != 0 || uParam0->f_61 != 0)
	{
		__LIB_11__::func_10(*uParam0, 0, 1);
		uParam0->f_59 = 0;
		uParam0->f_61 = 0;
	}
	uParam0->f_57 = 0;
	uParam0->f_58 = 0;
}

void func_448(var uParam0, int iParam1)
{
	if (__LIB_0__::func_27(uParam0->f_99, iParam1) && iParam1 == 32)
	{
		if (!__LIB_0__::func_27(uParam0->f_1, 1))
		{
			__LIB_14__::func_704(uParam0);
		}
		__LIB_2__::func_451(&(uParam0->f_77), 0);
	}
	__LIB_1__::func_993(&(uParam0->f_99), iParam1);
}

bool func_449(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar8;
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_720(6, &Var3))
	{
		return false;
	}
	iVar8 = __LIB_1__::func_921(iParam0);
	if (!__LIB_1__::func_918(iVar8))
	{
		return false;
	}
	Var3.f_2 = 465794448;
	Var3.f_3 = __LIB_6__::func_676(iVar8);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var3.f_1), &Var3))
	{
		iVar2 = __LIB_9__::func_843(iParam0);
		Var3.f_2 = 521381610;
		Var3.f_3 = __LIB_9__::func_28(iVar2);
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var3.f_1), &Var3))
		{
			Var3.f_2 = 2073822671;
			DATAFILE::_DATAFILE_GET_HASH(&iVar0, &Var3);
			iVar1 = __LIB_12__::func_526(iVar0);
			if (iParam0 == iVar1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_450(var uParam0, int iParam1)
{
	if (__LIB_14__::func_448(uParam0->f_4))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return true;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_65)))
	{
		__LIB_1__::func_283(&(uParam0->f_65), 1);
	}
	if (__LIB_0__::func_265(&(uParam0->f_65)) >= IntToFloat(iParam1))
	{
		return true;
	}
	return false;
}

bool func_451(var uParam0)
{
	if (!__LIB_14__::func_751())
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, true))
	{
		return true;
	}
	if (PED::IS_PED_ON_MOUNT(*uParam0))
	{
		return true;
	}
	if (__LIB_0__::func_2() == -1)
	{
		return false;
	}
	if (__LIB_14__::func_752())
	{
		return true;
	}
	if (__LIB_1__::func_14(1, 255))
	{
		return true;
	}
	if (__LIB_14__::func_753())
	{
		return true;
	}
	if (__LIB_3__::func_64())
	{
		return true;
	}
	return false;
}

bool func_452(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (!__LIB_14__::func_751())
	{
		return false;
	}
	if (__LIB_0__::func_2() != -1)
	{
		if (Global_1225639.f_12)
		{
			return false;
		}
		if (__LIB_1__::func_14(1, 255))
		{
			return false;
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (__LIB_0__::func_91())
	{
		return false;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), uParam0->f_7) > 3.5f)
	{
		return false;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(*uParam0))
	{
		return false;
	}
	if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
	{
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, true))
	{
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(*uParam0))
	{
		return false;
	}
	if (PED::_IS_PED_HOGTIED(*uParam0))
	{
		return false;
	}
	if (PED::_IS_PED_LASSOED(*uParam0))
	{
		return false;
	}
	if (PED::_0x0E99E3BF11BB6367(*uParam0))
	{
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(*uParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		return false;
	}
	if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1))
	{
		return false;
	}
	if (__LIB_0__::func_190())
	{
		return false;
	}
	return true;
}

bool func_453(var uParam0)
{
	if (__LIB_15__::func_39(&(uParam0->f_2031)) == uParam0->f_2031.f_71)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_454(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_0__::func_139(uParam0->f_1698[iVar0]))
		{
			__LIB_1__::func_281(&(uParam0->f_1698[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

void func_455(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		__LIB_0__::func_456(iParam0, iParam1, bParam2, bParam4);
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
	else if (!__LIB_14__::func_779(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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

int func_456(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	__LIB_14__::func_796(uParam0, __LIB_12__::func_475(&(uParam0->f_2031)));
	iVar0 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 180)
		{
			if (__LIB_0__::func_30(Global_40.f_9910[iVar1 /*6*/]) && __LIB_0__::func_878(Global_40.f_9910[iVar1 /*6*/], -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		__LIB_14__::func_819();
		return 1;
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	return 1;
}

bool func_457(var uParam0, int iParam1, int iParam2, struct<4> Param3, int iParam7)
{
	var uVar0;
	MISC::_INT_TO_STRING(iParam2, "%i", &uVar0);
	*iParam7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_59, &uVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*iParam7, -156023664, joaat("BLIPS"));
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*iParam7, -231316707, joaat("BLIP_SADDLE"));
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam7, __LIB_12__::func_481(), 1119253406);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam7, __LIB_14__::func_847(), iParam2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam7, __LIB_12__::func_479(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam7, "frontSlotTextureColour", joaat("COLOR_WHITE"));
	__LIB_14__::func_924(iParam7, Param3);
	if (__LIB_0__::func_144(iParam1, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam7, __LIB_14__::func_922(), __LIB_1__::func_72(iParam1));
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam7, "frontSlotTextureVisible", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam7, __LIB_14__::func_909(), true);
		if (__LIB_14__::func_925(&Param3, 0))
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam7, "backTextureVisible", true);
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam7, "backTextureDict", joaat("MENU_TEXTURES"));
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam7, "backTexture", joaat("MENU_ICON_TICK"));
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam7, "backTextureVisible", false);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam7, __LIB_14__::func_922(), MISC::_CREATE_VAR_STRING(2, "SHOP_EMPTY_SADDLE_SLOT"));
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam7, "frontSlotTextureVisible", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam7, __LIB_14__::func_909(), false);
	}
	return true;
}

bool func_458(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_59, __LIB_14__::func_930(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, __LIB_12__::func_481(), -698448975);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, __LIB_14__::func_847(), iParam1);
	sVar0 = __LIB_14__::func_931(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, __LIB_14__::func_922(), MISC::GET_HASH_KEY(sVar0));
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "showQuantity", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "forSale", true);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "owned", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "locked", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "soldOut", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "useGoldPrice", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, __LIB_14__::func_909(), __LIB_15__::func_47(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "price", __LIB_1__::func_931(iParam1));
	return true;
}

struct<5> func_459(int iParam0)
{
	struct<5> Var0;
	if (!__LIB_14__::func_854(iParam0, 390090631))
	{
		return Var0;
	}
	Var0 = { __LIB_0__::func_429(-1268909760, __LIB_0__::func_949(1), 359221401, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return Var0;
	}
	Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1268909760);
	if (Var0.f_4 == 0)
	{
	}
	return Var0;
}

int func_460(int iParam0, int iParam1)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (__LIB_15__::func_51(iParam0, iParam1))
	{
		if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, 1, 0))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				iVar33 = Var0[iVar32 /*2*/];
				if (__LIB_0__::func_144(iVar33, 0) && iVar33 == joaat("CURRENCY_CASH"))
				{
					return Var0[iVar32 /*2*/].f_1;
				}
				iVar32++;
			}
		}
	}
	return 0;
}

int func_461(bool bParam0)
{
	struct<4> Var0;
	struct<10> Var4;
	Var0 = { __LIB_15__::func_53(0) };
	Var4.f_9 = -1591664384;
	__LIB_0__::func_464(Var0, &Var4, bParam0, 0);
	return __LIB_0__::func_857(Var4.f_4);
}

bool func_462(int iParam0, var uParam1, bool bParam2)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar18;
	if (iParam0 < 0)
	{
		return false;
	}
	Var0 = { __LIB_15__::func_53(0) };
	Var4.f_9 = -1591664384;
	__LIB_0__::func_464(Var0, &Var4, bParam2, 0);
	if (iParam0 >= __LIB_0__::func_857(Var4.f_4))
	{
		return false;
	}
	iVar18 = __LIB_12__::func_495(Var4.f_4, iParam0);
	if (iVar18 == 0)
	{
		return false;
	}
	if (!__LIB_14__::func_932(Var0, iVar18, uParam1, 0, bParam2))
	{
		return false;
	}
	return true;
}

bool func_463()
{
	if (!__LIB_1__::func_105(0))
	{
		return false;
	}
	if (__LIB_15__::func_54(__LIB_0__::func_398(0), 0) && __LIB_15__::func_54(__LIB_0__::func_398(0), 1))
	{
		return false;
	}
	return true;
}

int func_464(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!__LIB_0__::func_20(iParam0))
	{
		*iParam2 = -676468980;
		return 0;
	}
	if (!__LIB_0__::func_20(iParam1))
	{
		*iParam2 = -676468980;
		return 0;
	}
	if (!__LIB_10__::func_35(0, 1) || !__LIB_10__::func_35(1, 1))
	{
		*iParam2 = -676468980;
		return 0;
	}
	iVar0 = __LIB_14__::func_994(iParam0, iParam1);
	if (__LIB_0__::func_492(1) < iVar0)
	{
		*iParam2 = 1770286334;
		return 0;
	}
	*iParam2 = 1510530693;
	return 1;
}

int func_465(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	struct<6> Var23;
	int iVar30;
	int iVar31;
	int iVar32;
	bool bVar33;
	char* sVar34;
	char* sVar35;
	char* sVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	iVar0 = uParam0->f_2031.f_95;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!__LIB_14__::func_981(iParam1))
	{
		return 0;
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_67))
	{
		uParam0->f_2031.f_67 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2031.f_52, "StirrupStats");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_67);
	}
	Var1.f_1 = 20;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam1, &Var1))
	{
	}
	else if (Var1 <= 0)
	{
		__LIB_14__::func_808(uParam0, 0);
	}
	else
	{
		iVar31 = 0;
		iVar32 = 0;
		bVar33 = true;
		iVar37 = 0;
		while (iVar37 < Var1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var1.f_1[iVar37], &Var23))
			{
				bVar33 = false;
				if (Var23.f_1 == -1620444701)
				{
					iVar31 = (iVar31 + Var23.f_2);
				}
				else if (Var23.f_1 == 2086291460)
				{
					iVar32 = (iVar32 + Var23.f_2);
				}
				else if (Var23.f_1 == -845587290)
				{
					sVar34 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE");
					sVar36 = "RPG_Horse_Stamina";
					bVar33 = true;
				}
				else if (Var23.f_1 == 1167068375)
				{
					sVar34 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE");
					sVar36 = "RPG_Horse_Stamina";
					bVar33 = true;
				}
				if (bVar33)
				{
					if (Var23.f_5 <= 0f)
					{
						sVar35 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(Var23.f_5));
					}
					else
					{
						sVar35 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(Var23.f_5));
					}
					iVar30 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_67, Var23.f_1);
					DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "iconTXD", "pausemenu_player");
					DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "iconTexture", sVar36);
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isIconVisible", true);
					DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "label", sVar34);
					DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "value", sVar35);
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isEndIconVisible", false);
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isRowActive", false);
					if (__LIB_0__::func_144(iParam2, 0))
					{
						iVar38 = __LIB_14__::func_998(iParam1, iParam2, Var23.f_1);
						if (iVar38 == 2)
						{
							DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isEndIconVisible", true);
							DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "endIconTexture", "rpg_arrow_down");
							DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "endIconTXD", "menu_textures");
							DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isRowActive", true);
						}
						else if (iVar38 == 1)
						{
							DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isEndIconVisible", true);
							DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "endIconTexture", "rpg_arrow_up");
							DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "endIconTXD", "menu_textures");
							DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isRowActive", false);
						}
					}
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_67, -1, -519723266, iVar30);
				}
			}
			iVar37++;
		}
		iVar39 = 0;
		iVar40 = 0;
		iVar39 = __LIB_15__::func_58(iVar0);
		iVar40 = __LIB_15__::func_59(iVar0);
		iVar41 = 0;
		iVar42 = 0;
		iVar41 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(ENTITY::GET_ENTITY_MODEL(iVar0), 5);
		iVar42 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(ENTITY::GET_ENTITY_MODEL(iVar0), 6);
		iVar39++;
		iVar40++;
		iVar39 = __LIB_0__::func_309(iVar39, 0, iVar41);
		iVar40 = __LIB_0__::func_309(iVar40, 0, iVar42);
		iVar43 = iVar39 + 3;
		iVar44 = iVar40 + 2;
		iVar43 = __LIB_0__::func_309(iVar43, 0, iVar41);
		iVar44 = __LIB_0__::func_309(iVar44, 0, iVar42);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedValue", iVar39);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedMinValue", 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedEquipmentValue", (iVar31 + iVar39 * 100));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedEquipmentMinValue", 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedEquipmentMaxValue", 1000);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccValue", iVar40);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccMinValue", 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccEquipmentValue", (iVar32 + iVar40 * 100));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccEquipmentMinValue", 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccEquipmentMaxValue", 1000);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedCapacityValue", iVar43);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedCapacityMinValue", 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedCapacityMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccCapacityValue", iVar44);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccCapacityMinValue", 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccCapacityMaxValue", 10);
		__LIB_14__::func_808(uParam0, 1);
	}
	return 1;
}

bool func_466(char* sParam0, struct<8> Param1)
{
	if (!__LIB_15__::func_63(__LIB_0__::func_67(Param1), __LIB_15__::func_11(), __LIB_15__::func_12(), 16, sParam0))
	{
		return false;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) >= 10 && MISC::ARE_STRINGS_EQUAL(HUD::_0xD8402B858F4DDD88(sParam0, 10), "Dummy Text"))
	{
		*sParam0 = { Param1 };
		return true;
	}
	return true;
}

int func_467(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = __LIB_15__::func_66(iParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return 3;
	}
	return -1;
}

bool func_468(int* iParam0)
{
	int iVar0;
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = __LIB_15__::func_68(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

void func_469(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7[10];
	int iVar18;
	if (!__LIB_9__::func_808(iParam1))
	{
		return;
	}
	if (__LIB_1__::func_356(iParam0))
	{
		iVar5 = 0;
		while (iVar5 < 3)
		{
			iVar4 = __LIB_0__::func_574(iVar5);
			if (!PED::_0x608BC6A6AACD5036(&Var0, iParam0, iVar4, 0))
			{
			}
			else
			{
				iVar6 = Var0.f_3;
				if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
				{
				}
				else if (iParam1 == __LIB_6__::func_140(iVar6))
				{
					if (ENTITY::_0x8DE41E9902E85756(iVar6))
					{
						if (iVar5 == 0 || iVar5 == 2)
						{
							*uParam4 = 1;
						}
						*iParam2++;
					}
					else
					{
						*iParam3++;
					}
				}
			}
			iVar5++;
		}
	}
	else if (PED::_IS_PED_CARRYING(iParam0))
	{
		__LIB_7__::func_754(Global_35, &uVar7, 1);
		iVar18 = 0;
		while (iVar18 < 10)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uVar7[iVar18]))
			{
			}
			else if (iParam1 == __LIB_6__::func_140(uVar7[iVar18]))
			{
				if (ENTITY::_0x8DE41E9902E85756(uVar7[iVar18]))
				{
					if (iVar18 == 0)
					{
						*uParam4 = 1;
					}
					*iParam2++;
				}
				else
				{
					*iParam3++;
				}
			}
			iVar18++;
		}
	}
}

bool func_470(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!__LIB_15__::func_20(iParam0, iParam1))
		{
			return false;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0) != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!__LIB_15__::func_69(iParam0))
		{
			return false;
		}
		if (!__LIB_15__::func_20(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_471(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return __LIB_15__::func_69(iParam0);
	}
	return true;
}

void func_472(var uParam0)
{
	if (!uParam0->f_2)
	{
		__LIB_2__::func_624(&(uParam0->f_8), 1, 1, 1, 0);
		uParam0->f_2 = 1;
	}
}

void func_473(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 == 2)
		{
			if (HUD::_UIPROMPT_IS_VALID(uParam0->f_1261))
			{
				HUD::_UIPROMPT_DELETE(uParam0->f_1261);
			}
		}
		else if (__LIB_0__::func_139(uParam0->f_1216[iVar0]) && !(iVar0 == 8 && bParam1))
		{
			__LIB_1__::func_281(&(uParam0->f_1216[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

int func_474(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	iVar0 = PED::CLONE_PED(PLAYER::PLAYER_PED_ID(), 0f, true, true);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, vParam1, fParam4, true, false, true);
	ENTITY::_0x9587913B9E772D29(iVar0, 0);
	ENTITY::_SET_ENTITY_HEALTH(iVar0, ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, false), 0);
	ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
	__LIB_1__::func_452(2, 0, 3, iVar0, 0);
	uParam0->f_30 = iVar0;
	return iVar0;
}

int func_475(var uParam0, bool bParam1)
{
	__LIB_14__::func_796(uParam0, __LIB_12__::func_475(&(uParam0->f_2031)));
	if (!__LIB_14__::func_883(uParam0, __LIB_15__::func_74()))
	{
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_68))
	{
		INVENTORY::_0x75CFAC49301E134F(uParam0->f_2031.f_68, 0, 0);
	}
	else
	{
		uParam0->f_2031.f_68 = INVENTORY::_0x9D21B185ABC2DBC4(uParam0->f_2031.f_50, "Effects", 0, 0);
	}
	__LIB_14__::func_887(uParam0, 0);
	return 1;
}

int func_476(var uParam0)
{
	__LIB_15__::func_81();
	return 1;
}

int func_477(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return 1;
	}
	__LIB_15__::func_80(&(Global_20710.f_1126), iParam1, iParam0, iParam2);
	iVar0 = __LIB_1__::func_921(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	__LIB_11__::func_470(&(Global_20710[iVar0 /*45*/].f_2), iParam1, iParam0, iParam2);
	return 1;
}

void func_478(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = (uParam1[iVar1 /*4*/])->f_3;
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
			{
				ENTITY::_DELETE_CARRIABLE(&iVar0);
			}
			else
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, __LIB_14__::func_86(uParam0->f_154, 0), MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f), false, true, true);
				ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				PHYSICS::ACTIVATE_PHYSICS(iVar0);
				PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 223, false);
			}
		}
		iVar1++;
	}
}

float func_479(int iParam0, int iParam1)
{
	float fVar0;
	fVar0 = 1f;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return fVar0;
	}
	if (!__LIB_15__::func_78(iParam0, iParam1, &fVar0))
	{
	}
	return fVar0;
}

void func_480(var uParam0, bool bParam1)
{
	__LIB_4__::func_454(&(uParam0->f_8[0 /*17*/]), bParam1);
	__LIB_4__::func_454(&(uParam0->f_8[1 /*17*/]), bParam1);
	__LIB_4__::func_454(&(uParam0->f_8[2 /*17*/]), bParam1);
	__LIB_4__::func_454(&(uParam0->f_8[3 /*17*/]), bParam1);
}

void func_481(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_139(uParam0->f_4))
	{
		__LIB_1__::func_281(&(uParam0->f_4), 1, 1);
	}
	if (__LIB_0__::func_2() == 0)
	{
		iVar0 = joaat("INPUT_CONTEXT_X");
	}
	else
	{
		iVar0 = joaat("INPUT_CONTEXT_Y");
	}
	uParam0->f_4 = __LIB_1__::func_282("PLAYER_WARDROBE_MAIN_MENU", iVar0, uParam0->f_7, uParam0->f_10, 1, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
	if (__LIB_15__::func_86())
	{
		__LIB_1__::func_221(uParam0->f_4, 0, 1);
		uParam0->f_22 = 1;
	}
	else
	{
		uParam0->f_22 = 0;
	}
	MISC::SET_BIT(&(uParam0->f_5), 8);
}

bool func_482()
{
	if (__LIB_1__::func_185(60) && !__LIB_1__::func_185(67))
	{
		return true;
	}
	return false;
}

bool func_483(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_4__::func_452(iParam1, uParam2, 0);
		iVar5 = __LIB_10__::func_368(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
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

char* func_484(var uParam0)
{
	switch (uParam0->f_134)
	{
		case -1929181120: /* GXTEntry: "Provisions" */
			return "header_provisions";
		case 2000569519: /* GXTEntry: "Hunting & Fishing" */
			return "header_hunting_fishing";
		case 1738548224: /* GXTEntry: "Camping Supplies" */
			return "header_camping_supplies";
		case -226723743: /* GXTEntry: "Tonics" */
			return "header_remedies";
		case -1549286620: /* GXTEntry: "Horse Care" */
			return "header_horse_care";
		case -1388795319: /* GXTEntry: "Clothing" */
			return "header_clothing";
		case 1255743885: /* GXTEntry: "Weapons" */
			return "header_weapons";
		case -852600083: /* GXTEntry: "Weapons" */
			return "header_weapons";
		default:
			break;
	}
	if (__LIB_2__::func_774(34))
	{
		return "header_clothing";
	}
	return "catalog_interior";
}

bool func_485(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_6__::func_77(uParam0->f_1, 128))
	{
		if (__LIB_1__::func_985())
		{
			uParam0->f_44 = __LIB_14__::func_744(34);
		}
		else
		{
			uParam0->f_44 = __LIB_14__::func_744(42);
		}
		__LIB_6__::func_79(uParam0->f_1, 128);
		return true;
	}
	iVar0 = __LIB_1__::func_898();
	if (__LIB_0__::func_69(iVar0))
	{
		iVar1 = Global_1934266.f_317[iVar0];
		__LIB_9__::func_92(iVar1, &uVar2, &uVar3, &uVar4, &iVar5, &iVar6, &iVar7);
		if (((iVar6 == 0 && iVar7 == 0) && iVar5 <= 7) && uParam0->f_43 >= 4)
		{
			if (__LIB_1__::func_985())
			{
				uParam0->f_44 = __LIB_14__::func_744(38);
				return true;
			}
		}
	}
	if (__LIB_7__::func_291(uParam0->f_4, Global_35, 22, -1, 0, 0, 0))
	{
		if (__LIB_1__::func_985() && uParam0->f_43 >= 4)
		{
			if (__LIB_1__::func_985())
			{
				uParam0->f_44 = __LIB_14__::func_744(35);
			}
			else
			{
				uParam0->f_44 = __LIB_14__::func_744(43);
			}
			return true;
		}
	}
	if (__LIB_6__::func_77(uParam0->f_1, 256))
	{
		if (uParam0->f_43 <= 4)
		{
			uParam0->f_44 = __LIB_14__::func_744(41);
		}
		__LIB_6__::func_79(uParam0->f_1, 256);
		return true;
	}
	return false;
}

bool func_486(var uParam0, int iParam1)
{
	bool bVar0;
	*iParam1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_59, -2092532275);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, __LIB_12__::func_481(), -2092532275);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam1, __LIB_14__::func_922(), -1873242174 /* GXTEntry: "Pomade Hair" */);
	bVar0 = ((!__LIB_7__::func_790() && __LIB_1__::func_707(joaat("CONSUMABLE_HAIR_GREASE"), 1, 0)) && !__LIB_14__::func_828(__LIB_9__::func_434()));
	if (uParam0->f_2031.f_119)
	{
		Stack.Push(uParam0);
		Stack.Push(__LIB_15__::func_31(uParam0));
		Stack.Push(-1);
		Stack.Push(-2092532275);
		Call_Loc(uParam0->f_2031.f_120);
		if (!StackVal)
		{
			bVar0 = false;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, __LIB_14__::func_909(), bVar0);
	return true;
}

bool func_487()
{
	if (__LIB_2__::func_774(34))
	{
		return true;
	}
	return false;
}

struct<5> func_488(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	Var0 = { __LIB_0__::func_949(bParam1) };
	Var0.f_4 = 1084182731;
	switch (__LIB_0__::func_356(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { __LIB_1__::func_117(bParam1) };
			if (bParam2 && __LIB_0__::func_950(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!__LIB_1__::func_112(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!__LIB_1__::func_112(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (__LIB_1__::func_429(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { __LIB_1__::func_118(bParam1) };
			switch (__LIB_0__::func_357(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (__LIB_14__::func_854(iParam0, -1823706425))
			{
				Var0 = { __LIB_0__::func_429(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (__LIB_14__::func_854(iParam0, -1483207246))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!__LIB_0__::func_464(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

char* func_489(var uParam0)
{
	switch (uParam0->f_134)
	{
		case -1929181120: /* GXTEntry: "Provisions" */
			return "header_provisions";
		case 2000569519: /* GXTEntry: "Hunting & Fishing" */
			return "header_hunting_fishing";
		case 1738548224: /* GXTEntry: "Camping Supplies" */
			return "header_camping_supplies";
		case -226723743: /* GXTEntry: "Tonics" */
			return "header_remedies";
		case -1549286620: /* GXTEntry: "Horse Care" */
			return "header_horse_care";
		case -1388795319: /* GXTEntry: "Clothing" */
			return "header_clothing";
		case 1255743885: /* GXTEntry: "Weapons" */
			return "header_weapons";
		case -852600083: /* GXTEntry: "Weapons" */
			return "header_weapons";
		default:
			break;
	}
	if (__LIB_2__::func_774(34))
	{
		return "header_clothing";
	}
	return "Interior_Cover";
}

bool func_490(var uParam0, struct<5> Param1, var uParam6, int iParam7, var uParam8)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	struct<26> Var4;
	vector3 vVar48;
	var uVar51;
	var uVar55;
	var uVar56;
	var uVar57;
	int iVar58;
	var uVar59;
	var uVar60;
	if (!__LIB_0__::func_30(Param1))
	{
		return false;
	}
	iVar0 = __LIB_12__::func_506(Param1, Global_1901433.f_4504);
	Var4 = 1;
	Var4.f_1 = 1;
	Var4.f_2 = joaat("COLOR_WHITE");
	Var4.f_4 = -1;
	Var4.f_5 = -1134602452;
	Var4.f_6 = 1276832712;
	Var4.f_12 = joaat("COLOR_WHITE");
	Var4.f_13 = joaat("COLOR_WHITE");
	Var4.f_16 = 300;
	Var4.f_21 = 1;
	Var4.f_25.f_1 = 1;
	Var4.f_25.f_9 = joaat("COLOR_WHITE");
	Var4.f_25.f_10 = 8000;
	Var4.f_25.f_11 = 1511356879;
	Var4.f_25.f_18 = 1;
	if (iVar0 > 0)
	{
		__LIB_12__::func_507(Param1, 0, Global_1901433.f_4504, &iVar1, &uVar2);
		iVar3 = iVar1;
		vVar48 = { __LIB_15__::func_4(Param1) };
		Var4.f_10 = __LIB_1__::func_72(iVar3);
		Var4.f_15 = vVar48.x;
		Var4.f_14 = vVar48.y;
	}
	MISC::_INT_TO_STRING(iParam7, "%i", &uVar51);
	*uParam8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_59, &uVar51);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam8, __LIB_12__::func_479(), iVar1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam8, __LIB_12__::func_481(), -627085098);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam8, __LIB_14__::func_847(), Param1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam8, __LIB_14__::func_909(), true);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam8, __LIB_14__::func_923(), Var4.f_10);
	__LIB_9__::func_92(Param1.f_4, &uVar55, &uVar56, &uVar57, &iVar58, &uVar59, &uVar60);
	if (iVar58 <= 1)
	{
		Var4.f_11 = MISC::_CREATE_VAR_STRING(2, "POST_OFFICE_DELIVERY_TODAY");
	}
	else if (iVar58 <= 2)
	{
		Var4.f_11 = MISC::_CREATE_VAR_STRING(2, "POST_OFFICE_DELIVERY_MAIL_YESTERDAY");
	}
	else
	{
		Var4.f_11 = MISC::_CREATE_VAR_STRING(2, "POST_OFFICE_DELIVERY_MAIL_DAY", iVar58);
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam8, "itemDescriptionRaw", Var4.f_11);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam8, "textureDictionary", Var4.f_14);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam8, "texture", Var4.f_15);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam8, __LIB_14__::func_901(), false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam8, "tickVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam8, "not_script_data_int_3", 1);
	return true;
}

void func_491(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (__LIB_15__::func_45(iParam0))
		{
			__LIB_15__::func_82(iParam0);
		}
		iVar0++;
	}
	if (!bParam1)
	{
		return;
	}
	__LIB_12__::func_584(Global_35, -1, -1, -1, 1);
}

bool func_492(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	if (!__LIB_0__::func_976(iParam0, iParam2, &Var0, &iVar31, bParam7, 0))
	{
		return false;
	}
	if (__LIB_0__::func_2() == 0 && iParam6 != 0)
	{
		return false;
	}
	if (iParam6 != 0)
	{
		bParam5 = false;
	}
	bVar35 = __LIB_0__::func_708(0);
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && __LIB_0__::func_952(iVar32))
			{
				Jump @390; //curOff = 134
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && __LIB_0__::func_58(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					iVar33 = __LIB_6__::func_327(Var0[iVar34 /*2*/], iParam6);
				}
				else
				{
					iVar33 = __LIB_1__::func_614(Var0[iVar34 /*2*/], 0, 0);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (__LIB_12__::func_570(Var0[iVar34 /*2*/]) || __LIB_12__::func_129(Var0[iVar34 /*2*/]))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = __LIB_12__::func_571(7, Var0[iVar34 /*2*/], &iVar36);
						}
						iVar38 = __LIB_15__::func_98(Var0[iVar34 /*2*/], iParam6);
						if (((iVar33 + iVar37) + iVar38) >= iVar32)
						{
							if ((iVar33 + iVar38) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar36))
							{
								*uParam4 = iVar36;
							}
						}
						else
						{
							Jump @374; //curOff = 330
							if (bParam5 && ((iVar33 + __LIB_12__::func_177(7, Var0[iVar34 /*2*/])) + __LIB_12__::func_143(Var0[iVar34 /*2*/])) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { Var0[iVar34 /*2*/] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

char* func_493(var uParam0)
{
	int iVar0;
	if (*uParam0 == 19)
	{
		return "PEARSON";
	}
	if (*uParam0 == 18)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[18 /*8*/])))
		{
			__LIB_14__::func_443(18, uParam0->f_4);
		}
		return __LIB_0__::func_67(Global_1393529.f_288[18 /*8*/]);
	}
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 76:
			switch (uParam0->f_1)
			{
				case 74:
					return "0478_U_M_M_ValGenStoreOwner_01";
				case 75:
					return "0479_U_M_M_ValGunsmith_01";
				case 73:
					return "0477_U_M_M_ValDoctor_01";
				case 79:
					return "0480_U_M_M_ValHotelOwner_01";
				case 77:
				case 78:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[2 /*8*/])))
					{
						__LIB_2__::func_820(iVar0);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[2 /*8*/]);
				case 76:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[9 /*8*/])))
					{
						__LIB_2__::func_784();
					}
					return __LIB_0__::func_67(Global_1393529.f_288[9 /*8*/]);
				case 80:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[22 /*8*/])))
					{
						__LIB_2__::func_785();
					}
					return __LIB_0__::func_67(Global_1393529.f_288[22 /*8*/]);
				case 69:
					return "0710_U_M_M_ValBarber_01";
				case 70:
					return "0475_U_M_M_ValBartender_01";
				case 81:
					return "0686_U_M_O_ValBartender_01";
				case 72:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[10 /*8*/])))
					{
						__LIB_2__::func_782(76);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[10 /*8*/]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 78:
			switch (uParam0->f_1)
			{
				case 0:
					return "0036_U_M_M_AsbGunsmith_01";
				case 2:
				case 3:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[2 /*8*/])))
					{
						__LIB_2__::func_820(iVar0);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[2 /*8*/]);
				case 1:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[22 /*8*/])))
					{
						__LIB_2__::func_785();
					}
					return __LIB_0__::func_67(Global_1393529.f_288[22 /*8*/]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 92:
			switch (uParam0->f_1)
			{
				case 82:
					return "0509_U_M_O_VhTExoticShopkeeper_01";
				case 85:
				case 86:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[2 /*8*/])))
					{
						__LIB_2__::func_820(iVar0);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[2 /*8*/]);
				case 83:
					return "1038_U_F_M_VhTBartender_01";
				case 84:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[9 /*8*/])))
					{
						__LIB_2__::func_784();
					}
					return __LIB_0__::func_67(Global_1393529.f_288[9 /*8*/]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 38:
			switch (uParam0->f_1)
			{
				case 7:
					return "0083_U_M_O_BlWGeneralStoreOwner_01";
				case 17:
					return "0820_S_M_M_Tailor_01_WHITE_01";
				case 13:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[9 /*8*/])))
					{
						__LIB_2__::func_784();
					}
					return __LIB_0__::func_67(Global_1393529.f_288[9 /*8*/]);
				case 9:
					return "0821_S_M_M_Barber_01_WHITE_01";
				case 14:
				case 15:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[2 /*8*/])))
					{
						__LIB_2__::func_820(iVar0);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[2 /*8*/]);
				case 11:
					return "0080_U_M_O_BlWBartender_01";
				case 12:
					return "1099_U_M_O_BLWPhotographer_01";
				case 10:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[10 /*8*/])))
					{
						__LIB_2__::func_782(38);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[10 /*8*/]);
				case 16:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[22 /*8*/])))
					{
						__LIB_2__::func_785();
					}
					return __LIB_0__::func_67(Global_1393529.f_288[22 /*8*/]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 26:
			switch (uParam0->f_1)
			{
				case 61:
					return "0678_U_M_M_StrGenStoreOwner_01";
				case 65:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[2 /*8*/])))
					{
						__LIB_2__::func_820(iVar0);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[2 /*8*/]);
				case 62:
					return "1039_U_M_M_StrWelcomeCenter_01";
				case 63:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[9 /*8*/])))
					{
						__LIB_2__::func_784();
					}
					return __LIB_0__::func_67(Global_1393529.f_288[9 /*8*/]);
				case 64:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[22 /*8*/])))
					{
						__LIB_2__::func_785();
					}
					return __LIB_0__::func_67(Global_1393529.f_288[22 /*8*/]);
				case 60:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[10 /*8*/])))
					{
						__LIB_2__::func_782(26);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[10 /*8*/]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 5:
			switch (uParam0->f_1)
			{
				case 39:
					return "0315_U_M_M_NbxDoctor_01";
				case 42:
					return "0317_U_M_M_NbxGeneralStoreOwner_01";
				case 43:
					return "0319_U_M_M_NbxGunsmith_01";
				case 47:
					return "0820_S_M_M_Tailor_01_WHITE_01";
				case 41:
					return "0679_U_M_M_NBXShadyDealer_01";
				case 37:
					return "0821_S_M_M_Barber_01_WHITE_01";
				case 44:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[9 /*8*/])))
					{
						__LIB_2__::func_784();
					}
					return __LIB_0__::func_67(Global_1393529.f_288[9 /*8*/]);
				case 45:
				case 46:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[2 /*8*/])))
					{
						__LIB_2__::func_820(iVar0);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[2 /*8*/]);
				case 48:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[12 /*8*/])))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
						{
							__LIB_14__::func_443(12, uParam0->f_4);
						}
					}
					return __LIB_0__::func_67(Global_1393529.f_288[12 /*8*/]);
				case 49:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[13 /*8*/])))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
						{
							__LIB_14__::func_443(13, uParam0->f_4);
						}
					}
					return __LIB_0__::func_67(Global_1393529.f_288[13 /*8*/]);
				case 50:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[14 /*8*/])))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
						{
							__LIB_14__::func_443(14, uParam0->f_4);
						}
					}
					return __LIB_0__::func_67(Global_1393529.f_288[14 /*8*/]);
				case 52:
					return "0311_U_M_M_NbxBartender_01";
				case 53:
					return "0312_U_M_M_NbxBartender_02";
				case 51:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[22 /*8*/])))
					{
						__LIB_2__::func_785();
					}
					return __LIB_0__::func_67(Global_1393529.f_288[22 /*8*/]);
				case 38:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[10 /*8*/])))
					{
						__LIB_2__::func_782(5);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[10 /*8*/]);
				case 54:
					return "1100_U_M_M_SDPhotographer_01";
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 105:
			switch (uParam0->f_1)
			{
				case 28:
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
					{
						if (PED::IS_PED_MODEL(uParam0->f_4, joaat("CS_MRPEARSON")))
						{
							return "PEARSON_SHOPKEEPER";
						}
						else
						{
							return "0400_U_M_M_RhdGenStoreOwner_01";
						}
					}
					if (__LIB_0__::func_181())
					{
						return "PEARSON_SHOPKEEPER";
					}
					else
					{
						return "0400_U_M_M_RhdGenStoreOwner_01";
					}
					break;
				case 29:
					return "0401_U_M_M_RhdGunsmith_01";
				case 30:
				case 31:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[2 /*8*/])))
					{
						__LIB_2__::func_820(iVar0);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[2 /*8*/]);
				case 27:
					return "0694_U_M_M_RhdGenStoreOwner_02";
				case 33:
					return "0397_U_M_M_RhdBartender_01";
				case 32:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[22 /*8*/])))
					{
						__LIB_2__::func_785();
					}
					return __LIB_0__::func_67(Global_1393529.f_288[22 /*8*/]);
				case 26:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[10 /*8*/])))
					{
						__LIB_2__::func_782(105);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[10 /*8*/]);
				default:
					return "SHOPKEEPER_TEST_PED";
			}
			break;
		case 28:
			switch (uParam0->f_1)
			{
				case 87:
					return "1036_U_M_M_WalGeneralStoreOwner_01";
				case 88:
				case 89:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[2 /*8*/])))
					{
						__LIB_2__::func_820(iVar0);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[2 /*8*/]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 101:
			switch (uParam0->f_1)
			{
				case 35:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[9 /*8*/])))
					{
						__LIB_2__::func_784();
					}
					return __LIB_0__::func_67(Global_1393529.f_288[9 /*8*/]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 69:
			switch (uParam0->f_1)
			{
				case 18:
					return "EMR_Son1";
				case 20:
				case 21:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[2 /*8*/])))
					{
						__LIB_2__::func_820(iVar0);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[2 /*8*/]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 115:
			switch (uParam0->f_1)
			{
				case 90:
					return "1084_U_F_M_TumGeneralStoreOwner_01";
				case 91:
					return "1085_U_M_M_TumGunsmith_01";
				case 93:
					return "1087_U_M_M_TumBartender_01";
				case 92:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[10 /*8*/])))
					{
						__LIB_2__::func_782(115);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[10 /*8*/]);
				case 94:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[9 /*8*/])))
					{
						__LIB_2__::func_784();
					}
					return __LIB_0__::func_67(Global_1393529.f_288[9 /*8*/]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 120:
			switch (uParam0->f_1)
			{
				case 95:
					return "1076_U_M_M_ArmGeneralStoreOwner_01";
				case 97:
					return "1077_U_M_O_ArmBartender_01";
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 3:
			switch (uParam0->f_1)
			{
				case 22:
					return "0216_U_F_M_LagMother_01";
				default:
					break;
			}
			return "0216_U_F_M_LagMother_01";
		case 117:
			switch (uParam0->f_1)
			{
				case 99:
				case 100:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[2 /*8*/])))
					{
						__LIB_2__::func_820(iVar0);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[2 /*8*/]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 23:
			switch (uParam0->f_1)
			{
				case 23:
				case 24:
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[2 /*8*/])))
					{
						__LIB_2__::func_820(iVar0);
					}
					return __LIB_0__::func_67(Global_1393529.f_288[2 /*8*/]);
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 11:
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1393529.f_288[11 /*8*/])))
			{
				__LIB_14__::func_708();
			}
			return __LIB_0__::func_67(Global_1393529.f_288[11 /*8*/]);
		default:
			return "SHOPKEEPER_TEST_PED";
	}
	return "SHOPKEEPER_TEST_PED";
}

int func_494(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_14__::func_738(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (!__LIB_12__::func_483())
	{
		return 0;
	}
	__LIB_14__::func_711(iVar0, 1);
	__LIB_12__::func_80(iVar0, 1, bParam1);
	return 1;
}

var func_495(int iParam0)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1914319.f_19661 == iVar0)
	{
		*iParam0 = Global_1914319.f_19660;
	}
	else
	{
		Global_1914319.f_19661 = iVar0;
		Global_1914319.f_19659 = __LIB_1__::func_750(iParam0);
		Global_1914319.f_19660 = *iParam0;
	}
	return Global_1914319.f_19659;
}

bool func_496(int iParam0)
{
	int iVar0;
	float fVar1;
	struct<14> Var2;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<10> Var19;
	int iVar33;
	iVar0 = __LIB_8__::func_716(1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	if (((iParam0 == 56 || iParam0 == 57) || iParam0 == 58) || iParam0 == 59)
	{
		if (!__LIB_7__::func_443(iVar0))
		{
			return false;
		}
	}
	else
	{
		fVar1 = 30f;
		if (iParam0 == 55)
		{
			fVar1 = 40f;
		}
		if (__LIB_2__::func_118(iVar0, 0, 1) >= fVar1)
		{
			return false;
		}
	}
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2.f_1 = 1084182731;
	iVar16 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0);
	if (__LIB_7__::func_643(iVar16, &Var2, &iVar17, &iVar18))
	{
		Var19.f_9 = -1591664384;
		iVar33 = 0;
		iVar33 = 0;
		while (iVar33 < iVar18)
		{
			if (__LIB_0__::func_236(&Var19, iVar33, iVar17, iVar18))
			{
				if (__LIB_0__::func_144(Var19.f_4, 0))
				{
					if (__LIB_8__::func_127(Var19.f_4, iParam0))
					{
						__LIB_0__::func_238(iVar17);
						return true;
					}
				}
			}
			iVar33++;
		}
		__LIB_0__::func_238(iVar17);
	}
	return false;
}

void func_497(bool bParam0, bool bParam1, int iParam2)
{
	Global_1935689.f_4 = bParam0;
	Global_1935689.f_15 = iParam2;
	if (bParam0)
	{
		Global_1935689.f_5 = 0;
	}
	if (bParam1 || (__LIB_15__::func_101() && iParam2 == 0))
	{
		__LIB_12__::func_158(1);
		__LIB_12__::func_159(1);
	}
}

int func_498(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (uParam1->f_10 == 1)
	{
		iVar0 = uParam1->f_1;
		if (!__LIB_0__::func_630(iVar0))
		{
			return 0;
		}
		if (__LIB_1__::func_931(iVar0) <= 0)
		{
			return 0;
		}
		iVar1 = __LIB_1__::func_931(iVar0);
		if (__LIB_0__::func_492(1) >= iVar1)
		{
			__LIB_14__::func_230(iVar0);
			__LIB_12__::func_589(iVar0);
			__LIB_1__::func_432(iVar1, 0, 0, 1, 1);
			uParam0->f_2319.f_20 = iVar1;
			uParam0->f_2319.f_11 = 1;
			uParam0->f_2319.f_19 = iVar0;
		}
	}
	else if (uParam1->f_10 == 2)
	{
		iVar2 = 0;
		iVar5 = 0;
		while (iVar5 < 130)
		{
			iVar3 = -1;
			if (!__LIB_0__::func_20(iVar5))
			{
			}
			else if (!__LIB_3__::func_222(iVar5))
			{
			}
			else
			{
				iVar3 = __LIB_10__::func_29(__LIB_5__::func_235(iVar5, 1, 1));
				if (!__LIB_0__::func_630(iVar3))
				{
				}
				else if (iVar3 == 5)
				{
				}
				else if (__LIB_11__::func_863(iVar4, iVar3))
				{
				}
				else
				{
					__LIB_1__::func_471(&iVar4, iVar3);
					iVar2 = (iVar2 + __LIB_1__::func_931(iVar3));
				}
			}
			iVar5++;
		}
		if (__LIB_0__::func_492(1) >= iVar2)
		{
			__LIB_15__::func_103();
			__LIB_15__::func_108();
			__LIB_1__::func_432(iVar2, 0, 0, 1, 1);
			uParam0->f_2319.f_20 = iVar2;
			uParam0->f_2319.f_11 = 1;
			uParam0->f_2319.f_19 = 6;
		}
	}
	return 1;
}

void func_499(int iParam0, int iParam1)
{
	if (__LIB_15__::func_119(iParam0, iParam1))
	{
	}
	Global_1051260.f_48[iParam0 /*78*/].f_1 = (Global_1051260.f_48[iParam0 /*78*/].f_1 - (Global_1051260.f_48[iParam0 /*78*/].f_1 && iParam1));
}

void func_500(var uParam0, bool bParam1)
{
	bParam1 = bParam1;
	*uParam0 = *uParam0;
}

bool func_501(int iParam0)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1914319.f_3[iParam0 /*446*/].f_18, false))
	{
		return true;
	}
	return false;
}

bool func_502(int iParam0, int iParam1)
{
	int iVar0;
	*iParam1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1225509.f_101)
	{
		if (Global_1225509[iVar0 /*10*/].f_4 == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_503(var uParam0, bool bParam1)
{
	__LIB_15__::func_134(uParam0, bParam1, 0);
}

int func_504(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam1 /*446*/].f_25))
	{
		if (__LIB_1__::func_205(iParam0, Global_1914319.f_3[iParam1 /*446*/].f_25, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_505()
{
	Global_1935689.f_10165 = 0;
}

void func_506(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_10221, sParam0);
}

bool func_507(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	return (Global_1393529.f_77[iParam0] && iParam1) != 0;
}

void func_508(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	Global_1393529.f_77[iParam0] = (Global_1393529.f_77[iParam0] - (Global_1393529.f_77[iParam0] && iParam1));
}

char* func_509(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AMD_GENERAL_STORE"):
			return "Armadillo/AMD_GENERAL_STORE";
		case joaat("ASB_GUNSMITH"):
			return "Annesburg/Asb_Gunsmith";
		case joaat("ASB_NEWSPAPER_VENDOR"):
			return "Annesburg/Asb_Newspaper_Vendor";
		case joaat("BLW_BARBER"):
			return "Blackwater/Blw_Barber";
		case joaat("BLW_BUTCHER"):
			return "Blackwater/Blw_Butcher";
		case joaat("BLW_GENERAL_STORE"):
			return "Blackwater/Blw_General_Store";
		case joaat("BLW_NEWSPAPER"):
			return "Blackwater/Blw_Newspaper";
		case joaat("BLW_PHOTOGRAPHER"):
			return "Blackwater/Blw_Photographer";
		case joaat("BLW_TAILOR"):
			return "Blackwater/Blw_Tailor";
		case joaat("EMR_SON1"):
			return "EmeraldRanch/Emr_Son1";
		case joaat("LAG_MOTHER1"):
			return "Lagras/Lag_Mother1";
		case joaat("RHD_BUTCHER"):
			return "Rhodes/rhd_Butcher";
		case joaat("RHD_FENCE"):
			return "Rhodes/rhd_fence";
		case joaat("RHD_GENERAL_STORE"):
			return "Rhodes/rhd_general_store";
		case joaat("RHD_GUNSMITH"):
			return "Rhodes/rhd_gunsmith";
		case joaat("RHD_NEWSPAPER_VENDOR"):
			return "Rhodes/rhd_newspaper_vendor";
		case joaat("SDN_BARBER"):
			return "SaintDenis/SDN_Barber";
		case joaat("SDN_BUTCHER"):
			return "SaintDenis/SDN_Butcher";
		case joaat("SDN_DOCTOR"):
			return "SaintDenis/SDN_Doctor";
		case joaat("SDN_GEN_STORE_SHADY"):
			return "SaintDenis/SDN_Gen_Store_Shady";
		case joaat("SDN_GEN_STORE_OWNER"):
			return "SaintDenis/SDN_Gen_Store_Owner";
		case joaat("SDN_GUNSMITH"):
			return "SaintDenis/SDN_Gunsmith";
		case joaat("SDN_HORSE_SHOP_OWNER"):
			return "SaintDenis/SDN_Horse_Shop_Owner";
		case joaat("SDN_TAILOR"):
			return "SaintDenis/SDN_Tailor";
		case joaat("SDN_MARKET_VENDOR1"):
			return "SaintDenis/SDN_Market_Vendor1";
		case joaat("SDN_FRENCHMARKET_VENDOR_1"):
			return "SaintDenis/SDN_FrenchMarket_Vendor_1";
		case joaat("SDN_FRENCHMARKET_VENDOR_2"):
			return "SaintDenis/SDN_FrenchMarket_Vendor_2";
		case joaat("SDN_NEWSPAPER_VENDOR"):
			return "SaintDenis/SDN_Newspaper_Vendor";
		case joaat("SDN_PHOTOGRAPHER"):
			return "SaintDenis/SDN_Photographer";
		case joaat("STR_BUTCHER"):
			return "Strawberry/STR_Butcher";
		case joaat("STR_GENERAL_STORE"):
			return "Strawberry/Str_General_Store";
		case joaat("STR_NEWSPAPER_VENDOR"):
			return "Strawberry/Str_Newspaper_Vendor";
		case joaat("TBL_BUTCHER"):
			return "Tumbleweed/TBL_BUTCHER";
		case joaat("TBL_GENERAL_STORE_OWNER"):
			return "Tumbleweed/TBL_GENERAL_STORE_RESIDENT";
		case joaat("TBL_GUNSMITH_OWNER"):
			return "Tumbleweed/TBL_GUNSMITH_OWNER";
		case joaat("VAL_BARBER"):
			return "Valentine/Val_Barber";
		case joaat("VAL_BUTCHER"):
			return "Valentine/Val_Butcher";
		case joaat("VAL_DOCTOR"):
			return "Valentine/Val_Doctor";
		case joaat("VAL_GENERAL_STORE"):
			return "Valentine/Val_General_Store";
		case joaat("VAL_GUNSMITH"):
			return "Valentine/Val_Gunsmith";
		case joaat("VAL_NEWSPAPER_VENDOR"):
			return "Valentine/Val_Newspaper_Vendor";
		case joaat("VHT_EXOTIC_STORE"):
			return "VanHornTradingPost/vht_exotic_store";
		case joaat("WAL_GENSHOPKEEPER"):
			return "WallaceStation/WAL_GENSHOPKEEPER";
		default:
			break;
	}
	return "";
	return "";
}

bool func_510(var uParam0, int iParam1)
{
	int iVar0;
	if (iParam1 < 0)
	{
		return false;
	}
	switch (uParam0->f_436[uParam0->f_281 /*185*/])
	{
		case 1:
		case 14:
		case 15:
			return false;
		case 0:
			return true;
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
		case 13:
			iVar0 = __LIB_15__::func_285(uParam0, iParam1);
			if (!__LIB_15__::func_374(iVar0))
			{
				return false;
			}
			return true;
		default:
			return false;
	}
	return false;
}

bool func_511(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (iVar1 == Global_26796.f_26[iVar0 /*120*/].f_1)
			{
				*iParam1 = iVar0;
				return true;
			}
			iVar0++;
		}
		return false;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (iVar1 == Global_36638.f_45.f_350.f_26[iVar0 /*120*/].f_1)
			{
				*iParam1 = iVar0;
				return true;
			}
			iVar0++;
		}
		return false;
	}
	return false;
}

bool func_512(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_40.f_6563[iVar0 /*27*/] == -1)
		{
		}
		else if (Global_40.f_6563[iVar0 /*27*/] == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	*iParam1 = -1;
	return false;
}

bool func_513(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		*iParam1 = 0;
		return iVar0;
	}
	switch (iParam0)
	{
		case joaat("DOCUMENT_CATALOGUE_WMN_LETTER_01"):
			*iParam1 = joaat("TP_CATALOGUE_LETTER_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CRW_BREN_LETTER4"):
			*iParam1 = joaat("TP_BRENDA_LETTER_04");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CRW_BREN_LETTER8"):
			*iParam1 = joaat("TP_BRENDA_LETTER_08");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_RCM_FMA_LETTER"):
			*iParam1 = joaat("TP_FOR_MY_ART_LETTER");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_RCAL_LEVIN_LETTER"):
			*iParam1 = joaat("TP_RCAL_LEVIN_LETTER");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_RCAL_LEVIN_LETTER_JN"):
			*iParam1 = joaat("TP_RCAL_LEVIN_LETTER_JN");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD1"):
			*iParam1 = joaat("TP_MAYOR_REWARD_LETTER_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD1_JN"):
			*iParam1 = joaat("TP_MAYOR_REWARD_LETTER_01_JN");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2"):
			*iParam1 = joaat("TP_MAYOR_REWARD_LETTER_02");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2_JN"):
			*iParam1 = joaat("TP_MAYOR_REWARD_LETTER_02_JN");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_RSAD_PEARSONS_LETTER"):
			*iParam1 = joaat("TP_RSAD_PEARSONS_LETTER");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_INVITE"):
			*iParam1 = joaat("TP_RMAY_LETTER_1");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_INVITE2A"):
			*iParam1 = joaat("TP_RMAY_LETTER_2");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_INVITE2B"):
			*iParam1 = joaat("TP_RMAY_LETTER_3");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_01"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_02"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_02");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_03"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_03");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_04"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_04");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_05"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_05");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_06"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_06");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_07"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_07");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_08"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_08");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_09"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_09");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_10"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_10");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_11"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_11");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_12"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_12");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_13"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_13");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_14"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_14");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_15"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_15");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_16"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_16");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_17"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_17");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_18"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_18");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_19"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_19");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_20"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_20");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_21"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_21");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_22"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_22");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_23"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_23");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_24"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_24");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_25"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_25");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_26"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_26");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_27"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_27");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_28"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_28");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_29"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_29");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_30"):
			*iParam1 = joaat("TP_DINO_BONES_MAILER_30");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_01"):
			*iParam1 = joaat("TP_ROCK_CARVINGS_MAILER_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_02"):
			*iParam1 = joaat("TP_ROCK_CARVINGS_MAILER_02");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_03"):
			*iParam1 = joaat("TP_ROCK_CARVINGS_MAILER_03");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_04"):
			*iParam1 = joaat("TP_ROCK_CARVINGS_MAILER_04");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_05"):
			*iParam1 = joaat("TP_ROCK_CARVINGS_MAILER_05");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_06"):
			*iParam1 = joaat("TP_ROCK_CARVINGS_MAILER_06");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_07"):
			*iParam1 = joaat("TP_ROCK_CARVINGS_MAILER_07");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_08"):
			*iParam1 = joaat("TP_ROCK_CARVINGS_MAILER_08");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_09"):
			*iParam1 = joaat("TP_ROCK_CARVINGS_MAILER_09");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_10"):
			*iParam1 = joaat("TP_ROCK_CARVINGS_MAILER_10");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RC_QUARTZ_CHUNK"):
			*iParam1 = joaat("TP_DB_QUARTZ_CHUNK_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_DB_SKULL_STATUE"):
			*iParam1 = joaat("TP_DB_SKULL_STATUE_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			*iParam1 = joaat("TP_DB_INVITATION_01");
			iVar0 = 1;
			break;
		case joaat("CONSUMABLE_WHISKEY"):
			*iParam1 = joaat("TP_RC_WHISKEY_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RC_ROCK_STATUE"):
			*iParam1 = joaat("TP_RC_ROCK_STATUE_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			*iParam1 = joaat("TP_RC_INVITATION_01");
			iVar0 = 1;
			break;
		case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
			*iParam1 = joaat("TP_LF_ONE_FISH_MAILED_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_SUCCULENT_FISH_MEAT"):
			*iParam1 = joaat("TP_LF_TEN_FISH_MAILED_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			*iParam1 = joaat("TP_RF_INVITATION_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			*iParam1 = joaat("TP_LF_BULLHEAD_CATFISH_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			*iParam1 = joaat("TP_LF_CHAIN_PICKEREL_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			*iParam1 = joaat("TP_LF_LAKE_STURGEON_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			*iParam1 = joaat("TP_LF_LARGEMOUTHBASS_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			*iParam1 = joaat("TP_LF_LONGNOSE_GAR_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			*iParam1 = joaat("TP_LF_MUSKIE_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			*iParam1 = joaat("TP_LF_PERCH_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			*iParam1 = joaat("TP_LF_REDFIN_PICKEREL_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			*iParam1 = joaat("TP_LF_ROCK_BASS_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			*iParam1 = joaat("TP_LF_SMALLMOUTHBASS_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			*iParam1 = joaat("TP_LF_SOCKEYESALMON_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			*iParam1 = joaat("TP_LF_STEELHEAD_TROUT_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			*iParam1 = joaat("TP_LF_BLUEGILL_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			*iParam1 = joaat("TP_TX_ORDER_BADGER_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			*iParam1 = joaat("TP_TX_ORDER_BEAVER_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			*iParam1 = joaat("TP_TX_ORDER_BLUEJAY_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			*iParam1 = joaat("TP_TX_ORDER_CARDINAL_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			*iParam1 = joaat("TP_TX_ORDER_CROW_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			*iParam1 = joaat("TP_CARD_SET_ACT_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			*iParam1 = joaat("TP_CARD_SET_AML_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			*iParam1 = joaat("TP_CARD_SET_ART_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			*iParam1 = joaat("TP_CARD_SET_GRL_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			*iParam1 = joaat("TP_CARD_SET_GUN_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			*iParam1 = joaat("TP_CARD_SET_HOR_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			*iParam1 = joaat("TP_CARD_SET_INV_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			*iParam1 = joaat("TP_CARD_SET_LND_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			*iParam1 = joaat("TP_CARD_SET_PAM_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			*iParam1 = joaat("TP_CARD_SET_PLT_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			*iParam1 = joaat("TP_CARD_SET_SPT_01");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			*iParam1 = joaat("TP_CARD_SET_VEH_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_CC_VINTAGE_HANDCUFFS"):
			*iParam1 = joaat("TP_CARD_SET_FIRST_REWARD");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			*iParam1 = joaat("TP_ORCHID_ACUNAS_STAR_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			*iParam1 = joaat("TP_ORCHID_CIGAR_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			*iParam1 = joaat("TP_ORCHID_CLAMSHELL_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			*iParam1 = joaat("TP_ORCHID_DRAGONS_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			*iParam1 = joaat("TP_ORCHID_GHOST_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			*iParam1 = joaat("TP_ORCHID_LADY_OF_NIGHT_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			*iParam1 = joaat("TP_ORCHID_LADY_SLIPPER_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			*iParam1 = joaat("TP_ORCHID_MOCCASIN_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			*iParam1 = joaat("TP_ORCHID_NIGHT_SCENTED_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			*iParam1 = joaat("TP_ORCHID_QUEENS_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			*iParam1 = joaat("TP_ORCHID_RAT_TAIL_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			*iParam1 = joaat("TP_ORCHID_SPARROWS_01");
			iVar0 = 1;
			break;
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			*iParam1 = joaat("TP_ORCHID_SPIDER_01");
			iVar0 = 1;
			break;
		case joaat("MONEY_MONEYCLIP"):
			*iParam1 = joaat("TP_ORCHID_REWARD_01");
			iVar0 = 1;
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			*iParam1 = joaat("TP_TAXIDERMY_REWARD_01");
			iVar0 = 1;
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			*iParam1 = joaat("TP_TAXIDERMY_REWARD_02");
			iVar0 = 1;
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			*iParam1 = joaat("TP_TAXIDERMY_REWARD_03");
			iVar0 = 1;
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			*iParam1 = joaat("TP_TAXIDERMY_REWARD_04");
			iVar0 = 1;
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			*iParam1 = joaat("TP_TAXIDERMY_REWARD_05");
			iVar0 = 1;
			break;
		case joaat("DOCUMENT_MASONS_PHOTO"):
			*iParam1 = joaat("TP_MASON_PICTURE");
			iVar0 = 1;
			break;
		default:
			*iParam1 = 0;
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_514(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return true;
		default:
			break;
	}
	return false;
}

int func_515(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return joaat("CARD_SET_GUNSLINGERS");
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return joaat("CARD_SET_ARTISTS");
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return joaat("CARD_SET_LANDMARKS");
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return joaat("CARD_SET_GIRLS");
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return joaat("CARD_SET_PLANTS");
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return joaat("CARD_SET_ACTRESSES");
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return joaat("CARD_SET_ANIMALS");
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return joaat("CARD_SET_VEHICLES");
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return joaat("CARD_SET_SPORTS");
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return joaat("CARD_SET_INVENTIONS");
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return joaat("CARD_SET_HORSES");
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return joaat("CARD_SET_AMERICANS");
		default:
			break;
	}
	return 0;
}

bool func_516(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1935689.f_19.f_1)
	{
		if (__LIB_0__::func_372(iParam0, 1224357681) == Global_1935689.f_19.f_2[iVar0 /*2*/])
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	*iParam1 = -1;
	return false;
}

bool func_517(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam0, iParam2, &iVar0))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(iParam0, iVar0, iParam1, iParam3))
		{
			return true;
		}
	}
	return false;
}

char* func_518(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return "";
	}
	switch (iParam1)
	{
		case 7:
			iVar0 = joaat("FULLPAGE_LAYOUT_1");
			break;
		case 8:
			iVar0 = joaat("FULLPAGE_LAYOUT_2");
			break;
		case 9:
			iVar0 = joaat("FULLPAGE_LAYOUT_3");
			break;
		case 10:
			iVar0 = joaat("FULLPAGE_LAYOUT_4");
			break;
		case 11:
			iVar0 = joaat("FULLPAGE_LAYOUT_5");
			break;
		case 12:
			iVar0 = joaat("FULLPAGE_LAYOUT_6");
			break;
		case 13:
			iVar0 = joaat("ADVERT_FULLPAGE");
			break;
		case 3:
			iVar0 = joaat("GRID_OF_3_LAYOUT_0");
			break;
		case 4:
			iVar0 = joaat("GRID_OF_3_LAYOUT_1");
			break;
		case 5:
			iVar0 = joaat("GRID_OF_4_LAYOUT_0");
			break;
		case 6:
			iVar0 = joaat("GRID_OF_9_LAYOUT_0");
			break;
	}
	if (__LIB_14__::func_779(iParam0, &vVar1, iVar0, 0, 0, 0) || __LIB_14__::func_779(iParam0, &vVar1, 0, joaat("ITEM_TEXTURES"), 0, 0))
	{
		switch (vVar1.z)
		{
			case joaat("FULLPAGE_LAYOUT_1"):
				return "FULLPAGE_LAYOUT_1";
			case joaat("FULLPAGE_LAYOUT_2"):
				return "FULLPAGE_LAYOUT_2";
			case joaat("FULLPAGE_LAYOUT_3"):
				return "FULLPAGE_LAYOUT_3";
			case joaat("FULLPAGE_LAYOUT_4"):
				return "FULLPAGE_LAYOUT_4";
			case joaat("FULLPAGE_LAYOUT_5"):
				return "FULLPAGE_LAYOUT_5";
			case joaat("FULLPAGE_LAYOUT_6"):
				return "FULLPAGE_LAYOUT_6";
			case joaat("ADVERT_FULLPAGE"):
				return "ADVERT_FULLPAGE";
			case joaat("GRID_OF_3_LAYOUT_0"):
				return "GRID_OF_3_LAYOUT_0";
			case joaat("GRID_OF_3_LAYOUT_1"):
				return "GRID_OF_3_LAYOUT_1";
			case joaat("GRID_OF_4_LAYOUT_0"):
				return "GRID_OF_4_LAYOUT_0";
			case joaat("GRID_OF_9_LAYOUT_0"):
				return "GRID_OF_9_LAYOUT_0";
			default:
				break;
		}
	}
	if (__LIB_15__::func_281(iParam0))
	{
		return "GRID_OF_4_LAYOUT_0";
	}
	return "ITEM_MONEY";
}

bool func_519(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 < 0)
	{
		return false;
	}
	*uParam1 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_133 = iParam4;
	uParam1->f_134 = iParam3;
	return true;
}

int func_520(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			return joaat("AT_FBLUEGIL");
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			return joaat("AT_FBULLHEADCATFISH");
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return joaat("AT_FCHAINPICKEREL");
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return joaat("AT_FCHANNELCATFISH");
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			return joaat("AT_FLAKESTURGEON");
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			return joaat("AT_FLARGEMOUTHBASS");
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return joaat("AT_FLONGNOSEGAR");
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			return joaat("AT_FMUSKIE");
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			return joaat("AT_FNORTHERNPIKE");
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			return joaat("AT_FPERCH");
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return joaat("AT_FREDFINPICKEREL");
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return joaat("AT_FROCKBASS");
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return joaat("AT_FSMALLMOUTHBASS");
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return joaat("AT_FSALMONSOCKEYE");
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			return joaat("AT_FRAINBOWTROUT");
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return joaat("AT_BAT");
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return joaat("AT_BLUEJAY");
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return joaat("AT_BULLFROG");
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return joaat("AT_CEDARWAXWING");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("AT_CORMORANT");
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return joaat("AT_CAROLINAPARAKEET");
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return joaat("AT_CROW");
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			return joaat("AT_SQUIRREL");
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return joaat("AT_CARDINAL");
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return joaat("AT_CHIPMUNK");
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return joaat("AT_CRAB");
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_HIGH_QUALITY"):
			return joaat("AT_CRAYFISH");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("AT_GILAMONSTER");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("AT_IGUANA");
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return joaat("AT_ORIOLE");
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return joaat("AT_PIGEON");
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return joaat("AT_QUAIL");
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return joaat("AT_RAT");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("AT_REDFOOTEDBOOBY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return joaat("AT_ROBIN");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("AT_ROSESPOONBILL");
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return joaat("AT_SPARROW");
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return joaat("AT_SONGBIRD");
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return joaat("AT_TOAD");
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return joaat("AT_WOODPECKER_PILEATED");
		default:
			break;
	}
	return joaat("SMALL_ANIMALS");
}

int func_521(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return 1;
	}
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20710[iVar0 /*45*/].f_1 = iParam1;
	return 1;
}

int func_522(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20710[iVar0 /*45*/].f_43 = (Global_20710[iVar0 /*45*/].f_43 - iParam1);
	return 1;
}

int func_523(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20710[iVar0 /*45*/].f_44 = (Global_20710[iVar0 /*45*/].f_44 - iParam1);
	return 1;
}

bool func_524(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TP_DINO_BONES_MAILER_14"):
		case joaat("TP_DINO_BONES_MAILER_21"):
		case joaat("TP_DINO_BONES_MAILER_27"):
		case joaat("TP_DINO_BONES_MAILER_12"):
		case joaat("TP_DINO_BONES_MAILER_13"):
		case joaat("TP_DINO_BONES_MAILER_10"):
		case joaat("TP_DINO_BONES_MAILER_02"):
		case joaat("TP_DINO_BONES_MAILER_11"):
		case joaat("TP_DINO_BONES_MAILER_22"):
		case joaat("TP_DINO_BONES_MAILER_23"):
		case joaat("TP_DINO_BONES_MAILER_09"):
		case joaat("TP_DINO_BONES_MAILER_18"):
		case joaat("TP_DINO_BONES_MAILER_29"):
		case joaat("TP_DINO_BONES_MAILER_03"):
		case joaat("TP_DINO_BONES_MAILER_19"):
		case joaat("TP_DINO_BONES_MAILER_30"):
		case joaat("TP_DINO_BONES_MAILER_01"):
		case joaat("TP_DINO_BONES_MAILER_08"):
		case joaat("TP_DINO_BONES_MAILER_05"):
		case joaat("TP_DINO_BONES_MAILER_15"):
		case joaat("TP_DINO_BONES_MAILER_28"):
		case joaat("TP_DINO_BONES_MAILER_25"):
		case joaat("TP_DINO_BONES_MAILER_07"):
		case joaat("TP_DINO_BONES_MAILER_26"):
		case joaat("TP_DINO_BONES_MAILER_04"):
		case joaat("TP_DINO_BONES_MAILER_24"):
		case joaat("TP_DINO_BONES_MAILER_16"):
		case joaat("TP_DINO_BONES_MAILER_06"):
		case joaat("TP_DINO_BONES_MAILER_17"):
		case joaat("TP_DINO_BONES_MAILER_20"):
			return true;
	}
	return false;
}

int func_525(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TP_DINO_BONES_MAILER_01"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_01");
		case joaat("TP_DINO_BONES_MAILER_02"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_02");
		case joaat("TP_DINO_BONES_MAILER_03"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_03");
		case joaat("TP_DINO_BONES_MAILER_04"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_04");
		case joaat("TP_DINO_BONES_MAILER_05"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_05");
		case joaat("TP_DINO_BONES_MAILER_06"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_06");
		case joaat("TP_DINO_BONES_MAILER_07"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_07");
		case joaat("TP_DINO_BONES_MAILER_08"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_08");
		case joaat("TP_DINO_BONES_MAILER_09"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_09");
		case joaat("TP_DINO_BONES_MAILER_10"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_10");
		case joaat("TP_DINO_BONES_MAILER_11"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_11");
		case joaat("TP_DINO_BONES_MAILER_12"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_12");
		case joaat("TP_DINO_BONES_MAILER_13"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_13");
		case joaat("TP_DINO_BONES_MAILER_14"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_14");
		case joaat("TP_DINO_BONES_MAILER_15"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_15");
		case joaat("TP_DINO_BONES_MAILER_16"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_16");
		case joaat("TP_DINO_BONES_MAILER_17"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_17");
		case joaat("TP_DINO_BONES_MAILER_18"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_18");
		case joaat("TP_DINO_BONES_MAILER_19"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_19");
		case joaat("TP_DINO_BONES_MAILER_20"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_20");
		case joaat("TP_DINO_BONES_MAILER_21"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_21");
		case joaat("TP_DINO_BONES_MAILER_22"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_22");
		case joaat("TP_DINO_BONES_MAILER_23"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_23");
		case joaat("TP_DINO_BONES_MAILER_24"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_24");
		case joaat("TP_DINO_BONES_MAILER_25"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_25");
		case joaat("TP_DINO_BONES_MAILER_26"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_26");
		case joaat("TP_DINO_BONES_MAILER_27"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_27");
		case joaat("TP_DINO_BONES_MAILER_28"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_28");
		case joaat("TP_DINO_BONES_MAILER_29"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_29");
		case joaat("TP_DINO_BONES_MAILER_30"):
			return joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_30");
		default:
			break;
	}
	return 0;
}

bool func_526(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TP_ROCK_CARVINGS_MAILER_02"):
		case joaat("TP_ROCK_CARVINGS_MAILER_03"):
		case joaat("TP_ROCK_CARVINGS_MAILER_10"):
		case joaat("TP_ROCK_CARVINGS_MAILER_04"):
		case joaat("TP_ROCK_CARVINGS_MAILER_05"):
		case joaat("TP_ROCK_CARVINGS_MAILER_06"):
		case joaat("TP_ROCK_CARVINGS_MAILER_07"):
		case joaat("TP_ROCK_CARVINGS_MAILER_08"):
		case joaat("TP_ROCK_CARVINGS_MAILER_01"):
		case joaat("TP_ROCK_CARVINGS_MAILER_09"):
			return true;
	}
	return false;
}

int func_527(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TP_ROCK_CARVINGS_MAILER_01"):
			return joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_01");
		case joaat("TP_ROCK_CARVINGS_MAILER_02"):
			return joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_02");
		case joaat("TP_ROCK_CARVINGS_MAILER_03"):
			return joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_03");
		case joaat("TP_ROCK_CARVINGS_MAILER_04"):
			return joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_04");
		case joaat("TP_ROCK_CARVINGS_MAILER_05"):
			return joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_05");
		case joaat("TP_ROCK_CARVINGS_MAILER_06"):
			return joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_06");
		case joaat("TP_ROCK_CARVINGS_MAILER_07"):
			return joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_07");
		case joaat("TP_ROCK_CARVINGS_MAILER_08"):
			return joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_08");
		case joaat("TP_ROCK_CARVINGS_MAILER_09"):
			return joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_09");
		case joaat("TP_ROCK_CARVINGS_MAILER_10"):
			return joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_10");
		default:
			break;
	}
	return 0;
}

int func_528(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TP_TX_ORDER_BADGER_01"):
			return joaat("TAXIDERMY_ORDER_01");
		case joaat("TP_TX_ORDER_BEAVER_01"):
			return joaat("TAXIDERMY_ORDER_02");
		case joaat("TP_TX_ORDER_BLUEJAY_01"):
			return joaat("TAXIDERMY_ORDER_03");
		case joaat("TP_TX_ORDER_CARDINAL_01"):
			return joaat("TAXIDERMY_ORDER_04");
		case joaat("TP_TX_ORDER_CROW_01"):
			return joaat("TAXIDERMY_ORDER_05");
		default:
			break;
	}
	return 0;
}

bool func_529(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TP_TX_ORDER_BADGER_01"):
		case joaat("TP_TX_ORDER_BLUEJAY_01"):
		case joaat("TP_TX_ORDER_CARDINAL_01"):
		case joaat("TP_TX_ORDER_CROW_01"):
		case joaat("TP_TX_ORDER_BEAVER_01"):
			return true;
	}
	return false;
}

void func_530(int iParam0)
{
	Global_40.f_12019 = (Global_40.f_12019 || iParam0);
}

bool func_531(int iParam0)
{
	return (Global_40.f_12019.f_1 && iParam0) != 0;
}

void func_532(int iParam0)
{
	Global_40.f_12019.f_1 = (Global_40.f_12019.f_1 || iParam0);
}

bool func_533(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TP_ORCHID_SPIDER_01"):
		case joaat("TP_ORCHID_ACUNAS_STAR_01"):
		case joaat("TP_ORCHID_RAT_TAIL_01"):
		case joaat("TP_ORCHID_LADY_SLIPPER_01"):
		case joaat("TP_ORCHID_NIGHT_SCENTED_01"):
		case joaat("TP_ORCHID_MOCCASIN_01"):
		case joaat("TP_ORCHID_SPARROWS_01"):
		case joaat("TP_ORCHID_GHOST_01"):
		case joaat("TP_ORCHID_LADY_OF_NIGHT_01"):
		case joaat("TP_ORCHID_CIGAR_01"):
		case joaat("TP_ORCHID_CLAMSHELL_01"):
		case joaat("TP_ORCHID_QUEENS_01"):
		case joaat("TP_ORCHID_DRAGONS_01"):
			return true;
	}
	return false;
}

int func_534(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TP_ORCHID_ACUNAS_STAR_01"):
			return joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
		case joaat("TP_ORCHID_CIGAR_01"):
			return joaat("PROVISION_RO_FLOWER_CIGAR");
		case joaat("TP_ORCHID_CLAMSHELL_01"):
			return joaat("PROVISION_RO_FLOWER_CLAMSHELL");
		case joaat("TP_ORCHID_DRAGONS_01"):
			return joaat("PROVISION_RO_FLOWER_DRAGONS");
		case joaat("TP_ORCHID_GHOST_01"):
			return joaat("PROVISION_RO_FLOWER_GHOST");
		case joaat("TP_ORCHID_LADY_OF_NIGHT_01"):
			return joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
		case joaat("TP_ORCHID_LADY_SLIPPER_01"):
			return joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
		case joaat("TP_ORCHID_MOCCASIN_01"):
			return joaat("PROVISION_RO_FLOWER_MOCCASIN");
		case joaat("TP_ORCHID_NIGHT_SCENTED_01"):
			return joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
		case joaat("TP_ORCHID_QUEENS_01"):
			return joaat("PROVISION_RO_FLOWER_QUEENS");
		case joaat("TP_ORCHID_RAT_TAIL_01"):
			return joaat("PROVISION_RO_FLOWER_RAT_TAIL");
		case joaat("TP_ORCHID_SPARROWS_01"):
			return joaat("PROVISION_RO_FLOWER_SPARROWS");
		case joaat("TP_ORCHID_SPIDER_01"):
			return joaat("PROVISION_RO_FLOWER_SPIDER");
		default:
			break;
	}
	return 0;
}

bool func_535(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (iParam2 < 0)
	{
		return false;
	}
	iVar0 = __LIB_14__::func_952(&(uParam0->f_223));
	if (iVar0 < 0 || iVar0 > 16)
	{
		return false;
	}
	*uParam1 = 0;
	uParam1->f_3 = iParam2;
	uParam1->f_133 = iParam4;
	uParam1->f_134 = iParam3;
	uParam1->f_150 = iVar0;
	return true;
}

bool func_536(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_14__::func_952(uParam1);
	if (iParam0 < 0 || iParam0 > iVar0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(*uParam1, __LIB_12__::func_475(uParam1), iParam0, iParam2))
	{
		return true;
	}
	return false;
}

void func_537(int iParam0, int iParam1)
{
	Global_1935689.f_19.f_2[iParam0 /*2*/] = iParam1;
}

void func_538(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	var uVar18;
	var uVar19;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar13 = __LIB_8__::func_855(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (uVar2[iVar14] == iParam0)
					{
						ENTITY::_DELETE_CARRIABLE(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else
			{
				__LIB_2__::func_998(iVar1, &iVar17, &uVar18, &iVar16, &uVar19);
				if (__LIB_2__::func_999(&iVar15, iVar1, iVar16, iVar17) && iVar15 == iParam0)
				{
					ENTITY::_DELETE_CARRIABLE(&iVar0);
				}
			}
		}
	}
}

int func_539(int iParam0)
{
	struct<4> Var0;
	var uVar5;
	if (!DATAFILE::_0x7907969497EA92F5(Global_1935689.f_10225))
	{
		return 0;
	}
	Var0 = Global_1935689.f_10225;
	Var0.f_2 = 1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_540(int iParam0)
{
	struct<4> Var0;
	var uVar5;
	if (!DATAFILE::_0x7907969497EA92F5(Global_1935689.f_10225))
	{
		return 0;
	}
	Var0 = Global_1935689.f_10225;
	Var0.f_2 = 0;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_541(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	if (__LIB_15__::func_324(iParam1, &iVar0))
	{
		ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iParam0, iVar0, fParam2, false);
	}
}

bool func_542(int iParam0)
{
	return __LIB_15__::func_119(iParam0, 512);
}

void func_543(var uParam0, var uParam1, int iParam2)
{
	struct<8> Var0;
	var uVar8;
	int iVar9;
	Var0.f_3 = 1;
	Var0.f_4 = uParam0;
	Var0.f_5 = uParam1;
	Var0.f_7 = iParam2;
	iVar9 = 0;
	while (iVar9 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar9)))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar8, iVar9);
		}
		iVar9++;
	}
	__LIB_15__::func_157(&Var0, uVar8);
}

struct<2> func_544(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_15__::func_158(iParam0);
	return __LIB_0__::func_38(joaat("VISITED"), iVar0);
}

void func_545(var uParam0, var uParam1, int iParam2)
{
	struct<8> Var0;
	var uVar8;
	int iVar9;
	Var0.f_3 = 3;
	Var0.f_4 = uParam0;
	Var0.f_5 = uParam1;
	Var0.f_7 = iParam2;
	iVar9 = 0;
	while (iVar9 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar9)))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar8, iVar9);
		}
		iVar9++;
	}
	__LIB_15__::func_157(&Var0, uVar8);
}

void func_546(var uParam0, var uParam1, int iParam2)
{
	struct<8> Var0;
	var uVar8;
	int iVar9;
	Var0.f_3 = 0;
	Var0.f_4 = uParam0;
	Var0.f_5 = uParam1;
	Var0.f_7 = iParam2;
	iVar9 = 0;
	while (iVar9 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar9)))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar8, iVar9);
		}
		iVar9++;
	}
	__LIB_15__::func_157(&Var0, uVar8);
}

void func_547(var uParam0, int iParam1)
{
	if (!__LIB_15__::func_333(uParam0, iParam1))
	{
		__LIB_0__::func_7(&(uParam0->f_92), iParam1);
	}
}

bool func_548()
{
	return __LIB_15__::func_174(131072, 255);
}

void func_549(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
		__LIB_15__::func_180(uParam0);
	}
}

int func_550(var uParam0)
{
	return __LIB_15__::func_186(uParam0);
}

char* func_551(int iParam0)
{
	if (!__LIB_15__::func_190(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "PBL_ENTER";
		case 1:
			return "PBL_ENTER_SECTION";
		case 20:
			return "PBL_EXIT_INDEX";
		case 21:
			return "PBL_EXIT_SECTION";
		case 3:
			return "PBL_FLIP_R1";
		case 2:
			return "PBL_FLIP_L1";
		case 5:
			return "PBL_SECTIONJUMP_R1";
		case 4:
			return "PBL_SECTIONJUMP_L1";
		case 6:
			return "PBL_SECTION_2_INDEX";
		case 7:
			return "PBL_INDEX_2_SECTION";
		case 8:
			return "PBL_BUY_RIFLE_VIEW_ENTER";
		case 9:
			return "PBL_BUY_PISTOL_VIEW_ENTER";
		case 10:
			return "PBL_BUY_RIFLE_VIEW_EXIT";
		case 11:
			return "PBL_BUY_PISTOL_VIEW_EXIT";
		case 12:
			return "PBL_SELL_RIFLE_VIEW_ENTER";
		case 13:
			return "PBL_SELL_PISTOL_VIEW_ENTER";
		case 14:
			return "PBL_SELL_RIFLE_VIEW_EXIT";
		case 15:
			return "PBL_SELL_PISTOL_VIEW_EXIT";
		case 16:
			return "PBL_BUY_PISTOL_VIEW_ENTER";
		case 17:
			return "PBL_BUY_PISTOL_VIEW_EXIT";
		case 18:
			return "PBL_BUY_PISTOL_VIEW_SWITCH2RIFLE";
		case 19:
			return "PBL_BUY_RIFLE_VIEW_SWITCH2PISTOL";
	}
	return "";
}

Vector3 func_552(var uParam0)
{
	return __LIB_15__::func_192(uParam0);
}

void func_553(var uParam0)
{
	if (__LIB_15__::func_187(uParam0->f_1725))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1725))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1725);
		}
	}
	if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
}

void func_554(var uParam0, int iParam1)
{
	if (__LIB_15__::func_333(uParam0, iParam1))
	{
		__LIB_0__::func_8(&(uParam0->f_92), iParam1);
	}
}

void func_555(var uParam0)
{
	if (__LIB_14__::func_719(4))
	{
		__LIB_14__::func_720(4);
	}
	if (__LIB_14__::func_719(2))
	{
		__LIB_14__::func_720(2);
	}
	uParam0->f_49 = 0;
	__LIB_15__::func_206(uParam0, 0);
}

void func_556(var uParam0, int iParam1)
{
	if (uParam0->f_50 != iParam1)
	{
		__LIB_15__::func_210(uParam0);
		uParam0->f_50 = iParam1;
		uParam0->f_11 = 0;
		uParam0->f_10 = 0;
		__LIB_15__::func_211(uParam0);
	}
}

void func_557(var uParam0)
{
	if (__LIB_6__::func_77(uParam0->f_1, 64))
	{
		if (!__LIB_15__::func_151(uParam0))
		{
			__LIB_14__::func_724(uParam0->f_4, Global_35, uParam0->f_4, 0, 0, 10);
		}
	}
	__LIB_6__::func_79(uParam0->f_1, 64);
}

void func_558(var uParam0)
{
	if (uParam0->f_50 != 0)
	{
		__LIB_15__::func_210(uParam0);
		__LIB_15__::func_211(uParam0);
		uParam0->f_11 = 0;
		uParam0->f_50 = 0;
	}
}

void func_559(var uParam0, var uParam1, int iParam2)
{
	struct<8> Var0;
	var uVar8;
	int iVar9;
	Var0.f_3 = 2;
	Var0.f_4 = uParam0;
	Var0.f_5 = uParam1;
	Var0.f_7 = iParam2;
	iVar9 = 0;
	while (iVar9 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar9)))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar8, iVar9);
		}
		iVar9++;
	}
	__LIB_15__::func_157(&Var0, uVar8);
}

bool func_560(var uParam0)
{
	if (!__LIB_15__::func_350(uParam0))
	{
		return false;
	}
	if (__LIB_15__::func_225(uParam0))
	{
		return false;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, 1827874584, "STAMPS/LAYOUT(id=%x)/ITEM(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, 1067959380, "STAMP(id=%x):data");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, -263768109, "STAMP(id=%x):x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, 1105713943, "STAMP(id=%x):y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, 898488398, "STAMP(id=%x):Rx");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, 1204845779, "STAMP(id=%x):Ry");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, -781673784, "STAMP(id=%x):width");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, -1396479160, "STAMP(id=%x):height");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, 1379369270, "STAMP(id=%x):rot");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, 766338617, "STAMP(id=%x):r");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, 472040200, "STAMP(id=%x):g");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, -179210894, "STAMP(id=%x):b");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, -954197744, "STAMP(id=%x):a");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1267, -1149374397, "STAMP(id=%x):gold");
	__LIB_0__::func_7(&(uParam0->f_1268), 4);
	return true;
}

void func_561(var uParam0)
{
	if (__LIB_15__::func_27(uParam0->f_2))
	{
		INVENTORY::_0x9E58207B194488AC(Global_35, 21);
	}
	else if ((__LIB_3__::func_563(uParam0->f_2, uParam0->f_3) || __LIB_15__::func_229(uParam0->f_2)) || __LIB_15__::func_230(uParam0->f_2))
	{
		INVENTORY::_0x9E58207B194488AC(Global_35, 18);
	}
	else
	{
		INVENTORY::_0x9E58207B194488AC(Global_35, 21);
	}
}

bool func_562(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
	{
		return true;
	}
	bVar0 = __LIB_0__::func_2() == -1;
	bVar1 = false;
	if (bVar0)
	{
		bVar1 = __LIB_4__::func_922(uParam0->f_2, 8388608);
	}
	else
	{
		bVar1 = __LIB_15__::func_111(uParam0->f_2, 8388608);
	}
	if (!bVar1)
	{
		if ((uParam0->f_2 != 9 && uParam0->f_2 != 32) && uParam0->f_2 != 21)
		{
			if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
			{
				return true;
			}
		}
	}
	bVar2 = false;
	if (bVar0)
	{
		bVar2 = __LIB_4__::func_922(uParam0->f_2, 268435456);
	}
	else
	{
		bVar2 = __LIB_15__::func_111(uParam0->f_2, 268435456);
	}
	if ((!bVar2 && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_1947, true, 0)) && *uParam0 != 7)
	{
		return true;
	}
	if (!bVar0 && uParam0->f_2 != 32)
	{
		bVar3 = false;
		if (bVar0)
		{
			bVar3 = __LIB_4__::func_922(uParam0->f_2, 16384);
		}
		else
		{
			bVar3 = __LIB_15__::func_111(uParam0->f_2, 16384);
		}
		if (!bVar3)
		{
			bVar4 = false;
			if (bVar0)
			{
				bVar4 = __LIB_1__::func_205(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[uParam0->f_2 /*446*/].f_23), Global_1914319.f_3[uParam0->f_2 /*446*/].f_25, 1, 0);
			}
			else
			{
				bVar4 = __LIB_1__::func_205(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051260.f_48[uParam0->f_2 /*78*/].f_19), Global_1051260.f_48[uParam0->f_2 /*78*/].f_30, 1, 0);
			}
			if (!bVar4)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_563(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	if (!__LIB_2__::func_803(iParam0, &iVar0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = Global_1914319.f_3[iParam0 /*446*/].f_10;
	}
	else
	{
		iVar1 = Global_1051260.f_48[iParam0 /*78*/].f_16;
	}
	__LIB_15__::func_231(iVar0, iParam1, iVar0, __LIB_14__::func_632(iVar1), 0, 10);
	return true;
}

bool func_564(var uParam0)
{
	return __LIB_15__::func_189(&(uParam0->f_4));
}

bool func_565(var uParam0)
{
	if (__LIB_15__::func_233(&(uParam0->f_4)))
	{
		__LIB_15__::func_232();
		return true;
	}
	return false;
}

void func_566(int iParam0)
{
	Global_1225509.f_101 = (Global_1225509.f_101 - 1);
	Global_1225509[iParam0 /*10*/] = { Global_1225509[Global_1225509.f_101 /*10*/] };
	__LIB_15__::func_234(&(Global_1225509[Global_1225509.f_101 /*10*/]));
	if (Global_1225509.f_102 == iParam0)
	{
		__LIB_15__::func_235(-1);
	}
}

void func_567(var uParam0, bool bParam1)
{
	int iVar0;
	CAM::_0x641092322A8852AB();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_29))
	{
		iVar0 = uParam0->f_29;
		ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_30))
	{
		ENTITY::DELETE_ENTITY(&(uParam0->f_30));
	}
	if (PED::_0x62DE46F061CAA468() > 0)
	{
		PED::_0x7D4E70A67A651C71(1);
	}
	if (bParam1)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_28))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_28, false);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (!__LIB_15__::func_237(uParam0, 128) && CAM::DOES_CAM_EXIST(uParam0->f_28))
	{
		CAM::DESTROY_CAM(uParam0->f_28, false);
		uParam0->f_28 = 0;
	}
	if (__LIB_15__::func_237(uParam0, 16))
	{
		if (HUD::_UIPROMPT_IS_VALID(uParam0->f_31))
		{
			HUD::_UIPROMPT_DELETE(uParam0->f_31);
		}
		if (HUD::_UIPROMPT_IS_VALID(uParam0->f_32))
		{
			HUD::_UIPROMPT_DELETE(uParam0->f_32);
		}
	}
	__LIB_15__::func_238(uParam0);
	__LIB_0__::func_19(uParam0, -1);
}

void func_568(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	iVar0 = __LIB_15__::func_185(uParam0, iParam1);
	if (!__LIB_0__::func_139(iVar0))
	{
		return;
	}
	__LIB_1__::func_484(iVar0, sParam2, 1);
}

bool func_569(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_356(iParam0) == joaat("AMMO"))
	{
		iParam0 = __LIB_15__::func_252(iParam0);
	}
	iVar0 = TASK::_0xE47DD64B9F02677D(iParam0);
	if (iVar0 != 0)
	{
		*iParam1 = iVar0;
		return true;
	}
	return false;
}

bool func_570(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_4__::func_922(uParam0->f_2, 16384))
	{
		return false;
	}
	if (__LIB_4__::func_922(uParam0->f_2, 33554432))
	{
		return false;
	}
	if (__LIB_15__::func_146(&(uParam0->f_2319)))
	{
		return true;
	}
	if (__LIB_6__::func_76(uParam0->f_3))
	{
		iVar0 = Global_1914319.f_3[uParam0->f_2 /*446*/].f_26;
	}
	else
	{
		iVar0 = Global_1914319.f_3[uParam0->f_2 /*446*/].f_25;
	}
	if (!__LIB_2__::func_803(uParam0->f_2, &iVar1))
	{
		return false;
	}
	if (__LIB_0__::func_255(iVar1, 0))
	{
		return false;
	}
	if (LAW::_0x0EAF918F751F27BA(iVar1) || LAW::_0xC0DF161950FB101E(iVar1))
	{
		return false;
	}
	if (!__LIB_11__::func_151(iVar1))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iVar0) && VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar0, Global_36))
		{
			return true;
		}
		if (__LIB_4__::func_807(0))
		{
			return true;
		}
	}
	return false;
}

bool func_571(var uParam0)
{
	Stack.Push(uParam0->f_25);
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_26);
	if (StackVal && StackVal)
	{
		return true;
	}
	switch (uParam0->f_43)
	{
		case 0:
		case 6:
			if (__LIB_15__::func_151(uParam0))
			{
				uParam0->f_44 = "";
				return true;
			}
			else if (__LIB_1__::func_985())
			{
				if (uParam0->f_1 == 22)
				{
					uParam0->f_49 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
				}
				uParam0->f_44 = __LIB_14__::func_744(45);
				return true;
			}
			else
			{
				uParam0->f_44 = __LIB_14__::func_744(44);
				return true;
			}
			break;
		case 4:
		case 5:
			if (__LIB_15__::func_151(uParam0))
			{
				uParam0->f_44 = __LIB_14__::func_725(15);
				return true;
			}
			else
			{
				uParam0->f_44 = __LIB_14__::func_725(14);
				return true;
			}
			break;
	}
	uParam0->f_44 = "";
	return true;
}

bool func_572(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_15__::func_255(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::_0xA454D234E45BB6E5(iVar0, PLAYER::PLAYER_ID()))
		{
			return true;
		}
		if (PED::_0x9337183FDA2E9035(iVar0, PLAYER::PLAYER_ID()))
		{
			return true;
		}
	}
	return false;
}

int func_573(var uParam0)
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("WARD"))
	{
		return 0;
	}
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("CamTransition01"))
	{
		return 0;
	}
	switch (__LIB_0__::func_2())
	{
		case -1:
			return __LIB_14__::func_762(uParam0);
		default:
			break;
	}
	return 0;
}

bool func_574(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_8__::func_74(iParam1);
	return __LIB_15__::func_260(iParam0, iVar0);
}

void func_575(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	char* sVar4;
	bVar0 = false;
	bVar0 = __LIB_4__::func_922(uParam0->f_2, 16384);
	if (bVar0)
	{
		return;
	}
	bVar1 = __LIB_2__::func_804(uParam0->f_2, 67108864);
	if (bVar1)
	{
		return;
	}
	if (!__LIB_2__::func_803(uParam0->f_2, &iVar2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	__LIB_2__::func_810(uParam0->f_2, 67108864);
	fVar3 = 25f;
	if (__LIB_15__::func_266(uParam0->f_2))
	{
		fVar3 = __LIB_15__::func_267(uParam0->f_2);
	}
	sVar4 = "";
	if (!MISC::_0x870708A6E147A9AD(iVar2, sVar4, 5f, fVar3, 0, 0, 0, 0, 0, -1))
	{
	}
}

bool func_576(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar5;
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_720(6, &Var0))
	{
		return false;
	}
	Var0.f_2 = 465794448;
	Var0.f_3 = __LIB_6__::func_676(iParam0);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar5 = __LIB_9__::func_843(iParam1);
		Var0.f_2 = 521381610;
		Var0.f_3 = __LIB_9__::func_28(iVar5);
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = -788806526;
			*iParam2 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
			return true;
		}
	}
	return false;
}

int func_577(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam1 >= 14 || iParam1 <= -1)
	{
		return 0;
	}
	uParam0->f_20[iParam1 /*8*/].f_1 = iParam2;
	uParam0->f_20[iParam1 /*8*/].f_2 = iParam3;
	uParam0->f_20[iParam1 /*8*/].f_3 = iParam4;
	uParam0->f_20[iParam1 /*8*/].f_4 = iParam5;
	__LIB_15__::func_327(uParam0, iParam1, 1);
	return 1;
}

char* func_578(int iParam0)
{
	var uVar0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return "";
	}
	if (__LIB_14__::func_779(iParam0, &uVar0, 0, joaat("ITEM_TEXTURES"), 0, 0))
	{
		return uVar0;
	}
	if (__LIB_15__::func_281(iParam0))
	{
		return "UI_ADVERT_AVENGER";
	}
	return "hud_textures";
}

bool func_579(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_15__::func_246(uParam0, iParam1);
	if (!__LIB_0__::func_139(iVar0))
	{
		return false;
	}
	if (__LIB_15__::func_290(uParam0, iParam1))
	{
		return __LIB_0__::func_567(iVar0, 1);
	}
	return __LIB_1__::func_732(iVar0, 1);
}

bool func_580(var uParam0, int iParam1, int iParam2)
{
	struct<169> Var0;
	Var0 = 14;
	Var0.f_4.f_8 = 2;
	Var0.f_4.f_11 = 16;
	Var0.f_4.f_28 = 16;
	Var0.f_4.f_45 = 16;
	Var0.f_4.f_62 = 16;
	Var0.f_4.f_79 = 16;
	Var0.f_4.f_96 = 4;
	Var0.f_4.f_96.f_1.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var0.f_136 = 4;
	Var0.f_136.f_1.f_1 = -1;
	Var0.f_136.f_1.f_2 = -1;
	Var0.f_136.f_1.f_3.f_1 = -1;
	Var0.f_136.f_1.f_3.f_2 = -1;
	Var0.f_136.f_1.f_3.f_3.f_1 = -1;
	Var0.f_136.f_1.f_3.f_3.f_2 = -1;
	Var0.f_136.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_136.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_149 = -1;
	Var0.f_150 = -1;
	Var0.f_151 = 16;
	Var0.f_168 = 16;
	if (!__LIB_15__::func_288(uParam0, &Var0))
	{
		return false;
	}
	if (Var0 != 0)
	{
		return false;
	}
	if (iParam1 >= uParam0->f_436[uParam0->f_281 /*185*/].f_150 || iParam1 < 0)
	{
		return false;
	}
	*iParam2 = uParam0->f_436[uParam0->f_281 /*185*/].f_168[iParam1];
	return true;
}

int func_581(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < __LIB_9__::func_858(iParam0))
	{
		iVar0 = __LIB_15__::func_293(iParam0, iVar1);
		if (iVar0 != 0)
		{
			return iVar0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_582(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	iVar0 = __LIB_15__::func_246(uParam0, iParam1);
	if (!__LIB_0__::func_139(iVar0))
	{
		return;
	}
	__LIB_1__::func_484(iVar0, sParam2, 1);
}

int func_583(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	__LIB_2__::func_998(iParam0, &uVar1, &uVar2, &iVar0, &uVar3);
	__LIB_2__::func_999(&iVar4, iParam0, iVar0, uVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
		default:
			break;
	}
	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

bool func_584(var uParam0)
{
	return __LIB_15__::func_333(uParam0, 32);
}

bool func_585(var uParam0)
{
	return __LIB_15__::func_333(uParam0, 64);
}

void func_586(var uParam0)
{
	if (!__LIB_15__::func_254(uParam0))
	{
		return;
	}
	switch (uParam0->f_59)
	{
		case 1:
		case 2:
			if (!TASK::_0x916B8E075ABC8B4E(uParam0->f_4, 1))
			{
				if (__LIB_15__::func_295(uParam0))
				{
					PED::_0xAAB050DA48B57978(uParam0->f_4, "Default_Brave", Global_35, -1, 4);
				}
				else
				{
					PED::_0xAAB050DA48B57978(uParam0->f_4, "Default_Scared", Global_35, -1, 4);
				}
				TASK::_0xE7FA07624574B79A(uParam0->f_4, Global_35, 2, 1, -1f, 1, 0, 0, 0);
			}
			break;
		case 3:
		case 4:
			if (!__LIB_15__::func_295(uParam0))
			{
				if (!__LIB_0__::func_163(uParam0->f_4, -1519143300))
				{
					PED::_0x935CF6E42BAF7F4D(uParam0->f_4);
					TASK::_0x541E5B41DCA45828(uParam0->f_4, 1, 0);
					PED::_0x62FDAD5E01D2DD47(uParam0->f_4, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2, 0);
					TASK::TASK_HANDS_UP(uParam0->f_4, -1, Global_35, -1, false);
				}
			}
			break;
		case 0:
		case 5:
			PED::_0x935CF6E42BAF7F4D(uParam0->f_4);
			if (__LIB_0__::func_163(uParam0->f_4, -1519143300))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_4, true, false);
			}
			break;
	}
}

void func_587(var uParam0)
{
	uParam0->f_56 = 1;
	if (__LIB_15__::func_333(uParam0, 2048))
	{
		return;
	}
	switch (uParam0->f_62)
	{
		case 2:
			uParam0->f_56 = 30;
			break;
		case 8:
			uParam0->f_56 = 10;
			break;
		case 9:
		case 10:
		case 11:
			uParam0->f_56 = 5;
			break;
	}
}

bool func_588()
{
	return __LIB_15__::func_226(2048);
}

void func_589(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_58))
	{
		uParam0->f_2031.f_58 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2031.f_50, "ItemList");
	}
	else
	{
		__LIB_15__::func_354(uParam0, &(uParam0->f_2031.f_58));
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_58);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_59))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2031.f_59);
	}
	uParam0->f_2031.f_59 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_50, "ItemListEntries");
	Global_1914319.f_16855.f_31 = uParam0->f_2031.f_58;
}

bool func_590(var uParam0)
{
	__LIB_15__::func_347(&(uParam0->f_148.f_1733), uParam0->f_2, uParam0->f_18, joaat("CATCLOTHINGPOS"));
	__LIB_15__::func_348(&(uParam0->f_148.f_1736), uParam0->f_2, uParam0->f_18, joaat("CATCLOTHINGHEADING"));
	if (__LIB_15__::func_347(&(uParam0->f_148.f_1737), uParam0->f_2, uParam0->f_18, joaat("CATCLOTHINGCAMPOS")))
	{
		__LIB_15__::func_347(&(uParam0->f_148.f_1740), uParam0->f_2, uParam0->f_18, joaat("CATCLOTHINGCAMROT"));
	}
	else
	{
		uParam0->f_148.f_1737 = { 0f, 0f, 0f };
		uParam0->f_148.f_1740 = { 0f, 0f, 0f };
	}
	return true;
}

bool func_591(int iParam0)
{
	int iVar0;
	if (!__LIB_15__::func_299(iParam0))
	{
		return true;
	}
	iVar0 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	if (!MISC::IS_BIT_SET(Global_1051260.f_48[iParam0 /*78*/].f_57, iVar0))
	{
		return false;
	}
	return true;
}

bool func_592(var uParam0, var uParam1, bool bParam2)
{
	char cVar0[32];
	char cVar4[32];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	MISC::_INT_TO_STRING(uParam1->f_3, "%i", &cVar4);
	StringCopy(&cVar0, "Page_", 32);
	StringConCat(&cVar0, &cVar4, 32);
	uParam1->f_4 = uParam1->f_3;
	uParam1->f_4.f_1 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_273, &cVar0, -1);
	uParam1->f_4.f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_4.f_1, "Page");
	switch (*uParam1)
	{
		case 1:
		case 15:
			uParam1->f_4.f_96[0 /*8*/] = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_4.f_1, "Item0", -1);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[0 /*8*/], "TextureName", "");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[0 /*8*/], "TextureDictionary", "");
			break;
		case 0:
			if (bParam2)
			{
				uParam1->f_4.f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_2, "TextureName", "");
				uParam1->f_4.f_6 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_2, "TextureDictionary", "");
				uParam1->f_4.f_3 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_2, "PageHeader", "");
				uParam1->f_4.f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_2, "PageTitle", "");
				uParam1->f_4.f_7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_4.f_2, "ContentPageItemsData");
				iVar11 = 0;
				while (iVar11 < 2)
				{
					MISC::_INT_TO_STRING(iVar11, "%i", &cVar4);
					StringCopy(&cVar0, "ContentPageItemsList", 32);
					StringConCat(&cVar0, &cVar4, 32);
					uParam1->f_4.f_8[iVar11] = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam1->f_4.f_2, &cVar0);
					iVar11++;
				}
				iVar10 = 0;
				while (iVar10 < 16)
				{
					MISC::_INT_TO_STRING(iVar10, "%i", &cVar4);
					StringCopy(&cVar0, "Item", 32);
					StringConCat(&cVar0, &cVar4, 32);
					uParam1->f_4.f_11[iVar10] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_4.f_7, &cVar0);
					iVar11 = (iVar10 / 8);
					DATABINDING::_0x6318FB3BE37E11B3(uParam1->f_4.f_8[iVar11], (iVar10 % 8));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_4.f_8[iVar11], (iVar10 % 8), "content_page_list_item", uParam1->f_4.f_11[iVar10]);
					uParam1->f_4.f_28[iVar10] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_11[iVar10], "Text", &cVar0);
					uParam1->f_4.f_45[iVar10] = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_4.f_11[iVar10], "Selected", false);
					uParam1->f_4.f_62[iVar10] = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_4.f_11[iVar10], "Hovered", false);
					uParam1->f_4.f_79[iVar10] = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_4.f_11[iVar10], "Divider", false);
					iVar10++;
				}
			}
			break;
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
		case 13:
			uParam1->f_4.f_3 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_2, "PageHeader", "");
			iVar8 = uParam1->f_149;
			if (iVar8 > 0)
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					MISC::_INT_TO_STRING(iVar9, "%i", &cVar4);
					StringCopy(&cVar0, "Item", 32);
					StringConCat(&cVar0, &cVar4, 32);
					uParam1->f_4.f_96[iVar9 /*8*/] = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_4.f_1, &cVar0, -1);
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[iVar9 /*8*/], "Header", "");
					if (__LIB_15__::func_308(*uParam1))
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[iVar9 /*8*/], "SubHeader", "");
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[iVar9 /*8*/], "ItemName", "");
					}
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[iVar9 /*8*/], "Description", "");
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[iVar9 /*8*/], "PriceLabel", "");
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_4.f_96[iVar9 /*8*/], "IsSelected", false);
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_4.f_96[iVar9 /*8*/], "Hovered", false);
					if (__LIB_15__::func_281(uParam1->f_136[iVar9 /*3*/]))
					{
						DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_4.f_96[iVar9 /*8*/], "AdvertTextureName", 2);
						DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[iVar9 /*8*/], "AdvertTextureDictionary", "");
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[iVar9 /*8*/], "TextureName", "");
						DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[iVar9 /*8*/], "TextureDictionary", "");
					}
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[iVar9 /*8*/], "ItemPrice", "");
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[iVar9 /*8*/], "ItemOldPrice", "");
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[iVar9 /*8*/], "ItemRank", "");
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_4.f_96[iVar9 /*8*/], "ItemDollarSymbolVisible", false);
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[iVar9 /*8*/], "ItemPriceDollar", "");
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_4.f_96[iVar9 /*8*/], "ItemPriceCents", "");
					iVar9++;
				}
				if (!__LIB_15__::func_308(*uParam1))
				{
					iVar12 = 0;
					while (iVar12 < 6)
					{
						MISC::_INT_TO_STRING(iVar12, "%i", &cVar4);
						StringCopy(&cVar0, "stat", 32);
						StringConCat(&cVar0, &cVar4, 32);
						uParam1->f_4.f_96[0 /*8*/].f_1[iVar12] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_4.f_96[0 /*8*/], &cVar0);
						DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_4.f_96[0 /*8*/].f_1[iVar12], "statLabel", 0);
						DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_4.f_96[0 /*8*/].f_1[iVar12], "invertedCurrentStat", 100);
						DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_4.f_96[0 /*8*/].f_1[iVar12], "invertedPotentialStat", 0);
						iVar12++;
					}
				}
			}
			break;
	}
	return true;
}

bool func_593(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		(*uParam2[iVar0 /*5*/])[0] = -2;
		(*uParam2[iVar0 /*5*/])[3] = -2;
		(*uParam2[iVar0 /*5*/])[2] = -2;
		(*uParam2[iVar0 /*5*/])[1] = -2;
		uParam2->f_115[iVar0 /*2*/].f_1 = -1;
		uParam2->f_115[iVar0 /*2*/] = -1f;
		uParam2->f_81[iVar0 /*2*/].f_1 = -1;
		uParam2->f_81[iVar0 /*2*/] = -1f;
		iVar0++;
	}
	iVar0 = 0;
	switch (iParam1)
	{
		case 1:
		case 14:
		case 15:
			return true;
		case 0:
			iVar0 = 0;
			while (iVar0 < 16)
			{
				(*uParam2[iVar0 /*5*/])[0] = -4;
				(*uParam2[iVar0 /*5*/])[3] = -5;
				(*uParam2[iVar0 /*5*/])[2] = -6;
				(*uParam2[iVar0 /*5*/])[1] = -3;
				iVar0++;
			}
			__LIB_15__::func_310(uParam0, uParam2, 1, 0, 0.75f);
			__LIB_15__::func_310(uParam0, uParam2, 0, 0, 0.75f);
			return true;
		case 3:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				switch (iVar0)
				{
					case 0:
						(*uParam2[iVar0 /*5*/])[0] = -2;
						(*uParam2[iVar0 /*5*/])[3] = 1;
						(*uParam2[iVar0 /*5*/])[2] = -1;
						(*uParam2[iVar0 /*5*/])[1] = 2;
						break;
					case 1:
						(*uParam2[iVar0 /*5*/])[0] = -2;
						(*uParam2[iVar0 /*5*/])[3] = -1;
						(*uParam2[iVar0 /*5*/])[2] = 0;
						(*uParam2[iVar0 /*5*/])[1] = 2;
						break;
					case 2:
						(*uParam2[iVar0 /*5*/])[0] = 1;
						(*uParam2[iVar0 /*5*/])[3] = -1;
						(*uParam2[iVar0 /*5*/])[2] = -1;
						(*uParam2[iVar0 /*5*/])[1] = -2;
						break;
				}
				iVar0++;
			}
			__LIB_15__::func_310(uParam0, uParam2, 1, 0, 0.75f);
			__LIB_15__::func_310(uParam0, uParam2, 1, 2, 1f);
			__LIB_15__::func_310(uParam0, uParam2, 0, 1, 0.75f);
			__LIB_15__::func_310(uParam0, uParam2, 0, 2, 1f);
			return true;
		case 4:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				switch (iVar0)
				{
					case 0:
						(*uParam2[iVar0 /*5*/])[0] = -2;
						(*uParam2[iVar0 /*5*/])[3] = -1;
						(*uParam2[iVar0 /*5*/])[2] = -1;
						(*uParam2[iVar0 /*5*/])[1] = 2;
						break;
					case 1:
						(*uParam2[iVar0 /*5*/])[0] = 0;
						(*uParam2[iVar0 /*5*/])[3] = 2;
						(*uParam2[iVar0 /*5*/])[2] = -1;
						(*uParam2[iVar0 /*5*/])[1] = -2;
						break;
					case 2:
						(*uParam2[iVar0 /*5*/])[0] = 0;
						(*uParam2[iVar0 /*5*/])[3] = -1;
						(*uParam2[iVar0 /*5*/])[2] = 1;
						(*uParam2[iVar0 /*5*/])[1] = -2;
						break;
				}
				iVar0++;
			}
			__LIB_15__::func_310(uParam0, uParam2, 1, 0, 0.75f);
			__LIB_15__::func_310(uParam0, uParam2, 1, 1, 1f);
			__LIB_15__::func_310(uParam0, uParam2, 0, 0, 0.75f);
			__LIB_15__::func_310(uParam0, uParam2, 0, 2, 1f);
			return true;
		case 5:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				switch (iVar0)
				{
					case 0:
						(*uParam2[iVar0 /*5*/])[0] = -2;
						(*uParam2[iVar0 /*5*/])[3] = 1;
						(*uParam2[iVar0 /*5*/])[2] = -1;
						(*uParam2[iVar0 /*5*/])[1] = 2;
						break;
					case 1:
						(*uParam2[iVar0 /*5*/])[0] = -2;
						(*uParam2[iVar0 /*5*/])[3] = -1;
						(*uParam2[iVar0 /*5*/])[2] = 0;
						(*uParam2[iVar0 /*5*/])[1] = 3;
						break;
					case 2:
						(*uParam2[iVar0 /*5*/])[0] = 0;
						(*uParam2[iVar0 /*5*/])[3] = 3;
						(*uParam2[iVar0 /*5*/])[2] = -1;
						(*uParam2[iVar0 /*5*/])[1] = -2;
						break;
					case 3:
						(*uParam2[iVar0 /*5*/])[0] = 1;
						(*uParam2[iVar0 /*5*/])[3] = -1;
						(*uParam2[iVar0 /*5*/])[2] = 2;
						(*uParam2[iVar0 /*5*/])[1] = -2;
						break;
				}
				iVar0++;
			}
			__LIB_15__::func_310(uParam0, uParam2, 1, 0, 0.75f);
			__LIB_15__::func_310(uParam0, uParam2, 1, 2, 1f);
			__LIB_15__::func_310(uParam0, uParam2, 0, 1, 0.75f);
			__LIB_15__::func_310(uParam0, uParam2, 0, 3, 1f);
			return true;
		case 6:
			iVar0 = 0;
			while (iVar0 < 9)
			{
				switch (iVar0)
				{
					case 0:
						(*uParam2[iVar0 /*5*/])[0] = -2;
						(*uParam2[iVar0 /*5*/])[3] = 1;
						(*uParam2[iVar0 /*5*/])[2] = -1;
						(*uParam2[iVar0 /*5*/])[1] = 3;
						break;
					case 1:
						(*uParam2[iVar0 /*5*/])[0] = -2;
						(*uParam2[iVar0 /*5*/])[3] = 2;
						(*uParam2[iVar0 /*5*/])[2] = 0;
						(*uParam2[iVar0 /*5*/])[1] = 4;
						break;
					case 2:
						(*uParam2[iVar0 /*5*/])[0] = -2;
						(*uParam2[iVar0 /*5*/])[3] = -1;
						(*uParam2[iVar0 /*5*/])[2] = 1;
						(*uParam2[iVar0 /*5*/])[1] = 5;
						break;
					case 3:
						(*uParam2[iVar0 /*5*/])[0] = 0;
						(*uParam2[iVar0 /*5*/])[3] = 4;
						(*uParam2[iVar0 /*5*/])[2] = -1;
						(*uParam2[iVar0 /*5*/])[1] = 6;
						break;
					case 4:
						(*uParam2[iVar0 /*5*/])[0] = 1;
						(*uParam2[iVar0 /*5*/])[3] = 5;
						(*uParam2[iVar0 /*5*/])[2] = 3;
						(*uParam2[iVar0 /*5*/])[1] = 7;
						break;
					case 5:
						(*uParam2[iVar0 /*5*/])[0] = 2;
						(*uParam2[iVar0 /*5*/])[3] = -1;
						(*uParam2[iVar0 /*5*/])[2] = 4;
						(*uParam2[iVar0 /*5*/])[1] = 8;
						break;
					case 6:
						(*uParam2[iVar0 /*5*/])[0] = 3;
						(*uParam2[iVar0 /*5*/])[3] = 7;
						(*uParam2[iVar0 /*5*/])[2] = -1;
						(*uParam2[iVar0 /*5*/])[1] = -2;
						break;
					case 7:
						(*uParam2[iVar0 /*5*/])[0] = 4;
						(*uParam2[iVar0 /*5*/])[3] = 8;
						(*uParam2[iVar0 /*5*/])[2] = 6;
						(*uParam2[iVar0 /*5*/])[1] = -2;
						break;
					case 8:
						(*uParam2[iVar0 /*5*/])[0] = 5;
						(*uParam2[iVar0 /*5*/])[3] = -1;
						(*uParam2[iVar0 /*5*/])[2] = 7;
						(*uParam2[iVar0 /*5*/])[1] = -2;
						break;
				}
				iVar0++;
			}
			__LIB_15__::func_310(uParam0, uParam2, 1, 0, 0.75f);
			__LIB_15__::func_310(uParam0, uParam2, 1, 3, 0.5f);
			__LIB_15__::func_310(uParam0, uParam2, 1, 6, 1f);
			__LIB_15__::func_310(uParam0, uParam2, 0, 2, 0.75f);
			__LIB_15__::func_310(uParam0, uParam2, 0, 5, 0.5f);
			__LIB_15__::func_310(uParam0, uParam2, 0, 8, 1f);
			return true;
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			(*uParam2[0 /*5*/])[0] = -2;
			(*uParam2[0 /*5*/])[3] = -1;
			(*uParam2[0 /*5*/])[2] = -1;
			(*uParam2[0 /*5*/])[1] = -2;
			__LIB_15__::func_310(uParam0, uParam2, 1, 0, 0.75f);
			__LIB_15__::func_310(uParam0, uParam2, 0, 0, 0.75f);
			return true;
		default:
			break;
	}
	return false;
}

bool func_594(var uParam0)
{
	int iVar0;
	struct<169> Var1;
	bool bVar186;
	Var1 = 14;
	Var1.f_4.f_8 = 2;
	Var1.f_4.f_11 = 16;
	Var1.f_4.f_28 = 16;
	Var1.f_4.f_45 = 16;
	Var1.f_4.f_62 = 16;
	Var1.f_4.f_79 = 16;
	Var1.f_4.f_96 = 4;
	Var1.f_4.f_96.f_1.f_1 = 6;
	Var1.f_4.f_96.f_1.f_8.f_1 = 6;
	Var1.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var1.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var1.f_136 = 4;
	Var1.f_136.f_1.f_1 = -1;
	Var1.f_136.f_1.f_2 = -1;
	Var1.f_136.f_1.f_3.f_1 = -1;
	Var1.f_136.f_1.f_3.f_2 = -1;
	Var1.f_136.f_1.f_3.f_3.f_1 = -1;
	Var1.f_136.f_1.f_3.f_3.f_2 = -1;
	Var1.f_136.f_1.f_3.f_3.f_3.f_1 = -1;
	Var1.f_136.f_1.f_3.f_3.f_3.f_2 = -1;
	Var1.f_149 = -1;
	Var1.f_150 = -1;
	Var1.f_151 = 16;
	Var1.f_168 = 16;
	if (!__LIB_15__::func_288(uParam0, &Var1))
	{
		return false;
	}
	switch (Var1)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 16)
			{
				if (__LIB_15__::func_243(uParam0) == iVar0)
				{
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Var1.f_4.f_45[iVar0]))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Var1.f_4.f_45[iVar0], true);
					}
				}
				else if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Var1.f_4.f_45[iVar0]))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Var1.f_4.f_45[iVar0], false);
				}
				iVar0++;
			}
			return true;
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
		case 13:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				bVar186 = false;
				if (__LIB_15__::func_243(uParam0) == iVar0 && __LIB_15__::func_285(uParam0, iVar0) != joaat("CLOTHING_STYLE_OUTFIT_HEIST_001"))
				{
					bVar186 = true;
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Var1.f_4.f_96[iVar0 /*8*/], "IsSelected", bVar186);
				iVar0++;
			}
			return true;
		default:
			return false;
	}
	return true;
}

bool func_595(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (!__LIB_0__::func_222(2, iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_596(int iParam0)
{
	int iVar0;
	if (Global_1935689.f_10189 != iParam0)
	{
		Global_1935689.f_10189 = iParam0;
		Global_1935689.f_10196 = 1;
	}
	iVar0 = __LIB_14__::func_933();
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_10203, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_10202, iVar0);
	__LIB_14__::func_934(Global_1935689.f_10189 != -283002878);
}

void func_597(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!__LIB_6__::func_338(1166592425))
	{
		Global_40.f_4283.f_307.f_2 = (Global_40.f_4283.f_307.f_2 + iParam0);
		if (Global_40.f_4283.f_307.f_2 >= 5)
		{
			__LIB_6__::func_339(1166592425);
		}
	}
}

bool func_598(var uParam0, int iParam1, int iParam2)
{
	if (!DATAFILE::_0x603AC35FD4602C76(*uParam0))
	{
		return false;
	}
	uParam0->f_2 = 1827874584;
	uParam0->f_3 = __LIB_15__::func_319(iParam1);
	uParam0->f_4 = iParam2;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	return true;
}

bool func_599(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!__LIB_15__::func_320(iParam0))
	{
		return false;
	}
	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return false;
	}
	iVar472 = 0;
	while (iVar472 < iVar471)
	{
		if (Var0[iVar472 /*47*/] != iParam1)
		{
		}
		else
		{
			*iParam3 = Var0[iVar472 /*47*/].f_3;
			iVar473 = 0;
			while (iVar473 < Var0[iVar472 /*47*/].f_3)
			{
				*(uParam2[iVar473 /*2*/]) = { Var0[iVar472 /*47*/].f_4[iVar473 /*2*/] };
				iVar473++;
			}
			return true;
		}
		iVar472++;
	}
	return false;
}

bool func_600(var uParam0, int iParam1)
{
	bool bVar0;
	bVar0 = __LIB_15__::func_411(uParam0, iParam1);
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_53, __LIB_14__::func_864(iParam1, bVar0));
}

bool func_601(var uParam0, int iParam1)
{
	bool bVar0;
	bVar0 = __LIB_15__::func_411(uParam0, iParam1);
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_53, __LIB_14__::func_865(iParam1, bVar0));
}

int func_602(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		__LIB_15__::func_317(uParam0);
	}
	return 1;
}

int func_603(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_14__::func_694(0);
	if (__LIB_0__::func_144(iVar0, 0))
	{
		INVENTORY::_0x75CFAC49301E134F(uParam0->f_2031.f_68, iVar0, 0);
		__LIB_15__::func_406(uParam0, __LIB_14__::func_452(iVar0));
		__LIB_14__::func_793(uParam0, __LIB_15__::func_391(0));
		__LIB_15__::func_272(uParam0, __LIB_0__::func_776(iVar0));
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_604(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_15__::func_398(uParam0, &iVar0))
	{
		return false;
	}
	iVar1 = __LIB_14__::func_988(317179309);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_58, iParam1, iVar1, iVar0);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(__LIB_14__::func_768(), iParam1, iVar1, iVar0);
	return true;
}

Vector3 func_605(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_15__::func_376(iParam0, uParam2);
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(*uParam2, iVar0, iParam1, &iVar4, &iVar5, &iVar6))
	{
		vVar1.x = iVar4;
		vVar1.f_1 = iVar6;
		vVar1.f_2 = iVar5;
	}
	return vVar1;
}

bool func_606(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_15__::func_396(uParam0, &iVar0))
	{
		return false;
	}
	iVar1 = __LIB_14__::func_988(1837492866);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(__LIB_14__::func_768(), iParam1, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return true;
}

bool func_607(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	if (!__LIB_15__::func_457(uParam0, Param1.f_4, iParam15, Param1, &iVar0))
	{
		return false;
	}
	iVar1 = __LIB_14__::func_988(1119253406);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(__LIB_14__::func_768(), iParam15, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return true;
}

bool func_608(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_15__::func_397(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar1 = __LIB_14__::func_988(-395279071);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(__LIB_14__::func_768(), iParam2, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return true;
}

bool func_609(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	if (!__LIB_0__::func_720(5, &Var0))
	{
		return false;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_BOOL(&uVar5, &Var0);
	return uVar5;
}

int func_610(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	if (!__LIB_0__::func_720(5, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_611(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	var uVar6;
	if (!__LIB_0__::func_720(5, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&iVar5, &Var0);
	MISC::SET_BIT(&uVar6, iVar5);
	return uVar6;
}

bool func_612(var uParam0)
{
	int iVar0;
	struct<7> Var1;
	iVar0 = __LIB_15__::func_415(uParam0);
	if (iVar0 > 0)
	{
		if (uParam0->f_19 + 1 < iVar0)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(*uParam0, __LIB_15__::func_39(uParam0), uParam0->f_19 + 1, &Var1))
			{
				uParam0->f_19++;
				uParam0->f_12 = { Var1 };
				return true;
			}
		}
	}
	return false;
}

int func_613(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bVar6 = ((__LIB_0__::func_192(iParam1, -650091303) || __LIB_0__::func_192(iParam1, -709142106)) && !__LIB_0__::func_192(iParam1, 518788085));
	if (iParam1 == joaat("CLOTHING_MULTI_ITEM_SUPER_CLEAN") || __LIB_14__::func_828(iParam1))
	{
		__LIB_14__::func_827(uParam0, 0);
		return 10;
	}
	else if (iParam1 == joaat("CLOTHING_MULTI_ITEM_TRIM_ALL"))
	{
		iVar7 = 0;
		iVar0 = 0;
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (iVar0 < __LIB_4__::func_605(iVar7) + 1)
			{
				iVar0 = __LIB_4__::func_605(iVar7) + 1;
			}
			iVar7++;
		}
	}
	else if (bVar6)
	{
		iVar0 = 0;
		iVar8 = 0;
		if (!__LIB_15__::func_420(iParam1, &uVar2))
		{
			return 10;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uVar2[iVar1] > iVar8)
			{
				iVar8 = uVar2[iVar1];
			}
			iVar1++;
		}
		iVar0 = (10 - iVar8) + 1;
	}
	else if (__LIB_0__::func_192(iParam1, 1926305489))
	{
		iVar0 = __LIB_4__::func_605(0) + 1;
	}
	else if (__LIB_0__::func_192(iParam1, -248115177))
	{
		iVar0 = __LIB_4__::func_605(1) + 1;
	}
	else if (__LIB_0__::func_192(iParam1, -489098996))
	{
		iVar0 = __LIB_4__::func_605(2) + 1;
	}
	else
	{
		iVar0 = __LIB_4__::func_665() + 1;
	}
	iVar9 = 0;
	if (__LIB_0__::func_192(iParam1, -964485123))
	{
		iVar9 = 3;
	}
	else if (__LIB_0__::func_192(iParam1, 518788085))
	{
		__LIB_12__::func_558(2, &iVar10);
		if (iParam1 == joaat("CLOTHING_MULTI_ITEM_TRIM_STACHE") && (iVar10 == joaat("CLOTHING_ITEM_STACHE_HANDLEBAR") || iVar10 == -355063150))
		{
			iVar9 = 4;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else if (bVar6)
	{
		iVar11 = 10;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uVar2[iVar1] == -1)
			{
			}
			else if ((__LIB_12__::func_562(iVar1) - uVar2[iVar1]) < iVar11)
			{
				iVar11 = (__LIB_12__::func_562(iVar1) - uVar2[iVar1]);
			}
			iVar1++;
		}
		iVar9 = __LIB_0__::func_309(iVar11 + 1, 0, iVar0);
	}
	if (iParam1 == 1156231582 || iParam1 == -1392593303)
	{
		if (__LIB_4__::func_665() >= 2)
		{
			iVar12 = 2;
		}
		else
		{
			iVar12 = 1;
		}
		__LIB_15__::func_414(uParam0, 2, -1, iVar12, 1, 1);
	}
	else if (__LIB_0__::func_192(iParam1, -964485123) || (__LIB_0__::func_192(iParam1, 518788085) && !__LIB_0__::func_192(iParam1, -709142106)))
	{
		__LIB_15__::func_414(uParam0, (10 - iVar9), -1, (iVar0 - iVar9), 1, 1);
	}
	else if (bVar6)
	{
		__LIB_15__::func_414(uParam0, iVar0, -1, iVar9, 1, 1);
	}
	else
	{
		__LIB_15__::func_414(uParam0, (11 - iVar9), -1, (iVar0 - iVar9), 1, 1);
	}
	return iVar9;
}

int func_614(int iParam0)
{
	var uVar0[3];
	int iVar4;
	int iVar5;
	__LIB_15__::func_420(iParam0, &uVar0);
	iVar5 = 0;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (uVar0[iVar4] > uVar0[iVar5])
		{
			iVar5 = iVar4;
		}
		iVar4++;
	}
	return iVar5;
}

bool func_615(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	__LIB_0__::func_720(13, &(Global_1946804.f_954));
	Global_1946804.f_954.f_1 = 0;
	if (!__LIB_15__::func_16(&(Global_1946804.f_954), 1063445323, iParam1, 0))
	{
		return false;
	}
	*uParam0 = iParam1;
	__LIB_15__::func_16(&(Global_1946804.f_954), -1574188157, 0, 0);
	uVar1 = Global_1946804.f_954.f_1;
	uParam0->f_1 = __LIB_15__::func_17(Global_1946804.f_954, -1752779714, 0, 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		Global_1946804.f_954.f_1 = uVar1;
		if (!__LIB_15__::func_16(&(Global_1946804.f_954), -1752779714, iVar0, 0))
		{
			return false;
		}
		__LIB_15__::func_18(Global_1946804.f_954, -1179965762, &(uParam0->f_2[iVar0 /*12*/]), 0);
		__LIB_15__::func_18(Global_1946804.f_954, -641661298, &(uParam0->f_2[iVar0 /*12*/].f_1), 0);
		if (!__LIB_15__::func_323(&(uParam0->f_2[iVar0 /*12*/]), &(Global_1946804.f_954)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_616(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_TAXIDERMIST_ORDERS"):
		case joaat("CI_TAG_FOLDER_LETTERS"):
		case joaat("CI_TAG_FOLDER_TREASURE_MAPS"):
		case joaat("CI_TAG_FOLDER_PHOTOGRAPHS"):
		case joaat("CI_TAG_FOLDER_RECIPE_PAMPHLETS"):
		case joaat("CI_TAG_FOLDER_NEWSPAPER_SCRAPS"):
		case joaat("CI_TAG_FOLDER_BUSINESS_CARDS"):
		case joaat("CI_TAG_FOLDER_NEWSPAPERS"):
		case joaat("CI_TAG_FOLDER_DINOSAUR_NOTES"):
		case joaat("CI_TAG_FOLDER_ROCK_CARVING_NOTES"):
		case joaat("CI_TAG_FOLDER_BOOKS"):
		case joaat("CI_TAG_FOLDER_DRAWINGS"):
		case joaat("CI_TAG_FOLDER_BOUNTY_POSTERS"):
		case joaat("CI_TAG_FOLDER_MAPS"):
		case joaat("CI_TAG_FOLDER_NOTES"):
			return true;
	}
	if (__LIB_15__::func_26(iParam0))
	{
		return true;
	}
	return false;
}

void func_617(var uParam0)
{
	int iVar0;
	if (*uParam0 == 5 || *uParam0 == 7)
	{
		if (uParam0->f_2 == 15 || uParam0->f_2 == 19)
		{
			return;
		}
		iVar0 = 1791176674;
		if ((__LIB_6__::func_76(uParam0->f_3) && uParam0->f_2 != 4) && uParam0->f_2 != 17)
		{
			iVar0 = -1347445791;
		}
		if (uParam0->f_2 == 9)
		{
			HUD::_HIDE_HUD_COMPONENT(439038017);
		}
		if (((__LIB_15__::func_27(uParam0->f_2) || (__LIB_15__::func_151(&(uParam0->f_2319)) && !__LIB_15__::func_27(uParam0->f_2))) && !__LIB_3__::func_563(uParam0->f_2, uParam0->f_3)) && !__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			HUD::_0xC9CAEAEEC1256E54(iVar0);
		}
	}
	else if (uParam0->f_2 == 9)
	{
		HUD::_DISPLAY_HUD_COMPONENT(439038017);
	}
}

void func_618(var uParam0, int iParam1)
{
	int iVar0;
	if (uParam0->f_2 == -1)
	{
		return;
	}
	if (uParam0->f_3 == -1)
	{
		return;
	}
	if (__LIB_0__::func_29(Global_1914319.f_3[uParam0->f_2 /*446*/].f_21))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (Global_1914319.f_3[uParam0->f_2 /*446*/].f_24)
			{
				Global_1914319.f_3[uParam0->f_2 /*446*/].f_24 = 0;
				if (Global_1914319.f_3[uParam0->f_2 /*446*/].f_21 == 74 && PERSCHAR::_0xA00DF706C60173D1(__LIB_0__::func_118(Global_1914319.f_3[uParam0->f_2 /*446*/].f_21)) == joaat("CS_MRPEARSON"))
				{
					iVar0 = PERSCHAR::_0xDC9655D47DEC0353(__LIB_0__::func_118(Global_1914319.f_3[uParam0->f_2 /*446*/].f_21));
					if (iVar0 != 1689938120)
					{
						PERSCHAR::_0x2DF89CD2ED1D0BDE(__LIB_0__::func_118(Global_1914319.f_3[uParam0->f_2 /*446*/].f_21), 1689938120);
					}
					return;
				}
				if (__LIB_6__::func_77(uParam0->f_3, 16))
				{
					__LIB_15__::func_110(__LIB_0__::func_118(Global_1914319.f_3[uParam0->f_2 /*446*/].f_21), __LIB_0__::func_181(), 0);
					__LIB_6__::func_79(uParam0->f_3, 16);
				}
				if (__LIB_0__::func_23() > Global_20710.f_1938[uParam0->f_3])
				{
					iVar0 = PERSCHAR::_0xDC9655D47DEC0353(__LIB_0__::func_118(Global_1914319.f_3[uParam0->f_2 /*446*/].f_21));
					if (iVar0 == -880473644 || iVar0 == 1754194240)
					{
						__LIB_15__::func_110(__LIB_0__::func_118(Global_1914319.f_3[uParam0->f_2 /*446*/].f_21), __LIB_0__::func_181(), 1);
					}
				}
			}
		}
		else
		{
			Global_1914319.f_3[uParam0->f_2 /*446*/].f_24 = 1;
		}
	}
}

void func_619(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar26;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1914319.f_3[uParam0->f_2 /*446*/].f_11);
	}
	else
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1051260.f_48[uParam0->f_2 /*78*/].f_3);
	}
	iVar1 = 0;
	if (!__LIB_15__::func_363(uParam0->f_2, uParam0->f_3, &iVar1))
	{
		return;
	}
	if (iVar1 < 0)
	{
		return;
	}
	iVar26 = 0;
	iVar26 = 0;
	while (iVar26 < iVar1)
	{
		if (__LIB_15__::func_364(uParam0->f_2, uParam0->f_3, iVar26, &uVar2))
		{
			if (!__LIB_15__::func_365(&uVar2, iVar0, 0, 1))
			{
			}
		}
		iVar26++;
	}
}

bool func_620(var uParam0)
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_273))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_273);
	}
	uParam0->f_273 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "DynamicCatalogItems");
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_277))
	{
		uParam0->f_277 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_273, "DynamicCatalogItemsArray");
	}
	if (!__LIB_15__::func_375(uParam0))
	{
		return false;
	}
	return true;
}

bool func_621(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_15__::func_185(uParam0, iParam1);
	if (!__LIB_0__::func_139(iVar0))
	{
		return false;
	}
	if (__LIB_15__::func_251(uParam0, iParam1))
	{
		return __LIB_0__::func_567(iVar0, 1);
	}
	else
	{
		return __LIB_1__::func_732(iVar0, 1);
	}
	return false;
}

int func_622(int iParam0)
{
	if (__LIB_15__::func_445(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_623(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_15__::func_186(uParam0);
	if (__LIB_15__::func_445(iVar0))
	{
		return 53972894;
	}
	return -702860656;
}

void func_624(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	iVar0 = __LIB_15__::func_246(uParam0, iParam1);
	if (iParam1 == 2)
	{
		if (!HUD::_UIPROMPT_IS_VALID(uParam0->f_1261))
		{
			return;
		}
		else
		{
			HUD::_UIPROMPT_SET_ENABLED(uParam0->f_1261, bParam2);
			HUD::_UIPROMPT_SET_VISIBLE(uParam0->f_1261, bParam3);
		}
	}
	else if (!__LIB_0__::func_139(iVar0))
	{
		return;
	}
	else
	{
		__LIB_1__::func_221(iVar0, bParam2, 1);
		__LIB_1__::func_382(iVar0, bParam3, 1);
	}
}

void func_625(var uParam0)
{
	if (Global_1914319.f_19461.f_179)
	{
		CAM::SET_CAM_PARAMS(*uParam0, Global_1914319.f_19461.f_2, Global_1914319.f_19461.f_2.f_3, Global_1914319.f_19461.f_2.f_9, 300, 28, 28, 2, 1, 0);
		Global_1914319.f_19461.f_179 = 0;
		__LIB_14__::func_710(0);
		__LIB_15__::func_402(*uParam0, __LIB_14__::func_784(Global_1914319.f_19461.f_1));
	}
	else
	{
		CAM::SET_CAM_PARAMS(*uParam0, Global_1914319.f_19461.f_22[0 /*12*/], Global_1914319.f_19461.f_22[0 /*12*/].f_3, Global_1914319.f_19461.f_22[0 /*12*/].f_9, 300, 28, 28, 2, 1, 0);
		Global_1914319.f_19461.f_179 = 1;
		__LIB_15__::func_402(*uParam0, 0);
	}
}

int func_626()
{
	return __LIB_15__::func_403(&(Global_1946804.f_1497));
}

bool func_627(var uParam0)
{
	struct<7> Var0;
	if ((uParam0->f_42 - 1) >= 0)
	{
		if (!__LIB_15__::func_384(uParam0, &Var0))
		{
			return false;
		}
		uParam0->f_31[uParam0->f_42] = -1;
		uParam0->f_20[uParam0->f_42] = 0;
		uParam0->f_42 = (uParam0->f_42 - 1);
		uParam0->f_12 = { Var0 };
		if (uParam0->f_42 < 0 || uParam0->f_42 >= 10)
		{
			uParam0->f_19 = 0;
		}
		else
		{
			uParam0->f_19 = uParam0->f_20[uParam0->f_42];
		}
		return true;
	}
	return false;
}

void func_628(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_14__::func_831();
	iVar1 = __LIB_14__::func_832(uParam0);
	bVar2 = (iVar0 != 0 || (bParam1 && iVar1 != iVar0));
	if (bVar2)
	{
		if (bParam1)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (iVar1 + iVar0);
		}
		__LIB_14__::func_833(uParam0, iVar1);
		__LIB_14__::func_834(0);
	}
	__LIB_15__::func_392(uParam0, __LIB_14__::func_832(uParam0));
}

void func_629(bool bParam0)
{
	if (!HUD::_UIPROMPT_IS_VALID(Global_1914319.f_19461.f_180) && bParam0)
	{
		Global_1914319.f_19461.f_180 = HUD::_UIPROMPT_REGISTER_BEGIN();
		HUD::_0xF4A5C4509BF923B1(Global_1914319.f_19461.f_180, 0);
		HUD::_UIPROMPT_SET_TEXT(Global_1914319.f_19461.f_180, "WARDROBE_INSPECT_PROMPT");
		HUD::_UIPROMPT_SET_CONTROL_ACTION(Global_1914319.f_19461.f_180, joaat("INPUT_INSPECT_ZOOM"));
		HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(Global_1914319.f_19461.f_180);
		HUD::_UIPROMPT_REGISTER_END(Global_1914319.f_19461.f_180);
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1914319.f_19461.f_180))
	{
		if (!__LIB_15__::func_404(Global_1914319.f_19461.f_1))
		{
			HUD::_UIPROMPT_SET_ENABLED(Global_1914319.f_19461.f_180, false);
			HUD::_UIPROMPT_SET_VISIBLE(Global_1914319.f_19461.f_180, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_ENABLED(Global_1914319.f_19461.f_180, bParam0);
			HUD::_UIPROMPT_SET_VISIBLE(Global_1914319.f_19461.f_180, bParam0);
		}
	}
}

int func_630(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (__LIB_15__::func_423(iParam0))
		{
			return -570078785;
		}
		else
		{
			return -915411861;
		}
	}
	return iParam1;
}

int func_631(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_918(iParam0))
	{
		return 0;
	}
	if (!__LIB_2__::func_803(iParam0, &iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = Global_1914319.f_3[iParam0 /*446*/].f_10;
	}
	else
	{
		iVar1 = Global_1051260.f_48[iParam0 /*78*/].f_16;
	}
	__LIB_15__::func_424(iVar0, iParam1, iVar0, bParam2, __LIB_14__::func_632(iVar1), 0, iParam3);
	return 1;
}

int func_632(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<169> Var4;
	Var4 = 14;
	Var4.f_4.f_8 = 2;
	Var4.f_4.f_11 = 16;
	Var4.f_4.f_28 = 16;
	Var4.f_4.f_45 = 16;
	Var4.f_4.f_62 = 16;
	Var4.f_4.f_79 = 16;
	Var4.f_4.f_96 = 4;
	Var4.f_4.f_96.f_1.f_1 = 6;
	Var4.f_4.f_96.f_1.f_8.f_1 = 6;
	Var4.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var4.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var4.f_136 = 4;
	Var4.f_136.f_1.f_1 = -1;
	Var4.f_136.f_1.f_2 = -1;
	Var4.f_136.f_1.f_3.f_1 = -1;
	Var4.f_136.f_1.f_3.f_2 = -1;
	Var4.f_136.f_1.f_3.f_3.f_1 = -1;
	Var4.f_136.f_1.f_3.f_3.f_2 = -1;
	Var4.f_136.f_1.f_3.f_3.f_3.f_1 = -1;
	Var4.f_136.f_1.f_3.f_3.f_3.f_2 = -1;
	Var4.f_149 = -1;
	Var4.f_150 = -1;
	Var4.f_151 = 16;
	Var4.f_168 = 16;
	__LIB_15__::func_288(uParam0, &Var4);
	iVar1 = __LIB_15__::func_415(&(uParam0->f_223));
	iVar3 = __LIB_0__::func_81(&(uParam0->f_223));
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = __LIB_14__::func_855(iVar3, Var4.f_133, iVar0);
		if (iVar2 == Var4.f_134)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_633(var uParam0, int iParam1, int iParam2)
{
	__LIB_15__::func_410(uParam0, iParam1, HUD::_GET_LABEL_TEXT_BY_HASH(iParam2));
}

void func_634(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bVar0 = __LIB_15__::func_411(uParam0, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_53, __LIB_14__::func_864(iParam1, bVar0), bParam2);
}

void func_635(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bVar0 = __LIB_15__::func_411(uParam0, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_53, __LIB_14__::func_865(iParam1, bVar0), bParam2);
}

int func_636(var uParam0, bool bParam1)
{
	int iVar0;
	__LIB_14__::func_796(uParam0, __LIB_12__::func_475(&(uParam0->f_2031)));
	iVar0 = 0;
	if (!__LIB_15__::func_413(uParam0, __LIB_15__::func_31(uParam0), &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	return 1;
}

int func_637(var uParam0, bool bParam1)
{
	int iVar0;
	__LIB_14__::func_796(uParam0, __LIB_12__::func_475(&(uParam0->f_2031)));
	iVar0 = 0;
	if (!__LIB_15__::func_413(uParam0, __LIB_15__::func_31(uParam0), &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	__LIB_14__::func_887(uParam0, 0);
	return 1;
}

bool func_638(var uParam0)
{
	int iVar0;
	struct<7> Var1;
	iVar0 = __LIB_15__::func_415(uParam0);
	if (iVar0 > 0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(*uParam0, uParam0->f_12, 0, &Var1))
		{
			uParam0->f_31[uParam0->f_42] = uParam0->f_12;
			uParam0->f_20[uParam0->f_42] = uParam0->f_19;
			uParam0->f_42++;
			uParam0->f_12 = { Var1 };
			uParam0->f_19 = 0;
			return true;
		}
	}
	return false;
}

bool func_639(int iParam0, var uParam1)
{
	int iVar0;
	struct<7> Var1;
	iVar0 = __LIB_15__::func_415(uParam1);
	if (iVar0 > 0)
	{
		if (iParam0 >= 0 && iParam0 < iVar0)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(*uParam1, __LIB_15__::func_39(uParam1), iParam0, &Var1))
			{
				uParam1->f_19 = iParam0;
				uParam1->f_12 = { Var1 };
				return true;
			}
		}
	}
	return false;
}

int func_640(var uParam0, int iParam1)
{
	return __LIB_15__::func_416(&(uParam0->f_2031), iParam1);
}

void func_641(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	iVar0 = __LIB_15__::func_372(uParam1);
	uParam0->f_11 = iVar0;
	*uParam0 = __LIB_15__::func_40(bParam2);
	uParam0->f_12 = __LIB_15__::func_31(uParam1);
	uParam0->f_7 = __LIB_15__::func_391(bParam2);
	uParam0->f_8 = __LIB_15__::func_419(bParam2);
	uParam0->f_9 = __LIB_14__::func_694(bParam2);
	uParam0->f_1 = __LIB_15__::func_393(bParam2);
	uParam0->f_2 = __LIB_14__::func_820(bParam2);
	uParam0->f_10 = __LIB_12__::func_480(bParam2);
	uParam0->f_13 = __LIB_15__::func_301(bParam2);
	uParam0->f_14 = __LIB_15__::func_302(bParam2);
	uParam0->f_15 = __LIB_14__::func_823(uParam1);
	uParam0->f_16 = __LIB_14__::func_825(uParam1);
	uParam0->f_3 = { __LIB_14__::func_895(&(uParam0->f_10)) };
	uParam0->f_13 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(__LIB_12__::func_480(bParam2), __LIB_14__::func_896());
	uParam0->f_14 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(__LIB_12__::func_480(bParam2), __LIB_14__::func_897());
}

int func_642(int iParam0)
{
	var uVar0[3];
	int iVar4;
	int iVar5;
	__LIB_15__::func_420(iParam0, &uVar0);
	iVar5 = 0;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (uVar0[iVar4] > uVar0[iVar5])
		{
			iVar5 = iVar4;
		}
		iVar4++;
	}
	return uVar0[iVar5];
}

bool func_643(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;
	if (!__LIB_15__::func_429(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { __LIB_0__::func_949(0) };
	if (!__LIB_14__::func_932(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_850(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

void func_644(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_7__::func_651(iParam0, Global_40.f_4283);
	__LIB_7__::func_597(&iVar0);
	if (__LIB_7__::func_596(iVar0, Global_1357549.f_1492))
	{
		Global_1357549.f_1492 = iVar0;
	}
}

int func_645(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		__LIB_15__::func_431(uParam0);
	}
	return 1;
}

bool func_646(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_15__::func_433(uParam0, &iVar0))
	{
		return false;
	}
	iVar1 = __LIB_14__::func_988(2073652352);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_58, iParam1, iVar1, iVar0);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(__LIB_14__::func_768(), iParam1, iVar1, iVar0);
	return true;
}

int func_647(bool bParam0)
{
	return (__LIB_15__::func_434(bParam0) - 1);
}

bool func_648(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0.f_9 = -1591664384;
	if (!__LIB_15__::func_435(&Var0))
	{
		return false;
	}
	if (!__LIB_0__::func_814(Var0, joaat("SLOTID_HORSE_SADDLE"), uParam0, iParam1))
	{
		return false;
	}
	return true;
}

bool func_649(int iParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_15__::func_436(iParam0, &Var0))
	{
		return false;
	}
	if (!__LIB_0__::func_814(Var0, joaat("SLOTID_HORSE_SADDLE"), uParam1, iParam2))
	{
		return false;
	}
	return true;
}

int func_650(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	Var4 = 1226838104;
	if (__LIB_0__::func_2() == -1)
	{
		Var4 = -380731322;
	}
	Var4.f_1 = -367421157;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	__LIB_14__::func_989();
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar1 = __LIB_0__::func_161(iVar0, 1);
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar3 = __LIB_14__::func_990(iVar0, Var4);
				if (iVar3 == -1)
				{
				}
				else
				{
					__LIB_15__::func_437(uParam0->f_1[iVar1 /*3*/], uParam0->f_1[iVar1 /*3*/].f_1, iVar3, Var4);
				}
			}
		}
	}
	Global_1946804.f_1329 = 1;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (Global_1946804.f_1329.f_1[iVar2 /*9*/].f_7 >= 2)
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

bool func_651(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_15__::func_458(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar1 = __LIB_14__::func_988(420195545);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(__LIB_14__::func_768(), iParam2, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return true;
}

int func_652(var uParam0, int iParam1, int iParam2, var uParam3)
{
	struct<6> Var0;
	int iVar7;
	int iVar8;
	*uParam3 = 0;
	if (!__LIB_14__::func_693(iParam1))
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam1, iParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			iVar7 = -1;
			iVar8 = 0;
			while (iVar8 < Var0.f_5)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(iParam1, iParam2, iVar8, &iVar7))
				{
					if (__LIB_15__::func_439(uParam0, iParam1, iVar7, uParam3))
					{
						return 1;
					}
				}
				iVar8++;
			}
		}
	}
	return 0;
}

bool func_653(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 1573112293))
	{
		return __LIB_15__::func_56(iParam1);
	}
	switch (iParam0)
	{
		case -77448735:
			if (__LIB_7__::func_795(iParam1))
			{
				return __LIB_15__::func_56(iParam1);
			}
			break;
		case -1393202694:
		case 2041469314:
			return __LIB_15__::func_56(iParam1);
		case 1802292908:
			return __LIB_7__::func_579(16);
		case 81053684:
			return __LIB_7__::func_579(4);
		case -525676072:
			return __LIB_7__::func_579(8);
		case 1779021115:
			if (__LIB_0__::func_144(iParam1, 0))
			{
				if (iParam1 == joaat("WEAPON_KIT_CAMERA"))
				{
					return __LIB_7__::func_579(64);
				}
			}
			return __LIB_7__::func_579(32);
		case -1823706425:
			return __LIB_7__::func_579(128);
		case -854348463:
			return __LIB_7__::func_579(16384);
		default:
			if (__LIB_0__::func_144(iParam1, 0))
			{
				if (__LIB_0__::func_192(iParam1, 1192444843) || __LIB_0__::func_192(iParam1, -1540973036))
				{
					return __LIB_7__::func_579(4096);
				}
				else if (__LIB_0__::func_192(iParam1, 1919582297))
				{
					return __LIB_7__::func_579(8192);
				}
				else if (__LIB_0__::func_192(iParam1, 1147021565))
				{
					return __LIB_7__::func_579(2);
				}
				switch (iParam1)
				{
					case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
					case -1448210800: /* GXTEntry: "Crafting Tools" */
						return __LIB_7__::func_579(2048);
					case joaat("KIT_HORSE_BRUSH"):
						return __LIB_7__::func_579(1024);
				}
			}
			return __LIB_7__::func_579(1);
	}
	return __LIB_7__::func_579(1);
}

void func_654(var uParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	struct<6> Var22;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	int iVar33;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_66))
	{
		uParam0->f_2031.f_66 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2031.f_52, "SaddleStats");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_66);
	}
	if (!__LIB_14__::func_903(iParam1))
	{
		return;
	}
	Var0.f_1 = 20;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam1, &Var0))
	{
		return;
	}
	if (Var0 <= 0)
	{
		return;
	}
	iVar33 = 0;
	while (iVar33 < Var0)
	{
		if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar33], &Var22))
		{
		}
		else
		{
			switch (Var22.f_1)
			{
				case -225223329:
					fVar29 = Var22.f_5;
					break;
				case 1167068375:
					fVar30 = Var22.f_5;
					break;
				case -845587290:
					fVar31 = Var22.f_5;
					break;
				case 1605773431:
					fVar32 = Var22.f_5;
					break;
			}
		}
		iVar33++;
	}
	if (fVar29 != 0f)
	{
		__LIB_15__::func_442(uParam0, iParam1, iParam2, -225223329, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), fVar29, 1, "RPG_Horse_Health");
	}
	if (fVar30 != 0f)
	{
		__LIB_15__::func_442(uParam0, iParam1, iParam2, 1167068375, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), fVar30, 1, "RPG_Horse_Stamina");
	}
	if (fVar31 != 0f)
	{
		__LIB_15__::func_442(uParam0, iParam1, iParam2, -845587290, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), fVar31, 1, "RPG_Horse_Stamina");
	}
	if (fVar32 != 0f)
	{
		__LIB_15__::func_442(uParam0, iParam1, iParam2, 1605773431, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_REGEN_RATE"), fVar32, 0, "RPG_Horse_Stamina");
	}
}

bool func_655(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	*uParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_59, __LIB_4__::func_546(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam2, __LIB_12__::func_481(), 420195545);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam2, __LIB_14__::func_847(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam2, __LIB_14__::func_922(), __LIB_12__::func_484(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, "showQuantity", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, "forSale", true);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, "owned", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, "locked", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, "soldOut", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, "useGoldPrice", false);
	bVar1 = __LIB_15__::func_464(uParam0->f_18, iParam1, &uVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, __LIB_14__::func_909(), bVar1);
	iVar2 = __LIB_14__::func_994(uParam0->f_18, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam2, "price", iVar2);
	return true;
}

bool func_656(var uParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	Var0 = { __LIB_15__::func_53(0) };
	iVar5 = __LIB_15__::func_461(bParam1);
	Var6.f_9 = -1591664384;
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (__LIB_15__::func_462(iVar4, &Var6, bParam1))
		{
			if (INVENTORY::_0x4C543D5DFCD2DAFD(&Var0, uParam0))
			{
				return true;
			}
		}
		iVar4++;
	}
	return false;
}

bool func_657(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		return false;
	}
	if (!__LIB_15__::func_143(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_75(&(Global_1051260.f_48[iParam0 /*78*/].f_72)) || __LIB_0__::func_265(&(Global_1051260.f_48[iParam0 /*78*/].f_72)) >= 30f)
	{
		if (PED::IS_PED_SHOOTING(Global_1225639.f_8) || Global_1955569.f_992[5])
		{
			if (__LIB_0__::func_75(&(Global_1051260.f_48[iParam0 /*78*/].f_72)))
			{
				__LIB_1__::func_148(&(Global_1051260.f_48[iParam0 /*78*/].f_72));
			}
			else
			{
				__LIB_1__::func_283(&(Global_1051260.f_48[iParam0 /*78*/].f_72), 0);
			}
		}
		if (!__LIB_0__::func_75(&(Global_1051260.f_48[iParam0 /*78*/].f_72)) || __LIB_0__::func_265(&(Global_1051260.f_48[iParam0 /*78*/].f_72)) >= 30f)
		{
			__LIB_0__::func_37(&(Global_1051260.f_48[iParam0 /*78*/].f_72));
			return false;
		}
		else if (BUILTIN::VDIST(Global_36, Global_1051260.f_48[iParam0 /*78*/].f_3) < 30f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_658(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	iVar0 = __LIB_15__::func_185(uParam0, iParam1);
	if (!__LIB_0__::func_139(iVar0))
	{
		return;
	}
	__LIB_1__::func_221(iVar0, bParam2, 1);
	__LIB_1__::func_382(iVar0, bParam3, 1);
}

bool func_659(var uParam0)
{
	bool bVar0;
	if ((uParam0->f_148.f_1 >= 5 && uParam0->f_148.f_1 != 23) && uParam0->f_148.f_1 != 24)
	{
		return false;
	}
	if (uParam0->f_19 == 3)
	{
		return false;
	}
	if (!__LIB_15__::func_27(uParam0->f_2))
	{
		return true;
	}
	if (!__LIB_14__::func_134(uParam0->f_2))
	{
		return true;
	}
	if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
	{
		return true;
	}
	bVar0 = false;
	bVar0 = __LIB_4__::func_922(uParam0->f_2, 268435456);
	if (!bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_1947, true, 0) == 0)
	{
		return true;
	}
	if (uParam0->f_7)
	{
		if (__LIB_15__::func_233(&(uParam0->f_148.f_4)))
		{
			return true;
		}
	}
	return false;
}

void func_660(var uParam0, int iParam1)
{
	if (__LIB_0__::func_139(uParam0->f_20[iParam1 /*8*/]))
	{
		__LIB_1__::func_281(&(uParam0->f_20[iParam1 /*8*/]), 1, 1);
	}
	__LIB_15__::func_236(uParam0, iParam1, 2);
}

void func_661(var uParam0)
{
	if (Global_1914319.f_18975 != -1 && __LIB_2__::func_419(uParam0->f_101, 0) == Global_1914319.f_18975)
	{
		__LIB_3__::func_157(&(uParam0->f_8[2 /*17*/]), &(Global_1914319.f_18971), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		uParam0->f_6 = 1;
	}
	else
	{
		__LIB_4__::func_454(&(uParam0->f_8[2 /*17*/]), 1);
		uParam0->f_6 = 0;
	}
}

int func_662(var uParam0)
{
	if (__LIB_0__::func_81(uParam0) != 8 || __LIB_15__::func_178(uParam0))
	{
		return 0;
	}
	if (uParam0->f_268 == 0 || uParam0->f_268 == 1)
	{
		if (!__LIB_15__::func_277(uParam0, 8))
		{
			return 0;
		}
	}
	else if (!__LIB_15__::func_277(uParam0, 9))
	{
		return 0;
	}
	__LIB_15__::func_134(uParam0, 0, 0);
	__LIB_15__::func_473(uParam0, 0);
	uParam0->f_1216.f_33 = 0;
	__LIB_0__::func_37(&(uParam0->f_1216.f_34));
	AUDIO::PLAY_SOUND_FRONTEND("BACK", "HUD_SHOP_SOUNDSET", true, 0);
	__LIB_0__::func_19(uParam0, 15);
	return 1;
}

void func_663(var uParam0)
{
	if (Global_1914319.f_19461.f_1 != 0)
	{
		if (Global_1914319.f_19461.f_179)
		{
			__LIB_15__::func_402(*uParam0, 0);
		}
		else
		{
			__LIB_15__::func_402(*uParam0, __LIB_14__::func_784(Global_1914319.f_19461.f_1));
		}
	}
	if (!__LIB_14__::func_785(uParam0))
	{
		return;
	}
	__LIB_14__::func_786((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_LOOK_UD")) * -1f), PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_LOOK_LR")));
	__LIB_15__::func_73(&(Global_1914319.f_19461.f_184), &(Global_1914319.f_19461.f_2.f_6), &(Global_1914319.f_19461.f_187), &(Global_1914319.f_19461.f_190), &(Global_1914319.f_19461.f_191), &(Global_1914319.f_19461.f_192), &(Global_1914319.f_19461.f_193), Global_1914319.f_19461.f_182, Global_1914319.f_19461.f_183, -10f, 10f, -10f, 10f);
	CAM::SET_CAM_PARAMS(*uParam0, Global_1914319.f_19461.f_184, Global_1914319.f_19461.f_187, Global_1914319.f_19461.f_2.f_9, 0, 1, 1, 2, 0, 0);
}

void func_664(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	vector3 vVar14;
	vector3 vVar17;
	float fVar20;
	vector3 vVar21;
	vector3 vVar24;
	float fVar27;
	vector3 vVar28;
	vector3 vVar31;
	float fVar34;
	vector3 vVar35;
	vector3 vVar38;
	float fVar41;
	vector3 vVar42;
	vector3 vVar45;
	vector3 vVar48;
	vector3 vVar51;
	vector3 vVar54;
	vector3 vVar57;
	vector3 vVar60;
	vector3 vVar63;
	vector3 vVar66;
	vector3 vVar69;
	vector3 vVar72;
	float fVar75;
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	vector3 vVar81;
	vector3 vVar84;
	float fVar87;
	if (iParam1 != -1 && __LIB_15__::func_347(&vVar45, iParam1, iParam2, -642706190))
	{
		__LIB_15__::func_347(&vVar51, iParam1, iParam2, -1507145287);
		__LIB_15__::func_347(&vVar57, iParam1, iParam2, 872797902);
		__LIB_15__::func_347(&vVar63, iParam1, iParam2, 939367811);
		__LIB_15__::func_347(&vVar69, iParam1, iParam2, -776836338);
		__LIB_15__::func_347(&vVar0, iParam1, iParam2, 1891724909);
		__LIB_15__::func_347(&vVar7, iParam1, iParam2, 26009546);
		__LIB_15__::func_347(&vVar14, iParam1, iParam2, -1287161638);
		__LIB_15__::func_347(&vVar21, iParam1, iParam2, joaat("CHAPSCAMPOSOFFSET"));
		__LIB_15__::func_347(&vVar28, iParam1, iParam2, 639395495);
		__LIB_15__::func_347(&vVar35, iParam1, iParam2, -1034669384);
		__LIB_15__::func_347(&vVar81, iParam1, iParam2, 1091942092);
	}
	else
	{
		vVar45 = { __LIB_14__::func_878(1) };
		vVar51 = { __LIB_14__::func_878(2) };
		vVar57 = { __LIB_14__::func_878(3) };
		vVar63 = { __LIB_14__::func_878(4) };
		vVar69 = { __LIB_14__::func_878(5) };
		vVar0 = { __LIB_14__::func_878(7) };
		vVar7 = { __LIB_14__::func_878(6) };
		vVar14 = { __LIB_14__::func_878(10) };
		vVar21 = { __LIB_14__::func_878(8) };
		vVar28 = { __LIB_14__::func_878(9) };
		vVar35 = { __LIB_14__::func_878(11) };
		vVar81 = { __LIB_14__::func_878(12) };
	}
	Global_1914319.f_19461.f_22[1 /*12*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar45) };
	Global_1914319.f_19461.f_22[2 /*12*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar51) };
	Global_1914319.f_19461.f_22[3 /*12*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar57) };
	Global_1914319.f_19461.f_22[4 /*12*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar63) };
	Global_1914319.f_19461.f_22[5 /*12*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar69) };
	Global_1914319.f_19461.f_22[7 /*12*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar0) };
	Global_1914319.f_19461.f_22[6 /*12*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar7) };
	Global_1914319.f_19461.f_22[10 /*12*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar14) };
	Global_1914319.f_19461.f_22[8 /*12*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar21) };
	Global_1914319.f_19461.f_22[9 /*12*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar28) };
	Global_1914319.f_19461.f_22[11 /*12*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar35) };
	Global_1914319.f_19461.f_22[12 /*12*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar81) };
	if (iParam1 != -1 && __LIB_15__::func_347(&vVar48, iParam1, iParam2, 222482482))
	{
		__LIB_15__::func_347(&vVar54, iParam1, iParam2, -718905633);
		__LIB_15__::func_347(&vVar60, iParam1, iParam2, 1700485506);
		__LIB_15__::func_347(&vVar66, iParam1, iParam2, 1998419372);
		__LIB_15__::func_347(&vVar72, iParam1, iParam2, 1259760656);
		__LIB_15__::func_347(&vVar3, iParam1, iParam2, 1327962479);
		__LIB_15__::func_347(&vVar10, iParam1, iParam2, -991979571);
		__LIB_15__::func_347(&vVar17, iParam1, iParam2, 1380636221);
		__LIB_15__::func_347(&vVar24, iParam1, iParam2, 797889520);
		__LIB_15__::func_347(&vVar31, iParam1, iParam2, -1676223069);
		__LIB_15__::func_347(&vVar38, iParam1, iParam2, -717624061);
		__LIB_15__::func_347(&vVar42, iParam1, iParam2, -1335042021);
		__LIB_15__::func_347(&vVar84, iParam1, iParam2, -1154246256);
	}
	else
	{
		vVar42 = { __LIB_14__::func_879(0) };
		vVar48 = { __LIB_14__::func_879(1) };
		vVar54 = { __LIB_14__::func_879(2) };
		vVar60 = { __LIB_14__::func_879(3) };
		vVar66 = { __LIB_14__::func_879(4) };
		vVar72 = { __LIB_14__::func_879(5) };
		vVar3 = { __LIB_14__::func_879(7) };
		vVar10 = { __LIB_14__::func_879(6) };
		vVar17 = { __LIB_14__::func_879(10) };
		vVar24 = { __LIB_14__::func_879(8) };
		vVar31 = { __LIB_14__::func_879(9) };
		vVar38 = { __LIB_14__::func_879(11) };
		vVar84 = { __LIB_14__::func_879(12) };
	}
	vVar42 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar42) };
	vVar48 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar48) };
	vVar54 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar54) };
	vVar60 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar60) };
	vVar66 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar66) };
	vVar72 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar72) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) };
	vVar10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar10) };
	vVar17 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar17) };
	vVar24 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar24) };
	vVar31 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar31) };
	vVar38 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar38) };
	vVar84 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar84) };
	Global_1914319.f_19461.f_22[0 /*12*/].f_6 = { vVar42 };
	Global_1914319.f_19461.f_22[1 /*12*/].f_6 = { vVar48 };
	Global_1914319.f_19461.f_22[2 /*12*/].f_6 = { vVar54 };
	Global_1914319.f_19461.f_22[3 /*12*/].f_6 = { vVar60 };
	Global_1914319.f_19461.f_22[4 /*12*/].f_6 = { vVar66 };
	Global_1914319.f_19461.f_22[5 /*12*/].f_6 = { vVar72 };
	Global_1914319.f_19461.f_22[7 /*12*/].f_6 = { vVar3 };
	Global_1914319.f_19461.f_22[6 /*12*/].f_6 = { vVar10 };
	Global_1914319.f_19461.f_22[10 /*12*/].f_6 = { vVar17 };
	Global_1914319.f_19461.f_22[8 /*12*/].f_6 = { vVar24 };
	Global_1914319.f_19461.f_22[9 /*12*/].f_6 = { vVar31 };
	Global_1914319.f_19461.f_22[11 /*12*/].f_6 = { vVar38 };
	Global_1914319.f_19461.f_22[12 /*12*/].f_6 = { vVar84 };
	Global_1914319.f_19461.f_22[1 /*12*/].f_3 = { __LIB_15__::func_43(Global_1914319.f_19461.f_22[1 /*12*/], vVar48) };
	Global_1914319.f_19461.f_22[2 /*12*/].f_3 = { __LIB_15__::func_43(Global_1914319.f_19461.f_22[2 /*12*/], vVar54) };
	Global_1914319.f_19461.f_22[3 /*12*/].f_3 = { __LIB_15__::func_43(Global_1914319.f_19461.f_22[3 /*12*/], vVar60) };
	Global_1914319.f_19461.f_22[4 /*12*/].f_3 = { __LIB_15__::func_43(Global_1914319.f_19461.f_22[4 /*12*/], vVar66) };
	Global_1914319.f_19461.f_22[5 /*12*/].f_3 = { __LIB_15__::func_43(Global_1914319.f_19461.f_22[5 /*12*/], vVar72) };
	Global_1914319.f_19461.f_22[7 /*12*/].f_3 = { __LIB_15__::func_43(Global_1914319.f_19461.f_22[7 /*12*/], vVar3) };
	Global_1914319.f_19461.f_22[6 /*12*/].f_3 = { __LIB_15__::func_43(Global_1914319.f_19461.f_22[6 /*12*/], vVar10) };
	Global_1914319.f_19461.f_22[10 /*12*/].f_3 = { __LIB_15__::func_43(Global_1914319.f_19461.f_22[10 /*12*/], vVar17) };
	Global_1914319.f_19461.f_22[8 /*12*/].f_3 = { __LIB_15__::func_43(Global_1914319.f_19461.f_22[8 /*12*/], vVar24) };
	Global_1914319.f_19461.f_22[9 /*12*/].f_3 = { __LIB_15__::func_43(Global_1914319.f_19461.f_22[9 /*12*/], vVar31) };
	Global_1914319.f_19461.f_22[11 /*12*/].f_3 = { __LIB_15__::func_43(Global_1914319.f_19461.f_22[11 /*12*/], vVar38) };
	Global_1914319.f_19461.f_22[12 /*12*/].f_3 = { __LIB_15__::func_43(Global_1914319.f_19461.f_22[12 /*12*/], vVar84) };
	if (iParam1 != -1 && __LIB_15__::func_348(&fVar75, iParam1, iParam2, -1227997166))
	{
		__LIB_15__::func_348(&fVar76, iParam1, iParam2, 1325448948);
		__LIB_15__::func_348(&fVar77, iParam1, iParam2, -2091857109);
		__LIB_15__::func_348(&fVar78, iParam1, iParam2, 967624365);
		__LIB_15__::func_348(&fVar79, iParam1, iParam2, 1865698850);
		__LIB_15__::func_348(&fVar80, iParam1, iParam2, 743589651);
		__LIB_15__::func_348(&fVar6, iParam1, iParam2, 856434605);
		__LIB_15__::func_348(&fVar13, iParam1, iParam2, 1222222663);
		__LIB_15__::func_348(&fVar20, iParam1, iParam2, -1399406742);
		__LIB_15__::func_348(&fVar27, iParam1, iParam2, -1889746575);
		__LIB_15__::func_348(&fVar34, iParam1, iParam2, 1996639706);
		__LIB_15__::func_348(&fVar41, iParam1, iParam2, 171259336);
		__LIB_15__::func_348(&fVar87, iParam1, iParam2, 1430427185);
	}
	else
	{
		fVar75 = __LIB_14__::func_880(0);
		fVar76 = __LIB_14__::func_880(1);
		fVar77 = __LIB_14__::func_880(2);
		fVar78 = __LIB_14__::func_880(3);
		fVar79 = __LIB_14__::func_880(4);
		fVar80 = __LIB_14__::func_880(5);
		fVar6 = __LIB_14__::func_880(7);
		fVar13 = __LIB_14__::func_880(6);
		fVar20 = __LIB_14__::func_880(10);
		fVar27 = __LIB_14__::func_880(8);
		fVar34 = __LIB_14__::func_880(9);
		fVar41 = __LIB_14__::func_880(11);
		fVar87 = __LIB_14__::func_880(12);
	}
	Global_1914319.f_19461.f_22[0 /*12*/].f_9 = fVar75;
	Global_1914319.f_19461.f_22[1 /*12*/].f_9 = fVar76;
	Global_1914319.f_19461.f_22[2 /*12*/].f_9 = fVar77;
	Global_1914319.f_19461.f_22[3 /*12*/].f_9 = fVar78;
	Global_1914319.f_19461.f_22[4 /*12*/].f_9 = fVar79;
	Global_1914319.f_19461.f_22[5 /*12*/].f_9 = fVar80;
	Global_1914319.f_19461.f_22[7 /*12*/].f_9 = fVar6;
	Global_1914319.f_19461.f_22[6 /*12*/].f_9 = fVar13;
	Global_1914319.f_19461.f_22[10 /*12*/].f_9 = fVar20;
	Global_1914319.f_19461.f_22[8 /*12*/].f_9 = fVar27;
	Global_1914319.f_19461.f_22[9 /*12*/].f_9 = fVar34;
	Global_1914319.f_19461.f_22[11 /*12*/].f_9 = fVar41;
	Global_1914319.f_19461.f_22[12 /*12*/].f_9 = fVar87;
	if (iParam1 != -1 && __LIB_15__::func_348(&fVar75, iParam1, iParam2, 2126347867))
	{
		__LIB_15__::func_348(&fVar76, iParam1, iParam2, -1473147387);
		__LIB_15__::func_348(&fVar77, iParam1, iParam2, 1271822110);
		__LIB_15__::func_348(&fVar78, iParam1, iParam2, -242139225);
		__LIB_15__::func_348(&fVar79, iParam1, iParam2, 261148733);
		__LIB_15__::func_348(&fVar80, iParam1, iParam2, 456166852);
		__LIB_15__::func_348(&fVar6, iParam1, iParam2, 1008724865);
		__LIB_15__::func_348(&fVar13, iParam1, iParam2, 355420967);
		__LIB_15__::func_348(&fVar20, iParam1, iParam2, 6312985);
		__LIB_15__::func_348(&fVar27, iParam1, iParam2, -2062854103);
		__LIB_15__::func_348(&fVar34, iParam1, iParam2, 345389633);
		__LIB_15__::func_348(&fVar41, iParam1, iParam2, 522396574);
		__LIB_15__::func_348(&fVar87, iParam1, iParam2, -788366962);
	}
	else
	{
		fVar75 = __LIB_14__::func_881(0);
		fVar76 = __LIB_14__::func_881(1);
		fVar77 = __LIB_14__::func_881(2);
		fVar78 = __LIB_14__::func_881(3);
		fVar79 = __LIB_14__::func_881(4);
		fVar80 = __LIB_14__::func_881(5);
		fVar6 = __LIB_14__::func_881(7);
		fVar13 = __LIB_14__::func_881(6);
		fVar20 = __LIB_14__::func_881(10);
		fVar27 = __LIB_14__::func_881(8);
		fVar34 = __LIB_14__::func_881(9);
		fVar41 = __LIB_14__::func_881(11);
		fVar87 = __LIB_14__::func_881(12);
	}
	Global_1914319.f_19461.f_22[0 /*12*/].f_10 = fVar75;
	Global_1914319.f_19461.f_22[1 /*12*/].f_10 = fVar76;
	Global_1914319.f_19461.f_22[2 /*12*/].f_10 = fVar77;
	Global_1914319.f_19461.f_22[3 /*12*/].f_10 = fVar78;
	Global_1914319.f_19461.f_22[4 /*12*/].f_10 = fVar79;
	Global_1914319.f_19461.f_22[5 /*12*/].f_10 = fVar80;
	Global_1914319.f_19461.f_22[7 /*12*/].f_10 = fVar6;
	Global_1914319.f_19461.f_22[6 /*12*/].f_10 = fVar13;
	Global_1914319.f_19461.f_22[10 /*12*/].f_10 = fVar20;
	Global_1914319.f_19461.f_22[8 /*12*/].f_10 = fVar27;
	Global_1914319.f_19461.f_22[9 /*12*/].f_10 = fVar34;
	Global_1914319.f_19461.f_22[11 /*12*/].f_10 = fVar41;
	Global_1914319.f_19461.f_22[12 /*12*/].f_10 = fVar87;
	if (iParam1 != -1 && __LIB_15__::func_348(&fVar75, iParam1, iParam2, 926457408))
	{
		__LIB_15__::func_348(&fVar76, iParam1, iParam2, -1446400344);
		__LIB_15__::func_348(&fVar77, iParam1, iParam2, 1416748891);
		__LIB_15__::func_348(&fVar78, iParam1, iParam2, 101413382);
		__LIB_15__::func_348(&fVar79, iParam1, iParam2, -1976760931);
		__LIB_15__::func_348(&fVar80, iParam1, iParam2, 1306012376);
		__LIB_15__::func_348(&fVar6, iParam1, iParam2, 1136472284);
		__LIB_15__::func_348(&fVar13, iParam1, iParam2, 1349037503);
		__LIB_15__::func_348(&fVar20, iParam1, iParam2, 835143778);
		__LIB_15__::func_348(&fVar27, iParam1, iParam2, 918365883);
		__LIB_15__::func_348(&fVar34, iParam1, iParam2, -938532231);
		__LIB_15__::func_348(&fVar41, iParam1, iParam2, -2024244127);
		__LIB_15__::func_348(&fVar87, iParam1, iParam2, 1748298861);
	}
	else
	{
		fVar75 = __LIB_14__::func_882(0);
		fVar76 = __LIB_14__::func_882(1);
		fVar77 = __LIB_14__::func_882(2);
		fVar78 = __LIB_14__::func_882(3);
		fVar79 = __LIB_14__::func_882(4);
		fVar80 = __LIB_14__::func_882(5);
		fVar6 = __LIB_14__::func_882(7);
		fVar13 = __LIB_14__::func_882(6);
		fVar20 = __LIB_14__::func_882(10);
		fVar27 = __LIB_14__::func_882(8);
		fVar34 = __LIB_14__::func_882(9);
		fVar41 = __LIB_14__::func_882(11);
		fVar87 = __LIB_14__::func_882(12);
	}
	Global_1914319.f_19461.f_22[0 /*12*/].f_11 = fVar75;
	Global_1914319.f_19461.f_22[1 /*12*/].f_11 = fVar76;
	Global_1914319.f_19461.f_22[2 /*12*/].f_11 = fVar77;
	Global_1914319.f_19461.f_22[3 /*12*/].f_11 = fVar78;
	Global_1914319.f_19461.f_22[4 /*12*/].f_11 = fVar79;
	Global_1914319.f_19461.f_22[5 /*12*/].f_11 = fVar80;
	Global_1914319.f_19461.f_22[7 /*12*/].f_11 = fVar6;
	Global_1914319.f_19461.f_22[6 /*12*/].f_11 = fVar13;
	Global_1914319.f_19461.f_22[10 /*12*/].f_11 = fVar20;
	Global_1914319.f_19461.f_22[8 /*12*/].f_11 = fVar27;
	Global_1914319.f_19461.f_22[9 /*12*/].f_11 = fVar34;
	Global_1914319.f_19461.f_22[11 /*12*/].f_11 = fVar41;
	Global_1914319.f_19461.f_22[12 /*12*/].f_11 = fVar87;
}

bool func_665(int iParam0, int iParam1)
{
	var uVar0[3];
	int iVar4;
	if (!__LIB_0__::func_30(iParam0))
	{
		*iParam1 = 1;
		return false;
	}
	if (iParam0 == joaat("CLOTHING_MULTI_ITEM_SUPER_CLEAN"))
	{
		if (__LIB_1__::func_185(34))
		{
			return __LIB_14__::func_913(1);
		}
		else if (__LIB_14__::func_914(2))
		{
			return __LIB_14__::func_913(1);
		}
		else
		{
			return (__LIB_14__::func_914(1) && __LIB_14__::func_915(1));
		}
	}
	if (__LIB_14__::func_914(2))
	{
		return false;
	}
	*iParam1 = 4;
	switch (iParam0)
	{
		case joaat("CLOTHING_MULTI_ITEM_TRIM_ALL"):
			return ((__LIB_15__::func_45(0) || __LIB_15__::func_45(1)) || __LIB_15__::func_45(2));
		case joaat("CLOTHING_MULTI_ITEM_TRIM_CHIN"):
			return __LIB_15__::func_45(0);
		case joaat("CLOTHING_MULTI_ITEM_TRIM_CHOPS"):
			return __LIB_15__::func_45(1);
		case joaat("CLOTHING_MULTI_ITEM_TRIM_STACHE"):
			return __LIB_15__::func_45(2);
		case joaat("CLOTHING_MULTI_ITEM_CLEAN"):
			return __LIB_14__::func_913(2);
		default:
			break;
	}
	__LIB_15__::func_420(iParam0, &uVar0);
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (__LIB_4__::func_605(iVar4) < uVar0[iVar4])
		{
			return false;
		}
		iVar4++;
	}
	return true;
}

void func_666(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (__LIB_6__::func_520(-1, iParam0, iParam1, &(Global_40.f_4283.f_440[0 /*63*/]), 1, bParam2))
	{
		return;
	}
	if (__LIB_6__::func_520(-1, iParam0, iParam1, &(Global_40.f_4283.f_440[1 /*63*/]), 1, bParam2))
	{
		if (Global_40.f_4283.f_440[1 /*63*/] == 0)
		{
			Global_40.f_4283.f_440[1 /*63*/] = __LIB_6__::func_15(&(Global_40.f_4283.f_440[0 /*63*/]));
		}
		return;
	}
	__LIB_6__::func_260(&(Global_40.f_4283.f_440));
	__LIB_6__::func_520(-1, iParam0, iParam1, &(Global_40.f_4283.f_440[1 /*63*/]), 1, bParam2);
}

int func_667(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_30(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_381(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (__LIB_0__::func_239(&(Global_40.f_9910[iVar0 /*6*/]), 1))
	{
	}
	else
	{
		__LIB_0__::func_240(&(Global_40.f_9910[iVar0 /*6*/]), 1);
	}
	Global_40.f_9910[iVar0 /*6*/].f_3 = __LIB_0__::func_23();
	if (bParam1)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(0, 17);
		}
	}
	return 1;
}

int func_668(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return 1;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	__LIB_15__::func_80(&(Global_20710[iVar0 /*45*/].f_2), iParam1, iParam0, iParam2);
	__LIB_11__::func_470(&(Global_20710.f_1126), iParam1, iParam0, iParam2);
	return 1;
}

void func_669(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_01"), iParam1, 1);
			__LIB_0__::func_433(2);
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_02"), iParam1, 1);
			__LIB_0__::func_433(16);
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_03"), iParam1, 1);
			__LIB_0__::func_433(128);
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (__LIB_0__::func_181())
			{
				__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_04"), iParam1, 1);
			}
			else
			{
				__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_04_ALT"), iParam1, 1);
			}
			__LIB_0__::func_433(1024);
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_05"), iParam2, 1);
			__LIB_0__::func_433(65536);
			break;
	}
}

int func_670(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (__LIB_0__::func_2() == 0)
	{
		return 1;
	}
	if (__LIB_0__::func_831(iParam2))
	{
		__LIB_15__::func_477(iParam1, iParam2, iParam3);
	}
	__LIB_14__::func_444(iParam0, iParam1, iParam2, iParam3, iParam4);
	return 1;
}

bool func_671(char* sParam0)
{
	return __LIB_15__::func_466(sParam0, __LIB_14__::func_995());
}

int func_672(var uParam0, int iParam1)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	iVar1 = __LIB_9__::func_812(iVar0);
	iVar2 = __LIB_15__::func_467(iParam1);
	iVar3 = __LIB_12__::func_523(iVar0);
	iVar4 = 0;
	iVar5 = 0;
	iVar4 = __LIB_15__::func_58(iParam1);
	iVar5 = __LIB_15__::func_59(iParam1);
	iVar4++;
	iVar5++;
	iVar4 = __LIB_0__::func_309(iVar4, 0, 10);
	iVar5 = __LIB_0__::func_309(iVar5, 0, 10);
	if (__LIB_14__::func_997(iParam1))
	{
		__LIB_15__::func_60(&iVar6, &iVar7);
		iVar6 = (iVar6 + iVar4 * 100);
		iVar7 = (iVar7 + iVar5 * 100);
	}
	iVar8 = iVar4 + 3;
	iVar9 = iVar5 + 2;
	iVar8 = __LIB_0__::func_309(iVar8, 0, 10);
	iVar9 = __LIB_0__::func_309(iVar9, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedEquipmentValue", iVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedEquipmentMinValue", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedEquipmentMaxValue", 1000);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccEquipmentValue", iVar7);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccEquipmentMinValue", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccEquipmentMaxValue", 1000);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedValue", iVar4);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedMinValue", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedMaxValue", 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccValue", iVar5);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccMinValue", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccMaxValue", 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedCapacityValue", iVar8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedCapacityMinValue", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedCapacityMaxValue", 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccCapacityValue", iVar9);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccCapacityMinValue", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccCapacityMaxValue", 10);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_52, "HorseHandling", MISC::GET_HASH_KEY(__LIB_12__::func_524(iVar2)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_52, "HorseType", MISC::GET_HASH_KEY(__LIB_15__::func_61(iVar3, iVar1)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_52, "HorseBreed", MISC::GET_HASH_KEY(__LIB_15__::func_46(iVar1)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_52, "HorseCoat", MISC::GET_HASH_KEY(__LIB_12__::func_525(iVar1)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_52, "HorseGender", MISC::GET_HASH_KEY(__LIB_15__::func_62(iParam1)));
	return 1;
}

bool func_673(int* iParam0, struct<16> Param1, int iParam17, bool bParam18)
{
	if ((iParam17 != 2113164098 && iParam17 != joaat("SELL")) && iParam17 != joaat("UPDATE"))
	{
		return false;
	}
	if (!__LIB_15__::func_19(Param1))
	{
		return false;
	}
	if (!__LIB_15__::func_470(iParam0, iParam17))
	{
		return false;
	}
	if (UNK_0x3745C002F5A21C45(*iParam0, &Param1, 16))
	{
	}
	else
	{
		return false;
	}
	return __LIB_15__::func_471(iParam0, bParam18);
}

void func_674(int iParam0, var uParam1)
{
	if (iParam0 == 1)
	{
		uParam1->f_102 = 8;
	}
	else if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
	{
		uParam1->f_102 = 1024;
	}
	else if (iParam0 == 2)
	{
		uParam1->f_102 = 16;
	}
	else if (iParam0 == 6)
	{
		uParam1->f_102 = 32;
	}
	else if (iParam0 == 10)
	{
		uParam1->f_102 = 64;
	}
	else if (iParam0 == 18)
	{
		uParam1->f_102 = 32768;
	}
	else if (iParam0 == 4)
	{
		uParam1->f_102 = 256;
	}
	else if (iParam0 == 9)
	{
		uParam1->f_102 = 8192;
	}
	else if (iParam0 == 20)
	{
		uParam1->f_102 = 128;
	}
	else
	{
		uParam1->f_102 = 8;
	}
	uParam1->f_115 = __LIB_2__::func_419(uParam1->f_101, 0);
	if ((uParam1->f_115 == 365 || uParam1->f_115 == 385) && iParam0 == 6)
	{
		uParam1->f_102 |= 128;
	}
	else if (iParam0 == 6)
	{
		uParam1->f_102 = 32;
	}
	if (uParam1->f_77.f_6 == -1)
	{
		__LIB_13__::func_140(&(uParam1->f_77), 1, 0);
	}
	if (uParam1->f_115 == 74 && PERSCHAR::_0xA00DF706C60173D1(joaat("RHD_GENERAL_STORE")) == joaat("CS_MRPEARSON"))
	{
		uParam1->f_113 = "COMP_PEARSON";
		uParam1->f_114 = 2;
		PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, joaat("DISCOVERABLE_NAME_ALVIN_BANKS"));
	}
	else if (uParam1->f_115 == 74 && PERSCHAR::_0xA00DF706C60173D1(joaat("RHD_GENERAL_STORE")) != joaat("CS_MRPEARSON"))
	{
		if (__LIB_0__::func_293(45))
		{
			PLAYER::_0xCDDD4B74660E2335(PLAYER::PLAYER_ID(), 0, joaat("DISCOVERABLE_NAME_ALVIN_BANKS"));
		}
	}
}

int func_675(var uParam0)
{
	uParam0->f_279 = -1;
	uParam0->f_268 = 0;
	__LIB_15__::func_473(uParam0, 0);
	if (Global_1914319.f_16855 == uParam0->f_221 || Global_1914319.f_16855 == -1)
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(-102170019))
		{
			UISTATEMACHINE::_UISTATEMACHINE_DESTROY(-102170019);
		}
		if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_1210))
		{
			UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_1210));
			uParam0->f_1210 = 0;
		}
		if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(-1468895189))
		{
			UISTATEMACHINE::_UISTATEMACHINE_DESTROY(-1468895189);
		}
		if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_1211))
		{
			UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_1211));
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_273))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_273);
		}
		TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("DEFAULT_INDEX");
		TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CATALOG_INDEX_DOUBLE");
		TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("DEFAULT_NOTE_PAGE");
		TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("DEFAULT_GRID_OF_3");
		TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("DEFAULT_GRID_OF_3_TYPE_2");
		TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("DEFAULT_GRID_OF_4");
		TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("elements");
		TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(__LIB_14__::func_740());
		TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("elements_stamps_icons");
		HUD::_TEXT_DATABASE_DELETE("SHOP");
		HUD::_TEXT_DATABASE_DELETE("SATCH");
	}
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("catalog_interior");
	return 1;
}

bool func_676(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_139(uParam0->f_20[iParam1 /*8*/]))
	{
		iVar0 = __LIB_15__::func_268(iParam1);
		if (__LIB_15__::func_160(uParam0, iParam1, 512))
		{
			Stack.Push(uParam0);
			Stack.Push(iVar0);
			Call_Loc(uParam0->f_20[iParam1 /*8*/].f_7);
			uParam0->f_20[iParam1 /*8*/] = StackVal;
		}
		else if (__LIB_15__::func_114(uParam0->f_2, uParam0->f_3))
		{
			iVar1 = 3;
			if (__LIB_2__::func_774(69))
			{
				iVar1 = 2;
			}
			uParam0->f_20[iParam1 /*8*/] = __LIB_4__::func_450(__LIB_15__::func_378(uParam0->f_2, iParam1), iVar0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, iVar1, joaat("MEDIUM_TIMED_EVENT"), 0);
		}
		else if (__LIB_14__::func_703(uParam0->f_2))
		{
			if (__LIB_15__::func_269(uParam0->f_2))
			{
				uParam0->f_20[iParam1 /*8*/] = __LIB_9__::func_953(__LIB_15__::func_378(uParam0->f_2, iParam1), iVar0, Global_1914319.f_3[uParam0->f_2 /*446*/].f_27, 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
			}
			else
			{
				uParam0->f_20[iParam1 /*8*/] = __LIB_9__::func_953(__LIB_15__::func_378(uParam0->f_2, iParam1), iVar0, uParam0->f_1948, 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
			}
		}
	}
	if (!__LIB_0__::func_139(uParam0->f_20[iParam1 /*8*/]))
	{
		__LIB_15__::func_236(uParam0, iParam1, 2);
		return false;
	}
	else
	{
		if (!__LIB_15__::func_370(uParam0))
		{
			__LIB_2__::func_803(uParam0->f_2, &iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_1__::func_522(uParam0->f_20[iParam1 /*8*/], 18, 0, 1);
				__LIB_1__::func_522(uParam0->f_20[iParam1 /*8*/], 17, 0, 1);
				HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(uParam0->f_20[iParam1 /*8*/]), HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar2), 0);
			}
			else
			{
				HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(uParam0->f_20[iParam1 /*8*/]), __LIB_0__::func_561(uParam0->f_3), 0);
			}
		}
		else
		{
			HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(uParam0->f_20[iParam1 /*8*/]), __LIB_0__::func_561(uParam0->f_3), 0);
		}
		__LIB_14__::func_235(uParam0->f_20[iParam1 /*8*/], __LIB_15__::func_270(iParam1));
	}
	__LIB_15__::func_327(uParam0, iParam1, 2);
	return true;
}

void func_677(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
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
				__LIB_15__::func_455(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

bool func_678(int iParam0, int iParam1)
{
	var uVar0[3];
	int iVar4[3];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	if (!__LIB_15__::func_420(iParam0, &uVar0))
	{
		return false;
	}
	iVar9 = 0;
	iVar10 = 0;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (uVar0[iVar8] < uVar0[iVar9])
		{
			iVar9 = iVar8;
		}
		if (uVar0[iVar8] > uVar0[iVar10])
		{
			iVar10 = iVar8;
		}
		iVar8++;
	}
	iVar4[0] = __LIB_12__::func_562(0);
	iVar4[2] = __LIB_12__::func_562(2);
	iVar4[1] = __LIB_12__::func_562(1);
	iVar12 = (iVar4[iVar10] - uVar0[iVar10]);
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (uVar0[iVar8] != -1)
		{
			iVar11 = (uVar0[iVar10] - uVar0[iVar8]);
			if (iVar4[iVar8] > (uVar0[iVar8] + iVar12))
			{
				iVar4[iVar8] = (uVar0[iVar8] + iVar12);
			}
			if (iVar4[iVar8] > (iParam1 - iVar11))
			{
				iVar4[iVar8] = (iParam1 - iVar11);
			}
			if (iVar4[iVar8] < uVar0[iVar8])
			{
				iVar4[iVar8] = uVar0[iVar8];
			}
		}
		else
		{
			iVar4[iVar8] = 1;
		}
		iVar8++;
	}
	if (!__LIB_15__::func_94(iParam0, Global_35, iVar4[0], iVar4[1], iVar4[2], 1))
	{
		return false;
	}
	return true;
}

bool func_679(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	struct<8> Var7;
	int iVar15;
	var uVar16;
	iVar0 = 0;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar15 = iParam1;
	Var7 = { __LIB_5__::func_978(iVar15) };
	if (iVar15 == -1 || iVar15 >= 7)
	{
		return false;
	}
	if (iVar15 == 0)
	{
		bVar3 = true;
		bVar6 = (__LIB_15__::func_307(uParam0, 4096) && __LIB_1__::func_105(0));
	}
	bVar4 = __LIB_1__::func_105(iVar15);
	bVar5 = (iVar15 == 4 && __LIB_12__::func_577());
	if (bVar4)
	{
		iVar1 = __LIB_0__::func_809(iVar15);
		iVar2 = __LIB_0__::func_821(iVar15);
		iVar0 = __LIB_0__::func_553(iVar2);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var7))
		{
			StringCopy(&Var7, HUD::_GET_LABEL_TEXT_BY_HASH(MISC::GET_HASH_KEY(__LIB_5__::func_979(iVar1))), 64);
		}
		if (!__LIB_0__::func_144(iVar0, 0))
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	MISC::_INT_TO_STRING(iParam1, "%i", &uVar16);
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_59, &uVar16);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, __LIB_12__::func_481(), 193788635);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, __LIB_14__::func_847(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, __LIB_12__::func_479(), iVar0);
	if (bVar4)
	{
		if (bVar3)
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTextureDict", joaat("BLIPS"));
			if (__LIB_5__::func_917() == 0 && __LIB_0__::func_479() != 5)
			{
				DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTexture", joaat("BLIP_HORSE_OWNED_ACTIVE"));
			}
			else
			{
				DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTexture", joaat("BLIP_HORSE_OWNED"));
			}
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTextureDict", joaat("BLIPS"));
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTexture", joaat("BLIP_HORSE_TEMP_HITCHED"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTextureDict", joaat("BLIPS"));
		if (bVar3)
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTexture", joaat("BLIP_HORSE_OWNED"));
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTexture", joaat("BLIP_AMBIENT_HITCHING_POST"));
		}
	}
	if (bVar4)
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, __LIB_14__::func_923(), &Var7);
	}
	else if (bVar3)
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, __LIB_14__::func_923(), HUD::_GET_LABEL_TEXT_BY_HASH(-1669636523));
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, __LIB_14__::func_923(), HUD::_GET_LABEL_TEXT_BY_HASH(-2096252882));
	}
	if (bVar3)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, __LIB_14__::func_909(), (bVar4 && bVar6));
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, __LIB_14__::func_909(), bVar4);
	}
	if (bVar5)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "backTextureVisible", true);
		DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "backTextureDict", joaat("MENU_TEXTURES"));
		DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "backTexture", joaat("MENU_ICON_LOCK"));
	}
	return true;
}

void func_680(bool bParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (__LIB_15__::func_422())
		{
			__LIB_15__::func_89();
		}
		iVar0++;
	}
	if (!bParam0)
	{
		return;
	}
	__LIB_12__::func_83(Global_35, -1, 1);
}

void func_681(var uParam0)
{
	float fVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	fVar0 = __LIB_15__::func_72();
	__LIB_15__::func_341(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), fVar0, -345829263);
	if (__LIB_1__::func_935(uParam0->f_3, 262144))
	{
		__LIB_15__::func_341(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), 0f, -339570575);
	}
	else
	{
		__LIB_15__::func_141(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), -339570575);
	}
	if (uParam0->f_18 == 5)
	{
		if (__LIB_1__::func_187(111) && __LIB_0__::func_895(Global_1347702[111 /*49*/].f_15) == 0)
		{
			__LIB_15__::func_341(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), 0.9f, -674765148);
		}
	}
	else
	{
		__LIB_15__::func_141(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), -674765148);
	}
	if (__LIB_0__::func_26())
	{
		__LIB_15__::func_342(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), joaat("WEAPON_PISTOL_VOLCANIC"), 0f, -2026391750);
		__LIB_15__::func_342(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), joaat("WEAPON_SHOTGUN_PUMP"), 0f, -2040758394);
		__LIB_15__::func_342(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), joaat("WEAPON_RIFLE_VARMINT"), 0f, -2002058406);
		__LIB_15__::func_342(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), joaat("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"), 0f, -447735677);
	}
	if (__LIB_11__::func_518() || __LIB_11__::func_519())
	{
		__LIB_15__::func_342(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), joaat("HORSE_BREED_ARDENNES_IRONGREYROAN"), 0f, -1087485820);
	}
	if (uParam0->f_18 == 26)
	{
		__LIB_15__::func_342(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), joaat("CONSUMABLE_GIN"), 2f, 126464278);
		__LIB_15__::func_342(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), joaat("CONSUMABLE_WHISKEY"), 2f, -603338536);
	}
	if (uParam0->f_18 == 5)
	{
		if (__LIB_0__::func_895(Global_1347702[80 /*49*/].f_15) == 1)
		{
			__LIB_15__::func_343(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), joaat("DOCUMENT_RCM_FORMYART_PAINTING"), __LIB_15__::func_446(joaat("RC_FMA_DRAWING_MODIFIER")), -207224222);
		}
	}
	if (uParam0->f_2 == 10)
	{
		if (__LIB_0__::func_26())
		{
			if (DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED())
			{
				__LIB_15__::func_344(&(Global_1914319.f_3[10 /*446*/].f_35), 1.1f, -1759859228);
			}
			else
			{
				__LIB_15__::func_142(&(Global_1914319.f_3[10 /*446*/].f_35), -1759859228);
			}
		}
	}
	if (__LIB_0__::func_26())
	{
		__LIB_15__::func_343(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), joaat("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"), 0f, -447735677);
	}
	if (__LIB_11__::func_518() || __LIB_11__::func_519())
	{
		__LIB_15__::func_343(&(Global_1914319.f_3[uParam0->f_2 /*446*/].f_35), joaat("HORSE_BREED_ARDENNES_IRONGREYROAN"), 0f, -1087485820);
	}
}

bool func_682(int iParam0)
{
	if (__LIB_2__::func_804(iParam0, 16777216))
	{
		return false;
	}
	if (__LIB_1__::func_200(22))
	{
		return false;
	}
	if (!__LIB_15__::func_202())
	{
		return false;
	}
	if (__LIB_0__::func_73(2048))
	{
		return false;
	}
	return true;
}

void func_683(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	if (__LIB_6__::func_77(uParam0->f_1, 8))
	{
		iVar0 = Global_20710.f_1630[uParam0->f_1];
		__LIB_9__::func_92(iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &uVar5, &uVar6);
		if (iVar4 >= 28)
		{
			uParam0->f_43 = 6;
		}
		else if (iVar4 >= 7)
		{
			uParam0->f_43 = 5;
		}
		else if (iVar4 > 0)
		{
			uParam0->f_43 = 4;
		}
		else if (iVar3 > 0)
		{
			uParam0->f_43 = 3;
		}
		else if (iVar2 > 0)
		{
			uParam0->f_43 = 2;
		}
		else if (iVar1 > 0)
		{
			uParam0->f_43 = 1;
		}
	}
	else if (__LIB_15__::func_151(uParam0))
	{
		uParam0->f_43 = 5;
	}
}

bool func_684(var uParam0)
{
	int iVar0;
	if (__LIB_15__::func_213(uParam0, 1, 1))
	{
		uParam0->f_44 = __LIB_14__::func_725(3);
		__LIB_15__::func_214(uParam0, 1);
		return true;
	}
	iVar0 = PED::_0x7CC2186C32D3540A(uParam0->f_4, PLAYER::PLAYER_ID());
	if ((((uParam0->f_43 != 0 || *uParam0 == 7) || *uParam0 == 22) || *uParam0 == 20) && iVar0 == 4)
	{
		iVar0 = 0;
	}
	if (*uParam0 == 22)
	{
		uParam0->f_44 = __LIB_14__::func_744(5);
		return true;
	}
	if (__LIB_15__::func_359(PLAYER::PLAYER_ID(), 1))
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			uParam0->f_44 = __LIB_14__::func_744(12);
		}
		else
		{
			uParam0->f_44 = __LIB_14__::func_744(11);
		}
		return true;
	}
	if (__LIB_15__::func_485(uParam0))
	{
		return true;
	}
	if (__LIB_15__::func_253(uParam0))
	{
		return true;
	}
	if (uParam0->f_53 == 0)
	{
		switch (uParam0->f_43)
		{
			case 0:
				switch (iVar0)
				{
					case 0:
					case 1:
					case 4:
						if (__LIB_1__::func_985())
						{
							uParam0->f_44 = __LIB_14__::func_744(2);
							return true;
						}
						else if (PED::IS_PED_MALE(Global_35))
						{
							uParam0->f_44 = __LIB_14__::func_744(3);
							return true;
						}
						else
						{
							uParam0->f_44 = __LIB_14__::func_744(4);
							return true;
						}
						break;
				}
				break;
			case 1:
			case 2:
				if (__LIB_14__::func_745(__LIB_0__::func_12()) > 0)
				{
					uParam0->f_44 = __LIB_14__::func_744(25);
					return true;
				}
				if ((uParam0->f_60 != 0 && uParam0->f_60 != 5) && ((uParam0->f_62 == 3 || uParam0->f_62 == 7) || uParam0->f_62 == 6))
				{
					uParam0->f_44 = __LIB_14__::func_744(26);
					return true;
				}
				switch (iVar0)
				{
					case 1:
						if (*uParam0 == 8)
						{
							uParam0->f_44 = __LIB_14__::func_744(29);
							return true;
						}
					case 0:
					case 4:
						if (*uParam0 != 7 || __LIB_1__::func_985())
						{
							uParam0->f_44 = __LIB_14__::func_744(28);
							return true;
						}
						else if (PED::IS_PED_MALE(Global_35))
						{
							uParam0->f_44 = __LIB_14__::func_744(32);
							return true;
						}
						else
						{
							uParam0->f_44 = __LIB_14__::func_744(33);
							return true;
						}
						break;
					case 2:
					case 3:
						if (*uParam0 == 8)
						{
							uParam0->f_44 = __LIB_14__::func_744(30);
							return true;
						}
						else
						{
							uParam0->f_44 = "";
							return true;
						}
						break;
				}
				break;
			case 3:
			case 4:
				if (__LIB_14__::func_745(__LIB_0__::func_12()) > 0)
				{
					uParam0->f_44 = __LIB_14__::func_744(25);
					return true;
				}
				switch (iVar0)
				{
					case 1:
						uParam0->f_44 = __LIB_14__::func_744(39);
						break;
					case 0:
					case 4:
						if (*uParam0 == 20 || __LIB_1__::func_985())
						{
							uParam0->f_44 = __LIB_14__::func_744(19);
							return true;
						}
						else if (PED::IS_PED_MALE(Global_35))
						{
							uParam0->f_44 = __LIB_14__::func_744(21);
							return true;
						}
						else
						{
							uParam0->f_44 = __LIB_14__::func_744(22);
							return true;
						}
						break;
					case 2:
						if (__LIB_1__::func_985())
						{
							uParam0->f_44 = __LIB_14__::func_744(37);
						}
						else
						{
							uParam0->f_44 = __LIB_14__::func_744(17);
						}
						return true;
					case 3:
						uParam0->f_44 = __LIB_14__::func_744(40);
						return true;
				}
				break;
			case 5:
			case 6:
				if (__LIB_14__::func_745(__LIB_0__::func_12()) > 0)
				{
					uParam0->f_44 = __LIB_14__::func_744(25);
					return true;
				}
				switch (iVar0)
				{
					case 0:
					case 1:
					case 4:
						uParam0->f_44 = __LIB_14__::func_744(23);
						return true;
					case 2:
					case 3:
						uParam0->f_44 = __LIB_14__::func_744(24);
						return true;
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (uParam0->f_43)
		{
			case 1:
			case 2:
				uParam0->f_44 = "";
				return true;
			default:
				uParam0->f_44 = __LIB_14__::func_744(5);
				return true;
		}
	}
	return false;
}

int func_685(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == 3)
	{
		if (__LIB_15__::func_445(iParam0))
		{
			if (__LIB_1__::func_707(iParam0, 1, 0))
			{
				*uParam2 = 0;
				return 1;
			}
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			if (__LIB_1__::func_707(iParam0, 1, 0))
			{
				*uParam2 = 0;
				return 1;
			}
		}
	}
	return 0;
}

int func_686(int iParam0)
{
	struct<2> Var0;
	int iVar119;
	int iVar120;
	var uVar121;
	Var0.f_1 = 39;
	__LIB_0__::func_947(&Var0, 0, 1);
	iVar119 = -1;
	if (__LIB_0__::func_2() == -1)
	{
		iVar120 = __LIB_0__::func_449(iParam0);
		if (iVar120 > -1 && iVar120 <= 5)
		{
			iVar119 = iVar120;
		}
	}
	if (!__LIB_1__::func_713(&Var0, &uVar121, iParam0, iVar119, 1, 0))
	{
		return -1;
	}
	return __LIB_15__::func_403(&Var0);
}

bool func_687(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_15__::func_486(uParam0, &iVar0))
	{
		return false;
	}
	iVar1 = __LIB_14__::func_988(-2092532275);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_58, iParam1, iVar1, iVar0);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(__LIB_14__::func_768(), iParam1, iVar1, iVar0);
	return true;
}

bool func_688(var uParam0, struct<6> Param1, int iParam7)
{
	int iVar0;
	int iVar1;
	if (!__LIB_15__::func_490(uParam0, Param1, iParam7, &iVar0))
	{
		return false;
	}
	iVar1 = __LIB_14__::func_988(-627085098);
	if (iVar1 != 0)
	{
		DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(__LIB_14__::func_768(), iParam7, iVar1, iVar0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_58, -1, iVar1, iVar0);
		return true;
	}
	return false;
}

int func_689(var uParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	if (bParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam13);
	}
	iVar1 = __LIB_3__::func_994(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

void func_690(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 <= 0)
	{
		return;
	}
	switch (iParam0)
	{
		case joaat("CLOTHING_MULTI_ITEM_TRIM_ALL"):
			__LIB_15__::func_491(0, 0, iParam2);
			__LIB_15__::func_491(1, 0, iParam2);
			__LIB_15__::func_491(2, 0, iParam2);
			break;
		case joaat("CLOTHING_MULTI_ITEM_TRIM_CHIN"):
			__LIB_15__::func_491(0, 0, iParam2);
			break;
		case joaat("CLOTHING_MULTI_ITEM_TRIM_CHOPS"):
			__LIB_15__::func_491(1, 0, iParam2);
			break;
		case joaat("CLOTHING_MULTI_ITEM_TRIM_STACHE"):
			__LIB_15__::func_491(2, 0, iParam2);
			break;
	}
	if (!bParam1)
	{
		return;
	}
	__LIB_12__::func_584(Global_35, -1, -1, -1, 1);
}

void func_691(int iParam0)
{
	var uVar0;
	var uVar58;
	var uVar116;
	var uVar174;
	var uVar232;
	var uVar248;
	var uVar264;
	int iVar280;
	int iVar281;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	__LIB_12__::func_211(&uVar0);
	__LIB_12__::func_199(iParam0, &uVar58);
	__LIB_12__::func_585(iParam0, &uVar0);
	__LIB_12__::func_226(&uVar0, &uVar58, &uVar116);
	__LIB_12__::func_213(iParam0, &uVar116);
	__LIB_12__::func_212(&uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	__LIB_12__::func_215(&uVar232);
	__LIB_12__::func_214(iParam0, &uVar248);
	iVar280 = __LIB_12__::func_216(&uVar232);
	iVar281 = __LIB_12__::func_216(&uVar248);
	if (iVar281 > iVar280)
	{
		__LIB_12__::func_218(iParam0, &uVar248);
	}
	else
	{
		__LIB_12__::func_218(iParam0, &uVar232);
	}
	__LIB_12__::func_217(&uVar264);
	__LIB_15__::func_441(iParam0);
	__LIB_12__::func_227(iParam0);
}

bool func_692()
{
	var uVar0;
	if (__LIB_1__::func_750(&uVar0))
	{
		return true;
	}
	return false;
}

void func_693(var uParam0)
{
	__LIB_15__::func_354(uParam0, &(uParam0->f_2031.f_58));
	if (!uParam0->f_2031.f_82)
	{
		__LIB_15__::func_494(uParam0, 1);
	}
	__LIB_14__::func_707(uParam0);
	uParam0->f_2031.f_46 = 0;
	uParam0->f_2031.f_47 = 0;
	UIAPPS::_CLOSE_APP_BY_HASH(joaat("SHOP_MENU"));
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2031.f_50);
}

bool func_694(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			*iParam2 = 1;
			return true;
		}
	}
	if (__LIB_1__::func_935(iParam1, 1048576))
	{
		*iParam2 = 4;
		return true;
	}
	if (__LIB_0__::func_1(Global_1935630, 2097152))
	{
		*iParam2 = 4;
		return true;
	}
	if (__LIB_3__::func_563(iParam0, iParam1))
	{
		*iParam2 = 3;
		return true;
	}
	if (__LIB_9__::func_843(iParam1) == 105 && __LIB_14__::func_432(21))
	{
		*iParam2 = 4;
		return true;
	}
	if (__LIB_2__::func_803(iParam0, &iVar0))
	{
		if (!__LIB_11__::func_164(iParam1))
		{
			if (Global_1393529.f_3 == iVar0 && __LIB_13__::func_641(Global_1393529.f_3, 0, &(Global_1393529.f_256), &(Global_1393529.f_284), 0, 0))
			{
				*iParam2 = 5;
				return true;
			}
			if (!__LIB_14__::func_134(iParam0))
			{
				*iParam2 = 6;
				return true;
			}
			if (PED::IS_PED_FLEEING(iVar0))
			{
				*iParam2 = 6;
				return true;
			}
			if (TASK::GET_IS_TASK_ACTIVE(iVar0, 0))
			{
				*iParam2 = 7;
				return true;
			}
		}
	}
	else if (__LIB_1__::func_918(iParam0))
	{
		if (__LIB_0__::func_29(Global_1914319.f_3[iParam0 /*446*/].f_21))
		{
			iVar1 = __LIB_0__::func_120(Global_1914319.f_3[iParam0 /*446*/].f_21);
			if (iVar1 != 0 && !PERSCHAR::_0x4AFC7288C77238B3(iVar1))
			{
				*iParam2 = 6;
				return true;
			}
		}
	}
	return false;
}

bool func_695()
{
	int iVar0;
	float fVar1;
	float fVar2;
	if (__LIB_4__::func_807(0))
	{
		iVar0 = __LIB_8__::func_716(0);
		if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0))
		{
			return false;
		}
		if (Global_1914319.f_16855 == 10 || Global_1914319.f_16855 == 18)
		{
			fVar1 = 30f;
			if (Global_1914319.f_16855.f_1 == 55)
			{
				fVar1 = 40f;
			}
			fVar2 = __LIB_2__::func_118(iVar0, 0, 1);
			if (fVar2 < fVar1)
			{
				return true;
			}
		}
		else if (Global_1914319.f_16855 == 2)
		{
			if (__LIB_2__::func_118(iVar0, 0, 1) < 75f)
			{
				return true;
			}
		}
		else if (Global_1914319.f_16855 == 19)
		{
			if (__LIB_15__::func_104(iVar0))
			{
				return true;
			}
		}
	}
	else
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_0__::func_71(Global_35))
			{
				iVar0 = PED::GET_MOUNT(Global_35);
			}
			else if (__LIB_14__::func_850(-283002878))
			{
				return true;
			}
		}
		else
		{
			iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
		}
		if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0))
		{
			return false;
		}
		if (__LIB_2__::func_118(iVar0, 0, 1) < 1.7f)
		{
			return true;
		}
	}
	return false;
}

int func_696(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	struct<2> Var0;
	*uParam2 = 0;
	*uParam3 = 0;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if ((!Global_1911914.f_1579 && __LIB_1__::func_114(iParam0, iParam1, 1)) && !bParam5)
	{
		return 0;
	}
	if (!__LIB_15__::func_492(iParam0, 1, iParam1, &Var0, uParam4, bParam6, iParam7, bParam8))
	{
		*uParam2 = Var0;
		*uParam3 = Var0.f_1;
		return 0;
	}
	return 1;
}

int func_697(int iParam0)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return 0;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1914319.f_3[iParam0 /*446*/].f_18, false))
	{
		return 1;
	}
	return 0;
}

bool func_698(int iParam0, var uParam1)
{
	int iVar0;
	*uParam1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1225509.f_101)
	{
		if (Global_1225509[iVar0 /*10*/].f_4 == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_699(var uParam0)
{
	*uParam0 = *uParam0;
	return true;
}

bool func_700(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam0, iParam2, &iVar0))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(iParam0, iVar0, iParam1, uParam3))
		{
			return true;
		}
	}
	return false;
}

bool func_701(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	struct<14> Var16;
	if (iParam0 < 0)
	{
		return false;
	}
	Var2.f_9 = -1591664384;
	Var16 = { __LIB_0__::func_523(0, 2123222014, -1591664384, -1591664384, 0, 0) };
	if (!__LIB_0__::func_801(&Var16, &iVar0, &iVar1, 1))
	{
		return false;
	}
	if (iParam0 < iVar1)
	{
		if (__LIB_0__::func_236(&Var2, iParam0, iVar0, iVar1))
		{
			if (__LIB_0__::func_144(Var2.f_4, 0))
			{
				*uParam1 = Var2.f_4;
				__LIB_0__::func_238(iVar0);
				return true;
			}
		}
	}
	__LIB_0__::func_238(iVar0);
	return false;
}

bool func_702(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	iVar0 = __LIB_14__::func_952(uParam1);
	if (iParam0 < 0 || iParam0 > iVar0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(*uParam1, __LIB_12__::func_475(uParam1), iParam0, uParam2))
	{
		return true;
	}
	return false;
}

void func_703(int iParam0, var uParam1)
{
	Global_1935689.f_19.f_2[iParam0 /*2*/] = uParam1;
}

void func_704(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	if (__LIB_15__::func_22(iParam1, &iVar0))
	{
		ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iParam0, iVar0, fParam2, false);
	}
}

int func_705(var uParam0)
{
	struct<4> Var0;
	var uVar5;
	if (!DATAFILE::_0x7907969497EA92F5(Global_1935689.f_10225))
	{
		return 0;
	}
	Var0 = Global_1935689.f_10225;
	Var0.f_2 = 1;
	Var0.f_3 = uParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_706(var uParam0)
{
	struct<4> Var0;
	var uVar5;
	if (!DATAFILE::_0x7907969497EA92F5(Global_1935689.f_10225))
	{
		return 0;
	}
	Var0 = Global_1935689.f_10225;
	Var0.f_2 = 0;
	Var0.f_3 = uParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

bool func_707(var uParam0)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (*uParam0 == 9)
	{
		return true;
	}
	if ((__LIB_15__::func_504(uParam0->f_4, *uParam0) || __LIB_14__::func_722(uParam0->f_4, *uParam0)) || uParam0->f_50 == 10)
	{
		return true;
	}
	return false;
}

void func_708(var uParam0)
{
	__LIB_15__::func_554(uParam0, 64);
	__LIB_15__::func_554(uParam0, 32);
	__LIB_15__::func_554(uParam0, 256);
	__LIB_15__::func_554(uParam0, 8192);
}

void func_709(var uParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_15__::func_187(uParam0->f_1724))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1724))
		{
			__LIB_15__::func_232();
			if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_1724, "CATALOG", false)))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_1724, "CATALOG", uParam0->f_1745);
				iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_1745);
				ENTITY::DELETE_ENTITY(&(uParam0->f_1745));
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
			}
			iVar1 = 0;
			while (iVar1 <= 21)
			{
				sVar2 = __LIB_15__::func_551(iVar1);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_1724, sVar2);
				iVar1++;
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1724);
		}
	}
}

bool func_710(var uParam0, int iParam1)
{
	var uVar0;
	char* sVar1;
	uVar0 = uParam0->f_1724;
	sVar1 = __LIB_15__::func_551(iParam1);
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uVar0, sVar1))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uVar0, sVar1))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uVar0, sVar1);
			return false;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return true;
}

bool func_711(var uParam0, int iParam1)
{
	var uVar0;
	char* sVar1;
	uVar0 = uParam0->f_1724;
	sVar1 = __LIB_15__::func_551(iParam1);
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uVar0, sVar1))
	{
		return false;
	}
	return true;
}

bool func_712(var uParam0)
{
	char* sVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1724))
	{
		return false;
	}
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(0)) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(6)))
	{
		sVar0 = "buy_base_index_plyr";
	}
	else if ((((((ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(3)) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(5))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(1))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(7))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(10))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(11))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(17)))
	{
		sVar0 = "buy_base_section_r2_plyr";
	}
	else if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(2)) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(4)))
	{
		sVar0 = "buy_base_section_l1_plyr";
	}
	else if (((ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(9)) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(16))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(19))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(14)))
	{
		sVar0 = "buy_pistol_view_loop_plyr";
	}
	else if ((ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(8)) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(18))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(15)))
	{
		sVar0 = "buy_rifle_view_loop_plyr";
	}
	else if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(12)))
	{
		sVar0 = "sell_rifle_view_loop_plyr";
	}
	else if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(13)))
	{
		sVar0 = "sell_pistol_view_loop_plyr";
	}
	else
	{
		return false;
	}
	return ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "mech_inspection@catalog", sVar0, 1);
}

bool func_713(var uParam0)
{
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(16)))
	{
		return true;
	}
	return false;
}

void func_714(var uParam0, int iParam1)
{
	char* sVar0;
	if (!__LIB_15__::func_190(iParam1))
	{
		return;
	}
	sVar0 = __LIB_15__::func_551(iParam1);
	if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1724, sVar0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_1724, sVar0, true);
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1724, sVar0);
}

bool func_715(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if ((ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(8)) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(12))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(18)))
		{
			return true;
		}
	}
	else if (bParam2)
	{
		if ((ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(9)) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(13))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(19)))
		{
			return true;
		}
	}
	else if (((((ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(8)) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(9))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(12))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(13))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(18))) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(19)))
	{
		return true;
	}
	return false;
}

bool func_716(var uParam0)
{
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(10)) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(11)))
	{
		return true;
	}
	return false;
}

bool func_717(var uParam0)
{
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_1724, __LIB_15__::func_551(17)))
	{
		return true;
	}
	return false;
}

void func_718(var uParam0)
{
	__LIB_15__::func_547(uParam0, 32);
}

void func_719(var uParam0)
{
	__LIB_15__::func_547(uParam0, 64);
}

bool func_720(var uParam0)
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("WARD"))
	{
		return false;
	}
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("CamTransition01"))
	{
		return false;
	}
	switch (__LIB_0__::func_2())
	{
		case -1:
			return __LIB_14__::func_762(uParam0);
		default:
			break;
	}
	return false;
}

bool func_721(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	int iVar5;
	if (!__LIB_1__::func_918(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_720(6, &Var0))
	{
		return false;
	}
	Var0.f_2 = 465794448;
	Var0.f_3 = __LIB_6__::func_676(iParam0);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar5 = __LIB_9__::func_843(iParam1);
		Var0.f_2 = 521381610;
		Var0.f_3 = __LIB_9__::func_28(iVar5);
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = -788806526;
			*uParam2 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
			return true;
		}
	}
	return false;
}

int func_722(int iParam0, bool bParam1)
{
	if (__LIB_2__::func_748(iParam0))
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

void func_723(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	__LIB_15__::func_296(uParam0, uParam0->f_59);
	if (uParam0->f_62 == iParam2 && uParam0->f_43 <= 3)
	{
		if (uParam0->f_59 == 5 || (uParam0->f_59 == 0 && uParam0->f_60 != 5))
		{
			bVar0 = true;
			iParam1 = uParam0->f_60;
			uParam0->f_54 = uParam0->f_55 + 1;
		}
	}
	uParam0->f_60 = uParam0->f_59;
	uParam0->f_59 = iParam1;
	uParam0->f_62 = uParam0->f_61;
	uParam0->f_61 = iParam2;
	uParam0->f_55 = uParam0->f_54;
	if (!bVar0)
	{
		uParam0->f_54 = 0;
	}
	if (uParam0->f_60 == 0)
	{
		uParam0->f_60 = iParam1;
		uParam0->f_62 = iParam2;
	}
	uParam0->f_57 = 0;
	__LIB_15__::func_206(uParam0, 0);
	__LIB_15__::func_297(uParam0, iParam1, iParam2);
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
	{
		__LIB_15__::func_554(uParam0, 2048);
	}
	else
	{
		__LIB_15__::func_547(uParam0, 2048);
	}
}

void func_724(var uParam0)
{
	uParam0->f_56 = -1;
	uParam0->f_51 = 0;
	uParam0->f_44 = "";
	__LIB_15__::func_554(uParam0, 4096);
}

bool func_725(var uParam0)
{
	if (__LIB_15__::func_359(PLAYER::PLAYER_ID(), 1))
	{
		return true;
	}
	if (__LIB_3__::func_563(*uParam0, uParam0->f_1) || uParam0->f_50 == 10)
	{
		return true;
	}
	if ((__LIB_15__::func_151(uParam0) && !__LIB_15__::func_584(uParam0)) && ((uParam0->f_62 == 9 || uParam0->f_62 == 10) || uParam0->f_62 == 11))
	{
		return true;
	}
	return false;
}

bool func_726(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bVar3 = false;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar0 = iVar1;
		while (bVar3)
		{
			iVar2 = __LIB_15__::func_311(uParam0, &(uParam0->f_281.f_3), iParam1, iVar0);
			if (iVar2 == -2 || iVar2 == -1)
			{
				bVar3 = true;
			}
			else if (__LIB_15__::func_510(uParam0, iVar2))
			{
				*iParam2 = iVar2;
				return true;
			}
		}
		bVar3 = false;
		iVar1++;
	}
	return false;
}

int func_727(var uParam0, bool bParam1)
{
	int iVar0;
	if (!bParam1)
	{
	}
	__LIB_14__::func_796(uParam0, __LIB_12__::func_475(&(uParam0->f_2031)));
	__LIB_15__::func_589(uParam0);
	iVar0 = __LIB_14__::func_782(&(uParam0->f_2031));
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, "ItemPalettePriceVisible", false);
	return 1;
}

int func_728(var uParam0, bool bParam1)
{
	int iVar0;
	if (!bParam1)
	{
	}
	__LIB_14__::func_796(uParam0, __LIB_12__::func_475(&(uParam0->f_2031)));
	__LIB_15__::func_589(uParam0);
	iVar0 = __LIB_14__::func_782(&(uParam0->f_2031));
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, "ItemPalettePriceVisible", true);
	return 1;
}

void func_729(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam2 == 0)
	{
		if (!__LIB_15__::func_512(iParam0, &iParam2))
		{
			return;
		}
	}
	__LIB_7__::func_372(iParam2, iParam1);
}

bool func_730(var uParam0, float fParam1)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (*uParam0 == 9 || *uParam0 == 8)
	{
		return false;
	}
	bVar0 = __LIB_0__::func_2() == -1;
	if (!bVar0)
	{
		if (__LIB_14__::func_692(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			return true;
		}
		if (__LIB_15__::func_548())
		{
			return true;
		}
	}
	else if (__LIB_0__::func_1(Global_1935630, 2097152))
	{
		return true;
	}
	if (*uParam0 == 5 || *uParam0 == 7)
	{
		return false;
	}
	if (!bVar0)
	{
		if (__LIB_15__::func_119(uParam0->f_2, 128))
		{
			return true;
		}
		if (__LIB_15__::func_127(uParam0->f_3, 1) || __LIB_15__::func_127(uParam0->f_3, 1048576))
		{
			return true;
		}
	}
	if (!bVar0 && Global_1051260.f_48[uParam0->f_2 /*78*/] == -1)
	{
		return true;
	}
	if (bVar0 && Global_1914319.f_3[uParam0->f_2 /*446*/].f_10 == -1)
	{
		return true;
	}
	fVar1 = 0.1f;
	if (!__LIB_12__::func_451(uParam0->f_2))
	{
		if (bVar0)
		{
			fVar2 = Global_1914319.f_3[uParam0->f_2 /*446*/].f_19;
		}
		else
		{
			fVar2 = Global_1051260.f_48[uParam0->f_2 /*78*/].f_9;
		}
		fVar3 = (fVar2 * fVar2);
		fVar3 = (fVar3 + (fVar3 * fVar1));
		if (fParam1 >= fVar3)
		{
			return true;
		}
	}
	return false;
}

void func_731(var uParam0)
{
	if (!__LIB_15__::func_350(uParam0))
	{
		if (!__LIB_15__::func_156(uParam0))
		{
			if (__LIB_15__::func_351(uParam0))
			{
			}
		}
	}
	else
	{
		if (__LIB_0__::func_27(uParam0->f_1268, 1))
		{
			__LIB_0__::func_8(&(uParam0->f_1268), 1);
		}
		if (!__LIB_15__::func_560(uParam0))
		{
		}
		else
		{
			__LIB_0__::func_7(&(uParam0->f_1268), 8);
		}
	}
}

bool func_732(int iParam0)
{
	int iVar0;
	if (__LIB_15__::func_445(iParam0))
	{
		WEAPON::_0x72D4CB5DB927009C(iParam0, -1, 0);
		return true;
	}
	if (__LIB_15__::func_569(iParam0, &iVar0))
	{
		STREAMING::REQUEST_MODEL(iVar0, false);
		return true;
	}
	return false;
}

bool func_733(int iParam0)
{
	int iVar0;
	if (__LIB_15__::func_445(iParam0))
	{
		if (!WEAPON::_0xFF07CF465F48B830(iParam0))
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	if (__LIB_15__::func_569(iParam0, &iVar0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_734(var uParam0)
{
	if (__LIB_15__::func_570(uParam0))
	{
		__LIB_15__::func_201(uParam0);
	}
	else if (!__LIB_14__::func_126(uParam0->f_3, 1))
	{
		__LIB_15__::func_358(uParam0);
	}
	return 1;
}

bool func_735(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	if (iVar0 != joaat("WEAPON_UNARMED"))
	{
		if (iVar0 != joaat("OBJECT_1") && (__LIB_0__::func_787(iVar0) || __LIB_0__::func_192(iVar0, -1653669750)))
		{
			return false;
		}
	}
	if (__LIB_15__::func_572(uParam0))
	{
		return true;
	}
	if (__LIB_2__::func_364(uParam0->f_4, 0, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_736(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (__LIB_15__::func_574(iParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_737(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	if (((iVar0 != joaat("OBJECT_1") && (__LIB_0__::func_787(iVar0) || __LIB_0__::func_192(iVar0, -1653669750))) && !(*uParam0 == 6 && __LIB_15__::func_584(uParam0))) && !(WEAPON::_0x6ABAD7B0A854F8FB(iVar0) || iVar0 == joaat("WEAPON_MELEE_DAVY_LANTERN")))
	{
		return true;
	}
	return false;
}

bool func_738(var uParam0)
{
	int iVar0;
	Stack.Push(uParam0->f_27);
	Stack.Push(uParam0);
	Call_Loc(uParam0->f_28);
	if (StackVal && StackVal)
	{
		return true;
	}
	if (__LIB_0__::func_265(&(uParam0->f_80)) > 180f)
	{
		if (__LIB_15__::func_151(uParam0))
		{
			uParam0->f_44 = __LIB_14__::func_725(30);
			return true;
		}
		else if (__LIB_15__::func_584(uParam0))
		{
			uParam0->f_44 = __LIB_14__::func_725(29);
			return true;
		}
		else
		{
			uParam0->f_44 = __LIB_14__::func_725(39);
			return true;
		}
	}
	else if (__LIB_15__::func_151(uParam0))
	{
		uParam0->f_44 = __LIB_14__::func_725(28);
		return true;
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		switch (iVar0)
		{
			case 0:
				uParam0->f_44 = __LIB_14__::func_725(40);
				return true;
			case 1:
				if (uParam0->f_3 && !__LIB_4__::func_852(*uParam0))
				{
					uParam0->f_44 = __LIB_14__::func_725(17);
					return true;
				}
				break;
			case 2:
				uParam0->f_44 = __LIB_14__::func_725(42);
				return true;
			case 3:
				uParam0->f_44 = __LIB_14__::func_725(43);
				return true;
			case 4:
				uParam0->f_44 = __LIB_14__::func_725(44);
				return true;
			case 5:
				uParam0->f_44 = __LIB_14__::func_725(45);
				return true;
			case 6:
				if (!__LIB_0__::func_113())
				{
					uParam0->f_44 = __LIB_14__::func_725(46);
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_739(var uParam0, bool bParam1)
{
	Stack.Push(uParam0->f_37);
	Stack.Push(uParam0);
	Stack.Push(bParam1);
	Call_Loc(uParam0->f_38);
	if (StackVal && StackVal)
	{
		return true;
	}
	if (bParam1)
	{
		switch (uParam0->f_2)
		{
			case 1:
				if (uParam0->f_3 && !__LIB_15__::func_333(uParam0, 256))
				{
					if (__LIB_15__::func_151(uParam0))
					{
						uParam0->f_44 = __LIB_14__::func_725(37);
					}
					else if (__LIB_1__::func_985())
					{
						uParam0->f_45 = 1;
						uParam0->f_44 = __LIB_14__::func_725(18);
					}
					else
					{
						uParam0->f_44 = __LIB_14__::func_725(16);
					}
					__LIB_15__::func_547(uParam0, 256);
					return true;
				}
				else
				{
					uParam0->f_44 = "";
					return true;
				}
				break;
			case 2:
				uParam0->f_44 = __LIB_14__::func_725(41);
				return true;
			default:
				uParam0->f_44 = "";
				return true;
		}
	}
	else
	{
		switch (uParam0->f_2)
		{
			case 1:
				if (uParam0->f_3)
				{
					if (__LIB_15__::func_151(uParam0))
					{
						uParam0->f_44 = "";
						return true;
					}
					else
					{
						if (!__LIB_15__::func_584(uParam0))
						{
							uParam0->f_44 = __LIB_14__::func_726(5);
						}
						else if (__LIB_1__::func_985())
						{
							uParam0->f_45 = 1;
							uParam0->f_44 = __LIB_14__::func_725(19);
						}
						else
						{
							uParam0->f_44 = __LIB_14__::func_725(36);
						}
						return true;
					}
				}
				else
				{
					uParam0->f_44 = "";
					return true;
				}
				break;
			case 2:
				uParam0->f_44 = "";
				if (__LIB_15__::func_585(uParam0))
				{
					if (uParam0->f_15 > 1 && __LIB_1__::func_985())
					{
						uParam0->f_45 = 1;
						uParam0->f_44 = __LIB_14__::func_725(20);
					}
				}
				return true;
			default:
				uParam0->f_44 = "";
				return true;
		}
	}
	return false;
}

int func_740(var uParam0, int iParam1)
{
	vector3 vVar0;
	if (uParam0->f_7)
	{
		if (__LIB_15__::func_261(&(uParam0->f_148)))
		{
			if (!__LIB_15__::func_590(uParam0))
			{
				*iParam1 = 22;
				return 0;
			}
		}
		else
		{
			*iParam1 = 21;
			return 0;
		}
	}
	if (__LIB_15__::func_260(uParam0->f_2, 1) || __LIB_15__::func_260(uParam0->f_2, 0))
	{
		*iParam1 = 19;
		return 0;
	}
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		*iParam1 = 17;
		return 0;
	}
	if (__LIB_7__::func_729())
	{
		*iParam1 = 15;
		return 0;
	}
	if (__LIB_3__::func_63())
	{
		*iParam1 = 1;
		return 0;
	}
	if (__LIB_0__::func_103())
	{
		*iParam1 = 2;
		return 0;
	}
	if (__LIB_7__::func_825())
	{
		*iParam1 = 3;
		return 0;
	}
	if (__LIB_15__::func_262(uParam0))
	{
		*iParam1 = 24;
		return 0;
	}
	if (Global_1911914.f_1582 || Global_1911914.f_1581)
	{
		*iParam1 = 26;
		return 0;
	}
	if (__LIB_15__::func_230(uParam0->f_2))
	{
		*iParam1 = 20;
		return 0;
	}
	if (__LIB_14__::func_743(uParam0->f_2))
	{
		*iParam1 = 8;
		return 0;
	}
	if (!__LIB_15__::func_591(uParam0->f_2))
	{
		*iParam1 = 14;
		return 0;
	}
	if ((uParam0->f_2 != 9 && uParam0->f_2 != 31) && !PED::IS_PED_ON_FOOT(Global_35))
	{
		*iParam1 = 7;
		return 0;
	}
	if (!__LIB_15__::func_111(uParam0->f_2, 16384) && !__LIB_15__::func_263(uParam0->f_2))
	{
		*iParam1 = 20;
		return 0;
	}
	if (!__LIB_15__::func_111(uParam0->f_2, 1))
	{
		if (__LIB_15__::func_114(uParam0->f_2, uParam0->f_3))
		{
			if (!__LIB_15__::func_264(uParam0->f_2))
			{
				*iParam1 = 9;
				return 0;
			}
		}
		else
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1914319.f_3[uParam0->f_2 /*446*/].f_17))
			{
				vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(Global_1914319.f_3[uParam0->f_2 /*446*/].f_17, true) };
			}
			else
			{
				vVar0 = { Global_1051260.f_48[uParam0->f_2 /*78*/].f_3 };
			}
			if (!__LIB_15__::func_260(uParam0->f_2, 4096) && !__LIB_1__::func_374(Global_35, vVar0, Global_1051260.f_48[uParam0->f_2 /*78*/].f_75))
			{
				*iParam1 = 11;
				return 0;
			}
		}
	}
	if (!__LIB_15__::func_265())
	{
		*iParam1 = 28;
		return 0;
	}
	*iParam1 = 0;
	return 1;
}

bool func_741(var uParam0, var uParam1, int iParam2)
{
	char* sVar0;
	char cVar1[64];
	char cVar9[64];
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_277))
	{
		__LIB_15__::func_620(uParam0);
		return false;
	}
	MISC::_INT_TO_STRING(uParam1->f_4, "%i", &cVar9);
	StringCopy(&cVar1, "ScriptDatastoreRoot.DynamicCatalogItems.Page_", 64);
	StringConCat(&cVar1, &cVar9, 64);
	switch (*uParam1)
	{
		case 0:
			if (__LIB_15__::func_184(uParam1))
			{
				sVar0 = "content_page_double";
			}
			else
			{
				sVar0 = "content_page_single";
			}
			break;
		case 1:
		case 15:
			sVar0 = "image_page";
			break;
		case 3:
			sVar0 = "three_items_type_1";
			break;
		case 4:
			sVar0 = "three_items_type_2";
			break;
		case 5:
			sVar0 = "four_items";
			break;
		case 6:
			sVar0 = "nine_items";
			break;
		case 7:
			sVar0 = "template_type_1";
			break;
		case 8:
			sVar0 = "template_type_2";
			break;
		case 9:
			sVar0 = "template_type_3";
			break;
		case 10:
			sVar0 = "template_type_4";
			break;
		case 11:
			sVar0 = "template_type_5";
			break;
		case 12:
			sVar0 = "horse_template_1";
			break;
		case 13:
			sVar0 = "image_page";
			break;
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_PATH_STRING_ALIAS(uParam0->f_277, iParam2, sVar0, &cVar1);
	return true;
}

int func_742(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	struct<4> Var0;
	Var0 = uParam0->f_1267;
	if (!__LIB_15__::func_598(&Var0, iParam2, iParam3))
	{
		return 0;
	}
	Var0.f_2 = -263768109;
	Var0.f_3 = iParam4;
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&(sParam1->f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1105713943;
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&(sParam1->f_1.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = 898488398;
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&(sParam1->f_4), &Var0))
	{
	}
	Var0.f_2 = 1204845779;
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&(sParam1->f_4.f_1), &Var0))
	{
	}
	Var0.f_2 = -781673784;
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&(sParam1->f_7), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1396479160;
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&(sParam1->f_7.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1379369270;
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&(sParam1->f_10), &Var0))
	{
		return 0;
	}
	Var0.f_2 = 766338617;
	if (!DATAFILE::_DATAFILE_GET_INT(&(sParam1->f_11), &Var0))
	{
		return 0;
	}
	Var0.f_2 = 472040200;
	if (!DATAFILE::_DATAFILE_GET_INT(&(sParam1->f_11.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -179210894;
	if (!DATAFILE::_DATAFILE_GET_INT(&(sParam1->f_11.f_2), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -954197744;
	if (!DATAFILE::_DATAFILE_GET_INT(&(sParam1->f_11.f_3), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1149374397;
	if (!DATAFILE::_DATAFILE_GET_BOOL(&(sParam1->f_11.f_4), &Var0))
	{
		return 0;
	}
	return 1;
}

int func_743(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	if (!__LIB_15__::func_599(iParam0, iParam1, &Var0, &iVar31))
	{
		if (!bParam2)
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
	if (!bParam2)
	{
	}
	return 0;
}

void func_744(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_15__::func_600(uParam0, iParam1);
	bVar1 = __LIB_15__::func_601(uParam0, iParam1);
	__LIB_15__::func_634(uParam0, iParam1, 0);
	__LIB_15__::func_635(uParam0, iParam1, 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_53, __LIB_14__::func_866(iParam1), bParam2);
	__LIB_15__::func_634(uParam0, iParam1, bVar0);
	__LIB_15__::func_635(uParam0, iParam1, bVar1);
}

bool func_745(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	iVar0 = __LIB_14__::func_782(uParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	iVar3 = 0;
	while (iVar3 < iVar0)
	{
		iVar1 = __LIB_14__::func_921(iVar3, uParam0);
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			vVar4 = { __LIB_15__::func_605(iVar3, iVar2, uParam0) };
			if (vVar4.x == iParam1)
			{
				*uParam2 = iVar3;
				return true;
			}
			iVar2++;
		}
		iVar3++;
	}
	return false;
}

bool func_746(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0.f_9 = -1591664384;
	if (!__LIB_15__::func_643(iParam0, &Var0))
	{
		return false;
	}
	return __LIB_0__::func_800(iParam1, Var0, joaat("SLOTID_HORSE_MANE"), 0) > 0;
}

bool func_747(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0.f_9 = -1591664384;
	if (!__LIB_15__::func_643(iParam0, &Var0))
	{
		return false;
	}
	return __LIB_0__::func_800(iParam1, Var0, joaat("SLOTID_HORSE_TAIL"), 0) > 0;
}

bool func_748(int iParam0)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10[3];
	switch (iParam0)
	{
		case joaat("CLOTHING_MULTI_ITEM_TRIM_HAIR"):
		case joaat("CLOTHING_MULTI_ITEM_TRIM_ALL"):
		case joaat("CLOTHING_MULTI_ITEM_TRIM_CHOPS"):
		case joaat("CLOTHING_MULTI_ITEM_TRIM_CHIN"):
		case joaat("CLOTHING_MULTI_ITEM_TRIM_STACHE"):
			return false;
		case joaat("CLOTHING_MULTI_ITEM_SUPER_CLEAN"):
			return __LIB_14__::func_987(0);
		case joaat("CLOTHING_MULTI_ITEM_CLEAN"):
			return __LIB_14__::func_987(1);
		default:
			break;
	}
	__LIB_15__::func_432(iParam0, &uVar1);
	__LIB_15__::func_420(iParam0, &uVar10);
	iVar6 = __LIB_15__::func_614(iParam0);
	iVar8 = (__LIB_4__::func_605(iVar6) - uVar10[iVar6]);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		__LIB_12__::func_558(iVar5, &iVar0);
		iVar7 = __LIB_4__::func_605(iVar5);
		if (uVar10[iVar5] != -1 && iVar0 != uVar1[iVar5])
		{
			return false;
		}
		if (uVar10[iVar5] == -1)
		{
			if (iVar7 > 1)
			{
				return false;
			}
		else
		{
			}
			else
			{
				if (iVar7 < uVar10[iVar5])
				{
					return false;
				}
				if (iVar7 > (uVar10[iVar5] + iVar8))
				{
					return false;
				}
				iVar9 = (uVar10[iVar6] - uVar10[iVar5]);
				if (iVar9 != (__LIB_4__::func_605(iVar6) - iVar7))
				{
					return false;
				}
			}
			iVar5++;
			return true;
		}
	}
}

bool func_749(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0.f_9 = -1591664384;
	if (!__LIB_15__::func_643(iParam0, &Var0))
	{
		return false;
	}
	*iParam1 = __LIB_1__::func_81(Var0, joaat("SLOTID_HORSE_MANE"), 0);
	if (!__LIB_0__::func_144(*iParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_750(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0.f_9 = -1591664384;
	if (!__LIB_15__::func_643(iParam0, &Var0))
	{
		return false;
	}
	*iParam1 = __LIB_1__::func_81(Var0, joaat("SLOTID_HORSE_TAIL"), 0);
	if (!__LIB_0__::func_144(*iParam1, 0))
	{
		return false;
	}
	return true;
}

int func_751(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;
	Var0.f_9 = -1591664384;
	if (!__LIB_15__::func_643(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!__LIB_0__::func_939(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_752(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	vector3 vVar1;
	vVar1.f_2 = 10;
	vVar1.f_2.f_1.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	if (!__LIB_15__::func_615(&vVar1, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < vVar1.y)
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, vVar1.f_2[iVar0 /*12*/].f_1, vVar1.f_2[iVar0 /*12*/].f_3[0], vVar1.f_2[iVar0 /*12*/].f_3[1], vVar1.f_2[iVar0 /*12*/].f_3[2], iParam3, iParam4, iParam5, iParam6);
		iVar0++;
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, false, true, false);
	}
	return 1;
}

bool func_753(int iParam0)
{
	if (__LIB_15__::func_616(iParam0))
	{
		return __LIB_7__::func_589(16);
	}
	else if (__LIB_15__::func_23(iParam0))
	{
		return __LIB_15__::func_24();
	}
	else if (__LIB_15__::func_25(iParam0))
	{
		return __LIB_7__::func_589(2);
	}
	return true;
}

bool func_754(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_0__::func_2() == -1)
	{
		return false;
	}
	bVar0 = __LIB_15__::func_657(iParam0);
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051260.f_48[iParam0 /*78*/].f_19);
	iVar3 = Global_1051260.f_48[iParam0 /*78*/].f_6;
	iVar4 = Global_1051260.f_48[iParam0 /*78*/].f_19;
	if (!bVar0)
	{
		if (uParam1->f_2158)
		{
			uParam1->f_2158 = 0;
			TASK::CLEAR_PED_TASKS(iVar1, true, false);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				iVar2 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, -76381094, true);
				if ((iVar2 != 0 && iVar2 != 1) && !__LIB_15__::func_119(iParam0, 4194304))
				{
					PED::SET_PED_CONFIG_FLAG(iVar1, 146, false);
					TASK::_0x9C8F42A5D1859DC1(uParam1->f_1947);
					TASK::_TASK_USE_SCENARIO_POINT(iVar1, iVar3, 0, 0, true, false, 0, false, -1f, false);
				}
			}
			else
			{
				TASK::TASK_STAND_STILL(iVar1, -1);
			}
		}
	}
	else
	{
		iVar2 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 474215631, true);
		if (iVar2 != 1 && iVar2 != 0)
		{
			iVar2 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, -76381094, true);
			if (iVar2 == 1)
			{
				PED::_0xF1C03A5352243A30(iVar1);
				TASK::CLEAR_PED_TASKS(iVar1, true, false);
			}
			else
			{
				TASK::TASK_COWER(iVar1, -1, Global_35, 0);
			}
		}
		else
		{
			uParam1->f_2158 = 1;
		}
	}
	return bVar0;
}

void func_755(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (iParam0->f_7)
	{
		iVar0 = __LIB_0__::func_78(&(iParam0->f_148));
		switch (iVar0)
		{
			case 10:
			case 11:
			default:
				iParam0->f_2319.f_5 = 0;
				break;
				iParam0->f_2319.f_5 = 1;
				break;
			case 6:
			case 8:
				iParam0->f_2319.f_5 = 2;
				break;
			case 7:
				iParam0->f_2319.f_5 = 3;
				break;
			case 9:
			case 20:
			case 21:
			case 22:
				iParam0->f_2319.f_5 = 4;
				break;
			case 12:
				iParam0->f_2319.f_5 = 5;
				break;
		}
		if (iVar0 >= 5)
		{
			bVar1 = iParam0->f_148.f_4.f_1190.f_7 < 25f;
			if (iParam0->f_2319.f_6 != bVar1 && bVar1 == 1)
			{
				iParam0->f_2319.f_7 = 1;
			}
			iParam0->f_2319.f_6 = bVar1;
		}
		else
		{
			iParam0->f_2319.f_6 = 0;
			iParam0->f_2319.f_7 = 0;
		}
	}
	if (__LIB_4__::func_852(iParam0->f_2))
	{
		if (iParam0->f_7 && iParam0->f_19 == 1)
		{
			iVar3 = __LIB_15__::func_144(&(iParam0->f_148.f_4));
			if ((iVar3 == 0 || iVar3 == 13) || iVar3 == 15)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = __LIB_15__::func_550(&(iParam0->f_148.f_4));
			}
		}
		else
		{
			iVar2 = __LIB_14__::func_694(0);
		}
	}
	else if (__LIB_7__::func_825())
	{
		iVar2 = iParam0->f_2010;
	}
	else
	{
		iVar2 = 0;
	}
	if (iParam0->f_2319.f_14 != iVar2)
	{
		__LIB_1__::func_148(&(iParam0->f_2319.f_77));
		iParam0->f_2319.f_16 = 0;
		iParam0->f_2319.f_14 = iVar2;
	}
	iParam0->f_2319.f_12 = iParam0->f_2008;
	iParam0->f_2319.f_13 = iParam0->f_2009;
	iParam0->f_2319.f_1 = iParam0->f_3;
	iParam0->f_2319 = iParam0->f_2;
	iParam0->f_2319.f_2 = iParam0->f_19;
	iParam0->f_2319.f_3 = iParam0->f_7;
}

void func_756(var uParam0, var uParam1)
{
	Global_1914319.f_3[uParam1->f_2 /*446*/].f_415 = uParam0->f_1281.f_1;
	__LIB_15__::func_658(uParam0, 3, 0, 0);
	__LIB_15__::func_658(uParam0, 2, 0, 0);
	__LIB_15__::func_658(uParam0, 5, 0, 0);
	__LIB_15__::func_658(uParam0, 6, 0, 0);
	__LIB_15__::func_658(uParam0, 0, 1, 1);
	__LIB_15__::func_658(uParam0, 1, 1, 1);
	if (__LIB_15__::func_621(uParam0, 0))
	{
	}
	else if (__LIB_15__::func_621(uParam0, 1))
	{
		__LIB_15__::func_549(uParam0, 9);
	}
}

void func_757(var uParam0)
{
	if (uParam0->f_1212 && (!Global_20710.f_2401 || uParam0->f_1266 == 1))
	{
		if (!uParam0->f_1213)
		{
			uParam0->f_1211 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(joaat("SHOP_BROWSING_MAIN_FLOW"));
			uParam0->f_1213 = 1;
		}
		else if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_1211))
		{
			if (!uParam0->f_1214)
			{
				if (!UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_1211, __LIB_15__::func_623(uParam0)))
				{
					return;
				}
				if (!UISTATEMACHINE::_UISTATEMACHINE_CREATE(-1468895189, uParam0->f_1211))
				{
					return;
				}
				uParam0->f_1214 = 1;
			}
		}
	}
	else
	{
		if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_1211))
		{
			UISTATEMACHINE::_UISTATEMACHINE_DESTROY(-1468895189);
			UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_1211));
			uParam0->f_1214 = 0;
		}
		uParam0->f_1213 = 0;
	}
}

void func_758(var uParam0, bool bParam1, bool bParam2)
{
	__LIB_15__::func_624(uParam0, 0, bParam1, 0);
	__LIB_15__::func_624(uParam0, 1, bParam1, 0);
	__LIB_15__::func_624(uParam0, 2, bParam1, bParam2);
	__LIB_15__::func_624(uParam0, 3, bParam1, bParam2);
	__LIB_15__::func_624(uParam0, 4, bParam1, bParam2);
	__LIB_15__::func_624(uParam0, 7, bParam1, bParam2);
	__LIB_15__::func_624(uParam0, 9, bParam1, bParam2);
	__LIB_15__::func_624(uParam0, 5, bParam1, bParam2);
	__LIB_15__::func_624(uParam0, 6, bParam1, bParam2);
	__LIB_15__::func_624(uParam0, 8, 1, bParam2);
}

void func_759(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	iVar0 = uParam0->f_1697;
	iVar1 = uParam0->f_1281.f_1;
	iVar2 = __LIB_15__::func_376(uParam2->f_2031.f_74, &(uParam2->f_2031));
	iVar3 = __LIB_15__::func_581(iVar0);
	bVar4 = (iVar0 == -119387206 || iVar2 == -290839876);
	bVar5 = (iVar2 == 304718089 || iVar2 == 1961550723);
	if (WEAPON::IS_WEAPON_VALID(iVar1))
	{
		bVar6 = (WEAPON::_IS_WEAPON_TWO_HANDED(iVar1) || iVar1 == joaat("WEAPON_SHOTGUN_SAWEDOFF"));
	}
	bVar7 = true;
	bVar8 = PAD::IS_CONTROL_PRESSED(2, __LIB_15__::func_181(4));
	bVar9 = (iVar2 == 1154588893 || iVar2 == 1352974861);
	if (bVar6)
	{
		if (bVar9 && !bVar8)
		{
			if (iVar1 == joaat("WEAPON_REPEATER_EVANS"))
			{
				*uParam1 = { -0.0396f, 0.0598f, 0.2616f };
				uParam1->f_3 = { -42.2944f, 0f, -29.3871f };
				uParam1->f_6 = 42.9575f;
			}
			else
			{
				__LIB_15__::func_247(iVar1, uParam1);
			}
		}
		else if (iVar3 == 807631773 || (bVar5 && iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
		{
			*uParam1 = { 0.058f, -0.0438f, 0.4518f };
			uParam1->f_3 = { -45.1475f, 0.8549f, -42.9574f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 100192478 || (bVar5 && iVar1 == joaat("WEAPON_SHOTGUN_PUMP")))
		{
			*uParam1 = { 0.0722f, -0.0177f, 0.3627f };
			uParam1->f_3 = { -46.339f, 0.8549f, -38.6408f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 427124242 || (bVar5 && iVar1 == joaat("WEAPON_SHOTGUN_SAWEDOFF")))
		{
			*uParam1 = { -0.0081f, 0.0294f, 0.2966f };
			uParam1->f_3 = { -51.7568f, 0f, -28.1368f };
			uParam1->f_6 = 44f;
		}
		else if (iVar3 == -937454324 || (bVar5 && iVar1 == joaat("WEAPON_SHOTGUN_SEMIAUTO")))
		{
			*uParam1 = { 0.0261f, -0.0595f, 0.4256f };
			uParam1->f_3 = { -44.2279f, 0.8549f, -32.3631f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == -1692460667 || (bVar5 && iVar1 == joaat("WEAPON_REPEATER_HENRY")))
		{
			*uParam1 = { 0.0324f, 0.0116f, 0.3668f };
			uParam1->f_3 = { -42.2449f, 0.8549f, -45.1625f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 1822341990 || (bVar5 && iVar1 == joaat("WEAPON_REPEATER_EVANS")))
		{
			*uParam1 = { 0.0424f, 0.0095f, 0.3613f };
			uParam1->f_3 = { -48.0651f, 0.8549f, -39.4458f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 1335861197 || (bVar5 && iVar1 == joaat("WEAPON_REPEATER_WINCHESTER")))
		{
			*uParam1 = { -0.0928f, -0.0452f, 0.5139f };
			uParam1->f_3 = { -47.4636f, 0.8549f, -41.6564f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 1815288415 || (bVar5 && iVar1 == joaat("WEAPON_RIFLE_BOLTACTION")))
		{
			*uParam1 = { -0.0072f, -0.1098f, 0.4836f };
			uParam1->f_3 = { -45.9129f, 0.8549f, -29.1244f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 1601515402 || (bVar5 && iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD")))
		{
			*uParam1 = { 0.0623f, -0.0559f, 0.4003f };
			uParam1->f_3 = { -47.3893f, 0.8549f, -35.3577f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == -357406394 || (bVar5 && iVar1 == joaat("WEAPON_RIFLE_VARMINT")))
		{
			*uParam1 = { -0.086f, -0.0855f, 0.505f };
			uParam1->f_3 = { -45.6209f, 0.8549f, -34.8095f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 495693044 || (bVar5 && iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK")))
		{
			*uParam1 = { -0.0435f, -0.0487f, 0.4569f };
			uParam1->f_3 = { -43.3338f, 0.8549f, -41.1537f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 1379186917 || (bVar5 && iVar1 == joaat("WEAPON_SHOTGUN_REPEATING")))
		{
			*uParam1 = { -0.0262f, -0.1196f, 0.4956f };
			uParam1->f_3 = { -46.3852f, 0.8549f, -31.7697f };
			uParam1->f_6 = 38.0983f;
		}
		else if ((iVar3 == -792172668 || iVar3 == -1395676456) || bVar5)
		{
			*uParam1 = { 0.0324f, 0.0116f, 0.3668f };
			uParam1->f_3 = { -43.3338f, 0.8549f, -38.6408f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 860052020 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
		{
			*uParam1 = { 0.3495f, 0.2125f, 0.2534f };
			uParam1->f_3 = { -53.3307f, 7.129f, 74.852f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 899615863 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_SHOTGUN_PUMP")))
		{
			*uParam1 = { 0.2411f, 0.1641f, 0.2529f };
			uParam1->f_3 = { -44.4359f, 0f, 71.287f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == -247466821 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_SHOTGUN_SAWEDOFF")))
		{
			*uParam1 = { 0.2187f, 0.2089f, 0.2268f };
			uParam1->f_3 = { -65.4668f, 0f, 65.941f };
			uParam1->f_6 = 44f;
		}
		else if (iVar3 == -339438116 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_SHOTGUN_SEMIAUTO")))
		{
			*uParam1 = { 0.2255f, 0.141f, 0.2976f };
			uParam1->f_3 = { -58.1424f, 0f, 40.99f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == -817206030 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_SHOTGUN_REPEATING")))
		{
			*uParam1 = { 0.1934f, 0.1587f, 0.2637f };
			uParam1->f_3 = { -56.2651f, 0f, 42.7217f };
			uParam1->f_6 = 38.0984f;
		}
		else if (iVar3 == 468034421 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_REPEATER_CARBINE")))
		{
			*uParam1 = { 0.2059f, 0.1606f, 0.2393f };
			uParam1->f_3 = { -53.9233f, 0f, 55.248f };
			uParam1->f_6 = 38.0987f;
		}
		else if (iVar3 == 907446160 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_REPEATER_HENRY")))
		{
			*uParam1 = { 0.1706f, 0.0971f, 0.3067f };
			uParam1->f_3 = { -60.4666f, 0f, 23.169f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 1219701681 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_REPEATER_EVANS")))
		{
			*uParam1 = { -0.1473f, 0.1565f, 0.2826f };
			uParam1->f_3 = { -42.1557f, 0f, -58.7327f };
			uParam1->f_6 = 25.7948f;
		}
		else if (iVar3 == -1177461517 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_REPEATER_WINCHESTER")))
		{
			*uParam1 = { 0.1182f, 0.074f, 0.3156f };
			uParam1->f_3 = { -56.9964f, 0f, 32.079f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 196214097 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_RIFLE_BOLTACTION")))
		{
			*uParam1 = { 0.0479f, 0.1916f, 0.4031f };
			uParam1->f_3 = { -81.98f, 1.782f, 32.079f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == -940704970 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD")))
		{
			*uParam1 = { 0.1023f, 0.0985f, 0.2762f };
			uParam1->f_3 = { -56.7651f, 0f, 26.733f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 1261891225 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_RIFLE_VARMINT")))
		{
			*uParam1 = { 0.0951f, 0.1596f, 0.3157f };
			uParam1->f_3 = { -69.2913f, 0f, 26.733f };
			uParam1->f_6 = 42.9575f;
		}
		else if (iVar3 == -201958220 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_SNIPERRIFLE_CARCANO")))
		{
			*uParam1 = { 0.1094f, 0.0662f, 0.322f };
			uParam1->f_3 = { -47.9246f, 0f, 32.079f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 1400281261 || (iVar2 == -521402092 && iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK")))
		{
			*uParam1 = { 0.1434f, 0.1335f, 0.2524f };
			uParam1->f_3 = { -56.5016f, 0f, 32.079f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 468034421 || iVar2 == -521402092)
		{
			*uParam1 = { 0.1261f, 0.0427f, 0.3598f };
			uParam1->f_3 = { -54.2746f, 0f, 19.4059f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == -1959250381 || iVar0 == -1220336138)
		{
			if (iVar1 == joaat("WEAPON_REPEATER_CARBINE"))
			{
				*uParam1 = { 0.2354f, -0.0063f, 0.5571f };
				uParam1->f_3 = { -63.0646f, -6.354f, 42.772f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_HENRY"))
			{
				*uParam1 = { 0.2347f, -0.0357f, 0.4062f };
				uParam1->f_3 = { -52.5792f, -6.354f, 23.169f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_WINCHESTER"))
			{
				*uParam1 = { 0.2881f, 0.0208f, 0.4312f };
				uParam1->f_3 = { -56.5144f, -6.354f, 37.426f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_EVANS"))
			{
				*uParam1 = { -0.1082f, 0.1339f, 0.3125f };
				uParam1->f_3 = { -47.0767f, -6.354f, -48.2522f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_BOLTACTION"))
			{
				*uParam1 = { 0.3231f, -0.1543f, 0.5137f };
				uParam1->f_3 = { -47.7076f, -6.354f, 42.772f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD"))
			{
				*uParam1 = { 0.2518f, -0.1568f, 0.4674f };
				uParam1->f_3 = { -46.1832f, -6.354f, 37.426f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_VARMINT"))
			{
				*uParam1 = { 0.3671f, -0.0839f, 0.2381f };
				uParam1->f_3 = { -26.5615f, -6.354f, 46.337f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_CARCANO"))
			{
				*uParam1 = { 0.1853f, -0.231f, 0.6336f };
				uParam1->f_3 = { -50.1236f, -6.354f, 37.426f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
			{
				*uParam1 = { 0.4533f, -0.3291f, 0.5475f };
				uParam1->f_3 = { -39.9596f, -6.354f, 46.337f };
				uParam1->f_6 = 38.0983f;
			}
			else
			{
				*uParam1 = { 0.3837f, -0.0186f, 0.2293f };
				uParam1->f_3 = { -21.8309f, -6.354f, 54.3358f };
				uParam1->f_6 = 38.0983f;
			}
		}
		else if (iVar2 == 441438185)
		{
			if (iVar1 == joaat("WEAPON_REPEATER_CARBINE"))
			{
				*uParam1 = { -0.34f, 0.0591f, 0.5348f };
				uParam1->f_3 = { -58.6063f, 0.8547f, -29.1491f };
				uParam1->f_6 = 38.0995f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_HENRY"))
			{
				*uParam1 = { -0.099f, 0.06f, 0.3759f };
				uParam1->f_3 = { -51.8877f, 0.8549f, -32.4437f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_EVANS"))
			{
				*uParam1 = { -0.3738f, 0.1337f, 0.4094f };
				uParam1->f_3 = { -54.5928f, 0f, -46.0182f };
				uParam1->f_6 = 42.96f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_WINCHESTER"))
			{
				*uParam1 = { -0.4211f, 0.0114f, 0.5005f };
				uParam1->f_3 = { -53.7457f, -6.354f, -40.2387f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_BOLTACTION"))
			{
				*uParam1 = { -0.2807f, 0.1323f, 0.3494f };
				uParam1->f_3 = { -52.8864f, 0.8549f, -44.6044f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD"))
			{
				*uParam1 = { -0.0287f, 0.2101f, 0.2533f };
				uParam1->f_3 = { -68.6229f, 0f, -32.8033f };
				uParam1->f_6 = 42.9575f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_VARMINT"))
			{
				*uParam1 = { -0.1419f, 0.083f, 0.4623f };
				uParam1->f_3 = { -60.907f, 0.8549f, -30.0441f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
			{
				*uParam1 = { -0.1574f, 0.4596f, 0.2143f };
				uParam1->f_3 = { -23.1731f, 0.8549f, -114.0751f };
				uParam1->f_6 = 38.0985f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_PUMP"))
			{
				*uParam1 = { -0.3708f, 0.0863f, 0.4629f };
				uParam1->f_3 = { -56.7135f, 0.8549f, -39.1649f };
				uParam1->f_6 = 41.8889f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_SEMIAUTO"))
			{
				*uParam1 = { -0.2901f, 0.4467f, 0.2046f };
				uParam1->f_3 = { -28.3865f, 0.8549f, -114.7696f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_REPEATING"))
			{
				*uParam1 = { -0.3708f, 0.0802f, 0.4544f };
				uParam1->f_3 = { -52.9482f, 0.8549f, -37.0306f };
				uParam1->f_6 = 45f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_SAWEDOFF"))
			{
				*uParam1 = { -0.2662f, 0.4686f, 0.1418f };
				uParam1->f_3 = { -19.3525f, 0.8549f, -113.0737f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_CARCANO"))
			{
				*uParam1 = { -0.5385f, 0.0653f, 0.4193f };
				uParam1->f_3 = { -51.2367f, 0.8548f, -28.9365f };
				uParam1->f_6 = 38.0989f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
			{
				*uParam1 = { 0.4533f, -0.3291f, 0.5475f };
				uParam1->f_3 = { -39.9596f, -6.354f, 46.337f };
				uParam1->f_6 = 38.0983f;
			}
			else
			{
				*uParam1 = { 0.3837f, -0.0186f, 0.2293f };
				uParam1->f_3 = { -21.8309f, -6.354f, 54.3358f };
				uParam1->f_6 = 38.0983f;
			}
		}
		else if (iVar2 == -831841811)
		{
			if (iVar1 == joaat("WEAPON_REPEATER_CARBINE"))
			{
				*uParam1 = { 0.0241f, 0.1883f, 0.3345f };
				uParam1->f_3 = { -68.6384f, 0.8549f, -31.8045f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_HENRY"))
			{
				*uParam1 = { -0.099f, 0.06f, 0.3759f };
				uParam1->f_3 = { -51.8877f, 0.8549f, -32.4437f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_EVANS"))
			{
				*uParam1 = { -0.0418f, 0.2087f, 0.2207f };
				uParam1->f_3 = { -60.7217f, 0.8549f, -39.7303f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_WINCHESTER"))
			{
				*uParam1 = { -0.5289f, 0.4267f, 0.1301f };
				uParam1->f_3 = { -14.0698f, 0.8549f, -106.5424f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_BOLTACTION"))
			{
				*uParam1 = { -0.2807f, 0.1323f, 0.3494f };
				uParam1->f_3 = { -52.8864f, 0.8549f, -44.6044f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD"))
			{
				*uParam1 = { -0.0287f, 0.2101f, 0.2533f };
				uParam1->f_3 = { -68.6229f, 0f, -32.8033f };
				uParam1->f_6 = 42.9575f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_VARMINT"))
			{
				*uParam1 = { -0.1419f, 0.083f, 0.4623f };
				uParam1->f_3 = { -60.907f, 0.8549f, -30.0441f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
			{
				*uParam1 = { -0.1053f, 0.4788f, 0.1874f };
				uParam1->f_3 = { -27.1603f, 0.8549f, -120.5878f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_PUMP"))
			{
				*uParam1 = { -0.2527f, 0.1443f, 0.4537f };
				uParam1->f_3 = { -67.2756f, 0.8549f, -23.9115f };
				uParam1->f_6 = 41.8889f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_SEMIAUTO"))
			{
				*uParam1 = { -0.2901f, 0.4467f, 0.2046f };
				uParam1->f_3 = { -28.3865f, 0.8549f, -114.7696f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_REPEATING"))
			{
				*uParam1 = { -0.3833f, 0.5084f, 0.1965f };
				uParam1->f_3 = { -23.8808f, 0.8549f, -117.4378f };
				uParam1->f_6 = 45f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_SAWEDOFF"))
			{
				*uParam1 = { -0.2662f, 0.4686f, 0.1418f };
				uParam1->f_3 = { -19.3525f, 0.8549f, -113.0737f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_CARCANO"))
			{
				*uParam1 = { -0.5385f, 0.0653f, 0.4193f };
				uParam1->f_3 = { -51.2367f, 0.8548f, -28.9365f };
				uParam1->f_6 = 38.0989f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
			{
				*uParam1 = { -0.6278f, 0.0542f, 0.2318f };
				uParam1->f_3 = { -34.2205f, 0.8549f, -40.5957f };
				uParam1->f_6 = 38.0983f;
			}
			else
			{
				*uParam1 = { 0.3837f, -0.0186f, 0.2293f };
				uParam1->f_3 = { -21.8309f, -6.354f, 54.3358f };
				uParam1->f_6 = 38.0983f;
			}
		}
		else if (iVar3 == -1794417972 || (iVar3 == 354352628 && iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
		{
			*uParam1 = { -0.6349f, 0.0963f, 0.1526f };
			uParam1->f_3 = { -19.0414f, 0.8549f, -57.0653f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 1670843243 || (iVar3 == 354352628 && iVar1 == joaat("WEAPON_SHOTGUN_PUMP")))
		{
			*uParam1 = { -0.5146f, 0.1169f, 0.1473f };
			uParam1->f_3 = { -19.2991f, 0.8549f, -57.4369f };
			uParam1->f_6 = 41.8889f;
		}
		else if (iVar3 == -722462870 || (iVar3 == 354352628 && iVar1 == joaat("WEAPON_SHOTGUN_SEMIAUTO")))
		{
			*uParam1 = { -0.561f, 0.1158f, 0.1292f };
			uParam1->f_3 = { -18.3934f, 0.8549f, -55.6858f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == -298901850 || (iVar3 == 354352628 && iVar1 == joaat("WEAPON_SHOTGUN_REPEATING")))
		{
			*uParam1 = { -0.5296f, 0.1308f, 0.1152f };
			uParam1->f_3 = { -18.0893f, 0.8549f, -52.762f };
			uParam1->f_6 = 45f;
		}
		else if (iVar3 == 354352628 && iVar1 == joaat("WEAPON_REPEATER_HENRY"))
		{
			*uParam1 = { -0.648f, 0.088f, 0.1563f };
			uParam1->f_3 = { -20.1531f, 0.8549f, -53.137f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 354352628 && iVar1 == joaat("WEAPON_REPEATER_EVANS"))
		{
			*uParam1 = { -0.5498f, 0.0792f, 0.1799f };
			uParam1->f_3 = { -19.7703f, 0f, -54.0088f };
			uParam1->f_6 = 37.8051f;
		}
		else if (iVar3 == 354352628 && iVar1 == joaat("WEAPON_REPEATER_WINCHESTER"))
		{
			*uParam1 = { -0.5495f, 0.1174f, 0.1228f };
			uParam1->f_3 = { -20.5747f, 0.8549f, -52.8937f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 354352628 && iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD"))
		{
			*uParam1 = { -0.5614f, 0.1268f, 0.1929f };
			uParam1->f_3 = { -33.5134f, 0f, -52.6669f };
			uParam1->f_6 = 42.9575f;
		}
		else if (iVar3 == 354352628 && iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
		{
			*uParam1 = { -0.6875f, 0.1292f, 0.1253f };
			uParam1->f_3 = { -20.6064f, 0.8549f, -58.3842f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == 354352628)
		{
			*uParam1 = { -0.6588f, 0.1318f, 0.1517f };
			uParam1->f_3 = { -21.6577f, 0.8549f, -53.6105f };
			uParam1->f_6 = 38.0983f;
		}
		else if (iVar3 == -1885979781 || (bVar4 && iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
		{
			*uParam1 = { 0.3441f, -0.0043f, 0.4213f };
			uParam1->f_3 = { -60.6849f, 0.8549f, -27.4051f };
			uParam1->f_6 = 43.2665f;
		}
		else if (iVar3 == 307812616 || (bVar4 && iVar1 == joaat("WEAPON_SHOTGUN_PUMP")))
		{
			*uParam1 = { 0.2963f, 0.0847f, 0.3691f };
			uParam1->f_3 = { -65.0645f, 0.8549f, -27.4051f };
			uParam1->f_6 = 43.2665f;
		}
		else if (iVar3 == -1150323212 || (bVar4 && iVar1 == joaat("WEAPON_SHOTGUN_REPEATING")))
		{
			*uParam1 = { -0.2626f, -0.1539f, 0.4487f };
			uParam1->f_3 = { -39.2541f, 0.8549f, -34.6344f };
			uParam1->f_6 = 43.2665f;
		}
		else if (iVar3 == -777015093 || (bVar4 && iVar1 == joaat("WEAPON_SHOTGUN_SAWEDOFF")))
		{
			*uParam1 = { -0.1656f, 0.0868f, 0.2934f };
			uParam1->f_3 = { -47.98f, 0f, -35.6832f };
			uParam1->f_6 = 44f;
		}
		else if (iVar3 == 2135639035 || (bVar4 && iVar1 == joaat("WEAPON_SHOTGUN_SEMIAUTO")))
		{
			*uParam1 = { 0.2547f, 0.0302f, 0.3846f };
			uParam1->f_3 = { -56.2488f, 0.8549f, -25.485f };
			uParam1->f_6 = 43.2665f;
		}
		else if (iVar3 == -140369351 || (bVar4 && iVar1 == joaat("WEAPON_REPEATER_CARBINE")))
		{
			*uParam1 = { -0.0744f, -0.0081f, 0.5488f };
			uParam1->f_3 = { -53.4449f, 0.8549f, -30.6403f };
			uParam1->f_6 = 43.2665f;
		}
		else if (iVar3 == -1126482585 || (bVar4 && iVar1 == joaat("WEAPON_REPEATER_HENRY")))
		{
			*uParam1 = { 0.2414f, 0.0257f, 0.3699f };
			uParam1->f_3 = { -58.8594f, 0.8549f, -22.3114f };
			uParam1->f_6 = 43.2665f;
		}
		else if (iVar3 == 1601295268 || (bVar4 && iVar1 == joaat("WEAPON_REPEATER_EVANS")))
		{
			*uParam1 = { -0.1056f, -0.012f, 0.3754f };
			uParam1->f_3 = { -42.5962f, 0.8549f, -38.2912f };
			uParam1->f_6 = 43.2665f;
		}
		else if (iVar3 == -241638635 || (bVar4 && iVar1 == joaat("WEAPON_REPEATER_WINCHESTER")))
		{
			*uParam1 = { -0.2164f, -0.0466f, 0.3478f };
			uParam1->f_3 = { -35.5525f, 0.8549f, -45.3142f };
			uParam1->f_6 = 43.2665f;
		}
		else if (iVar3 == -548371721 || (bVar4 && iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD")))
		{
			*uParam1 = { -0.1332f, -0.0282f, 0.3992f };
			uParam1->f_3 = { -44.1601f, 0.8549f, -38.0894f };
			uParam1->f_6 = 43.2665f;
		}
		else if (iVar3 == 1077068189 || (bVar4 && iVar1 == joaat("WEAPON_RIFLE_VARMINT")))
		{
			*uParam1 = { 0.1749f, 0.0193f, 0.3664f };
			uParam1->f_3 = { -53.4193f, 0.8548f, -33.7061f };
			uParam1->f_6 = 43.2665f;
		}
		else if (iVar3 == -1693422950 || (bVar4 && iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK")))
		{
			*uParam1 = { -0.1099f, -0.0487f, 0.4491f };
			uParam1->f_3 = { -46.5883f, 0.8548f, -40.8771f };
			uParam1->f_6 = 43.2665f;
		}
		else if ((iVar3 == 1905987493 || iVar0 == joaat("COMPONENT_RIFLE_BOLTACTION_WRAP")) || bVar4)
		{
			*uParam1 = { -0.289f, -0.1903f, 0.4845f };
			uParam1->f_3 = { -38.1148f, 0.8549f, -27.4051f };
			uParam1->f_6 = 43.2665f;
		}
		else if (iVar2 == 1626453334)
		{
			if (iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
			{
				*uParam1 = { 0.12f, 0.0474f, 0.341f };
				uParam1->f_3 = { -57.3081f, 0.8549f, -11.7865f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_PUMP"))
			{
				*uParam1 = { 0.0627f, 0.0473f, 0.3577f };
				uParam1->f_3 = { -59.5259f, 0.855f, -3.6306f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_REPEATING"))
			{
				*uParam1 = { 0.1244f, -0.0112f, 0.4202f };
				uParam1->f_3 = { -57.8078f, 0.8549f, -7.8354f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_SAWEDOFF"))
			{
				*uParam1 = { 0.1358f, 0.1023f, 0.2955f };
				uParam1->f_3 = { -67.0744f, -6.8586f, 11.8322f };
				uParam1->f_6 = 36.2643f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_SEMIAUTO"))
			{
				*uParam1 = { 0.1335f, 0.0111f, 0.392f };
				uParam1->f_3 = { -54.7887f, 0.8549f, -11.1796f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_CARBINE"))
			{
				*uParam1 = { -0.0152f, -0.0404f, 0.3627f };
				uParam1->f_3 = { -47.3876f, 0.8549f, -15.2808f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_HENRY"))
			{
				*uParam1 = { 0.1318f, 0.0184f, 0.3832f };
				uParam1->f_3 = { -58.0061f, 0.8549f, -9.2122f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_WINCHESTER"))
			{
				*uParam1 = { 0.0214f, -0.1594f, 0.3765f };
				uParam1->f_3 = { -41.6148f, 0.8549f, -4.5366f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_EVANS"))
			{
				*uParam1 = { 0.0092f, 0.0414f, 0.4108f };
				uParam1->f_3 = { -53.8556f, 0.8549f, -36.2739f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_BOLTACTION"))
			{
				*uParam1 = { -0.5001f, -0.0049f, 0.6016f };
				uParam1->f_3 = { -52.8442f, 0.8549f, -35.4357f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD"))
			{
				*uParam1 = { 0.0144f, -0.0223f, 0.4093f };
				uParam1->f_3 = { -54.6115f, 0.8549f, -14.2198f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_VARMINT"))
			{
				*uParam1 = { 0.0176f, 0.0033f, 0.3352f };
				uParam1->f_3 = { -43.6371f, 0.8549f, -40.6766f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
			{
				*uParam1 = { 0.1266f, 0.0442f, 0.3498f };
				uParam1->f_3 = { -55.3405f, 0.8549f, -25.1099f };
				uParam1->f_6 = 43.2665f;
			}
			else
			{
				*uParam1 = { 0.0547f, -0.0227f, 0.459f };
				uParam1->f_3 = { -54.7887f, 0.8549f, 4.4017f };
				uParam1->f_6 = 43.2665f;
			}
		}
		else if (iVar2 == 17138058 || (bVar9 && bVar8))
		{
			if (iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
			{
				*uParam1 = { 0.12f, 0.0474f, 0.341f };
				uParam1->f_3 = { -57.3081f, 0.8549f, -11.7865f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_PUMP"))
			{
				*uParam1 = { 0.0627f, 0.0473f, 0.3577f };
				uParam1->f_3 = { -59.5259f, 0.855f, -3.6306f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_REPEATING"))
			{
				*uParam1 = { 0.1244f, -0.0112f, 0.4202f };
				uParam1->f_3 = { -57.8078f, 0.8549f, -7.8354f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_SAWEDOFF"))
			{
				*uParam1 = { 0.1358f, 0.1023f, 0.2955f };
				uParam1->f_3 = { -67.0744f, -6.8586f, 11.8322f };
				uParam1->f_6 = 36.2643f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_SEMIAUTO"))
			{
				*uParam1 = { 0.1335f, 0.0111f, 0.392f };
				uParam1->f_3 = { -54.7887f, 0.8549f, -11.1796f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_CARBINE"))
			{
				*uParam1 = { -0.0152f, -0.0404f, 0.3627f };
				uParam1->f_3 = { -47.3876f, 0.8549f, -15.2808f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_HENRY"))
			{
				*uParam1 = { 0.1318f, 0.0184f, 0.3832f };
				uParam1->f_3 = { -58.0061f, 0.8549f, -9.2122f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_WINCHESTER"))
			{
				*uParam1 = { 0.0928f, 0.0789f, 0.2826f };
				uParam1->f_3 = { -56.5318f, 0.8549f, -13.276f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_EVANS"))
			{
				*uParam1 = { 0.0956f, 0.0916f, 0.24f };
				uParam1->f_3 = { -48.9854f, 0.8549f, -25.4279f };
				uParam1->f_6 = 43.2648f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_BOLTACTION"))
			{
				*uParam1 = { -0.2787f, 0.0062f, 0.6083f };
				uParam1->f_3 = { -63.9167f, 0.0114f, -17.8765f };
				uParam1->f_6 = 42.9616f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD"))
			{
				*uParam1 = { -0.2912f, 0.1094f, 0.4818f };
				uParam1->f_3 = { -63.9505f, 0.8549f, -24.9108f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_VARMINT"))
			{
				*uParam1 = { -0.0073f, -0.0261f, 0.2462f };
				uParam1->f_3 = { -39.8474f, 0.8549f, -24.677f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
			{
				*uParam1 = { 0.1266f, 0.0442f, 0.3498f };
				uParam1->f_3 = { -55.3405f, 0.8549f, -25.1099f };
				uParam1->f_6 = 43.2665f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_CARCANO"))
			{
				*uParam1 = { 0.0277f, 0.0296f, 0.1062f };
				uParam1->f_3 = { -19.4725f, 0.8549f, -14.4512f };
				uParam1->f_6 = 43.2665f;
			}
			else
			{
				*uParam1 = { 0.0547f, -0.0227f, 0.459f };
				uParam1->f_3 = { -54.7887f, 0.8549f, 4.4017f };
				uParam1->f_6 = 43.2665f;
			}
		}
		else if (iVar2 == 592232835)
		{
			if (iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
			{
				*uParam1 = { 0.1918f, 0.0894f, 0.2689f };
				uParam1->f_3 = { -59.037f, 9.8956f, -13.0622f };
				uParam1->f_6 = 37.4364f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_PUMP"))
			{
				*uParam1 = { 0.1231f, 0.0674f, 0.2331f };
				uParam1->f_3 = { -48.9705f, 9.8956f, -20.2671f };
				uParam1->f_6 = 37.4364f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_REPEATING"))
			{
				*uParam1 = { 0.1906f, -0.0605f, 0.2859f };
				uParam1->f_3 = { -43.3641f, 9.8956f, 0.2073f };
				uParam1->f_6 = 37.4364f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_CARBINE"))
			{
				*uParam1 = { 0.1918f, 0.0894f, 0.2689f };
				uParam1->f_3 = { -61.6757f, 9.8956f, -2.2847f };
				uParam1->f_6 = 37.4364f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_HENRY"))
			{
				*uParam1 = { 0.1795f, 0.0492f, 0.3426f };
				uParam1->f_3 = { -60.3774f, 9.8956f, -4.8466f };
				uParam1->f_6 = 37.4364f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_EVANS"))
			{
				*uParam1 = { 0.1031f, 0.1214f, 0.2305f };
				uParam1->f_3 = { -52.6994f, 0f, -32.6948f };
				uParam1->f_6 = 42.9575f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_WINCHESTER"))
			{
				*uParam1 = { 0.1973f, 0.0759f, 0.2864f };
				uParam1->f_3 = { -59.8549f, 9.8953f, -13.4601f };
				uParam1->f_6 = 37.4365f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD"))
			{
				*uParam1 = { 0.1923f, 0.1013f, 0.2489f };
				uParam1->f_3 = { -59.6288f, 9.8956f, -3.9486f };
				uParam1->f_6 = 37.4364f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_VARMINT"))
			{
				*uParam1 = { 0.1896f, 0.1047f, 0.241f };
				uParam1->f_3 = { -61.0254f, 9.8955f, 8.5131f };
				uParam1->f_6 = 37.4365f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
			{
				*uParam1 = { 0.2097f, 0.0858f, 0.2643f };
				uParam1->f_3 = { -57.3053f, 9.8956f, -9.2645f };
				uParam1->f_6 = 37.4364f;
			}
			else
			{
				*uParam1 = { 0.1918f, 0.0894f, 0.2689f };
				uParam1->f_3 = { -55.1995f, 9.8956f, -2.2849f };
				uParam1->f_6 = 37.4364f;
			}
		}
		else if (iVar2 == -1084233660)
		{
			if (iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
			{
				*uParam1 = { 0.1828f, 0.0602f, 0.3069f };
				uParam1->f_3 = { -57.7072f, 0f, -27.189f };
				uParam1->f_6 = 42.9575f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_SAWEDOFF"))
			{
				*uParam1 = { 0.0724f, 0.091f, 0.1862f };
				uParam1->f_3 = { -47.6907f, 0f, -29.4347f };
				uParam1->f_6 = 44f;
			}
		}
		else if (iVar2 == 987319046)
		{
			if (iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
			{
				*uParam1 = { 0.1073f, 0.023f, 0.281f };
				uParam1->f_3 = { -46.2289f, 0f, -22.2437f };
				uParam1->f_6 = 42.9575f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_SAWEDOFF"))
			{
				*uParam1 = { 0.0724f, 0.091f, 0.1862f };
				uParam1->f_3 = { -47.6907f, 0f, -29.4347f };
				uParam1->f_6 = 44f;
			}
		}
		else if (iVar2 == 408285110)
		{
			if (iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD"))
			{
				*uParam1 = { -0.0983f, 0.3672f, 0.195f };
				uParam1->f_3 = { -42.634f, 0f, -112.6872f };
				uParam1->f_6 = 42.9575f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_BOLTACTION"))
			{
				*uParam1 = { -0.0143f, 0.1753f, 0.3303f };
				uParam1->f_3 = { -69.1861f, 0.0114f, -27.5148f };
				uParam1->f_6 = 42.9616f;
			}
		}
		else if (iVar2 == -475430325)
		{
			if (iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD"))
			{
				*uParam1 = { 0.0052f, 0.413f, 0.1552f };
				uParam1->f_3 = { -32.2717f, 0f, -124.7887f };
				uParam1->f_6 = 28.0774f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_BOLTACTION"))
			{
				*uParam1 = { -0.0143f, 0.1753f, 0.3303f };
				uParam1->f_3 = { -69.1861f, 0.0114f, -27.5148f };
				uParam1->f_6 = 42.9616f;
			}
		}
		else if (iVar2 == -1053957790)
		{
			if (iVar1 == joaat("WEAPON_SHOTGUN_PUMP"))
			{
				*uParam1 = { 0.2152f, 0.0048f, 0.0964f };
				uParam1->f_3 = { -18.7867f, 0f, 21.386f };
				uParam1->f_6 = 42.9575f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_BOLTACTION"))
			{
				*uParam1 = { 0.3683f, 0.1412f, 0.2375f };
				uParam1->f_3 = { -52.8658f, 0f, 48.119f };
				uParam1->f_6 = 42.9575f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_VARMINT"))
			{
				*uParam1 = { 0.125f, 0.267f, 0.2783f };
				uParam1->f_3 = { -83.5445f, 0.8538f, -34.5303f };
				uParam1->f_6 = 43.249f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_CARCANO"))
			{
				*uParam1 = { 0.3549f, 0.1553f, 0.2474f };
				uParam1->f_3 = { -45.7499f, 0f, 60.594f };
				uParam1->f_6 = 42.9575f;
			}
		}
		else if (iVar2 == 18337332)
		{
			if (iVar1 == joaat("WEAPON_RIFLE_VARMINT"))
			{
				*uParam1 = { -0.0669f, 0.3992f, 0.1918f };
				uParam1->f_3 = { -37.3305f, 0f, -114.4108f };
				uParam1->f_6 = 30.1575f;
			}
		}
		else if (iVar2 == 939898478)
		{
			if (iVar1 == joaat("WEAPON_REPEATER_CARBINE"))
			{
				*uParam1 = { 0.1413f, 0.0623f, 0.2639f };
				uParam1->f_3 = { -55.2499f, 0f, -11.0066f };
				uParam1->f_6 = 42.9575f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_HENRY"))
			{
				*uParam1 = { 0.1538f, 0.0136f, 0.2859f };
				uParam1->f_3 = { -52.2328f, 0f, -10.0306f };
				uParam1->f_6 = 42.9575f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_EVANS"))
			{
				*uParam1 = { 0.1031f, 0.1214f, 0.2305f };
				uParam1->f_3 = { -52.6994f, 0f, -32.6948f };
				uParam1->f_6 = 42.9575f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_WINCHESTER"))
			{
				*uParam1 = { 0.1897f, 0.0628f, 0.2753f };
				uParam1->f_3 = { -59.1267f, 0f, -13.3297f };
				uParam1->f_6 = 42.9575f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_REPEATING"))
			{
				*uParam1 = { 0.1052f, 0.0059f, 0.3531f };
				uParam1->f_3 = { -54.6103f, 0f, -19.2907f };
				uParam1->f_6 = 42.9575f;
			}
		}
		else if (iVar2 == 394502831)
		{
			if (iVar1 == joaat("WEAPON_REPEATER_CARBINE"))
			{
				*uParam1 = { -0.0148f, 0.028f, 0.141f };
				uParam1->f_3 = { -21.938f, 0f, -38.188f };
				uParam1->f_6 = 30.5735f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_HENRY"))
			{
				*uParam1 = { 0.0162f, -0.0949f, 0.1317f };
				uParam1->f_3 = { -18.5184f, 0f, -37.6219f };
				uParam1->f_6 = 23.8441f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_EVANS"))
			{
				*uParam1 = { 0.0743f, -0.0465f, 0.166f };
				uParam1->f_3 = { -24.3015f, 0f, -29.3194f };
				uParam1->f_6 = 21.9584f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_WINCHESTER"))
			{
				*uParam1 = { 0.0346f, -0.0253f, 0.0766f };
				uParam1->f_3 = { -12.2111f, 0f, -48.1116f };
				uParam1->f_6 = 21.8631f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_REPEATING"))
			{
				*uParam1 = { 0.2226f, -0.1059f, 0.1057f };
				uParam1->f_3 = { -19.4947f, 0f, -6.7647f };
				uParam1->f_6 = 28.7173f;
			}
		}
		else if (iVar2 == 262994138)
		{
			if (iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
			{
				*uParam1 = { 0.3683f, 0.1412f, 0.2375f };
				uParam1->f_3 = { -52.8658f, 0f, 48.119f };
				uParam1->f_6 = 42.9575f;
			}
		}
		else if (iVar2 == 1607930473)
		{
			if (iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
			{
				*uParam1 = { 0.4263f, 0.4154f, 0.162f };
				uParam1->f_3 = { -31.6013f, 0f, 141f };
				uParam1->f_6 = 28.7173f;
			}
		}
		else if (iVar2 == -1024879141)
		{
			if (iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
			{
				*uParam1 = { 0.3614f, -0.023f, 0.3651f };
				uParam1->f_3 = { -56.4904f, 0.8549f, -32.3108f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_PUMP"))
			{
				*uParam1 = { 0.3474f, 0.0708f, 0.3209f };
				uParam1->f_3 = { -62.6781f, 0.8549f, -27.4033f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_REPEATING"))
			{
				*uParam1 = { 0.3144f, -0.0766f, 0.4836f };
				uParam1->f_3 = { -55.1987f, 0f, -22.0243f };
				uParam1->f_6 = 30.689f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_SAWEDOFF"))
			{
				*uParam1 = { 0.2902f, 0.119f, 0.285f };
				uParam1->f_3 = { -74.3174f, 0f, 48.119f };
				uParam1->f_6 = 42.0591f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_SEMIAUTO"))
			{
				*uParam1 = { 0.3409f, 0.0834f, 0.3511f };
				uParam1->f_3 = { -61.8607f, 0.8549f, -26.3156f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_CARBINE"))
			{
				*uParam1 = { 0.3445f, 0.1256f, 0.3985f };
				uParam1->f_3 = { -73.7814f, 0.8549f, -27.2878f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_HENRY"))
			{
				*uParam1 = { 0.3512f, 0.0913f, 0.3533f };
				uParam1->f_3 = { -70.7703f, 0.8549f, -31.7621f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_EVANS"))
			{
				*uParam1 = { 0.3807f, 0.1389f, 0.2723f };
				uParam1->f_3 = { -69.0745f, 0.8549f, -33.2129f };
				uParam1->f_6 = 38.0983f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_WINCHESTER"))
			{
				*uParam1 = { 0.3805f, 0.0441f, 0.4107f };
				uParam1->f_3 = { -66.1137f, 0.8549f, -31.8234f };
				uParam1->f_6 = 32.6413f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_BOLTACTION"))
			{
				*uParam1 = { 0.341f, 0.0348f, 0.3311f };
				uParam1->f_3 = { -55.1886f, 0.8549f, -27.1677f };
				uParam1->f_6 = 38.0984f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD"))
			{
				*uParam1 = { 0.327f, 0.0752f, 0.3223f };
				uParam1->f_3 = { -61.9213f, 0.8548f, -33.9066f };
				uParam1->f_6 = 38.0988f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_VARMINT"))
			{
				*uParam1 = { 0.373f, 0.0385f, 0.2658f };
				uParam1->f_3 = { -56.9846f, 0.8549f, -24.0533f };
				uParam1->f_6 = 38.0984f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_CARCANO"))
			{
				*uParam1 = { 0.3263f, 0.1348f, 0.3218f };
				uParam1->f_3 = { -65.9641f, 0.8549f, -30.8058f };
				uParam1->f_6 = 38.0984f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
			{
				*uParam1 = { 0.4341f, 0.0416f, 0.3099f };
				uParam1->f_3 = { -61.9247f, 0.8549f, -27.7396f };
				uParam1->f_6 = 38.0983f;
			}
		}
		else if (iVar2 == 1180321387)
		{
			if (iVar1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL"))
			{
				*uParam1 = { 0.4249f, 0.177f, 0.2915f };
				uParam1->f_3 = { -48.5745f, 41.8448f, 69.505f };
				uParam1->f_6 = 34.5617f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_PUMP"))
			{
				*uParam1 = { 0.3932f, 0.1952f, 0.2541f };
				uParam1->f_3 = { -49.6996f, 41.8375f, 74.852f };
				uParam1->f_6 = 34.5632f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_REPEATING"))
			{
				*uParam1 = { 0.4536f, 0.2233f, 0.2458f };
				uParam1->f_3 = { -42.1127f, 41.8448f, 90.891f };
				uParam1->f_6 = 34.5617f;
			}
			else if (iVar1 == joaat("WEAPON_SHOTGUN_SAWEDOFF"))
			{
				*uParam1 = { 0.2927f, 0.1399f, 0.2286f };
				uParam1->f_3 = { -53.1919f, 28.2729f, 53.466f };
				uParam1->f_6 = 36.2788f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_CARBINE"))
			{
				*uParam1 = { 0.4249f, 0.177f, 0.2915f };
				uParam1->f_3 = { -50.437f, 41.8448f, 69.505f };
				uParam1->f_6 = 34.5617f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_HENRY"))
			{
				*uParam1 = { 0.4249f, 0.177f, 0.2915f };
				uParam1->f_3 = { -52.2543f, 41.8448f, 74.852f };
				uParam1->f_6 = 34.5617f;
			}
			else if (iVar1 == joaat("WEAPON_REPEATER_WINCHESTER"))
			{
				*uParam1 = { 0.4475f, 0.1603f, 0.3338f };
				uParam1->f_3 = { -52.7278f, 41.8448f, 74.852f };
				uParam1->f_6 = 34.5617f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_BOLTACTION"))
			{
				*uParam1 = { 0.4596f, 0.2276f, 0.2342f };
				uParam1->f_3 = { -43.8121f, 41.8448f, 83.763f };
				uParam1->f_6 = 34.5617f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_SPRINGFIELD"))
			{
				*uParam1 = { 0.4252f, 0.1773f, 0.2856f };
				uParam1->f_3 = { -48.1032f, 41.8445f, 78.416f };
				uParam1->f_6 = 34.5618f;
			}
			else if (iVar1 == joaat("WEAPON_RIFLE_VARMINT"))
			{
				*uParam1 = { 0.4249f, 0.177f, 0.2915f };
				uParam1->f_3 = { -48.9657f, 41.8448f, 74.851f };
				uParam1->f_6 = 34.5617f;
			}
			else if (iVar1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
			{
				*uParam1 = { 0.4249f, 0.177f, 0.2915f };
				uParam1->f_3 = { -53.6054f, 41.8448f, 76.634f };
				uParam1->f_6 = 34.5617f;
			}
			else
			{
				*uParam1 = { 0.4249f, 0.177f, 0.2915f };
				uParam1->f_3 = { -44.7213f, 41.8448f, 66.9479f };
				uParam1->f_6 = 34.5617f;
			}
		}
		else if (iVar2 == 1352371774)
		{
			if (iVar1 == joaat("WEAPON_REPEATER_EVANS"))
			{
				*uParam1 = { -0.1546f, 0.0909f, 0.2661f };
				uParam1->f_3 = { -41.7094f, 0f, -42.7146f };
				uParam1->f_6 = 36.8743f;
			}
		}
		else
		{
			__LIB_15__::func_247(iVar1, uParam1);
			bVar7 = false;
		}
	}
	else if (bVar9 && !bVar8)
	{
		__LIB_15__::func_247(iVar1, uParam1);
	}
	else if (iVar2 == 441438185 || iVar2 == -831841811)
	{
		if (iVar1 == joaat("WEAPON_PISTOL_MAUSER"))
		{
			*uParam1 = { -0.0117f, 0.1609f, 0.2337f };
			uParam1->f_3 = { -60.535f, 0f, -31.7767f };
			uParam1->f_6 = 42.0591f;
		}
		else if (iVar1 == joaat("WEAPON_PISTOL_SEMIAUTO"))
		{
			*uParam1 = { 0.0161f, 0.164f, 0.2386f };
			uParam1->f_3 = { -61.6982f, 0f, -28.9245f };
			uParam1->f_6 = 42.2048f;
		}
		else if (iVar1 == joaat("WEAPON_PISTOL_VOLCANIC"))
		{
			*uParam1 = { -0.0652f, 0.1504f, 0.2736f };
			uParam1->f_3 = { -65.3083f, 0f, -19.8369f };
			uParam1->f_6 = 42.0591f;
		}
		else if (iVar1 == joaat("WEAPON_PISTOL_M1899"))
		{
			*uParam1 = { -0.012f, 0.113f, 0.272f };
			uParam1->f_3 = { -53.891f, 0f, -26.882f };
			uParam1->f_6 = 42.059f;
		}
		else if (iVar1 == joaat("WEAPON_REVOLVER_CATTLEMAN"))
		{
			*uParam1 = { -0.0192f, 0.1773f, 0.2003f };
			uParam1->f_3 = { -54.2047f, 0f, -35.4321f };
			uParam1->f_6 = 43.9918f;
		}
		else if (iVar1 == joaat("WEAPON_REVOLVER_DOUBLEACTION"))
		{
			*uParam1 = { 0.0081f, 0.179f, 0.2421f };
			uParam1->f_3 = { -63.2347f, 0f, -33.2255f };
			uParam1->f_6 = 43.9918f;
		}
		else if (iVar1 == joaat("WEAPON_REVOLVER_SCHOFIELD"))
		{
			*uParam1 = { -0.0186f, 0.1555f, 0.2536f };
			uParam1->f_3 = { -62.6896f, 0f, -27.3927f };
			uParam1->f_6 = 43.9918f;
		}
		else if (iVar1 == joaat("WEAPON_REVOLVER_LEMAT"))
		{
			*uParam1 = { -0.0186f, 0.1555f, 0.2536f };
			uParam1->f_3 = { -62.6896f, 0f, -27.3927f };
			uParam1->f_6 = 43.9918f;
		}
	}
	else if (iVar3 == -468790222 || (iVar3 == 635273153 && iVar1 == joaat("WEAPON_PISTOL_MAUSER")))
	{
		*uParam1 = { -0.1309f, 0.1141f, 0.1482f };
		uParam1->f_3 = { -32.8166f, 0f, -37.4492f };
		uParam1->f_6 = 42.0591f;
	}
	else if (iVar3 == 835771095 || (iVar3 == 635273153 && iVar1 == joaat("WEAPON_PISTOL_SEMIAUTO")))
	{
		*uParam1 = { -0.1424f, 0.1313f, 0.1368f };
		uParam1->f_3 = { -27.8035f, 0f, -47.965f };
		uParam1->f_6 = 42.2048f;
	}
	else if (iVar3 == -1509094230 || (iVar3 == 635273153 && iVar1 == joaat("WEAPON_PISTOL_VOLCANIC")))
	{
		*uParam1 = { -0.2665f, 0.1278f, 0.1474f };
		uParam1->f_3 = { -27.0483f, 0f, -55.436f };
		uParam1->f_6 = 42.0591f;
	}
	else if (iVar3 == 1402841185 || (iVar3 == 635273153 && iVar1 == joaat("WEAPON_PISTOL_M1899")))
	{
		*uParam1 = { -0.096f, 0.198f, 0.109f };
		uParam1->f_3 = { -29.061f, 0f, -62.434f };
		uParam1->f_6 = 34.45f;
	}
	else if (iVar3 == 1024262875 || (iVar3 == 635273153 && iVar1 == joaat("WEAPON_REVOLVER_CATTLEMAN")))
	{
		*uParam1 = { -0.2102f, 0.1404f, 0.1218f };
		uParam1->f_3 = { -23.0238f, 0f, -54.2791f };
		uParam1->f_6 = 43.9918f;
	}
	else if (iVar3 == -1959697839 || iVar3 == 635273153)
	{
		*uParam1 = { -0.2102f, 0.1404f, 0.1218f };
		uParam1->f_3 = { -23.0238f, 0f, -54.2791f };
		uParam1->f_6 = 43.9918f;
	}
	else if ((iVar3 == -1264898804 || iVar3 == 1985390213) || iVar3 == 635273153)
	{
		*uParam1 = { -0.2102f, 0.1404f, 0.1218f };
		uParam1->f_3 = { -23.0238f, 0f, -54.2791f };
		uParam1->f_6 = 43.9918f;
	}
	else if (iVar3 == 1732537631 || (bVar5 && iVar1 == joaat("WEAPON_PISTOL_MAUSER")))
	{
		*uParam1 = { 0.1413f, 0.0152f, 0.223f };
		uParam1->f_3 = { -48.7769f, 0f, -10.6247f };
		uParam1->f_6 = 42.0591f;
	}
	else if (bVar5 && iVar1 == joaat("WEAPON_MELEE_KNIFE"))
	{
		*uParam1 = { 0.2597f, 0.1672f, 0.1918f };
		uParam1->f_3 = { -67.9896f, 0f, -2.1193f };
		uParam1->f_6 = 42.0591f;
	}
	else if (iVar2 == -1024879141)
	{
		if (iVar1 == joaat("WEAPON_PISTOL_MAUSER"))
		{
			*uParam1 = { 0.2026f, 0.1551f, 0.2084f };
			uParam1->f_3 = { -81.1703f, 0f, -10.7329f };
			uParam1->f_6 = 42.0591f;
		}
		else if (iVar1 == joaat("WEAPON_PISTOL_SEMIAUTO"))
		{
			*uParam1 = { 0.2011f, 0.1649f, 0.2314f };
			uParam1->f_3 = { -81.1595f, 0f, -7.647f };
			uParam1->f_6 = 42.0591f;
		}
		else if (iVar1 == joaat("WEAPON_PISTOL_VOLCANIC"))
		{
			*uParam1 = { 0.2097f, 0.1433f, 0.2329f };
			uParam1->f_3 = { -77.0685f, 0f, -11.3452f };
			uParam1->f_6 = 42.0591f;
		}
		else if (iVar1 == joaat("WEAPON_PISTOL_M1899"))
		{
			*uParam1 = { 0.168f, 0.067f, 0.193f };
			uParam1->f_3 = { -53.606f, 0f, -12.696f };
			uParam1->f_6 = 42.0591f;
		}
		else if (iVar1 == joaat("WEAPON_REVOLVER_CATTLEMAN"))
		{
			*uParam1 = { 0.2217f, 0.1532f, 0.1958f };
			uParam1->f_3 = { -78.5381f, 0f, -9.0568f };
			uParam1->f_6 = 42.0591f;
		}
		else if (iVar1 == joaat("WEAPON_REVOLVER_DOUBLEACTION"))
		{
			*uParam1 = { 0.2194f, 0.1254f, 0.1906f };
			uParam1->f_3 = { -68.9191f, 0f, -10.0842f };
			uParam1->f_6 = 42.0591f;
		}
		else if (iVar1 == joaat("WEAPON_REVOLVER_SCHOFIELD"))
		{
			*uParam1 = { 0.2179f, 0.1313f, 0.1913f };
			uParam1->f_3 = { -70.3121f, 0f, -11.1253f };
			uParam1->f_6 = 42.0591f;
		}
		else if (iVar1 == joaat("WEAPON_REVOLVER_LEMAT"))
		{
			*uParam1 = { 0.2179f, 0.1313f, 0.1913f };
			uParam1->f_3 = { -70.3121f, 0f, -11.1253f };
			uParam1->f_6 = 42.0591f;
		}
	}
	else if ((((((iVar3 == -337288221 || iVar3 == 1423542233) || iVar3 == -1674390752) || iVar3 == -1532267859) || iVar3 == 259627919) || iVar3 == 1549741908) || bVar5)
	{
		*uParam1 = { 0.1826f, 0.0545f, 0.2128f };
		uParam1->f_3 = { -52.836f, 0f, -7.647f };
		uParam1->f_6 = 42.0591f;
	}
	else if (iVar3 == 2125676786)
	{
		*uParam1 = { 0.168f, 0.067f, 0.193f };
		uParam1->f_3 = { -53.606f, 0f, -12.696f };
		uParam1->f_6 = 42.0591f;
	}
	else if (iVar3 == 1755095401)
	{
		*uParam1 = { 0.4133f, 0.2407f, 0.1718f };
		uParam1->f_3 = { -31.9677f, 62.7346f, 89.109f };
		uParam1->f_6 = 36.2665f;
	}
	else if (iVar3 == 1299075397)
	{
		*uParam1 = { 0.4776f, 0.2229f, 0.2122f };
		uParam1->f_3 = { -43.2181f, 62.7346f, 89.109f };
		uParam1->f_6 = 36.2665f;
	}
	else if (iVar3 == 361381308)
	{
		*uParam1 = { 0.3238f, 0.2338f, 0.1973f };
		uParam1->f_3 = { -43.5019f, 62.7346f, 89.109f };
		uParam1->f_6 = 36.2665f;
	}
	else if (iVar3 == 1880805647)
	{
		*uParam1 = { 0.3371f, 0.2419f, 0.195f };
		uParam1->f_3 = { -39.506f, 62.7346f, 89.109f };
		uParam1->f_6 = 36.2665f;
	}
	else if (iVar3 == -1410062763)
	{
		*uParam1 = { 0.0906f, 0.4433f, 0.1456f };
		uParam1->f_3 = { -32.079f, -16.039f, -148.0758f };
		uParam1->f_6 = 24.8845f;
	}
	else if (((iVar3 == -948489286 || iVar3 == 288484254) || iVar3 == -363896735) || iVar2 == -521402092)
	{
		if (iVar1 == joaat("WEAPON_PISTOL_M1899"))
		{
			*uParam1 = { 0.048f, 0.382f, 0.148f };
			uParam1->f_3 = { -31.228f, 0f, -116.071f };
			uParam1->f_6 = 23.473f;
		}
		else
		{
			*uParam1 = { 0.3702f, 0.2059f, 0.2075f };
			uParam1->f_3 = { -40.452f, 62.7346f, 82.1106f };
			uParam1->f_6 = 36.2665f;
		}
	}
	else if (iVar2 == -1053957790 || iVar2 == 18337332)
	{
		if (iVar1 == joaat("WEAPON_PISTOL_SEMIAUTO"))
		{
			*uParam1 = { 0.1515f, 0.4423f, 0.1308f };
			uParam1->f_3 = { -27.8806f, 0f, -141.3346f };
			uParam1->f_6 = 44f;
		}
		else if (iVar1 == joaat("WEAPON_PISTOL_MAUSER"))
		{
			*uParam1 = { 0.0935f, 0.1217f, 0.2445f };
			uParam1->f_3 = { -57.9498f, 0f, -29.1084f };
			uParam1->f_6 = 44f;
		}
		else
		{
			*uParam1 = { 0.1515f, 0.4423f, 0.1308f };
			uParam1->f_3 = { -27.8806f, 0f, -141.3346f };
			uParam1->f_6 = 44f;
		}
	}
	else if (iVar2 == 939898478)
	{
		if (iVar1 == joaat("WEAPON_PISTOL_VOLCANIC"))
		{
			*uParam1 = { 0.0951f, 0.0498f, 0.2391f };
			uParam1->f_3 = { -55.6272f, 0f, -14.7752f };
			uParam1->f_6 = 44f;
		}
		else if (iVar1 == joaat("WEAPON_PISTOL_M1899"))
		{
			*uParam1 = { 0.162f, 0.048f, 0.198f };
			uParam1->f_3 = { -48.596f, 0f, -21.198f };
			uParam1->f_6 = 27.792f;
		}
	}
	else if (iVar2 == 394502831)
	{
		if (iVar1 == joaat("WEAPON_PISTOL_VOLCANIC"))
		{
			*uParam1 = { 0.0992f, 0.0088f, 0.1341f };
			uParam1->f_3 = { -31.9989f, 0f, -10.7288f };
			uParam1->f_6 = 32.2273f;
		}
		else if (iVar1 == joaat("WEAPON_PISTOL_M1899"))
		{
			*uParam1 = { 0.162f, 0.048f, 0.198f };
			uParam1->f_3 = { -48.596f, 0f, -21.198f };
			uParam1->f_6 = 27.792f;
		}
	}
	else if ((iVar2 == 1626453334 || iVar2 == 17138058) || (bVar9 && bVar8))
	{
		if (iVar1 == joaat("WEAPON_PISTOL_M1899"))
		{
			*uParam1 = { 0.064f, 0.077f, 0.247f };
			uParam1->f_3 = { -49.969f, 0f, -25.343f };
			uParam1->f_6 = 42.059f;
		}
		else
		{
			*uParam1 = { 0.1034f, 0.0432f, 0.2657f };
			uParam1->f_3 = { -53.7569f, -6.8586f, -8.0168f };
			uParam1->f_6 = 36.2643f;
		}
	}
	else if (iVar2 == 1028454343 || iVar2 == 1163935740)
	{
		*uParam1 = { 0.2816f, 0.1119f, 0.2029f };
		uParam1->f_3 = { -49.4804f, 13.4819f, 45.7833f };
		uParam1->f_6 = 36.2643f;
	}
	else if (iVar2 == 592232835)
	{
		if (iVar1 == joaat("WEAPON_PISTOL_M1899"))
		{
			*uParam1 = { 0.106f, 0.024f, 0.253f };
			uParam1->f_3 = { -44.12f, 13.482f, -13.568f };
			uParam1->f_6 = 23.26f;
		}
		else
		{
			*uParam1 = { 0.2403f, 0.1026f, 0.1968f };
			uParam1->f_3 = { -57.0545f, 13.4819f, 35.0749f };
			uParam1->f_6 = 36.2788f;
		}
	}
	else if (iVar2 == 1180321387)
	{
		*uParam1 = { 0.307f, 0.1439f, 0.1992f };
		uParam1->f_3 = { -51.5828f, 28.2729f, 51.3715f };
		uParam1->f_6 = 36.2788f;
	}
	else
	{
		__LIB_15__::func_247(iVar1, uParam1);
		bVar7 = false;
	}
	if (uParam1->f_6 == 0f)
	{
		__LIB_15__::func_247(iVar1, uParam1);
		bVar7 = false;
	}
	__LIB_15__::func_624(&(uParam0->f_4), 8, bVar7, bVar7);
	if (bVar9)
	{
		__LIB_15__::func_582(&(uParam0->f_4), 8, "SHOP_ZOOM");
	}
	else
	{
		__LIB_15__::func_582(&(uParam0->f_4), 8, "SHOP_ZOOM_OUT");
	}
	if ((bVar7 && bVar8) && !bVar9)
	{
		__LIB_15__::func_247(iVar1, uParam1);
	}
}

int func_760(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam1 == 2)
	{
		if (HUD::_UIPROMPT_IS_VALID(uParam0->f_1261))
		{
			return 0;
		}
		else
		{
			uParam0->f_1261 = HUD::_UIPROMPT_REGISTER_BEGIN();
			HUD::_0xF4A5C4509BF923B1(uParam0->f_1261, 0);
			HUD::_UIPROMPT_SET_CONTROL_ACTION(uParam0->f_1261, __LIB_15__::func_191(0));
			HUD::_UIPROMPT_SET_CONTROL_ACTION(uParam0->f_1261, __LIB_15__::func_191(1));
			HUD::_UIPROMPT_SET_TEXT(uParam0->f_1261, sParam2);
			HUD::_UIPROMPT_SET_ATTRIBUTE(uParam0->f_1261, 13, 1);
			HUD::_UIPROMPT_SET_PRIORITY(uParam0->f_1261, iParam6);
			HUD::_UIPROMPT_SET_VISIBLE(uParam0->f_1261, false);
			HUD::_UIPROMPT_SET_ENABLED(uParam0->f_1261, false);
			HUD::_UIPROMPT_REGISTER_END(uParam0->f_1261);
			return 1;
		}
	}
	else if (!__LIB_0__::func_139(uParam0->f_1216[iParam1]))
	{
		uParam0->f_1216[iParam1] = __LIB_4__::func_450(sParam2, iParam3, iParam4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, iParam6, iParam5, 0);
		__LIB_15__::func_624(uParam0, iParam1, 0, 0);
		if (iParam4 == 4 || iParam4 == 5)
		{
			uParam0->f_1216.f_11[iParam1] = 1;
		}
		else
		{
			uParam0->f_1216.f_11[iParam1] = 0;
		}
		if (iParam6 != 3)
		{
			HUD::_UIPROMPT_SET_PRIORITY(Global_1945938[uParam0->f_1216[iParam1] /*18*/].f_3, iParam6);
		}
		__LIB_14__::func_235(uParam0->f_1216[iParam1], __LIB_15__::func_248(iParam1));
		return 1;
	}
	return 0;
}

int func_761(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_139(uParam0->f_1698[iParam1]))
	{
		uParam0->f_1698[iParam1] = __LIB_4__::func_450(sParam2, iParam3, iParam4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, iParam5, 0);
		__LIB_15__::func_658(uParam0, iParam1, 0, 0);
		if (iParam4 == 4 || iParam4 == 5)
		{
			uParam0->f_1698.f_8[iParam1] = 1;
		}
		else
		{
			uParam0->f_1698.f_8[iParam1] = 0;
		}
		return 1;
	}
	return 0;
}

int func_762(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (uParam0->f_7)
	{
		if (*uParam0 == 7)
		{
			*iParam1 = 23;
			return 0;
		}
		if (__LIB_15__::func_261(&(uParam0->f_148)))
		{
			if (!__LIB_15__::func_590(uParam0))
			{
				*iParam1 = 22;
				return 0;
			}
		}
		else
		{
			*iParam1 = 21;
			return 0;
		}
	}
	if (__LIB_15__::func_260(uParam0->f_2, 1) || __LIB_15__::func_260(uParam0->f_2, 0))
	{
		*iParam1 = 19;
		return 0;
	}
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		*iParam1 = 17;
		return 0;
	}
	if (PED::IS_PED_USING_ACTION_MODE(Global_35))
	{
		*iParam1 = 18;
		return 0;
	}
	if (__LIB_2__::func_805(uParam0->f_3))
	{
		__LIB_2__::func_803(uParam0->f_2, &iVar0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			*iParam1 = 16;
			return 0;
		}
	}
	if (!__LIB_15__::func_27(uParam0->f_2))
	{
		*iParam1 = 4;
		return 0;
	}
	if (__LIB_7__::func_729())
	{
		*iParam1 = 15;
		return 0;
	}
	if (__LIB_3__::func_63())
	{
		*iParam1 = 1;
		return 0;
	}
	if (__LIB_7__::func_825())
	{
		*iParam1 = 3;
		return 0;
	}
	if (__LIB_11__::func_171(uParam0->f_3))
	{
		*iParam1 = 5;
		return 0;
	}
	if (__LIB_3__::func_563(uParam0->f_2, uParam0->f_3))
	{
		*iParam1 = 6;
		return 0;
	}
	if (__LIB_15__::func_230(uParam0->f_2))
	{
		*iParam1 = 20;
		return 0;
	}
	if (uParam0->f_2 == 22)
	{
		if (__LIB_4__::func_900(0) == 0)
		{
			__LIB_1__::func_240(521, 0);
			*iParam1 = 20;
			return 0;
		}
	}
	if (__LIB_14__::func_743(uParam0->f_2))
	{
		*iParam1 = 8;
		return 0;
	}
	if (__LIB_15__::func_262(uParam0))
	{
		*iParam1 = 24;
		return 0;
	}
	if (Global_1911914.f_1582 || Global_1911914.f_1581)
	{
		*iParam1 = 26;
		return 0;
	}
	if ((uParam0->f_2 == 2 || uParam0->f_2 == 1) || uParam0->f_2 == 19)
	{
		if (!__LIB_14__::func_703(uParam0->f_2))
		{
			*iParam1 = 13;
			return 0;
		}
	}
	if (!__LIB_4__::func_922(uParam0->f_2, 1))
	{
		if (__LIB_15__::func_114(uParam0->f_2, uParam0->f_3) && !__LIB_15__::func_370(uParam0))
		{
			if (!PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				*iParam1 = 9;
				return 0;
			}
			else if (iVar1 != Global_1914319.f_3[uParam0->f_2 /*446*/].f_23)
			{
				*iParam1 = 10;
				return 0;
			}
		}
		else
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1914319.f_3[uParam0->f_2 /*446*/].f_17))
			{
				vVar2 = { TASK::_GET_SCENARIO_POINT_COORDS(Global_1914319.f_3[uParam0->f_2 /*446*/].f_17, true) };
			}
			else
			{
				vVar2 = { Global_1914319.f_3[uParam0->f_2 /*446*/].f_11 };
			}
			if (!__LIB_15__::func_260(uParam0->f_2, 4096) && !__LIB_1__::func_374(Global_35, vVar2, Global_1914319.f_3[uParam0->f_2 /*446*/].f_409))
			{
				*iParam1 = 11;
				return 0;
			}
		}
	}
	if (__LIB_15__::func_260(uParam0->f_2, 8192))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), uParam0->f_1947, true, 0))
		{
			*iParam1 = 12;
			return 0;
		}
	}
	*iParam1 = 0;
	return 1;
}

void func_763(var uParam0)
{
	if (Global_1914319.f_18975 != -1 && __LIB_8__::func_574(uParam0->f_101, 0) == Global_1914319.f_18975)
	{
		__LIB_3__::func_157(&(uParam0->f_8[2 /*17*/]), &(Global_1914319.f_18971), 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		uParam0->f_6 = 1;
	}
	else
	{
		__LIB_4__::func_454(&(uParam0->f_8[2 /*17*/]), 1);
		uParam0->f_6 = 0;
	}
}

void func_764(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = Global_1914319.f_16855;
	iVar1 = Global_1914319.f_18748;
	if (Global_1914319.f_19461.f_20 == 1)
	{
		return;
	}
	Global_1914319.f_19461.f_21 = iParam0;
	Global_1914319.f_19461 = *uParam1;
	if (iVar0 == -1 || __LIB_14__::func_798(&Global_1949604, 2))
	{
		if (!__LIB_12__::func_487(__LIB_7__::func_821(iVar1)))
		{
			if (MISC::_IS_GLOBAL_BLOCK_VALID(4))
			{
				Global_1914319.f_19461.f_22[0 /*12*/] = { Global_1949604.f_5881 };
				Global_1914319.f_19461.f_22[0 /*12*/].f_3 = { Global_1949604.f_5884 };
				Global_1914319.f_19461.f_2.f_9 = CAM::GET_GAMEPLAY_CAM_FOV();
			}
			else
			{
				Global_1914319.f_19461.f_22[0 /*12*/] = { Global_1949604.f_5881 };
				Global_1914319.f_19461.f_22[0 /*12*/].f_3 = { Global_1949604.f_5884 };
				if (iVar1 == 115)
				{
					Global_1914319.f_19461.f_2.f_9 = CAM::GET_GAMEPLAY_CAM_FOV();
				}
				else
				{
					Global_1914319.f_19461.f_2.f_9 = 51.3f;
				}
			}
		}
		else if (MISC::_IS_GLOBAL_BLOCK_VALID(5))
		{
			if (__LIB_14__::func_798(&Global_1949604, 2))
			{
				Global_1914319.f_19461.f_22[0 /*12*/] = { Global_1949604.f_5881 };
				Global_1914319.f_19461.f_22[0 /*12*/].f_3 = { Global_1949604.f_5884 };
				Global_1914319.f_19461.f_2.f_9 = CAM::GET_GAMEPLAY_CAM_FOV();
			}
		}
		else
		{
			Global_1914319.f_19461.f_22[0 /*12*/] = { CAM::GET_CAM_COORD(*uParam1) };
			Global_1914319.f_19461.f_22[0 /*12*/].f_3 = { CAM::GET_CAM_ROT(*uParam1, 2) };
			Global_1914319.f_19461.f_2.f_9 = CAM::GET_GAMEPLAY_CAM_FOV();
		}
	}
	else
	{
		if (iVar0 == 20)
		{
			Global_1914319.f_19461.f_22[0 /*12*/] = { CAM::GET_CAM_COORD(*uParam1) };
			Global_1914319.f_19461.f_22[0 /*12*/].f_3 = { CAM::GET_CAM_ROT(*uParam1, 2) };
		}
		else
		{
			__LIB_15__::func_347(&(Global_1914319.f_19461.f_22[0 /*12*/]), iVar0, iVar1, joaat("CATCLOTHINGCAMPOS"));
			__LIB_15__::func_347(&(Global_1914319.f_19461.f_22[0 /*12*/].f_3), iVar0, iVar1, joaat("CATCLOTHINGCAMROT"));
		}
		Global_1914319.f_19461.f_2.f_9 = 51.3f;
	}
	__LIB_15__::func_664(iParam0, iVar0, iVar1);
	__LIB_14__::func_710(1);
	Global_1914319.f_19461.f_20 = 1;
}

void func_765(var uParam0)
{
	Global_1914319.f_19461.f_21 = *uParam0;
	Global_1914319.f_19461.f_22[0 /*12*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 0.1773f, 2.1151f, 0.576f) };
	Global_1914319.f_19461.f_22[0 /*12*/].f_3 = { ENTITY::GET_ENTITY_ROTATION(*uParam0, 2) + Vector(186.414f, 0f, -14.7873f) };
	Global_1914319.f_19461.f_2.f_9 = 50.9f;
	__LIB_15__::func_664(*uParam0, 24, __LIB_0__::func_12());
	Global_1914319.f_19461.f_20 = 1;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", Global_1914319.f_19461.f_22[0 /*12*/], Global_1914319.f_19461.f_22[0 /*12*/].f_3, Global_1914319.f_19461.f_2.f_9, false, 2);
	}
	else
	{
		CAM::SET_CAM_PARAMS(uParam0->f_2, Global_1914319.f_19461.f_22[0 /*12*/], Global_1914319.f_19461.f_22[0 /*12*/].f_3, Global_1914319.f_19461.f_2.f_9, 0, 1, 1, 2, 1, 0);
	}
	if (!CAM::IS_CAM_ACTIVE(uParam0->f_2))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_2, true);
	}
	if (!CAM::IS_CAM_RENDERING(uParam0->f_2))
	{
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	__LIB_15__::func_402(uParam0->f_2, 0);
}

bool func_766(int iParam0, var uParam1)
{
	if (__LIB_15__::func_638(uParam1))
	{
		if (__LIB_15__::func_639(iParam0, uParam1))
		{
			return true;
		}
	}
	return false;
}

int func_767(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		__LIB_10__::func_247(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_768(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_14__::func_769(uParam0);
	__LIB_15__::func_650(&(Global_1946804.f_1497));
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (__LIB_14__::func_919(iVar2, iParam1, iParam2, iVar0))
		{
			if (__LIB_15__::func_608(uParam0, iVar2, iVar1))
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	return 1;
}

int func_769(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	iVar0 = __LIB_14__::func_694(0);
	Var1 = { __LIB_1__::func_623() };
	if (__LIB_14__::func_903(iVar0))
	{
		__LIB_15__::func_654(uParam0, iVar0, Var1.f_1);
		__LIB_14__::func_885(uParam0, 1);
		__LIB_14__::func_807(uParam0, 1);
		__LIB_14__::func_808(uParam0, 0);
	}
	else if (__LIB_14__::func_981(iVar0))
	{
		__LIB_15__::func_465(uParam0, iVar0, Var1.f_3);
		__LIB_14__::func_885(uParam0, 1);
		__LIB_14__::func_808(uParam0, 1);
		__LIB_14__::func_807(uParam0, 0);
	}
	else
	{
		__LIB_14__::func_885(uParam0, 0);
		__LIB_14__::func_807(uParam0, 0);
		__LIB_14__::func_808(uParam0, 0);
	}
	return 1;
}

bool func_770(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_15__::func_655(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar1 = __LIB_14__::func_988(420195545);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(__LIB_14__::func_768(), iParam2, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return true;
}

bool func_771(int iParam0)
{
	return __LIB_15__::func_653(__LIB_0__::func_357(iParam0), iParam0);
}

int func_772(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_831(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_3__::func_586(iParam1);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return 0;
	}
	iVar1 = PED::_0xE76687023D8C8505(iVar0, 0);
	return __LIB_15__::func_672(uParam0, iVar1);
}

bool func_773(int iParam0)
{
	var uVar0;
	return __LIB_15__::func_665(iParam0, &uVar0);
}

void func_774(int iParam0, var uParam1)
{
	if (iParam0 == 1)
	{
		uParam1->f_102 = 8;
	}
	else if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
	{
		uParam1->f_102 = 1024;
	}
	else if (iParam0 == 2)
	{
		uParam1->f_102 = 16;
	}
	else if (iParam0 == 6)
	{
		uParam1->f_102 = 32;
	}
	else if (iParam0 == 10)
	{
		uParam1->f_102 = 64;
	}
	else if (iParam0 == 18)
	{
		uParam1->f_102 = 32768;
	}
	else if (iParam0 == 4)
	{
		uParam1->f_102 = 256;
	}
	else if (iParam0 == 9)
	{
		uParam1->f_102 = 8192;
	}
	else if (iParam0 == 20)
	{
		uParam1->f_102 = 128;
	}
	else
	{
		uParam1->f_102 = 8;
	}
	uParam1->f_115 = __LIB_8__::func_574(uParam1->f_101, 0);
	if ((uParam1->f_115 == 365 || uParam1->f_115 == 385) && iParam0 == 6)
	{
		uParam1->f_102 |= 128;
	}
	else if (iParam0 == 6)
	{
		uParam1->f_102 = 32;
	}
	if (uParam1->f_77.f_6 == -1)
	{
		__LIB_13__::func_140(&(uParam1->f_77), 1, 0);
	}
	if (uParam1->f_115 == 74 && PERSCHAR::_0xA00DF706C60173D1(joaat("RHD_GENERAL_STORE")) == joaat("CS_MRPEARSON"))
	{
		uParam1->f_113 = "COMP_PEARSON";
		uParam1->f_114 = 2;
		PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, joaat("DISCOVERABLE_NAME_ALVIN_BANKS"));
	}
	else if (uParam1->f_115 == 74 && PERSCHAR::_0xA00DF706C60173D1(joaat("RHD_GENERAL_STORE")) != joaat("CS_MRPEARSON"))
	{
		if (__LIB_0__::func_293(45))
		{
			PLAYER::_0xCDDD4B74660E2335(PLAYER::PLAYER_ID(), 0, joaat("DISCOVERABLE_NAME_ALVIN_BANKS"));
		}
	}
}

void func_775(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (iVar0 != -1)
		{
			__LIB_15__::func_660(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_776(var uParam0)
{
	__LIB_15__::func_663(uParam0);
	if (HUD::_UIPROMPT_IS_VALID(Global_1914319.f_19461.f_180))
	{
		if (HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(Global_1914319.f_19461.f_180))
		{
			if (!Global_1914319.f_19461.f_179)
			{
				__LIB_15__::func_625(uParam0);
			}
		}
		else if (Global_1914319.f_19461.f_179)
		{
			__LIB_15__::func_625(uParam0);
		}
	}
}

int func_777(var uParam0)
{
	return __LIB_15__::func_662(uParam0);
}

bool func_778(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { __LIB_15__::func_488(iParam0, 1, 0) };
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
	__LIB_1__::func_455(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
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

int func_779(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = __LIB_14__::func_769(uParam0);
	iVar4 = 0;
	while (iVar4 < 130)
	{
		if (__LIB_14__::func_919(iVar1, iParam1, iParam2, iVar0))
		{
			iVar2 = -1;
			if (!__LIB_0__::func_20(iVar4))
			{
			}
			else if (!__LIB_3__::func_222(iVar4))
			{
			}
			else
			{
				iVar2 = __LIB_10__::func_29(__LIB_5__::func_235(iVar4, 1, 1));
				if (!__LIB_0__::func_630(iVar2))
				{
				}
				else if (iVar2 == 5)
				{
				}
				else if (__LIB_11__::func_863(iVar3, iVar2))
				{
				}
				else if (__LIB_15__::func_651(uParam0, iVar2, iVar1))
				{
					__LIB_1__::func_471(&iVar3, iVar2);
					iVar1++;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

bool func_780(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	int iVar15;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	Var0 = { __LIB_15__::func_488(iParam0, 0, 0) };
	Var0.f_4 = uParam2;
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	iVar10 = __LIB_0__::func_357(iParam0);
	iVar15 = __LIB_0__::func_857(iParam0);
	iVar9 = 0;
	while (iVar9 < iVar15)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			iVar14 = __LIB_1__::func_81(Var5, iVar11, 0);
			if (__LIB_0__::func_144(iVar14, 0))
			{
				if (__LIB_0__::func_192(iVar14, iParam1))
				{
					return true;
				}
			}
		}
		iVar9++;
	}
	return false;
}

bool func_781(var uParam0, var uParam1)
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam1->f_136[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			sVar1 = __LIB_15__::func_578(uParam1->f_136[iVar0 /*3*/]);
			if (TXD::_DOES_STREAMED_TEXTURE_DICT_EXIST(sVar1))
			{
				TXD::REQUEST_STREAMED_TEXTURE_DICT(sVar1, false);
			}
		}
		iVar0++;
	}
	if (*uParam1 == 1)
	{
		sVar1 = __LIB_15__::func_484(uParam1);
		if (!MISC::ARE_STRINGS_EQUAL(sVar1, "catalog_interior"))
		{
			if (TXD::_DOES_STREAMED_TEXTURE_DICT_EXIST(sVar1))
			{
				TXD::REQUEST_STREAMED_TEXTURE_DICT(sVar1, false);
			}
		}
	}
	uParam1->f_1 = 1;
	return true;
}

bool func_782(var uParam0, var uParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	iVar1 = uParam1->f_149;
	if (iVar1 > 0)
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (uParam1->f_136[iVar2 /*3*/] == 0)
			{
			}
			else
			{
				sVar0 = __LIB_15__::func_578(uParam1->f_136[iVar2 /*3*/]);
				if (TXD::_DOES_STREAMED_TEXTURE_DICT_EXIST(sVar0))
				{
					if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
					{
						return false;
					}
				}
			}
			iVar2++;
		}
	}
	if (*uParam1 == 1)
	{
		sVar0 = __LIB_15__::func_484(uParam1);
		if (!MISC::ARE_STRINGS_EQUAL(sVar0, "catalog_interior"))
		{
			if (TXD::_DOES_STREAMED_TEXTURE_DICT_EXIST(sVar0))
			{
				if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
				{
					return false;
				}
			}
		}
	}
	return true;
}

int func_783(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { __LIB_15__::func_488(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, __LIB_0__::func_162(0), &Var5);
	return 1;
}

void func_784(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { __LIB_15__::func_488(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(__LIB_0__::func_162(0), &Var5, bParam1);
}

bool func_785(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	Var0 = { __LIB_15__::func_488(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return __LIB_0__::func_975(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, bParam4) };
	return __LIB_0__::func_939(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

int func_786(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	var uVar9;
	if (!__LIB_0__::func_787(iParam0))
	{
		return -1;
	}
	Var0 = { __LIB_15__::func_488(iParam0, 0, 0) };
	Var0.f_4 = iParam1;
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	uVar9 = INVENTORY::_0xAB5F12746A099A0E(__LIB_0__::func_162(0), &Var5);
	return uVar9;
}

bool func_787(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_15__::func_679(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar1 = __LIB_14__::func_988(193788635);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(__LIB_14__::func_768(), iParam2, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_58, -1, iVar1, iVar0);
	return true;
}

bool func_788(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = __LIB_0__::func_357(iParam1);
		iVar5 = __LIB_0__::func_857(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, iVar2))
				{
					*uParam4 = { __LIB_15__::func_488(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { __LIB_0__::func_429(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = __LIB_0__::func_162(0);
			Var37 = { __LIB_15__::func_488(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { __LIB_0__::func_429(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = __LIB_0__::func_357(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, iVar2))
							{
								if (__LIB_0__::func_814(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

int func_789(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (__LIB_0__::func_2() == 0)
	{
		return 1;
	}
	__LIB_15__::func_668(iParam0, iParam1, iParam2);
	__LIB_15__::func_521(iParam0, iParam1);
	__LIB_15__::func_522(iParam0, iParam3);
	__LIB_15__::func_523(iParam0, iParam3);
	return 1;
}

void func_790(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_15__::func_524(iParam0))
	{
		if (__LIB_14__::func_939(iParam0))
		{
			iVar0 = __LIB_7__::func_636(__LIB_15__::func_525(iParam0));
			__LIB_0__::func_443(iVar0);
			__LIB_0__::func_703(0, 10);
			iVar1 = __LIB_0__::func_23();
			iVar2 = __LIB_0__::func_23();
			__LIB_1__::func_446(&iVar1, 0, 0, 6, 0, 0, 0, 0);
			__LIB_1__::func_446(&iVar2, 0, 0, 0, 1, 0, 0, 0);
			if (!__LIB_10__::func_643(1) && __LIB_0__::func_965() >= 1)
			{
				__LIB_1__::func_612(joaat("TP_DB_QUARTZ_CHUNK_01"), iVar1, 1);
			}
			if (!__LIB_10__::func_643(2) && __LIB_0__::func_965() >= 15)
			{
				__LIB_1__::func_612(joaat("TP_DB_SKULL_STATUE_01"), iVar1, 1);
			}
			if (__LIB_0__::func_965() >= 30)
			{
				__LIB_1__::func_612(joaat("TP_DB_INVITATION_01"), iVar2, 1);
			}
		}
	}
}

void func_791(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_15__::func_526(iParam0))
	{
		if (__LIB_14__::func_939(iParam0))
		{
			iVar0 = __LIB_7__::func_637(__LIB_15__::func_527(iParam0));
			__LIB_0__::func_443(iVar0);
			__LIB_0__::func_703(0, 10);
			iVar1 = __LIB_0__::func_23();
			iVar2 = __LIB_0__::func_23();
			__LIB_1__::func_446(&iVar1, 0, 0, 6, 0, 0, 0, 0);
			__LIB_1__::func_446(&iVar2, 0, 0, 0, 1, 0, 0, 0);
			if (!__LIB_14__::func_853(1) && __LIB_0__::func_528() >= 1)
			{
				__LIB_1__::func_612(joaat("TP_RC_WHISKEY_01"), iVar1, 1);
				__LIB_1__::func_612(joaat("TP_RC_TEN_DOLLARS_01"), iVar1, 1);
			}
			if (!__LIB_14__::func_853(2) && __LIB_0__::func_528() >= 5)
			{
				__LIB_1__::func_612(joaat("TP_RC_ROCK_STATUE_01"), iVar1, 1);
			}
			if (__LIB_0__::func_528() >= 10)
			{
				__LIB_1__::func_612(joaat("TP_RC_INVITATION_01"), iVar2, 1);
			}
		}
	}
}

void func_792(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_14__::func_939(iParam0))
	{
		if (__LIB_15__::func_609(iParam0, 724542304))
		{
			__LIB_15__::func_530(__LIB_15__::func_611(iParam0, 51132409));
			__LIB_0__::func_703(0, 10);
			if (__LIB_0__::func_964() >= 12)
			{
				__LIB_0__::func_896(16, 1);
			}
			iVar0 = __LIB_0__::func_23();
			__LIB_1__::func_446(&iVar0, 0, 0, 6, 0, 0, 0, 0);
			if (__LIB_0__::func_964() == 1)
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_FIRST_REWARD"), iVar0, 1);
			}
			if (!__LIB_15__::func_531(1) && __LIB_0__::func_530(1))
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_ACT_01_REWARD"), iVar0, 1);
				__LIB_1__::func_612(joaat("TP_CARD_SET_ACT_02_REWARD"), iVar0, 1);
				__LIB_15__::func_532(1);
			}
			if (!__LIB_15__::func_531(4) && __LIB_0__::func_530(4))
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_AML_01_REWARD"), iVar0, 1);
				__LIB_1__::func_612(joaat("TP_CARD_SET_AML_02_REWARD"), iVar0, 1);
				__LIB_15__::func_532(4);
			}
			if (!__LIB_15__::func_531(8) && __LIB_0__::func_530(8))
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_ART_01_REWARD"), iVar0, 1);
				__LIB_1__::func_612(joaat("TP_CARD_SET_ART_02_REWARD"), iVar0, 1);
				__LIB_15__::func_532(8);
			}
			if (!__LIB_15__::func_531(16) && __LIB_0__::func_530(16))
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_GRL_01_REWARD"), iVar0, 1);
				__LIB_1__::func_612(joaat("TP_CARD_SET_GRL_02_REWARD"), iVar0, 1);
				__LIB_15__::func_532(16);
			}
			if (!__LIB_15__::func_531(32) && __LIB_0__::func_530(32))
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_GUN_01_REWARD"), iVar0, 1);
				__LIB_1__::func_612(joaat("TP_CARD_SET_GUN_02_REWARD"), iVar0, 1);
				__LIB_15__::func_532(32);
			}
			if (!__LIB_15__::func_531(64) && __LIB_0__::func_530(64))
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_HOR_01_REWARD"), iVar0, 1);
				__LIB_1__::func_612(joaat("TP_CARD_SET_HOR_02_REWARD"), iVar0, 1);
				__LIB_15__::func_532(64);
			}
			if (!__LIB_15__::func_531(128) && __LIB_0__::func_530(128))
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_INV_01_REWARD"), iVar0, 1);
				__LIB_1__::func_612(joaat("TP_CARD_SET_INV_02_REWARD"), iVar0, 1);
				__LIB_15__::func_532(128);
			}
			if (!__LIB_15__::func_531(256) && __LIB_0__::func_530(256))
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_LND_01_REWARD"), iVar0, 1);
				__LIB_1__::func_612(joaat("TP_CARD_SET_LND_02_REWARD"), iVar0, 1);
				__LIB_15__::func_532(256);
			}
			if (!__LIB_15__::func_531(2) && __LIB_0__::func_530(2))
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_PAM_01_REWARD"), iVar0, 1);
				__LIB_1__::func_612(joaat("TP_CARD_SET_PAM_02_REWARD"), iVar0, 1);
				__LIB_15__::func_532(2);
			}
			if (!__LIB_15__::func_531(512) && __LIB_0__::func_530(512))
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_PLT_01_REWARD"), iVar0, 1);
				__LIB_1__::func_612(joaat("TP_CARD_SET_PLT_02_REWARD"), iVar0, 1);
				__LIB_15__::func_532(512);
			}
			if (!__LIB_15__::func_531(1024) && __LIB_0__::func_530(1024))
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_SPT_01_REWARD"), iVar0, 1);
				__LIB_1__::func_612(joaat("TP_CARD_SET_SPT_02_REWARD"), iVar0, 1);
				__LIB_15__::func_532(1024);
			}
			if (!__LIB_15__::func_531(2048) && __LIB_0__::func_530(2048))
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_VEH_01_REWARD"), iVar0, 1);
				__LIB_1__::func_612(joaat("TP_CARD_SET_VEH_02_REWARD"), iVar0, 1);
				__LIB_15__::func_532(2048);
			}
			if (!__LIB_15__::func_531(4096) && __LIB_0__::func_964() >= 12)
			{
				__LIB_1__::func_612(joaat("TP_CARD_SET_FINAL_REWARD"), iVar0, 1);
				__LIB_15__::func_532(4096);
			}
		}
	}
}

bool func_793(var uParam0, var uParam1, int iParam2, struct<4> Param3, int iParam7, int iParam8)
{
	int iVar0;
	vector3 vVar1;
	if (iParam2 < 0)
	{
		return false;
	}
	uParam1->f_3 = iParam2;
	if (__LIB_2__::func_774(34) && Param3.f_1 == joaat("FULLPAGE_LAYOUT_1"))
	{
		*uParam1 = 1;
	}
	else
	{
		*uParam1 = __LIB_15__::func_321(uParam0, Param3.f_1);
	}
	uParam1->f_133 = iParam8;
	uParam1->f_134 = iParam7;
	uParam1->f_149 = Param3.f_3;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	if (Param3.f_3 >= 4)
	{
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		vVar1 = { __LIB_14__::func_875(iVar0, Param3, &(uParam0->f_223)) };
		uParam1->f_136[iVar0 /*3*/] = { vVar1 };
		iVar0++;
	}
	return true;
}

bool func_794(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	int iVar6;
	struct<5> Var7;
	struct<4> Var12;
	struct<9> Var16;
	int iVar26;
	int iVar27;
	int iVar28;
	vector3 vVar29;
	int iVar36;
	int iVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_787(iParam0))
	{
		return false;
	}
	iVar1 = __LIB_0__::func_357(iParam0);
	Var7 = { __LIB_15__::func_488(iParam0, 0, 0) };
	Var7.f_4 = iParam1;
	Var12 = { __LIB_0__::func_429(iParam0, Var7, Var7.f_4, 0) };
	Var16 = -1;
	Var16.f_1 = -1;
	Var16.f_2 = -1;
	Var16.f_3 = -1;
	Var16.f_4 = -1;
	Var16.f_5 = -1;
	Var16.f_6 = -1;
	Var16.f_7 = -1;
	Var16.f_8 = -1;
	iVar36 = 1;
	iVar37 = __LIB_0__::func_857(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar37)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
		{
			if (((((((((iVar2 == -1088328663 || iVar2 == 513602003) || iVar2 == -1420574021) || iVar2 == 1079459546) || iVar2 == -1779133048) || iVar2 == 1254273765) || iVar2 == 2063859257) || iVar2 == -1652627327) || (iParam0 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK") && iVar2 == 1400281261)) || (iParam0 == joaat("WEAPON_SNIPERRIFLE_CARCANO") && iVar2 == -201958220))
			{
			}
			else
			{
				Var16 = iVar2;
				iVar26 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var16, &iVar27, 1);
				if (iVar26 == -1)
				{
				}
				else if (iVar27 == 0)
				{
					ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar26);
				}
				else
				{
					if (ITEMDATABASE::_0x8750F69A720C2E41(iVar26, 0, &iVar28) && ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iVar28, &vVar29))
					{
						if (vVar29.z == joaat("WEAPON_MOD") || (vVar29.z == joaat("WEAPON_DECORATION") && (iVar2 == 354352628 || iVar2 == 635273153)))
						{
							iVar5 = __LIB_1__::func_81(Var12, iVar2, 0);
							iVar6 = __LIB_14__::func_959(iParam0, iVar2);
							if (__LIB_0__::func_144(iVar5, 0))
							{
								if (iVar5 == iVar6)
								{
									if (iVar27 > 1)
									{
										iVar36 = 0;
									}
								}
							}
							else if (__LIB_0__::func_144(iVar6, 0))
							{
							}
							else
							{
								iVar36 = 0;
							}
						}
					}
					ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar26);
				}
			}
		}
		iVar0++;
	}
	return iVar36;
}

bool func_795(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	Var0.f_9 = -1591664384;
	if (!__LIB_15__::func_643(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { __LIB_0__::func_429(iParam1, Var0, joaat("SLOTID_HORSE_MANE"), 0) };
	return __LIB_1__::func_556(Var29, 1);
}

bool func_796(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	Var0.f_9 = -1591664384;
	if (!__LIB_15__::func_643(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { __LIB_0__::func_429(iParam1, Var0, joaat("SLOTID_HORSE_TAIL"), 0) };
	return __LIB_1__::func_556(Var29, 1);
}

bool func_797(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	if (__LIB_15__::func_656(uParam0, 0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (__LIB_0__::func_814(*uParam1, joaat("SLOTID_HORSE_SADDLE"), &Var0, iParam2))
	{
		if (!__LIB_1__::func_555(*uParam0, Var0, 1, iParam2))
		{
			return false;
		}
	}
	else if (!__LIB_1__::func_638(*uParam0, *uParam1, joaat("SLOTID_HORSE_SADDLE"), 1, iParam2))
	{
		return false;
	}
	return true;
}

bool func_798(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { __LIB_15__::func_488(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(__LIB_0__::func_162(0), &Var5, iParam1);
	return true;
}

int func_799(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
				if (__LIB_15__::func_90(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
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

int func_800(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!__LIB_15__::func_643(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!__LIB_15__::func_643(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = __LIB_0__::func_577(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!__LIB_1__::func_638(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!__LIB_1__::func_555(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_801()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;
	Var0 = { __LIB_15__::func_488(856287005, 0, 0) };
	Var5 = { __LIB_0__::func_429(856287005, Var0, Var0.f_4, 0) };
	iVar10 = __LIB_0__::func_357(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = __LIB_1__::func_81(Var5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!__LIB_0__::func_144(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = __LIB_0__::func_857(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = __LIB_1__::func_81(Var5, iVar11, 0);
			if (!__LIB_0__::func_144(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (__LIB_0__::func_848(iVar14) || __LIB_0__::func_847(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (__LIB_0__::func_848(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!__LIB_0__::func_848(iVar14) && __LIB_0__::func_688(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (__LIB_1__::func_419(iVar11, &Var16, 1))
									{
										if (!__LIB_1__::func_556(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

bool func_802(int* iParam0, struct<4> Param1, var uParam5, int iParam6)
{
	struct<10> Var0;
	struct<16> Var14;
	if (__LIB_15__::func_468(iParam0))
	{
		return false;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param1, &Var0, 1, 0))
	{
		return false;
	}
	if (!__LIB_15__::func_64(Param1, 816454899, 1))
	{
		return false;
	}
	Var14 = { __LIB_0__::func_662(&Var0) };
	Var14.f_13 = 816454899;
	Var14.f_12 = 1992602754;
	*uParam5 = { Var14 };
	if (!__LIB_15__::func_673(iParam0, Var14, joaat("SELL"), iParam6))
	{
		return false;
	}
	return true;
}

bool func_803(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	var uVar10;
	int iVar13;
	int iVar14;
	Var0 = { __LIB_15__::func_488(856287005, 0, 0) };
	Var5 = { __LIB_0__::func_429(856287005, Var0, Var0.f_4, 0) };
	iVar9 = __LIB_0__::func_357(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar9, 0, &uVar10))
	{
		iVar13 = __LIB_1__::func_81(Var5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!__LIB_0__::func_144(iVar13, 0))
	{
		return false;
	}
	iVar14 = __LIB_1__::func_81(Var5, iParam0, 0);
	if ((iParam0 == joaat("SLOTID_HORSE_BLANKET") && __LIB_0__::func_688(iVar14)) && bParam1)
	{
		return false;
	}
	return iVar14 != 0;
}

void func_804(var uParam0)
{
	__LIB_15__::func_675(uParam0);
	GRAPHICS::_0x1A9F09AB458D49C6(false);
	__LIB_0__::func_19(uParam0, 18);
}

int func_805(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	struct<185> Var4;
	switch (*uParam1)
	{
		case 1:
			sVar2 = __LIB_15__::func_484(uParam1);
			if (!MISC::ARE_STRINGS_EQUAL(sVar2, "catalog_interior"))
			{
				if (TXD::_DOES_STREAMED_TEXTURE_DICT_EXIST(sVar2))
				{
					TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
				}
			}
			break;
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
		case 13:
			iVar0 = uParam1->f_149;
			if (iVar0 > 0)
			{
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					iVar3 = uParam1->f_136[iVar1 /*3*/];
					if (iVar3 == 0)
					{
					}
					else
					{
						sVar2 = __LIB_15__::func_578(iVar3);
						TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					}
					iVar1++;
				}
			}
			break;
	}
	Var4 = 14;
	Var4.f_4.f_8 = 2;
	Var4.f_4.f_11 = 16;
	Var4.f_4.f_28 = 16;
	Var4.f_4.f_45 = 16;
	Var4.f_4.f_62 = 16;
	Var4.f_4.f_79 = 16;
	Var4.f_4.f_96 = 4;
	Var4.f_4.f_96.f_1.f_1 = 6;
	Var4.f_4.f_96.f_1.f_8.f_1 = 6;
	Var4.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var4.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var4.f_136 = 4;
	Var4.f_136.f_1.f_1 = -1;
	Var4.f_136.f_1.f_2 = -1;
	Var4.f_136.f_1.f_3.f_1 = -1;
	Var4.f_136.f_1.f_3.f_2 = -1;
	Var4.f_136.f_1.f_3.f_3.f_1 = -1;
	Var4.f_136.f_1.f_3.f_3.f_2 = -1;
	Var4.f_136.f_1.f_3.f_3.f_3.f_1 = -1;
	Var4.f_136.f_1.f_3.f_3.f_3.f_2 = -1;
	Var4.f_149 = -1;
	Var4.f_150 = -1;
	Var4.f_151 = 16;
	Var4.f_168 = 16;
	*uParam1 = { Var4 };
	uParam1->f_1 = 0;
	return 1;
}

var func_806(var uParam0)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1914319.f_19661 == iVar0)
	{
		*uParam0 = Global_1914319.f_19660;
	}
	else
	{
		Global_1914319.f_19661 = iVar0;
		Global_1914319.f_19659 = __LIB_3__::func_425(uParam0);
		Global_1914319.f_19660 = *uParam0;
	}
	return Global_1914319.f_19659;
}

int func_807(int iParam0)
{
	struct<5> Var0;
	Var0 = { __LIB_15__::func_488(iParam0, 1, 0) };
	return __LIB_0__::func_709(Var0.f_4);
}

bool func_808(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { __LIB_15__::func_488(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = __LIB_0__::func_235((386 + iVar28), 1);
			if (__LIB_1__::func_112(iParam0, &Var0, iVar5, 0))
			{
				if (__LIB_1__::func_429(iParam0, &Var6, iVar5))
				{
					Var29 = { __LIB_0__::func_429(iParam0, Var0, iVar5, 0) };
					__LIB_0__::func_939(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (__LIB_0__::func_708(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					__LIB_0__::func_916(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

int func_809(int iParam0, bool bParam1)
{
	struct<5> Var0;
	Var0 = { __LIB_15__::func_488(iParam0, 0, 0) };
	return __LIB_0__::func_936(iParam0, &Var0, 0, bParam1);
}

void func_810(var uParam0, char* sParam1)
{
	if (__LIB_15__::func_333(uParam0, 128))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = __LIB_15__::func_493(uParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_4, sParam1);
		__LIB_15__::func_547(uParam0, 128);
	}
}

bool func_811()
{
	var uVar0;
	if (__LIB_3__::func_425(&uVar0))
	{
		return true;
	}
	return false;
}

void func_812()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	iVar1 = __LIB_15__::func_626();
	switch (iVar1)
	{
		case 3:
			return;
		case 2:
			bVar2 = true;
			break;
		case 0:
			bVar3 = true;
			break;
	}
	iVar4 = 0;
	while (iVar4 < 18)
	{
		iVar0 = __LIB_14__::func_749(iVar4);
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) != -999503751)
			{
			}
			else
			{
				iVar1 = __LIB_15__::func_686(iVar0);
				switch (iVar1)
				{
					case 3:
						return;
					case 2:
						bVar2 = true;
						break;
					case 0:
						bVar3 = true;
						break;
				}
				if (bVar2 && bVar3)
				{
				}
				else
				{
					iVar4++;
				}
				if (!bVar2)
				{
					if (!bVar3)
					{
						__LIB_10__::func_27(1);
						__LIB_1__::func_240(76, 1);
					}
					else
					{
						__LIB_10__::func_27(1);
						__LIB_1__::func_240(74, 1);
					}
				}
				else if (!bVar3)
				{
					__LIB_10__::func_27(1);
					__LIB_1__::func_240(75, 1);
				}
			}
		}
	}
}

bool func_813(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			*uParam2 = 1;
			return true;
		}
	}
	if (__LIB_1__::func_935(iParam1, 1048576))
	{
		*uParam2 = 4;
		return true;
	}
	if (__LIB_0__::func_1(Global_1935630, 2097152))
	{
		*uParam2 = 4;
		return true;
	}
	if (__LIB_3__::func_563(iParam0, iParam1))
	{
		*uParam2 = 3;
		return true;
	}
	if (__LIB_9__::func_843(iParam1) == 105 && __LIB_14__::func_432(21))
	{
		*uParam2 = 4;
		return true;
	}
	if (__LIB_2__::func_803(iParam0, &iVar0))
	{
		if (!__LIB_11__::func_164(iParam1))
		{
			if (Global_1393529.f_3 == iVar0 && __LIB_13__::func_641(Global_1393529.f_3, 0, &(Global_1393529.f_256), &(Global_1393529.f_284), 0, 0))
			{
				*uParam2 = 5;
				return true;
			}
			if (!__LIB_14__::func_134(iParam0))
			{
				*uParam2 = 6;
				return true;
			}
			if (PED::IS_PED_FLEEING(iVar0))
			{
				*uParam2 = 6;
				return true;
			}
			if (TASK::GET_IS_TASK_ACTIVE(iVar0, 0))
			{
				*uParam2 = 7;
				return true;
			}
		}
	}
	else if (__LIB_1__::func_918(iParam0))
	{
		if (__LIB_0__::func_29(Global_1914319.f_3[iParam0 /*446*/].f_21))
		{
			iVar1 = __LIB_0__::func_120(Global_1914319.f_3[iParam0 /*446*/].f_21);
			if (iVar1 != 0 && !PERSCHAR::_0x4AFC7288C77238B3(iVar1))
			{
				*uParam2 = 6;
				return true;
			}
		}
	}
	return false;
}

int func_814(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_14__::func_769(uParam0);
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 180)
		{
			if (__LIB_0__::func_30(Global_40.f_9910[iVar1 /*6*/]) && __LIB_0__::func_878(Global_40.f_9910[iVar1 /*6*/], -1))
			{
				if (__LIB_14__::func_919(iVar2, iParam1, iParam2, iVar0))
				{
					if (__LIB_15__::func_688(uParam0, Global_40.f_9910[iVar1 /*6*/], iVar2))
					{
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	return 1;
}

bool func_815()
{
	int iVar0;
	if (__LIB_4__::func_807(0))
	{
		iVar0 = __LIB_11__::func_524();
		if ((iVar0 == 10 || iVar0 == 18) || iVar0 == 19)
		{
			if (Global_1935689.f_10189 == -283002878 || (Global_1935689.f_10189 == -182626652 && __LIB_15__::func_695()))
			{
				return true;
			}
		}
		else if (__LIB_11__::func_524() == 2 && (Global_1935689.f_10189 == -693134279 || Global_1935689.f_10189 == -283002878))
		{
			return true;
		}
	}
	else if (Global_1935689.f_10189 == -283002878)
	{
		return true;
	}
	return false;
}

bool func_816(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	return __LIB_15__::func_696(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, iParam4, bParam5);
}

void func_817(int iParam0, float fParam1, vector3 vParam2, vector3 vParam5, int iParam8)
{
	var uVar0;
	if (Global_1225509.f_101 >= 10)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (__LIB_15__::func_698(iParam0, &uVar0))
	{
		return;
	}
	Global_1225509[Global_1225509.f_101 /*10*/].f_4 = iParam0;
	Global_1225509[Global_1225509.f_101 /*10*/].f_3 = fParam1;
	Global_1225509[Global_1225509.f_101 /*10*/] = { vParam2 };
	Global_1225509[Global_1225509.f_101 /*10*/].f_5 = { vParam5 };
	Global_1225509[Global_1225509.f_101 /*10*/].f_8 = iParam8;
	Global_1225509[Global_1225509.f_101 /*10*/].f_9 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1225509.f_101++;
}

bool func_818(var uParam0, int iParam1, var uParam2)
{
	struct<169> Var0;
	Var0 = 14;
	Var0.f_4.f_8 = 2;
	Var0.f_4.f_11 = 16;
	Var0.f_4.f_28 = 16;
	Var0.f_4.f_45 = 16;
	Var0.f_4.f_62 = 16;
	Var0.f_4.f_79 = 16;
	Var0.f_4.f_96 = 4;
	Var0.f_4.f_96.f_1.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var0.f_136 = 4;
	Var0.f_136.f_1.f_1 = -1;
	Var0.f_136.f_1.f_2 = -1;
	Var0.f_136.f_1.f_3.f_1 = -1;
	Var0.f_136.f_1.f_3.f_2 = -1;
	Var0.f_136.f_1.f_3.f_3.f_1 = -1;
	Var0.f_136.f_1.f_3.f_3.f_2 = -1;
	Var0.f_136.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_136.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_149 = -1;
	Var0.f_150 = -1;
	Var0.f_151 = 16;
	Var0.f_168 = 16;
	if (!__LIB_15__::func_288(uParam0, &Var0))
	{
		return false;
	}
	if (Var0 != 0)
	{
		return false;
	}
	if (iParam1 >= uParam0->f_436[uParam0->f_281 /*185*/].f_150 || iParam1 < 0)
	{
		return false;
	}
	*uParam2 = uParam0->f_436[uParam0->f_281 /*185*/].f_168[iParam1];
	return true;
}

void func_819(var uParam0, int iParam1)
{
	if ((iParam1 == 12 && uParam0->f_61 != 12) || iParam1 == 14)
	{
		if (uParam0->f_59 < 6)
		{
			__LIB_15__::func_723(uParam0, 6, iParam1);
		}
	}
}

void func_820(var uParam0, int iParam1)
{
	if (uParam0->f_61 != iParam1)
	{
		if (iParam1 == 0)
		{
			__LIB_15__::func_723(uParam0, 5, iParam1);
		}
		else
		{
			__LIB_15__::func_723(uParam0, 1, iParam1);
		}
	}
}

int func_821(var uParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	iVar0 = __LIB_14__::func_952(&(uParam0->f_2031));
	if (iParam1 >= iVar0 || iParam1 < 0)
	{
		return 71870468;
	}
	if (__LIB_15__::func_702(iParam1, &(uParam0->f_2031), &Var1))
	{
		return Var1.f_1;
	}
	return 71870468;
}

int func_822(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = __LIB_14__::func_820(0);
	iVar1 = __LIB_14__::func_952(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return 0;
	}
	if (iVar0 >= iVar1 || iVar0 < 0)
	{
		return 0;
	}
	if (__LIB_15__::func_702(iVar0, &(uParam0->f_2031), &vVar2))
	{
		__LIB_15__::func_272(uParam0, vVar2.z);
	}
	return 1;
}

int func_823(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
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
				__LIB_7__::func_642(iVar9, &iVar6, &uVar7, &iVar5, &uVar8);
				__LIB_2__::func_999(&iVar0, iVar9, iVar5, iVar6);
			}
			else
			{
				iVar0 = __LIB_8__::func_694(iVar2);
			}
			if (iVar0 == iParam1)
			{
				*iParam2 = iVar2;
				ITEMSET::DESTROY_ITEMSET(iVar1);
				return 1;
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return 0;
}

void func_824(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	var uVar18;
	var uVar19;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar13 = __LIB_7__::func_664(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (uVar2[iVar14] == iParam0)
					{
						ENTITY::_DELETE_CARRIABLE(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else
			{
				__LIB_7__::func_642(iVar1, &iVar17, &uVar18, &iVar16, &uVar19);
				if (__LIB_2__::func_999(&iVar15, iVar1, iVar16, iVar17) && iVar15 == iParam0)
				{
					ENTITY::_DELETE_CARRIABLE(&iVar0);
				}
			}
		}
	}
}

void func_825(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_15__::func_698(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1225509[iVar0 /*10*/].f_9 != SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		if (!bParam1)
		{
			return;
		}
	}
	__LIB_15__::func_566(iVar0);
}

bool func_826(var uParam0)
{
	int iVar0;
	if (uParam0->f_1723 != 34)
	{
		iVar0 = 0;
		while (iVar0 < 22)
		{
			if (!__LIB_15__::func_188(iVar0))
			{
				if (!__LIB_15__::func_710(uParam0, iVar0))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	HUD::_TEXT_DATABASE_REQUEST("SHOP");
	HUD::_TEXT_DATABASE_REQUEST("SATCH");
	PED::_0xF008E0BA1FE1D644(1);
	return true;
}

bool func_827(var uParam0)
{
	int iVar0;
	if (uParam0->f_1723 != 34)
	{
		iVar0 = 0;
		while (iVar0 < 22)
		{
			if (!__LIB_15__::func_188(iVar0))
			{
				if (!__LIB_15__::func_711(uParam0, iVar0))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SHOP") || !HUD::_TEXT_DATABASE_HAS_LOADED("SATCH"))
	{
		return false;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	if (!__LIB_15__::func_189(&(uParam0->f_4)))
	{
		return false;
	}
	return true;
}

bool func_828(var uParam0)
{
	if (__LIB_15__::func_713(uParam0))
	{
		if (!__LIB_15__::func_712(uParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_829(var uParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	if (uParam0->f_1281.f_1 == 0)
	{
		return false;
	}
	if (!__LIB_15__::func_712(uParam0))
	{
		return false;
	}
	bVar0 = (WEAPON::_IS_WEAPON_TWO_HANDED(uParam0->f_1281.f_1) || uParam0->f_1281.f_1 == joaat("WEAPON_SHOTGUN_SAWEDOFF"));
	iVar1 = 9;
	sVar2 = "PISTOL_2";
	if (bVar0)
	{
		sVar2 = "RIFLE_1";
		iVar1 = 8;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1281))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_1281));
	}
	uParam0->f_1281 = WEAPON::_CREATE_WEAPON_OBJECT(uParam0->f_1281.f_1, 0, Global_36, true, 1f);
	if (WEAPON::_GET_WEAPON_SCALE(uParam0->f_1281) < 2f)
	{
		WEAPON::_SET_WEAPON_SCALE(uParam0->f_1281, 2f);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1724, sVar2, uParam0->f_1281, 0);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1281, true);
	__LIB_15__::func_714(uParam0, iVar1);
	return true;
}

bool func_830(var uParam0)
{
	if (__LIB_15__::func_715(uParam0, 0, 0))
	{
		if (!__LIB_15__::func_712(uParam0))
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1281))
	{
		return false;
	}
	return true;
}

bool func_831(var uParam0)
{
	if (__LIB_15__::func_716(uParam0))
	{
		if (!__LIB_15__::func_712(uParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_832(var uParam0)
{
	if (__LIB_15__::func_717(uParam0))
	{
		if (!__LIB_15__::func_712(uParam0))
		{
			return false;
		}
	}
	return true;
}

void func_833(var uParam0, int iParam1)
{
	if (!__LIB_15__::func_215(uParam0, 0))
	{
		__LIB_11__::func_10(*uParam0, 0, 1);
		__LIB_15__::func_586(uParam0);
		__LIB_15__::func_256(uParam0, 0);
	}
	if (iParam1 != 0)
	{
		__LIB_15__::func_723(uParam0, 1, iParam1);
	}
	if (__LIB_15__::func_257(uParam0, 0))
	{
		__LIB_15__::func_724(uParam0);
		__LIB_15__::func_258(uParam0, 0);
	}
}

int func_834(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<169> Var4;
	Var4 = 14;
	Var4.f_4.f_8 = 2;
	Var4.f_4.f_11 = 16;
	Var4.f_4.f_28 = 16;
	Var4.f_4.f_45 = 16;
	Var4.f_4.f_62 = 16;
	Var4.f_4.f_79 = 16;
	Var4.f_4.f_96 = 4;
	Var4.f_4.f_96.f_1.f_1 = 6;
	Var4.f_4.f_96.f_1.f_8.f_1 = 6;
	Var4.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var4.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var4.f_136 = 4;
	Var4.f_136.f_1.f_1 = -1;
	Var4.f_136.f_1.f_2 = -1;
	Var4.f_136.f_1.f_3.f_1 = -1;
	Var4.f_136.f_1.f_3.f_2 = -1;
	Var4.f_136.f_1.f_3.f_3.f_1 = -1;
	Var4.f_136.f_1.f_3.f_3.f_2 = -1;
	Var4.f_136.f_1.f_3.f_3.f_3.f_1 = -1;
	Var4.f_136.f_1.f_3.f_3.f_3.f_2 = -1;
	Var4.f_149 = -1;
	Var4.f_150 = -1;
	Var4.f_151 = 16;
	Var4.f_168 = 16;
	__LIB_15__::func_288(uParam0, &Var4);
	iVar1 = __LIB_15__::func_415(&(uParam0->f_223));
	uVar3 = __LIB_0__::func_81(&(uParam0->f_223));
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = __LIB_14__::func_855(uVar3, Var4.f_133, iVar0);
		if (iVar2 == Var4.f_134)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_835(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	__LIB_15__::func_410(uParam0, iParam1, sParam2);
	__LIB_15__::func_744(uParam0, iParam1, bParam5);
	__LIB_15__::func_634(uParam0, iParam1, bParam3);
	__LIB_15__::func_635(uParam0, iParam1, bParam4);
}

void func_836(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7[10];
	int iVar18;
	if (!__LIB_9__::func_808(iParam1))
	{
		return;
	}
	if (__LIB_1__::func_356(iParam0))
	{
		iVar5 = 0;
		while (iVar5 < 3)
		{
			iVar4 = __LIB_0__::func_574(iVar5);
			if (!PED::_0x608BC6A6AACD5036(&Var0, iParam0, iVar4, 0))
			{
			}
			else
			{
				iVar6 = Var0.f_3;
				if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
				{
				}
				else if (iParam1 == __LIB_15__::func_76(iVar6))
				{
					if (ENTITY::_0x8DE41E9902E85756(iVar6))
					{
						if (iVar5 == 0 || iVar5 == 2)
						{
							*uParam4 = 1;
						}
						*iParam2++;
					}
					else
					{
						*iParam3++;
					}
				}
			}
			iVar5++;
		}
	}
	else if (PED::_IS_PED_CARRYING(iParam0))
	{
		__LIB_7__::func_754(Global_35, &uVar7, 1);
		iVar18 = 0;
		while (iVar18 < 10)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uVar7[iVar18]))
			{
			}
			else if (iParam1 == __LIB_15__::func_76(uVar7[iVar18]))
			{
				if (ENTITY::_0x8DE41E9902E85756(uVar7[iVar18]))
				{
					if (iVar18 == 0)
					{
						*uParam4 = 1;
					}
					*iParam2++;
				}
				else
				{
					*iParam3++;
				}
			}
			iVar18++;
		}
	}
}

void func_837(var uParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	if (!__LIB_15__::func_712(uParam0))
	{
		return;
	}
	bVar0 = (WEAPON::_IS_WEAPON_TWO_HANDED(uParam0->f_1281.f_1) || uParam0->f_1281.f_1 == joaat("WEAPON_SHOTGUN_SAWEDOFF"));
	iVar1 = 11;
	sVar2 = "PISTOL_2";
	if (bVar0)
	{
		sVar2 = "RIFLE_1";
		iVar1 = 10;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1724, sVar2, uParam0->f_1281, 0);
	__LIB_15__::func_137(uParam0, 0);
	__LIB_15__::func_714(uParam0, iVar1);
	__LIB_15__::func_503(&(uParam0->f_4), 0);
	__LIB_15__::func_454(uParam0);
	__LIB_15__::func_582(&(uParam0->f_4), 8, "SHOP_ZOOM");
	__LIB_15__::func_549(uParam0, 12);
}

void func_838(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<12> Var0;
	bool bVar16;
	Var0.f_11.f_3 = 255;
	Var0 = __LIB_15__::func_278(iParam3);
	__LIB_15__::func_742(uParam0, &Var0, uParam0->f_436[iParam1 /*185*/], iParam2, MISC::GET_HASH_KEY(Var0));
	if ((iParam1 % 2) == 1)
	{
		if (Var0.f_4 != 0f)
		{
			Var0.f_1 = Var0.f_4;
		}
		if (Var0.f_4.f_1 != 0f)
		{
			Var0.f_1.f_1 = Var0.f_4.f_1;
		}
	}
	Var0.f_1 = (Var0.f_1 + (0.5f * IntToFloat((iParam1 % 2))));
	Var0.f_1.f_1 = (Var0.f_1.f_1 + (0.5f * IntToFloat((iParam1 / 2))));
	if (*uParam0 == 9)
	{
		bVar16 = false;
		if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_1, "BASE_SECTION_R1", 1))
		{
			if (uParam0->f_1.f_185 == 5 || uParam0->f_1.f_185 == 7)
			{
				bVar16 = true;
			}
		}
		else if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_1, "BASE_SECTION_L1", 1))
		{
			if (uParam0->f_1.f_185 == 4 || uParam0->f_1.f_185 == 6)
			{
				bVar16 = true;
			}
		}
		if (bVar16)
		{
			if (Var0.f_1.f_1 > 0.5f)
			{
				Var0.f_1.f_1 = (Var0.f_1.f_1 - 0.5f);
			}
			else
			{
				Var0.f_1.f_1 = (Var0.f_1.f_1 + 0.5f);
			}
		}
	}
	if (__LIB_15__::func_239(uParam0, "cata_mp_stamp_ct"))
	{
		GRAPHICS::DRAW_SPRITE(__LIB_15__::func_279(iParam3), Var0, Var0.f_1, Var0.f_1.f_1, Var0.f_7, Var0.f_7.f_1, Var0.f_10, Var0.f_11.f_3, 0, 0, 255, false);
	}
	if (__LIB_15__::func_239(uParam0, "cata_mp_stamp_ab"))
	{
		GRAPHICS::DRAW_RECT(Var0.f_1, Var0.f_1.f_1, Var0.f_7, Var0.f_7.f_1, Var0.f_11, Var0.f_11.f_1, Var0.f_11.f_2, 255, false, true);
	}
	if (Var0.f_11.f_4)
	{
		if (__LIB_15__::func_239(uParam0, "cata_mp_stamp_ma"))
		{
			GRAPHICS::DRAW_RECT(Var0.f_1, Var0.f_1.f_1, Var0.f_7, Var0.f_7.f_1, 255, 130, 255, 255, false, true);
		}
	}
}

void func_839(var uParam0)
{
	struct<169> Var0;
	if (uParam0->f_221 != 34)
	{
		return;
	}
	Var0 = 14;
	Var0.f_4.f_8 = 2;
	Var0.f_4.f_11 = 16;
	Var0.f_4.f_28 = 16;
	Var0.f_4.f_45 = 16;
	Var0.f_4.f_62 = 16;
	Var0.f_4.f_79 = 16;
	Var0.f_4.f_96 = 4;
	Var0.f_4.f_96.f_1.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var0.f_136 = 4;
	Var0.f_136.f_1.f_1 = -1;
	Var0.f_136.f_1.f_2 = -1;
	Var0.f_136.f_1.f_3.f_1 = -1;
	Var0.f_136.f_1.f_3.f_2 = -1;
	Var0.f_136.f_1.f_3.f_3.f_1 = -1;
	Var0.f_136.f_1.f_3.f_3.f_2 = -1;
	Var0.f_136.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_136.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_149 = -1;
	Var0.f_150 = -1;
	Var0.f_151 = 16;
	Var0.f_168 = 16;
	switch (__LIB_15__::func_144(uParam0))
	{
		case 0:
			if (!__LIB_0__::func_139(uParam0->f_1216[0]))
			{
				__LIB_15__::func_760(uParam0, 0, __LIB_15__::func_199(0), __LIB_15__::func_191(0), 2, joaat("MEDIUM_TIMED_EVENT"), 3);
			}
			__LIB_15__::func_624(uParam0, 0, 0, 0);
			if (!__LIB_0__::func_139(uParam0->f_1216[1]))
			{
				__LIB_15__::func_760(uParam0, 1, __LIB_15__::func_199(1), __LIB_15__::func_191(1), 2, joaat("MEDIUM_TIMED_EVENT"), 3);
			}
			__LIB_15__::func_624(uParam0, 1, 0, 0);
			break;
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
		case 13:
			if (!__LIB_15__::func_288(uParam0, &Var0))
			{
				return;
			}
			if ((Var0.f_3 % 2) == 0)
			{
				if (__LIB_0__::func_139(uParam0->f_1216[0]))
				{
					__LIB_1__::func_281(&(uParam0->f_1216[0]), 1, 1);
				}
				if (!__LIB_0__::func_139(uParam0->f_1216[1]))
				{
					__LIB_15__::func_760(uParam0, 1, __LIB_15__::func_199(1), __LIB_15__::func_191(1), 2, joaat("MEDIUM_TIMED_EVENT"), 3);
				}
			}
			else
			{
				if (__LIB_0__::func_139(uParam0->f_1216[1]))
				{
					__LIB_1__::func_281(&(uParam0->f_1216[1]), 1, 1);
				}
				if (!__LIB_0__::func_139(uParam0->f_1216[0]))
				{
					__LIB_15__::func_760(uParam0, 0, __LIB_15__::func_199(0), __LIB_15__::func_191(0), 2, joaat("MEDIUM_TIMED_EVENT"), 3);
				}
			}
			break;
	}
}

void func_840(var uParam0, int iParam1)
{
	__LIB_15__::func_634(uParam0, iParam1, 0);
	__LIB_15__::func_635(uParam0, iParam1, 0);
	__LIB_15__::func_744(uParam0, iParam1, 0);
}

void func_841(var uParam0, int iParam1, int iParam2)
{
	if (!Global_1914319.f_19461.f_20)
	{
		__LIB_15__::func_764(iParam2, uParam0);
	}
	if (__LIB_14__::func_784(iParam1) == __LIB_14__::func_784(Global_1914319.f_19461.f_1))
	{
		return;
	}
	if (__LIB_0__::func_86(CAM::GET_CAM_COORD(*uParam0)))
	{
		__LIB_15__::func_315(&(Global_1914319.f_19461.f_14), &(Global_1914319.f_19461.f_17), &(Global_1914319.f_19461.f_22[0 /*12*/].f_9), &(Global_1914319.f_19461.f_22[0 /*12*/].f_6), &(Global_1914319.f_19461.f_22[0 /*12*/].f_10), &(Global_1914319.f_19461.f_22[0 /*12*/].f_11));
	}
	else
	{
		Global_1914319.f_19461.f_14 = { CAM::GET_CAM_COORD(*uParam0) };
		Global_1914319.f_19461.f_17 = { CAM::GET_CAM_ROT(*uParam0, 2) };
	}
	Global_1914319.f_19461.f_1 = iParam1;
	__LIB_15__::func_315(&(Global_1914319.f_19461.f_2), &(Global_1914319.f_19461.f_2.f_3), &(Global_1914319.f_19461.f_2.f_9), &(Global_1914319.f_19461.f_2.f_6), &(Global_1914319.f_19461.f_2.f_10), &(Global_1914319.f_19461.f_2.f_11));
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
	}
	Global_1914319.f_19461.f_179 = 0;
	__LIB_15__::func_629(1);
	__LIB_14__::func_710(0);
	CAM::SET_CAM_PARAMS(*uParam0, Global_1914319.f_19461.f_2, Global_1914319.f_19461.f_2.f_3, Global_1914319.f_19461.f_2.f_9, 500, 28, 28, 2, 1, 0);
	CAM::SET_CAM_NEAR_CLIP(*uParam0, 0.25f);
	__LIB_15__::func_402(*uParam0, __LIB_14__::func_784(Global_1914319.f_19461.f_1));
}

void func_842(var uParam0, int iParam1)
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		return;
	}
	if (!Global_1914319.f_19461.f_20)
	{
		__LIB_15__::func_764(iParam1, uParam0);
	}
	if (Global_1914319.f_19461.f_1 == -999503751 || Global_1914319.f_19461.f_1 == 0)
	{
		return;
	}
	Global_1914319.f_19461.f_1 = -999503751;
	__LIB_14__::func_710(1);
	CAM::SET_CAM_PARAMS(*uParam0, Global_1914319.f_19461.f_22[0 /*12*/], Global_1914319.f_19461.f_22[0 /*12*/].f_3, Global_1914319.f_19461.f_22[0 /*12*/].f_9, 500, 28, 28, 2, 1, 0);
	__LIB_15__::func_629(0);
	__LIB_15__::func_402(*uParam0, 0);
}

int func_843(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<14> Var20;
	int iVar34;
	iVar0 = __LIB_14__::func_769(uParam0);
	Var1.f_9 = -1591664384;
	iVar15 = __LIB_15__::func_647(0);
	iVar16 = 0;
	iVar17 = 0;
	if (__LIB_14__::func_919(iVar16, iParam1, iParam2, iVar0))
	{
		if (__LIB_15__::func_648(&Var1, 0))
		{
			if (__LIB_15__::func_607(uParam0, Var1, iVar16))
			{
				iVar16++;
			}
		}
	}
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		if (__LIB_14__::func_919(iVar16, iParam1, iParam2, iVar0))
		{
			if (__LIB_15__::func_701(iVar17, &iVar18))
			{
				if (__LIB_15__::func_649(iVar18, &Var1, 0))
				{
					if (__LIB_15__::func_607(uParam0, Var1, iVar16))
					{
						iVar16++;
					}
				}
			}
		}
		iVar17++;
	}
	iVar19 = __LIB_15__::func_461(0);
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < iVar19)
	{
		if (__LIB_15__::func_462(iVar17, &Var1, 0))
		{
			if (__LIB_14__::func_919(iVar16, iParam1, iParam2, iVar0))
			{
				if (__LIB_15__::func_607(uParam0, Var1, iVar16))
				{
					iVar16++;
				}
			}
		}
		iVar17++;
	}
	Var20.f_9 = -1591664384;
	iVar34 = (iVar0 - iVar16);
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < iVar34)
	{
		if (__LIB_14__::func_919(iVar16, iParam1, iParam2, iVar0))
		{
			if (__LIB_15__::func_607(uParam0, Var20, iVar16))
			{
				iVar16++;
			}
		}
		iVar17++;
	}
	return 1;
}

bool func_844(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_921(iParam0) == 4 && __LIB_8__::func_224(iParam0, -1162387149))
	{
		return true;
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar2);
		if (ITEMSET::IS_ITEMSET_VALID(iVar2))
		{
			iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else
				{
					iVar1 = __LIB_15__::func_76(iVar0);
					if (__LIB_8__::func_127(iVar1, iParam0))
					{
						ITEMSET::DESTROY_ITEMSET(iVar2);
						return true;
					}
				}
				iVar4++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar2);
		}
	}
	return __LIB_8__::func_224(iParam0, 1084182731);
}

void func_845(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_15__::func_246(uParam0, iParam1);
	if (!__LIB_0__::func_139(iVar0))
	{
		return;
	}
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = 5;
	}
	if (__LIB_15__::func_290(uParam0, iParam1) != bParam2)
	{
		__LIB_1__::func_281(&iVar0, 1, 1);
		__LIB_15__::func_760(uParam0, iParam1, __LIB_15__::func_199(iParam1), __LIB_15__::func_191(iParam1), iVar1, iParam3, 3);
		uParam0->f_1216.f_11[iParam1] = bParam2;
		uParam0->f_1216.f_22[iParam1] = iParam3;
	}
}

bool func_846(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_15__::func_749(iParam0, &iVar0))
	{
		return false;
	}
	return iVar0 == iParam1;
}

bool func_847(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_15__::func_750(iParam0, &iVar0))
	{
		return false;
	}
	return iVar0 == iParam1;
}

struct<2> func_848(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!__LIB_15__::func_749(iParam0, &uVar2))
	{
	}
	if (!__LIB_15__::func_750(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

void func_849(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = __LIB_0__::func_749(iParam1);
	if (__LIB_1__::func_976(iVar0) == iParam1)
	{
		__LIB_15__::func_57(iParam0, __LIB_12__::func_505(iVar0));
		return;
	}
	__LIB_15__::func_752(iParam0, iParam1, 0, joaat("METAPED_TINT_LEATHER"), 127, 127, 127);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, false, false, false);
	}
}

void func_850(int iParam0)
{
	var uVar0;
	struct<2> Var1;
	uVar0 = iParam0;
	Var1.f_1 = __LIB_15__::func_705(uVar0);
	Var1 = __LIB_15__::func_706(uVar0);
	__LIB_15__::func_8(-1715238242, iParam0, &Var1, __LIB_15__::func_753(iParam0), 1, 0, 0, joaat("COLOR_PURE_WHITE"));
	Global_1935689.f_19.f_203++;
	Global_1935689.f_19.f_1++;
}

void func_851(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	struct<7> Var9;
	bool bVar16;
	bool bVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	bool bVar24;
	vector3 vVar25;
	float fVar28;
	int iVar31;
	int iVar32;
	int iVar33;
	vVar0 = { 0.1336f, -0.222f, 0.4709f };
	vVar3 = { -84.8505f, 0f, 0f };
	bVar16 = false;
	bVar17 = true;
	fVar18 = 44f;
	fVar19 = 17.5f;
	fVar20 = 0.5f;
	fVar21 = PAD::GET_CONTROL_NORMAL(2, __LIB_15__::func_181(4));
	fVar22 = PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_LOOK_UD"));
	fVar23 = PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_LOOK_LR"));
	bVar24 = PAD::_IS_USING_KEYBOARD(2);
	if (!CAM::DOES_CAM_EXIST(uParam0->f_4.f_1190))
	{
		return;
	}
	if (uParam0->f_4.f_1208)
	{
		if (uParam0->f_4 == 5 || uParam0->f_4 == 6)
		{
			vVar25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam1->f_148.f_1744, ENTITY::GET_ENTITY_COORDS(uParam0->f_1745, true, false)) };
			CAM::POINT_CAM_AT_ENTITY(uParam0->f_4.f_1190, uParam0->f_1744, 0.1336f, vVar25.y, vVar25.z, true);
			return;
		}
	}
	if (((((((PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_LEFT")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_RIGHT"))) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_UP"))) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_DOWN"))) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_STICK_LEFT"))) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_STICK_RIGHT"))) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_STICK_UP"))) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_STICK_DOWN")))
	{
		uParam0->f_4.f_1190.f_12 = 1;
	}
	if (((fVar23 > 0.005f || fVar23 < -0.005f) || fVar22 > 0.005f) || fVar22 < -0.005f)
	{
		bVar17 = false;
	}
	if (uParam0->f_4 == 8)
	{
		if (fVar21 > 0f)
		{
			if (!bVar17)
			{
				if (bVar24 && !uParam0->f_4.f_1190.f_11)
				{
					uParam0->f_4.f_1190.f_4 = { vVar3 };
				}
				uParam0->f_4.f_1190.f_12 = 0;
				uParam0->f_4.f_1190.f_11 = 1;
			}
			if (!uParam0->f_4.f_1190.f_11)
			{
				bVar16 = true;
			}
			if (uParam0->f_4.f_1190.f_16)
			{
				uParam0->f_4.f_1190.f_7 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_7, (fVar18 - ((fVar18 - fVar19) * fVar21)), fVar20);
			}
			else
			{
				uParam0->f_4.f_1190.f_7 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_7, fVar19, fVar20);
			}
		}
		else
		{
			uParam0->f_4.f_1190.f_11 = 0;
			uParam0->f_4.f_1190.f_7 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_7, fVar18, fVar20);
		}
		iVar31 = __LIB_15__::func_183(&(uParam0->f_4));
		if ((iVar31 % 2) == 0)
		{
			fVar28 = -0.12f;
		}
		else if (iVar31 == 1)
		{
			fVar28 = 0.094f;
		}
		else
		{
			fVar28 = 0.106f;
		}
		vVar6.x = (vVar0.x + fVar28);
		vVar6.f_1 = vVar0.y;
		switch (__LIB_15__::func_144(&(uParam0->f_4)))
		{
			case 0:
				iVar32 = uParam0->f_4.f_281.f_1;
				if (__LIB_15__::func_184(&(uParam0->f_4.f_436[uParam0->f_4.f_281 /*185*/])))
				{
					vVar6.x = (vVar6.x + ((IntToFloat((iVar32 / 8)) * 0.11f) - 0.055f));
					vVar6.f_1 = (vVar6.y + (0.07f - (IntToFloat((iVar32 % 8)) * 0.022f)));
				}
				else
				{
					vVar6.f_1 = (vVar6.y + (0.07f - (IntToFloat(iVar32) * 0.022f)));
				}
				break;
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
				vVar6.f_1 = (vVar6.y + 0.085f);
				break;
			case 3:
				iVar32 = uParam0->f_4.f_281.f_1;
				if (iVar32 < 2)
				{
					vVar6.x = (vVar6.x - (0.051f - (0.112f * IntToFloat((iVar32 % 2)))));
				}
				vVar6.f_1 = (vVar6.y + (0.075f - (0.132f * IntToFloat((iVar32 / 2)))));
				break;
			case 4:
				iVar32 = uParam0->f_4.f_281.f_1;
				if (iVar32 == 0)
				{
					vVar6.f_1 = (vVar6.y + 0.075f);
				}
				else
				{
					vVar6.x = (vVar6.x - (0.051f - (0.112f * IntToFloat((iVar32 + 1 % 2)))));
					vVar6.f_1 = (vVar6.y - 0.057f);
				}
				break;
			case 5:
				iVar32 = uParam0->f_4.f_281.f_1;
				vVar6.x = (vVar6.x - (0.051f - (0.112f * IntToFloat((iVar32 % 2)))));
				vVar6.f_1 = (vVar6.y + (0.075f - (0.132f * IntToFloat((iVar32 / 2)))));
				break;
			case 6:
				iVar32 = uParam0->f_4.f_281.f_1;
				vVar6.x = (vVar6.x - (0.073f - (0.075f * IntToFloat((iVar32 % 3)))));
				vVar6.f_1 = (vVar6.y + (0.09f - (0.086f * IntToFloat((iVar32 / 3)))));
				break;
		}
		if (!(fVar21 == 0f && uParam0->f_4.f_1190.f_15))
		{
			uParam0->f_4.f_1190.f_1 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_1, (uParam0->f_4.f_1190.f_1 + (fVar23 * 0.03f)), fVar20);
			uParam0->f_4.f_1190.f_1.f_1 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_1.f_1, (uParam0->f_4.f_1190.f_1.f_1 - (fVar22 * 0.03f)), fVar20);
			uParam0->f_4.f_1190.f_1 = __LIB_0__::func_251(uParam0->f_4.f_1190.f_1, (vVar0.x - 0.2f), (vVar0.x + 0.2f));
			uParam0->f_4.f_1190.f_1.f_1 = __LIB_0__::func_251(uParam0->f_4.f_1190.f_1.f_1, (vVar0.y - 0.1f), (vVar0.y + 0.12f));
			if ((fVar21 > 0f && uParam0->f_4.f_1190.f_14) && !bVar17)
			{
				switch (__LIB_15__::func_144(&(uParam0->f_4)))
				{
					case 7:
					case 8:
					case 9:
					case 10:
					case 11:
					case 12:
					case 13:
						if ((__LIB_15__::func_183(&(uParam0->f_4)) % 2) == 0)
						{
							uParam0->f_4.f_1190.f_1 = __LIB_0__::func_251(uParam0->f_4.f_1190.f_1, (vVar0.x - 0.16f), (vVar0.x - 0.05f));
						}
						else
						{
							uParam0->f_4.f_1190.f_1 = __LIB_0__::func_251(uParam0->f_4.f_1190.f_1, (vVar0.x + 0.05f), (vVar0.x + 0.16f));
						}
						break;
					case 3:
					case 4:
					case 5:
						uParam0->f_4.f_1190.f_1.f_1 = __LIB_0__::func_251(uParam0->f_4.f_1190.f_1.f_1, (vVar6.y - 0.02f), (vVar6.y + 0.02f));
						uParam0->f_4.f_1190.f_1 = __LIB_0__::func_251(uParam0->f_4.f_1190.f_1, (vVar6.x - 0.02f), (vVar6.x + 0.02f));
						break;
					case 6:
						uParam0->f_4.f_1190.f_1.f_1 = __LIB_0__::func_251(uParam0->f_4.f_1190.f_1.f_1, (vVar6.y - 0.015f), (vVar6.y + 0.015f));
						uParam0->f_4.f_1190.f_1 = __LIB_0__::func_251(uParam0->f_4.f_1190.f_1, (vVar6.x - 0.015f), (vVar6.x + 0.015f));
						break;
				}
			}
		}
		if (!uParam0->f_4.f_1190.f_14 || (fVar21 == 0f && uParam0->f_4.f_1190.f_15))
		{
			vVar6 = { vVar0 };
		}
		if (((uParam0->f_4.f_1190.f_13 && fVar21 == 0f) || bVar16) || (uParam0->f_4.f_1190.f_12 && fVar21 > 0f))
		{
			uParam0->f_4.f_1190.f_1 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_1, vVar6.x, fVar20);
			uParam0->f_4.f_1190.f_1.f_1 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_1.f_1, vVar6.y, fVar20);
			if ((bVar24 && bVar16) && fVar21 > 0f)
			{
				uParam0->f_4.f_1190.f_4 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_4, vVar3.x, fVar20);
				uParam0->f_4.f_1190.f_4.f_1 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_4.f_1, vVar3.y, fVar20);
			}
		}
	}
	else if ((uParam0->f_1 == 20 || uParam0->f_1 == 21) || uParam0->f_1 == 22)
	{
		__LIB_15__::func_759(uParam0, &Var9, uParam1);
		uParam0->f_4.f_1190.f_1 = { __LIB_14__::func_381(uParam0->f_4.f_1190.f_1, Var9, fVar20) };
		uParam0->f_4.f_1190.f_4 = { __LIB_14__::func_381(uParam0->f_4.f_1190.f_4, Var9.f_3, fVar20) };
	}
	else if (uParam0->f_4 == 12 || uParam0->f_4 == 14)
	{
	}
	else if (uParam0->f_1 == 6 || uParam0->f_1 == 7)
	{
		if (!uParam0->f_4.f_1190.f_17)
		{
			__LIB_15__::func_759(uParam0, &Var9, uParam1);
			uParam0->f_4.f_1190.f_1 = { __LIB_14__::func_381(uParam0->f_4.f_1190.f_1, Var9, fVar20) };
			uParam0->f_4.f_1190.f_4 = { __LIB_14__::func_381(uParam0->f_4.f_1190.f_4, Var9.f_3, fVar20) };
			uParam0->f_4.f_1190.f_7 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_7, Var9.f_6, fVar20);
		}
	}
	else if (uParam0->f_4 == 13 && uParam0->f_1 != 10)
	{
		if (__LIB_15__::func_445(uParam0->f_1281.f_1))
		{
			if (uParam0->f_1 == 12)
			{
				uParam0->f_4.f_1190.f_1 = { __LIB_14__::func_381(uParam0->f_4.f_1190.f_1, vVar0, fVar20) };
				uParam0->f_4.f_1190.f_4 = { __LIB_14__::func_381(uParam0->f_4.f_1190.f_4, vVar3, fVar20) };
				uParam0->f_4.f_1190.f_7 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_7, 44f, fVar20);
			}
			else
			{
				__LIB_15__::func_759(uParam0, &Var9, uParam1);
				uParam0->f_4.f_1190.f_1 = { __LIB_14__::func_381(uParam0->f_4.f_1190.f_1, Var9, fVar20) };
				uParam0->f_4.f_1190.f_4 = { __LIB_14__::func_381(uParam0->f_4.f_1190.f_4, Var9.f_3, fVar20) };
				uParam0->f_4.f_1190.f_7 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_7, Var9.f_6, fVar20);
			}
		}
	}
	else
	{
		uParam0->f_4.f_1190.f_11 = 0;
		uParam0->f_4.f_1190.f_1 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_1, vVar0.x, fVar20);
		uParam0->f_4.f_1190.f_1.f_1 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_1.f_1, vVar0.y, fVar20);
		uParam0->f_4.f_1190.f_7 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_7, 44f, fVar20);
	}
	if (((uParam0->f_4 != 13 && uParam0->f_1 != 21) && uParam0->f_1 != 20) && uParam0->f_1 != 22)
	{
		if (fVar21 == 0f && !bVar17)
		{
			uParam0->f_4.f_1190.f_4.f_1 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_4.f_1, (uParam0->f_4.f_1190.f_4.f_1 - (fVar23 * uParam0->f_4.f_1190.f_9)), fVar20);
			uParam0->f_4.f_1190.f_4 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_4, (uParam0->f_4.f_1190.f_4 - (fVar22 * uParam0->f_4.f_1190.f_10)), fVar20);
		}
		if (!bVar24)
		{
			uParam0->f_4.f_1190.f_4.f_1 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_4.f_1, vVar3.y, (fVar20 * 0.8f));
			uParam0->f_4.f_1190.f_4 = __LIB_15__::func_182(uParam0->f_4.f_1190.f_4, vVar3.x, (fVar20 * 0.8f));
		}
		else if (fVar21 == 0f)
		{
			uParam0->f_4.f_1190.f_4 = __LIB_0__::func_251(uParam0->f_4.f_1190.f_4, -91.5f, -78.2f);
			uParam0->f_4.f_1190.f_4.f_1 = __LIB_0__::func_251(uParam0->f_4.f_1190.f_4.f_1, -13f, 13f);
		}
	}
	if ((((uParam0->f_1 != 6 && uParam0->f_4 != 13) && uParam0->f_1 != 21) && uParam0->f_1 != 20) && uParam0->f_1 != 22)
	{
		uParam0->f_4.f_1190.f_1.f_2 = vVar0.z;
	}
	if ((uParam0->f_4 == 5 || uParam0->f_4 == 6) || uParam0->f_4 == 7)
	{
		uParam0->f_4.f_1190.f_4 = { vVar3 };
		uParam0->f_4.f_1190.f_1 = { vVar0 };
		if (uParam0->f_4.f_1208)
		{
			CAM::STOP_CAM_POINTING(uParam0->f_4.f_1190);
		}
	}
	iVar33 = 0;
	if (uParam0->f_1 == 7)
	{
		iVar33 = 2;
	}
	CAM::SET_CAM_PARAMS(uParam0->f_4.f_1190, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1744, uParam0->f_4.f_1190.f_1), ENTITY::GET_ENTITY_ROTATION(uParam0->f_1744, 2) + uParam0->f_4.f_1190.f_4, uParam0->f_4.f_1190.f_7, 0, 1, 1, iVar33, 0, 0);
	if ((uParam0->f_4.f_1190.f_8 > 0.02f && fVar21 == 0f) && uParam0->f_1 != 7)
	{
		if (!CAM::IS_CAM_SHAKING(uParam0->f_4.f_1190))
		{
			CAM::SHAKE_CAM(uParam0->f_4.f_1190, "HAND_SHAKE", uParam0->f_4.f_1190.f_8);
		}
	}
	else
	{
		CAM::STOP_CAM_SHAKING(uParam0->f_4.f_1190, false);
	}
}

int func_852(var uParam0)
{
	__LIB_15__::func_761(uParam0, 6, __LIB_15__::func_196(6), __LIB_15__::func_181(6), 0, joaat("MEDIUM_TIMED_EVENT"));
	__LIB_15__::func_761(uParam0, 5, __LIB_15__::func_196(5), __LIB_15__::func_181(5), 0, joaat("MEDIUM_TIMED_EVENT"));
	__LIB_15__::func_761(uParam0, 0, __LIB_15__::func_196(0), __LIB_15__::func_181(0), 0, joaat("MEDIUM_TIMED_EVENT"));
	__LIB_15__::func_761(uParam0, 1, __LIB_15__::func_196(1), __LIB_15__::func_181(1), 0, joaat("MEDIUM_TIMED_EVENT"));
	__LIB_15__::func_761(uParam0, 2, __LIB_15__::func_196(2), __LIB_15__::func_181(2), 0, joaat("MEDIUM_TIMED_EVENT"));
	__LIB_15__::func_761(uParam0, 3, __LIB_15__::func_196(3), __LIB_15__::func_181(3), 0, joaat("MEDIUM_TIMED_EVENT"));
	return 1;
}

bool func_853(var uParam0)
{
	if (uParam0->f_221 != 34)
	{
		__LIB_15__::func_760(uParam0, 0, __LIB_15__::func_199(0), __LIB_15__::func_191(0), 2, joaat("MEDIUM_TIMED_EVENT"), 2);
		__LIB_1__::func_522(uParam0->f_1216[0], 13, 1, 1);
		__LIB_15__::func_760(uParam0, 1, __LIB_15__::func_199(1), __LIB_15__::func_191(1), 2, joaat("MEDIUM_TIMED_EVENT"), 2);
		__LIB_1__::func_522(uParam0->f_1216[1], 13, 1, 1);
		__LIB_15__::func_760(uParam0, 2, __LIB_15__::func_199(2), __LIB_15__::func_191(2), 0, joaat("MEDIUM_TIMED_EVENT"), 3);
		__LIB_15__::func_760(uParam0, 8, __LIB_15__::func_199(8), __LIB_15__::func_191(8), 3, joaat("MEDIUM_TIMED_EVENT"), 3);
		__LIB_1__::func_522(uParam0->f_1216[8], 14, 1, 1);
	}
	__LIB_15__::func_760(uParam0, 3, __LIB_15__::func_199(3), __LIB_15__::func_191(3), 0, joaat("MEDIUM_TIMED_EVENT"), 3);
	__LIB_1__::func_522(uParam0->f_1216[3], 13, 1, 1);
	__LIB_1__::func_522(uParam0->f_1216[3], 10, 1, 1);
	__LIB_15__::func_760(uParam0, 4, __LIB_15__::func_199(4), __LIB_15__::func_191(4), 5, joaat("LONG_TIMED_EVENT"), 3);
	__LIB_1__::func_522(uParam0->f_1216[4], 13, 1, 1);
	__LIB_1__::func_522(uParam0->f_1216[4], 19, 1, 1);
	__LIB_1__::func_522(uParam0->f_1216[4], 20, 1, 1);
	__LIB_1__::func_522(uParam0->f_1216[4], 10, 1, 1);
	__LIB_1__::func_522(uParam0->f_1216[4], 14, 1, 1);
	__LIB_15__::func_760(uParam0, 5, __LIB_15__::func_199(5), __LIB_15__::func_191(5), 2, joaat("MEDIUM_TIMED_EVENT"), 3);
	__LIB_1__::func_522(uParam0->f_1216[5], 13, 1, 1);
	__LIB_1__::func_522(uParam0->f_1216[5], 10, 1, 1);
	__LIB_15__::func_760(uParam0, 6, __LIB_15__::func_199(6), __LIB_15__::func_191(6), 5, joaat("MEDIUM_TIMED_EVENT"), 3);
	__LIB_1__::func_522(uParam0->f_1216[6], 13, 1, 1);
	__LIB_1__::func_522(uParam0->f_1216[6], 19, 1, 1);
	__LIB_1__::func_522(uParam0->f_1216[6], 20, 1, 1);
	__LIB_1__::func_522(uParam0->f_1216[6], 10, 1, 1);
	__LIB_1__::func_522(uParam0->f_1216[6], 14, 1, 1);
	__LIB_15__::func_760(uParam0, 7, __LIB_15__::func_199(7), __LIB_15__::func_191(7), 0, joaat("MEDIUM_TIMED_EVENT"), 3);
	__LIB_15__::func_760(uParam0, 9, __LIB_15__::func_199(9), __LIB_15__::func_191(9), 0, joaat("MEDIUM_TIMED_EVENT"), 3);
	return true;
}

void func_854(var uParam0)
{
	if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	}
	HUD::_HIDE_HUD_COMPONENT(-252438768);
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1);
	}
	uParam0->f_1 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_11, 0f, 0f, 0f, 5f, 5f, 10f);
	POPULATION::_0xB56D41A694E42E86(uParam0->f_1, 10208, 8192, 0, -1, -1, 0);
	PATHFIND::_0x19C7567D2F2287D6(uParam0->f_1, 7);
	uParam0->f_3 = PED::_0x4C39C95AE5DB1329(uParam0->f_1, 0, 7);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0, false, true);
	_NAMESPACE29::_0x0EABF182FBB63D72(*uParam0, 1, 1);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*uParam0, uParam0->f_11, uParam0->f_14, true, false, true);
	ENTITY::_0x9587913B9E772D29(*uParam0, 0);
	__LIB_15__::func_764(*uParam0, &(uParam0->f_2));
	__LIB_14__::func_731(0, *uParam0);
	switch (__LIB_0__::func_2())
	{
		case -1:
			__LIB_14__::func_763(uParam0);
			break;
	}
	__LIB_15__::func_765(uParam0);
	MISC::SET_BIT(&(uParam0->f_5), 10);
	Global_1949598.f_1 = 1;
}

bool func_855(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_4__::func_452(iParam1, uParam2, 0);
		iVar5 = __LIB_15__::func_767(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
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

void func_856(var uParam0, var uParam1, var uParam2)
{
	__LIB_15__::func_776(&(uParam0->f_2280.f_2));
}

bool func_857(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!__LIB_15__::func_778(iParam0, 0, 1, 1, 1))
	{
		return false;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7748.f_1;
	}
	__LIB_10__::func_826(iParam2);
	if (bParam3)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			__LIB_1__::func_452(1, 64, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(1, 64, 1, iParam1, 0);
		}
	}
	__LIB_0__::func_245(1);
	return true;
}

int func_858(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = __LIB_12__::func_492();
	iVar1 = __LIB_9__::func_843(uParam0->f_3);
	iVar3 = 0;
	while (iVar3 < iVar0)
	{
		if (__LIB_14__::func_919(iVar2, iParam1, iParam2, iVar0))
		{
			if (!__LIB_14__::func_888(iVar3, &iVar4))
			{
			}
			else if (!__LIB_14__::func_889(iVar1, iVar4))
			{
			}
			else if (iVar4 == iVar1)
			{
			}
			else if (__LIB_15__::func_770(uParam0, iVar4, iVar2))
			{
				iVar2++;
			}
		}
		iVar3++;
	}
	return 1;
}

bool func_859(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0 = { __LIB_15__::func_488(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = __LIB_0__::func_235((386 + iVar29), 1);
		if (__LIB_1__::func_112(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = __LIB_1__::func_429(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

bool func_860(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_15__::func_488(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return false;
		}
	}
	if (!__LIB_15__::func_778(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), 1, 1))
	{
		return false;
	}
	iVar5 = __LIB_15__::func_9(iParam3);
	if (Global_1946804.f_2535 != iVar5)
	{
		if (Global_1946804.f_2535 != 0)
		{
			__LIB_6__::func_113(Global_1946804.f_2535);
			__LIB_6__::func_151(0);
			Global_1946804.f_2535 = 0;
		}
		if (iVar5 != 0 && __LIB_6__::func_378(iVar5))
		{
			__LIB_6__::func_150(0);
			Global_1946804.f_2535 = iVar5;
		}
	}
	iVar6 = 1026;
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_1__::func_452(1, 0, iVar6, 0, 0);
	}
	else
	{
		iVar6 |= 1;
		__LIB_1__::func_452(1, 0, iVar6, iParam0, 0);
	}
	__LIB_0__::func_245(1);
	return true;
}

void func_861(int iParam0, struct<2> Param1)
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
	if (!__LIB_15__::func_795(iParam0, Param1))
	{
	}
	if (!__LIB_15__::func_796(iParam0, Param1.f_1))
	{
	}
}

void func_862(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<6> Var24;
	var uVar31;
	float fVar32;
	int iVar33;
	int iVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	if (!__LIB_15__::func_65(iParam1))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (__LIB_1__::func_16(iParam0))
	{
		iVar1 = __LIB_0__::func_402(iParam0);
		bVar0 = true;
	}
	Var2.f_1 = 20;
	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam1, &Var2);
	iVar33 = 0;
	while (iVar33 < Var2)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var2.f_1[iVar33], &Var24);
		switch (Var24.f_1)
		{
			case 1194731729:
				iVar34 = Var24.f_2;
				fVar35 = -Var24.f_5;
				if (bVar0 && iVar34 > 0)
				{
					iVar36 = __LIB_6__::func_95(iParam0);
					iVar37 = __LIB_12__::func_535(iVar36);
					__LIB_12__::func_536(iVar1, 1, BUILTIN::TO_FLOAT(iVar37));
				}
				if (bVar0)
				{
					iVar38 = __LIB_12__::func_205(iVar1, 1);
				}
				else
				{
					iVar38 = __LIB_12__::func_533(iParam0, 1);
				}
				if (iVar38 < 50)
				{
					if (bVar0)
					{
						__LIB_12__::func_573(iVar1, 2, iVar34);
					}
					else
					{
						__LIB_15__::func_21(iParam0, 2, iVar34);
					}
				}
				if (bVar0)
				{
					__LIB_12__::func_573(iVar1, 1, BUILTIN::FLOOR(fVar35));
				}
				else
				{
					__LIB_15__::func_21(iParam0, 1, BUILTIN::FLOOR(fVar35));
				}
				break;
			case 978049229:
				__LIB_12__::func_541(iParam0, Var24.f_5);
				break;
			case -1918697215:
				if (__LIB_8__::func_622(0, &uVar31))
				{
					fVar39 = Var24.f_5;
					if (bVar0)
					{
						__LIB_15__::func_91(iVar1, 0, BUILTIN::FLOOR(fVar39));
					}
					else
					{
						__LIB_15__::func_70(iParam0, 0, BUILTIN::FLOOR(fVar39));
					}
				}
				break;
			case 1136630075:
				if (__LIB_15__::func_22(0, &uVar31))
				{
					fVar32 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					if (bVar0)
					{
						__LIB_15__::func_91(iVar1, 0, BUILTIN::FLOOR(100f));
					}
					else
					{
						__LIB_15__::func_70(iParam0, 0, BUILTIN::FLOOR(100f));
					}
					__LIB_15__::func_704(iParam0, 0, fVar32);
				}
				break;
			case -778289619:
				if (__LIB_8__::func_622(0, &uVar31))
				{
					fVar32 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					__LIB_12__::func_542(iParam0, 0, fVar32);
				}
				break;
			case -1946606248:
				__LIB_12__::func_543(iParam0, Var24.f_5);
				break;
			case 855745648:
				if (__LIB_8__::func_622(1, &uVar31))
				{
					fVar40 = Var24.f_5;
					if (bVar0)
					{
						__LIB_15__::func_91(iVar1, 1, BUILTIN::FLOOR(fVar40));
					}
					else
					{
						__LIB_15__::func_70(iParam0, 1, BUILTIN::FLOOR(fVar40));
					}
				}
				break;
			case 1365603835:
				if (__LIB_15__::func_22(1, &uVar31))
				{
					fVar32 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					if (bVar0)
					{
						__LIB_15__::func_91(iVar1, 1, BUILTIN::FLOOR(100f));
					}
					else
					{
						__LIB_15__::func_70(iParam0, 1, BUILTIN::FLOOR(100f));
					}
					__LIB_15__::func_704(iParam0, 1, fVar32);
				}
				break;
			case 1497139093:
				if (__LIB_8__::func_622(1, &uVar31))
				{
					fVar32 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					__LIB_12__::func_542(iParam0, 1, fVar32);
				}
				break;
		}
		iVar33++;
	}
	__LIB_15__::func_71(iParam1);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

void func_863(var uParam0)
{
	if (uParam0->f_1788)
	{
		if (!uParam0->f_1789)
		{
			__LIB_15__::func_200(&(uParam0->f_1754));
		}
		PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_1754.f_30), 258, true);
	}
	__LIB_15__::func_776(&(uParam0->f_1754.f_28));
}

void func_864(var uParam0)
{
	__LIB_15__::func_454(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1281))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_1281));
	}
	__LIB_15__::func_777(&(uParam0->f_4));
	__LIB_0__::func_703(0, -1);
}

int func_865(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_15__::func_805(uParam0, &(uParam0->f_436[iVar0 /*185*/]));
		iVar0++;
	}
	return 1;
}

int func_866(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_15__::func_488(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!__LIB_15__::func_778(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
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

bool func_867(var uParam0, var uParam1)
{
	if (!__LIB_15__::func_781(uParam0, uParam1))
	{
		return false;
	}
	if (!__LIB_15__::func_782(uParam0, uParam1))
	{
		return false;
	}
	return true;
}

int func_868(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (__LIB_0__::func_154(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (__LIB_0__::func_154(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (__LIB_0__::func_2() == -1 && !__LIB_0__::func_214(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (__LIB_0__::func_214(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && __LIB_0__::func_154(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		__LIB_15__::func_808(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		__LIB_0__::func_215(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (__LIB_0__::func_216(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

bool func_869(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_161(__LIB_15__::func_807(iParam0), 1);
	iVar1 = iParam0;
	if (iVar0 != 39)
	{
		return Global_1946804.f_1497.f_1[iVar0 /*3*/] == iVar1;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804.f_1497.f_1[iVar0 /*3*/] == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_870(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = __LIB_15__::func_786(iParam0, iParam1);
	if (iVar0 == 1)
	{
		*iParam2 = joaat("CLUB");
		*iParam3 = joaat("MENU_TEXTURES");
	}
	else if (iVar0 == 2)
	{
		*iParam2 = joaat("DIAMOND");
		*iParam3 = joaat("MENU_TEXTURES");
	}
	else
	{
		return false;
	}
	return true;
}

int func_871(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_14__::func_769(uParam0);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		switch (iVar1)
		{
			case 0:
				iVar2 = 0;
				break;
			case 1:
				iVar2 = 2;
				break;
			case 2:
				iVar2 = 3;
				break;
			case 3:
				iVar2 = 4;
				break;
			default:
				return 0;
		}
		if (__LIB_14__::func_919(iVar1, iParam1, iParam2, iVar0))
		{
			if (!__LIB_15__::func_787(uParam0, iVar2, iVar1))
			{
			}
		}
		iVar1++;
	}
	if (iVar0 == 5)
	{
		if (__LIB_14__::func_919(4, iParam1, iParam2, iVar0))
		{
			if (!__LIB_15__::func_606(uParam0, 4))
			{
			}
		}
	}
	return 1;
}

bool func_872(int iParam0)
{
	struct<4> Var0;
	var uVar4;
	var uVar9;
	int iVar13;
	struct<14> Var14;
	int iVar28;
	int iVar29;
	int iVar30;
	struct<10> Var31;
	int iVar45;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0 = { __LIB_1__::func_124() };
	if (!__LIB_15__::func_788(iParam0, 856287005, &iVar13, &uVar9, &uVar4, 1, 0))
	{
		return false;
	}
	Var14 = { __LIB_0__::func_523(0, iVar13, -1591664384, -1591664384, 0, 0) };
	iVar28 = 0;
	if (__LIB_0__::func_801(&Var14, &iVar29, &iVar30, 0))
	{
		Var31.f_9 = -1591664384;
		iVar45 = 0;
		while (iVar45 < iVar30)
		{
			if (__LIB_0__::func_236(&Var31, iVar45, iVar29, iVar30))
			{
				if (__LIB_0__::func_639(&(Var31.f_5), &Var0))
				{
					if (Var31.f_4 == iParam0)
					{
						iVar28 = 1;
					}
					else
					{
						iVar45++;
					}
					__LIB_0__::func_238(iVar29);
					return iVar28;
				}
			}
		}
	}
}

void func_873(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_14__::func_939(iParam0))
	{
		if (__LIB_15__::func_533(iParam0))
		{
			iVar0 = __LIB_1__::func_614(__LIB_15__::func_534(iParam0), 0, 0);
			__LIB_15__::func_785(__LIB_15__::func_534(iParam0), iVar0, -142743235, 0, 0);
			__LIB_0__::func_703(0, 10);
			iVar1 = __LIB_0__::func_23();
			__LIB_1__::func_446(&iVar1, 0, 0, 6, 0, 0, 0, 0);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				__LIB_1__::func_612(joaat("TP_ORCHID_REWARD_01"), iVar1, 1);
				iVar2++;
			}
		}
	}
}

bool func_874(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	var uVar5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_787(iParam0))
	{
		return false;
	}
	if (!__LIB_15__::func_788(iParam1, iParam0, &iVar0, &uVar1, &uVar5, 1, iParam2))
	{
		return false;
	}
	return __LIB_1__::func_112(iParam1, &uVar1, iVar0, 0);
}

int func_875(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	if (!__LIB_0__::func_554(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (__LIB_0__::func_357(iParam0) != -999503751)
		{
			__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
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
		__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	__LIB_15__::func_798(iParam0, 1);
	return 1;
}

bool func_876(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<4> Var1;
	var uVar5;
	struct<11> Var10;
	int iVar24;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_787(iParam0))
	{
		return false;
	}
	Var10.f_9 = -1591664384;
	if (!__LIB_15__::func_788(iParam1, iParam0, &iVar0, &Var1, &uVar5, 1, iParam2))
	{
		return false;
	}
	iVar24 = __LIB_1__::func_81(Var1, iVar0, 0);
	if (iParam1 == iVar24)
	{
		if (!bParam3)
		{
			if (__LIB_0__::func_464(Var1, &Var10, 0, 0))
			{
				if (__LIB_0__::func_356(Var10.f_4) == joaat("WEAPON"))
				{
				}
				else if (!Var10.f_10)
				{
					return false;
				}
			}
		}
		return true;
	}
	return false;
}

int func_877(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_15__::func_807(iParam0);
	if (__LIB_0__::func_161(iVar0, 1) >= 39 || __LIB_0__::func_161(iVar0, 1) < 0)
	{
		return 0;
	}
	return Global_1946804.f_57[__LIB_0__::func_161(iVar0, 1) /*11*/];
}

bool func_878(int iParam0)
{
	var uVar0;
	var uVar5;
	int iVar9;
	int iVar10;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_15__::func_788(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	if (__LIB_1__::func_439(iVar9, &iVar10))
	{
		return iVar10 == iParam0;
	}
	return false;
}

int func_879(var uParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	if (bParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam13);
	}
	iVar1 = __LIB_15__::func_799(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

void func_880(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	__LIB_0__::func_798(iParam0);
	__LIB_0__::func_798(iParam0);
	__LIB_0__::func_507(iParam0, iParam1);
	__LIB_0__::func_508(iParam0, iParam1);
	__LIB_15__::func_800(iParam0, iParam1);
	iVar1 = __LIB_0__::func_398(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			__LIB_1__::func_177(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	iVar3 = __LIB_0__::func_398(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			__LIB_1__::func_177(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = PLAYER::_0x227B06324234FB09(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	__LIB_1__::func_643();
}

bool func_881(int* iParam0, struct<4> Param1)
{
	struct<12> Var0;
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!__LIB_15__::func_802(iParam0, Param1, &Var0, 1))
	{
		return false;
	}
	iParam0->f_4 = 1;
	AUDIO::PLAY_SOUND_FRONTEND("SELL", "HUD_SHOP_SOUNDSET", true, 0);
	return true;
}

void func_882(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(__LIB_15__::func_807(iParam1), 1);
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

void func_883(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = __LIB_0__::func_357(iParam1);
	if (iVar3 == 0)
	{
		return;
	}
	switch (iVar3)
	{
		case -1346384396:
			__LIB_0__::func_19(uParam0, iParam1);
			break;
		case -712836614:
			__LIB_0__::func_115(uParam0, iParam1);
			break;
		case -1629133289:
			__LIB_0__::func_612(uParam0, iParam1);
			break;
		case 1302066700:
			__LIB_0__::func_613(uParam0, iParam1);
			break;
		case 599669344:
			__LIB_0__::func_614(uParam0, iParam1);
			break;
		case -1555511632:
			__LIB_0__::func_615(uParam0, iParam1);
			break;
	}
	if (__LIB_0__::func_848(iParam1))
	{
		__LIB_0__::func_612(uParam0, 0);
		__LIB_0__::func_613(uParam0, 0);
		__LIB_0__::func_19(uParam0, __LIB_0__::func_661(iParam1));
	}
	else if (__LIB_0__::func_847(iParam1))
	{
		__LIB_0__::func_612(uParam0, 0);
		if (!__LIB_15__::func_803(joaat("SLOTID_HORSE_STIRRUP"), 1) && __LIB_15__::func_67(joaat("SLOTID_HORSE_STIRRUP"), &iVar1, 1))
		{
			__LIB_0__::func_613(uParam0, iVar1);
		}
		if (!__LIB_15__::func_803(joaat("SLOTID_HORSE_BLANKET"), 1) && __LIB_15__::func_67(joaat("SLOTID_HORSE_BLANKET"), &iVar2, 1))
		{
			__LIB_0__::func_19(uParam0, iVar2);
		}
	}
	else if (__LIB_14__::func_903(iParam1))
	{
		if (!__LIB_15__::func_803(joaat("SLOTID_HORSE_HORN"), 1) && __LIB_15__::func_67(joaat("SLOTID_HORSE_HORN"), &iVar0, 1))
		{
			__LIB_0__::func_612(uParam0, iVar0);
		}
		if (!__LIB_15__::func_803(joaat("SLOTID_HORSE_STIRRUP"), 1) && __LIB_15__::func_67(joaat("SLOTID_HORSE_STIRRUP"), &iVar1, 1))
		{
			__LIB_0__::func_613(uParam0, iVar1);
		}
		if (!__LIB_15__::func_803(joaat("SLOTID_HORSE_BLANKET"), 1) && __LIB_15__::func_67(joaat("SLOTID_HORSE_BLANKET"), &iVar2, 1))
		{
			__LIB_0__::func_19(uParam0, iVar2);
		}
	}
}

void func_884(var uParam0)
{
	Global_1914319.f_17376 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1281))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_1281));
	}
	__LIB_15__::func_709(uParam0);
	__LIB_15__::func_553(uParam0);
	__LIB_14__::func_706("cata_mp_stamp_ct");
	__LIB_14__::func_706("cata_mp_stamp_ab");
	__LIB_14__::func_706("cata_mp_stamp_ma");
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1744))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1744, true);
	}
	if (uParam0->f_1788)
	{
		__LIB_15__::func_567(&(uParam0->f_1754), 1);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_4.f_1190))
	{
		CAM::DESTROY_CAM(uParam0->f_4.f_1190, false);
	}
	__LIB_15__::func_170("shop_scenes");
	__LIB_15__::func_804(&(uParam0->f_4));
	__LIB_15__::func_549(uParam0, 24);
}

int func_885(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<7> Var3;
	int iVar12;
	bool bVar13;
	struct<7> Var14;
	int iVar21;
	if (*uParam0 == 19)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		return 0;
	}
	if (__LIB_3__::func_563(*uParam0, uParam0->f_1))
	{
		return 0;
	}
	if (__LIB_14__::func_698(*uParam0))
	{
		if (PED::_0x7F9B9791D4CB71F6(uParam0->f_4, Global_35, 0, 0) != 1)
		{
			return 0;
		}
	}
	if (*uParam0 == 22)
	{
		return 0;
	}
	iVar0 = 0;
	if (uParam0->f_41)
	{
		iVar1 = __LIB_15__::func_207(uParam0);
		iVar0 = __LIB_15__::func_208(uParam0, iVar0, iVar1);
	}
	if (uParam0->f_59 != 0 && VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[*uParam0 /*446*/].f_25))
	{
		iVar2 = 0;
		while (iVar2 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar2))
			{
				case joaat("EVENT_ENTITY_DAMAGED"):
				case 2145012826:
					if (SCRIPTS::GET_EVENT_DATA(0, iVar2, &Var3, 9))
					{
						if (((((ENTITY::IS_ENTITY_A_PED(Var3.f_1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var3.f_1) == Global_35) && ENTITY::IS_ENTITY_A_PED(Var3)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var3))) && (PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var3)) || PED::GET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var3), 11, true))) && VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1914319.f_3[*uParam0 /*446*/].f_25, Var3.f_6))
						{
							iVar0 = __LIB_15__::func_208(uParam0, iVar0, 14);
						}
						else
						{
							iVar2++;
						}
						if (PED::_IS_PED_CARRYING(Global_35))
						{
							iVar12 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
							if (ENTITY::IS_ENTITY_A_PED(iVar12))
							{
								if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar12)))
								{
									if (PED::_IS_PED_HOGTIED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar12)) && !ENTITY::IS_ENTITY_DEAD(iVar12))
									{
										iVar0 = __LIB_15__::func_208(uParam0, iVar0, 6);
									}
									else if (ENTITY::IS_ENTITY_DEAD(iVar12))
									{
										iVar0 = __LIB_15__::func_208(uParam0, iVar0, 7);
									}
								}
								else if ((((*uParam0 != 10 && *uParam0 != 18) && *uParam0 != 17) && *uParam0 != 2) && *uParam0 != 1)
								{
									iVar0 = __LIB_15__::func_208(uParam0, iVar0, 3);
								}
							}
						}
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
						{
							if (uParam0->f_59 == 0)
							{
								if (!__LIB_2__::func_470())
								{
									bVar13 = true;
								}
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar13 = true;
							}
							if (!bVar13)
							{
								if (__LIB_15__::func_737(uParam0))
								{
									if (!(__LIB_14__::func_723(*uParam0) && uParam0->f_59 == 0) || __LIB_2__::func_401(uParam0->f_4, 1, 1, 1, 0, 0))
									{
										iVar0 = __LIB_15__::func_208(uParam0, iVar0, 9);
									}
									if (Global_1935630.f_25)
									{
										iVar0 = __LIB_15__::func_208(uParam0, iVar0, 12);
									}
								}
							}
						}
						if (uParam0->f_59 > 0)
						{
							if (!__LIB_0__::func_75(&(uParam0->f_89)))
							{
								__LIB_1__::func_283(&(uParam0->f_89), 1);
							}
							else if (__LIB_0__::func_265(&(uParam0->f_89)) > 4f)
							{
								if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[*uParam0 /*446*/].f_25))
								{
									__LIB_7__::func_465(Global_1914319.f_3[*uParam0 /*446*/].f_25, &Var14);
									if ((!__LIB_0__::func_86(Var14) && !__LIB_0__::func_86(Var14.f_3)) && Var14.f_6 > 0f)
									{
										if (MISC::IS_BULLET_IN_ANGLED_AREA(Var14, Var14.f_3, Var14.f_6, false))
										{
											iVar0 = __LIB_15__::func_208(uParam0, iVar0, 12);
										}
									}
								}
								__LIB_1__::func_148(&(uParam0->f_89));
							}
						}
						if (__LIB_2__::func_65(Global_35, 0))
						{
							iVar0 = __LIB_15__::func_208(uParam0, iVar0, 8);
						}
						if (__LIB_1__::func_205(Global_35, Global_1914319.f_3[*uParam0 /*446*/].f_28, 1, 0))
						{
							iVar0 = __LIB_15__::func_208(uParam0, iVar0, 2);
						}
						if (__LIB_15__::func_209(uParam0) && __LIB_15__::func_806(&iVar21))
						{
							if (__LIB_0__::func_192(iVar21, 160827531))
							{
								iVar0 = __LIB_15__::func_208(uParam0, iVar0, 4);
							}
							else if (__LIB_0__::func_192(iVar21, -1303648999))
							{
								iVar0 = __LIB_15__::func_208(uParam0, iVar0, 5);
							}
							else
							{
								iVar0 = __LIB_15__::func_208(uParam0, iVar0, 5);
							}
						}
						if (__LIB_15__::func_359(PLAYER::PLAYER_ID(), 1))
						{
							iVar0 = __LIB_15__::func_208(uParam0, iVar0, 13);
						}
						return iVar0;
					}
					default:
						break;
			}
		}
	}
}

bool func_886(int iParam0, int iParam1, int iParam2)
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
	iVar4 = __LIB_15__::func_807(iParam1);
	if (iVar4 == -358215195)
	{
		*iParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (__LIB_0__::func_192(iParam1, 866047851))
	{
		iVar5 = __LIB_0__::func_161(iVar4, 1);
		if (__LIB_0__::func_545(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*iParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*iParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = __LIB_0__::func_357(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*iParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && __LIB_0__::func_192(iParam1, -1638171711))
			{
				*iParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*iParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*iParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (__LIB_1__::func_182(1868067663, &uVar0))
			{
				*iParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
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
					*iParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = __LIB_0__::func_357(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*iParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*iParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*iParam2 = 2143522536;
						return false;
					}
				}
			}
			*iParam2 = 0;
			return true;
			default:
				break;
	}
}

bool func_887(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<7> Var3;
	float fVar11;
	iVar1 = 0;
	if (uParam0->f_45)
	{
		if (__LIB_0__::func_2() != -1)
		{
			return true;
		}
		if (__LIB_0__::func_181())
		{
			iVar1 = "JOHN_PLAYER";
		}
		else
		{
			iVar1 = "ARTHUR";
		}
		iVar0 = Global_35;
	}
	else
	{
		iVar0 = uParam0->f_4;
		iVar1 = __LIB_15__::func_493(uParam0);
		__LIB_15__::func_810(uParam0, iVar1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = uParam0->f_44;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (__LIB_0__::func_272(iVar0, 8))
		{
			if (__LIB_0__::func_86(uParam0->f_46))
			{
				bVar2 = __LIB_15__::func_377(iVar0, sParam1, joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, iVar1, uParam0->f_49, 1);
			}
			else
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam1;
				Var3.f_1 = iVar1;
				Var3.f_3 = 291934926;
				Var3.f_2 = uParam0->f_49;
				bVar2 = AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(uParam0->f_46, &Var3);
			}
			if (bVar2)
			{
				if (((!uParam0->f_45 && __LIB_0__::func_86(uParam0->f_46)) && !MISC::ARE_STRINGS_EQUAL(sParam1, __LIB_14__::func_746(27))) && !__LIB_15__::func_254(uParam0))
				{
					fVar11 = 3f;
					if (uParam0->f_59 != 0)
					{
						fVar11 = (BUILTIN::TO_FLOAT(uParam0->f_56) + 2f);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_93))
					{
						if (uParam0->f_50 != 7)
						{
							TASK::_0xE7FA07624574B79A(iVar0, Global_35, 1, 1, fVar11, 1, 0, 0, 0);
						}
					}
					else
					{
						if (uParam0->f_50 != 7)
						{
							TASK::_0xE7FA07624574B79A(uParam0->f_93, Global_35, 1, 1, fVar11, 1, 0, 0, 0);
						}
						uParam0->f_93 = 0;
					}
				}
			}
		}
	}
	uParam0->f_45 = 0;
	__LIB_0__::func_37(&(uParam0->f_65));
	if (!__LIB_15__::func_333(uParam0, 512))
	{
		uParam0->f_46 = { __LIB_1__::func_977() };
	}
	uParam0->f_49 = 0;
	return bVar2;
}

void func_888(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_192(Global_1935689.f_10190, 1286414894))
	{
		__LIB_15__::func_597(iParam0);
		Global_40.f_4283.f_327++;
		if ((Global_40.f_4283.f_327 % 3) == 0)
		{
			__LIB_1__::func_715(12, joaat("HONOR_EVENT_DONATED_GAME"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		}
		if (!__LIB_6__::func_547(15))
		{
			if ((Global_1935689.f_10190 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY") || Global_1935689.f_10190 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT")) || Global_1935689.f_10190 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"))
			{
				if (__LIB_15__::func_512(15, &iVar0))
				{
					__LIB_15__::func_729(15, 8, iVar0);
				}
			}
		}
	}
	if (__LIB_5__::func_796(Global_1935689.f_10190))
	{
		__LIB_15__::func_644(Global_1935689.f_10190);
	}
}

void func_889(var uParam0)
{
	if (__LIB_14__::func_691(uParam0))
	{
		__LIB_15__::func_693(uParam0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_2280.f_5, 10))
	{
		Global_1949598.f_1 = 0;
		if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		HUD::_DISPLAY_HUD_COMPONENT(-252438768);
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2280.f_1))
		{
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_2280.f_1);
			PATHFIND::_0x2C87C3E1C7B96EE2(uParam0->f_2280.f_1);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_2280.f_3, false);
			VOLUME::_DELETE_VOLUME(uParam0->f_2280.f_1);
		}
		switch (__LIB_0__::func_2())
		{
			case -1:
				__LIB_14__::func_729(&(uParam0->f_2280));
				break;
		}
		__LIB_14__::func_711(uParam0->f_2280, 1);
		__LIB_1__::func_452(31, 0, 0, 0, 0);
		__LIB_1__::func_36(0);
		__LIB_0__::func_719(0, 1);
		__LIB_14__::func_730();
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_2280, false, true);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_2280, uParam0->f_2280.f_15, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_2280, uParam0->f_2280.f_18);
		ENTITY::_0x9587913B9E772D29(uParam0->f_2280, 0);
		__LIB_14__::func_731(1, uParam0->f_2280);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(uParam0->f_2280.f_19, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		PED::_0x2208438012482A1A(uParam0->f_2280, false, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		__LIB_0__::func_11(uParam0);
		__LIB_14__::func_732(&(uParam0->f_2280.f_2));
		__LIB_15__::func_812();
	}
	__LIB_15__::func_366(&(uParam0->f_2280));
	uParam0->f_2280.f_5 = 0;
}

bool func_890(var uParam0)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (*uParam0 == 9)
	{
		return true;
	}
	if ((__LIB_14__::func_721(uParam0->f_4, *uParam0) || __LIB_14__::func_722(uParam0->f_4, *uParam0)) || uParam0->f_50 == 10)
	{
		return true;
	}
	return false;
}

int func_891(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 14 || iParam1 <= -1)
	{
		return 0;
	}
	uParam0->f_20[iParam1 /*8*/].f_5 = iParam2;
	__LIB_15__::func_327(uParam0, iParam1, 16);
	return 1;
}

bool func_892(var uParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_29(Global_1914319.f_3[uParam0->f_2 /*446*/].f_21) && __LIB_2__::func_767(Global_1914319.f_3[uParam0->f_2 /*446*/].f_21, 0))
		{
			if (!__LIB_14__::func_721(__LIB_2__::func_963(Global_1914319.f_3[uParam0->f_2 /*446*/].f_21), uParam0->f_2))
			{
				return false;
			}
		}
		return true;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(Global_1051260.f_48[uParam0->f_2 /*78*/].f_19, Global_1051260.f_48[uParam0->f_2 /*78*/].f_30, true, 0);
}

void func_893(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_15__::func_372(uParam0);
	iVar1 = __LIB_15__::func_821(uParam0, __LIB_14__::func_816());
	uParam1->f_11 = iVar0;
	uParam1->f_12 = iVar1;
	uParam1->f_13 = __LIB_15__::func_31(uParam0);
	*uParam1 = __LIB_14__::func_892();
	uParam1->f_7 = __LIB_14__::func_893();
	uParam1->f_1 = __LIB_15__::func_300();
	uParam1->f_2 = __LIB_14__::func_816();
	uParam1->f_8 = __LIB_12__::func_478();
	uParam1->f_10 = __LIB_14__::func_894();
	uParam1->f_21 = __LIB_14__::func_823(uParam0);
	uParam1->f_22 = __LIB_14__::func_825(uParam0);
	uParam1->f_3 = { __LIB_14__::func_895(&(uParam1->f_8)) };
	uParam1->f_14 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(__LIB_12__::func_478(), __LIB_14__::func_896());
	uParam1->f_15 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(__LIB_12__::func_478(), __LIB_14__::func_897());
}

int func_894(int iParam0, int iParam1)
{
	return __LIB_15__::func_823(Global_35, iParam0, iParam1);
}

int func_895(int iParam0, int iParam1)
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
	return __LIB_15__::func_823(iVar0, iParam0, iParam1);
}

bool func_896(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_277, 1);
		DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_277, 0);
		if (!__LIB_15__::func_741(uParam0, &(uParam0->f_436[0 /*185*/]), 0))
		{
			return false;
		}
		if (!__LIB_15__::func_741(uParam0, &(uParam0->f_436[1 /*185*/]), 1))
		{
			return false;
		}
	}
	else
	{
		DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_277, 3);
		DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_277, 2);
		if (!__LIB_15__::func_741(uParam0, &(uParam0->f_436[2 /*185*/]), 2))
		{
			return false;
		}
		if (!__LIB_15__::func_741(uParam0, &(uParam0->f_436[3 /*185*/]), 3))
		{
			return false;
		}
	}
	return true;
}

void func_897(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	__LIB_15__::func_835(uParam0, iParam1, HUD::_GET_LABEL_TEXT_BY_HASH(iParam2), bParam3, bParam4, bParam5);
}

void func_898(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iVar0 != 0)
		{
			if (iVar0 == 6 && !bParam1)
			{
			}
			else
			{
				__LIB_15__::func_840(uParam0, iVar0);
			}
		}
		iVar0++;
	}
}

bool func_899(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		iVar0 = iVar3;
		iVar1 = __LIB_14__::func_455(iVar0);
		__LIB_15__::func_836(iVar1, iParam0, &iVar4, &iVar5, &uVar2);
		iVar6 = (iVar4 + iVar5);
		switch (iVar0)
		{
			case 0:
				if (iVar4 > 0)
				{
					return true;
				}
				else if (iVar5 > 0)
				{
					return false;
				}
				break;
			default:
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					switch (iVar6)
					{
						case 2:
							if (iVar4 == 2)
							{
								return true;
							}
							else if (iVar4 == 1)
							{
								return uVar2;
							}
							else
							{
								return false;
							}
							break;
						case 1:
							if (iVar4 == 1)
							{
								return true;
							}
							else
							{
								return false;
							}
							break;
						case 0:
							break;
					}
				}
				break;
		}
		iVar3++;
	}
	return false;
}

int func_900(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	__LIB_15__::func_836(iParam0, iParam1, &uVar0, &uVar1, &uVar2);
	return uVar0;
}

void func_901()
{
	int iVar0;
	struct<2> Var1;
	struct<6> Var3;
	iVar0 = __LIB_0__::func_398(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383.f_393))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1900383.f_393))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1900383.f_393, false, true);
		}
		OBJECT::DELETE_OBJECT(&(Global_1900383.f_393));
	}
	Var1 = { __LIB_15__::func_848(0) };
	Var3 = { __LIB_1__::func_623() };
	__LIB_1__::func_163(iVar0, &Var1, &Var3, 0);
	PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX(), iVar0);
	__LIB_0__::func_149(0);
	__LIB_0__::func_148(0);
}

void func_902(var uParam0, var uParam1)
{
	if (!__LIB_15__::func_712(uParam0))
	{
		return;
	}
	Global_1914319.f_3[uParam1->f_2 /*446*/].f_415 = uParam0->f_1281.f_1;
	if (!__LIB_15__::func_133(uParam0, 2, 0))
	{
		__LIB_15__::func_837(uParam0);
	}
	if (__LIB_15__::func_198(&(uParam0->f_4)))
	{
		__LIB_15__::func_503(&(uParam0->f_4), 0);
	}
	__LIB_15__::func_658(uParam0, 0, 0, 0);
	__LIB_15__::func_658(uParam0, 2, 0, 0);
	__LIB_15__::func_658(uParam0, 1, 0, 0);
	__LIB_15__::func_658(uParam0, 3, 0, 0);
	__LIB_15__::func_658(uParam0, 6, 0, 0);
	__LIB_15__::func_658(uParam0, 5, 0, 0);
	__LIB_15__::func_658(uParam0, 4, 1, 1);
}

void func_903(var uParam0)
{
	__LIB_15__::func_624(uParam0, 3, 1, 1);
	if (uParam0->f_221 != 34)
	{
		__LIB_15__::func_624(uParam0, 8, 1, 1);
	}
	__LIB_15__::func_845(uParam0, 3, 0, joaat("MEDIUM_TIMED_EVENT"));
	__LIB_15__::func_582(uParam0, 3, "IB_SELECT");
	__LIB_15__::func_624(uParam0, 7, 0, 0);
	__LIB_15__::func_624(uParam0, 9, 0, 0);
}

void func_904(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	var uVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (!__LIB_9__::func_809(iParam1))
	{
		return;
	}
	switch (iParam1)
	{
		case 2:
			iVar0 = 0;
			break;
		case 3:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
	}
	__LIB_9__::func_810(iParam2);
	__LIB_11__::func_452(iParam1, 0);
	Var1 = { __LIB_15__::func_848(iParam1) };
	__LIB_12__::func_223(&uVar3);
	__LIB_0__::func_511(iParam2);
	__LIB_1__::func_163(iParam2, &Var1, &uVar3, 0);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam2, __LIB_12__::func_503(uParam0, iVar0), uParam0->f_15[iVar0], true, true, true);
	ENTITY::_0x9587913B9E772D29(iParam2, 0);
	PED::_0x1D4636C90BBEFACB(iParam2, 1);
	__LIB_12__::func_504(iParam2);
	TASK::CLEAR_PED_TASKS(iParam2, true, false);
	TASK::TASK_STAND_STILL(iParam2, -1);
	__LIB_0__::func_837(iParam1, 2);
	__LIB_0__::func_798(iParam1);
}

void func_905(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = Global_1935689.f_19.f_1;
	__LIB_15__::func_703(iVar0, iParam0);
	__LIB_15__::func_5(iVar0, bParam1);
	if (__LIB_15__::func_42())
	{
		if (!__LIB_15__::func_14(iVar0))
		{
			__LIB_15__::func_15(iVar0);
			return;
		}
	}
	__LIB_15__::func_850(iParam0);
}

bool func_906(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	__LIB_14__::func_781(&iParam0);
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (__LIB_0__::func_787(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { __LIB_1__::func_117(0) };
			Var4.f_9 = -1591664384;
			if (!__LIB_1__::func_112(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (__LIB_1__::func_429(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (__LIB_0__::func_950(iParam0, 1))
			{
				if (!__LIB_1__::func_112(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (__LIB_1__::func_429(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!__LIB_15__::func_859(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = __LIB_0__::func_936(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = __LIB_0__::func_800(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_907(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar1) != iParam0)
		{
		}
		else
		{
			if (iParam0 == -999503751)
			{
				if (__LIB_0__::func_604() != iVar1)
				{
				}
				else
				{
					Jump @87; //curOff = 71
					if (!__LIB_15__::func_869(iVar1))
					{
					}
					else
					{
						return iVar1;
					}
				}
				iVar0++;
				return 0;
			}
		}
	}
}

void func_908(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(&(Global_40.f_1095.f_1[iParam0 /*436*/]), "", 64);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	__LIB_0__::func_497(&Var0);
	__LIB_15__::func_861(iParam0, Var0);
	__LIB_1__::func_2(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	__LIB_0__::func_498(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	__LIB_0__::func_499(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	__LIB_0__::func_500(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		__LIB_0__::func_501(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		__LIB_0__::func_502(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	__LIB_0__::func_503(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	__LIB_0__::func_504(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	__LIB_0__::func_505(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_31 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_34 = 0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
}

void func_909(int iParam0, int iParam1)
{
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!__LIB_12__::func_516(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	__LIB_15__::func_862(iParam0, iParam1);
}

void func_910(int iParam0, int iParam1)
{
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!__LIB_12__::func_517(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSE_STIMULANT_GIVEN")), 1);
	__LIB_15__::func_862(iParam0, iParam1);
}

int func_911(int iParam0, int iParam1)
{
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!__LIB_12__::func_518(iParam1))
	{
		return 0;
	}
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
	switch (iParam1)
	{
		case joaat("CONSUMABLE_HORSE_REVIVER"):
			break;
	}
	__LIB_15__::func_862(iParam0, iParam1);
	__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSE_REVIVED")), 1);
	return 1;
}

void func_912(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!__LIB_12__::func_520(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	bVar1 = false;
	if (__LIB_1__::func_16(iParam0))
	{
		iVar0 = __LIB_0__::func_402(iParam0);
		bVar1 = true;
	}
	if (bVar1)
	{
		iVar2 = __LIB_6__::func_95(iParam0);
		fVar3 = (BUILTIN::TO_FLOAT(__LIB_12__::func_535(iVar2)) + (48f * 60f));
		__LIB_12__::func_536(iVar0, 0, fVar3);
	}
	__LIB_12__::func_572(iParam0);
	__LIB_15__::func_862(iParam0, iParam1);
}

void func_913(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(__LIB_14__::func_709(&(uParam0->f_1754))))
	{
		return;
	}
	__LIB_15__::func_853(&(uParam0->f_4));
	CAM::SET_CAM_ACTIVE(uParam0->f_1754.f_28, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_4.f_1190, true);
	__LIB_14__::func_710(1);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
	__LIB_15__::func_195(&(uParam0->f_1754), 0);
	GRAPHICS::SET_TIMECYCLE_MODIFIER(__LIB_15__::func_132(uParam0->f_1722));
	if (__LIB_3__::func_411(Global_35, joaat("HATS"), 0))
	{
		__LIB_8__::func_941(joaat("MPC_HIDE_ACTION_HAT"), Global_35, 0, 1);
	}
	Global_1914319.f_17377 = 0;
	__LIB_15__::func_549(uParam0, 5);
	__LIB_12__::func_80(__LIB_14__::func_709(&(uParam0->f_1754)), 1, 1);
}

void func_914(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (__LIB_15__::func_886(Global_35, iParam0, &uVar0))
		{
			__LIB_15__::func_866(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
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

bool func_915(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<10> Var13;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	iVar10 = *iParam2;
	if (iParam2->f_2 > 0)
	{
		bVar4 = true;
	}
	else
	{
		bVar4 = false;
	}
	*iParam3 = 0;
	switch (iVar10)
	{
		case 927095371:
			return __LIB_14__::func_848(iParam0) == bVar4;
		case 1884968092:
			iVar0 = __LIB_0__::func_623(iParam2->f_1);
			if (iVar0 == -1)
			{
				return false;
			}
			return __LIB_2__::func_774(iVar0) == bVar4;
		case -1943220497:
			iVar0 = __LIB_0__::func_623(iParam2->f_1);
			if (iVar0 == -1)
			{
				return false;
			}
			return __LIB_1__::func_185(iVar0) == bVar4;
		case 1412799554:
			iVar1 = iParam2->f_1;
			if (iVar1 == 0)
			{
				return false;
			}
			if (__LIB_0__::func_356(iVar1) == joaat("HORSE_EQUIPMENT"))
			{
				return __LIB_15__::func_872(iVar1) == bVar4;
			}
			else
			{
				return __LIB_0__::func_788(iVar1, 0) > 0 == bVar4;
			}
			break;
		case -1665564967:
			iVar1 = iParam2->f_1;
			if (iVar1 == 0)
			{
				return false;
			}
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (((__LIB_12__::func_576(iVar1, 1728382685 /* GXTEntry: "Right" */, 0) || __LIB_12__::func_576(iVar1, -649335959 /* GXTEntry: "Left" */, 0)) || __LIB_12__::func_576(iVar1, -1876502240, 0)) || __LIB_12__::func_576(iVar1, -2107032155, 0))
				{
					return true;
				}
			}
			return false;
		case -1100867449:
			iVar9 = __LIB_12__::func_568(iParam2->f_1);
			if (iVar9 == -1)
			{
				return false;
			}
			return __LIB_3__::func_657(iVar9) >= iParam2->f_2;
		case -761364604:
			iVar2 = __LIB_11__::func_517(iParam2->f_1);
			if (iVar2 == -1)
			{
				return false;
			}
			return __LIB_1__::func_187(iVar2) == bVar4;
		case -343773245:
			iVar2 = __LIB_11__::func_517(iParam2->f_1);
			if (iVar2 == -1)
			{
				return false;
			}
			return __LIB_1__::func_200(iVar2) == bVar4;
		case 318533979:
			return __LIB_7__::func_780() == bVar4;
		case joaat("INV_REQ_TYPE_IN_REGION"):
			if (__LIB_15__::func_325(__LIB_1__::func_921(iParam0), iParam0))
			{
				return true;
			}
			iVar3 = __LIB_9__::func_29(iParam2->f_1);
			if (iVar3 == -1)
			{
				return false;
			}
			if (bVar4)
			{
				return __LIB_9__::func_843(iParam0) == iVar3;
			}
			else
			{
				return __LIB_9__::func_843(iParam0) != iVar3;
			}
			break;
		case 716744052:
			iVar11 = __LIB_12__::func_526(iParam2->f_1);
			if (!__LIB_1__::func_917(iVar11))
			{
				return false;
			}
			if (bVar4)
			{
				return Global_1914319.f_16855.f_1 == iVar11;
			}
			else
			{
				return Global_1914319.f_16855.f_1 != iVar11;
			}
			break;
		case -1316856660:
			return __LIB_0__::func_214(iParam2->f_1) == bVar4;
		case -192905099:
			return __LIB_0__::func_428(iParam2->f_1) == bVar4;
		case -811319973:
			return __LIB_0__::func_2() == -1 == bVar4;
		case -185626331:
			return __LIB_0__::func_2() != -1 == bVar4;
		case -1279067322:
			iVar5 = __LIB_12__::func_569(iParam2->f_1);
			if (iVar5 == -1)
			{
				return false;
			}
			return __LIB_9__::func_783(iVar5) == bVar4;
		case -1013499808:
			iVar6 = iParam2->f_1;
			if (iVar6 == 0)
			{
				return false;
			}
			return iVar6 == Global_1946804.f_1 == bVar4;
		case 1407970834:
			iVar1 = iParam2->f_1;
			if (iVar1 == 0)
			{
				return false;
			}
			return __LIB_1__::func_160(iVar1, 1) == bVar4;
		case 1437906597:
			iVar12 = __LIB_12__::func_527(iParam2->f_1);
			if (!__LIB_0__::func_52(iVar12))
			{
				return false;
			}
			return __LIB_0__::func_293(iVar12) == bVar4;
		case -280118519:
			return ((__LIB_11__::func_518() || __LIB_11__::func_519()) && bVar4);
		case -1869915166:
			return (__LIB_0__::func_26() && bVar4);
		case -1160790731:
			return (0 && bVar4);
		case 16476779:
			iVar1 = iParam2->f_1;
			if (iVar1 == 0)
			{
				return false;
			}
			Var13.f_9 = -1591664384;
			iVar42 = 0;
			while (iVar42 < 5)
			{
				if (__LIB_15__::func_643(iVar42, &Var13))
				{
					if (Var13.f_4 == iVar1)
					{
						return bVar4;
					}
				}
				iVar42++;
			}
			if (!bVar4)
			{
				return true;
			}
			return false;
		case 1561382091:
			iVar7 = __LIB_12__::func_528(iParam2->f_1);
			if (iVar7 == -1)
			{
				return false;
			}
			if (!bVar4)
			{
				return false;
			}
			return (__LIB_11__::func_531(iVar7, 0) || __LIB_11__::func_531(iVar7, 1));
		case 1305693938:
			iVar1 = iParam2->f_1;
			if (!__LIB_0__::func_144(iVar1, 0))
			{
				return false;
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1914319.f_16855.f_31))
			{
				iVar43 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1914319.f_16855.f_31);
			}
			else
			{
				return false;
			}
			if (iVar43 <= 0)
			{
				return false;
			}
			iVar46 = 0;
			while (iVar46 < iVar43)
			{
				iVar44 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1914319.f_16855.f_31, iVar46);
				if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar44))
				{
					iVar47 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar44, __LIB_12__::func_482());
					iVar45 = iVar47;
					if (__LIB_0__::func_144(iVar45, 0))
					{
						if (iVar45 == iVar1)
						{
							if (bVar4)
							{
								return true;
							}
						}
					}
				}
				iVar46++;
			}
			if (!bVar4)
			{
				return true;
			}
			return false;
		case 1105714339:
			iVar8 = iParam2->f_1;
			if (iVar8 == 0)
			{
				return false;
			}
			return __LIB_15__::func_780(Global_1914319.f_16855.f_36, iVar8, Global_1914319.f_16855.f_37) == bVar4;
		case -253134813:
			if (!bVar4)
			{
				return false;
			}
			return __LIB_15__::func_41(iParam1, iParam2->f_1);
		case -501545386:
			iVar48 = iParam2->f_1;
			switch (iVar48)
			{
				case joaat("SHOP_HONOR_HIGH"):
					return (__LIB_0__::func_871() && bVar4);
				case joaat("SHOP_HONOR_LOW"):
					return (__LIB_3__::func_582() && bVar4);
				case 1014511709:
					return (__LIB_6__::func_138() && bVar4);
				case joaat("SHOP_HONOR_GOOD_4"):
					return (__LIB_6__::func_139() && bVar4);
			}
			return false;
		case -1541662797:
			iVar49 = -589165916;
			if (iParam2->f_1 == joaat("HAI_FISHING_01"))
			{
				iVar49 = joaat("HAI_FISHING_01");
			}
			if (iVar49 == -589165916)
			{
				return false;
			}
			else
			{
				iVar50 = __LIB_1__::func_293(0, __LIB_1__::func_215(iVar49, 1), 11, iVar49);
				return __LIB_1__::func_268(iVar50) > 0;
			}
			break;
		case -1480714855:
			return __LIB_6__::func_338(iParam2->f_1);
		case 348599371:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(iParam2->f_1) == bVar4;
		case -1318118431:
			return Global_1914319.f_16855.f_36 == iParam2->f_1 == bVar4;
	}
	return false;
}

void func_916(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = __LIB_15__::func_875(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = __LIB_15__::func_875(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = __LIB_15__::func_875(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = __LIB_15__::func_875(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = __LIB_15__::func_875(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = __LIB_15__::func_875(iParam0, &(Global_1946804.f_2657.f_25));
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

void func_917(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, int iParam8, bool bParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	var uVar2[40];
	vector3 vVar43;
	vector3 vVar46[24];
	int iVar49;
	iVar0 = __LIB_15__::func_879(&uVar2, uParam1, iParam5, vParam2, fParam7, iParam8, bParam9, 0, -1, 1, iParam10, bParam11, 0, 0);
	__LIB_14__::func_637(&uVar2, iVar0, vParam2, 1, 1, 0);
	iVar1 = 0;
	iVar49 = 0;
	StringCopy(&cVar46, "GRABBED_PED ", 24);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_0__::func_272(uVar2[iVar1], 0))
		{
			vVar43 = { cVar46 };
			StringIntConCat(&vVar43, iVar1, 24);
			if (bParam9)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar2[iVar1], true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar2[iVar1], true, true);
			}
			PED::SET_PED_NAME_DEBUG(uVar2[iVar1], &vVar43);
			(*iParam0)[iVar49] = uVar2[iVar1];
			iVar49++;
			if (iVar49 >= iParam6)
			{
			}
			else
			{
				iVar1++;
			}
		}
	}
}

bool func_918(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	int iVar6;
	if (__LIB_0__::func_357(iParam2) == -999503751)
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam2, 265372629))
	{
		return false;
	}
	iVar0 = iParam2;
	Var1.f_1 = -1;
	__LIB_15__::func_882(&Var1, iVar0, -1, 1, 1);
	if (PED::_0x93FFD92F05EC32FD(Var1.f_3.f_1))
	{
	}
	else
	{
		return false;
	}
	iVar6 = Var1.f_3.f_1;
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, __LIB_14__::func_737(), iVar6);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, __LIB_14__::func_736(), true);
	uParam0->f_2031.f_79 = 1;
	return true;
}

int func_919(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_14__::func_929(uParam0->f_2))
	{
		return 0;
	}
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (__LIB_0__::func_356(iParam1) != joaat("CLOTHING"))
	{
		return 0;
	}
	if (__LIB_12__::func_486(iParam1))
	{
		iVar0 = __LIB_15__::func_877(iParam1);
		if (iVar0 != 0)
		{
			iParam1 = iVar0;
		}
	}
	iVar1 = __LIB_14__::func_738(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	iVar4 = __LIB_0__::func_357(iParam1);
	__LIB_14__::func_711(iVar1, 0);
	if (iVar4 == -999503751)
	{
		iVar5 = __LIB_0__::func_449(iParam1);
		if (iVar5 == 0)
		{
			__LIB_12__::func_80(iVar1, 1, 1);
		}
		else if (iVar5 <= 5 && iVar5 >= 1)
		{
			if (!__LIB_15__::func_96(iVar1, iVar5, 1))
			{
				return 0;
			}
		}
		else if (!__LIB_15__::func_97(iVar1, iParam1, 1))
		{
			return 0;
		}
	}
	else
	{
		if (!__LIB_15__::func_886(iVar1, iParam1, &uVar3))
		{
			return 0;
		}
		iVar2 = __LIB_15__::func_807(iParam1);
		if (!__LIB_15__::func_860(iVar1, iParam1, 0, iVar2))
		{
			return 0;
		}
	}
	return 1;
}

void func_920(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	__LIB_15__::func_882(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

void func_921(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	bool bVar0;
	if (__LIB_15__::func_421(iParam1))
	{
		if (iParam1 == -377364164)
		{
			__LIB_0__::func_510(iParam2);
			PED::_0xA5BAE410B03E7371(iParam2, 0, 0, 1);
			__LIB_0__::func_19(uParam3, -377364164 /* GXTEntry: "Natural" */);
			__LIB_0__::func_511(iParam2);
			__LIB_1__::func_4(iParam2, uParam4);
			PED::_UPDATE_PED_VARIATION(iParam2, false, true, true, true, true);
		}
		else if (iParam1 == 357708345)
		{
			__LIB_0__::func_510(iParam2);
			PED::_0xA5BAE410B03E7371(iParam2, 0, 0, 1);
			__LIB_0__::func_115(uParam3, 357708345 /* GXTEntry: "Natural" */);
			__LIB_0__::func_511(iParam2);
			__LIB_1__::func_4(iParam2, uParam4);
			PED::_UPDATE_PED_VARIATION(iParam2, false, true, true, true, true);
		}
		else
		{
			bVar0 = true;
			__LIB_15__::func_10(uParam3, iParam1);
		}
		__LIB_0__::func_663(__LIB_14__::func_898(uParam0), __LIB_12__::func_200(0));
	}
	else
	{
		bVar0 = true;
		__LIB_15__::func_883(uParam4, iParam1);
	}
	if (bVar0)
	{
		__LIB_1__::func_163(iParam2, uParam3, uParam4, 0);
	}
}

void func_922(var uParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar4;
	char* sVar7;
	uParam0->f_1281.f_1 = vParam1.x;
	if (__LIB_7__::func_791())
	{
		__LIB_15__::func_549(uParam0, 8);
		return;
	}
	if (__LIB_15__::func_193(vParam1.y, vParam1.z, 0, &iVar0))
	{
		vVar4.f_1 = -1;
		vVar4.f_2 = -1;
		if (__LIB_15__::func_194(vParam1.y, iVar0, 0, &vVar4))
		{
			if (!__LIB_15__::func_886(Global_35, vVar4.x, &sVar7))
			{
				__LIB_15__::func_30(MISC::_CREATE_VAR_STRING(0, sVar7));
				__LIB_15__::func_136(&(uParam0->f_4));
				return;
			}
		}
	}
	__LIB_15__::func_473(&(uParam0->f_4), 0);
	__LIB_8__::func_944(Global_35, joaat("MPC_HIDE_ACTION_HAT"), 1);
	if (__LIB_0__::func_2() == -1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "outfitChanged") && DECORATOR::DECOR_GET_BOOL(Global_35, "outfitChanged"))
		{
			uParam0->f_1787 = Global_40.f_7729;
		}
		else
		{
			uParam0->f_1787 = Global_1905941;
		}
	}
	__LIB_15__::func_195(&(uParam0->f_1754), 1);
	__LIB_15__::func_138("tailor_dressing_room", "shop_scenes");
	__LIB_15__::func_135(uParam0, 3, 1);
	Global_1914319.f_17377 = 1;
	__LIB_15__::func_549(uParam0, 8);
}

bool func_923(var uParam0)
{
	if (__LIB_14__::func_697(uParam0->f_1))
	{
		__LIB_15__::func_206(uParam0, 0);
		return true;
	}
	switch (uParam0->f_51)
	{
		case 0:
			if (!__LIB_14__::func_448(uParam0->f_4))
			{
				__LIB_15__::func_206(uParam0, 1);
			}
			break;
		case 1:
			if (__LIB_15__::func_684(uParam0))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_44, ""))
				{
					__LIB_15__::func_206(uParam0, 6);
				}
				else
				{
					__LIB_15__::func_206(uParam0, 4);
				}
			}
			else
			{
				__LIB_15__::func_212(uParam0);
			}
			break;
		case 4:
			if (__LIB_15__::func_887(uParam0, uParam0->f_44))
			{
				__LIB_15__::func_206(uParam0, 6);
			}
			else
			{
				__LIB_15__::func_212(uParam0);
				__LIB_15__::func_206(uParam0, 1);
			}
			break;
		case 6:
			__LIB_15__::func_206(uParam0, 0);
			return true;
	}
	return false;
}

bool func_924(var uParam0)
{
	switch (uParam0->f_51)
	{
		case 0:
			if (!__LIB_14__::func_448(uParam0->f_4))
			{
				__LIB_15__::func_206(uParam0, 1);
			}
			break;
		case 1:
			if (__LIB_15__::func_571(uParam0))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_44, ""))
				{
					__LIB_15__::func_206(uParam0, 6);
				}
				else
				{
					__LIB_15__::func_206(uParam0, 4);
				}
			}
			else
			{
				__LIB_15__::func_212(uParam0);
			}
			break;
		case 4:
			__LIB_15__::func_887(uParam0, uParam0->f_44);
			__LIB_15__::func_206(uParam0, 6);
			break;
		case 6:
			__LIB_15__::func_206(uParam0, 0);
			return true;
	}
	return false;
}

bool func_925(var uParam0, bool bParam1)
{
	switch (uParam0->f_51)
	{
		case 0:
			if (!__LIB_14__::func_448(uParam0->f_4))
			{
				__LIB_15__::func_206(uParam0, 1);
			}
			break;
		case 1:
			if (__LIB_15__::func_739(uParam0, bParam1))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_44, ""))
				{
					__LIB_15__::func_206(uParam0, 6);
				}
				else
				{
					__LIB_15__::func_206(uParam0, 4);
				}
			}
			break;
		case 4:
			__LIB_15__::func_887(uParam0, uParam0->f_44);
			__LIB_15__::func_206(uParam0, 6);
			break;
		case 6:
			__LIB_15__::func_206(uParam0, 0);
			return true;
	}
	return false;
}

void func_926(var uParam0)
{
	switch (uParam0->f_51)
	{
		case 0:
			if (uParam0->f_64 != Global_1914319.f_18903)
			{
				uParam0->f_63 = 0;
				uParam0->f_64 = Global_1914319.f_18903;
			}
			if (((!__LIB_15__::func_450(uParam0, 8) && !__LIB_14__::func_727(Global_1914319.f_18903)) && __LIB_15__::func_333(uParam0, 2)) && uParam0->f_63 != 0)
			{
				return;
			}
			if (Global_1914319.f_18903 == 1)
			{
				return;
			}
			__LIB_15__::func_206(uParam0, 1);
			break;
		case 1:
			if (__LIB_15__::func_362(uParam0))
			{
				__LIB_15__::func_206(uParam0, 4);
			}
			break;
		case 4:
			if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_44))
			{
				__LIB_15__::func_206(uParam0, 6);
			}
			else
			{
				if (!__LIB_15__::func_333(uParam0, 2))
				{
					__LIB_15__::func_547(uParam0, 2);
				}
				if (__LIB_15__::func_887(uParam0, uParam0->f_44))
				{
					uParam0->f_63++;
					__LIB_15__::func_206(uParam0, 0);
				}
				else
				{
					__LIB_15__::func_206(uParam0, 6);
				}
			}
			break;
		case 6:
			uParam0->f_63 = 0;
			__LIB_14__::func_608(1);
			__LIB_15__::func_206(uParam0, 0);
			break;
	}
}

bool func_927(int iParam0)
{
	return (__LIB_15__::func_844(iParam0) || __LIB_15__::func_496(iParam0));
}

void func_928(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (__LIB_1__::func_707(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				__LIB_15__::func_106(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				__LIB_15__::func_107(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_929(var uParam0)
{
	uParam0->f_2413.f_2 = 1;
	uParam0->f_2413.f_3 = 0;
	uParam0->f_2413.f_1 = 0;
	uParam0->f_2413.f_4 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (uParam0->f_2 == 3 && (uParam0->f_18 == 5 || uParam0->f_18 == 38))
		{
			uParam0->f_2413 = -1;
		}
		else
		{
			uParam0->f_2413 = ANIMSCENE::_CREATE_ANIM_SCENE("script@common@shop@playercamp", 0, 0, false, true);
		}
	}
	else
	{
		uParam0->f_2413 = -1;
	}
}

void func_930(var uParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1952.f_30))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_1952.f_30);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_2413, "player", iVar0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2413))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2413);
	}
	if (uParam0->f_2413 != -1)
	{
		uParam0->f_2413 = -1;
	}
}

bool func_931(var uParam0)
{
	return uParam0->f_2031.f_46;
}

int func_932(var uParam0, int iParam1)
{
	if (!__LIB_1__::func_917(iParam1))
	{
		return 0;
	}
	uParam0->f_2031.f_44 = iParam1;
	return 1;
}

int func_933(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 777890122:
			break;
		case -1502467280:
			break;
		case -772187037:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_148.f_1281))
			{
				WEAPON::_SET_WEAPON_LEVEL_THRESHOLD(uParam0->f_148.f_1281, 1f);
				WEAPON::_SET_WEAPON_SOOT(uParam0->f_148.f_1281, 0f, false);
				WEAPON::_SET_WEAPON_DIRT(uParam0->f_148.f_1281, 0f, false);
				WEAPON::_SET_WEAPON_DAMAGE(uParam0->f_148.f_1281, 0f, false);
			}
			break;
	}
	return 1;
}

int func_934(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 == -1665950342)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_58, 0);
		if (iParam2 != 1154588893)
		{
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar0, __LIB_12__::func_482());
			iVar2 = iVar1;
			if ((((!__LIB_0__::func_144(iVar2, 0) || iVar2 == 902806957) || iVar2 == 726009467) || iVar2 == 841778380) || iVar2 == 493688651)
			{
				if (iParam2 != -1171685946 && iParam2 != -360362897)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_935(var uParam0, int iParam1)
{
	uParam0->f_2031.f_120 = iParam1;
	uParam0->f_2031.f_119 = 1;
}

void func_936(var uParam0)
{
	uParam0->f_2031.f_82 = 1;
}

void func_937(var uParam0, var uParam1)
{
	uParam0->f_2031.f_83 = uParam1;
}

int func_938(int iParam0)
{
	switch (iParam0)
	{
		case -1857259125:
			return -297776258 /* GXTEntry: "All Boots" */;
		case -547817586:
			return -1925207989 /* GXTEntry: "All Chaps" */;
		case 1833333440:
			return 1787677477 /* GXTEntry: "All Coats" */;
		case -2037642765:
			return 391526613 /* GXTEntry: "All Gloves" */;
		case 875142840:
			return 1639280812 /* GXTEntry: "All Hats" */;
		case -1910343422:
			return -61993860 /* GXTEntry: "All Neckwear" */;
		case -1351178867:
			return 1249653681 /* GXTEntry: "All Outfits" */;
		case 283548796:
			return -1042887720 /* GXTEntry: "All Pants" */;
		case 1626545603:
			return 232898093 /* GXTEntry: "All Shirts" */;
		case -38868649:
			return -606800691 /* GXTEntry: "All Half Chaps" */;
		case 860146248:
			return -1192477529 /* GXTEntry: "All Spurs" */;
		case 14283450:
			return -451010970 /* GXTEntry: "All Suspenders" */;
		case 1652743275:
			return 1057364852 /* GXTEntry: "All Suits" */;
		case 295063209:
			return 708606378 /* GXTEntry: "All Vests" */;
	}
	return -1;
}

int func_939(int iParam0)
{
	switch (iParam0)
	{
		case -1857259125:
			return -65668300;
		case -547817586:
			return -200637916;
		case 1833333440:
			return 204585590;
		case -2037642765:
			return -279438101;
		case 875142840:
			return 10125026;
		case -1910343422:
			return 1774597895;
		case -1351178867:
			return 1176574464;
		case 283548796:
			return 1619682508;
		case 1626545603:
			return -1410214901;
		case -38868649:
			return 221404735;
		case 860146248:
			return 77679311;
		case 14283450:
			return -1056037760;
		case 1652743275:
			return -1024690000;
		case 295063209:
			return -1259378396;
	}
	return -1;
}

void func_940(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar9;
	WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(iParam0, iParam1);
	uVar1 = 1;
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ID(iParam1);
	if (iVar3 != 0)
	{
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iVar3, &uVar1);
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iVar3, &uVar1, iVar0, &iVar5))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iVar5, &vVar9))
				{
					if (vVar9.z == joaat("WEAPON_MOD") || vVar9.z == joaat("WEAPON_DECORATION"))
					{
						if (!__LIB_0__::func_192(vVar9.x, 1844906744) && WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(iParam0, vVar9.x))
						{
							WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(iParam0, vVar9.x);
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_941(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	int iVar16;
	struct<9> Var20;
	uVar5 = 1;
	Var20 = -1;
	Var20.f_1 = -1;
	Var20.f_2 = -1;
	Var20.f_3 = -1;
	Var20.f_4 = -1;
	Var20.f_5 = -1;
	Var20.f_6 = -1;
	Var20.f_7 = -1;
	Var20.f_8 = -1;
	Var20.f_3 = __LIB_0__::func_357(iParam1);
	iVar0 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var20, &iVar1, 1);
	if (iVar1 > 1)
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar0, iVar2, &iVar3))
			{
				if ((iVar3 != iParam1 && !__LIB_0__::func_192(iVar3, 1844906744)) && WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), iVar3))
				{
					iVar7 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ID(iVar3);
					if (iVar7 != 0)
					{
						iVar8 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iVar7, &uVar5);
						iVar4 = 0;
						while (iVar4 < iVar8)
						{
							if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iVar7, &uVar5, iVar4, &iVar16))
							{
								if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iVar16, &vVar9))
								{
									if (vVar9.z == joaat("WEAPON_MOD") || vVar9.z == joaat("WEAPON_DECORATION"))
									{
										if (!__LIB_0__::func_192(vVar9.x, 1844906744) && WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), vVar9.x))
										{
											WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), vVar9.x);
										}
									}
								}
							}
							iVar4++;
						}
					}
				}
			}
			iVar2++;
		}
	}
	ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar0);
	WEAPON::_GIVE_WEAPON_COMPONENT_TO_ENTITY(iParam0, iParam1, iParam2, false);
	iVar7 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ID(iParam1);
	if (iVar7 != 0)
	{
		iVar8 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iVar7, &uVar5);
		iVar4 = 0;
		while (iVar4 < iVar8)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iVar7, &uVar5, iVar4, &iVar16))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iVar16, &vVar9))
				{
					if (vVar9.z == joaat("WEAPON_MOD") || vVar9.z == joaat("WEAPON_DECORATION"))
					{
						if (!__LIB_0__::func_192(vVar9.x, 1844906744) && !WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), vVar9.x))
						{
							WEAPON::_GIVE_WEAPON_COMPONENT_TO_ENTITY(iParam0, vVar9.x, iParam2, false);
						}
					}
				}
			}
			iVar4++;
		}
	}
	if (__LIB_0__::func_192(iParam1, -1644819871))
	{
		Var20.f_3 = -1;
		Var20.f_8 = 1851054657;
		iVar0 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var20, &iVar1, 1);
		if (iVar1 > 1)
		{
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				if (ITEMDATABASE::_0x8750F69A720C2E41(iVar0, iVar2, &iVar3))
				{
					if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), iVar3))
					{
						WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), iVar3);
					}
				}
				iVar2++;
			}
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar0);
	}
}

int func_942(var uParam0)
{
	switch (uParam0->f_2413.f_1)
	{
		case 0:
			if (uParam0->f_2413 == -1)
			{
				__LIB_0__::func_115(&(uParam0->f_2413), 2);
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2413))
			{
				return 0;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2413);
			__LIB_0__::func_115(&(uParam0->f_2413), 1);
			break;
		case 1:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_2413, true, false))
			{
				return 0;
			}
			__LIB_0__::func_115(&(uParam0->f_2413), 2);
			break;
		case 2:
			return 1;
	}
	return 0;
}

void func_943(var uParam0)
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_1754.f_28))
	{
		uParam0->f_1754.f_28 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
	}
	uParam0->f_4.f_1190.f_7 = 44f;
	uParam0->f_4.f_1190.f_1 = { 0.1336f, -0.222f, 0.4709f };
	__LIB_15__::func_402(uParam0->f_1754.f_28, 0);
	if (!__LIB_0__::func_86(uParam0->f_1737))
	{
		CAM::SET_CAM_PARAMS(uParam0->f_1754.f_28, uParam0->f_1737, uParam0->f_1740, 51.3f, 0, 1, 1, 2, 1, 0);
	}
	else
	{
		CAM::SET_CAM_PARAMS(uParam0->f_1754.f_28, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1754.f_30, 0.9738f, -0.7408f, 0.6035f), ENTITY::GET_ENTITY_ROTATION(uParam0->f_1754.f_30, 2) - Vector(-30.5098f, 0f, 14.2406f), 51.3f, 0, 1, 1, 2, 1, 0);
	}
	if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
	CAM::SET_CAM_ACTIVE(uParam0->f_1754.f_28, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

int func_944(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
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
				__LIB_2__::func_998(iVar9, &iVar6, &uVar7, &iVar5, &uVar8);
				__LIB_2__::func_999(&iVar0, iVar9, iVar5, iVar6);
			}
			else
			{
				iVar0 = __LIB_5__::func_797(iVar2);
			}
			if (iVar0 == iParam1)
			{
				*iParam2 = iVar2;
				ITEMSET::DESTROY_ITEMSET(iVar1);
				return 1;
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return 0;
}

int func_945(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	struct<21> Var4;
	Var4.f_9 = -1591664384;
	if (!__LIB_1__::func_280(iParam0, &uVar0, &Var4, iParam2))
	{
		return 0;
	}
	WEAPON::_SET_WEAPON_DEGRADATION(*uParam1, Var4.f_16);
	WEAPON::_SET_WEAPON_SOOT(*uParam1, Var4.f_18, false);
	WEAPON::_SET_WEAPON_DIRT(*uParam1, Var4.f_20, false);
	WEAPON::_SET_WEAPON_DAMAGE(*uParam1, Var4.f_19, false);
	return 1;
}

void func_946(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7[10];
	int iVar18;
	if (!__LIB_9__::func_808(iParam1))
	{
		return;
	}
	if (__LIB_1__::func_356(iParam0))
	{
		iVar5 = 0;
		while (iVar5 < 3)
		{
			iVar4 = __LIB_0__::func_574(iVar5);
			if (!PED::_0x608BC6A6AACD5036(&Var0, iParam0, iVar4, 0))
			{
			}
			else
			{
				iVar6 = Var0.f_3;
				if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
				{
				}
				else if (iParam1 == __LIB_14__::func_338(iVar6))
				{
					if (ENTITY::_0x8DE41E9902E85756(iVar6))
					{
						if (iVar5 == 0 || iVar5 == 2)
						{
							*uParam4 = 1;
						}
						*iParam2++;
					}
					else
					{
						*iParam3++;
					}
				}
			}
			iVar5++;
		}
	}
	else if (PED::_IS_PED_CARRYING(iParam0))
	{
		__LIB_7__::func_754(Global_35, &uVar7, 1);
		iVar18 = 0;
		while (iVar18 < 10)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uVar7[iVar18]))
			{
			}
			else if (iParam1 == __LIB_14__::func_338(uVar7[iVar18]))
			{
				if (ENTITY::_0x8DE41E9902E85756(uVar7[iVar18]))
				{
					if (iVar18 == 0)
					{
						*uParam4 = 1;
					}
					*iParam2++;
				}
				else
				{
					*iParam3++;
				}
			}
			iVar18++;
		}
	}
}

int func_947(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!bParam1)
	{
	}
	__LIB_14__::func_796(uParam0, __LIB_12__::func_475(&(uParam0->f_2031)));
	iVar0 = 0;
	iVar1 = __LIB_9__::func_843(uParam0->f_3);
	iVar2 = __LIB_12__::func_492();
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (!__LIB_14__::func_888(iVar3, &iVar4))
		{
		}
		else if (!__LIB_14__::func_889(iVar1, iVar4))
		{
		}
		else if (iVar4 == iVar1)
		{
		}
		else
		{
			iVar0++;
		}
		iVar3++;
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	__LIB_15__::func_406(uParam0, 0);
	__LIB_15__::func_897(uParam0, 1, joaat("IB_BUY"), 1, 1, 0);
	return 1;
}

int func_948(var uParam0, var uParam1)
{
	bool bVar0;
	bVar0 = __LIB_15__::func_391(0);
	__LIB_15__::func_897(uParam0, 1, joaat("IB_BUY"), bVar0, 1, 0);
	return 1;
}

int func_949(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_15__::func_393(0);
	if (iVar0 == -1 || iVar0 >= 5)
	{
		return 0;
	}
	if (__LIB_1__::func_105(iVar0))
	{
		__LIB_15__::func_897(uParam0, 2, -861791432 /* GXTEntry: "Sell" */, 1, 1, 1);
	}
	__LIB_15__::func_272(uParam0, -1848132362 /* GXTEntry: "Your stable is full. Make room in your stable" */);
	return 1;
}

int func_950(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = uParam1->f_1;
	if (iVar0 == -1 || iVar0 >= 5)
	{
		__LIB_15__::func_840(uParam0, 2);
		__LIB_15__::func_840(uParam0, 3);
	}
	else if (__LIB_1__::func_105(iVar0))
	{
		if (__LIB_0__::func_815(iVar0) == 1)
		{
			__LIB_15__::func_897(uParam0, 3, 1346060065 /* GXTEntry: "Stable" */, 1, 1, 0);
			__LIB_15__::func_272(uParam0, -262890001 /* GXTEntry: "This is your active horse" */);
		}
		else
		{
			__LIB_15__::func_897(uParam0, 3, 545231356 /* GXTEntry: "Saddle Up" */, 1, 1, 0);
			__LIB_15__::func_272(uParam0, 369533482 /* GXTEntry: "This horse is stabled" */);
		}
		__LIB_15__::func_897(uParam0, 2, -861791432 /* GXTEntry: "Sell" */, 1, 1, 1);
	}
	else
	{
		__LIB_15__::func_840(uParam0, 2);
		__LIB_15__::func_840(uParam0, 3);
	}
	return 1;
}

int func_951(var uParam0, var uParam1)
{
	if (__LIB_0__::func_144(uParam1->f_9, 0))
	{
		if (__LIB_14__::func_925(&(uParam1->f_3), 0))
		{
			__LIB_15__::func_840(uParam0, 2);
			__LIB_15__::func_840(uParam0, 3);
		}
		else
		{
			__LIB_15__::func_897(uParam0, 3, joaat("SHOP_EQUIP"), 1, 1, 0);
			__LIB_15__::func_897(uParam0, 2, -861791432 /* GXTEntry: "Sell" */, 1, 1, 1);
		}
		__LIB_15__::func_897(uParam0, 1, joaat("IB_SELECT"), 1, 1, 0);
	}
	else
	{
		__LIB_15__::func_897(uParam0, 1, joaat("IB_BUY"), 1, 1, 0);
		__LIB_15__::func_840(uParam0, 2);
		__LIB_15__::func_840(uParam0, 3);
	}
	__LIB_14__::func_954(uParam0, &(uParam1->f_3));
	return 1;
}

int func_952(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_5__::func_917();
	if (iVar0 == 1)
	{
		__LIB_15__::func_897(uParam0, 1, 877647614 /* GXTEntry: "Store Saddle" */, 1, 1, 0);
		__LIB_15__::func_272(uParam0, 829087889 /* GXTEntry: "Store your saddle here at the stables" */);
	}
	else if (iVar0 == 3)
	{
		__LIB_15__::func_897(uParam0, 1, -1765989736 /* GXTEntry: "Take Saddle" */, 1, 1, 0);
		__LIB_15__::func_272(uParam0, -2111805612 /* GXTEntry: "Take your saddle out of the stables" */);
	}
	return 1;
}

int func_953(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = uParam1->f_1;
	iVar1 = iVar0;
	iVar3 = 0;
	if (__LIB_15__::func_391(0))
	{
		__LIB_15__::func_897(uParam0, 5, joaat("IB_ADJUST"), 1, 1, 0);
		switch (iVar1)
		{
			case 0:
			case 1:
				iVar2 = 536681653;
				break;
			case 2:
				iVar2 = -934544273;
				break;
			default:
				iVar2 = 1243347373;
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
			case 1:
				iVar2 = -1078622262;
				break;
			case 2:
				iVar2 = -929695534;
				break;
			default:
				iVar2 = 836317122;
				break;
		}
		iVar4 = __LIB_14__::func_738(uParam0);
		if (!__LIB_14__::func_927(iVar4, iVar1, &iVar5))
		{
			iVar3 = iVar5;
		}
	}
	if (iVar3 != 0)
	{
		__LIB_14__::func_804(uParam0, 0);
	}
	else
	{
		__LIB_15__::func_405(uParam0, iVar3);
	}
	__LIB_15__::func_272(uParam0, iVar2);
	return 1;
}

int func_954(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	bVar0 = __LIB_15__::func_391(0);
	iVar1 = uParam1->f_1;
	if (!__LIB_14__::func_956(&iVar1))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		__LIB_15__::func_406(uParam0, MISC::GET_HASH_KEY(sVar2));
		__LIB_14__::func_793(uParam0, bVar0);
	}
	__LIB_15__::func_897(uParam0, 1, joaat("IB_BUY"), bVar0, 1, 0);
	__LIB_15__::func_464(uParam0->f_18, iVar1, &iVar3);
	__LIB_15__::func_272(uParam0, iVar3);
	return 1;
}

int func_955(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bVar0 = __LIB_15__::func_391(0);
	bVar2 = false;
	iVar3 = uParam1->f_1;
	if (__LIB_0__::func_630(iVar3))
	{
		iVar1 = __LIB_1__::func_931(iVar3);
		bVar2 = true;
	}
	__LIB_15__::func_897(uParam0, 1, -1217561127 /* GXTEntry: "Pay" */, bVar0, 1, 0);
	if (bVar2)
	{
		if (iVar1 > 0)
		{
			if (__LIB_0__::func_492(1) >= iVar1)
			{
				__LIB_15__::func_272(uParam0, -1091091272);
			}
			else
			{
				__LIB_15__::func_272(uParam0, -156356253);
			}
		}
		else
		{
			__LIB_15__::func_272(uParam0, 1900320479);
		}
	}
	else
	{
		__LIB_15__::func_272(uParam0, joaat("INVALID"));
	}
	return 1;
}

int func_956(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_14__::func_769(uParam0);
	__LIB_15__::func_897(uParam0, 2, -316829060 /* GXTEntry: "Collect All" */, iVar0 > 0, 1, 1);
	__LIB_15__::func_897(uParam0, 1, -586975683 /* GXTEntry: "Collect" */, iVar0 > 0, 1, 0);
	__LIB_15__::func_272(uParam0, 1670931336 /* GXTEntry: "Collect your parcel." */);
	return 1;
}

int func_957(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!bParam1)
	{
	}
	__LIB_14__::func_796(uParam0, __LIB_12__::func_475(&(uParam0->f_2031)));
	iVar0 = 0;
	iVar3 = 0;
	while (iVar3 < 130)
	{
		iVar1 = -1;
		if (!__LIB_0__::func_20(iVar3))
		{
		}
		else if (!__LIB_3__::func_222(iVar3))
		{
		}
		else
		{
			iVar1 = __LIB_10__::func_29(__LIB_5__::func_235(iVar3, 1, 1));
			if (!__LIB_0__::func_630(iVar1))
			{
			}
			else if (iVar1 == 5)
			{
			}
			else if (__LIB_11__::func_863(iVar2, iVar1))
			{
			}
			else
			{
				__LIB_1__::func_471(&iVar2, iVar1);
				iVar0++;
			}
		}
		iVar3++;
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	__LIB_15__::func_406(uParam0, 0);
	__LIB_15__::func_897(uParam0, 1, -1217561127 /* GXTEntry: "Pay" */, 0, 1, 0);
	__LIB_15__::func_897(uParam0, 2, -1789759600 /* GXTEntry: "Pay All" */, 0, 1, 1);
	return 1;
}

bool func_958(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_921(iParam0) == 4 && __LIB_8__::func_224(iParam0, -1162387149))
	{
		return true;
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar2);
		if (ITEMSET::IS_ITEMSET_VALID(iVar2))
		{
			iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else
				{
					iVar1 = __LIB_14__::func_338(iVar0);
					if (__LIB_8__::func_127(iVar1, iParam0))
					{
						ITEMSET::DESTROY_ITEMSET(iVar2);
						return true;
					}
				}
				iVar4++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar2);
		}
	}
	return __LIB_8__::func_224(iParam0, 1084182731);
}

bool func_959(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0 = { __LIB_15__::func_488(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = __LIB_0__::func_235((386 + iVar29), 1);
		if (__LIB_1__::func_112(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = __LIB_1__::func_429(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*iParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_960(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = uParam1->f_9;
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return 0;
	}
	iVar1 = 1;
	if (!__LIB_15__::func_665(iVar0, &iVar1))
	{
		__LIB_15__::func_494(uParam0, 1);
		if (uParam1->f_11 == 2144984909)
		{
			__LIB_14__::func_827(uParam0, 0);
		}
	}
	else
	{
		__LIB_15__::func_897(uParam0, 1, joaat("IB_SELECT"), 1, 1, 0);
	}
	return 1;
}

int func_961(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	struct<4> Var12;
	var uVar16;
	bVar0 = __LIB_15__::func_391(0);
	__LIB_15__::func_897(uParam0, 1, joaat("IB_SELECT"), bVar0, 1, 0);
	iVar1 = 1728382685; /* GXTEntry: "Right" */
	if (__LIB_12__::func_576(uParam1->f_9, 1728382685 /* GXTEntry: "Right" */, 0) && __LIB_12__::func_576(uParam1->f_9, -649335959 /* GXTEntry: "Left" */, 0))
	{
		iVar2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(uParam1->f_10, __LIB_14__::func_840());
		iVar1 = iVar2;
		__LIB_14__::func_843(uParam0, iVar1);
		if (__LIB_15__::func_870(uParam1->f_9, iVar1, &iVar3, &iVar4))
		{
			DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam1->f_10, __LIB_14__::func_841(), iVar3);
			DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam1->f_10, __LIB_14__::func_842(), iVar4);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam1->f_10, __LIB_14__::func_955(), true);
		}
		__LIB_15__::func_897(uParam0, 5, joaat("IB_ADJUST"), 1, 1, 0);
	}
	else if (__LIB_12__::func_576(uParam1->f_9, -649335959 /* GXTEntry: "Left" */, 0))
	{
		__LIB_14__::func_843(uParam0, -649335959 /* GXTEntry: "Left" */);
	}
	else
	{
		__LIB_14__::func_843(uParam0, 1728382685 /* GXTEntry: "Right" */);
	}
	bVar11 = true;
	if (WEAPON::_IS_WEAPON_TWO_HANDED(uParam1->f_9))
	{
		iVar5 = -572103635; /* GXTEntry: "Equip to Shoulder" */
		iVar6 = 894623821; /* GXTEntry: "Equip to Back" */
		iVar7 = 10;
		iVar8 = 9;
		bVar9 = __LIB_0__::func_399(Global_35, 1, iVar7, 1) != uParam1->f_9;
		bVar10 = __LIB_0__::func_399(Global_35, 1, iVar8, 1) != uParam1->f_9;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(uParam1->f_9))
	{
		bVar9 = true;
		bVar10 = true;
		iVar5 = -1610187846; /* GXTEntry: "Equip Sidearm" */
		iVar6 = 190417139; /* GXTEntry: "Equip Off-Hand Sidearm" */
		iVar7 = 2;
		iVar8 = 3;
		Var12 = { __LIB_0__::func_429(uParam1->f_9, __LIB_1__::func_117(0), iVar1, 0) };
		if (WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_35, iVar7, &uVar16))
		{
			if (__LIB_0__::func_639(&Var12, &uVar16))
			{
				bVar9 = false;
				bVar10 = false;
			}
		}
		if (WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_35, iVar8, &uVar16))
		{
			if (__LIB_0__::func_639(&Var12, &uVar16))
			{
				bVar9 = false;
				iVar6 = 165536584; /* GXTEntry: "Unequip Off-Hand Sidearm" */
			}
		}
		if (!__LIB_0__::func_293(24) || __LIB_14__::func_844() < 2)
		{
			bVar11 = false;
		}
	}
	else if (WEAPON::_IS_WEAPON_MELEE(uParam1->f_9))
	{
		iVar5 = 1091200442; /* GXTEntry: "Equip to Melee" */
		iVar7 = 4;
		iVar8 = 4;
		bVar9 = __LIB_0__::func_399(Global_35, 1, iVar7, 1) != uParam1->f_9;
	}
	if (WEAPON::_IS_WEAPON_MELEE(uParam1->f_9))
	{
		__LIB_15__::func_897(uParam0, 3, iVar5, bVar9, 1, 0);
		__LIB_15__::func_840(uParam0, 2);
	}
	else
	{
		__LIB_15__::func_897(uParam0, 3, iVar5, bVar9, 1, 0);
		__LIB_15__::func_897(uParam0, 2, iVar6, (bVar10 && bVar11), bVar11, 0);
	}
	__LIB_15__::func_272(uParam0, 525827058 /* GXTEntry: "Customize this weapon." */);
	return 1;
}

int func_962(var uParam0, int iParam1)
{
	bool bVar0;
	struct<10> Var1;
	int iVar23;
	ATTRIBUTE::_0xD962F8579D702DB5();
	bVar0 = __LIB_15__::func_391(0);
	if (iParam1 == -772187037)
	{
		__LIB_15__::func_897(uParam0, 1, joaat("IB_SELECT"), bVar0, 1, 0);
		Var1.f_9 = -1591664384;
		if (__LIB_15__::func_75(__LIB_14__::func_872(uParam0), &Var1, __LIB_14__::func_873(uParam0)))
		{
			__LIB_15__::func_272(uParam0, 1010638409 /* GXTEntry: "This weapon is already in perfect condition." */);
		}
		else
		{
			__LIB_15__::func_272(uParam0, 1547417882 /* GXTEntry: "Restore this weapon to perfect condition." */);
		}
	}
	else if (iParam1 == -2092532275)
	{
		if (__LIB_7__::func_790())
		{
			__LIB_15__::func_272(uParam0, 125684063 /* GXTEntry: "You already have pomade applied" */);
		}
		else if (!__LIB_1__::func_707(joaat("CONSUMABLE_HAIR_GREASE"), 1, 0))
		{
			__LIB_15__::func_272(uParam0, -1870030974 /* GXTEntry: "You have no pomade to apply" */);
		}
		__LIB_15__::func_897(uParam0, 1, joaat("IB_SELECT"), bVar0, 1, 0);
		if (!__LIB_7__::func_790() && !__LIB_14__::func_828(__LIB_9__::func_434()))
		{
			__LIB_15__::func_857(__LIB_12__::func_488(__LIB_9__::func_434()), Global_35, -1, 1);
		}
		else
		{
			__LIB_15__::func_857(__LIB_9__::func_434(), Global_35, -1, 1);
		}
	}
	else if (iParam1 == -1352600334)
	{
		__LIB_15__::func_897(uParam0, 1, joaat("IB_SELECT"), bVar0, 1, 0);
		if (bVar0)
		{
			iVar23 = __LIB_14__::func_985(uParam0);
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(iVar23, 2);
		}
	}
	else if (iParam1 == 2073652352)
	{
		__LIB_15__::func_897(uParam0, 1, joaat("IB_SELECT"), bVar0, 1, 0);
	}
	return 1;
}

void func_963(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	__LIB_1__::func_108(iParam0);
	if (__LIB_0__::func_823(iParam0))
	{
		iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (__LIB_0__::func_825(iParam0) != iVar0)
		{
			return;
		}
	}
	if (!__LIB_0__::func_797(iParam0))
	{
		return;
	}
	iVar1 = __LIB_0__::func_398(iParam0);
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		bVar2 = true;
	}
	__LIB_0__::func_798(iParam0);
	__LIB_4__::func_965(iParam0);
	__LIB_12__::func_224(iVar1);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	}
	if (__LIB_0__::func_126(iVar1))
	{
		PHYSICS::_0x0348469DAA17576C(iVar1);
	}
	if (bVar2)
	{
		TASK::TASK_SMART_FLEE_PED(iVar1, Global_35, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(iVar1, true);
	}
	iVar3 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar3))
	{
	}
	if (iParam0 == 0)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar3, 0);
	}
	else if (iParam0 == 1)
	{
		PLAYER::_0x227B06324234FB09(iVar3, 0);
	}
	PED::_0xBCC76708E5677E1D(iVar1, 1);
	if (bVar2)
	{
		if (bParam1)
		{
			FLOCK::_0xAEB97D84CDF3C00B(iVar1, 1);
		}
		PED::_0x329772C47DBB2FBC(iVar1);
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
	iVar4 = ENTITY::GET_ENTITY_MODEL(iVar1);
	if (STREAMING::IS_MODEL_VALID(iVar4))
	{
		if (PED::_0xAA9F048DCF69B6DC(iVar4))
		{
			if (!__LIB_1__::func_1(iVar4))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar4, false);
			}
		}
	}
	__LIB_15__::func_908(iParam0);
}

int func_964(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	iVar0 = uParam1->f_9;
	bVar1 = __LIB_15__::func_391(0);
	__LIB_15__::func_897(uParam0, 1, joaat("SHOP_CRAFT"), bVar1, 1, 0);
	if (__LIB_0__::func_356(iVar0) == joaat("CLOTHING"))
	{
		__LIB_15__::func_919(uParam0, iVar0);
	}
	return 1;
}

int func_965(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(uParam1->f_10, __LIB_12__::func_482());
	iVar0 = iVar1;
	bVar2 = __LIB_15__::func_391(0);
	if (__LIB_0__::func_144(iVar0, 0))
	{
		if (__LIB_14__::func_739(uParam1->f_9))
		{
			if (__LIB_0__::func_356(iVar0) == joaat("CLOTHING"))
			{
				if (bVar2)
				{
					__LIB_15__::func_919(uParam0, iVar0);
				}
				if (!__LIB_15__::func_886(__LIB_14__::func_738(uParam0), iVar0, &iVar3))
				{
					__LIB_15__::func_405(uParam0, iVar3);
				}
				else if (iVar0 == __LIB_0__::func_856(0))
				{
					__LIB_15__::func_405(uParam0, 223046265);
				}
				else
				{
					__LIB_14__::func_804(uParam0, 0);
				}
			}
		}
	}
	__LIB_15__::func_897(uParam0, 1, joaat("IB_SELECT"), bVar2, 1, 0);
	return 1;
}

void func_966(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			__LIB_15__::func_916(iVar1, 0, bParam0);
		}
		Global_1946804.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804.f_2657.f_20 = 0;
	Global_1946804.f_2657.f_21 = 0;
	Global_1946804.f_2657.f_22 = 0;
	Global_1946804.f_2657.f_23 = 0;
	Global_1946804.f_2657.f_24 = 0;
	Global_1946804.f_2657.f_25 = 0;
	Global_1946804.f_2657.f_19 = 0;
	Global_1946804.f_2657.f_26.f_6 = 0;
}

void func_967(int iParam0)
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
			__LIB_15__::func_920(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (__LIB_15__::func_798(iVar2, 0))
		{
			__LIB_15__::func_784(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_968(bool bParam0)
{
	float fVar0;
	int iVar1[3];
	var uVar5;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	if (bParam0)
	{
		fVar0 = 20f;
	}
	else
	{
		fVar0 = 15f;
	}
	LAW::_0x710448D44A64C213(1);
	LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_BURGLARY"), 0, fVar0, 0, 0, fVar0, 0, 0);
	uVar5 = 1;
	__LIB_15__::func_917(&iVar1, &uVar5, Global_36, 10, 3, fVar0, 1, 0, 1, 1.5f);
	iVar7 = 0;
	while (iVar7 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar7]) && !PED::IS_PED_DEAD_OR_DYING(iVar1[iVar7], true))
		{
			TASK::CLEAR_PED_TASKS(iVar1[iVar7], true, false);
			TASK::_0xDF94844D474F31E5(iVar1[iVar7]);
			PED::SET_PED_CONFIG_FLAG(iVar1[iVar7], 146, false);
			PED::SET_PED_CONFIG_FLAG(iVar1[iVar7], 148, false);
			PED::SET_PED_CONFIG_FLAG(iVar1[iVar7], 113, true);
			vVar9 = { ENTITY::GET_ENTITY_COORDS(iVar1[iVar7], true, false) };
			LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), joaat("CRIME_BURGLARY"), iVar1[iVar7]);
			__LIB_2__::func_357(iVar1[iVar7], Global_36, 3, 1, 1);
			LAW::_0xF0B67BAD53C35BD9(iVar1[iVar7], Global_35, iVar1[iVar7], Global_36, joaat("CRIME_BURGLARY"));
			iVar8++;
			if (iVar8 > 1)
			{
			}
			else
			{
				iVar7++;
			}
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_ALARMING"), Global_35, -1f, fVar0, fVar0, -1f, -1f, 180f, false, false, -1, -1);
		}
	}
}

int func_969(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (bParam3 && !__LIB_15__::func_798(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		__LIB_15__::func_920(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

void func_970(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	__LIB_0__::func_37(&(iParam0->f_24));
}

void func_971(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*22*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*22*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*22*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*22*/], 21);
			}
		}
		iVar0++;
	}
}

bool func_972(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			Global_1914319.f_18941.f_10 = 20;
			return true;
		case 78:
			Global_1914319.f_18941.f_10 = 6;
			return true;
		case 115:
			Global_1914319.f_18941.f_10 = 6;
			return true;
		case 26:
			Global_1914319.f_18941.f_10 = 20;
			return true;
		case 5:
			Global_1914319.f_18941.f_10 = 33;
			return true;
		case 38:
			Global_1914319.f_18941.f_10 = 33;
			return true;
		case 92:
			Global_1914319.f_18941.f_10 = 2;
			return true;
		case 105:
			Global_1914319.f_18941.f_10 = 33;
			return true;
	}
	return false;
}

bool func_973()
{
	return Global_1914319.f_18941.f_15;
}

void func_974(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	uParam0->f_11 = iParam1;
	uParam0->f_11.f_1 = iParam2;
	uParam0->f_11.f_2 = iParam3;
	uParam0->f_11.f_4 = iParam4;
	uParam0->f_11.f_3 = iParam5;
}

int func_975(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*22*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_976(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_18)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_977(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_19)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_978(int iParam0, float fParam1, vector3 vParam2, vector3 vParam5, int iParam8)
{
	var uVar0;
	if (Global_1225509.f_101 >= 10)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (__LIB_15__::func_502(iParam0, &uVar0))
	{
		return;
	}
	Global_1225509[Global_1225509.f_101 /*10*/].f_4 = iParam0;
	Global_1225509[Global_1225509.f_101 /*10*/].f_3 = fParam1;
	Global_1225509[Global_1225509.f_101 /*10*/] = { vParam2 };
	Global_1225509[Global_1225509.f_101 /*10*/].f_5 = { vParam5 };
	Global_1225509[Global_1225509.f_101 /*10*/].f_8 = iParam8;
	Global_1225509[Global_1225509.f_101 /*10*/].f_9 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1225509.f_101++;
}

void func_979(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_1__::func_471(uParam0[iVar0 /*22*/], 9);
		iVar0++;
	}
}

bool func_980()
{
	return __LIB_14__::func_446(__LIB_7__::func_821(__LIB_0__::func_12()));
}

void func_981(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_1__::func_502(uParam0[iVar0 /*22*/]))
		{
			__LIB_1__::func_471(uParam0[iVar0 /*22*/], 14);
		}
		iVar0++;
	}
}

int func_982(var uParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	iVar0 = __LIB_14__::func_952(&(uParam0->f_2031));
	if (iParam1 >= iVar0 || iParam1 < 0)
	{
		return 71870468;
	}
	if (__LIB_15__::func_536(iParam1, &(uParam0->f_2031), &Var1))
	{
		return Var1.f_1;
	}
	return 71870468;
}

int func_983(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = __LIB_14__::func_820(0);
	iVar1 = __LIB_14__::func_952(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return 0;
	}
	if (iVar0 >= iVar1 || iVar0 < 0)
	{
		return 0;
	}
	if (__LIB_15__::func_536(iVar0, &(uParam0->f_2031), &vVar2))
	{
		__LIB_15__::func_272(uParam0, vVar2.z);
	}
	return 1;
}

void func_984(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_15__::func_502(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1225509[iVar0 /*10*/].f_9 != SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		if (!bParam1)
		{
			return;
		}
	}
	__LIB_15__::func_566(iVar0);
}

void func_985(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_18 = iParam2;
	iParam0->f_20 = iParam8;
	iParam0->f_16 = iParam4;
	iParam0->f_17 = iParam5;
	if (bParam7)
	{
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				__LIB_1__::func_483(iParam0->f_6, iParam0->f_5, iParam0->f_19, 0);
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

int func_986(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			__LIB_1__::func_148(&(iParam1->f_24));
			return 0;
		}
		else if (__LIB_0__::func_75(&(iParam1->f_24)))
		{
			__LIB_0__::func_37(&(iParam1->f_24));
			return 0;
		}
	}
	if (!__LIB_0__::func_75(&(iParam1->f_24)))
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
	return __LIB_3__::func_103(&(iParam1->f_24), fParam2);
	return 1;
}

int func_987(int iParam0, int iParam1)
{
	return __LIB_15__::func_944(Global_35, iParam0, iParam1);
}

int func_988(int iParam0, int iParam1)
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
	return __LIB_15__::func_944(iVar0, iParam0, iParam1);
}

int func_989(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<14> Var20;
	int iVar34;
	iVar0 = __LIB_14__::func_769(uParam0);
	Var1.f_9 = -1591664384;
	iVar15 = __LIB_15__::func_647(0);
	iVar16 = 0;
	iVar17 = 0;
	if (__LIB_14__::func_919(iVar16, iParam1, iParam2, iVar0))
	{
		if (__LIB_15__::func_648(&Var1, 0))
		{
			if (__LIB_15__::func_607(uParam0, Var1, iVar16))
			{
				iVar16++;
			}
		}
	}
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		if (__LIB_14__::func_919(iVar16, iParam1, iParam2, iVar0))
		{
			if (__LIB_15__::func_304(iVar17, &iVar18))
			{
				if (__LIB_15__::func_649(iVar18, &Var1, 0))
				{
					if (__LIB_15__::func_607(uParam0, Var1, iVar16))
					{
						iVar16++;
					}
				}
			}
		}
		iVar17++;
	}
	iVar19 = __LIB_15__::func_461(0);
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < iVar19)
	{
		if (__LIB_15__::func_462(iVar17, &Var1, 0))
		{
			if (__LIB_14__::func_919(iVar16, iParam1, iParam2, iVar0))
			{
				if (__LIB_15__::func_607(uParam0, Var1, iVar16))
				{
					iVar16++;
				}
			}
		}
		iVar17++;
	}
	Var20.f_9 = -1591664384;
	iVar34 = (iVar0 - iVar16);
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < iVar34)
	{
		if (__LIB_14__::func_919(iVar16, iParam1, iParam2, iVar0))
		{
			if (__LIB_15__::func_607(uParam0, Var20, iVar16))
			{
				iVar16++;
			}
		}
		iVar17++;
	}
	return 1;
}

bool func_990(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		iVar0 = iVar3;
		iVar1 = __LIB_14__::func_455(iVar0);
		__LIB_15__::func_946(iVar1, iParam0, &iVar4, &iVar5, &uVar2);
		iVar6 = (iVar4 + iVar5);
		switch (iVar0)
		{
			case 0:
				if (iVar4 > 0)
				{
					return true;
				}
				else if (iVar5 > 0)
				{
					return false;
				}
				break;
			default:
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					switch (iVar6)
					{
						case 2:
							if (iVar4 == 2)
							{
								return true;
							}
							else if (iVar4 == 1)
							{
								return uVar2;
							}
							else
							{
								return false;
							}
							break;
						case 1:
							if (iVar4 == 1)
							{
								return true;
							}
							else
							{
								return false;
							}
							break;
						case 0:
							break;
					}
				}
				break;
		}
		iVar3++;
	}
	return false;
}

int func_991(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	__LIB_15__::func_946(iParam0, iParam1, &uVar0, &uVar1, &uVar2);
	return uVar0;
}

int func_992(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	switch (*uParam1)
	{
		case -853534656:
		case -348190488:
			if (*uParam1 == -853534656)
			{
				bVar1 = true;
				if (__LIB_0__::func_2() == -1)
				{
					bVar1 = !__LIB_2__::func_774(34);
				}
				iVar0 = __LIB_15__::func_938(__LIB_15__::func_33(uParam0));
				__LIB_15__::func_897(uParam0, 2, iVar0, bVar1, 1, 0);
				__LIB_15__::func_633(uParam0, 6, joaat("SHOP_CATALOG"));
			}
			if (__LIB_15__::func_404(__LIB_0__::func_357(uParam1->f_9)))
			{
			}
			__LIB_15__::func_841(&(uParam0->f_148.f_1754.f_28), __LIB_0__::func_357(uParam1->f_9), __LIB_14__::func_738(uParam0));
			break;
	}
	return 1;
}

int func_993(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = uParam1->f_9;
	if (__LIB_0__::func_144(iVar0, 0))
	{
		__LIB_15__::func_672(uParam0, __LIB_14__::func_898(uParam0));
		__LIB_15__::func_897(uParam0, 4, joaat("SHOP_INFO"), 1, 1, 0);
		__LIB_14__::func_887(uParam0, 0);
		INVENTORY::_0x75CFAC49301E134F(uParam0->f_2031.f_68, iVar0, 0);
	}
	return 1;
}

void func_994(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<6> Var24;
	var uVar31;
	float fVar32;
	int iVar33;
	int iVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	if (!__LIB_15__::func_65(iParam1))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (__LIB_1__::func_16(iParam0))
	{
		iVar1 = __LIB_0__::func_402(iParam0);
		bVar0 = true;
	}
	Var2.f_1 = 20;
	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam1, &Var2);
	iVar33 = 0;
	while (iVar33 < Var2)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var2.f_1[iVar33], &Var24);
		switch (Var24.f_1)
		{
			case 1194731729:
				iVar34 = Var24.f_2;
				fVar35 = -Var24.f_5;
				if (bVar0 && iVar34 > 0)
				{
					iVar36 = __LIB_6__::func_95(iParam0);
					iVar37 = __LIB_12__::func_535(iVar36);
					__LIB_12__::func_536(iVar1, 1, BUILTIN::TO_FLOAT(iVar37));
				}
				if (bVar0)
				{
					iVar38 = __LIB_12__::func_205(iVar1, 1);
				}
				else
				{
					iVar38 = __LIB_12__::func_533(iParam0, 1);
				}
				if (iVar38 < 50)
				{
					if (bVar0)
					{
						__LIB_12__::func_573(iVar1, 2, iVar34);
					}
					else
					{
						__LIB_15__::func_21(iParam0, 2, iVar34);
					}
				}
				if (bVar0)
				{
					__LIB_12__::func_573(iVar1, 1, BUILTIN::FLOOR(fVar35));
				}
				else
				{
					__LIB_15__::func_21(iParam0, 1, BUILTIN::FLOOR(fVar35));
				}
				break;
			case 978049229:
				__LIB_12__::func_541(iParam0, Var24.f_5);
				break;
			case -1918697215:
				if (__LIB_8__::func_622(0, &uVar31))
				{
					fVar39 = Var24.f_5;
					if (bVar0)
					{
						__LIB_15__::func_91(iVar1, 0, BUILTIN::FLOOR(fVar39));
					}
					else
					{
						__LIB_15__::func_70(iParam0, 0, BUILTIN::FLOOR(fVar39));
					}
				}
				break;
			case 1136630075:
				if (__LIB_15__::func_324(0, &uVar31))
				{
					fVar32 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					if (bVar0)
					{
						__LIB_15__::func_91(iVar1, 0, BUILTIN::FLOOR(100f));
					}
					else
					{
						__LIB_15__::func_70(iParam0, 0, BUILTIN::FLOOR(100f));
					}
					__LIB_15__::func_541(iParam0, 0, fVar32);
				}
				break;
			case -778289619:
				if (__LIB_8__::func_622(0, &uVar31))
				{
					fVar32 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					__LIB_12__::func_542(iParam0, 0, fVar32);
				}
				break;
			case -1946606248:
				__LIB_12__::func_543(iParam0, Var24.f_5);
				break;
			case 855745648:
				if (__LIB_8__::func_622(1, &uVar31))
				{
					fVar40 = Var24.f_5;
					if (bVar0)
					{
						__LIB_15__::func_91(iVar1, 1, BUILTIN::FLOOR(fVar40));
					}
					else
					{
						__LIB_15__::func_70(iParam0, 1, BUILTIN::FLOOR(fVar40));
					}
				}
				break;
			case 1365603835:
				if (__LIB_15__::func_324(1, &uVar31))
				{
					fVar32 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					if (bVar0)
					{
						__LIB_15__::func_91(iVar1, 1, BUILTIN::FLOOR(100f));
					}
					else
					{
						__LIB_15__::func_70(iParam0, 1, BUILTIN::FLOOR(100f));
					}
					__LIB_15__::func_541(iParam0, 1, fVar32);
				}
				break;
			case 1497139093:
				if (__LIB_8__::func_622(1, &uVar31))
				{
					fVar32 = __LIB_6__::func_39(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					__LIB_12__::func_542(iParam0, 1, fVar32);
				}
				break;
		}
		iVar33++;
	}
	__LIB_15__::func_71(iParam1);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

bool func_995(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	__LIB_14__::func_781(&iParam0);
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (__LIB_0__::func_787(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { __LIB_1__::func_117(0) };
			Var4.f_9 = -1591664384;
			if (!__LIB_1__::func_112(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (__LIB_1__::func_429(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (__LIB_0__::func_950(iParam0, 1))
			{
				if (!__LIB_1__::func_112(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (__LIB_1__::func_429(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!__LIB_15__::func_959(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = __LIB_0__::func_936(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = __LIB_0__::func_800(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_996(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_357(iParam1);
	uParam0->f_2011 = iParam1;
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = __LIB_0__::func_449(iParam1);
		if (iVar0 == -1)
		{
			iVar0 = 0;
		}
		__LIB_0__::func_828(Global_40.f_7729, 4096);
		Global_40.f_7729 = iVar0;
		Global_1905941 = Global_40.f_7729;
		__LIB_0__::func_806(Global_40.f_7729, 4096);
	}
	uParam0->f_148.f_1790 = 1;
	if (iVar1 == -999503751)
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_443(-1, 0, 1, 1, 1, 0);
			return 1;
		}
		__LIB_1__::func_443(-1, 0, 1, 0, 1, 0);
		return 1;
	}
	if (__LIB_12__::func_483())
	{
		__LIB_1__::func_467(1, __LIB_0__::func_2() == -1, 0);
	}
	else
	{
		__LIB_15__::func_866(PLAYER::PLAYER_PED_ID(), iParam1, 0, -358215195, 1, __LIB_0__::func_2() == -1, 1, 0, 1, 0);
	}
	return 1;
}

int func_997(var uParam0, var uParam1)
{
	return __LIB_15__::func_962(uParam0, *uParam1);
}

void func_998(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, int iParam8, bool bParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	var uVar2[40];
	vector3 vVar43;
	vector3 vVar46[24];
	int iVar49;
	iVar0 = __LIB_15__::func_689(&uVar2, uParam1, iParam5, vParam2, fParam7, iParam8, bParam9, 0, -1, 1, iParam10, bParam11, 0, 0);
	__LIB_14__::func_637(&uVar2, iVar0, vParam2, 1, 1, 0);
	iVar1 = 0;
	iVar49 = 0;
	StringCopy(&cVar46, "GRABBED_PED ", 24);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_0__::func_272(uVar2[iVar1], 0))
		{
			vVar43 = { cVar46 };
			StringIntConCat(&vVar43, iVar1, 24);
			if (bParam9)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar2[iVar1], true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar2[iVar1], true, true);
			}
			PED::SET_PED_NAME_DEBUG(uVar2[iVar1], &vVar43);
			(*iParam0)[iVar49] = uVar2[iVar1];
			iVar49++;
			if (iVar49 >= iParam6)
			{
			}
			else
			{
				iVar1++;
			}
		}
	}
}

bool func_999(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<4> Var10;
	int iVar14;
	iVar0 = __LIB_1__::func_921(iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_KEY_VALID(__LIB_6__::func_676(iVar0)))
	{
		if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY(__LIB_6__::func_676(iVar0), iParam0, &vVar1))
		{
			return false;
		}
	}
	if (vVar1.x == 0)
	{
		return false;
	}
	if (vVar1.z <= 0)
	{
		return false;
	}
	iVar4 = __LIB_6__::func_676(iVar0);
	iVar14 = 0;
	iVar6 = 0;
	while (iVar6 < vVar1.z)
	{
		if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO(iVar4, vVar1.x, iVar6, &Var8))
		{
			return false;
		}
		if (Var8.f_1 <= 0)
		{
		}
		else
		{
			iVar7 = 0;
			while (iVar7 < Var8.f_1)
			{
				Var10 = 0;
				if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO(iVar4, vVar1.x, iVar6, iVar7, &Var10))
				{
				}
				else
				{
					if (!__LIB_15__::func_915(iParam1, vVar1.x, &Var10, &uVar5))
					{
						if (uParam2->f_10 >= 3)
						{
							return true;
						}
						(*uParam2)[uParam2->f_10 /*3*/] = Var10;
						(uParam2[uParam2->f_10 /*3*/])->f_1 = Var10.f_1;
						(uParam2[uParam2->f_10 /*3*/])->f_2 = Var10.f_3;
						uParam2->f_10++;
						iVar14 = 1;
					}
					iVar7++;
				}
			}
		}
		iVar6++;
	}
	return iVar14;
}
