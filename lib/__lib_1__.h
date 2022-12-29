void func_0(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = __LIB_0__::func_574(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_0x88AD6CC10D8D35B2(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&iVar7);
			}
		}
		iVar6++;
	}
}

bool func_1(int iParam0)
{
	if (!__LIB_0__::func_575(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_313())
	{
		return true;
	}
	return false;
}

void func_2(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_0__::func_576(uParam0[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_3(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	__LIB_0__::func_590(iParam0, *uParam1);
	__LIB_0__::func_590(iParam0, uParam1->f_1);
}

void func_4(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	__LIB_0__::func_590(iParam0, *uParam1);
	__LIB_0__::func_590(iParam0, uParam1->f_1);
	__LIB_0__::func_590(iParam0, uParam1->f_2);
	__LIB_0__::func_590(iParam0, uParam1->f_3);
	__LIB_0__::func_590(iParam0, uParam1->f_4);
	__LIB_0__::func_590(iParam0, uParam1->f_5);
}

int func_5()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = __LIB_0__::func_668(iVar0);
		if (__LIB_0__::func_27(__LIB_0__::func_669(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = __LIB_0__::func_670(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_7(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		__LIB_0__::func_671(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (__LIB_0__::func_672(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

int func_8(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return __LIB_0__::func_674(iParam0);
		case 1:
			return __LIB_0__::func_675(iParam0);
		case 2:
			return __LIB_0__::func_676(iParam0);
		case 3:
			return __LIB_0__::func_677(iParam0);
	}
	return 0;
}

int func_9(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return __LIB_0__::func_678(iParam0);
		case 1:
			return __LIB_0__::func_679(iParam0);
		case 2:
			return __LIB_0__::func_680(iParam0);
		case 3:
			return __LIB_0__::func_681(iParam0);
		case 4:
			return __LIB_0__::func_682(iParam0);
		case 5:
			return __LIB_0__::func_683(iParam0);
		case 6:
			return __LIB_0__::func_684(iParam0);
		case 7:
			return __LIB_0__::func_685(iParam0);
		case 8:
			return __LIB_0__::func_686(iParam0);
	}
	return 0;
}

void func_10()
{
	char* sVar0;
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		return;
	}
	if (!__LIB_0__::func_156(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804.f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, __LIB_0__::func_687(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	__LIB_0__::func_194(1);
	STREAMING::REMOVE_ANIM_DICT(__LIB_0__::func_687());
}

struct<28> func_11(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<28> Var0;
	struct<29> Var28;
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(__LIB_0__::func_162(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { __LIB_0__::func_662(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

struct<17> func_12(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<17> Var0;
	struct<15> Var17;
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(__LIB_0__::func_162(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { __LIB_0__::func_662(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

void func_13(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	__LIB_0__::func_689(&(uParam0->f_3));
}

bool func_14(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return __LIB_0__::func_694(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 == __LIB_0__::func_695())
	{
		return __LIB_0__::func_694(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1225639.f_21[iParam1])
	{
		return __LIB_0__::func_694(&(Global_1108178[iParam1 /*37*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_15(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_640(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_16(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = __LIB_0__::func_402(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_17(int iParam0)
{
	if (__LIB_0__::func_641() < iParam0)
	{
		__LIB_0__::func_642(iParam0);
	}
}

bool func_18(int iParam0)
{
	return __LIB_0__::func_692(__LIB_0__::func_409(iParam0));
}

void func_19(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1224227)
	{
		if (Global_1224227.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1224227.f_1[iVar0 /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1224227.f_1[iVar0 /*9*/].f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	__LIB_0__::func_690(iParam0, iParam1);
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (__LIB_0__::func_293(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (__LIB_0__::func_293(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_21(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	iVar0 = __LIB_0__::func_697(__LIB_0__::func_241());
	if (*uParam0)
	{
		__LIB_0__::func_689(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, __LIB_0__::func_2() != -1, uParam2);
	*uParam0 = 1;
}

bool func_22(int iParam0)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_699(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_23(var uParam0)
{
	if (TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
	{
		uParam0->f_14 = 6;
		return true;
	}
	if (!__LIB_0__::func_272(PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0->f_14 = 3;
		return true;
	}
	if (!__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		uParam0->f_14 = 4;
		return true;
	}
	return false;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			iVar0 = __LIB_0__::func_76(iParam0);
			return __LIB_0__::func_334(iVar0);
		case 8:
			iVar1 = __LIB_0__::func_76(iParam0);
			if (__LIB_0__::func_1(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return __LIB_0__::func_335(iVar1);
			}
			break;
	}
	return -1;
}

bool func_25(int iParam0, bool bParam1)
{
	switch (__LIB_0__::func_746(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_26(bool bParam0)
{
	if (__LIB_0__::func_102())
	{
		Global_1357509 = 1;
	}
	if (__LIB_0__::func_711(joaat("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == joaat("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = joaat("WEAPON_UNARMED");
	}
}

void func_27(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_31(iParam0))
	{
		iVar1 = __LIB_0__::func_271(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			__LIB_0__::func_715(iParam0);
		}
	}
	if (__LIB_0__::func_287(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_271(iParam0), 137, true);
	}
}

void func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_717(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
}

void func_29(int iParam0)
{
	if (!__LIB_0__::func_721(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1945938[iParam0 /*18*/].f_3);
	}
	Global_1945938[iParam0 /*18*/].f_4 = 0;
	Global_1945938[iParam0 /*18*/] = 1;
	Global_1945938[iParam0 /*18*/].f_16 = 0;
	Global_1945938[iParam0 /*18*/].f_1 = 0;
	Global_1945938[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_9 = 0f;
	Global_1945938[iParam0 /*18*/].f_10 = 0;
	Global_1945938[iParam0 /*18*/].f_11 = 0;
	Global_1945938[iParam0 /*18*/].f_2 = 1;
	Global_1945938[iParam0 /*18*/].f_15 = -1f;
}

void func_30(int iParam0)
{
	__LIB_0__::func_723(iParam0);
	__LIB_0__::func_230(iParam0, 0);
}

void func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_0__::func_271(iParam0);
	iVar1 = __LIB_0__::func_748(iParam0, 0);
	__LIB_0__::func_294(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_717(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

void func_33(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		__LIB_0__::func_716(1);
	}
}

int func_34(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	if (!__LIB_0__::func_720(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

int func_35(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	if (!__LIB_0__::func_720(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_36(int iParam0)
{
	struct<4> Var0;
	if (__LIB_0__::func_27(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	__LIB_0__::func_726(Var0);
}

void func_37(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	__LIB_0__::func_726(Var0);
}

bool func_38()
{
	if (__LIB_0__::func_2() == -1 && __LIB_0__::func_296(0, 0, 1))
	{
		return (Global_1357549.f_1495 & 512 != 0 && Global_1357549.f_1494 & 2 != 0);
	}
	return false;
}

bool func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	__LIB_0__::func_738(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[iVar0], iVar1);
}

void func_40(int iParam0)
{
	__LIB_0__::func_739(&(Global_1946804.f_2589), iParam0);
}

void func_41(int iParam0, int iParam1)
{
	__LIB_0__::func_740(&(Global_1946804.f_2589), iParam0, iParam1);
}

void func_42(int iParam0, bool bParam1, int iParam2)
{
	__LIB_0__::func_742(&(Global_1946804.f_1378), iParam0);
	__LIB_0__::func_244(2, iParam0, 6);
	if (bParam1)
	{
		__LIB_0__::func_719(0, 1);
	}
}

bool func_43(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !__LIB_0__::func_744(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

bool func_44(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_746(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_45(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_66)
	{
		if ((__LIB_0__::func_84(&(uParam0->f_66[iVar0 /*16*/]), 1048576) && __LIB_0__::func_84(&(uParam0->f_66[iVar0 /*16*/]), 4)) && !__LIB_0__::func_84(&(uParam0->f_66[iVar0 /*16*/]), 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(&(uParam0->f_66[iVar0 /*16*/]));
			return;
		}
		iVar0++;
	}
}

bool func_46(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((__LIB_0__::func_84(uParam0[iVar0 /*16*/], 1048576) && MISC::ARE_STRINGS_EQUAL(uParam0[iVar0 /*16*/], sParam1)) && (uParam0[iVar0 /*16*/])->f_9 == sParam1->f_9) && (uParam0[iVar0 /*16*/])->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_47(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return Global_1899528.f_11[iParam0];
}

bool func_48(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, uParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return true;
	}
	return false;
}

bool func_49(char[4] cParam0)
{
	return AUDIO::_0xD89504D9D7D5057D(cParam0);
}

bool func_50(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 2368.145f, 1339.411f, 105.2073f };
			*uParam2 = 0f;
			break;
		case 0:
			*uParam1 = { -1347.354f, 2415.999f, 306.1693f };
			*uParam2 = 0f;
			break;
		case 2:
			*uParam1 = { 676.0986f, -1223.26f, 44.8735f };
			*uParam2 = 186f;
			break;
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f };
			*uParam2 = 0f;
			break;
		case 3:
			*uParam1 = { 1855.146f, -1834.112f, 42.1034f };
			*uParam2 = 0f;
			break;
		case 7:
			*uParam1 = { -2591.77f, 465.7827f, 146.256f };
			*uParam2 = 0f;
			break;
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f };
			*uParam2 = 0f;
			break;
		case 5:
			*uParam1 = { 2278.67f, -751.0582f, 40.9953f };
			*uParam2 = 0f;
			break;
		default:
			return false;
	}
	return true;
}

int func_51(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_4;
}

bool func_52(int iParam0)
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
	if (!__LIB_0__::func_797(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_53(int iParam0)
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
	if (!__LIB_0__::func_797(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return true;
	}
	return false;
}

void func_54(int iParam0)
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
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

int func_55(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1;
}

bool func_56(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1 == -1;
}

void func_57(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528.f_11[iParam0] = iParam1;
}

bool func_58(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 32)
	{
		return false;
	}
	return true;
}

bool func_59(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

void func_60(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
	uParam0->f_5 = 0f;
	uParam0->f_11 = -1;
}

int func_61(int iParam0)
{
	return Global_1392915[iParam0 /*12*/];
}

bool func_62(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_63(int iParam0)
{
	bool bVar0;
	int iVar1;
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0))
		{
			iVar1 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

bool func_64(vector3 vParam0, int iParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(cParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_65(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848.f_3 < 0 || Global_1899848.f_3 >= 6)
			{
				Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			}
			if (Global_1899848.f_3 == 0 || Global_1899848.f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848.f_3 == 2 || Global_1899848.f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_66(int iParam0, int iParam1)
{
	if (iParam1 == 1 && iParam0 == 2)
	{
		return joaat("POKER_SP");
	}
	switch (iParam0)
	{
		case 2:
			return joaat("POKER_SP");
		case 0:
			return joaat("BJACK_SP");
		case 1:
			return joaat("DOMINOES_SP");
		case 3:
			return joaat("FILLET_SP");
		case 4:
			return joaat("MILKING_COW");
		case 5:
			return joaat("ES_CLEAN_STALLS");
		case 6:
			return joaat("ES_ACTIVITY_BUILDING");
		default:
			break;
	}
	return 0;
}

bool func_67(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*iParam1 = Global_1899528.f_11[iParam0];
	return *iParam1 != -1;
}

void func_68(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_69(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_70(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

int func_71()
{
	int iVar0;
	iVar0 = __LIB_0__::func_786();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
		default:
			break;
	}
	return joaat("SHOP_HONOR_AMORAL");
}

char* func_72(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(__LIB_0__::func_776(iParam0));
}

void func_73()
{
	__LIB_0__::func_804(-939420910);
	__LIB_0__::func_804(-1187950766);
	__LIB_0__::func_804(356365161);
	__LIB_0__::func_804(753127042);
	__LIB_0__::func_804(-2038424081);
	__LIB_0__::func_804(1884271742);
	__LIB_0__::func_804(459290420);
}

void func_74()
{
	__LIB_0__::func_804(704802028);
	__LIB_0__::func_804(588987611);
	__LIB_0__::func_804(2008888900);
	__LIB_0__::func_804(1649996811);
	__LIB_0__::func_804(227918160);
	__LIB_0__::func_804(168171957);
	__LIB_0__::func_804(1193080109);
	__LIB_0__::func_804(-491981251);
	__LIB_0__::func_804(-639037538);
	__LIB_0__::func_804(-618620429);
}

bool func_75(var uParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(uParam0) > 0;
}

bool func_76(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_77(int iParam0, int iParam1)
{
	return (Global_1899528.f_3[iParam0] && iParam1) != 0;
}

void func_78(int iParam0)
{
	Global_1899528.f_3[iParam0] = 0;
}

void func_79()
{
	Global_1899528.f_2 = 0;
}

bool func_80(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			*uParam1 = 9;
			return true;
		case 0:
			*uParam1 = 11;
			return true;
		case 3:
			*uParam1 = 14;
			return true;
		case 1:
			*uParam1 = 12;
			return true;
		default:
			break;
	}
	return false;
}

int func_81(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;
	Var0.f_9 = -1591664384;
	if (__LIB_0__::func_814(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_82(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar19;
	struct<14> Var20;
	Var5.f_9 = -1591664384;
	iVar19 = __LIB_0__::func_790(__LIB_0__::func_241());
	Var20 = { __LIB_0__::func_523(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!__LIB_0__::func_801(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!__LIB_0__::func_236(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = __LIB_0__::func_449(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					__LIB_0__::func_557(&(Global_1946804.f_964), iVar19, Var5.f_4, joaat("COMPONENT"), 1, (*uParam1)[iVar3]);
					DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
					if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964)))
					{
					}
					else
					{
						*iParam2 = (*iParam2 - 1);
						(*uParam1)[iVar3] = (*uParam1)[*iParam2];
						(*uParam1)[*iParam2] = 0;
					}
					iVar3 = (iVar3 + -1);
				}
			}
		}
		iVar2++;
	}
	__LIB_0__::func_238(iVar0);
	return 1;
}

char* func_83(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
		case 2:
			return "MINIGAME_SP_BLACKJACK_VANHORN";
		case 3:
			return "MINIGAME_SP_CLEANSTALLS_BEECHERS_HOPE";
		case 4:
			return "MINIGAME_SP_CLEANSTALLS_HORSESHOE_OVERLOOK";
		case 5:
			return "MINIGAME_SP_CLEANSTALLS_PRONGHORN_RANCH";
		case 6:
			return "MINIGAME_SP_DOMINOES_BLACKWATER";
		case 7:
			return "MINIGAME_SP_DOMINOES_CAMP";
		case 8:
			return "MINIGAME_SP_DOMINOES_CLEMENS_POINT";
		case 9:
			return "MINIGAME_SP_DOMINOES_EMERALD_RANCH";
		case 10:
			return "MINIGAME_SP_DOMINOES_HORSESHOE_OVERLOOK";
		case 11:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
		case 12:
			return "MINIGAME_SP_DOMINOES_SHADY_BELLE";
		case 14:
			return "MINIGAME_SP_FILLET_CAMP";
		case 15:
			return "MINIGAME_SP_FILLET_CLEMENS_POINT";
		case 16:
			return "MINIGAME_SP_FILLET_HORSESHOE_OVERLOOK";
		case 17:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
		case 18:
			return "MINIGAME_SP_FILLET_SHADY_BELLE";
		case 19:
			return "MINIGAME_SP_FILLET_VALENTINE";
		case 20:
			return "MINIGAME_SP_FILLET_VAN_HORN";
		case 13:
			return "MINIGAME_SP_FENCEBUILDING_PRONGHORN_RANCH";
		case 21:
			return "MINIGAME_SP_MILKCOW_BEECHERS_HOPE";
		case 22:
			return "MINIGAME_SP_MILKCOW_PRONGHORN_RANCH";
		case 23:
			return "MINIGAME_SP_POKER_BLACKWATER";
		case 24:
			return "MINIGAME_SP_POKER_CAMP";
		case 25:
			return "MINIGAME_SP_POKER_CLEMENS_POINT";
		case 26:
			return "MINIGAME_SP_POKER_HORSESHOE_OVERLOOK";
		case 27:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
		case 28:
			return "MINIGAME_SP_POKER_SERENDIPITY_IND3";
		case 29:
			return "MINIGAME_SP_POKER_SHADY_BELLE";
		case 30:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
		case 31:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
		case 32:
			return "MINIGAME_SP_POKER_VALENTINE";
		default:
			break;
	}
	return "";
}

void func_84(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 - (Global_1572864.f_3 && iParam0));
}

bool func_85(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

bool func_86(int iParam0)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

bool func_87(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_790(iParam1);
	__LIB_0__::func_557(&(Global_1946804.f_964), iVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964));
}

bool func_88(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.008654f, 1.171513f, 0.4999996f };
					return true;
				case 1:
					*uParam2 = { 1.018887f, 0.5782621f, 0.4999996f };
					return true;
				case 2:
					*uParam2 = { 1.010233f, -0.5932513f, 0.4999996f };
					return true;
				case 3:
					*uParam2 = { -0.008654f, -1.171513f, 0.4999996f };
					return true;
				case 4:
					*uParam2 = { -1.018887f, -0.5782621f, 0.4999996f };
					return true;
				case 5:
					*uParam2 = { -1.010233f, 0.5932513f, 0.4999996f };
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { Vector(50f, -7.9116f, 112.5219f) / Vector(100f, 100f, 100f) };
					return true;
				case 1:
					*uParam2 = { Vector(50f, -73.55062f, 45.94575f) / Vector(100f, 100f, 100f) };
					return true;
				case 2:
					*uParam2 = { Vector(50f, -72.85871f, -47.61618f) / Vector(100f, 100f, 100f) };
					return true;
				case 3:
					*uParam2 = { Vector(50f, -6.31211f, -113.1842f) / Vector(100f, 100f, 100f) };
					return true;
				case 4:
					*uParam2 = { Vector(50f, 82.1513f, 0.8654f) / Vector(100f, 100f, 100f) };
					return true;
				default:
					break;
			}
			return false;
		case 1:
			fVar0 = 0.98f;
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0f, 0.66f, fVar0 };
					return true;
				case 1:
					*uParam2 = { 0f, -0.66f, fVar0 };
					return true;
				case 2:
					*uParam2 = { 0.66f, 0f, fVar0 };
					return true;
				case 3:
					*uParam2 = { -0.66f, 0f, fVar0 };
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1f, 0f, 0f };
					return true;
				case 1:
					*uParam2 = { 1f, 0f, 0f };
					return true;
				default:
					break;
			}
			return true;
		default:
			break;
	}
	return true;
}

bool func_89(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return true;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_ON_MOUNT(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return true;
	}
	if (PED::_0xB086C8C0F5701D14(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (PED::_IS_PED_LASSOED(iParam0) || PED::_IS_PED_HOGTIED(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_FLEEING(iParam0))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f) || ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
	{
		return true;
	}
	if (PED::_IS_PED_FALLING_2(iParam0) || PED::IS_PED_FALLING(iParam0))
	{
		return true;
	}
	if (TASK::IS_PED_GETTING_UP(iParam0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0))
	{
		return true;
	}
	if (PED::_IS_PED_CARRYING(iParam0))
	{
		return true;
	}
	if (PED::_0x0E99E3BF11BB6367(iParam0) || PED::_0x3BDFCF25B58B0415(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_IN_COVER(iParam0, false, false))
	{
		return true;
	}
	if (PED::IS_PED_DIVING(iParam0))
	{
		return true;
	}
	if (PED::_0xC48A9EB0D499B3E5(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_CLIMBING(iParam0))
	{
		return true;
	}
	return false;
}

bool func_90(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "PedSeatedForMinigame"))
	{
		return DECORATOR::DECOR_GET_BOOL(iParam0, "PedSeatedForMinigame");
	}
	return false;
}

void func_91(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
}

void func_92(var uParam0, var uParam1)
{
	struct<2> Var0;
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &Var0, 2, 2);
}

void func_93(var uParam0, var uParam1)
{
	struct<2> Var0;
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &Var0, 2, 2);
}

void func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
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
	Var2 = { __LIB_0__::func_523(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (__LIB_0__::func_801(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804.f_2657.f_26.f_2 = 5;
					Global_1946804.f_2657.f_26.f_1 = 5;
					Global_1946804.f_2657.f_26 = 5;
					break;
			}
		}
		__LIB_0__::func_238(iVar0);
	}
}

float func_95(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_96(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::_BLIP_REMOVE_MODIFIER(Global_36308[iParam0], iParam1);
		}
	}
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 38:
			return -412614304;
		case 69:
			return -653335484;
		case 76:
			return 1777802794;
		case 78:
			return 1088576970;
		case 92:
			return 412321676;
		case 105:
			return 1787788681;
		case 115:
			return 1635466279;
		case 120:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		default:
			break;
	}
	return 0;
}

bool func_99(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_790(0);
	iVar1 = 0;
	__LIB_0__::func_557(&(Global_1946804.f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964)))
	{
		return false;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946804.f_964), -1516819610))
	{
		return false;
	}
	return iVar1;
}

bool func_100(char* sParam0, bool bParam1)
{
	if (__LIB_0__::func_84(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		__LIB_0__::func_324(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			__LIB_0__::func_324(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			__LIB_0__::func_324(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			__LIB_0__::func_324(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			__LIB_0__::func_324(sParam0, 1);
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		__LIB_0__::func_324(sParam0, 1);
		return true;
	}
	__LIB_0__::func_324(sParam0, 1);
	return false;
}

void func_101()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = __LIB_0__::func_780(iVar5, iVar0);
		if (iVar1 == Global_1946804.f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				vVar2.x = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
				vVar2.f_1 = 1530758430;
				__LIB_0__::func_242(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = joaat("BASE");
				__LIB_0__::func_242(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
	vVar2.f_1 = 1530758430;
	if (Global_1946804.f_57[iVar5 /*11*/] == Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/] = { vVar2 };
	}
}

bool func_102(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (__LIB_0__::func_462(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!__LIB_0__::func_791(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_792(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !__LIB_0__::func_447(iParam0, 1)) || __LIB_0__::func_13(32768))
	{
		if (!__LIB_0__::func_447(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!__LIB_0__::func_463())
	{
		return false;
	}
	return true;
}

void func_103(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_104(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_0__::func_796(cParam1, cParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_105(int iParam0)
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
	if (__LIB_0__::func_815(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_106(int iParam0)
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
	__LIB_0__::func_782(iParam0, 1);
}

bool func_107(int iParam0)
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
	return __LIB_0__::func_818(iParam0, 1);
}

void func_108(int iParam0)
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
	iVar0 = __LIB_0__::func_825(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		__LIB_0__::func_836(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		__LIB_0__::func_836(iParam0);
	}
}

void func_109(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_79(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 = (Global_1898346[iParam0 /*6*/].f_1 || iParam1);
}

bool func_110(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!__LIB_0__::func_923(iParam1) || !__LIB_0__::func_923(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_111(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_192(iParam0, 58855631))
	{
		__LIB_0__::func_794(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

bool func_112(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return __LIB_0__::func_800(iParam0, *uParam1, iParam2, bParam3) > 0;
}

void func_113(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

bool func_114(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	if ((bParam2 && __LIB_0__::func_2() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_808(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_115(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_0__::func_808(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::_UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_116()
{
	__LIB_0__::func_877(joaat("WEAPON_PISTOL_VOLCANIC"));
	__LIB_0__::func_877(joaat("WEAPON_SHOTGUN_PUMP"));
	__LIB_0__::func_877(joaat("WEAPON_RIFLE_VARMINT"));
}

struct<4> func_117(bool bParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_162(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224215))
		{
			Global_1224215 = { __LIB_0__::func_429(923904168, __LIB_0__::func_949(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224223))
		{
			Global_1224223 = { __LIB_0__::func_429(923904168, __LIB_0__::func_949(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return __LIB_0__::func_429(923904168, __LIB_0__::func_949(bParam0), -740156546, 0);
}

struct<4> func_118(bool bParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_162(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224219))
		{
			Global_1224219 = { __LIB_0__::func_429(271701509, __LIB_0__::func_949(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return __LIB_0__::func_429(271701509, __LIB_0__::func_949(bParam0), 12999093, 0);
}

int func_119(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_799(&iParam0);
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

bool func_120(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !__LIB_0__::func_817(iParam0));
}

void func_121(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (__LIB_0__::func_472())
	{
		__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_122(int iParam0)
{
	if (!__LIB_0__::func_450(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_805(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_123(int iParam0)
{
	if (!__LIB_0__::func_450(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_805(iParam0, 2))
	{
		return true;
	}
	return false;
}

struct<4> func_124()
{
	struct<4> Var0;
	Var0 = { __LIB_0__::func_949(0) };
	return __LIB_0__::func_429(856287005, Var0, -218846335, 0);
}

int func_125(int iParam0, struct<4> Param1)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	var uVar7;
	int iVar11;
	struct<5> Var12;
	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (__LIB_0__::func_144(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (__LIB_0__::func_800(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					__LIB_0__::func_610(&uVar7);
					if (__LIB_0__::func_939(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_126(var uParam0)
{
	__LIB_0__::func_611(uParam0);
	__LIB_0__::func_19(uParam0, __LIB_0__::func_829(-1346384396));
	__LIB_0__::func_115(uParam0, __LIB_0__::func_829(-712836614));
	__LIB_0__::func_612(uParam0, __LIB_0__::func_829(-1629133289));
	__LIB_0__::func_613(uParam0, __LIB_0__::func_829(1302066700));
	__LIB_0__::func_614(uParam0, __LIB_0__::func_829(599669344));
	__LIB_0__::func_615(uParam0, __LIB_0__::func_829(-1555511632));
}

bool func_127(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_0__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { __LIB_0__::func_949(0) };
	if (__LIB_0__::func_830(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_128(int iParam0)
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
	if (__LIB_0__::func_832(iParam0) == 0)
	{
		return false;
	}
	return true;
}

bool func_129(int iParam0)
{
	if (!__LIB_0__::func_69(Global_1310720.f_22))
	{
		return true;
	}
	if (__LIB_0__::func_980(Global_1310720.f_22, 1))
	{
		return true;
	}
	if ((0 == iParam0 && 2 == Global_1310720.f_22) || (2 == iParam0 && 0 == Global_1310720.f_22))
	{
		return true;
	}
	return Global_1310720.f_22 == iParam0;
}

void func_130(int iParam0, bool bParam1)
{
	if (Global_1898346[iParam0 /*6*/].f_2 == 0 || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = __LIB_0__::func_9(Global_1898330[iParam0]);
		__LIB_0__::func_855(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}
}

bool func_131(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	if (iParam0 != 0)
	{
		iVar5 = __LIB_0__::func_357(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = __LIB_0__::func_857(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
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

void func_132(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> Var10;
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + __LIB_0__::func_839(iParam0));
	sVar4 = __LIB_0__::func_67(__LIB_0__::func_653(iVar3, iParam2));
	sVar6 = __LIB_0__::func_654(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, __LIB_0__::func_655(iParam0));
	iVar8 = __LIB_0__::func_656(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = __LIB_0__::func_657(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	__LIB_0__::func_425(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", __LIB_0__::func_658(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

int func_133(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	if (iParam1 < 0)
	{
		iParam1 = __LIB_0__::func_162(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	__LIB_0__::func_465(&uVar6, iVar0);
	__LIB_0__::func_466(&uVar6, iVar1);
	__LIB_0__::func_951(&uVar6, iVar2);
	__LIB_0__::func_467(&uVar6, iVar3);
	__LIB_0__::func_468(&uVar6, iVar4);
	__LIB_0__::func_469(&uVar6, iVar5);
	return uVar6;
}

int func_134(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_842(iParam0))
	{
		iVar0 = 0;
	}
	else if (__LIB_0__::func_843(iParam0))
	{
		iVar0 = 1;
	}
	else if (__LIB_0__::func_844(iParam0))
	{
		iVar0 = 2;
	}
	else if (__LIB_0__::func_845(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_135(int iParam0)
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (!__LIB_0__::func_35(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	__LIB_0__::func_74(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

float func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = __LIB_0__::func_821(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = __LIB_0__::func_819(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = __LIB_0__::func_819(iParam0) + 1;
	fVar6 = __LIB_0__::func_833(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = __LIB_0__::func_667(fVar3, fVar4, fVar11);
	return fVar12;
}

bool func_137(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (__LIB_0__::func_895(Global_1347702[iParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[iParam0 /*49*/].f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

bool func_138(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && __LIB_0__::func_998(iParam1) != iParam2)
	{
		return false;
	}
	if (__LIB_0__::func_222(2, iParam1))
	{
		__LIB_0__::func_696(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_139(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = __LIB_0__::func_158(iParam1, 1);
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

void func_140()
{
	Global_1572864.f_8 = -1;
	Global_1572864.f_9 = -1;
	Global_1572864.f_10 = -1;
	__LIB_0__::func_304(0);
	__LIB_0__::func_305(0);
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_306(0);
	__LIB_0__::func_303(1f);
}

void func_141(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_0__::func_319(32);
	if (iParam0 == 0)
	{
		__LIB_0__::func_319(16);
	}
	else if (iParam0 == 1)
	{
		__LIB_0__::func_319(8);
	}
	__LIB_0__::func_897();
	Global_43889 = 1;
}

int func_142(bool bParam0)
{
	if (!bParam0 && __LIB_0__::func_898(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_143(var uParam0)
{
	if (__LIB_0__::func_750(&(uParam0->f_9), 4))
	{
		if (!__LIB_0__::func_902(uParam0))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_52)))
	{
		if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_52)))
		{
			HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_52));
		}
	}
	return 1;
}

void func_144(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (__LIB_0__::func_298(0) != iParam0)
	{
		return;
	}
	if (__LIB_0__::func_906(iParam0))
	{
		if (bParam1)
		{
			__LIB_0__::func_907(-525676072);
		}
		else
		{
			__LIB_0__::func_908(-525676072);
		}
	}
}

int func_145(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	*uParam1 = joaat("CSTP_PERSIST_ACROSS_STATES");
	*iParam2 = -1;
	iVar0 = __LIB_0__::func_700(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = __LIB_0__::func_909(iParam0);
			switch (iVar1)
			{
				case 0:
					return joaat("CSTAG_FLOW_WNT1_POST");
				case 1:
					return joaat("CSTAG_FLOW_WNT2_POST");
				case 2:
					return joaat("CSTAG_FLOW_DST1_POST");
				case 3:
					return joaat("CSTAG_FLOW_WNT4_POST");
				case 4:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_MUD1_POST");
				case 5:
					return joaat("CSTAG_FLOW_MUD2_POST");
				case 6:
					return joaat("CSTAG_FLOW_MUD3_POST");
				case 10:
					return joaat("CSTAG_FLOW_REV1_POST");
				case 13:
					return joaat("CSTAG_FLOW_SEN1_POST");
				case 15:
					return joaat("CSTAG_FLOW_HNT1_POST");
				case 8:
					return joaat("CSTAG_FLOW_MRY1_POST");
				case 25:
					return joaat("CSTAG_FLOW_MUD6_POST");
				case 14:
					return joaat("CSTAG_FLOW_MUD4_POST");
				case 7:
					return joaat("CSTAG_FLOW_BOU1_POST");
				case 9:
					if (__LIB_0__::func_895(Global_1835011[9 /*74*/].f_1) == 0)
					{
						return joaat("CSTAG_FLOW_SAL1_SPLITUP_POST");
					}
					else
					{
						return joaat("CSTAG_FLOW_SAL1_POST");
					}
					break;
				case 11:
					return joaat("CSTAG_FLOW_UTP1_POST");
				case 12:
					return joaat("CSTAG_FLOW_UTP2_POST");
				case 16:
					return joaat("CSTAG_FLOW_FUD1_POST");
				case 17:
					return joaat("CSTAG_FLOW_GRY1_POST");
				case 53:
					return joaat("CSTAG_FLOW_CRN1_POST");
				case 18:
					return joaat("CSTAG_FLOW_BRT1_POST");
				case 19:
					return joaat("CSTAG_FLOW_GRY2_POST");
				case 20:
					return joaat("CSTAG_FLOW_BRT2_POST");
				case 22:
					return joaat("CSTAG_FLOW_TRE1_POST");
				case 23:
					return joaat("CSTAG_FLOW_DST3_POST");
				case 24:
					return joaat("CSTAG_FLOW_MUD5_POST");
				case 21:
					return joaat("CSTAG_FLOW_GRY3_POST");
				case 26:
					return joaat("CSTAG_FLOW_BRT3_POST");
				case 27:
					return joaat("CSTAG_FLOW_MOB1_POST");
				case 28:
					return joaat("CSTAG_FLOW_MOB2_POST");
				case 29:
					return joaat("CSTAG_FLOW_MOB3_POST");
				case 30:
					return joaat("CSTAG_FLOW_MOB4_POST");
				case 31:
					return joaat("CSTAG_FLOW_MOB5_POST");
				case 32:
					return joaat("CSTAG_FLOW_ODR4_POST");
				case 33:
					return joaat("CSTAG_FLOW_IND1_POST");
				case 34:
					return joaat("CSTAG_FLOW_IND3_POST");
				case 35:
					return joaat("CSTAG_FLOW_SUS1_POST");
				case 36:
					return joaat("CSTAG_FLOW_MRY3_POST");
				case 37:
					return joaat("CSTAG_FLOW_SDN1_POST");
				case 38:
					return joaat("CSTAG_FLOW_GUA1_POST");
				case 39:
					return joaat("CSTAG_FLOW_GUA2_POST");
				case 40:
					return joaat("CSTAG_FLOW_FUS1_POST");
				case 41:
					return joaat("CSTAG_FLOW_FUS2_POST");
				case 42:
					return joaat("CSTAG_FLOW_SMG2_POST");
				case 43:
					return joaat("CSTAG_FLOW_GUA3_POST");
				case 44:
					return joaat("CSTAG_FLOW_GNG1_POST");
				case 45:
					return joaat("CSTAG_FLOW_GNG2_POST");
				case 46:
					return joaat("CSTAG_FLOW_GNG3_POST");
				case 47:
					return joaat("CSTAG_FLOW_DST5_POST");
				case 48:
					return joaat("CSTAG_FLOW_NTV1_POST");
				case 49:
					return joaat("CSTAG_FLOW_NTV2_POST");
				case 50:
					return joaat("CSTAG_FLOW_NTS1_POST");
				case 51:
					return joaat("CSTAG_FLOW_NTS2_POST");
				case 52:
					return joaat("CSTAG_FLOW_NTS3_POST");
				case 54:
					return joaat("CSTAG_FLOW_TRN1_POST");
				case 55:
					return joaat("CSTAG_FLOW_TRN2_POST");
				case 56:
					return joaat("CSTAG_FLOW_TRN3_POST");
				case 57:
					return joaat("CSTAG_FLOW_TRN4_POST");
				case 58:
					return joaat("CSTAG_FLOW_NTV3_POST");
				case 59:
					return joaat("CSTAG_FLOW_FIN1_POST");
				case 60:
					return joaat("CSTAG_FLOW_MAR1_POST");
				case 61:
					return joaat("CSTAG_FLOW_MAR5_POST");
				case 62:
					return joaat("CSTAG_FLOW_MR52_POST");
				case 63:
					return joaat("CSTAG_FLOW_MR53_POST");
				case 64:
					return joaat("CSTAG_FLOW_LAR1_POST");
				case 65:
					return joaat("CSTAG_FLOW_MAR2_POST");
				case 66:
					return joaat("CSTAG_FLOW_MAR4_POST");
				case 67:
					return joaat("CSTAG_FLOW_AB21_POST");
				case 68:
					return joaat("CSTAG_FLOW_BE22_POST");
				case 69:
					return joaat("CSTAG_FLOW_SAD2_POST");
				case 70:
					return joaat("CSTAG_FLOW_SAD3_POST");
				case 71:
					return joaat("CSTAG_FLOW_SAD4_POST");
				case 72:
					return joaat("CSTAG_FLOW_SAD5_POST");
				case 73:
					return joaat("CSTAG_FLOW_MAR6_POST");
				case 74:
					return joaat("CSTAG_FLOW_MAR7_POST");
				case 75:
					return joaat("CSTAG_FLOW_MAR8_POST");
				case 76:
					return joaat("CSTAG_FLOW_FIN2_POST");
			}
			break;
		case 8:
			iVar2 = __LIB_0__::func_76(iParam0);
			switch (iVar2)
			{
				case 120:
					return joaat("CSTAG_FLOW_RPRSN_POST");
				case 0:
					return joaat("CSTAG_FLOW_RABI1_POST");
				case 63:
					return joaat("CSTAG_FLOW_RDST2_POST");
				case 97:
					return joaat("CSTAG_FLOW_RMARY1_POST");
				case 98:
					return joaat("CSTAG_FLOW_RMARY2_POST");
				case 94:
					return joaat("CSTAG_FLOW_RHMR0_POST");
				case 59:
					return joaat("CSTAG_FLOW_RDOWN1_POST");
				case 61:
					return joaat("CSTAG_FLOW_RDOWN2_POST");
				case 62:
					return joaat("CSTAG_FLOW_RDOWN3_POST");
				case 112:
					return joaat("CSTAG_FLOW_RMUD31_POST");
				case 113:
					return joaat("CSTAG_FLOW_RMUD32_POST");
				case 114:
					return joaat("CSTAG_FLOW_RMUD33_POST");
				case 66:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDTC1_POST");
				case 76:
					return joaat("CSTAG_FLOW_RXCF1_POST");
				case 134:
					return joaat("CSTAG_FLOW_RSAD1_POST");
				case 3:
					return joaat("CSTAG_FLOW_RBNP10_POST");
				case 5:
					return joaat("CSTAG_FLOW_RBNP12_POST");
				case 21:
					return joaat("CSTAG_FLOW_RBRT0_POST");
				case 37:
					return joaat("CSTAG_FLOW_RCHRB_POST");
				case 138:
					return joaat("CSTAG_FLOW_RSTR1_POST");
				case 67:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDTC2_POST");
				case 106:
					return joaat("CSTAG_FLOW_RMOB01_POST");
				case 107:
					return joaat("CSTAG_FLOW_RMOB02_POST");
				case 115:
					return joaat("CSTAG_FLOW_RNATV1_POST");
				case 116:
					return joaat("CSTAG_FLOW_RNATV2_POST");
				case 22:
					return joaat("CSTAG_FLOW_RCLDN1_POST");
				case 23:
					return joaat("CSTAG_FLOW_RCLDN2_POST");
				case 82:
					return joaat("CSTAG_FLOW_RGNG01_POST");
				case 68:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDCH3_POST");
				case 140:
					return joaat("CSTAG_FLOW_RSTR31_POST");
				case 142:
					return joaat("CSTAG_FLOW_RSTR33_POST");
				case 58:
					return joaat("CSTAG_FLOW_RDOPN_POST");
				case 64:
					return joaat("CSTAG_FLOW_RDST61_POST");
				case 65:
					return joaat("CSTAG_FLOW_RDST62_POST");
				case 108:
					return joaat("CSTAG_FLOW_RMNR1_POST");
				case 8:
					return joaat("CSTAG_FLOW_RBCH11_POST");
				case 10:
					return joaat("CSTAG_FLOW_RBCH21_POST");
				case 2:
					return joaat("CSTAG_FLOW_RABI3_POST");
				case 96:
					return joaat("CSTAG_FLOW_RJCK2_POST");
				case 52:
					return joaat("CSTAG_FLOW_RCTAX2_POST");
				default:
					break;
			}
			break;
		case 11:
			iVar3 = __LIB_0__::func_76(iParam0);
			switch (iVar3)
			{
				case joaat("HAI_FISHING_01"):
					return joaat("CSTAG_FLOW_CA_FS01_POST");
				case joaat("HAI_HOME_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_HR01_POST");
				case joaat("HAI_COACH_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_CR02_POST");
				case joaat("HAI_COACH_ROBBERY_02"):
					return joaat("CSTAG_FLOW_CA_CR03_POST");
				case joaat("HAI_FISHING_02"):
					return joaat("CSTAG_FLOW_CA_FS02_POST");
				case joaat("HAI_HUNTING_06"):
					return joaat("CSTAG_FLOW_CA_HT06_POST");
				case joaat("HAI_BANK_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_BR01_POST");
				case joaat("HAI_COACH_ROBBERY_03"):
					return joaat("CSTAG_FLOW_CA_CR01_POST");
				case joaat("HAI_COACH_ROBBERY_04"):
					return joaat("CSTAG_FLOW_CA_CR04_POST");
				default:
					break;
			}
			break;
	}
	return 176656832;
}

void func_146(int iParam0)
{
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514.f_14 = 1;
		Global_1879514.f_15 = 0;
	}
	else
	{
		__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514.f_14 = 0;
		Global_1879514.f_15 = 1;
	}
}

bool func_147(var uParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	uParam0->f_269 = 0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_264);
	if (!bVar0)
	{
		if (!DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam1)))
		{
			return true;
		}
		if (!bParam4)
		{
			uParam0->f_264 = DATAFILE::_0xCA56DD6AB7A39F64(MISC::GET_HASH_KEY(sParam1));
		}
		else
		{
			uParam0->f_264 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
		}
	}
	uParam0->f_270 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_264);
	if (!uParam0->f_270)
	{
		if (!bParam4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	__LIB_0__::func_927(uParam0);
	uParam0->f_264.f_2 = 0;
	uParam0->f_277 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_264));
	uParam0->f_264.f_2 = 12;
	uParam0->f_279 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_264));
	uParam0->f_270 = 1;
	uParam0->f_278 = 0;
	uParam0->f_280 = 0;
	if (bParam3)
	{
		return false;
	}
	return true;
}

void func_148(var uParam0)
{
	__LIB_0__::func_268(uParam0, 0f);
}

int func_149(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		return __LIB_0__::func_930(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(__LIB_0__::func_110(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_110(), iVar3);
		if (__LIB_0__::func_407(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_150(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		__LIB_0__::func_931(iParam0);
	}
	else
	{
		__LIB_0__::func_932(iParam0, iParam1);
	}
	__LIB_0__::func_408();
}

bool func_151(int iParam0)
{
	if (!__LIB_0__::func_83(iParam0))
	{
		return false;
	}
	return __LIB_1__::func_25(Global_1835011[iParam0 /*74*/].f_1, 1);
}

void func_152(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	__LIB_1__::func_28(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			__LIB_0__::func_345(2, *uParam0);
		}
		else
		{
			__LIB_0__::func_346(2, *uParam0);
		}
	}
	__LIB_0__::func_415(uParam0);
}

bool func_153(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	return __LIB_0__::func_913(iParam0) != 0;
}

bool func_154(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	return __LIB_1__::func_25(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_155(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	return __LIB_1__::func_25(Global_1835011[iParam0 /*74*/].f_1, 1);
}

int func_156()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == __LIB_0__::func_419())
	{
		return __LIB_0__::func_920();
	}
	iVar4 = (__LIB_0__::func_419() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < __LIB_0__::func_419())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!__LIB_0__::func_448(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return __LIB_0__::func_420(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

void func_157(int iParam0, char* sParam1)
{
	char* sVar0;
	sVar0 = __LIB_0__::func_454(__LIB_0__::func_453(0));
	__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", __LIB_0__::func_946(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_158(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	__LIB_0__::func_465(iParam0, iParam6);
	__LIB_0__::func_466(iParam0, iParam5);
	__LIB_0__::func_951(iParam0, iParam4);
	__LIB_0__::func_467(iParam0, iParam3);
	__LIB_0__::func_468(iParam0, iParam2);
	__LIB_0__::func_469(iParam0, iParam1);
}

bool func_160(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_937(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				__LIB_0__::func_238(iVar1);
				return true;
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	return false;
}

int func_161(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar0 = __LIB_0__::func_956(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1894065[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iVar4 /*35*/].f_3))
			{
				if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[iVar4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[iVar4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

void func_162(int iParam0)
{
	int iVar0;
	int iVar1;
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
	__LIB_1__::func_0(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!__LIB_1__::func_1(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	__LIB_0__::func_835(iParam0, 0);
	__LIB_0__::func_836(iParam0);
}

void func_163(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return;
	}
	__LIB_0__::func_510(iParam0);
	__LIB_1__::func_3(iParam0, uParam1);
	__LIB_0__::func_511(iParam0);
	__LIB_1__::func_4(iParam0, uParam2);
	if (iParam3 != 0)
	{
		__LIB_0__::func_512(iParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
}

void func_164(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (!__LIB_0__::func_296(0, 0, 1) || bParam0)
	{
		iVar0 = __LIB_0__::func_786();
		iVar1 = __LIB_0__::func_416(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = __LIB_0__::func_514(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = __LIB_0__::func_514(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 1, fVar3);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 2, fVar2);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
	}
}

bool func_165(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (__LIB_0__::func_966() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == joaat("TAXIDERMY"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

float func_166()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	if (__LIB_0__::func_246())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return __LIB_0__::func_247(2);
	}
	if (Global_1347477.f_119)
	{
		return __LIB_0__::func_247(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = __LIB_0__::func_727();
	fVar2 = __LIB_0__::func_248();
	fVar3 = __LIB_0__::func_295();
	fVar4 = __LIB_0__::func_249();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / __LIB_0__::func_250()));
	fVar7 = (__LIB_0__::func_247(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	__LIB_0__::func_970(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	__LIB_0__::func_971(3, fVar9, fVar9 > 100f);
	return __LIB_0__::func_251(fVar7, -100f, 100f);
}

float func_167()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	if (__LIB_0__::func_246())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return __LIB_0__::func_247(1);
	}
	if (Global_1347477.f_119)
	{
		return __LIB_0__::func_247(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = __LIB_0__::func_727();
	fVar2 = __LIB_0__::func_248();
	fVar3 = __LIB_0__::func_295();
	fVar4 = __LIB_0__::func_249();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / __LIB_0__::func_250()));
	fVar7 = (__LIB_0__::func_247(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	__LIB_0__::func_970(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	__LIB_0__::func_971(2, fVar9, fVar9 > 100f);
	return __LIB_0__::func_251(fVar7, -100f, 100f);
}

float func_168()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	if (__LIB_0__::func_246())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return __LIB_0__::func_247(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (__LIB_0__::func_728())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (__LIB_0__::func_729())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return __LIB_0__::func_247(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = __LIB_0__::func_727();
	fVar2 = __LIB_0__::func_248();
	fVar3 = __LIB_0__::func_295();
	fVar4 = __LIB_0__::func_249();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / __LIB_0__::func_250()));
	fVar7 = (__LIB_0__::func_247(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	__LIB_0__::func_970(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	__LIB_0__::func_971(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return __LIB_0__::func_247(0);
	}
	return __LIB_0__::func_251(fVar7, -100f, 100f);
}

int func_169(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804.f_2657.f_21;
		case 81053684:
			return Global_1946804.f_2657.f_23;
		case -525676072:
			return Global_1946804.f_2657.f_22;
		case -1719060085:
			return Global_1946804.f_2657.f_24;
		case -413129408:
			return Global_1946804.f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804.f_2657.f_20;
			}
			else
			{
				return __LIB_0__::func_972();
			}
			break;
	}
	return 0;
}

int func_170(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	__LIB_0__::func_807(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	__LIB_0__::func_973(uParam2, iParam0, Var1);
	return 1;
}

void func_171(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	switch (Param0)
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
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804.f_850 >= 25)
			{
				return;
			}
			if (__LIB_0__::func_182(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804.f_850)
				{
					iVar1 = ((Global_1946804.f_855 + iVar0) % 25);
					if ((Global_1946804.f_668[iVar1 /*4*/] == Param0 && Global_1946804.f_668[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1946804.f_668[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			__LIB_0__::func_183(Param0);
			Global_1946804.f_668[Global_1946804.f_856 /*4*/] = { Param0 };
			Global_1946804.f_850++;
			Global_1946804.f_856 = (Global_1946804.f_856 + 1 % 25);
			__LIB_0__::func_155(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804.f_851 >= 25)
			{
				return;
			}
			if (__LIB_0__::func_182(Param0))
			{
				return;
			}
			__LIB_0__::func_183(Param0);
			Global_1946804.f_567[Global_1946804.f_851 /*4*/] = { Param0 };
			Global_1946804.f_851++;
			__LIB_0__::func_155(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			__LIB_1__::func_37(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_172(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	iVar0 = __LIB_0__::func_977(iParam0);
	if (__LIB_0__::func_898(373691918) && Global_1310720.f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

void func_173(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	__LIB_0__::func_734(iVar0);
	__LIB_0__::func_288(iParam0, 60, 1);
	if (bParam1)
	{
		__LIB_0__::func_983(iParam0);
	}
}

void func_174(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	__LIB_0__::func_735(iVar0);
	__LIB_0__::func_290(iParam0, 60, 1);
	if (bParam1)
	{
		__LIB_0__::func_984(iParam0);
	}
}

void func_175(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	__LIB_0__::func_736(iVar0);
	if (iParam0 == 14)
	{
		__LIB_0__::func_985(iVar0);
	}
	__LIB_0__::func_288(iParam0, 61, 1);
	if (bParam1)
	{
		__LIB_0__::func_986(iParam0);
	}
}

void func_176(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	__LIB_0__::func_737(iVar0);
	__LIB_0__::func_290(iParam0, 61, 1);
	if (bParam1)
	{
		__LIB_0__::func_987(iParam0);
	}
}

void func_177(int iParam0)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (__LIB_1__::func_15(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(iParam0, 0);
	PED::_0x931B241409216C1F(Global_35, iParam0, 0);
	PED::_0xB8B6430EAD2D2437(iParam0, joaat("PLAYER_HORSE"));
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	PED::_0xFD6943B6DF77E449(iParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_0xAEB97D84CDF3C00B(iParam0, 0);
	if (__LIB_1__::func_16(iParam0))
	{
		iVar3 = __LIB_0__::func_402(iParam0);
		if (__LIB_0__::func_578(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

int func_178(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (__LIB_0__::func_28())
	{
		if (__LIB_0__::func_113())
		{
			bVar0 = false;
			if (!__LIB_1__::func_25(Global_1835011[15 /*74*/].f_1, 1) && !__LIB_0__::func_293(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = __LIB_0__::func_579();
				*iParam1 = __LIB_0__::func_580();
				*iParam2 = __LIB_0__::func_16();
				return 1;
			}
			else
			{
				*iParam0 = __LIB_0__::func_581();
				*iParam1 = __LIB_0__::func_582();
				*iParam2 = __LIB_0__::func_16();
				return 1;
			}
		}
		else if (__LIB_0__::func_181())
		{
			if (!__LIB_1__::func_25(Global_1835011[60 /*74*/].f_1, 1))
			{
				*iParam0 = __LIB_0__::func_583();
				*iParam1 = __LIB_0__::func_584();
				*iParam2 = __LIB_0__::func_585();
				return 1;
			}
			else
			{
				*iParam0 = __LIB_0__::func_581();
				*iParam1 = __LIB_0__::func_582();
				*iParam2 = __LIB_0__::func_16();
				return 1;
			}
		}
	}
	else if (__LIB_0__::func_113())
	{
		*iParam0 = __LIB_0__::func_586();
		*iParam1 = __LIB_0__::func_587();
		*iParam2 = __LIB_0__::func_16();
		return 1;
	}
	else if (__LIB_0__::func_181())
	{
		*iParam0 = __LIB_0__::func_588();
		*iParam1 = __LIB_0__::func_589();
		*iParam2 = __LIB_0__::func_16();
		return 1;
	}
	return 0;
}

int func_179(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = __LIB_0__::func_992(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_180(int iParam0, bool bParam1)
{
	Global_1955569.f_1 = iParam0;
	if (bParam1)
	{
		__LIB_0__::func_993(bParam1);
	}
}

float func_181(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return __LIB_0__::func_994(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return __LIB_0__::func_994(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return __LIB_0__::func_994(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_182(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_161(__LIB_0__::func_997(iParam0), 1);
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

void func_183(var uParam0, bool bParam1, int iParam2)
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
			iVar5 = __LIB_0__::func_158(iVar0, 1);
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
							iVar5 = __LIB_0__::func_158(iVar0, 1);
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

void func_184(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3 /*3*/].f_1 == 1216705912 || uParam0->f_1[iVar3 /*3*/].f_1 == 654181853)
	{
		if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = -1539589426;
			uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
		}
		if (bParam2)
		{
			__LIB_1__::func_41(iVar1, iVar0);
		}
		if (bParam1)
		{
			__LIB_1__::func_41(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			__LIB_1__::func_41(iVar2, iVar0);
		}
	}
}

bool func_185(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return __LIB_1__::func_25(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_186(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	__LIB_1__::func_13(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
}

bool func_187(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_5(iParam0))
	{
		return false;
	}
	return __LIB_1__::func_25(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_188(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (UNK_0x3745C002F5A21C45(iVar0, uParam1, 28))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					__LIB_1__::func_19(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			__LIB_1__::func_19(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		__LIB_1__::func_19(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_189(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (UNK_0x3745C002F5A21C45(iVar0, uParam1, 17))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					__LIB_1__::func_19(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			__LIB_1__::func_19(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		__LIB_1__::func_19(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_190(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (UNK_0x3745C002F5A21C45(iVar0, uParam1, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					__LIB_1__::func_19(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			__LIB_1__::func_19(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		__LIB_1__::func_19(iVar0, 1);
		return iVar0;
	}
	return -1;
}

char* func_191(int iParam0)
{
	char* sVar0;
	if (iParam0 == 255)
	{
		if (__LIB_1__::func_14(37, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1109400.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1225639.f_21[iParam0])
	{
		return sVar0;
	}
	if (__LIB_1__::func_14(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1108178[iParam0 /*37*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108178[iParam0 /*37*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1225639.f_120[iParam0]);
}

void func_192(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	__LIB_1__::func_21(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_193(bool bParam0, bool bParam1)
{
	if (((WEAPON::IS_WEAPON_VALID(Global_1935630.f_44) && WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44)) && PED::GET_PED_RESET_FLAG(Global_35, 0)) && CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_KIT_CAMERA"))
	{
		__LIB_1__::func_26(0);
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (bParam0)
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
	}
	if (bParam1)
	{
		CAM::_TRIGGER_MISSION_FAILED_CAM();
	}
}

int func_194()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!__LIB_1__::func_25(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!__LIB_1__::func_25(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!__LIB_1__::func_25(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!__LIB_1__::func_25(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!__LIB_1__::func_25(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!__LIB_1__::func_25(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

bool func_195()
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_28())
	{
		return false;
	}
	if (!__LIB_1__::func_25(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((__LIB_1__::func_25(Global_1835011[2 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1347702[120 /*49*/].f_15, 1)) && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1) && !__LIB_1__::func_25(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[57 /*74*/].f_1, 1) && !__LIB_1__::func_25(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[26 /*74*/].f_1, 1) && !__LIB_1__::func_25(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((__LIB_1__::func_25(Global_1835011[62 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[63 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[75 /*74*/].f_1, 1) && !__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (__LIB_1__::func_25(Global_1835011[76 /*74*/].f_1, 1) && !__LIB_1__::func_25(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((__LIB_1__::func_25(Global_1835011[40 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[41 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((__LIB_1__::func_25(Global_1835011[62 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[63 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((__LIB_1__::func_25(Global_1835011[65 /*74*/].f_1, 1) && __LIB_1__::func_25(Global_1835011[66 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

void func_196(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = __LIB_0__::func_57(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	__LIB_1__::func_29(iVar0);
	*uParam0 = 0;
}

void func_197(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_699(iParam0))
	{
		if (!__LIB_1__::func_22(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (__LIB_0__::func_287(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = __LIB_0__::func_748(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	iVar1 = __LIB_0__::func_271(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && __LIB_0__::func_210(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		__LIB_0__::func_288(iParam0, 2, 1);
	}
	else
	{
		__LIB_1__::func_31(iParam0);
		__LIB_0__::func_288(iParam0, 1, 1);
	}
}

bool func_198(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		return __LIB_1__::func_32(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_199(int iParam0)
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
			__LIB_1__::func_33(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_716(1);
	}
}

bool func_200(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_5(iParam0))
	{
		return false;
	}
	return __LIB_1__::func_44(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_201(int iParam0, int iParam1)
{
	bool bVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = __LIB_1__::func_39(iParam0, iParam1);
	return bVar0;
}

bool func_202()
{
	if (__LIB_1__::func_44(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_203(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_0__::func_741(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (__LIB_0__::func_2() == -1)
	{
		if ((Global_40.f_7729 != 0 || !__LIB_0__::func_222(2, Global_26796.f_776)) || Global_1946804.f_1497 != __LIB_0__::func_223(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = __LIB_0__::func_223(Global_40.f_7729);
				Global_1946804.f_1378 = __LIB_0__::func_223(Global_40.f_7729);
				Global_26796.f_776 = 0;
				__LIB_1__::func_42(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		__LIB_0__::func_719(0, 1);
	}
}

Vector3 func_204(int iParam0)
{
	if (__LIB_1__::func_43(iParam0))
	{
		return __LIB_0__::func_135(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

bool func_205(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

void func_206(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_207(int iParam0, int iParam1)
{
	var uVar0;
	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_208(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_209(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_210(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			Global_1911670[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_211(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_77(iParam0, iParam1))
	{
	}
	Global_1899528.f_3[iParam0] = (Global_1899528.f_3[iParam0] || iParam1);
}

void func_212(int iParam0, int iParam1)
{
	if (__LIB_1__::func_77(iParam0, iParam1))
	{
	}
	Global_1899528.f_3[iParam0] = (Global_1899528.f_3[iParam0] - (Global_1899528.f_3[iParam0] && iParam1));
}

void func_213(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = __LIB_1__::func_55(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	Global_1392915.f_121[iVar0 /*20*/].f_19 = iParam1;
}

bool func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = __LIB_1__::func_55(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_19;
}

int func_215(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return 1;
		case joaat("HAI_BANK_ROBBERY_01"):
			return 10;
		case -1348173149:
			return 17;
		case joaat("HAI_HOME_ROBBERY_01"):
			return 14;
		case joaat("HAI_COACH_ROBBERY_01"):
			return 7;
		case -709866131:
			return 16;
		case joaat("HAI_COACH_ROBBERY_03"):
			return 11;
		case -589165916:
			return 0;
		case joaat("HAI_COACH_ROBBERY_02"):
			return 8;
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return 4;
		case joaat("HAI_COACH_ROBBERY_04"):
			return 12;
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return 9;
		case joaat("HAI_FISHING_01"):
			return 2;
		case joaat("HAI_RUSTLING_02"):
			return 13;
		case joaat("HAI_FISHING_02"):
			return 3;
		case joaat("HAI_HUNTING_06"):
			return 5;
		case joaat("HAI_DOMINOES_01"):
			return 6;
		case 2061320468:
			return 15;
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

void func_216(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, __LIB_0__::func_93());
	}
}

bool func_217(int iParam0)
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
	{
		return true;
	}
	return false;
}

void func_218(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		__LIB_1__::func_68(iVar0, -1);
		__LIB_1__::func_69(iVar0, 0);
		__LIB_1__::func_70(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[iVar0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[iVar0]));
		}
		iVar0++;
	}
}

bool func_219(int iParam0)
{
	return __LIB_1__::func_85(iParam0, Global_1310750.f_16072 | 64);
}

bool func_220(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return __LIB_0__::func_21(iParam0, 8);
}

void func_221(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (bParam2 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (bParam1)
	{
		__LIB_0__::func_184(iParam0, 4);
		__LIB_0__::func_629(iVar0, 1);
		__LIB_0__::func_185(iVar0, 1);
	}
	else
	{
		__LIB_0__::func_186(iParam0, 4);
		__LIB_0__::func_185(iVar0, 0);
	}
}

void func_222(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (__LIB_0__::func_86(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (__LIB_0__::func_175(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_223(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
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

bool func_224(int iParam0)
{
	if (!__LIB_1__::func_76(iParam0))
	{
		return false;
	}
	return (!__LIB_0__::func_28() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

void func_225(int iParam0)
{
	if (!__LIB_1__::func_76(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_7854), iParam0);
}

bool func_226(int iParam0)
{
	int iVar0;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1392915)
	{
		if (__LIB_1__::func_56(iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_227()
{
	if (Global_1899528.f_202 != 0)
	{
		if (Global_1899528.f_202 == UIFEED::_0xC17F69E1418CD11F(1))
		{
			__LIB_0__::func_105(1);
		}
		Global_1899528.f_202 = 0;
		Global_1899528.f_203 = 0;
	}
}

void func_228(var uParam0)
{
	int iVar0;
	int iVar1;
	if ((Global_1898077.f_1 == 2 || Global_1898077.f_1 == 5) || Global_1898077.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (__LIB_0__::func_2() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = __LIB_0__::func_338(Global_1894899.f_2);
	Global_1898077.f_1 = 3;
	Global_1898077.f_2 = 0;
	Global_1898077.f_7 = iVar0;
	Global_1898077.f_8 = uParam0;
	Global_1898077.f_9 = iVar1;
	__LIB_0__::func_339(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
}

void func_229(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!__LIB_1__::func_67(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915.f_121[iVar0 /*20*/].f_15 == 1)
	{
	}
	Global_1392915.f_121[iVar0 /*20*/].f_15 = 0;
}

void func_230(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		__LIB_1__::func_68(*uParam0, -1);
		__LIB_1__::func_69(*uParam0, 0);
		__LIB_1__::func_70(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[*uParam0]))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[*uParam0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[*uParam0]));
		}
	}
	*uParam0 = -1;
}

bool func_231(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	vector3 vVar0;
	var uVar3;
	if (!__LIB_1__::func_76(iParam0))
	{
		return false;
	}
	if (!__LIB_1__::func_88(iParam0, iParam5, &vVar0))
	{
		return false;
	}
	*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam7 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + Vector(0.1f, 0f, 0f), &uVar3, false))
		{
			uParam6->f_2 = uVar3;
		}
	}
	return true;
}

void func_232(int iParam0)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	__LIB_0__::func_341(iParam0, __LIB_0__::func_340(iParam0) + 1);
}

void func_233(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_2() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = iVar0;
	__LIB_1__::func_92(Global_1898077.f_7, Global_1898077.f_3);
}

void func_234(int iParam0)
{
	int iVar0;
	if (Global_1898077.f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (__LIB_0__::func_2() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = iVar0;
	__LIB_1__::func_93(Global_1898077.f_7, Global_1898077.f_4);
}

bool func_235(int iParam0)
{
	vector3 vVar0[3];
	vector3 vVar10;
	float fVar13;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		return true;
	}
	if (!TASK::IS_PED_STILL(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f))
	{
		return false;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(iParam0))
	{
		return false;
	}
	if (PED::GET_PED_STEALTH_MOVEMENT(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_JUMPING(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return false;
	}
	vVar10 = { PED::GET_PED_BONE_COORDS(iParam0, 56200, 0f, 0f, 0f) };
	vVar0[2 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	if ((vVar10.z - vVar0[2 /*3*/].f_2) > 0.7f)
	{
		return false;
	}
	vVar0[0 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 65478, 0f, 0f, 0f) };
	vVar0[1 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 55120, 0f, 0f, 0f) };
	fVar13 = __LIB_1__::func_95(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	vVar0[0 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 6884, 0f, 0f, 0f) };
	vVar0[1 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 43312, 0f, 0f, 0f) };
	vVar0[2 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar13 = __LIB_1__::func_95(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	return true;
}

void func_236(int iParam0, int iParam1)
{
	struct<5> Var0;
	if (iParam0 == -1 || iParam0 == 0)
	{
		Global_1898164.f_1[iParam1 /*5*/] = { Var0 };
	}
	else
	{
		Global_1898164.f_1[iParam1 /*5*/] = iParam0;
		Global_1898164.f_1[iParam1 /*5*/].f_1 = __LIB_0__::func_9(iParam0);
		__LIB_0__::func_855(Global_1898164.f_1[iParam1 /*5*/].f_1, &(Global_1898164.f_1[iParam1 /*5*/].f_3), &(Global_1898164.f_1[iParam1 /*5*/].f_4), &(Global_1898164.f_1[iParam1 /*5*/].f_2));
	}
}

int func_237(int iParam0)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return -1;
	}
	if (iParam0 >= __LIB_1__::func_149(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

bool func_238()
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	return __LIB_1__::func_149(1) > 0;
}

int func_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_475(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > __LIB_0__::func_388())
	{
		return -1;
	}
	iVar0 = __LIB_0__::func_389(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	__LIB_1__::func_150(iVar1, 0);
	__LIB_0__::func_341(iVar1, 0);
	__LIB_0__::func_397(iVar1, 0);
	__LIB_0__::func_476(iVar1, 0);
	__LIB_0__::func_477(iVar1, iVar0);
	if (iParam4 != 0)
	{
		__LIB_0__::func_478(iVar1, iParam4);
	}
	return iVar1;
}

void func_240(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_378(iParam0, &iVar0, &iVar1);
	if (!__LIB_1__::func_102(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	__LIB_0__::func_379(iVar0, iVar1);
}

bool func_241(int iParam0)
{
	return __LIB_0__::func_746(iParam0) == 0;
}

void func_242(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	__LIB_1__::func_150(iParam0, iParam1);
}

bool func_243(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (__LIB_1__::func_44(__LIB_1__::func_51(iVar0)))
	{
		return true;
	}
	return false;
}

void func_244()
{
	__LIB_1__::func_166();
	__LIB_1__::func_167();
	__LIB_1__::func_168();
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case -1511391406:
			return 73;
		case -1341684320:
			return 72;
		case -1567081107:
			return 74;
		case 1784895540:
			return 75;
		case 654481153:
			return 76;
		case 565221344:
			return 78;
		case -919476462:
			return 77;
		case -1670940721:
			return 79;
		case 754620122:
			return 81;
		default:
			break;
	}
	return 0;
}

char* func_246(int iParam0)
{
	switch (iParam0)
	{
		case 1784895540:
			return "ACT_HUNTING_PROMPT";
		case -1511391406:
			return "ACT_FFF_CAMP_PROMPT";
		case 654481153:
			return "ACT_FISHING_PROMPT";
		case 754620122:
			return "ACT_RUSTLING_PROMPT";
		case -2036347356:
			return "ACT_POKER_PROMPT";
		case -1341684320:
			return "ACT_POKER_CAMP_PROMPT";
		case -919476462:
			return "ACT_COACH_PROMPT";
		case -1670940721:
			return "ACT_BANK_PROMPT";
		case 380107708:
			return "ACT_TRAIN_PROMPT";
		case 565221344:
			return "ACT_HOMEROB_PROMPT";
		case -1700356309:
			return "ACT_BLACKJACK_PROMPT";
		case 1523333387:
			return "ACT_CRAPS_PROMPT";
		case 1744128959:
			return "ACT_HIDEOUT_PROMPT";
		case -1567081107:
			return "ACT_DOMINOES_PROMPT";
		case -1739349092:
			return "ACT_RETURN_PROMPT";
		case -301635006:
			return "ACT_MISSION_PROMPT";
		default:
			break;
	}
	return "ACT_INVALID_PROMPT";
}

void func_247(int iParam0, int iParam1)
{
	Global_1899528.f_61.f_4 = iParam1;
}

bool func_248(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (iParam0 == (*iParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_249(int iParam0)
{
	Global_1899528.f_61.f_4 = -1;
}

bool func_250(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_1391438.f_7[iVar0 /*99*/].f_8 == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_251(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -138.7686f, -27.4923f, 95.0878f;
		case 2:
			return 663.2041f, -1266.61f, 42.8666f;
		case 3:
			return 1871.706f, -1863.183f, 41.8185f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_252(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -118.119f, -27.6134f, 94.804f;
		case 2:
			return 665.5017f, -1243.862f, 43.143f;
		case 3:
			return 1881.669f, -1874.046f, 41.8096f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_253()
{
	return WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), 0, false);
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case -2036347356:
		case -1341684320:
			return 2;
		case -1567081107:
			return 1;
		case -1511391406:
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_255(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 54)
	{
		return false;
	}
	return true;
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_257(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_258(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_259(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_260(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_261(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	var uVar0;
	int iVar5[4];
	if (__LIB_0__::func_86(vParam0))
	{
		return false;
	}
	uVar0 = 4;
	iVar5[0] = 16384;
	iVar5[1] = iParam4;
	return VOLUME::_0x51E52C9687FCDEEC(vParam0, fParam3, &uVar0, &iVar5, iParam5);
}

bool func_262(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_0__::func_378(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_263(int iParam0)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_378(iParam0, &iVar0, &iVar1);
	__LIB_1__::func_207(iVar0, iVar1);
}

bool func_264(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_265(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return __LIB_1__::func_208(iParam0, &Var0);
}

void func_266(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, __LIB_0__::func_93());
	}
}

void func_267(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (__LIB_1__::func_77(iParam0, 2))
		{
			__LIB_1__::func_211(iParam0, 4);
			__LIB_1__::func_212(iParam0, 2);
		}
	}
	else
	{
		__LIB_1__::func_211(iParam0, 2);
	}
}

int func_268(int iParam0)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return -1;
	}
	return BUILTIN::SHIFT_RIGHT(__LIB_0__::func_340(iParam0) & 2147418112, 16);
}

bool func_269(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_273(iParam0, 32, 1))
	{
		return false;
	}
	if (!__LIB_0__::func_273(iParam0, 2, 1))
	{
		return false;
	}
	if (!__LIB_0__::func_273(iParam0, 4, 1))
	{
		return false;
	}
	if (__LIB_0__::func_287(iParam0, 33, 1))
	{
		return false;
	}
	if (__LIB_0__::func_699(iParam0))
	{
		return false;
	}
	if (__LIB_1__::func_217(iParam0))
	{
		if (!bParam2)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549.f_1497 == iParam0)
		{
			return false;
		}
	}
	return true;
}

void func_270(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	var uVar21;
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	uVar0 = Global_1835011[iParam0 /*74*/].f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { Global_1835011[iParam0 /*74*/].f_18 };
	MemCopy(&Var5, {Global_1835011[iParam0 /*74*/].f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, Global_1835011[iParam0 /*74*/].f_26, MISC::GET_HASH_KEY(&Var13), uVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, Global_1835011[iParam0 /*74*/].f_26, joaat("TOAST_LOG_BLIPS"));
}

bool func_271(int iParam0)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_73(64) && __LIB_1__::func_219(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

void func_272(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319.f_15936[iVar0 /*6*/].f_5)
		{
			Global_1914319.f_15936[iVar0 /*6*/].f_5 = 0;
		}
		__LIB_1__::func_230(&(Global_1914319.f_15936[iVar0 /*6*/]), bParam0);
		iVar0++;
	}
}

void func_273(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		__LIB_1__::func_230(&(Global_1934051.f_23[iVar0]), bParam0);
		iVar0++;
	}
}

void func_274(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 33)
	{
		__LIB_1__::func_230(&(Global_1899778.f_34[iVar0]), bParam0);
		Global_1899778[iVar0] = 0;
		iVar0++;
	}
}

void func_275(bool bParam0)
{
	__LIB_1__::func_230(&Global_1956614, bParam0);
}

void func_276(bool bParam0)
{
	__LIB_1__::func_230(&(Global_1415412.f_3), bParam0);
}

void func_277(bool bParam0)
{
	if (__LIB_1__::func_59(Global_1934051.f_33))
	{
		__LIB_1__::func_96(Global_1934051.f_33, 7148155);
	}
	__LIB_1__::func_230(&(Global_1934051.f_33), bParam0);
}

void func_278(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = __LIB_1__::func_98(__LIB_1__::func_97(iVar0));
		if (iVar1 != 0)
		{
			__LIB_1__::func_96(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (Global_1934051[iVar0 /*2*/].f_1)
		{
			Global_1934051[iVar0 /*2*/].f_1 = 0;
		}
		__LIB_1__::func_230(&(Global_1934051[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
}

void func_279(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_39(*uParam0);
	iVar1 = __LIB_0__::func_710(*uParam0);
	if (iParam1 < 1 || iParam1 > __LIB_0__::func_44(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

bool func_280(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	iVar0 = __LIB_0__::func_162(0);
	*uParam1 = { __LIB_0__::func_429(iParam0, __LIB_1__::func_117(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

void func_281(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = __LIB_0__::func_17(*iParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	__LIB_1__::func_29(iVar0);
	*iParam0 = 0;
}

int func_282(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (__LIB_0__::func_86(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (__LIB_0__::func_175(vParam2, Global_1945938[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
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
		__LIB_1__::func_223(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_283(var uParam0, bool bParam1)
{
	if (bParam1 || !__LIB_0__::func_75(uParam0))
	{
		__LIB_1__::func_148(uParam0);
	}
}

void func_284(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = Global_1392915[iParam1 /*12*/];
	if (!__LIB_1__::func_58(iVar0))
	{
		return;
	}
	if (__LIB_1__::func_59(uParam0->f_34[iVar0]))
	{
		__LIB_1__::func_230(&(uParam0->f_34[iVar0]), 1);
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
	}
}

bool func_285(var uParam0, float fParam1)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		return false;
	}
	if (__LIB_0__::func_265(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_286(int iParam0, int iParam1)
{
	int iVar0;
	char cVar1[64];
	if (__LIB_1__::func_89(iParam1))
	{
		return false;
	}
	if (__LIB_1__::func_90(iParam1))
	{
		return true;
	}
	if (iParam0 == 2)
	{
		if (!PED::IS_PED_MALE(iParam1))
		{
			return false;
		}
		if (PED::_0xBD0E4F52F6D95242(iParam1))
		{
			return false;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam1, 0))
		{
			if (PED::_IS_PED_USING_SCENARIO_HASH(iParam1, joaat("MINIGAME_POKER_PLAYER")))
			{
				return true;
			}
			if (PED::_IS_PED_USING_SCENARIO_HASH(iParam1, joaat("MINIGAME_POKER_CAMP_PLAYER")))
			{
				return true;
			}
			if (PED::_IS_PED_USING_SCENARIO_HASH(iParam1, joaat("PROP_HUMAN_SEAT_CHAIR")))
			{
				return true;
			}
		}
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, -1))
		{
			return true;
		}
		if (__LIB_1__::func_235(iParam1))
		{
			return true;
		}
		if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, "mini_games@poker_mg@base", "no_cards_idle_a", 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, "mini_games@poker_mg@base", "no_cards_idle_b", 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, "mini_games@poker_mg@base", "no_cards_idle_c", 1)) && !(TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam1) && TASK::_GET_TASK_MOVE_NETWORK_ID(iParam1) == joaat("TASKMOVEPOKER")))
		{
			return false;
		}
	}
	else if (iParam0 == 1)
	{
		if (PED::_0xBD0E4F52F6D95242(iParam1))
		{
			return false;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam1, 0))
		{
			if (PED::_IS_PED_USING_SCENARIO_HASH(iParam1, joaat("MINIGAME_DOMINOES_PLAYER")))
			{
				return true;
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			StringCopy(&cVar1, "mini_games@dominoes@enter_exit@player_0", 64);
			StringIntConCat(&cVar1, iVar0, 64);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, &cVar1, "player_00_idle", 1))
			{
				return true;
			}
			StringCopy(&cVar1, "mini_games@dominoes@game@player_0", 64);
			StringIntConCat(&cVar1, iVar0, 64);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, &cVar1, "player_00_idle", 1))
			{
				return true;
			}
			iVar0++;
		}
		if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam1))
		{
			return TASK::_GET_TASK_MOVE_NETWORK_ID(iParam1) == joaat("SCRIPT_MINI_GAME_DOMINOES");
		}
		return __LIB_1__::func_235(iParam1);
	}
	else if (iParam0 == 0)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam1, 0))
		{
			if (PED::_IS_PED_USING_SCENARIO_HASH(iParam1, joaat("MINIGAME_BLACKJACK_PLAYER")))
			{
				return true;
			}
		}
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, -1))
		{
			return true;
		}
		return __LIB_1__::func_235(iParam1);
	}
	return true;
}

bool func_287()
{
	return __LIB_1__::func_149(1) < 3;
}

void func_288(int iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_201(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;
	if (bParam2)
	{
		__LIB_0__::func_288(iParam0, 25, 1);
	}
}

void func_289()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = __LIB_1__::func_237(iVar0);
		iVar2 = __LIB_1__::func_237(iVar0 + 1);
		if (!__LIB_0__::func_31(iVar1))
		{
			if (__LIB_0__::func_31(iVar2))
			{
				Global_1359489[iVar0] = iVar2;
				Global_1359489[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

void func_290(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_903(iParam0))
	{
		return;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 87, bParam1);
	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(iVar0, __LIB_0__::func_323(iParam0));
		PED::_0x9238A3D970BBB0A9(iVar0, -1972074710);
		PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(iVar0);
		if (!__LIB_1__::func_238())
		{
			PED::_0x9A4AC116CC1EEE14(Global_35);
		}
	}
}

int func_291(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (__LIB_0__::func_252(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (__LIB_0__::func_273(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (__LIB_1__::func_25(Global_1347702[134 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (__LIB_1__::func_25(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (__LIB_1__::func_198(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = iVar1[iVar11];
	}
	if (!__LIB_1__::func_201(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

int func_292(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	if (__LIB_0__::func_272(iVar0, 0))
	{
		if (__LIB_0__::func_272(PED::_GET_RIDER_OF_MOUNT(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !__LIB_0__::func_211(iParam0)) || __LIB_0__::func_212(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && __LIB_0__::func_232(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = __LIB_0__::func_725(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					__LIB_0__::func_515(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(__LIB_1__::func_179(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_1__::func_179(iParam0, 0));
					__LIB_0__::func_233(iParam0);
				}
			}
			else
			{
				if (__LIB_0__::func_273(iParam0, 32768, 1))
				{
					iVar2 = __LIB_1__::func_179(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (__LIB_0__::func_273(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_515(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(__LIB_1__::func_179(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(__LIB_1__::func_179(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				__LIB_0__::func_515(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	__LIB_0__::func_234(iParam0, 0);
	return 1;
}

int func_293(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= __LIB_0__::func_388())
	{
		iVar2 = __LIB_0__::func_388();
	}
	iVar5 = __LIB_0__::func_389(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (__LIB_0__::func_9(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (__LIB_0__::func_9(iVar6) == 0)
			{
				return __LIB_1__::func_239(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (__LIB_0__::func_9(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (__LIB_0__::func_9(iVar6) == 0)
			{
				return __LIB_1__::func_239(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_498[iVar0 /*2*/] == 0)
			{
				return __LIB_1__::func_239(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_294(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (__LIB_1__::func_201(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

void func_295(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			__LIB_0__::func_517((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			__LIB_0__::func_517(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (__LIB_0__::func_6(Global_1898164.f_1[0 /*5*/]))
	{
		__LIB_1__::func_242(Global_1898164.f_1[0 /*5*/], 3);
	}
}

void func_296(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_1__::func_173(iParam0, bParam3);
	}
	else
	{
		__LIB_1__::func_174(iParam0, bParam3);
	}
	if (bParam2)
	{
		__LIB_1__::func_175(iParam0, bParam3);
	}
	else
	{
		__LIB_1__::func_176(iParam0, bParam3);
	}
}

void func_297(int iParam0)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_702(iParam0))
	{
		return;
	}
	__LIB_1__::func_242(iParam0, 2);
}

void func_298(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_241(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (__LIB_0__::func_299(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(__LIB_0__::func_700(iParam0), __LIB_0__::func_76(iParam0), __LIB_0__::func_872(iParam0), __LIB_0__::func_299(iParam0), Global_36);
		}
	}
	__LIB_1__::func_242(iParam0, 1);
	bParam1 = bParam1;
}

void func_299(bool bParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		__LIB_1__::func_240(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		__LIB_1__::func_240(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	__LIB_1__::func_91(1, bParam0, 1);
	__LIB_1__::func_244();
	Global_40.f_11095.f_43 = bParam0;
}

int func_300(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -160705043;
		case 5:
			return -726606177;
		case 26:
			return -49572609;
		case 38:
			return 417546980;
		case 69:
			return -117334654;
		case 76:
			return -357010019;
		case 78:
			return 719613628;
		case 92:
			return 1459616333;
		case 105:
			return 1607757565;
		case 115:
			return -161326102;
		case 120:
			return -1909997854;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return -1025871137;
		default:
			break;
	}
	return 0;
}

bool func_301(int iParam0)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_140 != 0 || Global_1360165[iParam0 /*1157*/].f_141 != 0)
	{
		return true;
	}
	return false;
}

bool func_302(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if ((Global_1360165[iParam0 /*1157*/].f_140 && iParam1) != 0)
	{
		return true;
	}
	if ((Global_1360165[iParam0 /*1157*/].f_141 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
		case 2:
		case 64:
			return 3;
		case 4:
		case 8:
		case 128:
			return 2;
		case 512:
			return 1;
		default:
			break;
	}
	return 0;
}

Vector3 func_304(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_1__::func_251(iParam1);
		case 1:
		case 2:
			return __LIB_1__::func_252(iParam1);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_305(int iParam0)
{
	if (!__LIB_1__::func_255(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_2() == 0)
	{
		return true;
	}
	return (!__LIB_0__::func_28() || MISC::IS_BIT_SET(Global_40.f_7856, iParam0));
}

int func_306(vector3 vParam0, int iParam3, float fParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	fVar2 = (fParam4 * 2f);
	__LIB_1__::func_266(&iVar0, vParam0, 0f, 0f, 0f, fVar2, fVar2, fVar2);
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar0))
	{
		return 0;
	}
	iVar5 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = ENTITY::_0x886171A12F400B89(iVar0, iVar5, 3);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar5));
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == iParam3)
			{
				ITEMSET::DESTROY_ITEMSET(iVar5);
				__LIB_0__::func_172(iVar0);
				if (bParam5)
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
					}
				}
				return iVar1;
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar5);
	__LIB_0__::func_172(iVar0);
	return 0;
}

bool func_307(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return __LIB_0__::func_287(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!__LIB_0__::func_272(__LIB_0__::func_271(iParam0), 0))
		{
			return false;
		}
	}
	if (!__LIB_1__::func_269(iParam0, 1, 0))
	{
		return false;
	}
	if (__LIB_0__::func_287(iParam0, 44, 1))
	{
		return false;
	}
	return true;
}

int func_308(int iParam0)
{
	if (__LIB_0__::func_139(Global_1392915.f_121[iParam0 /*20*/].f_3))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1744263063);
		__LIB_1__::func_281(&(Global_1392915.f_121[iParam0 /*20*/].f_3), 1, 0);
		Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
		return 1;
	}
	Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
	return 0;
}

void func_309(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	if (bParam1)
	{
	}
	if (__LIB_0__::func_72() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((__LIB_0__::func_35(iVar1) && !__LIB_1__::func_85(iVar1, iParam2)) && (!bParam3 || !__LIB_1__::func_271(iVar1))) && (!bParam4 || !__LIB_1__::func_86(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				__LIB_1__::func_135(iVar0);
			}
		}
		iVar0++;
	}
}

void func_310(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_3))
	{
		__LIB_1__::func_281(&(uParam0->f_3), 1, 0);
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_6 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
}

void func_311(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	__LIB_1__::func_256(uParam0, iParam6);
	__LIB_1__::func_257(uParam0, iParam5);
	__LIB_1__::func_279(uParam0, iParam4);
	__LIB_1__::func_258(uParam0, iParam3);
	__LIB_1__::func_259(uParam0, iParam2);
	__LIB_1__::func_260(uParam0, iParam1);
}

void func_312(bool bParam0)
{
	__LIB_1__::func_272(bParam0);
	__LIB_1__::func_273(bParam0);
	__LIB_1__::func_274(bParam0);
	__LIB_1__::func_275(bParam0);
	__LIB_1__::func_276(bParam0);
	__LIB_1__::func_277(bParam0);
	__LIB_1__::func_278(bParam0);
	__LIB_1__::func_218(bParam0);
}

bool func_313(var uParam0, float fParam1)
{
	if (__LIB_1__::func_285(uParam0, fParam1))
	{
		__LIB_0__::func_37(uParam0);
		return true;
	}
	return false;
}

bool func_314(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	fVar8 = (0.25f * 2f);
	if (!__LIB_1__::func_231(iParam0, vParam1, uParam4, iParam5, &vVar0, 1))
	{
		return false;
	}
	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar4))
	{
		return false;
	}
	vVar0.f_2 = (vVar0.z + 0.9f);
	__LIB_1__::func_216(&iVar5, vVar0, 0f, 0f, 0f, fVar8, fVar8, 1.8f);
	iVar6 = ENTITY::_0x886171A12F400B89(iVar5, iVar4, 1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar4));
		if (__LIB_1__::func_286(iParam0, iVar3) || iParam8 == 1)
		{
			if (iParam7 == 0 || (iParam7 == 1 && !PED::IS_PED_A_PLAYER(iVar3)))
			{
				__LIB_0__::func_172(iVar5);
				ITEMSET::_CLEAR_ITEMSET(iVar4);
				ITEMSET::DESTROY_ITEMSET(iVar4);
				*iParam6 = iVar3;
				return true;
			}
		}
		iVar7++;
	}
	__LIB_0__::func_172(iVar5);
	ITEMSET::_CLEAR_ITEMSET(iVar4);
	ITEMSET::DESTROY_ITEMSET(iVar4);
	return false;
}

int func_315(int iParam0)
{
	struct<5> Var0;
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { Var0 };
		return 1;
	}
	Global_1898164.f_1[iParam0 /*5*/] = { Var0 };
	Global_1898164.f_162 = (Global_1898164.f_162 - 1);
	__LIB_1__::func_295(iParam0, Global_1898164.f_162);
	return 1;
}

int func_316(int iParam0, int iParam1)
{
	if (iParam1 == joaat("HAI_BANK_ROBBERY_01"))
	{
		return __LIB_1__::func_293(0, __LIB_1__::func_215(iParam1, 1), 11, joaat("CABR01"));
	}
	return __LIB_1__::func_293(0, __LIB_1__::func_215(iParam1, 1), 11, iParam1);
}

int func_317(int iParam0, int iParam1)
{
	return __LIB_1__::func_293(iParam0, iParam1, 4, MISC::GET_HASH_KEY(__LIB_1__::func_83(iParam1)));
}

int func_318(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_327(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164.f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164.f_162;
	__LIB_1__::func_236(iParam0, iVar0);
	Global_1898164.f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
	{
		return iVar0;
	}
	__LIB_1__::func_295(iVar0, iParam1);
	return iParam1;
}

int func_319(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;
	if (Global_1898329 == 15)
	{
		return -1;
	}
	if (!__LIB_1__::func_241(iParam0))
	{
		return -1;
	}
	if (__LIB_0__::func_2() != -1)
	{
		iVar2 = __LIB_0__::func_80(iParam0);
		if (iVar2 >= 0)
		{
			__LIB_1__::func_298(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = Global_1898329;
			Global_1898330[iVar1] = iParam0;
			Global_1898346[iVar1 /*6*/] = { Var3 };
			__LIB_1__::func_130(iVar1, 1);
			__LIB_1__::func_298(iParam0, 1);
			Global_1898329++;
			if (Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = __LIB_0__::func_80(iParam0);
		if (iVar2 >= 0)
		{
			__LIB_1__::func_298(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Global_1898330)
			{
				if (!__LIB_0__::func_6(Global_1898330[iVar0]))
				{
					Global_1898330[iVar0] = iParam0;
					Global_1898346[iVar0 /*6*/] = { Var3 };
					__LIB_1__::func_130(iVar0, 1);
					__LIB_1__::func_298(iParam0, 1);
					Global_1898329++;
					if (Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

void func_320(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_66)
	{
		if ((__LIB_0__::func_755(&(uParam0->f_66[iVar0 /*16*/]), 1048576) && __LIB_0__::func_755(&(uParam0->f_66[iVar0 /*16*/]), 4)) && !__LIB_0__::func_755(&(uParam0->f_66[iVar0 /*16*/]), 1))
		{
			AUDIO::PREPARE_MUSIC_EVENT(&(uParam0->f_66[iVar0 /*16*/]));
			return;
		}
		iVar0++;
	}
}

bool func_321(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((__LIB_0__::func_755(uParam0[iVar0 /*16*/], 1048576) && MISC::ARE_STRINGS_EQUAL(uParam0[iVar0 /*16*/], sParam1)) && (uParam0[iVar0 /*16*/])->f_9 == sParam1->f_9) && (uParam0[iVar0 /*16*/])->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_322(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::_0x1ECC76792F661CF5(sParam0))
	{
		return true;
	}
	return false;
}

void func_323(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514.f_2), sParam0, 32);
	Global_1879514.f_8 = iParam1;
}

void func_324(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(MISC::_CREATE_VAR_STRING(2, sParam0));
}

bool func_325()
{
	return UILOG::_UILOG_HAS_DISPLAYED_CACHED_OBJECTIVE();
}

void func_326(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_WHISTLE_ANIM(iParam0, iParam1, iParam2);
}

bool func_327(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;
	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

int func_328(var uParam0, int iParam1)
{
	int iVar0;
	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_329(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_330()
{
	if (Global_1935630.f_42 == 0)
	{
		return false;
	}
	if (Global_1935630.f_42 == Global_1935630.f_40)
	{
		return false;
	}
	if (Global_1935630.f_43 <= 0)
	{
		return false;
	}
	if ((__LIB_0__::func_485() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_331(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = __LIB_0__::func_485();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_332(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

bool func_333(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630.f_40 == iVar1)
	{
		return true;
	}
	return false;
}

int func_334(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_120(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
}

bool func_335(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_336(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

char* func_337()
{
	return UILOG::_UILOG_GET_CACHED_OBJECTIVE();
}

void func_338(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
		}
	}
}

bool func_339(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_340(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (__LIB_0__::func_724(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_341(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_724(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_342(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_724(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_343(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_724(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

Vector3 func_344(char* sParam0)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_345()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_346(int iParam0)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_117(iParam0, 2))
	{
		return false;
	}
	return true;
}

var func_347(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

float func_348(int iParam0, int iParam1)
{
	return __LIB_0__::func_665(iParam0, iParam1, 1, 1);
}

float func_349(var uParam0)
{
	return uParam0->f_26;
}

void func_350(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 134217728);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 134217728);
	}
}

float func_351(var uParam0)
{
	return uParam0->f_17;
}

int func_352(var uParam0)
{
	return uParam0->f_18;
}

float func_353(var uParam0)
{
	return uParam0->f_23;
}

int func_354(var uParam0)
{
	return uParam0->f_21;
}

int func_355(var uParam0)
{
	int iVar0;
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_356(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_357(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_358(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (__LIB_0__::func_399(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_359(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_360(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_361(var uParam0)
{
	return uParam0->f_24;
}

int func_362(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_363(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

bool func_364(var uParam0, int iParam1)
{
	int iVar0;
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

int func_365(var uParam0)
{
	return uParam0->f_20;
}

int func_366(int iParam0, var uParam1, bool bParam2, float fParam3)
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
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_367(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

void func_368(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 1);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 1);
	}
}

void func_369(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_370(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*iParam1 = Global_1935630.f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::_IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*iParam2 = Global_1935630.f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

void func_371(var uParam0)
{
	int iVar0;
	if (Global_1935630.f_38 == 0)
	{
		__LIB_0__::func_8(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					__LIB_0__::func_7(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_372(int iParam0, int iParam1)
{
	var uVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_373(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_374(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_375(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
			{
				if (WEAPON::_IS_WEAPON_MELEE(Global_1935630.f_44) || Global_1935630.f_44 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630.f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_376(int iParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
	{
		return true;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

char* func_377(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_223(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return __LIB_1__::func_72(iVar0);
}

bool func_378(vector3 vParam0, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Global_35, vParam0, 1);
	if (fVar0 < fParam4 && bParam5)
	{
		return true;
	}
	if (fVar0 > (fParam3 + fParam6))
	{
		return true;
	}
	return false;
}

bool func_379(float fParam0, float fParam1)
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam0;
	}
	return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam1;
}

bool func_380()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_41(__LIB_0__::func_23());
	iVar1 = __LIB_0__::func_42(__LIB_0__::func_23());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_381()
{
	switch (Global_1935630.f_44)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
			return true;
		default:
			break;
	}
	return false;
}

void func_382(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (bParam2 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	__LIB_0__::func_629(iVar0, bParam1);
}

bool func_383()
{
	if (((((((((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_VEH_ACCELERATE"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_VEH_CAR_ACCELERATE"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_SPRINT"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MELEE_ATTACK"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_JUMP"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_JUMP"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MELEE_BLOCK"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_RELOAD"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ENTER"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_DYNAMIC_SCENARIO"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_EXIT")))
	{
		return true;
	}
	return false;
}

Vector3 func_384(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return __LIB_0__::func_173((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

var func_385(var uParam0)
{
	return uParam0->f_25;
}

void func_386(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
	*iParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
	*iParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
}

bool func_387(var uParam0, var uParam1, int iParam2)
{
	if (__LIB_0__::func_755(uParam1, 1))
	{
		return false;
	}
	switch (__LIB_0__::func_773(uParam1))
	{
		case 0:
			return iParam2 >= 0;
		case 1:
			return uParam1->f_11 == iParam2;
		case 3:
			return uParam0->f_14 == 1;
		case 2:
			return uParam0->f_14 == 2;
	}
	return false;
}

bool func_388(char* sParam0, bool bParam1)
{
	if (__LIB_0__::func_755(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sParam0);
		__LIB_0__::func_324(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			__LIB_0__::func_324(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			__LIB_0__::func_324(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, true);
			__LIB_0__::func_324(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			AUDIO::SET_AUDIO_FLAG(sParam0, false);
			__LIB_0__::func_324(sParam0, 1);
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
		__LIB_0__::func_324(sParam0, 1);
		return true;
	}
	__LIB_0__::func_324(sParam0, 1);
	return false;
}

bool func_389(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	bool bVar0;
	if (iParam2 == -1)
	{
		if (__LIB_0__::func_765(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (__LIB_0__::func_765(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (__LIB_0__::func_765(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (__LIB_0__::func_765(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (__LIB_0__::func_765(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (__LIB_0__::func_765(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (__LIB_0__::func_765(uParam0, 5, iParam4))
	{
		cParam3->f_9 = *iParam4;
	}
	if (*iParam5 == 1 || *iParam5 == 3)
	{
		if (iParam1 == 0)
		{
			if ((cParam3->f_9 == 7 || cParam3->f_9 == 8) || cParam3->f_9 == 9)
			{
				bVar0 = true;
			}
		}
		else if (iParam1 == 1 || iParam1 == 2)
		{
			if (cParam3->f_9 == 3 || cParam3->f_9 == 5)
			{
				bVar0 = true;
			}
		}
		if ((bVar0 && !uParam0->f_272) || (!bVar0 && cParam3->f_11 == iParam2))
		{
			if (__LIB_0__::func_765(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (__LIB_0__::func_765(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

void func_390(char* sParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	Var0.f_1 = sParam0;
	iVar2 = UIFEED::_0x4E88A65968A55C78(&Var0, iParam1);
	if (__LIB_0__::func_30(iVar2))
	{
		UIFEED::_0x2F901291EF177B02(iVar2, 0);
	}
}

var func_391(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return uVar0;
	}
	__LIB_0__::func_566(iParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_392(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 1024);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 1024);
	}
}

void func_393(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 256);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 256);
	}
}

int func_394(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return __LIB_0__::func_483(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1225639.f_10)
		{
			if (!Global_1225639.f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
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
				return 1;
			}
		}
	}
	return 0;
}

bool func_395(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = __LIB_0__::func_485();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

void func_396(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_8(&(uParam0->f_1), 128);
	}
	else
	{
		__LIB_0__::func_7(&(uParam0->f_1), 128);
	}
}

void func_397(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 4);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 4);
	}
}

void func_398(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_8(&(uParam0->f_1), 256);
	}
	else
	{
		__LIB_0__::func_7(&(uParam0->f_1), 256);
	}
}

void func_399(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_8(&(uParam0->f_1), 131072);
	}
	else
	{
		__LIB_0__::func_7(&(uParam0->f_1), 131072);
	}
}

void func_400(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 512);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 512);
	}
}

void func_401(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_8(&(uParam0->f_1), 4);
	}
	else
	{
		__LIB_0__::func_7(&(uParam0->f_1), 4);
	}
}

void func_402(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_8(&(uParam0->f_1), 8);
	}
	else
	{
		__LIB_0__::func_7(&(uParam0->f_1), 8);
	}
}

void func_403(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_8(&(uParam0->f_1), 16384);
	}
	else
	{
		__LIB_0__::func_7(&(uParam0->f_1), 16384);
	}
}

void func_404(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 8);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 8);
	}
}

void func_405(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 32);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 32);
	}
}

void func_406(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 16);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 67108864);
		__LIB_0__::func_8(uParam0, 16);
	}
}

void func_407(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 64);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 64);
	}
}

void func_408(int iParam0, bool bParam1, bool bParam2)
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
			break;
		case 932909855:
			__LIB_0__::func_803(932909855);
			__LIB_0__::func_804(2051822093);
			break;
		case 2051822093:
			__LIB_0__::func_803(2051822093);
			__LIB_0__::func_804(932909855);
			break;
		case 405586984:
			__LIB_0__::func_803(405586984);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			break;
		case 1509509592:
			__LIB_0__::func_803(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			break;
		case -959357075:
			__LIB_0__::func_803(-959357075);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-1311865656);
			break;
		case -1311865656:
			__LIB_0__::func_803(-1311865656);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(405586984);
			break;
		case -524145696:
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
			break;
		case 282809459:
			__LIB_0__::func_803(282809459);
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(-524145696);
			break;
		case 1626481264:
			__LIB_0__::func_803(1626481264);
			__LIB_0__::func_804(-524145696);
			__LIB_0__::func_804(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				__LIB_0__::func_803(885203519);
			}
			else
			{
				__LIB_0__::func_804(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				__LIB_0__::func_803(-1080627546);
			}
			else
			{
				__LIB_0__::func_804(-1080627546);
			}
			break;
		default:
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
			break;
	}
}

void func_409(int iParam0)
{
	if (!__LIB_0__::func_448(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

bool func_410(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return __LIB_0__::func_62(vParam0, vParam3) <= (fParam6 * fParam6);
}

bool func_411(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_858(iParam0, 256))
	{
		return true;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!__LIB_0__::func_272(iParam1, iVar0))
	{
		return false;
	}
	PED::_SET_PED_BODY_COMPONENT(iParam1, __LIB_0__::func_859(iParam0));
	PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
	__LIB_0__::func_213(iParam0, 256, 1);
	return true;
}

void func_412(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		__LIB_0__::func_663(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_413(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_8(&(uParam0->f_1), 2048);
	}
	else
	{
		__LIB_0__::func_7(&(uParam0->f_1), 2048);
	}
}

void func_414(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (__LIB_0__::func_84(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4) && !__LIB_0__::func_138(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, __LIB_0__::func_93());
		__LIB_0__::func_88(uParam0, 8);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		__LIB_0__::func_570(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		__LIB_0__::func_88(uParam0, 16);
	}
}

int func_415(int iParam0, var uParam1)
{
	var uVar0;
	struct<2> Var1;
	int iVar8;
	iVar8 = 0;
	if (!__LIB_1__::func_87(iParam0, __LIB_0__::func_241()))
	{
		return 0;
	}
	Var1 = __LIB_0__::func_790(__LIB_0__::func_241());
	Var1.f_1 = iParam0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var1, joaat("COMPONENT")))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

bool func_416(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;
	if (!__LIB_1__::func_127(iParam0))
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
	if (!__LIB_0__::func_849(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_850(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

void func_417(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 10;
	if (__LIB_0__::func_555(1108822547, 6))
	{
		if (bParam2)
		{
			__LIB_1__::func_139(iParam0, iVar0, __LIB_0__::func_2() != -1, 0, 0);
			__LIB_0__::func_556(1108822547, 1, 6);
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

bool func_418(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	if (__LIB_0__::func_797(iParam1) && !__LIB_1__::func_52(iParam1))
	{
		iVar0 = __LIB_0__::func_398(iParam1);
	}
	else
	{
		return false;
	}
	__LIB_0__::func_576(uParam3);
	iVar5 = __LIB_0__::func_574(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		return false;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*iParam0);
	return true;
}

bool func_419(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
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
						*uParam1 = { Var16 };
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

void func_420(bool bParam0)
{
	int iVar0;
	struct<16> Var1;
	if (__LIB_0__::func_30(Global_1935630.f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = __LIB_0__::func_328();
	Var1.f_3.f_3 = iVar0;
	if ((!__LIB_0__::func_905(Global_1347343.f_2) && !__LIB_0__::func_1(Global_1347343.f_11, 64)) || __LIB_0__::func_13(32768))
	{
		Var1.f_7 = __LIB_0__::func_329();
		Var1.f_7.f_3 = iVar0;
	}
	if (!__LIB_0__::func_1(Global_1347343.f_11, 1024) && !__LIB_0__::func_13(32768))
	{
		Var1.f_11 = __LIB_0__::func_330();
		Var1.f_11.f_3 = iVar0;
	}
	if (__LIB_0__::func_1(Global_1347343.f_11, 8))
	{
		Var1.f_15 = __LIB_0__::func_331();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343.f_1 != 2)
	{
		Global_1935630.f_3 = __LIB_0__::func_332(&Var1, "REPLAY_T", &(Global_1347343.f_3), 0, 1);
	}
	else
	{
		Global_1935630.f_3 = __LIB_0__::func_333(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	__LIB_0__::func_7(&(Global_1347343.f_11), 1073741824 /* Float: 2f */);
	if (bParam0)
	{
		__LIB_0__::func_7(&(Global_1347343.f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

int func_421(bool bParam0, int iParam1)
{
	int iVar0;
	if (!bParam0 && __LIB_0__::func_898(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN")) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN")) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), iVar0);
	__LIB_1__::func_142(bParam0);
	return 1;
}

var func_422(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;
	if (bParam2)
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return __LIB_0__::func_565(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = __LIB_0__::func_958(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return __LIB_0__::func_565(sVar0, iParam1, 0, 0, 1, 1);
}

int func_423()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_933(Global_1347702[9 /*49*/].f_15);
	iVar1 = __LIB_0__::func_933(Global_1835011[69 /*74*/].f_1);
	if (__LIB_1__::func_110(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

void func_424(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_378(iParam0, &iVar0, &iVar1);
	if (!__LIB_1__::func_102(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!__LIB_0__::func_447(iParam0, 1024))
	{
		return;
	}
	__LIB_0__::func_379(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_425(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_378(iParam0, &iVar0, &iVar1);
	if (!__LIB_1__::func_102(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!__LIB_0__::func_447(iParam0, 1024))
	{
		return;
	}
	__LIB_0__::func_379(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

bool func_426(int iParam0, bool bParam1)
{
	return __LIB_1__::func_110(__LIB_0__::func_23(), iParam0, bParam1);
}

void func_427(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bVar3 = false;
	if (__LIB_0__::func_960(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (__LIB_0__::func_961(iVar5, &iVar2, &iVar0))
			{
				if (!__LIB_0__::func_144(iVar2, 0))
				{
				}
				else
				{
					iVar1 = __LIB_0__::func_17(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (__LIB_0__::func_356(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = __LIB_0__::func_786() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = __LIB_0__::func_786() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == __LIB_1__::func_71();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

int func_428(int iParam0, bool bParam1)
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
	if (!__LIB_0__::func_801(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	__LIB_0__::func_238(iVar14);
	return uVar15;
}

bool func_429(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	if (__LIB_1__::func_280(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

void func_430(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (__LIB_0__::func_472())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			__LIB_0__::func_967(iVar0);
			__LIB_1__::func_121(iVar0, 0, 0);
		}
		__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_431(int iParam0, bool bParam1)
{
	return __LIB_1__::func_169(iParam0, 0) < __LIB_0__::func_551(iParam0, bParam1);
}

void func_432(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	__LIB_0__::func_974(iParam0);
	if (bParam3)
	{
		__LIB_1__::func_103(iParam0, sParam1, iParam2);
	}
}

bool func_433(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	Var0 = { __LIB_0__::func_523(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		__LIB_0__::func_524(&Var0, __LIB_1__::func_117(0));
	}
	if (!__LIB_0__::func_801(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!__LIB_0__::func_236(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (__LIB_0__::func_939(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	__LIB_0__::func_238(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

void func_434(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_725(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		__LIB_0__::func_854(__LIB_0__::func_177(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		__LIB_0__::func_983(iParam0);
	}
	else
	{
		__LIB_0__::func_984(iParam0);
	}
	if (bParam2)
	{
		__LIB_0__::func_986(iParam0);
	}
	else
	{
		__LIB_0__::func_987(iParam0);
	}
}

char* func_435(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return __LIB_0__::func_731(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return __LIB_0__::func_743(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return __LIB_0__::func_209(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

void func_436()
{
	struct<4> Var0;
	Global_1946804.f_858 = (Global_1946804.f_858 - 1);
	if (Global_1946804.f_858 <= 0)
	{
		Var0 = 35;
		__LIB_0__::func_726(Var0);
	}
}

int func_437(int iParam0)
{
	return __LIB_1__::func_133(iParam0, -1);
}

Vector3 func_438()
{
	if (__LIB_1__::func_185(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (__LIB_1__::func_185(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

bool func_439(int iParam0, int iParam1)
{
	struct<4> Var0;
	if (!__LIB_1__::func_131(856287005, iParam0))
	{
		return false;
	}
	Var0 = { __LIB_1__::func_124() };
	*iParam1 = __LIB_1__::func_81(Var0, iParam0, 0);
	if (!__LIB_0__::func_144(*iParam1, 0))
	{
		return false;
	}
	return true;
}

Vector3 func_440(int iParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_5(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (__LIB_1__::func_137(iParam0, &vVar0))
	{
		Global_1347702[iParam0 /*49*/].f_24 = { vVar0 };
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

bool func_441()
{
	if (__LIB_1__::func_185(43) && !__LIB_1__::func_185(44))
	{
		return false;
	}
	if (__LIB_1__::func_185(67) && __LIB_0__::func_317() != 8)
	{
		return false;
	}
	return true;
}

void func_442(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
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
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		__LIB_1__::func_178(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	__LIB_1__::func_17(iParam1);
	iVar5 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

void func_443(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == __LIB_0__::func_659()) || bParam5)
		{
			__LIB_0__::func_693();
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && __LIB_1__::func_99(Global_1946804.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = __LIB_0__::func_223(Global_40.f_7729);
				Global_1946804.f_1378 = __LIB_0__::func_223(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = __LIB_0__::func_846(iVar0);
	}
	if (iParam3 && iVar1)
	{
		__LIB_1__::func_42(iParam0, 0, 6);
	}
	if (bParam1)
	{
		__LIB_0__::func_719(0, 1);
	}
	__LIB_0__::func_245(0);
}

int func_444(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> Var0;
	int iVar14;
	int iVar15;
	struct<16> Var16;
	int iVar32;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (__LIB_0__::func_639(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = __LIB_0__::func_800(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { __LIB_0__::func_662(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = __LIB_1__::func_190(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

int func_445(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	struct<16> Var28;
	struct<16> Var44;
	int iVar60;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	if (__LIB_0__::func_639(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param0, &Var0, 1, 0) || !__LIB_0__::func_464(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (__LIB_0__::func_639(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { __LIB_0__::func_662(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { __LIB_0__::func_662(&Var14) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || iParam8);
	iVar60 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar60, joaat("BASKET"), 1168099063))
		{
			if (UNK_0x3745C002F5A21C45(iVar60, &Var28, 16) && UNK_0x3745C002F5A21C45(iVar60, &Var44, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar60))
				{
					__LIB_1__::func_19(iVar60, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar60 = __LIB_1__::func_190(1168099063, &Var28, 0);
		iVar60 = __LIB_1__::func_190(1168099063, &Var44, 0);
	}
	return iVar60;
}

void func_446(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_0__::func_710(*iParam0);
	iVar1 = __LIB_0__::func_39(*iParam0);
	iVar2 = __LIB_0__::func_40(*iParam0);
	iVar3 = __LIB_0__::func_41(*iParam0);
	iVar4 = __LIB_0__::func_42(*iParam0);
	iVar5 = __LIB_0__::func_43(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = __LIB_0__::func_44(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = __LIB_0__::func_44(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	__LIB_1__::func_159(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_447(vector3 vParam0, int iParam3)
{
	int iVar0;
	iVar0 = __LIB_0__::func_12();
	if (__LIB_0__::func_20(iVar0))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return __LIB_1__::func_161(vParam0, iParam3);
}

void func_448(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((bParam5 < 0f || bParam6 < 0f) || bParam7 < 0f) || bParam8 < 0f)
	{
		return;
	}
	if (((((!bParam5 > bParam6 || !bParam5 > bParam7) || !bParam5 > bParam8) || !bParam6 > bParam7) || !bParam6 > bParam8) || !bParam7 > bParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar3 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((__LIB_1__::func_38() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam6 && bVar3 > bParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (bParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (bParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (bVar3 <= bParam8)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

int func_449(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			__LIB_1__::func_152(&(Global_40.f_4283.f_6[iVar0 /*5*/]), bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_450(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
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
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(39) || __LIB_1__::func_154(39)))
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
			if (__LIB_0__::func_28() && (__LIB_1__::func_200(49) || __LIB_1__::func_154(49)))
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
		if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
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
		if (__LIB_0__::func_28() && (__LIB_1__::func_200(39) || __LIB_1__::func_154(39)))
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
		if (__LIB_0__::func_28() && (__LIB_1__::func_200(49) || __LIB_1__::func_154(49)))
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

int func_451(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;
	Var4.f_1 = 10;
	__LIB_0__::func_452(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return __LIB_1__::func_170(iParam0, &Var4, &uVar0, iParam1);
}

void func_452(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	if (bParam4)
	{
		__LIB_0__::func_155(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	__LIB_1__::func_171(Var0);
}

void func_453(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	if (PED::IS_PED_GROUP_MEMBER(iVar0, iVar1, 0))
	{
		return;
	}
	COMPANION::_0xCBD9EC60495C728C(__LIB_0__::func_110());
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(iVar0, iVar1);
	if (bParam1)
	{
		__LIB_1__::func_290(iParam0, 1, Global_35);
	}
}

void func_454(int iParam0, bool bParam1, int iParam2)
{
	__LIB_1__::func_180((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_1.f_2.f_1, iParam0);
	__LIB_0__::func_521(iParam0);
}

void func_455(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
				Jump @1415; //curOff = 525
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
				Jump @1415; //curOff = 656
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
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
				Jump @1415; //curOff = 786
				__LIB_1__::func_184(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
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
				Jump @1415; //curOff = 1130
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
				Jump @1415; //curOff = 1228
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

int func_456(bool bParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = __LIB_0__::func_28();
	bVar1 = false;
	if (bVar0 && !__LIB_1__::func_185(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && __LIB_1__::func_185(37)) && !__LIB_1__::func_185(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && __LIB_1__::func_185(43)) && !__LIB_1__::func_185(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*bParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (__LIB_0__::func_815(0) == 1)
		{
			*bParam0 = 1;
		}
		if (__LIB_0__::func_815(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*bParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

void func_457(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, __LIB_0__::func_666(__LIB_1__::func_191(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (__LIB_0__::func_113())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		__LIB_0__::func_181();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_458(var uParam0, bool bParam1)
{
	char* sVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, __LIB_0__::func_666(__LIB_1__::func_191(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (__LIB_0__::func_113())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (__LIB_0__::func_181())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

void func_459(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_616(iParam1);
	__LIB_0__::func_617(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		__LIB_1__::func_186(&(uParam0->f_26), iVar1);
		if (__LIB_0__::func_618(uParam0->f_26, &iVar0))
		{
			__LIB_0__::func_619(iVar0, iVar1);
		}
	}
}

bool func_460(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	__LIB_0__::func_720(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1563492982;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar6 = __LIB_0__::func_623(iVar5);
			if (__LIB_1__::func_185(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 1975530226;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar6 = __LIB_0__::func_623(iVar5);
			if (!__LIB_1__::func_185(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 108838230;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar7 = __LIB_0__::func_624(iVar5);
			if (__LIB_1__::func_187(iVar7))
			{
				return false;
			}
		}
		Var0.f_2 = 181294442;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar7 = __LIB_0__::func_624(iVar5);
			if (!__LIB_1__::func_187(iVar7))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_461(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;
	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = __LIB_0__::func_356(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { __LIB_1__::func_11(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = __LIB_1__::func_188(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var44 = { __LIB_1__::func_12(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = __LIB_1__::func_189(joaat("UPDATE"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { __LIB_0__::func_662(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = __LIB_1__::func_190(joaat("UPDATE"), &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

void func_462(int iParam0)
{
	int iVar0;
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_IN_GROUP(iVar0))
	{
		return;
	}
	if (PED::GET_PED_GROUP_INDEX(iVar0) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (PED::_0x917760CFE7A0E0F1(iVar0))
	{
		COMPANION::_0xD747979C053EFA7A(__LIB_0__::func_110());
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, false);
	PED::REMOVE_PED_FROM_GROUP(iVar0);
	__LIB_1__::func_290(iParam0, 0, 0);
}

void func_463(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
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
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			__LIB_0__::func_213(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			__LIB_0__::func_288(iParam1, 43, 1);
		}
		if (bParam4)
		{
			__LIB_1__::func_292(iParam1, 0, 1, 1, 1);
		}
	}
}

char* func_464(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((__LIB_1__::func_25(Global_1835011[59 /*74*/].f_1, 1) || __LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1)) || __LIB_1__::func_44(Global_1347702[1 /*49*/].f_15))
			{
				return "COMP_RUFUS";
			}
			else if (__LIB_1__::func_198(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_465(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 == 1)
	{
		__LIB_1__::func_33(iParam0, 0);
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
		__LIB_1__::func_199(1);
		Global_40.f_11922[0] = iParam0;
	}
}

bool func_466(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("DEF_COMP_BRAIN"));
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				return false;
			}
			if (Global_1359489.f_9 != -1)
			{
				return false;
			}
			Global_1359489.f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = __LIB_1__::func_291(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (__LIB_0__::func_702(Global_1360165[iParam0 /*1157*/].f_4.f_2) || __LIB_1__::func_44(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = __LIB_1__::func_291(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && __LIB_0__::func_228(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!__LIB_0__::func_959(iParam0, 0))
					{
						__LIB_0__::func_288(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { __LIB_0__::func_229(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
			if (!bParam6)
			{
				__LIB_0__::func_290(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!__LIB_0__::func_272(__LIB_0__::func_271(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
				{
					return false;
				}
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_467(bool bParam0, bool bParam1, bool bParam2)
{
	__LIB_1__::func_203(&(Global_1946804.f_2589), bParam0, bParam1, bParam2);
}

int func_468(int iParam0, int iParam1)
{
	int iVar0;
	switch (iParam0)
	{
		case 178615350:
			return joaat("META_OUTFIT_COLD_WEATHER");
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return joaat("META_OUTFIT_WARM_WEATHER_CASUAL");
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return joaat("META_OUTFIT_KIDNAPPED");
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return joaat("META_OUTFIT_DEFAULT");
				default:
					break;
			}
			return joaat("META_OUTFIT_WARM_WEATHER");
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = __LIB_1__::func_294(296923297, iParam1);
			return __LIB_0__::func_253(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = __LIB_1__::func_294(1237718549, iParam1);
			return __LIB_0__::func_253(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return joaat("META_OUTFIT_DEFAULT");
	}
	return joaat("META_OUTFIT_DEFAULT");
}

Vector3 func_469(int iParam0)
{
	return __LIB_1__::func_204(iParam0);
}

int func_470(int iParam0)
{
	return __LIB_1__::func_315(__LIB_0__::func_327(iParam0));
}

void func_471(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_472(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = __LIB_0__::func_94(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_473(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	TASK::_TASK_START_SCENARIO_IN_PLACE(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

void func_474(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

float func_475(var uParam0)
{
	return uParam0->f_147;
}

void func_476(var uParam0)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_174[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &(uParam0->f_174[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_156, &(uParam0->f_174[iVar0 /*9*/]))))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_156, &(uParam0->f_174[iVar0 /*9*/]));
		}
		uParam0->f_174[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_477(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_156))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_156);
	}
}

float func_478(var uParam0)
{
	return uParam0->f_146;
}

struct<8> func_479(var uParam0)
{
	return uParam0->f_158;
}

void func_480(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 297, false);
	}
}

void func_481(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_158), sParam1, 64);
}

bool func_482(int iParam0, var uParam1)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_771(iParam0);
	return (*uParam1 && iVar0) != 0;
}

void func_483(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	if (bParam3 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_484(int iParam0, char* sParam1, bool bParam2)
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
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

struct<4> func_485(var uParam0)
{
	return uParam0->f_152;
}

struct<8> func_486(var uParam0)
{
	return uParam0->f_166;
}

void func_487(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

void func_488(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_489(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_490(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_491(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_492(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_493(var uParam0, char* sParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_13[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

void func_494(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 11)
	{
		if (uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_495(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_496()
{
	int iVar0;
	iVar0 = __LIB_0__::func_61();
	switch (iVar0)
	{
		case 79:
			return 50f;
		case 58:
			return 50f;
		case 71:
			return 50f;
		case 43:
			return 50f;
		case 4:
			return 50f;
		case 9:
			return 50f;
		case 22:
			return 120f;
		case 98:
			return 60f;
		case 37:
			return 120f;
	}
	return 25f;
}

void func_497(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_156, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_156, sParam1, iParam2, iParam3);
}

int func_498(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_499()
{
	return Global_1357517;
}

bool func_500(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_501(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_502(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_503(var uParam0, int iParam1)
{
	return (uParam0->f_151 && iParam1) != 0;
}

int func_504(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_156, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_156) * 1000f));
}

int func_505(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_156, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_156) * 1000f));
}

bool func_506(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
	{
		return true;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_156, 0))
	{
		if (__LIB_0__::func_84(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_156) && __LIB_0__::func_84(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

float func_507(vector3 vParam0, vector3 vParam3)
{
	float fVar0;
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

int func_508(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

int func_509(int iParam0)
{
	int iVar0;
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 3;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 2;
		case joaat("REL_GANG_ODRISCOLL"):
			return 0;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 1;
		case joaat("REL_GANG_LARAMIE_GANG"):
			return 4;
		case joaat("REL_GANG_SMUGGLERS"):
			return 5;
		default:
			break;
	}
	return -1;
}

bool func_510(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_511(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_512(int iParam0, int iParam1)
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
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_513(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_514(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_515(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_516()
{
	return Global_1946804.f_2792;
}

void func_517(var uParam0, char[16] cParam1)
{
	uParam0->f_152 = { cParam1 };
}

Vector3 func_518(var uParam0)
{
	return uParam0->f_214;
}

void func_519(var uParam0, vector3 vParam1)
{
	uParam0->f_214 = { vParam1 };
}

void func_520(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		uParam0->f_13[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_521(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		__LIB_0__::func_159(&(uParam0->f_13[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

void func_522(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (bParam3 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_523(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;
	if (bParam4 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

Vector3 func_524(var uParam0)
{
	return uParam0->f_217;
}

float func_525(var uParam0)
{
	return uParam0->f_220;
}

bool func_526(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_527(var uParam0)
{
	struct<8> Var0;
	uParam0->f_166 = { Var0 };
}

void func_528(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_174[iVar0 /*9*/]), "", 64);
		iVar0++;
	}
}

bool func_529()
{
	int iVar0;
	iVar0 = Global_1946804.f_529[9];
	iVar0 = (iVar0 + Global_1946804.f_529[4]);
	iVar0 = (iVar0 + Global_1946804.f_529[10]);
	iVar0 = (iVar0 + Global_1946804.f_529[1]);
	iVar0 = (iVar0 + Global_1946804.f_529[2]);
	iVar0 = (iVar0 + Global_1946804.f_529[6]);
	iVar0 = (iVar0 + Global_1946804.f_529[29]);
	iVar0 = (iVar0 + Global_1946804.f_529[26]);
	iVar0 = (iVar0 + Global_1946804.f_529[18]);
	iVar0 = (iVar0 + Global_1946804.f_529[19]);
	return iVar0 > 0;
}

bool func_530(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, Global_1945938[iVar0 /*18*/].f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_531(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (!__LIB_1__::func_301(iParam0))
	{
		return false;
	}
	if (__LIB_1__::func_302(iParam0, -2147483648))
	{
		return true;
	}
	if (__LIB_1__::func_302(iParam0, 1073741824 /* Float: 2f */))
	{
		return true;
	}
	iVar0 = __LIB_1__::func_303(iParam1);
	if (iVar0 < Global_1360165[iParam0 /*1157*/].f_22)
	{
		return true;
	}
	if (iVar0 == Global_1360165[iParam0 /*1157*/].f_22)
	{
		if (bParam2)
		{
			return true;
		}
		if (!__LIB_1__::func_302(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_532(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	__LIB_0__::func_397(iParam0, iParam1);
}

bool func_533(int iParam0)
{
	switch (__LIB_0__::func_2())
	{
		case -1:
			return (Global_1357549.f_1495 && iParam0) != 0;
	}
	return false;
}

void func_534(var uParam0, char* sParam1)
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
			MemCopy(&(uParam0->f_152), {__LIB_0__::func_98("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_152), {__LIB_0__::func_98("cutscene@", sParam1, 1, 63)}, 4);
	}
	__LIB_0__::func_88(uParam0, 8192);
}

bool func_535(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_858(iParam0, 256))
	{
		return true;
	}
	if (!__LIB_0__::func_272(iParam1, 256))
	{
		return false;
	}
	PED::_0xA2F8B3B5FEDFC100(iParam1, __LIB_0__::func_859(iParam0));
	PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
	__LIB_0__::func_213(iParam0, 256, 0);
	return true;
}

void func_536(var uParam0)
{
	int iVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_537(int iParam0)
{
	if (__LIB_0__::func_27(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), true);
	}
	if (__LIB_0__::func_27(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (__LIB_0__::func_27(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

void func_538(bool bParam0)
{
	if (bParam0)
	{
		__LIB_0__::func_635(4);
	}
	__LIB_0__::func_635(2);
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

void func_539()
{
	CAM::_0x88544C0E3291DCAE(1);
	__LIB_1__::func_345();
}

bool func_540(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1) && __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_541(var uParam0, int iParam1)
{
	if (__LIB_0__::func_84(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_156, "ExportCamera") && iParam1)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_156))
	{
		__LIB_0__::func_88(uParam0, 262144);
		__LIB_0__::func_106(uParam0, 1);
		return true;
	}
	return false;
}

bool func_542(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return __LIB_0__::func_800(iParam0, *uParam1, iParam2, iParam3) > 0;
}

int func_543(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!__LIB_0__::func_258(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_544(int iParam0)
{
	vector3 vVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	__LIB_1__::func_222(vVar0, 0);
}

int func_545(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	__LIB_1__::func_412(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

Vector3 func_546(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return __LIB_1__::func_438();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_547(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(iParam0, "HorseCompanion", true);
	__LIB_0__::func_663(iParam0, __LIB_1__::func_20(iParam1));
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

int func_548(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_161(__LIB_0__::func_997(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_549(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_161(__LIB_0__::func_997(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (__LIB_0__::func_357(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

void func_550(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			__LIB_1__::func_139(iParam1, 29, bVar4, 1, 0);
			__LIB_1__::func_139(iParam1, 31, bVar4, 1, 0);
			__LIB_1__::func_139(iParam1, 30, bVar4, 1, 0);
			__LIB_1__::func_139(iParam1, 22, bVar4, 1, 0);
			__LIB_1__::func_139(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((__LIB_0__::func_156(32768) && __LIB_0__::func_555(1108822547, 8)) && __LIB_0__::func_157(10, iParam3))
	{
		__LIB_1__::func_417(iParam1, 0, 1);
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
			iVar3 = __LIB_0__::func_158(iVar1, 1);
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
							__LIB_1__::func_139(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						__LIB_0__::func_556(iVar3, 1, 6);
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
								__LIB_1__::func_139(iParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
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

int func_551(int iParam0, bool bParam1)
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
	if (__LIB_0__::func_866(iParam0, 0))
	{
		__LIB_1__::func_453(iParam0, 1);
		return 1;
	}
	if (!__LIB_1__::func_287())
	{
		return 0;
	}
	if (bParam1)
	{
		__LIB_0__::func_712(iParam0, 0, "Adding to Group");
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
	__LIB_1__::func_453(iParam0, 1);
	Global_1359489.f_15 = __LIB_1__::func_149(1);
	__LIB_0__::func_288(iParam0, 32, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_COMPANION_GROUP"));
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, true);
	PED::_0x9238A3D970BBB0A9(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);
	if (COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(__LIB_0__::func_271(iParam0), COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(__LIB_0__::func_271(iParam0), Global_1391438.f_414.f_37);
	}
	PED::_0x89E59DBD15E21177(__LIB_0__::func_110(), 0);
	__LIB_0__::func_929(iParam0);
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

void func_552(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (__LIB_0__::func_818(iParam0, 64))
	{
		__LIB_0__::func_798(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = __LIB_0__::func_293(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::_BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("BLIP_SADDLE"), true);
				__LIB_1__::func_457(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630.f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		__LIB_0__::func_798(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (__LIB_0__::func_819(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			{
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::_BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		__LIB_1__::func_458(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (__LIB_0__::func_818(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = __LIB_0__::func_820(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = __LIB_0__::func_636(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > __LIB_1__::func_136(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			iVar17 = -401963276;
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			iVar17 = -1380599892;
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			iVar17 = 1313031610;
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			iVar17 = -1012863186;
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		__LIB_0__::func_637(Global_1900383[iParam0 /*45*/].f_26);
		__LIB_0__::func_638(Global_1900383[iParam0 /*45*/].f_26);
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	if (__LIB_0__::func_126(iVar0) && !bVar9)
	{
		if (iVar5 == joaat("BLIP_STYLE_PLAYER_HORSE"))
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_BLIP_SET_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar20);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 561559387);
		MAP::_BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, -201249929);
	}
	iVar21 = __LIB_0__::func_819(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_4");
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

bool func_553(int iParam0, var uParam1)
{
	struct<4> Var0;
	Var0.f_9 = -1591664384;
	if (!__LIB_1__::func_416(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = __LIB_1__::func_81(Var0, joaat("SLOTID_HORSE_MANE"), 0);
	if (!__LIB_0__::func_144(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_554(int iParam0, var uParam1)
{
	struct<4> Var0;
	Var0.f_9 = -1591664384;
	if (!__LIB_1__::func_416(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = __LIB_1__::func_81(Var0, joaat("SLOTID_HORSE_TAIL"), 0);
	if (!__LIB_0__::func_144(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_555(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;
	if (!__LIB_0__::func_708(bParam9))
	{
		return __LIB_1__::func_445(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return false;
	}
	if (__LIB_0__::func_639(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param0, &Var0, bParam9, 1) || !__LIB_0__::func_464(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (__LIB_0__::func_639(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = __LIB_0__::func_162(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

bool func_556(struct<4> Param0, int iParam4)
{
	struct<11> Var0;
	if (!__LIB_0__::func_708(0))
	{
		return __LIB_1__::func_461(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(__LIB_0__::func_162(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

void func_557(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = __LIB_0__::func_196(fParam1 < 0f, "rpg_cold", "rpg_hot");
		__LIB_0__::func_197(1, bVar1, 1, sVar2);
		__LIB_0__::func_990(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = __LIB_0__::func_198(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		__LIB_1__::func_244();
	}
	else if (iParam0 == 10)
	{
		iVar0 = __LIB_0__::func_198(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = __LIB_0__::func_198(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_558(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (__LIB_0__::func_52(iParam2))
		{
			iVar0 = __LIB_1__::func_468(iParam2, -1);
			if (__LIB_0__::func_205(iParam1, iVar0))
			{
				if (__LIB_0__::func_206(iParam1, iVar0))
				{
					if (__LIB_0__::func_493(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						__LIB_0__::func_207(iParam1);
					}
				}
				else
				{
					PED::_SET_PED_BODY_COMPONENT(iParam1, iVar0);
				}
			}
		}
		__LIB_0__::func_494(iParam0, iParam1, 0);
		PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			__LIB_0__::func_288(iParam0, 66, 0);
		}
	}
}

void func_559(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (!__LIB_0__::func_6(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!__LIB_1__::func_44(iParam0) && !__LIB_0__::func_702(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (__LIB_0__::func_299(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !__LIB_1__::func_44(iParam0))
	{
		iParam2 = -1;
	}
	if (__LIB_0__::func_291(iParam0) == 3 || (__LIB_0__::func_291(iParam0) == 1 && STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0))))
	{
		__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iParam2);
		if ((!__LIB_0__::func_6(Global_1572864.f_8) && !__LIB_0__::func_296(0, 1, 0)) && !__LIB_0__::func_1(Global_1935630, 32768))
		{
			iVar0 = __LIB_1__::func_24(iParam0);
			if (iVar0 != -1)
			{
				__LIB_0__::func_867(0);
			}
			else if (__LIB_0__::func_700(iParam0) == 8)
			{
				iVar0 = __LIB_1__::func_194();
				if (iVar0 != -1)
				{
					__LIB_0__::func_867(0);
				}
			}
		}
	}
	__LIB_1__::func_242(iParam0, 0);
	if (__LIB_0__::func_298(0) == iParam0)
	{
		__LIB_0__::func_267(1);
		__LIB_1__::func_142(0);
		__LIB_0__::func_301(1);
	}
	__LIB_1__::func_144(iParam0, 1);
	__LIB_1__::func_470(iParam0);
}

void func_560(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_702(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	if (bParam1)
	{
		if (__LIB_0__::func_299(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				__LIB_1__::func_270(__LIB_0__::func_76(iParam0));
			}
			if (__LIB_0__::func_2() != 0)
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(iParam0), 0);
			}
			else
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(iParam0), Global_265238.f_79565.f_208.f_17);
			}
		}
	}
	__LIB_1__::func_232(iParam0);
	if (!__LIB_0__::func_6(__LIB_0__::func_298(0)))
	{
		__LIB_1__::func_242(iParam0, 3);
		__LIB_0__::func_267(bParam2);
		if (__LIB_0__::func_2() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			__LIB_1__::func_142(1);
		}
		__LIB_1__::func_318(iParam0, -1);
		if (bParam1 && !__LIB_0__::func_13(2))
		{
			__LIB_0__::func_47(&Global_0, 1024);
		}
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_8(&(Global_1347343.f_11), 536870912);
			__LIB_1__::func_84(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				__LIB_1__::func_312(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				__LIB_1__::func_299(0);
			}
		}
		if (__LIB_0__::func_2() == -1)
		{
			iVar1 = __LIB_1__::func_24(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = __LIB_1__::func_194();
				switch (iVar1)
				{
					case 0:
						__LIB_1__::func_233(0);
						break;
					case 1:
						__LIB_1__::func_233(1);
						break;
					case 2:
						__LIB_1__::func_233(2);
						break;
					case 3:
						__LIB_1__::func_233(3);
						break;
					case 4:
						__LIB_1__::func_233(4);
						break;
					case 5:
						__LIB_1__::func_233(5);
						break;
					case 6:
						__LIB_1__::func_233(5);
						break;
					case 7:
						__LIB_1__::func_233(7);
						break;
					case 8:
						__LIB_1__::func_233(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (__LIB_0__::func_76(iParam0))
				{
					case 7:
					case 8:
					case 36:
						__LIB_1__::func_233(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (__LIB_0__::func_76(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						__LIB_1__::func_233(11);
						break;
					default:
						iVar1 = __LIB_1__::func_194();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									__LIB_1__::func_234(0);
									break;
								case 1:
									__LIB_1__::func_234(1);
									break;
								case 2:
									__LIB_1__::func_234(2);
									break;
								case 3:
									__LIB_1__::func_234(3);
									break;
								case 4:
									__LIB_1__::func_234(4);
									break;
								case 5:
									__LIB_1__::func_234(5);
									break;
								case 6:
									__LIB_1__::func_234(5);
									break;
								case 7:
									__LIB_1__::func_234(7);
									break;
								case 8:
									__LIB_1__::func_234(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		__LIB_0__::func_301(1);
	}
	else
	{
		__LIB_1__::func_318(iParam0, -1);
		__LIB_1__::func_242(iParam0, 4);
	}
	__LIB_1__::func_144(iParam0, 0);
}

void func_561(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

int func_562(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
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
					TASK::TASK_MOUNT_ANIMAL(iParam0, iParam1, iParam4, -1, fParam3, 1, 0, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_563(var uParam0)
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_156, false));
}

void func_564(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), 0, false))
	{
		return;
	}
	Global_1900073.f_18 = iParam0;
}

bool func_565(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_566(int iParam0, int iParam1)
{
	return (*iParam0 && iParam1) != 0;
}

int func_567(int iParam0)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_13;
}

bool func_568(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}
	return false;
}

char* func_569(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_570(char* sParam0)
{
	STREAMING::END_SRL();
	STREAMING::PREFETCH_SRL(sParam0);
	STREAMING::_0xAE00387E53B1E9FC();
}

int func_571(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

void func_572(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= 131072;
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_573(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && fParam2 > 0f)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, true);
			if (iParam3 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 359, true);
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0);
			OBJECT::_0xA22712E8471AA08E(iVar1, 1, 1);
		}
		MISC::_0x870708A6E147A9AD(iParam0, sParam1, fParam2, iParam4, iParam5, 0, 0, 0, 0, -1);
	}
}

int func_574(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_17(*iParam0);
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

void func_575(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = uParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_0x4C39C95AE5DB1329(uParam1, iParam2, iVar0);
}

void func_576(var uParam0, char* sParam1)
{
	struct<8> Var0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { __LIB_1__::func_479(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_156, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_156, sParam1);
	}
}

void func_577(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_217 = { vParam1 };
	uParam0->f_220 = iParam4;
	if (__LIB_0__::func_86(vParam1))
	{
		__LIB_1__::func_477(uParam0, 2048, 1);
	}
	else
	{
		__LIB_0__::func_88(uParam0, 2048);
		if (bParam5)
		{
			__LIB_0__::func_88(uParam0, -2147483648);
		}
	}
}

void func_578(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
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

void func_579(int iParam0)
{
	Global_1359489.f_16 = (Global_1359489.f_16 || iParam0);
}

void func_580(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), iParam2);
		}
		iVar0++;
	}
}

void func_581(var uParam0, int iParam1)
{
	__LIB_0__::func_7(uParam0, iParam1);
}

void func_582(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (__LIB_0__::func_755(uParam1[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((uParam1[iVar0 /*16*/])->f_9 == 7)
					{
						__LIB_1__::func_388(uParam1[iVar0 /*16*/], 1);
					}
					break;
				case 1:
				case 2:
					if ((uParam1[iVar0 /*16*/])->f_9 == 3)
					{
						__LIB_1__::func_388(uParam1[iVar0 /*16*/], 1);
					}
					break;
				case 3:
					if ((uParam1[iVar0 /*16*/])->f_9 == 2)
					{
						__LIB_1__::func_388(uParam1[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

float func_583(float fParam0)
{
	if (!__LIB_0__::func_899(fParam0))
	{
		return fParam0->f_1;
	}
	if (__LIB_0__::func_901(fParam0))
	{
		return fParam0->f_2;
	}
	return (__LIB_0__::func_36() - fParam0->f_1);
}

Vector3 func_584()
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	iVar0 = __LIB_0__::func_317();
	if (!__LIB_1__::func_50(iVar0, &vVar1, &uVar4))
	{
	}
	return vVar1;
}

void func_585(float fParam0, float fParam1)
{
	fParam0->f_1 = (__LIB_0__::func_36() - fParam1);
	__LIB_0__::func_784(fParam0, 1);
	__LIB_0__::func_785(fParam0, 2);
	fParam0->f_2 = 0f;
}

bool func_586(var uParam0, char* sParam1, var uParam2)
{
	struct<5> Var0;
	Var0 = Global_1359489.f_21;
	Var0.f_1 = 0;
	Var0.f_3 = uParam0;
	Var0.f_4 = MISC::GET_HASH_KEY(sParam1);
	if (__LIB_1__::func_64(Var0, 2072518271, uParam2, 0))
	{
		return true;
	}
	return false;
}

bool func_587(int iParam0)
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
	if (__LIB_0__::func_818(iParam0, 32))
	{
		return true;
	}
	return false;
}

bool func_588(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5)
{
	sParam0 = __LIB_0__::func_958(iParam5, sParam0, sParam1, sParam2, sParam3, sParam4);
	return MISC::ARE_STRINGS_EQUAL(sParam0, __LIB_1__::func_337());
}

struct<8> func_589(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_1__::func_486(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { __LIB_0__::func_134() };
	}
	return Var0;
}

void func_590(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_156, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_174[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_174[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_158 };
			uParam0->f_174[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	__LIB_1__::func_481(uParam0, sParam1);
	__LIB_1__::func_477(uParam0, 2097152, 1);
	__LIB_0__::func_88(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_156, sParam1, true);
}

void func_591(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				__LIB_1__::func_497(uParam0, &(uParam0->f_13[iVar0 /*12*/].f_1), uParam0->f_13[iVar0 /*12*/], uParam0->f_13[iVar0 /*12*/].f_9);
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/]))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
					if (iVar1 != Global_35 && !__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 16))
					{
						__LIB_0__::func_142(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

int func_592(float fParam0)
{
	if (!__LIB_0__::func_899(fParam0))
	{
		return BUILTIN::ROUND((fParam0->f_1 * 1000f));
	}
	if (__LIB_0__::func_901(fParam0))
	{
		return BUILTIN::ROUND((fParam0->f_2 * 1000f));
	}
	return (__LIB_0__::func_485() - BUILTIN::ROUND((fParam0->f_1 * 1000f)));
}

Vector3 func_593(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;
	MemCopy(&uVar0, {__LIB_1__::func_485(uParam0)}, 8);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_157))
	{
		uParam0->f_157 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_152), 0, 0, false, true);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_157, false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_157, __LIB_0__::func_731(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_157, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_157);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_594(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (__LIB_0__::func_84(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			__LIB_0__::func_136(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (__LIB_0__::func_84(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		__LIB_1__::func_477(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	__LIB_1__::func_477(uParam0, 16, 1);
}

void func_595(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_0__::func_137() };
	__LIB_1__::func_481(uParam0, &Var0);
}

void func_596(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, &(uParam0->f_13[iVar0 /*12*/].f_1)))
				{
					if (!__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 8))
					{
						if (__LIB_0__::func_154(__LIB_0__::func_153(iVar1, 0, 1, 0)))
						{
							if (!__LIB_1__::func_526(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 0, false, false);
							}
						}
						if (__LIB_0__::func_154(__LIB_0__::func_153(iVar1, 1, 1, 0)))
						{
							if (!__LIB_1__::func_526(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_597(var uParam0)
{
	StringCopy(&(uParam0->f_152), "", 32);
	__LIB_1__::func_527(uParam0);
	__LIB_0__::func_487(uParam0, 0f, 0f, 0f);
	__LIB_1__::func_528(uParam0);
}

void func_598(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	if (!uParam1->f_281)
	{
		return;
	}
	if (iParam2 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (__LIB_0__::func_755(&(uParam1->f_66[iVar0 /*16*/]), 1048576))
		{
			if (__LIB_1__::func_387(uParam0, &(uParam1->f_66[iVar0 /*16*/]), iParam2))
			{
				if (__LIB_1__::func_388(&(uParam1->f_66[iVar0 /*16*/]), 1))
				{
					if (__LIB_0__::func_755(&(uParam1->f_66[iVar0 /*16*/]), 4))
					{
						__LIB_1__::func_320(uParam1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_599()
{
	if (__LIB_0__::func_925() > 1)
	{
		__LIB_0__::func_926();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_BAND_ROOT")))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_BAND_ROOT"), true);
			__LIB_1__::func_240(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HERB_ROOT")))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HERB_ROOT"), true);
			__LIB_1__::func_240(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HORSE_ROOT")))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HORSE_ROOT"), true);
			__LIB_1__::func_240(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SHOT_ROOT")))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SHOT_ROOT"), true);
			__LIB_1__::func_240(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_WEAP_ROOT")))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_WEAP_ROOT"), true);
			__LIB_1__::func_240(452, 1);
		}
	}
}

void func_600(bool bParam0)
{
	int iVar0;
	int iVar1;
	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			__LIB_0__::func_714(iVar0, 4096);
			if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iVar0 /*373*/].f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[iVar0 /*373*/].f_1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iVar1 /*373*/].f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[iVar1 /*373*/].f_1, 1);
			}
			iVar1++;
		}
		VEHICLE::_0x4C05B42A8D937796();
		VEHICLE::_0x16B86A49E072AA85();
	}
	if (__LIB_0__::func_2() == -1)
	{
		Global_1430221.f_1 = !bParam0;
	}
}

void func_601(int iParam0)
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

void func_602(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (__LIB_0__::func_2() == -1)
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(109, 1);
				}
			}
			break;
	}
}

bool func_603(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !__LIB_1__::func_114(iParam0, iParam1, 1))
	{
		return false;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == joaat("COST_TYPE_CRAFT") && __LIB_1__::func_114(iParam0, Var2, 1))
				{
					if (__LIB_1__::func_115(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (__LIB_1__::func_115(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			__LIB_1__::func_240(206, 0);
		}
	}
	if (bParam3)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

void func_604(int iParam0)
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_MEDICINE"):
			iVar0 = 307;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_REVIVER"):
			iVar0 = 308;
			break;
		case joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"):
			iVar0 = 309;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_STIMULANT"):
			iVar0 = 310;
			break;
		case joaat("DOCUMENT_PAMPHLET_SUPER_MEAL"):
			iVar0 = 311;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_MEDICINE"):
			iVar0 = 312;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_RESTORATIVE"):
			iVar0 = 313;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_SNAKE_OIL"):
			iVar0 = 314;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_TONIC"):
			iVar0 = 315;
			break;
		case joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"):
			iVar0 = 316;
			break;
		case joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"):
			iVar0 = 317;
			break;
		case joaat("DOCUMENT_PAMPHLET_COVER_SCENT"):
			iVar0 = 319;
			break;
		case joaat("DOCUMENT_PAMPHLET_DYNAMITE_ARROW"):
			iVar0 = 320;
			break;
		case joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"):
			iVar0 = 321;
			break;
		case joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"):
			iVar0 = 322;
			break;
		case joaat("DOCUMENT_PAMPHLET_POISON_ARROW"):
			iVar0 = 323;
			break;
		case joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"):
			iVar0 = 324;
			break;
		case joaat("DOCUMENT_PAMPHLET_VOLATILE_DYNAMITE"):
			iVar0 = 325;
			break;
		case joaat("DOCUMENT_PAMPHLET_MOLOTOV"):
			iVar0 = 326;
			break;
		case joaat("DOCUMENT_PAMPHLET_VOLATILE_MOLOTOV"):
			iVar0 = 327;
			break;
		case joaat("DOCUMENT_PAMPHLET_HOMING_TOMAHAWK"):
			iVar0 = 328;
			break;
		case joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"):
			iVar0 = 329;
			break;
		case joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"):
			iVar0 = 330;
			break;
		case joaat("DOCUMENT_PAMPHLET_POISON_THROWING_KNIFE"):
			iVar0 = 331;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"):
			iVar0 = 332;
			break;
		case joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"):
			iVar0 = 333;
			break;
		case joaat("DOCUMENT_PAMPHLET_INCENDIARY_BUCKSHOT"):
			iVar0 = 334;
			break;
		case joaat("DOCUMENT_PAMPHLET_SLUG_EXPLOSIVE"):
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		__LIB_1__::func_240(iVar0, 0);
	}
}

struct<14> func_605()
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
				Jump @136; //curOff = 80
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

void func_606(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !__LIB_0__::func_293(31))
	{
		return;
	}
	iVar0 = __LIB_0__::func_963(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = __LIB_0__::func_963(iParam0);
	if (__LIB_0__::func_594(iParam0) && __LIB_0__::func_595(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = __LIB_0__::func_995(fVar1, fParam1);
			if (fParam1 > IntToFloat(__LIB_0__::func_996(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						__LIB_1__::func_240(__LIB_0__::func_596(iParam0), 0);
					}
					__LIB_1__::func_132(iParam0, iVar2, iVar3);
					__LIB_0__::func_597(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

void func_607(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_0__::func_450(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_123(iParam0))
	{
		__LIB_0__::func_806(iParam0, 2);
		if (bParam2)
		{
			if (!__LIB_0__::func_296(0, 0, 1))
			{
				__LIB_0__::func_703(1, 4);
			}
		}
		if ((!__LIB_0__::func_104() && !bParam1) && !__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", __LIB_1__::func_377(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_608(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;
	Var0.f_9 = -1591664384;
	if (!__LIB_1__::func_416(iParam0, &Var0))
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

int func_609(int iParam0)
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
			__LIB_1__::func_7(iVar0, &Var1);
			if (__LIB_0__::func_144(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_610(int iParam0)
{
	if (__LIB_1__::func_549(81053684, iParam0))
	{
		return true;
	}
	if (__LIB_1__::func_549(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

void func_611(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (__LIB_0__::func_1(Global_1347343.f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		__LIB_0__::func_7(&(Global_1347343.f_11), 64);
	}
	if (bParam4)
	{
		__LIB_0__::func_7(&(Global_1347343.f_11), 16384);
	}
	if (__LIB_0__::func_302() >= 2)
	{
		if (!__LIB_0__::func_1(Global_1347343.f_11, 16384))
		{
			__LIB_0__::func_7(&(Global_1347343.f_11), 8);
		}
		__LIB_0__::func_303(0.88f);
	}
	StringCopy(&(Global_1347343.f_3), sParam2, 64);
	Global_1347343.f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343.f_1 = iParam1;
	__LIB_0__::func_7(&Global_1935630, 2048);
	__LIB_1__::func_420(bParam5);
}

void func_612(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_30(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_923(iParam1))
	{
		return;
	}
	if (__LIB_1__::func_426(iParam1, 1))
	{
		return;
	}
	iVar0 = __LIB_0__::func_381(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (__LIB_0__::func_878(iParam0, -1))
	{
		return;
	}
	else
	{
		__LIB_0__::func_240(&(Global_40.f_9910[iVar0 /*6*/]), 2);
	}
	Global_40.f_9910[iVar0 /*6*/].f_4 = iParam1;
	if (bParam2)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(0, 17);
		}
	}
}

char[] func_613(int iParam0)
{
	char[] cVar0[8];
	if (!__LIB_0__::func_6(iParam0))
	{
		return cVar0;
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			cVar0 = Global_1835011[__LIB_0__::func_909(iParam0) /*74*/].f_8;
			break;
		case 8:
			cVar0 = Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3;
			break;
		case 11:
			if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

int func_614(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_356(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = __LIB_0__::func_937(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return __LIB_1__::func_428(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam2), iParam0, 0);
	return iVar2;
}

struct<5> func_615(int iParam0, bool bParam1, bool bParam2)
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
			if (__LIB_0__::func_793(iParam0, -1823706425))
			{
				Var0 = { __LIB_0__::func_429(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (__LIB_0__::func_793(iParam0, -1483207246))
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

void func_616(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		__LIB_1__::func_113(iParam0, sParam4, iParam5);
	}
	__LIB_1__::func_430(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_617(int iParam0, vector3 vParam1, float fParam4)
{
	Global_2621440[iParam0 /*12066*/].f_9.f_7 = { vParam1 };
	Global_2621440[iParam0 /*12066*/].f_9.f_13 = fParam4;
	Global_2621440[iParam0 /*12066*/].f_9 = 5;
	Global_2621440[iParam0 /*12066*/].f_9.f_15 = __LIB_1__::func_447(vParam1, 1);
}

void func_618(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = __LIB_0__::func_23();
	__LIB_1__::func_446(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

bool func_619(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_437(iParam0);
	if (iVar0 != -15)
	{
		__LIB_1__::func_446(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !__LIB_1__::func_426(iVar0, 1);
	}
	return false;
}

void func_620(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = __LIB_1__::func_435(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = __LIB_1__::func_492(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = __LIB_1__::func_493(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			__LIB_1__::func_494(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = __LIB_1__::func_495(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			__LIB_0__::func_159(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

void func_621(int iParam0)
{
	int iVar0;
	int iVar1;
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
	__LIB_1__::func_178(&iVar0, &iVar1, &iVar2);
	__LIB_0__::func_810(iParam0, iVar0);
	__LIB_0__::func_811(iParam0, iVar1);
	__LIB_0__::func_812(iParam0, iVar2);
	__LIB_0__::func_837(iParam0, 1);
	__LIB_1__::func_442(iParam0, 1);
}

struct<2> func_622(int iParam0)
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
	if (!__LIB_1__::func_553(iParam0, &uVar2))
	{
	}
	if (!__LIB_1__::func_554(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_623()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	if (__LIB_1__::func_439(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (__LIB_1__::func_439(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (__LIB_1__::func_439(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (__LIB_1__::func_439(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_624(vector3 vParam0, float fParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (__LIB_0__::func_627(iVar0, 0))
		{
			if (BUILTIN::VDIST(__LIB_1__::func_440(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_625()
{
	if (__LIB_0__::func_139(Global_43801))
	{
		__LIB_1__::func_281(&Global_43801, 0, 0);
	}
}

bool func_626(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
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
				Global_1360165[iParam0 /*1157*/].f_124 = __LIB_1__::func_545(iVar0, vParam1, fParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
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

void func_627(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (__LIB_1__::func_441())
	{
		fVar0 = __LIB_0__::func_636(vParam0, Global_40.f_6);
	}
	if (__LIB_0__::func_644(33554432))
	{
		if (!__LIB_0__::func_175(Global_40.f_2, 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 1))
		{
			fVar1 = __LIB_0__::func_636(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

bool func_628(vector3 vParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_447(vParam0, 1);
	if (iVar0 == __LIB_0__::func_61())
	{
		return true;
	}
	return false;
}

int func_629(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = __LIB_0__::func_910(iParam0);
	iVar3 = __LIB_0__::func_911(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = __LIB_0__::func_23();
				__LIB_1__::func_446(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			__LIB_1__::func_28(iParam0, 1);
			if (__LIB_0__::func_344(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						__LIB_1__::func_152(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					__LIB_0__::func_345(1, iParam0);
				}
				else
				{
					__LIB_0__::func_346(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_630(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_161(iParam0, 1);
	__LIB_0__::func_380(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), 2, 6);
	__LIB_0__::func_380(&(Global_1946804.f_1378.f_1[iVar0 /*3*/]), 2, 6);
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
		Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1 = 0;
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		if (bParam2)
		{
			__LIB_1__::func_452(17, iParam0, 0, 0, 0);
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			__LIB_0__::func_380(&(Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
				Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			__LIB_0__::func_380(&(Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_631(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

void func_632(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			__LIB_0__::func_360();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			__LIB_0__::func_361();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			__LIB_0__::func_363();
			break;
		case joaat("PROVISION_TRINKET_LION_PAW"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_MOOSE_ANTLER"):
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_OWL_FEATHER"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			__LIB_0__::func_430();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			__LIB_0__::func_431();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

bool func_633(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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

void func_634(float fParam0)
{
	__LIB_1__::func_557(10, fParam0);
}

void func_635(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(__LIB_0__::func_558(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP", MISC::_CREATE_VAR_STRING(2, __LIB_1__::func_464(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(__LIB_0__::func_558(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP_NOS", MISC::_CREATE_VAR_STRING(2, __LIB_1__::func_464(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

bool func_636(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	Var0.f_9 = -1591664384;
	if (!__LIB_1__::func_416(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { __LIB_0__::func_429(iParam1, Var0, joaat("SLOTID_HORSE_MANE"), 0) };
	return __LIB_1__::func_556(Var29, 1);
}

bool func_637(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	Var0.f_9 = -1591664384;
	if (!__LIB_1__::func_416(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { __LIB_0__::func_429(iParam1, Var0, joaat("SLOTID_HORSE_TAIL"), 0) };
	return __LIB_1__::func_556(Var29, 1);
}

bool func_638(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;
	if (!__LIB_0__::func_708(bParam10))
	{
		return __LIB_1__::func_444(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_0__::func_464(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (__LIB_0__::func_639(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(__LIB_0__::func_162(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!__LIB_1__::func_556(Var14, 1))
		{
		}
	}
	return true;
}

void func_639(var uParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	char cVar2[64];
	int iVar10;
	if (!__LIB_0__::func_757(uParam0->f_1))
	{
		return;
	}
	sVar0 = __LIB_0__::func_758(uParam0->f_1);
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar1))
	{
		StringCopy(&cVar2, MISC::_CREATE_VAR_STRING(2, __LIB_0__::func_759(*uParam0)), 64);
		StringConCat(&cVar2, " - ", 64);
		StringConCat(&cVar2, MISC::_CREATE_VAR_STRING(2, __LIB_1__::func_464(uParam0->f_2, 0)), 64);
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar1, Global_36, MISC::GET_HASH_KEY(__LIB_0__::func_759(*uParam0)), __LIB_0__::func_760(uParam0->f_1), iVar10);
		UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar1, &cVar2);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar1, __LIB_0__::func_761(*uParam0), joaat("TOAST_LOG_BLIPS"));
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar1, __LIB_0__::func_762(uParam0->f_1), __LIB_0__::func_763(uParam0->f_1));
	}
	else if (bParam2)
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar1);
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar1, __LIB_0__::func_760(uParam0->f_1), "", bParam1, false, false);
	if (bParam1)
	{
		UILOG::_UILOG_MARK_MISSION_COMPLETED(iVar1);
	}
}

void func_640(int iParam0)
{
	int iVar0;
	struct<15> Var1;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_866(iParam0, 0))
	{
	}
	__LIB_1__::func_462(iParam0);
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
	if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
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

void func_641(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP8_ABIGAIL2X1_1"), iParam1);
			break;
		case 18:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_4"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_BRAITHWAITES_1"), iParam1);
			break;
		case 20:
			__LIB_1__::func_465(joaat("JOURNAL_GT_BRAITHWAITES_2"), iParam1);
			break;
		case 2:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_4"), iParam1);
			break;
		case 23:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_3"), iParam1);
			__LIB_1__::func_199(1);
			break;
		case 16:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_2_TXT"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_3_TXT"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_4"), iParam1);
			break;
		case 59:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_2"), iParam1);
			if (__LIB_0__::func_343(146))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE2_JN"), iParam1);
			}
			__LIB_1__::func_199(1);
			break;
		case 76:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_FINALE2_1"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_10B"), iParam1);
			}
			break;
		case 44:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4B"), iParam1);
			break;
		case 46:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG3_4"), iParam1);
			break;
		case 17:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_3"), iParam1);
			break;
		case 19:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_GRAYS_2"), iParam1);
			break;
		case 21:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_2"), iParam1);
			__LIB_1__::func_199(0);
			break;
		case 15:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			break;
		case 33:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			break;
		case 34:
			__LIB_1__::func_465(joaat("JOURNAL_GT_INDUSTRY_3"), iParam1);
			break;
		case 64:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			break;
		case 60:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			break;
		case 73:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			break;
		case 74:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			break;
		case 8:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			break;
		case 36:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2"), iParam1);
			if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2B"), iParam1);
			}
			break;
		case 27:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			break;
		case 28:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_MOB_2"), iParam1);
			break;
		case 29:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_MOB_3"), iParam1);
			break;
		case 31:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB5_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB5_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB5_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB5_4"), iParam1);
			break;
		case 4:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP2_HORSESHOE"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_5"), iParam1);
			__LIB_1__::func_199(0);
			break;
		case 6:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_A"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_B"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_C"), iParam1);
			}
			break;
		case 25:
			__LIB_1__::func_465(joaat("JOURNAL_GT_MUDTOWN_3B"), iParam1);
			break;
		case 24:
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_GT_MUDTWON_5_5000"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_GT_MUDTWON_5_7500"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_GT_MUDTWON_5_10000"), iParam1);
			}
			break;
		case 48:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_1"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2A"), iParam1);
			}
			if (__LIB_1__::func_151(51))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2B"), iParam1);
			}
			break;
		case 49:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_1"), iParam1);
			if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2B"), iParam1);
			}
			else if (Global_1357515 == 2)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2C"), iParam1);
			}
			break;
		case 58:
			__LIB_1__::func_465(joaat("JOURNAL_GT_NATIVE_3"), iParam1);
			break;
		case 50:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON1_1"), iParam1);
			break;
		case 52:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2B"), iParam1);
			if (bParam2 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3B"), iParam1);
			}
			break;
		case 32:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_ODRISCOLL4_1"), iParam1);
			break;
		case 47:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_MARY4_1"), iParam1);
			break;
		case 69:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_SADIE2_1"), iParam1);
			if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_2B"), iParam1);
			}
			break;
		case 70:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_SADIE3"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_7A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8B"), iParam1);
			}
			break;
		case 71:
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9B"), iParam1);
			}
			break;
		case 37:
			__LIB_1__::func_465(joaat("JOURNAL_GT_SAINT_DENIS_1"), iParam1);
			break;
		case 9:
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1B"), iParam1);
			}
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_2"), iParam1);
			break;
		case 13:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_3"), iParam1);
			break;
		case 53:
			__LIB_1__::func_465(joaat("JOURNAL_GT_CORNWALL_1"), iParam1);
			break;
		case 54:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY1_1"), iParam1);
			break;
		case 56:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_3"), iParam1);
			break;
		case 57:
			__LIB_1__::func_465(joaat("JOURNAL_GT_TRAIN_ROBBERY_4"), iParam1);
			break;
		case 22:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_2"), iParam1);
			break;
		case 12:
			__LIB_1__::func_465(joaat("JOURNAL_GT_UTOPIA_2"), iParam1);
			break;
		case 0:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_5"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_6"), iParam1);
			break;
		case 1:
			__LIB_1__::func_199(1);
			break;
		case 3:
			if (__LIB_0__::func_26())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4")))
				{
					__LIB_1__::func_465(joaat("JOURNAL_GT_WINTER_4_SE"), iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4_SE")))
			{
				__LIB_1__::func_465(joaat("JOURNAL_GT_WINTER_4"), iParam1);
			}
			break;
		default:
			break;
	}
}

void func_642(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_4"), iParam1);
			break;
		case 1:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL2X2_1"), iParam1);
			break;
		case 2:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL3_1"), iParam1);
			break;
		case 9:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP9_BEECHERSHOPE"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_BEECHERS1X3_1"), iParam1);
			if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1B"), iParam1);
			}
			break;
		case 22:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_CALDERON1X1_1"), iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_1_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_2_JN"), iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(26))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_JN_B1"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_JN_B2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_JN_A"), iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_AR"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_AR"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_AR"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_AR"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_AR"), iParam1);
				}
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2_JN"), iParam1);
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_JN"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_JN"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_JN"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_JN"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_JN"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_JN"), iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			break;
		case 37:
			__LIB_1__::func_465(joaat("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_1_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_1_JN_B"), iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT3_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(54))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT3_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT3_1A_JN"), iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(39))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO2_1_B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO2_1_A_JN"), iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (__LIB_0__::func_895(Global_1835011[33 /*74*/].f_1) == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC1_1B_AR_A"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC1_1A_AR_A"), iParam1);
				}
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC1_1_JN"), iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC3_1_AR_A"), iParam1);
			}
			else if (__LIB_0__::func_343(43))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC3_1_JN_B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC3_1_JN_A"), iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			break;
		case 42:
			if (__LIB_0__::func_343(41))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(49))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_JN_B"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_JN_B2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_JN_A"), iParam1);
			}
			break;
		case 51:
			__LIB_1__::func_465(joaat("JOURNAL_RC_TAX1_1_JN"), iParam1);
			break;
		case 58:
			if (__LIB_1__::func_25(Global_1347702[23 /*49*/].f_15, 1))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1B"), iParam1);
			}
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_3"), iParam1);
			break;
		case 59:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			break;
		case 62:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			break;
		case 63:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			break;
		case 65:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			break;
		case 66:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP3_CLEMENS"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			__LIB_1__::func_199(1);
			break;
		case 67:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			break;
		case 68:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			__LIB_1__::func_199(0);
			break;
		case 70:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			break;
		case 71:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER1_JN"), iParam1);
			break;
		case 73:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER3_JN"), iParam1);
			break;
		case 75:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER4_JN"), iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(78))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_2_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_1_JN"), iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA4_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(79))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA4_2_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA4_1_JN"), iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4B_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4_A_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4_A2_JN"), iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			break;
		case 94:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_1"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2B"), iParam1);
			}
			__LIB_1__::func_465(joaat("JOURNAL_GT_HOME_ROB"), iParam1);
			break;
		case 99:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_1_AR"), iParam1);
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_2_AR_B"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_2_AR_A"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_1A_JN"), iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(101))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON2_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON2_1A_JN"), iParam1);
			}
			break;
		case 103:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MASON3_1_AR"), iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(103))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_1A_JN"), iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON5_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(104))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON5_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON5_1A_JN"), iParam1);
			}
			break;
		case 108:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1_AR_B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1B_JN"), iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(109))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR2B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR2A_JN"), iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3A_AR"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3B_AR"), iParam1);
				}
			}
			else if (__LIB_0__::func_343(110))
			{
				if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3C_JN"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3D_JN"), iParam1);
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3D_2_JN"), iParam1);
				}
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3A_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3B_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3B_2_JN"), iParam1);
			}
			break;
		case 115:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(117))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO2_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO2_1A_JN"), iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO3_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(118))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO3_2B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO3_2A_JN"), iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW1_JN"), iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW3_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(121))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW3B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW3A_JN"), iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW4_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(122))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW4B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW4A_JN"), iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5B_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5B_JN"), iParam1);
			}
			break;
		case 127:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL1_AR"), iParam1);
			break;
		case 129:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL3_AR"), iParam1);
			break;
		case 131:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL5_AR"), iParam1);
			break;
		case 133:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL7_AR"), iParam1);
			break;
		case 134:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4A_AR"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4B_AR"), iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER1_AR")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER2_AR"))) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER3_AR")))
			{
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4A_JN"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4B_JN"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4C_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4D_JN"), iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC2_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC3A_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(136))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC2B_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC3C_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC2A_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC3A_JN"), iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1A_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1B_AR"), iParam1);
				}
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1A_JN"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1B_JN"), iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(147))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET2B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET2A_JN"), iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET3_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(148))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET3B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET3A_JN"), iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET4_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(149))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET4B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET4A_JN"), iParam1);
			}
			break;
		default:
			break;
	}
}

void func_643()
{
	if (__LIB_0__::func_797(0))
	{
		__LIB_1__::func_552(0);
	}
	if (__LIB_0__::func_797(1))
	{
		__LIB_1__::func_552(1);
	}
	if (__LIB_0__::func_797(5))
	{
		__LIB_1__::func_552(5);
	}
	if (__LIB_0__::func_797(6))
	{
		__LIB_0__::func_798(6);
	}
}

int func_644(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1898329)
	{
		if (!__LIB_0__::func_6(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch (Global_1898346[iVar0 /*6*/].f_3)
			{
				case 1:
					iVar1 = Global_1898346[iVar0 /*6*/].f_4;
					if (BUILTIN::VDIST(__LIB_1__::func_469(iVar1), vParam0) < __LIB_0__::func_514(__LIB_0__::func_626(iVar1) == 0f, fParam3, __LIB_0__::func_626(iVar1)))
					{
						return 1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_645(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (iParam0 != __LIB_0__::func_298(0))
	{
		return;
	}
	if (__LIB_0__::func_299(iParam0) == 0)
	{
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	if (__LIB_0__::func_291(iParam0) == 3)
	{
		if (__LIB_0__::func_299(iParam0) == 0)
		{
		}
		else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
		{
			if (__LIB_0__::func_700(iParam0) != 1 && __LIB_0__::func_700(iParam0) != 8)
			{
				__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	__LIB_1__::func_470(iParam0);
	__LIB_0__::func_267(1);
	__LIB_1__::func_142(0);
	__LIB_1__::func_242(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			__LIB_0__::func_300(1);
			__LIB_0__::func_747(15, 0, 1);
			break;
		case 4:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 8:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 9:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 2:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 6:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 5:
			__LIB_0__::func_747(10, 0, 1);
			break;
	}
	__LIB_0__::func_301(1);
}

void func_646(int iParam0)
{
	if (Global_1900073.f_19 != iParam0)
	{
		Global_1900073.f_19 = iParam0;
	}
}

bool func_647()
{
	return Global_1935630.f_44 == joaat("WEAPON_FISHINGROD");
}

void func_648(int iParam0, int iParam1)
{
	if ((iParam0 >= 1 && iParam0 <= 3) && Global_1900073.f_174[iParam0] != iParam1)
	{
		Global_1900073.f_174[iParam0] = iParam1;
	}
}

void func_649(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_650()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1900073, false))
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FISHING_CORE")) > 0)
	{
		return true;
	}
	return false;
}

void func_651(int iParam0, int iParam1)
{
	if (Global_1900073.f_184[iParam0] != iParam1)
	{
		Global_1900073.f_184[iParam0] = iParam1;
	}
}

bool func_652()
{
	return Global_1894899 & 2 != 0;
}

void func_653(int iParam0)
{
	if (Global_1900073.f_25 != iParam0)
	{
		Global_1900073.f_25 = iParam0;
	}
}

void func_654(float fParam0)
{
	fLocal_31 = fParam0;
}

bool func_655(int iParam0)
{
	return Global_1900073.f_26[iParam0 /*30*/] == 6;
}

bool func_656(int iParam0)
{
	return __LIB_0__::func_27(Global_1900073.f_26[iParam0 /*30*/].f_5, 8);
}

void func_657(int iParam0)
{
	if (Global_1900073.f_13 != iParam0)
	{
		Global_1900073.f_13 = iParam0;
	}
}

void func_658(int iParam0)
{
	if (Global_1900073.f_11 != iParam0)
	{
		Global_1900073.f_11 = iParam0;
	}
}

void func_659(int iParam0)
{
	if (Global_1900073.f_12 != iParam0)
	{
		Global_1900073.f_12 = iParam0;
	}
}

Vector3 func_660(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

int func_661(char* sParam0)
{
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
	{
		return 0;
	}
	return 1;
}

bool func_662(int iParam0)
{
	return __LIB_0__::func_27(Global_1900073.f_1, iParam0);
}

void func_663(int iParam0, int iParam1)
{
	if (Global_1900073.f_189[iParam0] != iParam1)
	{
		Global_1900073.f_189[iParam0] = iParam1;
	}
}

void func_664(int iParam0)
{
	if (Global_1900073.f_14 != iParam0)
	{
		Global_1900073.f_14 = iParam0;
	}
}

void func_665(int iParam0)
{
	if (Global_1900073.f_15 != iParam0)
	{
		Global_1900073.f_15 = iParam0;
	}
}

void func_666(int iParam0)
{
	if (Global_1900073.f_20 != iParam0)
	{
		Global_1900073.f_20 = iParam0;
	}
}

void func_667(int iParam0)
{
	if (Global_1900073.f_21 != iParam0)
	{
		Global_1900073.f_21 = iParam0;
	}
}

void func_668(int iParam0)
{
	if (Global_1900073.f_22 != iParam0)
	{
		Global_1900073.f_22 = iParam0;
	}
}

void func_669(int iParam0)
{
	if (Global_1900073.f_23 != iParam0)
	{
		Global_1900073.f_23 = iParam0;
	}
}

void func_670(int iParam0)
{
	if (Global_1900073.f_24 != iParam0)
	{
		Global_1900073.f_24 = iParam0;
	}
}

void func_671(vector3 vParam0)
{
	Global_1900073.f_212 = { vParam0 };
}

bool func_672(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(Global_1900073.f_2[iParam0], iParam1);
}

bool func_673(int iParam0)
{
	return Global_1900073.f_26[iParam0 /*30*/] == 12;
}

void func_674(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

bool func_675(int iParam0)
{
	if (Global_1900073.f_26[iParam0 /*30*/] == 7 && Global_1900073.f_154[iParam0] == 1)
	{
		return true;
	}
	return false;
}

bool func_676(int iParam0)
{
	return __LIB_0__::func_27(Global_1900073.f_26[iParam0 /*30*/].f_6, 32);
}

bool func_677(int iParam0)
{
	return __LIB_0__::func_27(Global_1900073.f_26[iParam0 /*30*/].f_6, 64);
}

int func_678(vector3 vParam0)
{
	if (__LIB_0__::func_94(Global_35, vParam0, 1) > 25f)
	{
		if (STREAMING::_0xCF45DF50C7775F2A() == 0)
		{
			STREAMING::_0x513F8AA5BF2F17CF(vParam0, 50f, 0);
		}
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		if (!STREAMING::_0x0909F71B5C070797())
		{
			return 0;
		}
	}
	return 1;
}

bool func_679(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, __LIB_0__::func_110(), 1))
	{
		return true;
	}
	return false;
}

bool func_680(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_2() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
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
			*uParam1 = 69;
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
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
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
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
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
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
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
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

void func_681(int iParam0, int iParam1)
{
	__LIB_0__::func_516(iParam0, iParam1);
}

void func_682(int iParam0)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_46 = 0;
}

void func_683(int iParam0, int iParam1)
{
	__LIB_1__::func_336(iParam0, iParam1);
}

void func_684(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (__LIB_1__::func_566(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			__LIB_0__::func_289(iParam0, 1, 0);
		}
	}
	__LIB_0__::func_289(iParam0, 16, bParam1);
}

bool func_685(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_1__::func_567(iParam0);
	if (__LIB_1__::func_566(&iVar0, 8))
	{
		return true;
	}
	return false;
}

void func_686()
{
	if ((__LIB_0__::func_272(iLocal_27, 0) && !__LIB_0__::func_163(iLocal_27, -982327190)) && PED::_IS_MOUNT_SEAT_FREE(iLocal_27, -1))
	{
		TASK::TASK_STAND_STILL(iLocal_27, -1);
	}
	if ((__LIB_0__::func_272(iLocal_28, 0) && !__LIB_0__::func_163(iLocal_28, -982327190)) && PED::_IS_MOUNT_SEAT_FREE(iLocal_28, -1))
	{
		TASK::TASK_STAND_STILL(iLocal_28, -1);
	}
}

void func_687(var uParam0)
{
	__LIB_1__::func_582(3, &(uParam0->f_66));
}

int func_688(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5)
{
	vector3 vVar0[24];
	struct<8> Var3;
	var uVar11;
	if (__LIB_1__::func_586(uParam0->f_1, sParam1, &Var3))
	{
		MemCopy(&cVar0, {Var3}, 3);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			StringConCat(&cVar0, sParam2, 24);
		}
		if (bParam3)
		{
			__LIB_0__::func_82(1, 1, 0);
		}
		uVar11 = 24;
		if (!__LIB_1__::func_49(&cVar0))
		{
			__LIB_0__::func_928(&uVar11, Global_35, "ARTHUR", 0);
			__LIB_0__::func_928(&uVar11, __LIB_0__::func_271(uParam0->f_2), __LIB_0__::func_781(uParam0->f_2), 0);
			__LIB_1__::func_104(&uVar11, cVar0, iParam4, iParam5, 0, 0);
			return 1;
		}
	}
	return 0;
}

bool func_689()
{
	var uVar0;
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(4))
		{
			return true;
		}
	}
	return (PED::_IS_METAPED_USING_COMPONENT(Global_35, joaat("HATS")) || __LIB_1__::func_182(-2061583405, &uVar0));
}

int func_690(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_0x32A1E3B83D501096(iParam0);
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (__LIB_0__::func_118(iVar2) != 0 && PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iVar2)))
		{
			if (__LIB_0__::func_120(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_691(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	char cVar2[128];
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	if (!bParam4 && !uParam0->f_270)
	{
		if (!__LIB_1__::func_147(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return false;
		}
	}
	if (!uParam0->f_271)
	{
		iVar20 = uParam0->f_278;
		while (iVar20 <= (uParam0->f_277 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_264.f_1 = 0;
			uParam0->f_264.f_3 = iVar20;
			if (__LIB_0__::func_764(uParam0, 0))
			{
				if (__LIB_1__::func_389(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (__LIB_0__::func_765(uParam0, 1, &iVar0))
					{
					}
					if (__LIB_0__::func_766(uParam0, 3, &cVar2))
					{
					}
					if (__LIB_0__::func_765(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (__LIB_0__::func_765(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (__LIB_0__::func_765(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (__LIB_0__::func_765(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (__LIB_0__::func_765(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 2 && uParam0->f_273 < 2)
						{
							if (!__LIB_1__::func_321(uParam0, &cVar2, uParam0->f_273))
							{
								*(uParam0[uParam0->f_273 /*16*/]) = { cVar2 };
								__LIB_0__::func_324(uParam0[uParam0->f_273 /*16*/], 1048576);
								uParam0->f_273++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 2 && uParam0->f_274 < 2)
						{
							uParam0->f_33[uParam0->f_274 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_33[uParam0->f_274 /*16*/]), 1048576);
							uParam0->f_274++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 10 && uParam0->f_275 < 10)
						{
							uParam0->f_66[uParam0->f_275 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_66[uParam0->f_275 /*16*/]), 1048576);
							if (!bVar19 && __LIB_0__::func_755(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(&(uParam0->f_66[uParam0->f_275 /*16*/]));
								bVar19 = true;
							}
							uParam0->f_275++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_276 < 2)
					{
						if (!__LIB_1__::func_321(&(uParam0->f_227), &cVar2, uParam0->f_276))
						{
							uParam0->f_227[uParam0->f_276 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_227[uParam0->f_276 /*16*/]), 1048576);
							uParam0->f_276++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_278 = iVar20 + 1;
				uParam0->f_269 = 0;
				return false;
			}
			iVar20++;
		}
		uParam0->f_271 = 1;
	}
	if (!__LIB_0__::func_751(uParam0) && uParam0->f_279 > 0)
	{
		iVar20 = uParam0->f_280;
		while (iVar20 <= (uParam0->f_279 - 1))
		{
			uParam0->f_264.f_1 = 0;
			uParam0->f_264.f_3 = iVar20;
			iVar22 = 0;
			if (__LIB_0__::func_764(uParam0, 12))
			{
				if (__LIB_0__::func_765(uParam0, 13, &iVar0))
				{
				}
				if (__LIB_0__::func_765(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (STREAMING::IS_MODEL_VALID(iVar22) && iVar22 != 0)
			{
				uParam0->f_260[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_280 = iVar20 + 1;
				uParam0->f_269 = 0;
				return false;
			}
			iVar20++;
		}
	}
	uParam0->f_269 = 1;
	uParam0->f_278 = 0;
	uParam0->f_280 = 0;
	uParam0->f_271 = 0;
	uParam0->f_272 = 1;
	if (!bParam4)
	{
		__LIB_0__::func_767(uParam0);
	}
	return true;
}

void func_692(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;
	if (__LIB_0__::func_192(iParam0, 1989861793))
	{
		iVar0 = __LIB_0__::func_372(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (__LIB_0__::func_778(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = __LIB_0__::func_374(iVar14, iVar1);
					if (iVar15 != iParam0 && __LIB_0__::func_144(iVar15, 0))
					{
						if (__LIB_1__::func_603(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				__LIB_0__::func_375(iVar1);
				if (bVar13)
				{
					__LIB_1__::func_604(iParam0);
				}
				else
				{
					__LIB_1__::func_240(306, 0);
				}
			}
		}
	}
}

int func_693(int iParam0)
{
	char[] cVar0[8];
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_6(iParam0))
	{
		return 0;
	}
	cVar0 = __LIB_1__::func_613(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

void func_694(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar3 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((__LIB_1__::func_38() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

void func_695(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
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
				__LIB_1__::func_158(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_696(int iParam0)
{
	int iVar0;
	float fVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar0 = __LIB_0__::func_525(iParam0);
	fVar1 = __LIB_1__::func_181(iParam0);
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

void func_697(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (!__LIB_0__::func_450(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_122(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_123(iParam0))
	{
		__LIB_1__::func_607(iParam0, 1, 0);
	}
	iVar0 = __LIB_0__::func_223(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (__LIB_0__::func_805(iParam0, 512))
		{
			__LIB_1__::func_452(30, iVar0, 0, 0, 0);
		}
	}
	if ((!__LIB_0__::func_104() && !bParam1) && !__LIB_0__::func_296(0, 0, 1))
	{
		__LIB_0__::func_45(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_806(iParam0, 6);
	if (bParam2)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 4);
		}
	}
}

bool func_698(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	Var0 = { __LIB_1__::func_615(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return __LIB_0__::func_975(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, bParam4) };
	return __LIB_0__::func_939(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

int func_699()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return __LIB_0__::func_816(8);
		}
	}
	return 0;
}

bool func_700(int iParam0, var uParam1, bool bParam2)
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
	Var0 = { __LIB_1__::func_615(iParam0, 0, 1) };
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

bool func_701(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { __LIB_1__::func_615(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(__LIB_0__::func_162(0), &Var5, iParam1);
	return true;
}

void func_702(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	ENTITY::IS_ENTITY_DEAD(Global_35);
	*iParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1));
	*iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2));
	*iParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1));
	*iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2));
	*iParam1 += 6;
	iVar0 = __LIB_1__::func_614(joaat("UPGRADE_HEALTH_TANK_1"), 0, 0);
	iVar1 = __LIB_1__::func_614(joaat("UPGRADE_STAMINA_TANK_1"), 0, 0);
	iVar2 = __LIB_1__::func_614(joaat("UPGRADE_DEADEYE_TANK_1"), 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

bool func_703(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
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
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { __LIB_1__::func_615(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { __LIB_0__::func_429(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
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
			Var37 = { __LIB_1__::func_615(iParam1, 0, 0) };
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
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (__LIB_0__::func_814(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
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

void func_704(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { __LIB_1__::func_615(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(__LIB_0__::func_162(0), &Var5, bParam1);
}

int func_705(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { __LIB_1__::func_615(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, __LIB_0__::func_162(0), &Var5);
	return 1;
}

void func_706(var uParam0)
{
	*uParam0 = 234527101;
	uParam0->f_1 = -589165916;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_13 = 0;
	StringCopy(&(uParam0->f_18), "", 64);
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_37 = { 0f, 0f, 0f };
	uParam0->f_41 = 20f;
	uParam0->f_43 = 0;
	StringCopy(&(uParam0->f_52), "", 64);
	StringCopy(&(uParam0->f_60), "", 64);
	uParam0->f_12 = 0;
	if (__LIB_0__::func_139(uParam0->f_44))
	{
		__LIB_1__::func_196(&(uParam0->f_44), 1, 1);
	}
	if (__LIB_0__::func_75(&(uParam0->f_45)))
	{
		__LIB_0__::func_37(&(uParam0->f_45));
	}
}

bool func_707(int iParam0, int iParam1, bool bParam2)
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
		if (!__LIB_1__::func_160(iParam0, 1))
		{
			return false;
		}
	}
	return __LIB_1__::func_614(iParam0, 0, bParam2) >= iParam1;
}

bool func_708(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { __LIB_1__::func_615(iParam0, 0, 1) };
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

bool func_709()
{
	if (((((__LIB_1__::func_619(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || __LIB_1__::func_619(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || __LIB_1__::func_619(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || __LIB_1__::func_619(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || __LIB_1__::func_619(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || __LIB_1__::func_619(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_710(int iParam0)
{
	struct<5> Var0;
	Var0 = { __LIB_1__::func_615(iParam0, 1, 0) };
	return __LIB_0__::func_709(Var0.f_4);
}

bool func_711(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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

int func_712()
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
	Var0 = { __LIB_1__::func_615(856287005, 0, 0) };
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

bool func_713(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_1__::func_138(uParam0, iParam3, iParam2) && !__LIB_1__::func_633(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
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

void func_714()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_31(iVar0) && __LIB_0__::func_866(iVar0, 1))
		{
			__LIB_1__::func_640(iVar0);
		}
		iVar0++;
	}
}

void func_715(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
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
		__LIB_1__::func_631(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			__LIB_1__::func_631(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_716(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436.f_9 = 0f;
	}
	Global_1935436.f_8 = 0f;
	Global_1935436.f_12.f_1 = 0f;
	Global_1935436.f_12 = 0f;
	Global_1935436.f_12.f_3 = 0f;
	Global_1935436.f_12.f_2 = 0f;
	Global_1935436.f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	__LIB_1__::func_634(0f);
	Global_1935436.f_11 = 1;
	if (__LIB_0__::func_113())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		__LIB_0__::func_114();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_717(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (__LIB_0__::func_472())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, joaat("HUD_TOASTS"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, joaat("HUD_TOASTS"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (__LIB_0__::func_472())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_TELEMETRY_GANG_SHARES(__LIB_0__::func_299(iParam0), iVar3, iVar1, iParam3);
	iVar4 = __LIB_0__::func_76(iParam0);
	if (__LIB_0__::func_700(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					__LIB_1__::func_635(1, iVar1);
					__LIB_1__::func_635(8, iVar1);
					__LIB_1__::func_635(7, iVar1);
					break;
				case 12:
					__LIB_1__::func_635(6, iVar1);
					break;
				case 53:
					__LIB_1__::func_635(3, iVar1);
					__LIB_1__::func_635(7, iVar1);
					__LIB_1__::func_635(4, iVar1);
					break;
				case 20:
					__LIB_1__::func_635(8, iVar1);
					break;
				case 19:
					__LIB_1__::func_635(1, iVar1);
					__LIB_1__::func_635(2, iVar1);
					break;
				case 24:
					__LIB_1__::func_635(3, iVar1);
					__LIB_1__::func_635(9, iVar1);
					__LIB_1__::func_635(20, iVar1);
					break;
				case 28:
					__LIB_1__::func_635(1, iVar1);
					break;
				case 34:
					__LIB_1__::func_635(23, iVar1);
					__LIB_1__::func_635(2, iVar1);
					__LIB_1__::func_635(18, iVar1);
					break;
				case 29:
					__LIB_1__::func_635(0, iVar1);
					__LIB_1__::func_635(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					__LIB_1__::func_635(0, iVar1);
					__LIB_1__::func_635(3, iVar1);
					__LIB_1__::func_635(2, iVar1);
					__LIB_1__::func_635(11, iVar1);
					__LIB_1__::func_635(6, iVar1);
					__LIB_1__::func_635(25, iVar1);
					__LIB_1__::func_635(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					__LIB_1__::func_635(5, iVar1);
					break;
				case 63:
					__LIB_1__::func_635(1, iVar1);
					__LIB_1__::func_635(3, iVar1);
					break;
				case 37:
					__LIB_1__::func_635(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
			{
				__LIB_1__::func_635(7, iVar1);
				__LIB_1__::func_635(4, iVar1);
			}
			else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
			{
				__LIB_1__::func_635(8, iVar1);
				__LIB_1__::func_635(15, iVar1);
			}
			else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
			{
				__LIB_1__::func_635(3, iVar1);
			}
			else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
			{
				__LIB_1__::func_635(6, iVar1);
				__LIB_1__::func_635(3, iVar1);
			}
			else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
			{
				__LIB_1__::func_635(9, iVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", __LIB_0__::func_473()));
	if (!__LIB_0__::func_474(629))
	{
		__LIB_1__::func_240(629, 0);
	}
}

void func_718(int iParam0)
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
	__LIB_0__::func_782(iParam0, 32);
	__LIB_1__::func_643();
}

void func_719(int iParam0, struct<2> Param1)
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
	if (!__LIB_1__::func_636(iParam0, Param1))
	{
	}
	if (!__LIB_1__::func_637(iParam0, Param1.f_1))
	{
	}
}

int func_720(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!__LIB_1__::func_416(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!__LIB_1__::func_416(iParam1, &Var29))
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

void func_721(int iParam0)
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
	__LIB_0__::func_783(iParam0, 32);
	__LIB_1__::func_643();
}

void func_722(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	if (Global_1898329 <= 0)
	{
		return;
	}
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_702(iParam0))
	{
		__LIB_1__::func_559(iParam0, 0, 2);
	}
	iVar0 = __LIB_0__::func_80(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (Global_1898329 > 1)
	{
		Global_1898330[iVar1] = Global_1898330[(Global_1898329 - 1)];
		Global_1898346[iVar1 /*6*/] = { Global_1898346[(Global_1898329 - 1) /*6*/] };
		Global_1898330[(Global_1898329 - 1)] = -1;
		Global_1898346[(Global_1898329 - 1) /*6*/] = { Var2 };
	}
	else
	{
		Global_1898330[iVar1] = -1;
		Global_1898346[iVar1 /*6*/] = { Var2 };
	}
	Global_1898329 = (Global_1898329 - 1);
	if (Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_723(int iParam0)
{
	Global_36580 = iParam0;
}

void func_724(int iParam0)
{
	Global_1900383.f_316 = (Global_1900383.f_316 - (Global_1900383.f_316 && iParam0));
}

void func_725()
{
	Global_1905944.f_5695 = 1;
}

void func_726(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
}

void func_727(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

void func_728(var uParam0)
{
	__LIB_0__::func_63(&(uParam0->f_10), 4, 1);
	__LIB_0__::func_63(&(uParam0->f_10), 8, 1);
	__LIB_0__::func_63(&(uParam0->f_10), 16, 1);
}

void func_729(var uParam0)
{
	__LIB_0__::func_63(&(uParam0->f_10), 2, 1);
}

void func_730(var uParam0)
{
	__LIB_0__::func_63(&(uParam0->f_10), 1, 1);
}

void func_731(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(sParam0);
}

bool func_732(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_733(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_734(var uParam0)
{
	struct<175> Var0;
	Var0 = 1;
	Var0.f_13 = 11;
	Var0.f_146 = 1097859072;
	Var0.f_147 = 1101004800;
	Var0.f_174 = 4;
	MISC::_COPY_MEMORY(uParam0, &Var0, 242);
}

void func_735(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
	PED::_0xF634E2892220EF34(iParam0, iParam2);
}

void func_736(var uParam0, int iParam1)
{
	uParam0->f_151 = (uParam0->f_151 || iParam1);
}

void func_737(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (__LIB_0__::func_84(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4) && !__LIB_0__::func_138(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, __LIB_0__::func_93());
		__LIB_0__::func_88(uParam0, 8);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		__LIB_1__::func_575(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		__LIB_0__::func_88(uParam0, 16);
	}
}

void func_738(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (bParam3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
	if (bParam4)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	}
	__LIB_1__::func_538(0);
	if (bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			}
		}
	}
}

void func_739(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_1__::func_589(uParam0) };
	__LIB_1__::func_481(uParam0, &Var0);
}

void func_740(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_174[iVar0 /*9*/])))
		{
			__LIB_1__::func_576(uParam0, &(uParam0->f_174[iVar0 /*9*/]));
		}
		iVar0++;
	}
	Var1 = { __LIB_0__::func_137() };
	__LIB_1__::func_576(uParam0, &Var1);
	Var1 = { __LIB_1__::func_589(uParam0) };
	__LIB_1__::func_576(uParam0, &Var1);
}

bool func_741(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;
	Var0 = { __LIB_1__::func_479(uParam0) };
	Var8 = { __LIB_1__::func_589(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

bool func_742(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
				return true;
			}
		}
		else if (__LIB_1__::func_104(cParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_743(var uParam0)
{
	if ((!__LIB_0__::func_84(uParam0, 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156)) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_156, false))
	{
		__LIB_1__::func_536(uParam0);
		__LIB_1__::func_591(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_156, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_156);
		}
		__LIB_0__::func_88(uParam0, 32768);
	}
}

bool func_744()
{
	var uVar0;
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(4))
		{
			return true;
		}
	}
	return (PED::_IS_METAPED_USING_COMPONENT(Global_35, joaat("HATS")) || __LIB_1__::func_549(-2061583405, &uVar0));
}

int func_745(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
				__LIB_1__::func_223(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_746(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
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
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		__LIB_1__::func_223(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, bParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_747(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	__LIB_1__::func_148(&(uParam0->f_1));
}

void func_748(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (bParam1 && !__LIB_0__::func_139(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = __LIB_0__::func_17(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	__LIB_1__::func_29(iVar0);
	*uParam0 = 0;
}

bool func_749(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (bLocal_14)
	{
		bLocal_14 = false;
		HUD::_TEXT_DATABASE_REQUEST(sLocal_34);
		iLocal_35 = 0;
	}
	if (HUD::_TEXT_DATABASE_HAS_LOADED(sLocal_34) == 0)
	{
		bVar0 = false;
	}
	if (__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		PED::_0xAE6004120C18DF97(__LIB_0__::func_271(uParam0->f_2), 0, 0);
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	__LIB_1__::func_283(&uLocal_23, 0);
	__LIB_1__::func_600(0);
	__LIB_0__::func_928(&uLocal_36, Global_35, "ARTHUR", 0);
	__LIB_0__::func_928(&uLocal_36, __LIB_0__::func_271(uParam0->f_2), __LIB_0__::func_781(uParam0->f_2), 0);
	return true;
}

bool func_750(int iParam0)
{
	if (-1829635046 == __LIB_1__::func_548(81053684))
	{
		if (__LIB_1__::func_610(iParam0))
		{
			return true;
		}
	}
	else if (__LIB_1__::func_549(-525676072, iParam0))
	{
		if (__LIB_1__::func_610(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_751(var uParam0, var uParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_68)))
	{
		return 0;
	}
	if (__LIB_1__::func_691(uParam1, &(uParam0->f_68), 3, -1, 0, 0) && __LIB_0__::func_751(uParam1))
	{
		uParam1->f_281 = 1;
		return 1;
	}
	return 0;
}

void func_752()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_31(iVar0) && __LIB_1__::func_22(iVar0))
		{
			__LIB_0__::func_288(iVar0, 56, 1);
		}
		iVar0++;
	}
	__LIB_1__::func_283(&(Global_1359489.f_40), 1);
}

int func_753()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_1__::func_693(Global_1879514.f_1);
	if (Global_1425247.f_53)
	{
		return 0;
	}
	if (__LIB_0__::func_318(iVar0))
	{
		if (Global_1879514.f_18)
		{
			return Global_1879514.f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

void func_754(var uParam0)
{
	if (!__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		return;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_48)))
	{
		__LIB_1__::func_283(&(uParam0->f_48), 0);
	}
	switch (uParam0->f_13)
	{
		case 2:
			if (!__LIB_0__::func_750(&(uParam0->f_10), 1))
			{
				if (!PED::IS_PED_ON_FOOT(Global_35))
				{
					if (!uParam0->f_51)
					{
						uParam0->f_51 = 1;
						__LIB_1__::func_148(&(uParam0->f_48));
					}
					else if (__LIB_0__::func_265(&(uParam0->f_48)) > 5f)
					{
						__LIB_0__::func_63(&(uParam0->f_10), 1, 1);
						__LIB_1__::func_688(uParam0, "departLine", 0, 0, 0, -1);
						__LIB_1__::func_148(&(uParam0->f_48));
					}
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_750(&(uParam0->f_10), 1))
			{
				if (__LIB_0__::func_265(&(uParam0->f_48)) > 4f)
				{
					__LIB_0__::func_63(&(uParam0->f_10), 1, 1);
					__LIB_1__::func_688(uParam0, "departLine", 0, 0, 0, -1);
					__LIB_1__::func_148(&(uParam0->f_48));
				}
				return;
			}
			if (!__LIB_0__::func_750(&(uParam0->f_10), 2))
			{
				if (__LIB_0__::func_94(Global_35, __LIB_1__::func_584(), 1) > 150f)
				{
					__LIB_0__::func_63(&(uParam0->f_10), 2, 1);
					__LIB_1__::func_688(uParam0, "rideBanter", 0, 0, 0, -1);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_755()
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
	__LIB_0__::func_37(&(Global_1359489.f_55));
	if (__LIB_1__::func_198(joaat("CSTAG_PLAYER_AWAY"), 1))
	{
		__LIB_1__::func_449(joaat("CSTAG_PLAYER_AWAY"), 1, 0);
	}
}

int func_756(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < __LIB_0__::func_419())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == __LIB_0__::func_352(iVar0))
		{
			if (__LIB_1__::func_707(__LIB_0__::func_420(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_757(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	__LIB_1__::func_696(48);
	__LIB_0__::func_703(0, -1);
}

int func_758()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (__LIB_1__::func_707(__LIB_0__::func_421(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_759(int iParam0)
{
	int iVar0;
	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			__LIB_1__::func_696(48);
		}
	}
}

int func_760(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && __LIB_1__::func_707(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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

bool func_761(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	__LIB_0__::func_799(&iParam0);
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
		else if (!__LIB_1__::func_700(iParam0, &uVar26, 0))
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

int func_762()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (__LIB_1__::func_707(__LIB_0__::func_547(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_763(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (iParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				iVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (iParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				iVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (iParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (iParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (__LIB_1__::func_707(iVar0, 1, 0) && __LIB_1__::func_707(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_764(int iParam0)
{
	int iVar0;
	if (__LIB_1__::func_707(iParam0, 1, 0))
	{
		iVar0 = __LIB_1__::func_614(iParam0, 0, 0);
	}
	return iVar0;
}

int func_765(int iParam0, var uParam1)
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
	__LIB_1__::func_701(iParam0, 1);
	return 1;
}

int func_766(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
		__LIB_1__::func_708(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
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

int func_767()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = __LIB_0__::func_421(iVar1);
		if (__LIB_1__::func_707(iVar2, 1, 0) || __LIB_0__::func_530(__LIB_0__::func_529(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_768(int iParam0)
{
	if (__LIB_0__::func_599(iParam0) && __LIB_1__::func_707(iParam0, 1, 0))
	{
		return true;
	}
	else if (__LIB_0__::func_600(iParam0) && __LIB_1__::func_609(iParam0))
	{
		return true;
	}
	return false;
}

bool func_769(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	__LIB_0__::func_720(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	__LIB_0__::func_720(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var8))
		{
			iVar7 = iVar6;
			return __LIB_1__::func_707(iVar7, 1, 0);
		}
	}
	return true;
}

bool func_770(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_1__::func_707(__LIB_1__::func_8(iVar0, iParam0), 1, 0))
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

bool func_771(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_1__::func_707(__LIB_1__::func_9(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

void func_772(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	__LIB_1__::func_620(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_773(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		__LIB_1__::func_192(uParam0);
	}
}

void func_774(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		__LIB_1__::func_283(&(Global_1359489.f_40), 1);
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
			__LIB_1__::func_283(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			__LIB_0__::func_37(&(Global_1360165[iParam0 /*1157*/].f_130));
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

int func_775(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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

void func_776(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
		if (!__LIB_1__::func_713(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
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

void func_777(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_1__::func_616(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER")))
		{
			Global_1879514.f_12 = 1;
		}
		else
		{
			Global_1879514.f_12 = 0;
		}
		__LIB_1__::func_717(iParam0, iParam1, fParam3, iParam4);
	}
}

void func_778(int iParam0)
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
	__LIB_1__::func_719(iParam0, Var0);
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

void func_779(int iParam0, int iParam1)
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
	__LIB_1__::func_720(iParam0, iParam1);
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

void func_780()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	if (!__LIB_0__::func_1(Global_1935630, 8192))
	{
		return;
	}
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_0__::func_8(&Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP1")))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP2")))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP3")))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP4")))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP5")))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP6")))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP7")))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP8")))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP9")))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(10f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS"))))));
	fVar0 = (fVar0 + (0.6f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(25f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("UNIQUE_BEATS_COMPLETED"))))));
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("GANG_AMBUSH_ENCOUNTERED"))))));
	fVar0 = (fVar0 + (0.3333333f * __LIB_0__::func_646(6f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("GANG_HIDEOUT_COMPLETED"))))));
	fVar0 = (fVar0 + (3f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("DISCOVERABLE_FOUND"))))));
	iVar1 = __LIB_0__::func_648();
	fVar0 = (fVar0 + (0.1111111f * __LIB_0__::func_646(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ACTRESSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ACTRESSES"))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_AMERICANS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_AMERICANS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ANIMALS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ANIMALS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ARTISTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ARTISTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GIRLS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GIRLS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GUNSLINGERS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GUNSLINGERS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_HORSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_HORSES")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_INVENTIONS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_INVENTIONS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_LANDMARKS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_LANDMARKS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_PLANTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_PLANTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_SPORTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_SPORTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_VEHICLES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_VEHICLES")))));
	fVar0 = (fVar0 + __LIB_0__::func_646(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * __LIB_0__::func_646(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(__LIB_1__::func_5()))));
	if (__LIB_1__::func_187(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 499813453)));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 666607663))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), -220219788))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 218622660))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 390004462))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 6410548))));
	fVar0 = (fVar0 + (1f * __LIB_0__::func_646(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SHACK_FOUND"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("KILLS"), joaat("LEGENDARY_ANIMALS"))))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("FISH")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(joaat("GANGS")));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HERBS")), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HORSES")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48)));
	__LIB_1__::func_702(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_838(joaat("HORSES_REACHED_MAX_BOND"))))));
	fVar5 = BUILTIN::TO_FLOAT(__LIB_1__::func_6());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("BLACKJACK"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("DOMINOES_HAND"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("FIVE_FINGER"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("POKER_HAND"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SPECIAL_PED_INTERACTION"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("BATHS_TAKEN"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SHOWS_SEEN"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("THEATRE_VISITS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("AMMO"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("FOOD"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("COACH"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("HOME"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("SHOP"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("TRAIN"))))));
	Var6 = { __LIB_0__::func_14(joaat("TOTAL_PROGRESS_MADE")) };
	fVar8 = __LIB_0__::func_650(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (__LIB_0__::func_6(Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < Global_1898329)
		{
			if (!__LIB_0__::func_6(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = __LIB_0__::func_291(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					__LIB_1__::func_722(Global_1898330[iVar61]);
				}
				else
				{
					__LIB_1__::func_130(iVar61, 0);
					if (__LIB_0__::func_700(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = __LIB_0__::func_299(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (Global_40.f_450[iVar63] > -1 && Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = __LIB_0__::func_299(Global_1347702[Global_40.f_450[iVar63] /*49*/].f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_TELEMETRY_GAME_PROGRESS(__LIB_0__::func_299(Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_781(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;
	if (!__LIB_0__::func_83(iParam0))
	{
		return;
	}
	uVar0 = Global_1835011[iParam0 /*74*/].f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { Global_1835011[iParam0 /*74*/].f_18 };
	MemCopy(&Var5, {Global_1835011[iParam0 /*74*/].f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, Global_1835011[iParam0 /*74*/].f_26, MISC::GET_HASH_KEY(&Var13), iVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, Global_1835011[iParam0 /*74*/].f_26, joaat("TOAST_LOG_BLIPS"));
}

bool func_782(var uParam0, var uParam1, int iParam2)
{
	if (__LIB_0__::func_84(uParam1, 1))
	{
		return false;
	}
	switch (__LIB_0__::func_773(uParam1))
	{
		case 0:
			return iParam2 >= 0;
		case 1:
			return uParam1->f_11 == iParam2;
		case 3:
			return uParam0->f_14 == 1;
		case 2:
			return uParam0->f_14 == 2;
	}
	return false;
}

bool func_783(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, var uParam5)
{
	bool bVar0;
	if (iParam2 == -1)
	{
		if (__LIB_0__::func_765(uParam0, 2, iParam4))
		{
			*uParam5 = *iParam4;
		}
		if (__LIB_0__::func_765(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (__LIB_0__::func_765(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (__LIB_0__::func_765(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (__LIB_0__::func_765(uParam0, 2, iParam4))
	{
		*uParam5 = *iParam4;
	}
	if (__LIB_0__::func_765(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (__LIB_0__::func_765(uParam0, 5, iParam4))
	{
		cParam3->f_9 = *iParam4;
	}
	if (*uParam5 == 1 || *uParam5 == 3)
	{
		if (iParam1 == 0)
		{
			if ((cParam3->f_9 == 7 || cParam3->f_9 == 8) || cParam3->f_9 == 9)
			{
				bVar0 = true;
			}
		}
		else if (iParam1 == 1 || iParam1 == 2)
		{
			if (cParam3->f_9 == 3 || cParam3->f_9 == 5)
			{
				bVar0 = true;
			}
		}
		if ((bVar0 && !uParam0->f_272) || (!bVar0 && cParam3->f_11 == iParam2))
		{
			if (__LIB_0__::func_765(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (__LIB_0__::func_765(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

void func_784(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (__LIB_0__::func_84(uParam1[iVar0 /*16*/], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((uParam1[iVar0 /*16*/])->f_9 == 7)
					{
						__LIB_1__::func_100(uParam1[iVar0 /*16*/], 1);
					}
					break;
				case 1:
				case 2:
					if ((uParam1[iVar0 /*16*/])->f_9 == 3)
					{
						__LIB_1__::func_100(uParam1[iVar0 /*16*/], 1);
					}
					break;
				case 3:
					if ((uParam1[iVar0 /*16*/])->f_9 == 2)
					{
						__LIB_1__::func_100(uParam1[iVar0 /*16*/], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

int func_785(int iParam0)
{
	if (__LIB_0__::func_700(iParam0) != 4)
	{
		return -1;
	}
	return __LIB_0__::func_76(iParam0);
}

void func_786(int iParam0)
{
	if (!__LIB_1__::func_75(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

bool func_787(var uParam0)
{
	if (__LIB_0__::func_1(Global_1935630, 2048))
	{
		return false;
	}
	if (__LIB_0__::func_0(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		__LIB_1__::func_164(0);
		HUD::DISPLAY_HUD(true);
		MAP::DISPLAY_RADAR(true);
		return true;
	}
	return false;
}

int func_788(int iParam0)
{
	if (__LIB_0__::func_139(Global_1392915.f_121[iParam0 /*20*/].f_3))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1744263063);
		__LIB_1__::func_196(&(Global_1392915.f_121[iParam0 /*20*/].f_3), 1, 0);
		Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
		return 1;
	}
	Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
	return 0;
}

void func_789(var uParam0)
{
	if (__LIB_0__::func_139(uParam0->f_3))
	{
		__LIB_1__::func_196(&(uParam0->f_3), 1, 0);
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_6 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
}

void func_790(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (!Global_1879514.f_11)
	{
		iVar0 = __LIB_1__::func_753();
		iVar1 = MISC::GET_HASH_KEY(&cParam0);
		if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
		{
			if (__LIB_0__::func_700(Global_1879514.f_1) == 1)
			{
				__LIB_0__::func_896(5, 1);
			}
			else if (__LIB_0__::func_700(Global_1879514.f_1) == 8 && (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(Global_1879514.f_1) /*49*/].f_12, 1) || __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(Global_1879514.f_1) /*49*/].f_12, 33554432)))
			{
				__LIB_0__::func_896(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), 3);
	}
}

bool func_791(int iParam0, int iParam1, var uParam2)
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

bool func_792(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (__LIB_1__::func_761(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(__LIB_0__::func_162(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_793(int iParam0, int iParam1, int iParam2)
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
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = __LIB_1__::func_764(iVar9);
	iVar2 = __LIB_1__::func_764(iVar10);
	iVar3 = __LIB_1__::func_764(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = __LIB_1__::func_764(iVar12);
	}
	iVar5 = __LIB_0__::func_439(iVar9);
	iVar6 = __LIB_0__::func_439(iVar10);
	iVar7 = __LIB_0__::func_439(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = __LIB_0__::func_439(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_794(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_1__::func_760(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 1:
			return __LIB_1__::func_760(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 2:
			return __LIB_1__::func_760(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 4:
			return __LIB_1__::func_760(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 5:
			return __LIB_1__::func_760(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 6:
			return __LIB_1__::func_760(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return __LIB_1__::func_760(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 9:
			return __LIB_1__::func_760(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 10:
			return __LIB_1__::func_760(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 11:
			return __LIB_1__::func_760(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		default:
			break;
	}
	return 0;
}

bool func_795(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	*iParam1 = iParam2;
	__LIB_1__::func_111(iParam0, iParam1);
	Var0 = { __LIB_1__::func_615(iParam0, 0, 1) };
	iVar5 = __LIB_0__::func_936(iParam0, &Var0, 0, 0);
	iVar6 = __LIB_0__::func_788(iParam0, 0);
	if ((iVar5 > 1 && !__LIB_1__::func_195()) && (iVar6 + iParam2) >= iVar5)
	{
		if (__LIB_0__::func_192(iParam0, -2051813666))
		{
			__LIB_1__::func_240(583, 1);
		}
		else
		{
			__LIB_1__::func_240(582, 0);
		}
	}
	if (__LIB_1__::func_761(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_796(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_192(iParam0, -2017733358);
	if (__LIB_1__::func_762() < 3)
	{
		if (bVar0)
		{
			if (__LIB_1__::func_763(__LIB_0__::func_432(iParam0), iParam0))
			{
				__LIB_1__::func_424(79, __LIB_0__::func_776(__LIB_0__::func_432(iParam0)), 1);
			}
			else
			{
				__LIB_1__::func_424(78, __LIB_0__::func_776(__LIB_0__::func_432(iParam0)), 1);
			}
		}
		else
		{
			__LIB_1__::func_424(80, __LIB_0__::func_776(__LIB_0__::func_789(iParam0)), 1);
		}
	}
}

int func_797(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_760(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		__LIB_1__::func_113(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	__LIB_1__::func_430(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_798(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = __LIB_1__::func_765(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = __LIB_1__::func_765(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = __LIB_1__::func_765(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = __LIB_1__::func_765(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = __LIB_1__::func_765(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = __LIB_1__::func_765(iParam0, &(Global_1946804.f_2657.f_25));
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

void func_799(int iParam0, int iParam1)
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
				__LIB_1__::func_766(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				__LIB_1__::func_766(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

bool func_800(int iParam0)
{
	var uVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_0__::func_774(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return __LIB_1__::func_761(iParam0, &uVar0, 1, 0, 0);
	}
	return __LIB_1__::func_707(iParam0, 1, 0);
}

char* func_801(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (__LIB_1__::func_758() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", __LIB_0__::func_964(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", __LIB_1__::func_767(), 12);
			}
			break;
		case joaat("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (__LIB_0__::func_942() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", __LIB_0__::func_965(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", __LIB_0__::func_942(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", __LIB_0__::func_966(), 13);
			}
			break;
		case joaat("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (__LIB_0__::func_438() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", __LIB_0__::func_528(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", __LIB_0__::func_438(), 10);
			}
			break;
		case joaat("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, __LIB_1__::func_34(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_802(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
					bVar1 = __LIB_1__::func_768(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = __LIB_1__::func_768(iVar2);
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

char* func_803(int iParam0)
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
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = __LIB_1__::func_764(iVar9);
	iVar2 = __LIB_1__::func_764(iVar10);
	iVar3 = __LIB_1__::func_764(iVar11);
	iVar5 = __LIB_0__::func_439(iVar9);
	iVar6 = __LIB_0__::func_439(iVar10);
	iVar7 = __LIB_0__::func_439(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = __LIB_1__::func_764(iVar12);
		iVar8 = __LIB_0__::func_439(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

bool func_804(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_1__::func_768(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_1__::func_768(iVar0))
		{
			*sParam2++;
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
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_1__::func_768(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_1__::func_768(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_1__::func_768(iVar1))
		{
			*sParam2++;
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
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_1__::func_768(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_1__::func_768(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_1__::func_768(iVar1))
		{
			*sParam2++;
		}
		if (__LIB_1__::func_768(iVar2))
		{
			*sParam2++;
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
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (__LIB_1__::func_768(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (__LIB_1__::func_768(iVar0))
		{
			*sParam2++;
		}
		if (__LIB_1__::func_768(iVar1))
		{
			*sParam2++;
		}
		if (__LIB_1__::func_768(iVar2))
		{
			*sParam2++;
		}
		if (__LIB_1__::func_768(iVar3))
		{
			*sParam2++;
		}
		if (((__LIB_1__::func_768(iVar0) && __LIB_1__::func_768(iVar1)) && __LIB_1__::func_768(iVar2)) && __LIB_1__::func_768(iVar3))
		{
			return true;
		}
	}
	return false;
}

int func_805(int iParam0, int iParam1, int iParam2)
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
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = __LIB_1__::func_764(iVar9);
	iVar2 = __LIB_1__::func_764(iVar10);
	iVar3 = __LIB_1__::func_764(iVar11);
	iVar5 = __LIB_0__::func_439(iVar9);
	iVar6 = __LIB_0__::func_439(iVar10);
	iVar7 = __LIB_0__::func_439(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = __LIB_1__::func_764(iVar12);
		iVar8 = __LIB_0__::func_439(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_806(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_2() != -1)
	{
		return -1;
	}
	if (Global_1899528.f_211)
	{
		return -1;
	}
	iVar2 = -1;
	if (uParam0->f_2 == -1)
	{
		return -1;
	}
	if (uParam0->f_2 != __LIB_0__::func_12())
	{
		return -1;
	}
	if (!__LIB_1__::func_224(uParam0->f_1))
	{
		return -1;
	}
	if (__LIB_0__::func_730(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = __LIB_1__::func_47(*uParam0);
	if (iVar2 == -1)
	{
		if (!__LIB_1__::func_226(&iVar2))
		{
			return -1;
		}
	}
	__LIB_1__::func_57(*uParam0, iVar2);
	bVar1 = __LIB_1__::func_77(uParam0->f_1, 131072);
	__LIB_1__::func_78(uParam0->f_1);
	iVar3 = __LIB_1__::func_317(uParam0->f_1, *uParam0);
	Global_1392915[iVar2 /*12*/] = *uParam0;
	Global_1392915[iVar2 /*12*/].f_1 = uParam0->f_1;
	Global_1392915[iVar2 /*12*/].f_2 = uParam0->f_2;
	Global_1392915[iVar2 /*12*/].f_3 = uParam0->f_3;
	Global_1392915[iVar2 /*12*/].f_4 = iVar3;
	Global_1392915[iVar2 /*12*/].f_5 = uParam0->f_9;
	Global_1392915[iVar2 /*12*/].f_6 = { uParam0->f_5 };
	Global_1392915[iVar2 /*12*/].f_9 = uParam0->f_8;
	Global_1392915[iVar2 /*12*/].f_10 = BUILTIN::FLOOR(uParam0->f_4);
	Global_1392915[iVar2 /*12*/].f_11 = iVar2;
	Global_1392915.f_121[iVar2 /*20*/] = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_2 = bParam1;
	Global_1392915.f_121[iVar2 /*20*/].f_17 = iParam2;
	Global_1392915.f_121[iVar2 /*20*/].f_1 = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_6 = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_12 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_5);
	Global_1392915.f_121[iVar2 /*20*/].f_16 = 0;
	if (Global_1392915.f_121[iVar2 /*20*/].f_12 != 0)
	{
		Global_1392915.f_121[iVar2 /*20*/].f_9 = { INTERIOR::_GET_INTERIOR_POSITION(Global_1392915.f_121[iVar2 /*20*/].f_12) };
	}
	else
	{
		Global_1392915.f_121[iVar2 /*20*/].f_9 = { 0f, 0f, 0f };
	}
	if (bParam1)
	{
		__LIB_1__::func_211(uParam0->f_1, 65536);
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			__LIB_1__::func_211(uParam0->f_1, 2097152);
		}
	}
	if (bVar1)
	{
		__LIB_1__::func_211(uParam0->f_1, 131072);
	}
	if (__LIB_1__::func_241(iVar3) || (!__LIB_0__::func_702(iVar3) && __LIB_0__::func_298(0) != iVar3))
	{
		iVar0 = __LIB_0__::func_80(iVar3);
		if (iVar0 == -1)
		{
			__LIB_1__::func_319(iVar3);
		}
	}
	return iVar2;
}

void func_807(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	__LIB_1__::func_773(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

void func_808(var uParam0, int iParam1)
{
	if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
	{
		__LIB_1__::func_774(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(__LIB_0__::func_271(iParam1), false);
		__LIB_1__::func_774(iParam1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
}

void func_809(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar0);
		if (__LIB_0__::func_13(32768))
		{
			iVar1 = __LIB_0__::func_700(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01"))))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514.f_1 = iParam0;
				Global_1879514.f_19 = __LIB_1__::func_753();
				Global_1879514.f_18 = 1;
			}
		}
	}
	if (__LIB_0__::func_702(iParam0))
	{
		__LIB_1__::func_559(iParam0, 0, 2);
	}
	else if (__LIB_1__::func_44(iParam0))
	{
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam1)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			switch (__LIB_0__::func_76(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514.f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (__LIB_0__::func_76(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514.f_12 = 1;
					break;
				case 9:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
	}
}

int func_810(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	__LIB_0__::func_922(iParam3);
	return __LIB_1__::func_775(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

int func_811(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
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
		__LIB_1__::func_776(iVar0, iParam0, __LIB_0__::func_846(iParam1), 1, 0, 1);
	}
	__LIB_0__::func_660(iParam0);
	return 1;
}

void func_812(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_0__::func_991();
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

void func_813(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	if (!uParam1->f_281)
	{
		return;
	}
	if (iParam2 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (__LIB_0__::func_84(&(uParam1->f_66[iVar0 /*16*/]), 1048576))
		{
			if (__LIB_1__::func_782(uParam0, &(uParam1->f_66[iVar0 /*16*/]), iParam2))
			{
				if (__LIB_1__::func_100(&(uParam1->f_66[iVar0 /*16*/]), 1))
				{
					if (__LIB_0__::func_84(&(uParam1->f_66[iVar0 /*16*/]), 4))
					{
						__LIB_1__::func_45(uParam1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_814(var uParam0)
{
	__LIB_1__::func_784(3, &(uParam0->f_66));
}

bool func_815(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1898330)
	{
		if (__LIB_1__::func_785(Global_1898330[iVar0]) == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_816(int iParam0)
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
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_01"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_01"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_02"));
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_02"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_02"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_03"));
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_03"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_03"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_04"));
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_04"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_04"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_05"));
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_05"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_05"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_06"));
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_06"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_06"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_07"));
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_07"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_07"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_08"));
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_08"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_08"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_09"));
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_09"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_09"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_10"));
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_10"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_10"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_11"));
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_11"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_11"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_12"));
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_12"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_12"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_13"));
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_13"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_13"));
			__LIB_0__::func_703(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			__LIB_0__::func_442(joaat("LEGENDARY_FISH_14"));
			__LIB_1__::func_786(joaat("LEGENDARY_FISHING_SPOT_14"));
			__LIB_0__::func_443(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

bool func_817(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	char cVar2[128];
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	if (!bParam4 && !uParam0->f_270)
	{
		if (!__LIB_1__::func_147(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return false;
		}
	}
	if (!uParam0->f_271)
	{
		iVar20 = uParam0->f_278;
		while (iVar20 <= (uParam0->f_277 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_264.f_1 = 0;
			uParam0->f_264.f_3 = iVar20;
			if (__LIB_0__::func_764(uParam0, 0))
			{
				if (__LIB_1__::func_783(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (__LIB_0__::func_765(uParam0, 1, &iVar0))
					{
					}
					if (__LIB_0__::func_766(uParam0, 3, &cVar2))
					{
					}
					if (__LIB_0__::func_765(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (__LIB_0__::func_765(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (__LIB_0__::func_765(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (__LIB_0__::func_765(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (__LIB_0__::func_765(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 2 && uParam0->f_273 < 2)
						{
							if (!__LIB_1__::func_46(uParam0, &cVar2, uParam0->f_273))
							{
								*(uParam0[uParam0->f_273 /*16*/]) = { cVar2 };
								__LIB_0__::func_324(uParam0[uParam0->f_273 /*16*/], 1048576);
								uParam0->f_273++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 2 && uParam0->f_274 < 2)
						{
							uParam0->f_33[uParam0->f_274 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_33[uParam0->f_274 /*16*/]), 1048576);
							uParam0->f_274++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 10 && uParam0->f_275 < 10)
						{
							uParam0->f_66[uParam0->f_275 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_66[uParam0->f_275 /*16*/]), 1048576);
							if (!bVar19 && __LIB_0__::func_84(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(&(uParam0->f_66[uParam0->f_275 /*16*/]));
								bVar19 = true;
							}
							uParam0->f_275++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_276 < 2)
					{
						if (!__LIB_1__::func_46(&(uParam0->f_227), &cVar2, uParam0->f_276))
						{
							uParam0->f_227[uParam0->f_276 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_227[uParam0->f_276 /*16*/]), 1048576);
							uParam0->f_276++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_278 = iVar20 + 1;
				uParam0->f_269 = 0;
				return false;
			}
			iVar20++;
		}
		uParam0->f_271 = 1;
	}
	if (!__LIB_0__::func_751(uParam0) && uParam0->f_279 > 0)
	{
		iVar20 = uParam0->f_280;
		while (iVar20 <= (uParam0->f_279 - 1))
		{
			uParam0->f_264.f_1 = 0;
			uParam0->f_264.f_3 = iVar20;
			iVar22 = 0;
			if (__LIB_0__::func_764(uParam0, 12))
			{
				if (__LIB_0__::func_765(uParam0, 13, &iVar0))
				{
				}
				if (__LIB_0__::func_765(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (STREAMING::IS_MODEL_VALID(iVar22) && iVar22 != 0)
			{
				uParam0->f_260[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_280 = iVar20 + 1;
				uParam0->f_269 = 0;
				return false;
			}
			iVar20++;
		}
	}
	uParam0->f_269 = 1;
	uParam0->f_278 = 0;
	uParam0->f_280 = 0;
	uParam0->f_271 = 0;
	uParam0->f_272 = 1;
	if (!bParam4)
	{
		__LIB_0__::func_767(uParam0);
	}
	return true;
}

void func_818(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;
	if (__LIB_0__::func_192(iParam0, 1989861793))
	{
		iVar0 = __LIB_0__::func_372(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (__LIB_1__::func_48(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = __LIB_0__::func_374(iVar14, iVar1);
					if (iVar15 != iParam0 && __LIB_0__::func_144(iVar15, 0))
					{
						if (__LIB_1__::func_603(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				__LIB_0__::func_375(iVar1);
				if (bVar13)
				{
					__LIB_1__::func_604(iParam0);
				}
				else
				{
					__LIB_1__::func_240(306, 0);
				}
			}
		}
	}
}

void func_819(int iParam0)
{
	__LIB_1__::func_60(&(Global_1392915[iParam0 /*12*/]));
	__LIB_1__::func_789(&(Global_1392915.f_121[iParam0 /*20*/]));
}

int func_820(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_831(iParam1))
	{
		return 0;
	}
	if (__LIB_1__::func_127(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { __LIB_0__::func_949(0) };
	Var1.f_4 = iVar0;
	if (!__LIB_1__::func_792(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

void func_821(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_702(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	if (bParam1)
	{
		if (__LIB_0__::func_299(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				__LIB_1__::func_781(__LIB_0__::func_76(iParam0));
			}
			if (__LIB_0__::func_2() != 0)
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(iParam0), 0);
			}
			else
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(iParam0), Global_265238.f_79565.f_208.f_17);
			}
		}
	}
	__LIB_1__::func_232(iParam0);
	if (!__LIB_0__::func_6(__LIB_0__::func_298(0)))
	{
		__LIB_1__::func_242(iParam0, 3);
		__LIB_0__::func_267(bParam2);
		if (__LIB_0__::func_2() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			__LIB_1__::func_142(1);
		}
		__LIB_1__::func_318(iParam0, -1);
		if (bParam1 && !__LIB_0__::func_13(2))
		{
			__LIB_0__::func_47(&Global_0, 1024);
		}
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_8(&(Global_1347343.f_11), 536870912);
			__LIB_1__::func_84(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				__LIB_1__::func_312(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				__LIB_1__::func_299(0);
			}
		}
		if (__LIB_0__::func_2() == -1)
		{
			iVar1 = __LIB_1__::func_24(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = __LIB_1__::func_194();
				switch (iVar1)
				{
					case 0:
						__LIB_1__::func_233(0);
						break;
					case 1:
						__LIB_1__::func_233(1);
						break;
					case 2:
						__LIB_1__::func_233(2);
						break;
					case 3:
						__LIB_1__::func_233(3);
						break;
					case 4:
						__LIB_1__::func_233(4);
						break;
					case 5:
						__LIB_1__::func_233(5);
						break;
					case 6:
						__LIB_1__::func_233(5);
						break;
					case 7:
						__LIB_1__::func_233(7);
						break;
					case 8:
						__LIB_1__::func_233(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (__LIB_0__::func_76(iParam0))
				{
					case 7:
					case 8:
					case 36:
						__LIB_1__::func_233(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (__LIB_0__::func_76(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						__LIB_1__::func_233(11);
						break;
					default:
						iVar1 = __LIB_1__::func_194();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									__LIB_1__::func_234(0);
									break;
								case 1:
									__LIB_1__::func_234(1);
									break;
								case 2:
									__LIB_1__::func_234(2);
									break;
								case 3:
									__LIB_1__::func_234(3);
									break;
								case 4:
									__LIB_1__::func_234(4);
									break;
								case 5:
									__LIB_1__::func_234(5);
									break;
								case 6:
									__LIB_1__::func_234(5);
									break;
								case 7:
									__LIB_1__::func_234(7);
									break;
								case 8:
									__LIB_1__::func_234(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		__LIB_0__::func_301(1);
	}
	else
	{
		__LIB_1__::func_318(iParam0, -1);
		__LIB_1__::func_242(iParam0, 4);
	}
	__LIB_1__::func_144(iParam0, 0);
}

int func_822(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_61();
	switch (iVar0)
	{
		case 43:
			*uParam0 = { -1340.417f, 2447.74f, 307.6064f };
			*uParam1 = 69.2479f;
			break;
		case 71:
			*uParam0 = { -112.9493f, -14.3514f, 94.8418f };
			*uParam1 = 78.7552f;
			break;
		case 98:
			*uParam0 = { 676.6314f, -1223.84f, 43.8567f };
			*uParam1 = 174.642f;
			break;
		case 9:
			*uParam0 = { 1853.359f, -1835.935f, 42.0656f };
			*uParam1 = 25.3398f;
			break;
		case 4:
			*uParam0 = { 2279.679f, -753.1292f, 40.9928f };
			*uParam1 = 65.2774f;
			break;
		case 79:
			*uParam0 = { 2370.169f, 1336.931f, 105.273f };
			*uParam1 = 302.1729f;
			break;
		case 22:
			*uParam0 = { -2590.198f, 465.025f, 145.1573f };
			*uParam1 = 77.3385f;
			break;
		case 37:
			*uParam0 = { -1644.85f, -1376.873f, 82.9681f };
			*uParam1 = 340.856f;
			break;
		case 58:
			*uParam0 = { __LIB_1__::func_546(4) };
			*uParam1 = 0f;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_823(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
			__LIB_1__::func_695(iParam0, 1, 0, bParam2, iParam1);
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

void func_824(int iParam0, int iParam1, int iParam2)
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
			break;
		case joaat("MONEY_MONEYSTACK"):
			__LIB_1__::func_797(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!__LIB_1__::func_202())
			{
				__LIB_1__::func_797(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			__LIB_1__::func_797(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			__LIB_1__::func_797(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			__LIB_1__::func_797(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			__LIB_1__::func_797(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			__LIB_1__::func_797(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			__LIB_1__::func_797(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			__LIB_1__::func_797(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			__LIB_1__::func_797(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			__LIB_1__::func_797(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			__LIB_1__::func_797(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			__LIB_1__::func_797(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			__LIB_1__::func_797(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_825(int iParam0, int iParam1, int iParam2)
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
	Var0 = { __LIB_1__::func_615(iParam0, 0, 1) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return __LIB_1__::func_792(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_826(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (__LIB_0__::func_814(Param1, iParam5, &Var5, 0))
	{
		__LIB_0__::func_939(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	__LIB_1__::func_792(iParam0, &Var19, &Var0, 1, 752097756, 0);
	__LIB_1__::func_556(Var19, 1);
}

bool func_827(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;
	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (__LIB_0__::func_144(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (__LIB_0__::func_800(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					__LIB_0__::func_610(&Var7);
					if (__LIB_1__::func_792(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							__LIB_1__::func_556(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_828(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			__LIB_1__::func_798(iVar1, 0, bParam0);
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

int func_829(int iParam0, var uParam1, int iParam2, bool bParam3)
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
		__LIB_1__::func_807(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

void func_830(int iParam0)
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = Global_1392915[iParam0 /*12*/];
	if (__LIB_1__::func_56(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_6(Global_1392915[iParam0 /*12*/].f_4))
	{
		__LIB_1__::func_559(Global_1392915[iParam0 /*12*/].f_4, 1, 2);
	}
	Global_1392915[iParam0 /*12*/].f_1 = -1;
	__LIB_1__::func_57(iVar0, -1);
}

bool func_831(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && __LIB_1__::func_800(iParam0))
		{
			__LIB_1__::func_695(iParam0, iParam1, 1, &bParam2, iParam3);
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

void func_832(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
	if (__LIB_1__::func_802(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (__LIB_1__::func_165(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (__LIB_0__::func_938(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_833(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (__LIB_1__::func_791(Global_35, iParam0, &uVar0))
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

bool func_834(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
	if (!__LIB_1__::func_689())
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
		if (__LIB_1__::func_644(vParam0, iParam10) || __LIB_1__::func_624(vParam0, iParam10))
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

void func_835(int iParam0)
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
			__LIB_1__::func_807(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (__LIB_1__::func_701(iVar2, 0))
		{
			__LIB_1__::func_704(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

int func_836(int iParam0, int iParam1)
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
	__LIB_1__::func_229(iParam0);
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_7))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_7);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_8))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_8);
	}
	Global_1392915.f_121[iVar0 /*20*/].f_1 = 0;
	__LIB_1__::func_788(iVar0);
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

void func_837(int iParam0, bool bParam1)
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
		__LIB_1__::func_812(1, bParam1);
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

int func_838(var uParam0, var uParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_68)))
	{
		return 0;
	}
	if (__LIB_1__::func_817(uParam1, &(uParam0->f_68), 3, -1, 0, 0) && __LIB_0__::func_751(uParam1))
	{
		uParam1->f_281 = 1;
		return 1;
	}
	return 0;
}

void func_839()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_1__::func_825(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_1__::func_132(1, iVar0, 0);
}

void func_840()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_1__::func_825(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_1__::func_132(2, iVar0, 0);
}

void func_841()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_1__::func_825(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_1__::func_132(0, iVar0, 0);
}

bool func_842(int iParam0, int iParam1, int iParam2)
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
		return __LIB_1__::func_825(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_843(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_433(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			__LIB_1__::func_832(39, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(39, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_434(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			__LIB_1__::func_832(41, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(41, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_435(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			__LIB_1__::func_832(49, 0, 0, 0, 0, 0, 1, 0);
			__LIB_1__::func_450(49, 0, 0, 0, 0, -1, 0);
			__LIB_0__::func_436(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_01"), __LIB_1__::func_803(1), 0, -1, 0);
			__LIB_0__::func_437(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_02"), __LIB_1__::func_803(2), 0, -1, 0);
			__LIB_0__::func_437(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_03"), __LIB_1__::func_803(4), 0, -1, 0);
			__LIB_0__::func_437(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_04"), __LIB_1__::func_803(8), 0, -1, 0);
			__LIB_0__::func_437(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			__LIB_1__::func_832(43, 0, 0, joaat("EXOTIC_STAGE_05"), __LIB_1__::func_803(16), 0, -1, 0);
			__LIB_0__::func_437(16);
			break;
	}
}

void func_844(int iParam0)
{
	if (__LIB_0__::func_942() == 1)
	{
		if (__LIB_1__::func_154(39))
		{
			__LIB_1__::func_240(342, 0);
		}
		else
		{
			__LIB_1__::func_240(343, 0);
			__LIB_0__::func_434(1);
		}
	}
	if (__LIB_0__::func_942() >= 30)
	{
		__LIB_1__::func_240(344, 0);
	}
	__LIB_1__::func_832(39, 0, 0, 0, 0, 0, -1, 0);
	__LIB_1__::func_450(39, 0, 0, __LIB_0__::func_942(), 30, 1, 0);
}

void func_845(int iParam0)
{
	if (__LIB_0__::func_438() == 1)
	{
		if (__LIB_1__::func_154(49))
		{
			__LIB_1__::func_240(409, 0);
		}
		else
		{
			__LIB_1__::func_240(410, 0);
			__LIB_0__::func_436(1);
		}
	}
	if (__LIB_0__::func_438() >= 10)
	{
		__LIB_1__::func_240(411, 0);
	}
	__LIB_1__::func_832(49, 0, 0, 0, 0, 0, -1, 0);
	__LIB_1__::func_450(49, 0, 0, __LIB_0__::func_438(), 10, 1, 0);
}

void func_846(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			__LIB_1__::func_408(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_847(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_1__::func_154(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				__LIB_1__::func_240(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				__LIB_1__::func_240(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				__LIB_1__::func_240(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				__LIB_1__::func_240(400, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 412399755))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				__LIB_1__::func_240(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				__LIB_1__::func_240(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				__LIB_1__::func_240(401, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 709057512))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				__LIB_1__::func_240(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				__LIB_1__::func_240(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				__LIB_1__::func_240(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				__LIB_1__::func_240(398, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1478961327))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_1__::func_696(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				__LIB_1__::func_240(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				__LIB_1__::func_240(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				__LIB_1__::func_240(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				__LIB_1__::func_240(406, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1238404098))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				__LIB_1__::func_240(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				__LIB_1__::func_240(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				__LIB_1__::func_240(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				__LIB_1__::func_240(403, 0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1160548794))
		{
			__LIB_0__::func_943(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_848()
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
	Var1 = { __LIB_1__::func_605() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
		if (__LIB_1__::func_708(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { __LIB_1__::func_605() };
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

void func_849(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		__LIB_1__::func_804(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_1__::func_832(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_850(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (__LIB_1__::func_804(iParam1, iParam0, &iVar0, 0, 0, 0))
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

int func_851()
{
	if (!__LIB_1__::func_827(-1898635967, __LIB_1__::func_124(), 1))
	{
		return 0;
	}
	if (__LIB_0__::func_26())
	{
		if (!__LIB_1__::func_827(146323340, __LIB_1__::func_124(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_852(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_154(43))
		{
			if (__LIB_0__::func_192(iParam0, 412399755))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_01"));
				if (__LIB_0__::func_944() == 0)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (__LIB_1__::func_154(44))
		{
			if (__LIB_0__::func_192(iParam0, 709057512))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_02"));
				if (__LIB_0__::func_944() == 1)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (__LIB_0__::func_192(iParam0, -1478961327))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_03"));
				if (__LIB_0__::func_944() == 2)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (__LIB_0__::func_192(iParam0, -1238404098))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_04"));
				if (__LIB_0__::func_944() == 3)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (__LIB_0__::func_192(iParam0, 1160548794))
			{
				__LIB_0__::func_943(joaat("EXOTIC_STAGE_05"));
				if (__LIB_0__::func_944() == 4)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_853(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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
			bVar1 = __LIB_1__::func_829(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = __LIB_1__::func_829(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = __LIB_1__::func_829(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = __LIB_1__::func_829(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = __LIB_1__::func_829(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = __LIB_1__::func_829(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
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

int func_854(var uParam0, var uParam1)
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
	uParam1->f_10 = __LIB_0__::func_97(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (__LIB_0__::func_86(uParam1->f_6))
		{
		}
	}
	bVar0 = __LIB_0__::func_28();
	if (*uParam1)
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
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
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
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				__LIB_1__::func_54(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
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
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!__LIB_1__::func_105(0) && __LIB_1__::func_105(1))
			{
				__LIB_1__::func_779(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (__LIB_0__::func_988())
			{
				__LIB_0__::func_989();
			}
			__LIB_0__::func_149(0);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(uParam1->f_6);
		}
	}
	if (!__LIB_0__::func_797(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((__LIB_0__::func_821(uParam1->f_10) == 0 || __LIB_0__::func_809(uParam1->f_10) == 0) || __LIB_0__::func_815(uParam1->f_10) == 0)
			{
				__LIB_1__::func_621(uParam1->f_10);
			}
			__LIB_1__::func_106(uParam1->f_10);
			__LIB_0__::func_822(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
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
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!__LIB_0__::func_86(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (__LIB_1__::func_107(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
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
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
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
			Var8 = { __LIB_1__::func_622(uParam1->f_10) };
			Var10 = { __LIB_1__::func_623() };
			__LIB_1__::func_163(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!__LIB_0__::func_823(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		__LIB_0__::func_824(uParam1->f_10);
		if (uParam1->f_2 && !__LIB_0__::func_86(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	__LIB_1__::func_108(uParam1->f_10);
	if (__LIB_0__::func_823(uParam1->f_10))
	{
		iVar16 = __LIB_0__::func_825(uParam1->f_10);
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

bool func_855(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
		__LIB_1__::func_788(iVar1);
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

void func_856(int iParam0)
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
					__LIB_1__::func_839();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					__LIB_1__::func_839();
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
					__LIB_1__::func_840();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					__LIB_1__::func_840();
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
					__LIB_1__::func_841();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					__LIB_1__::func_841();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_857(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1392915)
	{
		if (__LIB_1__::func_55(iVar0) == iParam0)
		{
			iVar1 = __LIB_1__::func_61(iVar0);
			__LIB_1__::func_836(iVar1, 1);
			__LIB_1__::func_830(iVar0);
			if (bParam1)
			{
				__LIB_1__::func_284(&Global_1899778, iVar0);
			}
			__LIB_1__::func_819(iVar0);
		}
		iVar0++;
	}
}

void func_858(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
				__LIB_1__::func_849(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				__LIB_1__::func_850(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

Vector3 func_859(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
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
	fVar2 = 9999999f;
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
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_1__::func_834(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
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

void func_860()
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
	__LIB_1__::func_835(7);
	__LIB_1__::func_853(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		__LIB_1__::func_853(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		__LIB_1__::func_853(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

int func_861(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_47(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	__LIB_1__::func_836(iParam0, 1);
	__LIB_1__::func_830(iVar0);
	if (bParam1)
	{
		__LIB_1__::func_284(&Global_1899778, iVar0);
	}
	__LIB_1__::func_819(iVar0);
	return 1;
}

bool func_862(var uParam0)
{
	if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_42, Global_36))
	{
		return true;
	}
	return false;
}

int func_863(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return 0;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, iParam0);
	}
	else
	{
		MAP::_BLIP_SET_STYLE(iVar0, iParam1);
	}
	if (bParam3)
	{
		if ((iParam1 == 408396114 || iParam1 == 1259054292) || iParam1 == -308585968)
		{
			MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
		}
	}
	return iVar0;
}

void func_864(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_865(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
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
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_866(int iParam0, int iParam1)
{
	float fVar0;
	if (!__LIB_0__::func_163(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (__LIB_0__::func_27(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (__LIB_0__::func_27(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (__LIB_0__::func_27(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_867(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

Vector3 func_868(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return __LIB_0__::func_173(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

bool func_869(int iParam0)
{
	return __LIB_1__::func_512(iParam0, 7);
}

bool func_870(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return __LIB_0__::func_195(vVar0, vVar3, vParam1);
}

int func_871(var uParam0)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (__LIB_0__::func_33(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (__LIB_0__::func_485() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_872(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (__LIB_1__::func_378(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

bool func_873(vector3 vParam0, var uParam3)
{
	if (!__LIB_0__::func_51(&(uParam3->f_3), 8))
	{
		return true;
	}
	if (__LIB_1__::func_373(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

float func_874(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { __LIB_1__::func_384(0) };
	vVar3 = { __LIB_0__::func_173(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

int func_875(int iParam0)
{
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return 0;
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
	{
		return TASK::GET_PED_WAYPOINT_PROGRESS(iParam0);
	}
	return 0;
}

bool func_876(float fParam0, float fParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	__LIB_1__::func_386(&uVar0, &uVar1, &iVar2, &iVar3, joaat("INPUT_SCRIPT_LEFT_AXIS_X"), joaat("INPUT_SCRIPT_LEFT_AXIS_Y"), joaat("INPUT_SCRIPT_RIGHT_AXIS_X"), joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"), 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!__LIB_1__::func_379(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

int func_877(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		__LIB_1__::func_578(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_878(var uParam0)
{
	*uParam0 = 234527101;
	uParam0->f_1 = -589165916;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_13 = 0;
	StringCopy(&(uParam0->f_18), "", 64);
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_37 = { 0f, 0f, 0f };
	uParam0->f_41 = 20f;
	uParam0->f_43 = 0;
	StringCopy(&(uParam0->f_52), "", 64);
	StringCopy(&(uParam0->f_60), "", 64);
	uParam0->f_12 = 0;
	if (__LIB_0__::func_139(uParam0->f_44))
	{
		__LIB_1__::func_748(&(uParam0->f_44), 1, 1);
	}
	if (__LIB_0__::func_75(&(uParam0->f_45)))
	{
		__LIB_0__::func_37(&(uParam0->f_45));
	}
}

void func_879(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_852(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, iParam1, 1, 0);
		}
	}
}

Vector3 func_880(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { __LIB_1__::func_859(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { __LIB_1__::func_859(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_881()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_1__::func_860();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

int func_882(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

void func_883(int iParam0, int iParam1)
{
	Global_1897952[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] || iParam1);
}

int func_884(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 38:
			iVar0 = joaat("BLACKWATER_RESIDENTS");
			break;
		case 82:
			iVar0 = joaat("BUTCHERCREEK_RESIDENTS");
			break;
		case 69:
			iVar0 = joaat("EMERALDRANCH_RESIDENTS");
			break;
		case 61:
			iVar0 = joaat("MANICATO_RESIDENTS");
			break;
		case 110:
			iVar0 = joaat("MANZANITAPOST_RESIDENTS");
			break;
		case 5:
			iVar0 = joaat("SAINTDENIS_RESIDENTS");
			break;
		case 35:
			iVar0 = joaat("OLDFORTWALLACE_RESIDENTS");
			break;
		case 105:
			iVar0 = joaat("RHODES_RESIDENTS");
			break;
		case 26:
			iVar0 = joaat("STRAWBERRY_RESIDENTS");
			break;
		case 76:
			iVar0 = joaat("VALENTINE_RESIDENTS");
			break;
		case 92:
			iVar0 = joaat("VANHORNPOST_RESIDENTS");
			break;
		case 56:
			iVar0 = joaat("WAPITI_RESIDENTS");
			break;
		case 78:
			iVar0 = joaat("ANNESBURG_RESIDENTS");
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_885(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 0;
		case 120:
			return 1;
		case 38:
			return 2;
		case 93:
			return 3;
		case 82:
			return 4;
		case 65:
			return 5;
		case 3:
			return 6;
		case 110:
			return 7;
		case 105:
			return 8;
		case 5:
			return 9;
		case 26:
			return 10;
		case 75:
			return 11;
		case 115:
			return 12;
		case 76:
			return 13;
		case 92:
			return 14;
		case 56:
			return 15;
		default:
			break;
	}
	return -1;
}

void func_886(int iParam0)
{
	iParam0 = iParam0;
}

bool func_887(int iParam0)
{
	iParam0 = iParam0;
	return true;
}

bool func_888(int iParam0, int iParam1)
{
	return (Global_1897952[iParam0 /*2*/] && iParam1) != 0;
}

void func_889(var uParam0)
{
	int iVar0;
	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		(uParam0[iVar0 /*3*/])->f_1 = 0;
		(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

bool func_890(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

int func_891(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

bool func_892(int iParam0)
{
	return (Global_1894899.f_7 && iParam0) != 0;
}

void func_893(int iParam0)
{
	Global_1894899.f_7 = (Global_1894899.f_7 - (Global_1894899.f_7 && iParam0));
}

bool func_894(int iParam0)
{
	return (Global_1935630 && iParam0) != 0;
}

bool func_895(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

bool func_896(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_897(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (Global_1888801[iParam0 /*35*/].f_21 && iParam1) != 0;
}

int func_898()
{
	return Global_1897952.f_41;
}

void func_899(bool bParam0)
{
	bool bVar0;
	bVar0 = Global_1894899 & 1 != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		STATS::_0xDA26263C07CCE9C2(1);
	}
	else
	{
		Global_1894899 = (Global_1894899 - Global_1894899 & 1);
		STATS::_0xDA26263C07CCE9C2(0);
	}
}

void func_900(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 = (Global_1894899 - Global_1894899 & 2);
	}
}

bool func_901(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_902(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		return false;
	}
	return true;
}

bool func_903(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return true;
		case 65:
			return true;
		case 66:
			return true;
		case 67:
			return true;
		case 68:
			return true;
		default:
			break;
	}
	return false;
}

bool func_904(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_905(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_906(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return 0;
		case joaat("WATER_BARROW_LAGOON"):
			return 0;
		case joaat("WATER_BAYOU_NWA"):
			return 2;
		case joaat("WATER_BEARTOOTH_BECK"):
			return 1;
		case joaat("WATER_CAIRN_LAKE"):
			return 0;
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
		case joaat("WATER_CATTIAL_POND"):
			return 0;
		case joaat("WATER_DAKOTA_RIVER"):
			return 1;
		case joaat("WATER_DEADBOOT_CREEK"):
			return 1;
		case joaat("WATER_DEWBERRY_CREEK"):
			return 1;
		case joaat("WATER_ELYSIAN_POOL"):
			return 0;
		case joaat("WATER_FLAT_IRON_LAKE"):
			return 0;
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return 1;
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return 0;
		case joaat("WATER_HOT_SPRINGS"):
			return 0;
		case joaat("WATER_KAMASSA_RIVER"):
			return 1;
		case joaat("WATER_LAKE_DON_JULIO"):
			return 0;
		case joaat("WATER_LAKE_ISABELLA"):
			return 0;
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return 1;
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_MATTLOCK_POND"):
			return 0;
		case joaat("WATER_MOONSTONE_POND"):
			return 0;
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
		case joaat("WATER_OWANJILA"):
			return 0;
		case joaat("WATER_RINGNECK_CREEK"):
			return 1;
		case joaat("WATER_SAN_LUIS_RIVER"):
			return 1;
		case joaat("WATER_SEA_OF_CORONADO"):
			return 1;
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return 0;
		case joaat("WATER_SPIDER_GORGE"):
			return 1;
		case joaat("WATER_STILLWATER_CREEK"):
			return 1;
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_WHINYARD_STRAIT"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_907(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

float func_908(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

var func_909(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = UIFEED::_SHOW_LOCATION_NOTIFICATION(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

int func_910(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1392240.f_1[iVar0 /*18*/].f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_911(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_912(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}
	return false;
}

void func_913(int iParam0, bool bParam1)
{
	char* sVar0;
	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bParam1, true);
}

void func_914(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			else
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			break;
	}
}

int func_915(int iParam0)
{
	return Global_1914319.f_3[iParam0 /*446*/].f_408;
}

void func_916(int iParam0)
{
	Global_1914319.f_3[iParam0 /*446*/].f_7 = 0;
}

bool func_917(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_918(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_919(int iParam0, var uParam1, var uParam2, var uParam3)
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
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_920(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
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

int func_921(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_922(int iParam0)
{
	Global_1914319.f_15923 = iParam0;
}

bool func_923()
{
	return (Global_1894899 & 1 != 0 && __LIB_0__::func_12() != -1);
}

void func_924()
{
	if (!__LIB_0__::func_35(Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));
		}
	}
	__LIB_1__::func_674(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
}

char* func_925(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return __LIB_0__::func_54(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

void func_926(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_29(iParam0))
	{
		return;
	}
	iVar0 = __LIB_1__::func_334(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

bool func_927()
{
	return __LIB_0__::func_1(Global_1935630, 4096);
}

bool func_928(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 32:
			return true;
		case 35:
			return true;
		case 65:
			return true;
		case 95:
			return true;
	}
	return false;
}

bool func_929(char* sParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1934603[iVar0 /*16*/].f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_930(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

int func_931(int iParam0)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42266[iParam0 /*12*/];
}

bool func_932(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_358[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1058888.f_42266[iParam0 /*12*/].f_5 && iParam1) != 0;
}

bool func_933()
{
	if (__LIB_0__::func_2() != 0)
	{
		return true;
	}
	return true;
}

void func_934(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

bool func_935(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15614[iParam0] && iParam1) != 0;
}

void func_936(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] || iParam1);
}

void func_937(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] - (Global_1914319.f_15614[iParam0] && iParam1));
}

bool func_938()
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (__LIB_1__::func_901(iVar3))
	{
		return true;
	}
	return false;
}

void func_939()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (__LIB_1__::func_904(iVar0))
		{
			Global_1898130[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_940(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_117(iParam0, 2))
	{
		return 0;
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
		return 0;
	}
	if (!__LIB_1__::func_346(iParam0) && __LIB_0__::func_2() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		__LIB_0__::func_121(iParam0, 128);
		return 1;
	}
	__LIB_0__::func_119(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(__LIB_0__::func_118(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(iParam0));
	if (__LIB_0__::func_117(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(__LIB_0__::func_120(iParam0));
		__LIB_0__::func_121(iParam0, 2048);
	}
	return 1;
}

void func_941(int iParam0)
{
	if (__LIB_0__::func_724(iParam0) && __LIB_0__::func_0())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_942(int iParam0, int iParam1)
{
	__LIB_0__::func_8(&(Global_1935369.f_5[iParam0 /*11*/].f_7), iParam1);
}

void func_943(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 = (Global_1914319.f_3[iParam0 /*446*/].f_7 - (Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1));
}

void func_944(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1914319.f_15924[iVar1]), iVar2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1914319.f_15924[iVar1]), iVar2);
	}
}

bool func_945(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;
	__LIB_1__::func_919(iParam3, &vVar0, &Var3, &uVar6);
	if (__LIB_1__::func_920(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

void func_946(int iParam0)
{
	__LIB_1__::func_922(__LIB_1__::func_921(iParam0));
}

void func_947(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_890(16))
	{
		return;
	}
	if (Global_1894899.f_7 == 0)
	{
		__LIB_0__::func_22(16);
		return;
	}
	if (!__LIB_1__::func_220(iParam0))
	{
		Global_1894899.f_7 = 0;
		__LIB_0__::func_22(16);
		return;
	}
	if (__LIB_1__::func_892(8))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			__LIB_1__::func_893(8);
			*iParam1 = 11;
			return;
		}
	}
	if (__LIB_1__::func_892(2))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			__LIB_1__::func_893(2);
			*iParam1 = 11;
			return;
		}
	}
	if (__LIB_1__::func_892(16))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			__LIB_1__::func_893(16);
			*iParam1 = 11;
			return;
		}
	}
	if (__LIB_1__::func_892(4))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 6;
			return;
		}
		else if (*iParam1 != 6)
		{
			__LIB_1__::func_893(4);
			*iParam1 = 11;
			return;
		}
	}
	if (__LIB_1__::func_892(1))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 2;
			return;
		}
		else if (*iParam1 != 2)
		{
			__LIB_1__::func_893(1);
			*iParam1 = 11;
			return;
		}
	}
}

void func_948(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	__LIB_0__::func_68(iParam0, 0, 0);
	if (__LIB_0__::func_724(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			__LIB_1__::func_340(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				__LIB_1__::func_341(iParam0, 1);
			}
			else
			{
				__LIB_1__::func_342(iParam0, 1);
			}
		}
		else
		{
			__LIB_1__::func_343(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (__LIB_0__::func_0())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_949(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_117(iParam0, 2))
	{
		return 0;
	}
	if (__LIB_0__::func_118(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		return 1;
	}
	if (__LIB_0__::func_117(iParam0, 1) && !bParam1)
	{
		__LIB_0__::func_123(iParam0, 128);
		return 1;
	}
	__LIB_0__::func_121(iParam0, 129);
	__LIB_1__::func_926(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(__LIB_0__::func_120(iParam0));
	__LIB_0__::func_119(iParam0, 0);
	return 1;
}

bool func_950(int iParam0)
{
	int iVar0;
	if (__LIB_1__::func_912(iParam0))
	{
		if (!__LIB_0__::func_293(45))
		{
			return false;
		}
	}
	iVar0 = __LIB_1__::func_882(iParam0);
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_25(Global_1835011[3 /*74*/].f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_951(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
	{
		ENTITY::DETACH_ENTITY(*iParam0, true, true);
	}
	OBJECT::DELETE_OBJECT(iParam0);
}

void func_952()
{
	if (Global_1935630.f_3 != 0)
	{
		_NAMESPACE77::_0x00A15B94CBA4F76F(Global_1935630.f_3);
		Global_1935630.f_3 = 0;
	}
}

int func_953(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

void func_954(int iParam0)
{
	Global_1310720.f_9 = iParam0;
}

bool func_955()
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1058888.f_4;
}

void func_956(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
}

void func_957(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_958(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

bool func_959(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

int func_960(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1109400.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 25;
	}
	if (Global_1225639.f_21[iParam0])
	{
		return Global_1108178[iParam0 /*37*/].f_1;
	}
	return 25;
}

void func_961(var uParam0)
{
	struct<9> Var0;
	*uParam0 = { Var0 };
}

void func_962(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_963(var uParam0)
{
	struct<30> Var0;
	*uParam0 = { Var0 };
}

void func_964(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_965(int iParam0)
{
	Global_1109400.f_22.f_10 = iParam0;
}

bool func_966(int iParam0)
{
	return (Global_1109400.f_22.f_6 && iParam0) != 0;
}

bool func_967(int iParam0)
{
	return (Global_1109400.f_22.f_8 && iParam0) != 0;
}

bool func_968(int iParam0)
{
	return (Global_1109400.f_4[Global_1109914[iParam0 /*2*/]] && Global_1109914[iParam0 /*2*/].f_1) == Global_1109914[iParam0 /*2*/].f_1;
}

int func_969()
{
	if (Global_1109400 <= 5)
	{
		return Global_1109400;
	}
	if (Global_1109400 <= 21)
	{
		return 4;
	}
	if (Global_1109400 <= 24)
	{
		return 3;
	}
	return 25;
}

void func_970(int iParam0)
{
	Global_1109400.f_22.f_8 = (Global_1109400.f_22.f_8 || iParam0);
}

void func_971(bool bParam0)
{
	int iVar0;
	int iVar1;
	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = __LIB_0__::func_153(Global_35, iVar0, 0, 1);
		if (WEAPON::IS_WEAPON_VALID(iVar1))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar1) || __LIB_0__::func_237(iVar1))
			{
				if (!bParam0 || (iVar0 != 7 && iVar0 != 9))
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar1);
				}
			}
		}
		iVar0++;
	}
}

int func_972(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_973()
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (__LIB_0__::func_21(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1888801[iVar1 /*35*/].f_26)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1888801[iVar1 /*35*/].f_26));
			}
		}
		if (Global_1888801[iVar1 /*35*/].f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iVar1 /*35*/].f_9, false))
			{
				if (__LIB_0__::func_2() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iVar1 /*35*/].f_9, 523);
				}
				else if (!SCRIPTS::_0x30BED53646C86D11(Global_1888801[iVar1 /*35*/].f_9))
				{
					SCRIPTS::_0x7DE4643157AD646C(Global_1888801[iVar1 /*35*/].f_9);
				}
			}
			else if (__LIB_0__::func_21(iVar1, 2))
			{
				if (__LIB_0__::func_2() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1888801[iVar1 /*35*/].f_26), 523);
				}
				else
				{
					SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(Global_1888801[iVar1 /*35*/].f_26)));
				}
			}
			if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1888801[iVar1 /*35*/].f_9))
			{
				Global_1888801[iVar1 /*35*/].f_9 = 0;
				__LIB_0__::func_25(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

Vector3 func_974(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_975(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

int func_976(var uParam0)
{
	return 0;
}

Vector3 func_977(var uParam0)
{
	return 0f, 0f, 0f;
}

void func_978(bool bParam0)
{
	Global_1935496.f_15 = !bParam0;
}

void func_979(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 - (Global_1310750.f_16035 && iParam0));
}

void func_980(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	fVar0 = __LIB_0__::func_36();
	fVar1 = (Global_1393447.f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447.f_60 = (fVar0 + fParam0);
	}
}

void func_981(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

bool func_982(int iParam0)
{
	if (!__LIB_0__::func_35(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_983(int iParam0)
{
	if (__LIB_0__::func_35(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_984(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

bool func_985()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_986(int iParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

int func_987(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

bool func_988(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_48;
}

bool func_989(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];
	if (__LIB_0__::func_86(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

int func_990(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	if (Global_1935630.f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630.f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (__LIB_1__::func_357(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = __LIB_0__::func_665(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (__LIB_0__::func_665(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_991(int iParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || __LIB_0__::func_347(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

float func_992(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return __LIB_0__::func_62(vVar0, vParam1);
}

void func_993(var uParam0, int iParam1)
{
	__LIB_0__::func_8(uParam0, iParam1);
}

int func_994(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (__LIB_0__::func_86(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (__LIB_1__::func_209(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	__LIB_1__::func_210(iVar0, bParam8);
	return iVar0;
}

bool func_995(bool bParam0)
{
	var uVar0;
	var uVar1;
	if (__LIB_1__::func_370(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_996(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(__LIB_1__::func_372(iVar0, 0)))
		{
			if (__LIB_1__::func_373(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_997(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (__LIB_1__::func_374(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_998(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
		{
			if (WEAPON::_IS_WEAPON_MELEE(Global_1935630.f_46) || WEAPON::_IS_WEAPON_BOW(Global_1935630.f_46))
			{
				return 1;
			}
		}
	}
	if (__LIB_1__::func_375(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_999()
{
	if (__LIB_1__::func_381())
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return Global_1955569.f_992[2];
	}
	return false;
}
