bool func_0(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	vector3 vVar8;
	var uVar11;
	struct<2> Var15;
	iVar0 = __LIB_1__::func_921(iParam0);
	if (!__LIB_1__::func_918(iVar0))
	{
		return false;
	}
	iVar1 = __LIB_6__::func_676(iVar0);
	iVar6 = 0;
	bVar7 = false;
	iVar2 = ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT(iVar1);
	if (iVar2 > 0)
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO(iVar1, iVar3, &vVar8))
			{
				if (vVar8.z > 0 && vVar8.x == iParam1)
				{
					iVar4 = 0;
					while (iVar4 < vVar8.z)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO(iVar1, vVar8.x, iVar4, &Var15))
						{
							if (Var15.f_1 > 0)
							{
								iVar5 = 0;
								while (iVar5 < Var15.f_1)
								{
									if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO(iVar1, vVar8.x, iVar4, iVar5, &uVar11))
									{
										if (!__LIB_15__::func_915(iParam0, vVar8.x, &uVar11, &iVar6))
										{
											bVar7 = false;
											Jump @198; //curOff = 180
										}
										else
										{
											bVar7 = true;
										}
									}
									iVar5++;
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						iVar4++;
					}
				}
				if (bVar7)
				{
				}
				else
				{
					iVar3++;
				}
				if (bVar7)
				{
					return true;
				}
				return false;
			}
		}
	}
}

bool func_1(int iParam0)
{
	return (__LIB_15__::func_958(iParam0) || __LIB_15__::func_496(iParam0));
}

void func_2(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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
			bVar1 = __LIB_15__::func_969(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = __LIB_15__::func_969(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = __LIB_15__::func_969(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = __LIB_15__::func_969(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = __LIB_15__::func_969(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = __LIB_15__::func_969(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == __LIB_0__::func_856(0))
	{
		__LIB_15__::func_783(iParam0, 1);
		if (__LIB_0__::func_241() == 1160113249)
		{
			__LIB_15__::func_783(__LIB_0__::func_856(-2125499975), 0);
		}
		else
		{
			__LIB_15__::func_783(__LIB_0__::func_856(1160113249), 0);
		}
	}
	__LIB_0__::func_460();
	if (__LIB_1__::func_18(iVar0))
	{
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), iParam0, 0);
	}
	__LIB_15__::func_784(iParam0, bParam3);
	if (bParam2)
	{
		__LIB_0__::func_719(0, 0);
	}
}

int func_3()
{
	if (Global_1146340.f_97 <= 0)
	{
		return __LIB_0__::func_298(0);
	}
	if (Global_1146340.f_98 < 0 || Global_1146340.f_99 == 0)
	{
		return __LIB_0__::func_298(0);
	}
	return Global_1146340[Global_1146340.f_98 /*3*/].f_1;
}

void func_4(int iParam0)
{
	Local_14.f_3 = iParam0;
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_6(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 108)
	{
		return;
	}
	Global_1913814.f_209[iParam0] = 1;
}

void func_7()
{
	Global_1913814.f_204 = Global_1913814.f_202;
	Global_1913814.f_204.f_1 = 0;
	Global_1913814.f_204.f_2 = 0;
	Global_1913814.f_204.f_3 = 0;
	Global_1913814.f_204.f_4 = 0;
}

int func_8(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 387110533;
		case 0:
			return joaat("PSMT_HORSE");
		case 1:
			return joaat("PSMT_DONKEY");
		case 2:
			return joaat("PSMT_COACH");
		case 3:
			return joaat("PSMT_CANOE");
		case 4:
			return joaat("PSMT_TRAIN");
		default:
			break;
	}
	return 0;
}

bool func_9(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 108)
	{
		return false;
	}
	return Global_1913814.f_209[iParam0];
}

bool func_10(int iParam0)
{
	return !__LIB_10__::func_689(iParam0);
}

bool func_11(int iParam0)
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
		__LIB_15__::func_469(iVar1, iParam0, &iVar4, &iVar5, &uVar2);
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

int func_12(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	__LIB_15__::func_469(iParam0, iParam1, &uVar0, &uVar1, &uVar2);
	return uVar0;
}

bool func_13(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (__LIB_15__::func_906(iParam0, uParam2, iParam3, bParam5, 0))
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

bool func_14(int iParam0, bool bParam1)
{
	struct<5> Var0;
	if (__LIB_0__::func_356(iParam0) == joaat("HORSE_EQUIPMENT") && __LIB_0__::func_2() == -1)
	{
		return __LIB_15__::func_872(iParam0);
	}
	Var0 = { __LIB_15__::func_488(iParam0, 0, 1) };
	return __LIB_15__::func_906(iParam0, &Var0, 1, bParam1, 0);
}

bool func_15(int iParam0)
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
		return __LIB_15__::func_906(iParam0, &uVar0, 1, 0, 0);
	}
	return __LIB_1__::func_707(iParam0, 1, 0);
}

bool func_16(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	*iParam1 = iParam2;
	__LIB_15__::func_294(iParam0, iParam1);
	Var0 = { __LIB_15__::func_488(iParam0, 0, 1) };
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
	if (__LIB_15__::func_906(iParam0, &Var0, *iParam1, 0, 0))
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

bool func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (!__LIB_15__::func_906(iParam0, &uVar1, 1, 0, 0))
		{
			__LIB_15__::func_677(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				__LIB_15__::func_808(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				__LIB_15__::func_808(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				__LIB_15__::func_808(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
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
					__LIB_15__::func_808(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					__LIB_15__::func_808(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
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
					if (!__LIB_15__::func_808(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!__LIB_15__::func_808(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!__LIB_15__::func_808(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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

bool func_18(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	Var0 = { __LIB_15__::func_488(iParam0, 0, 0) };
	return __LIB_15__::func_906(iParam0, &Var0, iParam1, 0, bParam2);
}

bool func_19(int iParam0, int iParam1)
{
	struct<5> Var0;
	Var0 = { __LIB_15__::func_459(iParam0) };
	return __LIB_15__::func_906(iParam0, &Var0, iParam1, 1, 1);
}

int func_20(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<16> Var5;
	int iVar21;
	struct<7> Var22;
	struct<2> Var29;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return -1;
	}
	if (!__LIB_15__::func_816(iParam0, iParam1, 0, 0, 0, 1))
	{
		return -1;
	}
	Var0 = { __LIB_15__::func_488(iParam0, 1, 0) };
	if (__LIB_15__::func_906(iParam0, &Var0, 1, 0, 1))
	{
		return -1;
	}
	Var5 = { __LIB_12__::func_169(iParam0, Var0, Var0.f_4, 1) };
	Var5.f_13 = iParam1;
	Var5.f_12 = 1248274121;
	iVar21 = __LIB_1__::func_190(2113164098, &Var5, 1);
	if (iVar21 == -1)
	{
		return -1;
	}
	Var22.f_1 = 1;
	__LIB_12__::func_120(iVar21, Var22);
	Var29 = { __LIB_12__::func_168(iParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&Var29, 1);
	return iVar21;
}

bool func_21(int iParam0)
{
	return (__LIB_8__::func_326(iParam0) || __LIB_15__::func_496(iParam0));
}

void func_22(int iParam0)
{
	if (!__LIB_0__::func_779(iParam0))
	{
		return;
	}
	if (__LIB_12__::func_486(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		return;
	}
	__LIB_16__::func_2(iParam0, 1, 0, 0);
}

void func_23()
{
	int iVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	__LIB_3__::func_150(Global_35, &iVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	__LIB_15__::func_966(0);
	__LIB_15__::func_967(7);
	__LIB_16__::func_2(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		__LIB_16__::func_2(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		__LIB_16__::func_2(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_3__::func_228(Global_35, &iVar0);
}

void func_24()
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_604();
	if (iVar0 != joaat("CLOTHING_CUSTOM_ONE_OUTFIT"))
	{
		if (__LIB_6__::func_107(joaat("CLOTHING_CUSTOM_ONE_OUTFIT")))
		{
			__LIB_15__::func_916(joaat("CLOTHING_CUSTOM_ONE_OUTFIT"), 1, 1);
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_317() != 0)
		{
			if (__LIB_6__::func_107(joaat("CLOTHING_WINTER_OUTFIT")))
			{
				__LIB_15__::func_916(joaat("CLOTHING_WINTER_OUTFIT"), 1, 1);
			}
		}
	}
	if (!__LIB_6__::func_107(iVar0))
	{
		if (!__LIB_1__::func_431(-999503751, 1))
		{
			iVar1 = __LIB_15__::func_37(-999503751, 0, 0);
			__LIB_15__::func_916(iVar1, 1, 0);
		}
		__LIB_16__::func_2(iVar0, 1, 0, 0);
	}
}

void func_25(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam0, 1522539835))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, 1522539835, 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("ACCESSORIES")))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("ACCESSORIES"), 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -749728163))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, -749728163, 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam0, 149557334))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, 149557334, 1);
	}
}

var func_26(vector3 vParam0)
{
	var uVar0;
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0, &uVar0, false))
	{
		return vParam0.z;
	}
	return uVar0;
}

bool func_27(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return true;
	}
	return false;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
	}
	return -1;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 82:
			return 463;
		default:
			break;
	}
	return -1;
}

void func_30(var uParam0)
{
	uParam0->f_1 = 10;
}

int func_31(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	iVar1 = __LIB_0__::func_553(iVar0);
	uParam0->f_2031.f_94 = iVar1;
	uParam0->f_2031.f_96 = iParam1;
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_2031.f_96))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_2031.f_96, true, true);
	}
	return 1;
}

bool func_32(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_2005, iParam1);
}

int func_33(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_POINTS(iParam0, 7);
	return iVar0;
}

void func_34(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	fVar0 = (vParam0.y / 2f);
	fVar1 = (vParam0.z / 2f);
	fVar2 = (vParam0.x / 2f);
	fVar3 = BUILTIN::SIN(fVar0);
	fVar4 = BUILTIN::SIN(fVar1);
	fVar5 = BUILTIN::SIN(fVar2);
	fVar6 = BUILTIN::COS(fVar0);
	fVar7 = BUILTIN::COS(fVar1);
	fVar8 = BUILTIN::COS(fVar2);
	*fParam3 = (((fVar5 * fVar6) * fVar7) - ((fVar8 * fVar3) * fVar4));
	*fParam4 = (((fVar8 * fVar3) * fVar7) + ((fVar5 * fVar6) * fVar4));
	*fParam5 = (((fVar8 * fVar6) * fVar4) - ((fVar5 * fVar3) * fVar7));
	*fParam6 = (((fVar8 * fVar6) * fVar7) + ((fVar5 * fVar3) * fVar4));
}

int func_35(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			if (ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0]))
			{
				iVar1++;
			}
		}
		else if (bParam1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_36(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 4:
			iVar0 = 5;
			break;
		case 5:
			iVar0 = 6;
			break;
		case 6:
			iVar0 = 7;
			break;
	}
	return iVar0;
}

void func_37(int iParam0)
{
	int iVar0;
	char* sVar1;
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1900383[iParam0 /*45*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	sVar1 = __LIB_1__::func_569(__LIB_5__::func_978(iParam0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_PROMPT_NAME(iVar0, sVar1);
	}
}

void func_38(int iParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	sVar0 = __LIB_4__::func_418(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		iVar1 = MISC::GET_HASH_KEY(sVar0);
		GRAPHICS::_0xBFCB17895BB99E4E(iVar1, 0);
		if (!GRAPHICS::_0x113857D66A9CABE6(iVar1))
		{
		}
		GRAPHICS::_0x67B0778C62E74423(1);
		GRAPHICS::_0x6C03118E9E5C1A14(1);
	}
	else
	{
		if (iParam0 == 22 || iParam0 == 10)
		{
			return;
		}
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1914319.f_3[iParam0 /*446*/].f_11);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar2))
		{
			return;
		}
		if (!INTERIOR::IS_INTERIOR_READY(iVar2))
		{
			return;
		}
		iVar3 = GRAPHICS::_0x5D1C5D8E62E8EE1C(iVar2);
		if (GRAPHICS::_0x113857D66A9CABE6(iVar3))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(iVar3, 0);
		}
	}
}

bool func_39(var uParam0)
{
	return __LIB_15__::func_352(uParam0);
}

void func_40(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_15__::func_372(uParam0);
	iVar1 = __LIB_15__::func_982(uParam0, __LIB_14__::func_816());
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

bool func_41(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	if (iParam2 < 1)
	{
		return false;
	}
	Var0 = { __LIB_5__::func_96(iParam0) };
	Var5 = { __LIB_3__::func_0(iParam0, iParam1, Var0, Var0.f_4) };
	return __LIB_7__::func_600(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (__LIB_3__::func_563(iParam0, Global_1914319.f_3[iParam0 /*446*/].f_10))
	{
		return;
	}
	if (!__LIB_2__::func_804(iParam0, 32))
	{
		return;
	}
	if (__LIB_15__::func_507(iParam0, 2))
	{
		__LIB_15__::func_508(iParam0, 2);
	}
	if (__LIB_15__::func_507(iParam0, 4))
	{
		__LIB_15__::func_508(iParam0, 4);
	}
	if (__LIB_2__::func_804(iParam0, 8192))
	{
		__LIB_1__::func_943(iParam0, 8192);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1393529.f_3) || ENTITY::IS_ENTITY_DEAD(Global_1393529.f_3))
	{
		return;
	}
	Global_1393529.f_41[iParam0] = 0;
	if (__LIB_15__::func_507(iParam0, 16))
	{
		__LIB_15__::func_508(iParam0, 16);
		TASK::CLEAR_PED_TASKS(Global_1393529.f_3, true, false);
	}
	if (__LIB_0__::func_29(Global_1393529.f_2))
	{
		iVar0 = __LIB_0__::func_120(Global_1393529.f_2);
		if (PERSCHAR::_0x800DF3FC913355F3(iVar0) && !PERSCHAR::_0xEB98B38CA60742D7(iVar0))
		{
			iVar1 = __LIB_0__::func_118(__LIB_2__::func_419(Global_1393529.f_3, 0));
			sVar2 = __LIB_15__::func_509(iVar1);
			__LIB_0__::func_121(__LIB_2__::func_419(Global_1393529.f_3, 0), 4096);
			if (MISC::COMPARE_STRINGS(PERSCHAR::_0xCEB40B678E403759(iVar1), sVar2, false, -1) == 0)
			{
			}
			else
			{
				PERSCHAR::_0xA2B18FF8D39F6D87(iVar0);
				TASK::TASK_PERSISTENT_CHARACTER(Global_1393529.f_3);
			}
		}
		__LIB_1__::func_943(iParam0, 32);
		__LIB_15__::func_508(iParam0, 32);
	}
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = __LIB_14__::func_455(iVar1);
		iVar0 = (iVar0 + __LIB_15__::func_991(iVar2, iParam0));
		iVar1++;
	}
	return iVar0;
}

int func_44(var uParam0)
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
	__LIB_15__::func_672(uParam0, __LIB_14__::func_898(uParam0));
	__LIB_15__::func_897(uParam0, 4, joaat("SHOP_INFO"), 1, 1, 0);
	__LIB_14__::func_887(uParam0, 0);
	return 1;
}

int func_45(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	var uVar34;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	struct<14> Var55;
	if (!__LIB_14__::func_877(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_15__::func_643(iParam0, &Var0))
	{
		return 0;
	}
	Var29.f_4 = joaat("SLOTID_HORSE_TAIL");
	Var29 = { Var0 };
	if (__LIB_16__::func_13(iParam1, &uVar34, &Var29, 1, 752097756, 0))
	{
		if (bParam2)
		{
			if (!__LIB_15__::func_796(iParam0, iParam1))
			{
			}
		}
		if (bParam3)
		{
			Var41.f_9 = -1591664384;
			Var55 = { __LIB_0__::func_523(0, Var29.f_4, -1591664384, -1591664384, 0, 0) };
			Var55.f_9 = { Var29 };
			if (__LIB_0__::func_801(&Var55, &iVar38, &iVar39, 0))
			{
				iVar40 = 0;
				while (iVar40 < iVar39)
				{
					if (__LIB_0__::func_236(&Var41, iVar40, iVar38, iVar39))
					{
						if (Var41.f_4 != iParam1)
						{
							if (__LIB_0__::func_939(Var41.f_4, &Var41, &Var29, -1, -142743235, 0, 0))
							{
							}
						}
					}
					iVar40++;
				}
			}
			__LIB_0__::func_238(iVar38);
		}
		return 1;
	}
	return 0;
}

int func_46(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	var uVar34;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	struct<14> Var55;
	if (!__LIB_14__::func_876(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_15__::func_643(iParam0, &Var0))
	{
		return 0;
	}
	Var29.f_4 = joaat("SLOTID_HORSE_MANE");
	Var29 = { Var0 };
	if (__LIB_16__::func_13(iParam1, &uVar34, &Var29, 1, 752097756, 0))
	{
		if (bParam2)
		{
			if (!__LIB_15__::func_795(iParam0, iParam1))
			{
			}
		}
		if (bParam3)
		{
			Var41.f_9 = -1591664384;
			Var55 = { __LIB_0__::func_523(0, Var29.f_4, -1591664384, -1591664384, 0, 0) };
			Var55.f_9 = { Var29 };
			if (__LIB_0__::func_801(&Var55, &iVar38, &iVar39, 0))
			{
				iVar40 = 0;
				while (iVar40 < iVar39)
				{
					if (__LIB_0__::func_236(&Var41, iVar40, iVar38, iVar39))
					{
						if (Var41.f_4 != iParam1)
						{
							if (__LIB_0__::func_939(Var41.f_4, &Var41, &Var29, -1, -142743235, 0, 0))
							{
							}
						}
					}
					iVar40++;
				}
			}
			__LIB_0__::func_238(iVar38);
		}
		return 1;
	}
	return 0;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	var uVar6;
	if (!__LIB_9__::func_877(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (__LIB_12__::func_127(iParam0) && __LIB_6__::func_679(iParam0))
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
	if (!__LIB_16__::func_13(iParam0, &uVar6, &Var1, iParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

void func_48(int iParam0, int iParam1)
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
	__LIB_15__::func_994(iParam0, iParam1);
}

void func_49(int iParam0, int iParam1)
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
	__LIB_15__::func_994(iParam0, iParam1);
}

int func_50(int iParam0, int iParam1)
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
	__LIB_15__::func_994(iParam0, iParam1);
	__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSE_REVIVED")), 1);
	return 1;
}

int func_51(var uParam0)
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
						if (__LIB_15__::func_209(uParam0) && __LIB_15__::func_495(&iVar21))
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

void func_52(var uParam0)
{
	__LIB_15__::func_693(uParam0);
}

bool func_53(int iParam0, int iParam1, int iParam2)
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
			if (__LIB_1__::func_549(1868067663, &uVar0))
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

bool func_54(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && __LIB_16__::func_15(iParam0))
		{
			__LIB_15__::func_677(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_55(int iParam0, int iParam1, int iParam2)
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
	Var0 = { __LIB_15__::func_488(iParam0, 0, 1) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return __LIB_16__::func_13(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

int func_56(int iParam0, int iParam1)
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
	if (__LIB_15__::func_429(iParam0))
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
	if (!__LIB_16__::func_13(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

int func_57(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	__LIB_14__::func_904(uParam0->f_2, &iVar0);
	if (__LIB_15__::func_372(uParam0) == -2144266389)
	{
		return -339889117;
	}
	else if (__LIB_14__::func_739(iParam1))
	{
		return -348190488;
	}
	else if (!__LIB_16__::func_14(iParam1, 0) && __LIB_15__::func_51(iParam1, iVar0))
	{
		return -349391286;
	}
	else if (__LIB_14__::func_942(iParam1) && uParam0->f_3 == 152)
	{
		return 2077448405;
	}
	else if (__LIB_14__::func_974(iParam1))
	{
		return -2056428614;
	}
	else if (__LIB_0__::func_357(iParam1) == -525676072 && uParam0->f_3 == 152)
	{
		return 1942587409;
	}
	else if (__LIB_0__::func_356(iParam1) == joaat("CLOTHING") && uParam0->f_3 == 152)
	{
		return 761079318;
	}
	else if (__LIB_0__::func_192(iParam1, 188214926))
	{
		return 1702073444;
	}
	else if (__LIB_0__::func_357(iParam1) == -1839668642 || __LIB_0__::func_357(iParam1) == -1415811768)
	{
		return -760956867;
	}
	else if (__LIB_0__::func_357(iParam1) == 231148558 || __LIB_0__::func_357(iParam1) == 356304563)
	{
		return 38807286;
	}
	else if (__LIB_0__::func_356(iParam1) == joaat("WEAPON_MOD"))
	{
		return 777890122;
	}
	else if (__LIB_0__::func_356(iParam1) == joaat("WEAPON_DECORATION"))
	{
		return -1502467280;
	}
	else if (__LIB_0__::func_356(iParam1) == joaat("AMMO"))
	{
		return -1048755899;
	}
	else if (__LIB_0__::func_356(iParam1) == joaat("CLOTHING"))
	{
		return -853534656;
	}
	else if (__LIB_0__::func_831(iParam1))
	{
		return -239176093;
	}
	else if (__LIB_14__::func_975(iParam1))
	{
		return 1394581936;
	}
	else if ((((((__LIB_0__::func_357(iParam1) == 1795979421 || __LIB_0__::func_357(iParam1) == 1193257440) || __LIB_0__::func_357(iParam1) == 1415299667) || __LIB_0__::func_357(iParam1) == -1015460895) || __LIB_0__::func_357(iParam1) == -768291983) || __LIB_0__::func_357(iParam1) == 1206030994) || __LIB_0__::func_357(iParam1) == 526314052)
	{
		return -584027224;
	}
	else if (__LIB_16__::func_14(iParam1, 0) && __LIB_15__::func_51(iParam1, iVar0))
	{
		return 2036169888;
	}
	else
	{
		return -384358143;
	}
	return 0;
}

bool func_58(var uParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	struct<6> Var3;
	iVar0 = __LIB_14__::func_898(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	Var1 = { __LIB_15__::func_848(0) };
	Var3 = { __LIB_1__::func_623() };
	if (PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		__LIB_15__::func_921(uParam0, iParam1, iVar0, &Var1, &Var3);
	}
	else
	{
		uParam0->f_2309 = 1;
		uParam0->f_2318 = iParam1;
		uParam0->f_2308 = iVar0;
		uParam0->f_2310 = { Var1 };
		uParam0->f_2312 = { Var3 };
	}
	uParam0->f_2031.f_98 = 1;
	return true;
}

int func_59(int iParam0, int iParam1, char* sParam2)
{
	if (iParam1 == 3)
	{
		if (__LIB_15__::func_445(iParam0))
		{
			if ((__LIB_0__::func_950(iParam0, 1) && WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false)) && !__LIB_16__::func_15(iParam0))
			{
				StringCopy(sParam2, "SHOP_BUY_SECONDARY", 32);
				return 1;
			}
		}
		if (__LIB_15__::func_241(iParam0))
		{
			if (!__LIB_1__::func_707(iParam0, 1, 0))
			{
				StringCopy(sParam2, "SHOP_UNLOCK", 32);
				return 1;
			}
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING") && !__LIB_0__::func_192(iParam0, 130796156))
		{
			if (__LIB_7__::func_791() && __LIB_1__::func_707(iParam0, 1, 0))
			{
				StringCopy(sParam2, "SHOP_EQUIP", 32);
				return 1;
			}
			else
			{
				StringCopy(sParam2, "SHOP_VIEW", 32);
				return 1;
			}
		}
	}
	if (iParam1 == 4)
	{
		if (__LIB_0__::func_356(iParam0) == joaat("AMMO"))
		{
			StringCopy(sParam2, "SHOP_AMMO_BUY_MAX", 32);
			return 1;
		}
	}
	if (iParam1 == 7)
	{
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			if (__LIB_7__::func_791())
			{
				StringCopy(sParam2, "IB_BROWSE", 32);
				return 1;
			}
		}
		if (__LIB_15__::func_445(iParam0))
		{
			StringCopy(sParam2, "SHOP_VIEW", 32);
			return 1;
		}
	}
	return 0;
}

bool func_60(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_16__::func_18(iParam1, iParam2, 0))
	{
		return true;
	}
	if (uParam0->f_221 == 34)
	{
		iVar0 = __LIB_0__::func_356(iParam1);
		if ((iVar0 != joaat("WEAPON") && iVar0 != joaat("HORSE")) && iVar0 != joaat("CLOTHING"))
		{
			if (__LIB_16__::func_19(iParam1, iParam2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_61(int iParam0, int iParam1)
{
	var uVar0;
	struct<7> Var4;
	struct<4> Var11;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_INFO(iParam0, &uVar0))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam0, iParam1, &Var4))
		{
			if (Var4.f_6 > 0)
			{
				return false;
			}
			if (Var4.f_5 > 0)
			{
				iVar15 = -1;
				iVar16 = 0;
				while (iVar16 < Var4.f_5)
				{
					if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(iParam0, Var4, iVar16, &iVar15))
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam0, iVar15, &Var11))
						{
							iVar18 = 0;
							while (iVar18 < Var11.f_3)
							{
								iVar17 = __LIB_15__::func_280(iParam0, iVar15, iVar18);
								if (__LIB_0__::func_144(iVar17, 0))
								{
									if (__LIB_16__::func_18(iVar17, 1, 0))
									{
									}
									else
									{
										return false;
									}
								}
								iVar18++;
							}
						}
					}
					iVar16++;
				}
			}
			else
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

void func_62(bool bParam0)
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
	__LIB_15__::func_998(&iVar1, &uVar5, Global_36, 10, 3, fVar0, 1, 0, 1, 1.5f);
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

void func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (!__LIB_1__::func_918(iVar0))
	{
		return;
	}
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1914319.f_3[iVar0 /*446*/].f_11);
	}
	else
	{
		iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1051260.f_48[iVar0 /*78*/].f_3);
	}
	if (!__LIB_15__::func_576(iVar0, iParam0, &iVar2))
	{
		return;
	}
	bVar14 = false;
	iVar13 = 0;
	while (iVar13 < iVar2)
	{
		if (__LIB_15__::func_371(iVar0, iParam0, iVar13, &Var3))
		{
			if (Var3.f_9 != 0 && bParam1)
			{
				if (!__LIB_16__::func_0(iParam0, Var3.f_9))
				{
					bVar14 = true;
				}
				if (bVar14)
				{
					bParam1 = false;
				}
			}
			if (bParam1)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
				{
					if (!INTERIOR::IS_VALID_INTERIOR(iVar1))
					{
						return;
					}
					if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar1, &Var3))
					{
						INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar1, &Var3, 1);
					}
				}
				if (__LIB_0__::func_30(Var3.f_8))
				{
					__LIB_0__::func_401(Var3.f_8);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
				{
					if (!INTERIOR::IS_VALID_INTERIOR(iVar1))
					{
						return;
					}
					if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar1, &Var3))
					{
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar1, &Var3, true);
					}
				}
				if (__LIB_0__::func_30(Var3.f_8) && !STREAMING::_0xCF45DF50C7775F2A())
				{
					__LIB_0__::func_400(Var3.f_8);
				}
				if (bVar14)
				{
					bVar14 = false;
					bParam1 = true;
				}
			}
		}
		iVar13++;
	}
}

bool func_64(var uParam0)
{
	if (!__LIB_15__::func_972(__LIB_0__::func_12()) || *uParam0 != Global_1914319.f_18941.f_10)
	{
		return false;
	}
	if (__LIB_14__::func_719(4))
	{
		if (!__LIB_14__::func_719(16))
		{
			return true;
		}
		__LIB_14__::func_720(4);
	}
	if (__LIB_14__::func_719(2))
	{
		if (!__LIB_14__::func_719(8))
		{
			return true;
		}
		__LIB_14__::func_720(2);
	}
	return false;
}

int func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = __LIB_14__::func_455(iVar1);
		iVar0 = (iVar0 + __LIB_16__::func_12(iVar2, iParam0));
		iVar1++;
	}
	return iVar0;
}

void func_66(int iParam0, int iParam1)
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
	__LIB_15__::func_994(iParam0, iParam1);
}

void func_67(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (__LIB_16__::func_53(Global_35, iParam0, &uVar0))
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

bool func_68(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	struct<2> Var10;
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2031.f_58);
	iVar1 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	vVar7.f_1 = -1;
	vVar7.f_2 = -1;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_58, iVar1);
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar2))
		{
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar2, __LIB_12__::func_481());
			iVar3 = iVar4;
			if (iVar3 == -1968468235)
			{
				iVar5 = __LIB_14__::func_921(iVar1, &(uParam0->f_2031));
				iVar6 = 0;
				iVar6 = 0;
				while (iVar6 < iVar5)
				{
					vVar7 = { __LIB_15__::func_605(iVar1, iVar6, &(uParam0->f_2031)) };
					if (__LIB_0__::func_144(vVar7.x, 0))
					{
						if (vVar7.x == iParam1)
						{
							DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar2, __LIB_12__::func_482(), vVar7.x);
							DATABINDING::_DATABINDING_ADD_DATA_INT(iVar2, __LIB_14__::func_979(), vVar7.x);
							DATABINDING::_DATABINDING_ADD_DATA_INT(iVar2, __LIB_14__::func_845(), __LIB_16__::func_57(uParam0, vVar7.x));
							if (!__LIB_15__::func_306(uParam0, iParam1, &Var10, 164843734))
							{
								DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "iconVisible", true);
								DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar2, "iconTextureDict", "generic_textures");
								DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar2, "texture", "SWATCH_BG_1A");
							}
							else
							{
								DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "iconVisible", true);
								DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar2, "iconTextureDict", Var10.f_1);
								DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar2, "iconTexture", Var10);
							}
						}
						else
						{
							iVar6++;
						}
						iVar1++;
						return false;
					}
				}
			}
		}
	}
}

void func_69()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_16__::func_55(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_1__::func_132(1, iVar0, 0);
}

void func_70()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_16__::func_55(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_1__::func_132(2, iVar0, 0);
}

void func_71()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_16__::func_55(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_1__::func_132(0, iVar0, 0);
}

int func_72(var uParam0, int iParam1)
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
		if (!__LIB_16__::func_53(iVar1, iParam1, &uVar3))
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

void func_73(var uParam0, vector3 vParam1)
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
			if (!__LIB_16__::func_53(Global_35, vVar4.x, &sVar7))
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

bool func_74(int iParam0, int iParam1, int iParam2)
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
		return __LIB_16__::func_55(iParam0, *iParam1, iParam2);
	}
	return false;
}

bool func_75(int iParam0, int iParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<4> Var10;
	if (*iParam1 == 0)
	{
		*iParam3 = 1;
		return false;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam1->f_2 > 0)
	{
		iVar3 = __LIB_1__::func_921(iParam0);
		if (iVar3 == -1)
		{
			*iParam3 = 2;
			return false;
		}
		iVar4 = __LIB_6__::func_676(iVar3);
		iVar6 = 0;
		while (iVar6 < iParam1->f_2)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO(iVar4, *iParam1, iVar6, &Var8))
			{
				*iParam3 = 4;
				return false;
			}
			if (Var8.f_1 > 0)
			{
				iVar7 = 0;
				while (iVar7 < Var8.f_1)
				{
					Var10 = 0;
					if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO(iVar4, *iParam1, iVar6, iVar7, &Var10))
					{
						*iParam3 = 3;
						return false;
					}
					if (!__LIB_15__::func_915(iParam0, *iParam1, &Var10, &uVar5))
					{
						if (Var10.f_3)
						{
							iVar1 = Var8;
							iVar2 = 1;
							bVar0 = true;
						}
						else
						{
							iVar2 = 0;
							bVar0 = false;
						}
						else
						{
							Jump @210; //curOff = 200
							iVar1 = Var8;
							bVar0 = true;
							iVar7++;
						}
						Jump @232; //curOff = 219
						iVar1 = Var8;
						iVar2 = 0;
						bVar0 = true;
						if (bVar0)
						{
						}
						else
						{
							iVar6++;
						}
						Jump @255; //curOff = 249
						bVar0 = true;
						if (bVar0)
						{
							*uParam2 = *iParam1;
							uParam2->f_2 = iVar1;
							uParam2->f_1 = iVar1;
							if (__LIB_0__::func_2() == -1)
							{
								if (__LIB_0__::func_787(*uParam2))
								{
									uParam2->f_4 = !__LIB_0__::func_428(*uParam2);
								}
								else
								{
									uParam2->f_4 = iVar2;
								}
							}
							else if (__LIB_14__::func_788(*uParam2))
							{
								uParam2->f_4 = 0;
							}
							else
							{
								uParam2->f_4 = !__LIB_1__::func_63(*uParam2);
							}
							if (__LIB_0__::func_2() == -1)
							{
								if (!uParam2->f_4)
								{
									if (!__LIB_12__::func_509(*iParam1) && !__LIB_12__::func_510(*iParam1))
									{
										if (__LIB_16__::func_18(*iParam1, 1, 0))
										{
											uParam2->f_5 = 1;
										}
									}
								}
							}
							return true;
						}
						else
						{
							return false;
						}
						*iParam3 = 6;
						return false;
					}
				}
			}
		}
	}
}

int func_76(var uParam0, struct<23> Param1)
{
	var uVar0;
	struct<9> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<23> Var15;
	var uVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	uVar0 = Param1.f_14;
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1.f_8 = uVar0;
	iVar11 = 0;
	iVar12 = 0;
	iVar12 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var1, &iVar11, 1);
	if (iVar12 == -1)
	{
		return 0;
	}
	iVar14 = 0;
	Var15.f_14 = -1;
	Var15.f_15 = -1;
	iVar42 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2031.f_58);
	iVar14 = 0;
	while (iVar14 < iVar11)
	{
		iVar13 = __LIB_0__::func_374(iVar14, iVar12);
		if (__LIB_0__::func_144(iVar13, 0))
		{
			if (__LIB_15__::func_745(&(uParam0->f_2031), iVar13, &uVar38) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar13, uVar0) == -2089472884)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar13, uVar0) == -2089472884)
				{
					bVar44 = true;
					iVar43 = 0;
					while (iVar43 < iVar42)
					{
						iVar41 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_58, iVar43);
						if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar41))
						{
							iVar39 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar41, __LIB_12__::func_482());
							iVar40 = iVar39;
							if (__LIB_0__::func_192(iVar40, 1954943838) && __LIB_14__::func_973(iVar13, iVar40))
							{
								bVar44 = false;
							}
							else
							{
								iVar43++;
							}
							if (bVar44)
							{
							}
							else
							{
								Var15 = { Param1 };
								Var15.f_7 = iVar13;
								Var15 = __LIB_16__::func_57(uParam0, iVar13);
								Stack.Push(uParam0);
								Stack.Push(&Var15);
								Call_Loc(uParam0->f_2031.f_124);
								if (StackVal)
								{
								}
								if (uParam0->f_2031.f_115)
								{
									Stack.Push(uParam0);
									Stack.Push(&Var15);
									Call_Loc(uParam0->f_2031.f_116);
									if (!StackVal)
									{
									}
								}
							}
							iVar14++;
							ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar12);
							return 1;
						}
					}
				}
			}
		}
	}
}

void func_77(var uParam0)
{
	if (!__LIB_1__::func_917(uParam0->f_3))
	{
		return;
	}
	if (Global_1914319.f_19001[uParam0->f_3 /*3*/].f_2 == -1)
	{
		if (__LIB_15__::func_449(uParam0->f_3))
		{
			__LIB_15__::func_154(uParam0->f_3, 1);
		}
		else
		{
			__LIB_15__::func_154(uParam0->f_3, 0);
		}
	}
	if (__LIB_15__::func_155(uParam0->f_3))
	{
		uParam0->f_14 = 1;
		__LIB_16__::func_63(uParam0->f_3, 1);
	}
}

void func_78(var uParam0)
{
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true) && Global_1914319.f_16855 == uParam0->f_2)
	{
		return;
	}
	if (__LIB_14__::func_126(uParam0->f_3, 1073741824 /* Float: 2f */))
	{
		return;
	}
	__LIB_15__::func_619(uParam0);
	__LIB_16__::func_63(uParam0->f_3, 0);
}

void func_79()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_16__::func_23();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_16__::func_55(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_16__::func_55(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

int func_80(var uParam0)
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
	__LIB_15__::func_672(uParam0, __LIB_14__::func_898(uParam0));
	__LIB_15__::func_897(uParam0, 4, joaat("SHOP_INFO"), 1, 1, 0);
	__LIB_14__::func_887(uParam0, 0);
	return 1;
}

void func_81(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		if (iParam2 == 0)
		{
			return;
		}
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (__LIB_1__::func_15(iParam0))
	{
		return;
	}
	if (__LIB_11__::func_451(iParam0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	__LIB_0__::func_835(iParam1, iParam0);
	__LIB_12__::func_237(iParam1, iParam2);
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (iParam0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar0))
	{
		__LIB_11__::func_452(iParam1, 0);
	}
	else
	{
		iVar1 = __LIB_11__::func_453(iParam0);
		__LIB_11__::func_452(iParam1, iVar1);
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		__LIB_1__::func_177(iParam0);
	}
	if (iParam1 == 0)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iParam0);
	}
	else if (iParam1 == 1)
	{
		uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iParam0);
	}
	if (iParam1 == 6)
	{
		return;
	}
	if (__LIB_15__::func_429(iParam1))
	{
		__LIB_15__::func_751(iParam1);
	}
	iVar3 = __LIB_0__::func_821(iParam1);
	iVar4 = __LIB_0__::func_553(iVar3);
	__LIB_16__::func_56(iParam1, iVar4);
}

void func_82(int iParam0)
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
					__LIB_16__::func_69();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					__LIB_16__::func_69();
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
					__LIB_16__::func_70();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					__LIB_16__::func_70();
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
					__LIB_16__::func_71();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					__LIB_16__::func_71();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

bool func_83(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	struct<4> Var1;
	int iVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	iVar0 = __LIB_1__::func_921(iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 == 11)
	{
		Var1.f_2 = 1;
		Var1.f_3 = -15;
		if (!__LIB_12__::func_500(&(Global_1914319.f_17378), iParam0, &Var1))
		{
			return false;
		}
		if (Var1 != 0)
		{
			*uParam2 = Var1;
			uParam2->f_2 = 1;
			return true;
		}
	}
	else
	{
		if (ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_KEY_VALID(__LIB_6__::func_676(iVar0)))
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY(__LIB_6__::func_676(iVar0), iParam0, &iVar6))
			{
				return false;
			}
		}
		if (iVar6 == 0)
		{
			return false;
		}
		iVar9 = 0;
		if (!__LIB_16__::func_75(iParam1, &iVar6, uParam2, &iVar9))
		{
			return false;
		}
		if (__LIB_0__::func_831(iParam0))
		{
			iVar10 = __LIB_12__::func_564(iParam0, iParam1, 1);
			iVar11 = __LIB_12__::func_489(iParam0);
			iVar12 = __LIB_9__::func_812(iVar11);
			if (iVar12 == joaat("BREED_ARDENNES_IRONGREYROAN") || iVar12 == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				if (!__LIB_12__::func_501(iVar12))
				{
					iVar10 = (iVar10 - 1);
				}
			}
			if (iVar10 <= 0)
			{
				return false;
			}
		}
		uParam2->f_2 = 1;
		return true;
	}
	return false;
}

void func_84(int iParam0)
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
						__LIB_16__::func_55(iVar0, 1, 752097756);
					}
					__LIB_15__::func_866(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_16__::func_55(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_16__::func_55(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_16__::func_55(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_16__::func_55(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_16__::func_55(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					__LIB_16__::func_55(-518019409, 1, 752097756);
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
			__LIB_16__::func_79();
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

void func_85(int iParam0)
{
	int iVar0;
	var uVar1;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_16(iParam0))
	{
		iVar0 = __LIB_0__::func_402(iParam0);
		__LIB_0__::func_798(iVar0);
	}
	__LIB_0__::func_798(1);
	if (__LIB_0__::func_797(1))
	{
		__LIB_15__::func_963(1, 0);
	}
	__LIB_15__::func_908(1);
	__LIB_16__::func_81(iParam0, 1, 0);
	__LIB_0__::func_837(1, 1);
	if (__LIB_0__::func_819(1) == 0)
	{
		__LIB_2__::func_226(1, 1);
	}
	uVar1 = PLAYER::_0x227B06324234FB09(PLAYER::PLAYER_ID(), iParam0);
	__LIB_1__::func_643();
}

void func_86(int iParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (__LIB_1__::func_16(iParam0))
	{
		iVar0 = __LIB_0__::func_402(iParam0);
		__LIB_0__::func_798(iVar0);
	}
	if (__LIB_0__::func_797(6))
	{
		__LIB_15__::func_963(6, 0);
	}
	__LIB_15__::func_908(6);
	__LIB_16__::func_81(iParam0, 6, 0);
	__LIB_0__::func_837(6, 1);
	if (!bParam1)
	{
		__LIB_15__::func_99(6, 0);
		__LIB_12__::func_554(MISC::GET_GAME_TIMER());
	}
	__LIB_1__::func_643();
}

void func_87(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;
	if (!__LIB_1__::func_917(iParam0))
	{
		return;
	}
	iVar0 = __LIB_1__::func_921(iParam0);
	if (!__LIB_1__::func_918(iVar0))
	{
		return;
	}
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1914319.f_3[iVar0 /*446*/].f_11);
	}
	else
	{
		iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1051260.f_48[iVar0 /*78*/].f_3);
	}
	if (!__LIB_15__::func_721(iVar0, iParam0, &iVar2))
	{
		return;
	}
	bVar14 = false;
	iVar13 = 0;
	while (iVar13 < iVar2)
	{
		if (__LIB_15__::func_371(iVar0, iParam0, iVar13, &Var3))
		{
			if (Var3.f_9 != 0 && bParam1)
			{
				if (!__LIB_16__::func_0(iParam0, Var3.f_9))
				{
					bVar14 = true;
				}
				if (bVar14)
				{
					bParam1 = false;
				}
			}
			if (bParam1)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
				{
					if (!INTERIOR::IS_VALID_INTERIOR(iVar1))
					{
						return;
					}
					if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar1, &Var3))
					{
						INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar1, &Var3, 1);
					}
				}
				if (__LIB_0__::func_30(Var3.f_8))
				{
					__LIB_0__::func_401(Var3.f_8);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var3))
				{
					if (!INTERIOR::IS_VALID_INTERIOR(iVar1))
					{
						return;
					}
					if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar1, &Var3))
					{
						INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar1, &Var3, true);
					}
				}
				if (__LIB_0__::func_30(Var3.f_8) && !STREAMING::_0xCF45DF50C7775F2A())
				{
					__LIB_0__::func_400(Var3.f_8);
				}
				if (bVar14)
				{
					bVar14 = false;
					bParam1 = true;
				}
			}
		}
		iVar13++;
	}
}

bool func_88(var uParam0, int iParam1)
{
	struct<5> Var0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_15__::func_281(iParam1))
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam1, -1588156645))
	{
		if (!__LIB_0__::func_428(__LIB_0__::func_914(iParam1, 0)) && !__LIB_0__::func_214(__LIB_0__::func_914(iParam1, 0)))
		{
			return true;
		}
	}
	if (__LIB_16__::func_83(iParam1, uParam0->f_220, &Var0))
	{
		return Var0.f_4;
	}
	return true;
}

bool func_89(var uParam0, int iParam1)
{
	struct<5> Var0;
	if (__LIB_0__::func_2() != -1)
	{
		return !__LIB_1__::func_63(iParam1);
	}
	if (__LIB_16__::func_83(iParam1, uParam0->f_220, &Var0))
	{
		return Var0.f_4;
	}
	return false;
}

bool func_90(int iParam0, int iParam1)
{
	var uVar0;
	if (iParam1 == 101)
	{
		return __LIB_15__::func_425(iParam0);
	}
	else if (__LIB_16__::func_83(iParam0, iParam1, &uVar0))
	{
		return true;
	}
	return false;
}

bool func_91(var uParam0, vector3 vParam1)
{
	int iVar0;
	var uVar1;
	if (!__LIB_0__::func_144(vParam1.x, 0))
	{
		return false;
	}
	if (uParam0->f_3 == 152)
	{
		if (__LIB_14__::func_739(vParam1.x))
		{
			Stack.Push(uParam0);
			Stack.Push(vParam1.y);
			Stack.Push(vParam1.z);
			Call_Loc(uParam0->f_2031.f_125);
			if (!StackVal)
			{
				return true;
			}
		}
		else if (__LIB_12__::func_486(vParam1.x))
		{
			return true;
		}
		return __LIB_0__::func_788(vParam1.x, 0) > 0;
	}
	else
	{
		iVar0 = uParam0->f_3;
		if (__LIB_1__::func_917(__LIB_14__::func_902(uParam0)))
		{
			iVar0 = __LIB_14__::func_902(uParam0);
		}
		if (!__LIB_0__::func_313())
		{
			if (vParam1.x == joaat("WEAPON_PISTOL_M1899"))
			{
				return false;
			}
		}
		if (__LIB_16__::func_83(vParam1.x, iVar0, &uVar1))
		{
			return true;
		}
	}
	return false;
}

int func_92(int iParam0, int iParam1)
{
	struct<5> Var0;
	if (__LIB_16__::func_83(iParam0, iParam1, &Var0))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_93(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_16__::func_84(iParam0);
}

bool func_94(int iParam0, int iParam1)
{
	return (__LIB_15__::func_894(iParam0, iParam1) || __LIB_15__::func_895(iParam0, iParam1));
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = __LIB_14__::func_455(iVar1);
		iVar0 = (iVar0 + __LIB_15__::func_900(iVar2, iParam0));
		iVar1++;
	}
	return iVar0;
}

int func_96(int iParam0)
{
	bool bVar0;
	if (__LIB_4__::func_377(1024))
	{
		return 0;
	}
	if (!__LIB_0__::func_293(43))
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
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0;
	}
	if (__LIB_1__::func_16(iParam0))
	{
		if (__LIB_0__::func_402(iParam0) != 6)
		{
			return 0;
		}
	}
	if (__LIB_5__::func_987(iParam0) > 0)
	{
		bVar0 = false;
		if (__LIB_1__::func_16(iParam0))
		{
			if (__LIB_0__::func_402(iParam0) == 6)
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			__LIB_15__::func_880(6, 1);
		}
		else
		{
			__LIB_16__::func_85(iParam0);
		}
		__LIB_12__::func_544();
		__LIB_1__::func_643();
		return 1;
	}
	else
	{
		if (!__LIB_15__::func_84(iParam0))
		{
			return 0;
		}
		__LIB_16__::func_86(iParam0, 0);
		__LIB_12__::func_544();
		__LIB_1__::func_643();
		return 1;
	}
	return 0;
}

void func_97(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_12__::func_197(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_15__::func_928(iParam0, iParam1, 1, 0);
		}
	}
}

bool func_98(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<4> Var4;
	vector3 vVar8;
	*iParam3 = 0;
	if (!__LIB_14__::func_693(iParam1))
	{
		return false;
	}
	vVar8.f_1 = -1;
	vVar8.f_2 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam1, iParam2, &Var4))
	{
		iVar0 = 0;
		while (iVar0 < Var4.f_3)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(iParam1, Var4, iVar0, &iVar3, &uVar1, &uVar2))
			{
				if (__LIB_0__::func_144(iVar3, 0))
				{
					vVar8.x = iVar3;
					vVar8.f_1 = uVar2;
					vVar8.f_2 = uVar1;
					if (__LIB_16__::func_91(uParam0, vVar8))
					{
						*iParam3 = iVar3;
						*iParam4 = uVar2;
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_99(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_14__::func_782(&(uParam0->f_2031));
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	iVar4 = 0;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar0)
	{
		iVar5 = __LIB_14__::func_921(iVar6, &(uParam0->f_2031));
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			vVar1 = { __LIB_15__::func_605(iVar6, iVar4, &(uParam0->f_2031)) };
			if (__LIB_0__::func_144(vVar1.x, 0))
			{
				if (__LIB_16__::func_91(uParam0, vVar1))
				{
					*iParam1++;
				}
			}
			iVar4++;
		}
		iVar6++;
	}
	return true;
}

void func_100(var uParam0)
{
	if (!__LIB_1__::func_917(uParam0->f_3))
	{
		return;
	}
	if (Global_1914319.f_19001[uParam0->f_3 /*3*/].f_2 == -1)
	{
		if (__LIB_15__::func_449(uParam0->f_3))
		{
			__LIB_15__::func_154(uParam0->f_3, 1);
		}
		else
		{
			__LIB_15__::func_154(uParam0->f_3, 0);
		}
	}
	if (__LIB_15__::func_155(uParam0->f_3))
	{
		uParam0->f_14 = 1;
		__LIB_16__::func_87(uParam0->f_3, 1);
	}
}

void func_101(var uParam0)
{
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true) && Global_1914319.f_16855 == uParam0->f_2)
	{
		return;
	}
	if (__LIB_14__::func_126(uParam0->f_3, 1073741824 /* Float: 2f */))
	{
		return;
	}
	__LIB_15__::func_619(uParam0);
	__LIB_16__::func_87(uParam0->f_3, 0);
}

bool func_102(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<4> Var4;
	vector3 vVar8;
	if (!__LIB_14__::func_693(iParam1))
	{
		return false;
	}
	vVar8.f_1 = -1;
	vVar8.f_2 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam1, iParam2, &Var4))
	{
		iVar0 = 0;
		while (iVar0 < Var4.f_3)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(iParam1, Var4, iVar0, &uVar3, &uVar1, &uVar2))
			{
				vVar8.x = uVar3;
				vVar8.f_1 = uVar2;
				vVar8.f_2 = uVar1;
				if (__LIB_16__::func_91(uParam0, vVar8) && !__LIB_12__::func_486(vVar8.x))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_103(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	iVar0 = __LIB_14__::func_782(&(uParam0->f_2031));
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	iVar1 = __LIB_15__::func_376(iParam1, &(uParam0->f_2031));
	if (__LIB_14__::func_891(__LIB_15__::func_33(uParam0), iVar1, 1))
	{
		return true;
	}
	if (__LIB_14__::func_795(iVar1))
	{
		iVar2 = 0;
		__LIB_15__::func_52(uParam0, iVar1, &iVar2);
		return iVar2 > 0;
	}
	iVar3 = __LIB_14__::func_921(iParam1, &(uParam0->f_2031));
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < iVar3)
	{
		vVar4 = { __LIB_15__::func_605(iParam1, iVar7, &(uParam0->f_2031)) };
		if (__LIB_0__::func_144(vVar4.x, 0))
		{
			if (__LIB_16__::func_91(uParam0, vVar4))
			{
				return true;
			}
		}
		iVar7++;
	}
	return false;
}

bool func_104(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = false;
	if (__LIB_0__::func_192(iParam1, 930141731))
	{
		bVar0 = !UNLOCK::_UNLOCK_IS_UNLOCKED(iParam1);
	}
	bVar1 = !__LIB_1__::func_63(iParam1);
	bVar2 = __LIB_16__::func_92(iParam1, uParam0->f_3);
	bVar3 = ((bVar1 || bVar2) || bVar0);
	return bVar3;
}

void func_105(int iParam0)
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
			__LIB_15__::func_866(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		__LIB_16__::func_93(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_15__::func_808(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_106(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemInfo1");
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

void func_107(var uParam0, int iParam1)
{
	__LIB_1__::func_683(&(uParam0->f_2031.f_45), iParam1);
}

bool func_108(int iParam0, int iParam1, int iParam2)
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
		if (__LIB_12__::func_127(iParam0) && __LIB_6__::func_679(iParam0))
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
	if (!__LIB_16__::func_13(iParam0, &uVar6, &Var1, iParam2, 752097756, 1))
	{
		return false;
	}
	return true;
}

bool func_109(int iParam0, int iParam1, int iParam2)
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
	if (__LIB_9__::func_843(iParam1) == 105 && __LIB_5__::func_219(21))
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

int func_110(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	iVar0 = uParam1->f_9;
	bVar1 = __LIB_15__::func_391(0);
	__LIB_15__::func_897(uParam0, 1, joaat("SHOP_CRAFT"), bVar1, 1, 0);
	if (__LIB_0__::func_356(iVar0) == joaat("CLOTHING"))
	{
		__LIB_16__::func_72(uParam0, iVar0);
	}
	return 1;
}

int func_111(var uParam0, var uParam1)
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
					__LIB_16__::func_72(uParam0, iVar0);
				}
				if (!__LIB_16__::func_53(__LIB_14__::func_738(uParam0), iVar0, &iVar3))
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

bool func_112(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	int iVar7;
	int iVar8;
	var uVar9;
	*iParam3 = 0;
	if (!__LIB_14__::func_693(iParam1))
	{
		return false;
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
					if (__LIB_16__::func_98(uParam0, iParam1, iVar7, iParam3, &uVar9))
					{
						return true;
					}
				}
				iVar8++;
			}
		}
	}
	return false;
}

void func_113(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	struct<2> Var9;
	struct<16> Var21;
	int iVar57;
	int iVar58;
	bool bVar59;
	vector3 vVar60;
	if (*uParam0 < 6 || *uParam0 > 16)
	{
		return;
	}
	if (__LIB_15__::func_239(uParam0, "cata_mp_stamp_ct"))
	{
		HUD::_0x9D37EB5003E0F2CF(HUD::GET_NAMED_RENDERTARGET_RENDER_ID("cata_mp_stamp_ct"), 1);
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 2f, 2f, 0, 0, 0, 255, false, true);
	}
	if (__LIB_15__::func_239(uParam0, "cata_mp_stamp_ab"))
	{
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false, true);
	}
	if (__LIB_15__::func_239(uParam0, "cata_mp_stamp_ma"))
	{
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 102, 255, 255, false, true);
	}
	bVar0 = __LIB_0__::func_2() == -1;
	Var9.f_1 = 10;
	Var21.f_3 = 10;
	Var21.f_15 = 10;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!__LIB_15__::func_240(uParam0, uParam0->f_436[iVar1 /*185*/]))
		{
		}
		else
		{
			iVar57 = 0;
			while (iVar57 < uParam0->f_436[iVar1 /*185*/].f_149)
			{
				iVar58 = uParam0->f_436[iVar1 /*185*/].f_136[iVar57 /*3*/];
				bVar59 = false;
				if (!__LIB_15__::func_374(iVar58))
				{
				}
				else
				{
					if (__LIB_0__::func_774(iVar58, 1048576) && ((__LIB_16__::func_83(iVar58, uParam0->f_220, &vVar3) && vVar3.z == 0) || __LIB_16__::func_60(uParam0, iVar58, 1)))
					{
						__LIB_15__::func_838(uParam0, iVar1, iVar57, 9);
					}
					if (__LIB_14__::func_739(iVar58))
					{
						vVar60.f_1 = -1;
						vVar60.f_2 = -1;
						vVar60 = { uParam0->f_436[iVar1 /*185*/].f_136[iVar57 /*3*/] };
						if (__LIB_16__::func_61(vVar60.y, vVar60.z))
						{
							bVar59 = true;
							__LIB_15__::func_838(uParam0, iVar1, iVar57, 7);
						}
					}
					else if (__LIB_16__::func_15(iVar58))
					{
						bVar59 = true;
						__LIB_15__::func_838(uParam0, iVar1, iVar57, 7);
					}
					if (!bVar59 && __LIB_16__::func_88(uParam0, iVar58))
					{
						__LIB_15__::func_838(uParam0, iVar1, iVar57, 12);
					}
					if (!bVar0)
					{
						if (__LIB_15__::func_241(iVar58))
						{
							__LIB_15__::func_838(uParam0, iVar1, iVar57, 11);
						}
						if (ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iVar58, &Var9))
						{
							iVar2 = 0;
							while (iVar2 < Var9)
							{
								if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY(Var9.f_1[iVar2], &Var21))
								{
									__LIB_15__::func_838(uParam0, iVar1, iVar57, __LIB_15__::func_242(Var21.f_1));
								}
								iVar2++;
							}
						}
					}
				}
				iVar57++;
			}
		}
		iVar1++;
	}
}

int func_114(var uParam0, var uParam1)
{
	int iVar0;
	int iVar4;
	int iVar5;
	var uVar6;
	iVar4 = 0;
	iVar4 = __LIB_14__::func_782(&(uParam0->f_2031));
	if (iVar4 < 0)
	{
		return 0;
	}
	else if (!__LIB_14__::func_814(0, &(uParam0->f_2031), &iVar0))
	{
		return 0;
	}
	if (!__LIB_16__::func_98(uParam0, __LIB_15__::func_33(uParam0), iVar0, &iVar5, &uVar6))
	{
		return 0;
	}
	if (!__LIB_0__::func_144(iVar5, 0))
	{
		return 0;
	}
	*uParam1 = __LIB_16__::func_57(uParam0, iVar5);
	uParam1->f_7 = iVar5;
	return 1;
}

bool func_115(var uParam0, int iParam1, int iParam2)
{
	struct<6> Var0;
	bool bVar7;
	int iVar8;
	int iVar9;
	if (!__LIB_14__::func_693(iParam1))
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam1, iParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			bVar7 = false;
			iVar8 = -1;
			iVar9 = 0;
			while (iVar9 < Var0.f_5)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(iParam1, iParam2, iVar9, &iVar8))
				{
					if (!__LIB_16__::func_102(uParam0, iParam1, iVar8))
					{
						bVar7 = true;
					}
					else
					{
						iVar9++;
					}
					if (!bVar7)
					{
						return true;
					}
					return false;
				}
			}
		}
	}
}

bool func_116(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	iVar0 = 0;
	iVar0 = __LIB_14__::func_782(&(uParam0->f_2031));
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_14__::func_814(iVar1, &(uParam0->f_2031), &uVar3))
		{
			if (!__LIB_16__::func_103(uParam0, iVar1))
			{
			}
			else
			{
				if (iVar2 == iParam1)
				{
					*iParam2 = iVar1;
					return true;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
	return false;
}

int func_117(int iParam0, int iParam1)
{
	var uVar0;
	if (iParam1 == 101)
	{
		return __LIB_15__::func_425(iParam0);
	}
	else if (__LIB_16__::func_83(iParam0, iParam1, &uVar0))
	{
		return 1;
	}
	return 0;
}

void func_118(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!__LIB_12__::func_515(iParam1))
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
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	__LIB_12__::func_572(iParam0);
	iVar0 = -1;
	bVar1 = false;
	if (__LIB_1__::func_16(iParam0))
	{
		iVar0 = __LIB_0__::func_402(iParam0);
		bVar1 = true;
	}
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSE_FED")), 1);
	iVar2 = __LIB_12__::func_529(iParam0, 0);
	iVar3 = __LIB_12__::func_529(iParam0, 1);
	__LIB_15__::func_994(iParam0, iParam1);
	iVar4 = __LIB_12__::func_529(iParam0, 0);
	iVar5 = __LIB_12__::func_529(iParam0, 1);
	iVar6 = 0;
	iVar6 = (iVar6 + (iVar4 - iVar2));
	iVar6 = (iVar6 + (iVar5 - iVar3));
	__LIB_16__::func_96(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (__LIB_12__::func_530(iParam1))
	{
		__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSE_FED_MUSHROOM")), 1);
	}
	if (__LIB_12__::func_531(iParam1))
	{
		return;
	}
	if (__LIB_12__::func_532(iParam1))
	{
		__LIB_15__::func_99(iVar0, 16);
		return;
	}
	bVar7 = false;
	iVar8 = __LIB_12__::func_533(iParam0, 2);
	if (iVar8 < 30)
	{
		bVar7 = true;
	}
	iVar9 = -1;
	if (iVar6 >= 50 || bVar7)
	{
		iVar9 = 13;
	}
	else if (iVar6 >= 25)
	{
		iVar9 = 14;
	}
	else if (iVar6 >= 0)
	{
		iVar9 = 15;
	}
	if (iVar9 != -1)
	{
		__LIB_15__::func_99(iVar0, iVar9);
	}
	if (!__LIB_0__::func_474(43))
	{
		__LIB_1__::func_240(43, 0);
		__LIB_12__::func_534(MISC::GET_GAME_TIMER());
	}
}

void func_119(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!__LIB_12__::func_519(iParam1))
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
	__LIB_12__::func_572(iParam0);
	__LIB_15__::func_994(iParam0, iParam1);
	bVar1 = __LIB_1__::func_16(iParam0);
	if (bVar1)
	{
		iVar0 = __LIB_0__::func_402(iParam0);
	}
	__LIB_16__::func_96(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (!__LIB_15__::func_54(iParam0, 1))
	{
		__LIB_15__::func_99(iVar0, 20);
	}
	iVar2 = __LIB_6__::func_95(iParam0);
	fVar3 = (BUILTIN::TO_FLOAT(__LIB_12__::func_535(iVar2)) + (48f * 60f));
	__LIB_12__::func_536(iVar0, 0, fVar3);
}

void func_120(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!__LIB_12__::func_521(iParam1))
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
	__LIB_12__::func_572(iParam0);
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	__LIB_15__::func_994(iParam0, iParam1);
	__LIB_16__::func_96(iParam0);
	bVar1 = __LIB_1__::func_16(iParam0);
	if (bVar1)
	{
		iVar0 = __LIB_0__::func_402(iParam0);
	}
	if (!bVar1)
	{
		return;
	}
	iVar2 = __LIB_6__::func_95(iParam0);
	iVar3 = __LIB_12__::func_535(iVar2);
	__LIB_12__::func_536(iVar0, 0, BUILTIN::TO_FLOAT(iVar3));
	bVar4 = false;
	iVar5 = MISC::GET_GAME_TIMER();
	iVar6 = __LIB_12__::func_537();
	if ((iVar6 + 45000) > iVar5)
	{
		bVar4 = true;
	}
	bVar7 = false;
	if (bVar4 && iVar6 + 15000 > iVar5)
	{
		bVar7 = true;
	}
	if (iParam2 >= 10)
	{
		iVar8 = 17;
	}
	else if (bVar4)
	{
		if (bVar7)
		{
			return;
		}
		else
		{
			iVar8 = 19;
		}
	}
	else
	{
		iVar8 = 18;
	}
	if (iVar8 != -1)
	{
		__LIB_15__::func_99(iVar0, iVar8);
		__LIB_12__::func_538(iVar5);
	}
}

int func_121(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bVar0 = true;
	iVar1 = __LIB_14__::func_820(0);
	iVar2 = __LIB_15__::func_316(iVar1, &(uParam0->f_2031));
	iVar3 = __LIB_15__::func_33(uParam0);
	if (__LIB_14__::func_951(iVar3, iVar2, 4))
	{
		iVar4 = 0;
		if (__LIB_16__::func_112(uParam0, iVar3, iVar2, &iVar4))
		{
			iVar5 = __LIB_16__::func_57(uParam0, iVar4);
			if ((((iVar5 == -853534656 || iVar5 == 761079318) || iVar5 == 1942587409) || iVar5 == 2077448405) || iVar5 == -2056428614)
			{
				__LIB_16__::func_72(uParam0, iVar4);
				bVar0 = false;
			}
			else if (iVar5 == 1394581936)
			{
				__LIB_16__::func_58(uParam0, iVar4);
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		__LIB_15__::func_494(uParam0, 1);
		__LIB_15__::func_389(uParam0);
	}
	bVar6 = __LIB_15__::func_391(0);
	__LIB_15__::func_897(uParam0, 1, joaat("IB_SELECT"), bVar6, 1, 0);
	return 1;
}

void func_122(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemWeather");
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "OutfitWeather");
	if (bParam2)
	{
		iVar3 = iParam1;
		iVar4 = __LIB_15__::func_33(uParam0);
		if (!__LIB_16__::func_112(uParam0, iVar4, iVar3, &iVar0))
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", false);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "Visible", false);
			return;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (__LIB_0__::func_357(iVar0) == -999503751)
	{
		iVar5 = __LIB_15__::func_686(iVar0);
		if (iVar5 == -1 || (iVar0 == joaat("CLOTHING_CUSTOM_ONE_OUTFIT") && __LIB_0__::func_604() != joaat("CLOTHING_CUSTOM_ONE_OUTFIT")))
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "Visible", false);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "Visible", true);
			DATABINDING::_DATABINDING_ADD_DATA_INT(iVar2, "Effectiveness", iVar5);
		}
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", false);
	}
	else
	{
		iVar6 = __LIB_14__::func_858(iVar0);
		if (iVar6 == -1)
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", false);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", true);
			DATABINDING::_DATABINDING_ADD_DATA_INT(iVar1, "Warmth", iVar6);
		}
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "Visible", false);
	}
}

void func_123(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	Global_1914319.f_17370 = 0;
	if (!__LIB_2__::func_804(uParam0->f_2, 16777216))
	{
		INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("WEAPON_FISHINGROD"));
		__LIB_1__::func_564(0);
	}
	uParam0->f_13 = 1;
	__LIB_14__::func_690(uParam0->f_3);
	__LIB_15__::func_331(uParam0->f_2, 0);
	__LIB_15__::func_332(uParam0);
	__LIB_15__::func_775(uParam0);
	if (__LIB_3__::func_127(Global_1914319.f_18963))
	{
		UIFEED::_0x2F901291EF177B02(Global_1914319.f_18963, 0);
	}
	if (__LIB_0__::func_2() != 0)
	{
		bVar0 = false;
		if (__LIB_0__::func_6(__LIB_0__::func_298(0)))
		{
			if (__LIB_0__::func_700(__LIB_0__::func_298(0)) != 1 && __LIB_0__::func_700(__LIB_0__::func_298(0)) != 8)
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			MAP::DISPLAY_RADAR(true);
		}
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		MAP::DISPLAY_RADAR(true);
	}
	HUD::_DISPLAY_HUD_COMPONENT(1815407589);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
	__LIB_15__::func_331(uParam0->f_2, 0);
	__LIB_15__::func_124(uParam0);
	if (uParam0->f_7)
	{
		__LIB_15__::func_884(&(uParam0->f_148));
		bVar2 = true;
		iVar1 = 0;
		while (iVar1 < 35)
		{
			if (__LIB_15__::func_325(iVar1, Global_1914319.f_3[iVar1 /*446*/].f_10) && __LIB_15__::func_501(iVar1))
			{
				bVar2 = false;
			}
			else
			{
				iVar1++;
			}
		}
		if (bVar2)
		{
			__LIB_15__::func_125(&(uParam0->f_148.f_4));
		}
	}
	__LIB_16__::func_78(uParam0);
	__LIB_15__::func_109(uParam0);
	if (Global_1914319.f_16855 == uParam0->f_2 || Global_1914319.f_16855 == -1)
	{
		Global_1914319.f_16855 = -1;
		Global_1914319.f_16855.f_1 = -1;
		Global_1914319.f_16855.f_2 = 0;
		__LIB_15__::func_115(0);
	}
	if (__LIB_0__::func_2() != -1)
	{
		if (uParam0->f_11)
		{
			__LIB_15__::func_545(uParam0->f_2, uParam0->f_3, PLAYER::GET_PLAYER_INDEX());
			__LIB_15__::func_123(65536);
			uParam0->f_11 = 0;
		}
		if (uParam0->f_10)
		{
			__LIB_15__::func_546(uParam0->f_2, uParam0->f_3, PLAYER::GET_PLAYER_INDEX());
			uParam0->f_10 = 0;
		}
		if (Global_1051260.f_3796 && Global_1051260.f_3797 == uParam0->f_2)
		{
			__LIB_14__::func_688(0);
			Global_1051260.f_3796 = 0;
		}
		if (!__LIB_15__::func_111(uParam0->f_2, 16384))
		{
			__LIB_15__::func_984(Global_1051260.f_48[uParam0->f_2 /*78*/].f_19, 0);
		}
	}
	if (__LIB_5__::func_853(4))
	{
		__LIB_0__::func_867(0);
	}
	__LIB_15__::func_121(0);
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1914319.f_18995))
	{
		SCRIPTS::_0x7DE4643157AD646C(Global_1914319.f_18995);
	}
	if (__LIB_14__::func_691(uParam0))
	{
		__LIB_15__::func_693(uParam0);
	}
	__LIB_15__::func_126(uParam0);
	__LIB_11__::func_10(uParam0->f_2, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_124(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	uParam0->f_2031.f_75 = 0;
	iVar1 = 0;
	iVar1 = __LIB_14__::func_782(&(uParam0->f_2031));
	if (iVar1 > 0)
	{
		iVar0 = 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (__LIB_14__::func_814(iVar2, &(uParam0->f_2031), &iVar3))
			{
				if (!__LIB_16__::func_103(uParam0, iVar2))
				{
				}
				else
				{
					uParam0->f_2031.f_75++;
				}
			}
			iVar2++;
		}
		if (uParam0->f_2031.f_74 >= uParam0->f_2031.f_75)
		{
			uParam0->f_2031.f_74 = (uParam0->f_2031.f_75 - 1);
		}
		if (__LIB_16__::func_116(uParam0, uParam0->f_2031.f_74, &iVar2))
		{
			if (__LIB_14__::func_814(iVar2, &(uParam0->f_2031), &iVar3))
			{
				__LIB_14__::func_796(uParam0, __LIB_15__::func_386(uParam0, iVar3));
			}
		}
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_50, "CategoryCount", uParam0->f_2031.f_75);
	uParam0->f_2031.f_56 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_50, __LIB_14__::func_890(), 0);
	return iVar0;
}

bool func_125(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	*iParam2 = 0;
	iVar0 = 0;
	if (!__LIB_16__::func_116(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar1 = __LIB_14__::func_782(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return false;
	}
	if (iVar0 >= iVar1 || iVar0 < 0)
	{
		return false;
	}
	vVar2.f_1 = -1;
	vVar2.f_2 = -1;
	iVar5 = 0;
	iVar7 = __LIB_15__::func_376(iVar0, &(uParam0->f_2031));
	if (__LIB_14__::func_891(__LIB_15__::func_33(uParam0), iVar7, 1))
	{
		if (!__LIB_16__::func_99(uParam0, iParam2))
		{
			return false;
		}
	}
	else if (__LIB_14__::func_795(iVar7))
	{
		if (!__LIB_15__::func_52(uParam0, iVar7, iParam2))
		{
			return false;
		}
	}
	else
	{
		iVar6 = __LIB_14__::func_921(iVar0, &(uParam0->f_2031));
		if (iVar6 <= 0)
		{
		}
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			vVar2 = { __LIB_15__::func_605(iVar0, iVar5, &(uParam0->f_2031)) };
			if (__LIB_0__::func_144(vVar2.x, 0))
			{
				if (__LIB_16__::func_91(uParam0, vVar2))
				{
					*iParam2++;
				}
			}
			iVar5++;
		}
	}
	return true;
}

int func_126(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (!__LIB_16__::func_116(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
		return -1;
	}
	return iVar0;
}

int func_127(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (!__LIB_16__::func_116(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
		return -1;
	}
	return __LIB_15__::func_376(iVar0, &(uParam0->f_2031));
}

bool func_128(var uParam0)
{
	int iVar0;
	int iVar1;
	uParam0->f_2031.f_74 = __LIB_15__::func_385(uParam0);
	iVar0 = 0;
	if (!__LIB_16__::func_116(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
		return false;
	}
	if (__LIB_14__::func_814(iVar0, &(uParam0->f_2031), &iVar1))
	{
		__LIB_14__::func_796(uParam0, __LIB_15__::func_386(uParam0, iVar1));
		__LIB_15__::func_387(uParam0, 0, 1);
		__LIB_15__::func_898(uParam0, 0);
	}
	else
	{
		return false;
	}
	return true;
}

void func_129(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_16__::func_93(50);
			}
			else
			{
				__LIB_16__::func_93(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_16__::func_93(51);
			}
			else
			{
				__LIB_16__::func_93(49);
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
			__LIB_16__::func_93(24);
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

void func_130(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!__LIB_12__::func_515(iParam1))
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
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	__LIB_12__::func_572(iParam0);
	iVar0 = -1;
	bVar1 = false;
	if (__LIB_1__::func_16(iParam0))
	{
		iVar0 = __LIB_0__::func_402(iParam0);
		bVar1 = true;
	}
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSE_FED")), 1);
	iVar2 = __LIB_12__::func_529(iParam0, 0);
	iVar3 = __LIB_12__::func_529(iParam0, 1);
	__LIB_15__::func_862(iParam0, iParam1);
	iVar4 = __LIB_12__::func_529(iParam0, 0);
	iVar5 = __LIB_12__::func_529(iParam0, 1);
	iVar6 = 0;
	iVar6 = (iVar6 + (iVar4 - iVar2));
	iVar6 = (iVar6 + (iVar5 - iVar3));
	__LIB_16__::func_96(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (__LIB_12__::func_530(iParam1))
	{
		__LIB_0__::func_15(__LIB_0__::func_358(joaat("HORSE_FED_MUSHROOM")), 1);
	}
	if (__LIB_12__::func_531(iParam1))
	{
		return;
	}
	if (__LIB_12__::func_532(iParam1))
	{
		__LIB_15__::func_99(iVar0, 16);
		return;
	}
	bVar7 = false;
	iVar8 = __LIB_12__::func_533(iParam0, 2);
	if (iVar8 < 30)
	{
		bVar7 = true;
	}
	iVar9 = -1;
	if (iVar6 >= 50 || bVar7)
	{
		iVar9 = 13;
	}
	else if (iVar6 >= 25)
	{
		iVar9 = 14;
	}
	else if (iVar6 >= 0)
	{
		iVar9 = 15;
	}
	if (iVar9 != -1)
	{
		__LIB_15__::func_99(iVar0, iVar9);
	}
	if (!__LIB_0__::func_474(43))
	{
		__LIB_1__::func_240(43, 0);
		__LIB_12__::func_534(MISC::GET_GAME_TIMER());
	}
}

void func_131(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!__LIB_12__::func_519(iParam1))
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
	__LIB_12__::func_572(iParam0);
	__LIB_15__::func_862(iParam0, iParam1);
	bVar1 = __LIB_1__::func_16(iParam0);
	if (bVar1)
	{
		iVar0 = __LIB_0__::func_402(iParam0);
	}
	__LIB_16__::func_96(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (!__LIB_15__::func_54(iParam0, 1))
	{
		__LIB_15__::func_99(iVar0, 20);
	}
	iVar2 = __LIB_6__::func_95(iParam0);
	fVar3 = (BUILTIN::TO_FLOAT(__LIB_12__::func_535(iVar2)) + (48f * 60f));
	__LIB_12__::func_536(iVar0, 0, fVar3);
}

void func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!__LIB_12__::func_521(iParam1))
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
	__LIB_12__::func_572(iParam0);
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	__LIB_15__::func_862(iParam0, iParam1);
	__LIB_16__::func_96(iParam0);
	bVar1 = __LIB_1__::func_16(iParam0);
	if (bVar1)
	{
		iVar0 = __LIB_0__::func_402(iParam0);
	}
	if (!bVar1)
	{
		return;
	}
	iVar2 = __LIB_6__::func_95(iParam0);
	iVar3 = __LIB_12__::func_535(iVar2);
	__LIB_12__::func_536(iVar0, 0, BUILTIN::TO_FLOAT(iVar3));
	bVar4 = false;
	iVar5 = MISC::GET_GAME_TIMER();
	iVar6 = __LIB_12__::func_537();
	if ((iVar6 + 45000) > iVar5)
	{
		bVar4 = true;
	}
	bVar7 = false;
	if (bVar4 && iVar6 + 15000 > iVar5)
	{
		bVar7 = true;
	}
	if (iParam2 >= 10)
	{
		iVar8 = 17;
	}
	else if (bVar4)
	{
		if (bVar7)
		{
			return;
		}
		else
		{
			iVar8 = 19;
		}
	}
	else
	{
		iVar8 = 18;
	}
	if (iVar8 != -1)
	{
		__LIB_15__::func_99(iVar0, iVar8);
		__LIB_12__::func_538(iVar5);
	}
}

int func_133(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = __LIB_14__::func_694(0);
	if (__LIB_0__::func_144(iVar0, 0))
	{
		if (!__LIB_0__::func_192(iVar0, 265372629))
		{
			__LIB_14__::func_794(uParam0, 1);
			__LIB_15__::func_406(uParam0, __LIB_14__::func_452(iVar0));
			bVar1 = __LIB_15__::func_391(0);
			if (__LIB_15__::func_40(0) == -2056428614)
			{
				bVar1 = true;
			}
			__LIB_14__::func_793(uParam0, bVar1);
		}
		else
		{
			__LIB_14__::func_794(uParam0, 0);
		}
		iVar2 = __LIB_15__::func_40(0);
		switch (iVar2)
		{
			case -348190488:
				__LIB_16__::func_122(uParam0, iVar0, 1);
				break;
			case -853534656:
			case 761079318:
			case 1942587409:
			case 2077448405:
				__LIB_16__::func_122(uParam0, iVar0, 0);
				break;
			default:
				__LIB_14__::func_806(uParam0);
				break;
		}
		if (iVar2 == 1942587409 && __LIB_7__::func_439())
		{
			__LIB_15__::func_405(uParam0, -476745902);
		}
		else
		{
			__LIB_14__::func_804(uParam0, 0);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_134(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	struct<2> Var4[15];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	__LIB_14__::func_904(uParam0->f_2, &iVar0);
	if (!__LIB_15__::func_51(iParam1, iVar0))
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_64))
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_64);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_65))
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_65);
	}
	if (__LIB_0__::func_976(iParam1, iVar0, &Var4, &iVar35, 1, 0))
	{
		iVar39 = 0;
		iVar38 = 0;
		while (iVar38 < iVar35)
		{
			iVar40 = Var4[iVar38 /*2*/];
			if ((__LIB_0__::func_144(iVar40, 0) && iVar40 != joaat("CURRENCY_CASH")) && iVar40 != joaat("CURRENCY_GOLD_BAR"))
			{
				if (uParam0->f_2 == 18 || uParam0->f_2 == 19)
				{
					iVar41 = __LIB_14__::func_849(uParam0->f_2);
					iVar42 = __LIB_5__::func_998(iVar41);
					iVar39 = __LIB_0__::func_800(iVar40, __LIB_0__::func_949(1), iVar42, 0);
				}
				else
				{
					iVar39 = ((__LIB_12__::func_143(iVar40) + __LIB_12__::func_177(7, iVar40)) + __LIB_0__::func_800(iVar40, __LIB_0__::func_949(1), 1084182731, 0));
				}
				iVar36 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_64, __LIB_1__::func_72(iVar40));
				DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar36, "itemName", MISC::_CREATE_VAR_STRING(32, 1097941440 /* GXTEntry: "~1~ x ~2~" */, Var4[iVar38 /*2*/].f_1, MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iVar40))));
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar36, "enabled", iVar39 >= Var4[iVar38 /*2*/].f_1);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_2031.f_64, -1, "recipeListItem", iVar36);
				iVar37 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_65, __LIB_1__::func_72(iVar40));
				vVar1 = { __LIB_14__::func_999(iVar40) };
				DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar37, "textureDictionary", vVar1.y);
				DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar37, "texture", vVar1.x);
				DATABINDING::_DATABINDING_ADD_DATA_INT(iVar37, "count", iVar39);
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar37, "visible", true);
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar37, "enabled", iVar39 >= Var4[iVar38 /*2*/].f_1);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_2031.f_65, -1, "recipeImageItem", iVar37);
			}
			iVar38++;
		}
	}
	__LIB_15__::func_406(uParam0, __LIB_14__::func_452(iParam1));
	__LIB_14__::func_794(uParam0, 1);
	__LIB_16__::func_122(uParam0, iParam1, 0);
	return true;
}

void func_135(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_15__::func_907(-999503751);
	if (iVar0 != 0)
	{
		if (__LIB_14__::func_795(__LIB_16__::func_127(uParam0)))
		{
			__LIB_15__::func_387(uParam0, -1, 1);
		}
		__LIB_15__::func_916(iVar0, 1, 1);
	}
}

int func_136(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_16__::func_124(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_16__::func_125(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	return 1;
}

int func_137(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (!__LIB_16__::func_124(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_16__::func_125(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	if (__LIB_14__::func_870(uParam0))
	{
		iVar1 = __LIB_14__::func_871(uParam0);
		__LIB_16__::func_122(uParam0, iVar1, 0);
	}
	else
	{
		__LIB_14__::func_806(uParam0);
	}
	return 1;
}

int func_138(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_16__::func_124(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_16__::func_125(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	__LIB_15__::func_406(uParam0, 0);
	return 1;
}

int func_139(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_16__::func_124(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_16__::func_125(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	iVar1 = __LIB_14__::func_824(uParam0);
	iVar2 = __LIB_14__::func_825(uParam0);
	__LIB_15__::func_414(uParam0, iVar2, iVar1, iVar1, 0, 1);
	if (uParam0->f_2 == 25)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, "ShavingSplitterVisible", false);
	}
	return 1;
}

int func_140(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_16__::func_124(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_16__::func_125(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
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
	__LIB_15__::func_406(uParam0, 0);
	return 1;
}

int func_141(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_16__::func_124(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_16__::func_125(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
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
	return 1;
}

int func_142(var uParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_16__::func_124(uParam0))
	{
	}
	iVar0 = 0;
	if (!__LIB_16__::func_125(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_64))
	{
		uParam0->f_2031.f_64 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2031.f_50, "ItemRecipeTextList");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_64);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_65))
	{
		uParam0->f_2031.f_65 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2031.f_50, "ItemRecipeImageList");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_65);
	}
	__LIB_14__::func_884(uParam0, 0);
	__LIB_14__::func_885(uParam0, 0);
	__LIB_14__::func_886(uParam0, 1);
	return 1;
}

int func_143(var uParam0, bool bParam1)
{
	int iVar0;
	if (!bParam1)
	{
		if (!__LIB_16__::func_124(uParam0))
		{
		}
	}
	iVar0 = 0;
	if (!__LIB_16__::func_125(uParam0, uParam0->f_2031.f_74, &iVar0))
	{
	}
	if (!__LIB_14__::func_883(uParam0, iVar0))
	{
	}
	return 1;
}

int func_144(var uParam0, var uParam1)
{
	var uVar0;
	struct<9> Var1;
	int iVar11;
	int iVar12;
	var uVar13;
	int iVar14;
	struct<17> Var15;
	int iVar32;
	int iVar33;
	int iVar34;
	uVar0 = uParam1->f_1;
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1.f_8 = uVar0;
	iVar11 = 0;
	iVar12 = 0;
	iVar12 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var1, &iVar11, 1);
	if (iVar12 == -1)
	{
		return 0;
	}
	iVar14 = __LIB_16__::func_126(uParam0);
	iVar33 = 0;
	iVar33 = 0;
	while (iVar33 < iVar11)
	{
		iVar32 = __LIB_0__::func_374(iVar33, iVar12);
		if (__LIB_0__::func_144(iVar32, 0))
		{
			iVar34 = __LIB_16__::func_57(uParam0, iVar32);
			if (iVar34 == 1702073444)
			{
			}
			else
			{
				Var15 = { *uParam1 };
				Var15.f_9 = iVar32;
				Var15 = iVar34;
				if (__LIB_15__::func_745(&(uParam0->f_2031), iVar32, &uVar13))
				{
					uParam0->f_2031.f_74 = uVar13;
				}
				else if (ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar32, uVar0) == -2089472884)
				{
				}
			else
			{
				}
				else
				{
					Stack.Push(uParam0);
					Stack.Push(&Var15);
					Call_Loc(uParam0->f_2031.f_123);
					if (StackVal)
					{
					}
					if (uParam0->f_2031.f_113)
					{
						Stack.Push(uParam0);
						Stack.Push(&Var15);
						Call_Loc(uParam0->f_2031.f_114);
						if (!StackVal)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar33++;
	}
	uParam0->f_2031.f_74 = iVar14;
	ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar12);
	return 1;
}

void func_145(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (iParam2 == 1256151078)
	{
		__LIB_14__::func_760(uParam0, uParam0->f_2280.f_6);
		__LIB_14__::func_796(uParam0, uParam0->f_2280.f_6);
	}
	else
	{
		iVar0 = iParam2;
		if (__LIB_0__::func_144(iVar0, 0) && __LIB_0__::func_192(iVar0, -393037696))
		{
			__LIB_14__::func_760(uParam0, iParam2);
			__LIB_14__::func_796(uParam0, iParam2);
		}
		else
		{
			__LIB_14__::func_797(uParam0);
			iVar1 = __LIB_16__::func_127(uParam0);
			if (iVar1 != -1)
			{
				__LIB_14__::func_796(uParam0, iVar1);
			}
			else
			{
				__LIB_14__::func_796(uParam0, iParam2);
			}
		}
	}
}

void func_146(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_16__::func_129(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_16__::func_129(iParam1, 1);
		__LIB_16__::func_82(iParam0);
	}
}

void func_147(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	if (__LIB_0__::func_86(uParam0->f_148.f_1733))
	{
	}
	else
	{
		fVar0 = (uParam0->f_148.f_1736 + 180f);
		if (fVar0 > 360f)
		{
			fVar0 = (fVar0 - 360f);
		}
		vVar1 = { 0f, 0f, fVar0 };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_2413, uParam0->f_148.f_1733, vVar1, 0);
	}
}

char* func_148(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "PB_CHECKOUT_SIDE";
		case 2:
			return "PB_CHECKOUT_V1";
		case 3:
			return "PB_CHECKOUT_V2";
		case 4:
			return "PB_CHECKOUT_V3";
		case 5:
			return "PB_NEW_LOOK_V1";
		case 6:
			return "PB_NEW_LOOK_V2";
		case 7:
			return "PB_GLOVE_V1";
		case 8:
			return "PB_GLOVE_V2";
		case 9:
			return "PB_PANTS_V1";
		case 10:
			return "PB_PANTS_V2";
		case 15:
			return "PB_BOOTS";
		case 14:
			return "PB_HAT";
		case 11:
			return "PB_ADJUST";
		case 12:
			return "PB_SHOULDER_ROLL_V1";
		case 13:
			return "PB_SHOULDER_ROLL_V2";
		case 16:
			return "PB_ENTER_LEFT";
		case 17:
			return "PB_ENTER_RIGHT";
		case 18:
			return "PB_ENTER_DOOR";
		case 19:
			return "PB_IDLE";
		default:
			break;
	}
	return "";
}

bool func_149(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam6->f_2413, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam6->f_2413, sParam0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam6->f_2413, sParam0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam6->f_2413, sParam0);
		}
		return false;
	}
	if (ANIMSCENE::_0x1F0E401031E20146(uParam6->f_2413, sParam0) && !ANIMSCENE::_0x8D81E7824B7753F7(uParam6->f_2413, "Idle", 1))
	{
		return true;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam6->f_2413, sParam0, true);
	return true;
}

int func_150(int iParam0, int iParam1)
{
	return MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1 + 1);
}

int func_151(var uParam0)
{
	return __LIB_15__::func_942(uParam0);
}

void func_152(var uParam0)
{
	switch (uParam0->f_2319.f_5)
	{
		case 2:
			if (!vLocal_14.f_4)
			{
				vLocal_14.f_3 = uParam0->f_2319.f_16;
				uParam0->f_2319.f_16 = 0;
				__LIB_1__::func_148(&(uParam0->f_2319.f_77));
				vLocal_14.f_4 = 1;
			}
			break;
		case 5:
			uParam0->f_2319.f_16 = vLocal_14.f_3;
			vLocal_14.f_4 = 0;
			break;
	}
}

bool func_153(int iParam0, int iParam1)
{
	return (__LIB_15__::func_987(iParam0, iParam1) || __LIB_15__::func_988(iParam0, iParam1));
}

void func_154(int iParam0, int iParam1)
{
	__LIB_0__::func_516(&(Global_1914319.f_3[iParam0 /*446*/].f_5), iParam1);
}

bool func_155(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_VALID(iParam4))
	{
		return false;
	}
	uParam0->f_221 = iParam2;
	uParam0->f_220 = iParam1;
	uParam0->f_1269 = iParam4;
	if (!__LIB_14__::func_774(iParam3, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1270 = 1;
	uParam0->f_1271 = iParam3;
	uParam0->f_1262 = 203360;
	uParam0->f_1263 = 203369;
	uParam0->f_1264 = 203378;
	uParam0->f_1265 = 203378;
	uParam0->f_222 = iParam5;
	__LIB_0__::func_19(uParam0, 0);
	return true;
}

bool func_156(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 == -1)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_VALID(iParam3))
	{
		return false;
	}
	uParam0->f_221 = iParam2;
	uParam0->f_220 = iParam1;
	uParam0->f_1269 = iParam3;
	if (!__LIB_14__::func_775(uParam0->f_220, uParam0->f_221, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1262 = 203360;
	uParam0->f_1263 = 203369;
	uParam0->f_1264 = 203378;
	uParam0->f_1265 = 203378;
	uParam0->f_222 = iParam4;
	__LIB_0__::func_19(uParam0, 0);
	return true;
}

void func_157(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (bParam2)
		{
			__LIB_11__::func_271(iParam0, 4);
		}
		else
		{
			__LIB_2__::func_810(iParam0, 33554432);
		}
	}
	else if (bParam2)
	{
		__LIB_11__::func_272(iParam0, 4);
	}
	else
	{
		__LIB_1__::func_943(iParam0, 33554432);
	}
	INVENTORY::_0x9B4E793B1CB6550A();
	__LIB_1__::func_922(iParam0);
}

int func_158(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bVar0 = true;
	iVar1 = __LIB_14__::func_820(0);
	iVar2 = __LIB_15__::func_316(iVar1, &(uParam0->f_2031));
	iVar3 = __LIB_15__::func_33(uParam0);
	if (__LIB_14__::func_951(iVar3, iVar2, 4))
	{
		iVar4 = 0;
		if (__LIB_16__::func_112(uParam0, iVar3, iVar2, &iVar4))
		{
			iVar5 = __LIB_16__::func_57(uParam0, iVar4);
			if ((((iVar5 == -853534656 || iVar5 == 761079318) || iVar5 == 1942587409) || iVar5 == 2077448405) || iVar5 == -2056428614)
			{
				__LIB_15__::func_919(uParam0, iVar4);
				bVar0 = false;
			}
			else if (iVar5 == 1394581936)
			{
				__LIB_16__::func_58(uParam0, iVar4);
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		__LIB_15__::func_494(uParam0, 1);
		__LIB_15__::func_389(uParam0);
	}
	bVar6 = __LIB_15__::func_391(0);
	__LIB_15__::func_897(uParam0, 1, joaat("IB_SELECT"), bVar6, 1, 0);
	return 1;
}

int func_159(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_14__::func_694(0);
	if (!__LIB_16__::func_134(uParam0, iVar0))
	{
	}
	bVar1 = true;
	if (__LIB_15__::func_226(2))
	{
		iVar2 = __LIB_14__::func_908(0);
		__LIB_14__::func_904(uParam0->f_2, &iVar3);
		if (!__LIB_14__::func_940(iVar0, iVar3))
		{
			__LIB_14__::func_884(uParam0, 0);
			bVar1 = false;
		}
		else if (__LIB_16__::func_104(uParam0, iVar0) || __LIB_15__::func_40(0) != -349391286)
		{
			__LIB_14__::func_884(uParam0, 1);
			if (((!__LIB_0__::func_144(iVar2, 0) || iVar2 == iVar0) || !__LIB_16__::func_104(uParam0, iVar2)) || __LIB_15__::func_390(0) == -349391286)
			{
				__LIB_14__::func_885(uParam0, 1);
				__LIB_14__::func_886(uParam0, 0);
			}
		}
		else
		{
			__LIB_14__::func_884(uParam0, 1);
			if (((!__LIB_0__::func_144(iVar2, 0) || iVar2 == iVar0) || __LIB_16__::func_104(uParam0, iVar2)) || __LIB_15__::func_390(0) != -349391286)
			{
				__LIB_14__::func_885(uParam0, 0);
				__LIB_14__::func_886(uParam0, 1);
			}
		}
	}
	if (__LIB_14__::func_452(iVar0) == 0)
	{
		if (__LIB_0__::func_356(iVar0) == joaat("CLOTHING"))
		{
			if (__LIB_0__::func_357(iVar0) == -999503751 && __LIB_15__::func_686(iVar0) == -1)
			{
				bVar1 = false;
			}
			else if (__LIB_14__::func_858(iVar0) == -1)
			{
				bVar1 = false;
			}
		}
		else
		{
			bVar1 = false;
		}
	}
	if (bVar1)
	{
		if (__LIB_14__::func_982(uParam0))
		{
			__LIB_15__::func_897(uParam0, 4, joaat("SHOP_INFO"), 1, 1, 0);
		}
		else
		{
			__LIB_15__::func_897(uParam0, 4, -1977485644 /* GXTEntry: "Recipe" */, 1, 1, 0);
		}
	}
	else
	{
		__LIB_14__::func_885(uParam0, 0);
		__LIB_14__::func_886(uParam0, 1);
	}
	return 1;
}

void func_160(int iParam0, int iParam1)
{
	int iVar0;
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
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	if (__LIB_12__::func_515(iParam1))
	{
		__LIB_16__::func_130(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_516(iParam1))
	{
		__LIB_15__::func_909(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_517(iParam1))
	{
		__LIB_15__::func_910(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_518(iParam1))
	{
		__LIB_15__::func_911(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_519(iParam1))
	{
		__LIB_16__::func_131(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_520(iParam1))
	{
		__LIB_15__::func_912(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_521(iParam1))
	{
		iVar0 = __LIB_12__::func_522();
		__LIB_16__::func_132(iParam0, iParam1, iVar0);
		return;
	}
}

int func_161(var uParam0, var uParam1)
{
	int iVar0;
	if (uParam1->f_10 == 1)
	{
		__LIB_16__::func_135(uParam0);
		if (__LIB_0__::func_357(uParam1->f_7) == -2061583405 || __LIB_0__::func_357(uParam1->f_7) == -525676072)
		{
			__LIB_0__::func_945();
		}
		iVar0 = __LIB_14__::func_738(uParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return 0;
		}
		__LIB_1__::func_467(1, 1, 0);
		__LIB_16__::func_22(joaat("CLOTHING_CUSTOM_ONE_OUTFIT"));
		__LIB_14__::func_711(iVar0, 1);
		__LIB_0__::func_660(iVar0);
	}
	return 1;
}

int func_162(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		__LIB_16__::func_135(uParam0);
		__LIB_1__::func_467(1, 1, 0);
		__LIB_16__::func_22(joaat("CLOTHING_CUSTOM_ONE_OUTFIT"));
	}
	return 1;
}

int func_163(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	__LIB_16__::func_135(uParam0);
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
	if (__LIB_0__::func_156(32768))
	{
		__LIB_0__::func_945();
	}
	__LIB_1__::func_443(-1, 0, 1, 1, 1, 0);
	iVar1 = __LIB_14__::func_738(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	__LIB_14__::func_711(iVar1, 1);
	__LIB_0__::func_660(iVar1);
	__LIB_16__::func_22(iParam1);
	return 1;
}

void func_164(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_16__::func_146(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_16__::func_146(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_16__::func_146(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_16__::func_146(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_16__::func_146(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_16__::func_146(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_16__::func_146(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_16__::func_146(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_16__::func_146(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_16__::func_146(-1, iParam0);
	}
}

void func_165(var uParam0)
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_21))
	{
		uParam0->f_21 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_21, uParam0->f_8, 0.101f, 1.358f, 0.5381f, true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_21, uParam0->f_8, 0.2912f, -1.6309f, 0.3644f, true);
	CAM::SET_CAM_FOV(uParam0->f_21, 37f);
	CAM::_0x1FC6C727D30FFDDE(uParam0->f_21);
}

void func_166(var uParam0, float fParam1)
{
	CAM::_0x1FC6C727D30FFDDE(uParam0);
	CAM::_0x11F32BB61B756732(uParam0, fParam1);
}

void func_167(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemInfo1");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "RawText", sParam1);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "Style", -548373963);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "Style", 432931142);
	}
}

char* func_168(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_REINFORCED_BANDOLIER_GATOR"):
			return "PROVISION_REINFORCED_BANDOLIER_GATOR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_HOLSTER_GATOR"):
			return "PROVISION_REINFORCED_HOLSTER_GATOR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_OFFHAND_GATOR"):
			return "PROVISION_REINFORCED_OFFHAND_GATOR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_GUNBELT_GATOR"):
			return "PROVISION_REINFORCED_GUNBELT_GATOR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_HOLSTER_BEAR"):
			return "PROVISION_REINFORCED_HOLSTER_BEAR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_BANDOLIER_BEAR"):
			return "PROVISION_REINFORCED_BANDOLIER_BEAR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_GUNBELT_BEAR"):
			return "PROVISION_REINFORCED_GUNBELT_BEAR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_OFFHAND_BEAR"):
			return "PROVISION_REINFORCED_OFFHAND_BEAR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_HOLSTER_BOAR"):
			return "PROVISION_REINFORCED_HOLSTER_BOAR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_BANDOLIER_BOAR"):
			return "PROVISION_REINFORCED_BANDOLIER_BOAR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_GUNBELT_BOAR"):
			return "PROVISION_REINFORCED_GUNBELT_BOAR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_OFFHAND_BOAR"):
			return "PROVISION_REINFORCED_OFFHAND_BOAR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO"):
			return "PROVISION_REINFORCED_OFFHAND_BUFFALO_CHALLENGE";
		case joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO"):
			return "PROVISION_REINFORCED_GUNBELT_BUFFALO_CHALLENGE";
		case joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO"):
			return "PROVISION_REINFORCED_HOLSTER_BUFFALO_CHALLENGE";
		case joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO"):
			return "PROVISION_REINFORCED_BANDOLIER_BUFFALO_CHALLENGE";
		case joaat("PROVISION_REINFORCED_GUNBELT_DEER"):
			return "PROVISION_REINFORCED_GUNBELT_DEER_CHALLENGE";
		case joaat("PROVISION_REINFORCED_HOLSTER_DEER"):
			return "PROVISION_REINFORCED_HOLSTER_DEER_CHALLENGE";
		case joaat("PROVISION_REINFORCED_BANDOLIER_DEER"):
			return "PROVISION_REINFORCED_BANDOLIER_DEER_CHALLENGE";
		case joaat("PROVISION_REINFORCED_OFFHAND_DEER"):
			return "PROVISION_REINFORCED_OFFHAND_DEER_CHALLENGE";
		case joaat("PROVISION_REINFORCED_OFFHAND_COUGAR"):
			return "PROVISION_REINFORCED_OFFHAND_COUGAR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR"):
			return "PROVISION_REINFORCED_BANDOLIER_COUGAR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_GUNBELT_COUGAR"):
			return "PROVISION_REINFORCED_GUNBELT_COUGAR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_HOLSTER_COUGAR"):
			return "PROVISION_REINFORCED_HOLSTER_COUGAR_CHALLENGE";
		case joaat("PROVISION_REINFORCED_GUNBELT_RABBIT"):
			return "PROVISION_REINFORCED_GUNBELT_RABBIT_CHALLENGE";
		case joaat("PROVISION_REINFORCED_OFFHAND_RABBIT"):
			return "PROVISION_REINFORCED_OFFHAND_RABBIT_CHALLENGE";
		case joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT"):
			return "PROVISION_REINFORCED_BANDOLIER_RABBIT_CHALLENGE";
		case joaat("PROVISION_REINFORCED_HOLSTER_RABBIT"):
			return "PROVISION_REINFORCED_HOLSTER_RABBIT_CHALLENGE";
		case joaat("PROVISION_REINFORCED_HOLSTER_SNAKE"):
			return "PROVISION_REINFORCED_HOLSTER_SNAKE_CHALLENGE";
		case joaat("PROVISION_REINFORCED_GUNBELT_SNAKE"):
			return "PROVISION_REINFORCED_GUNBELT_SNAKE_CHALLENGE";
		case joaat("PROVISION_REINFORCED_OFFHAND_SNAKE"):
			return "PROVISION_REINFORCED_OFFHAND_SNAKE_CHALLENGE";
		case joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE"):
			return "PROVISION_REINFORCED_BANDOLIER_SNAKE_CHALLENGE";
		case joaat("PROVISION_REINFORCED_HOLSTER_PANTHER"):
			return "PROVISION_REINFORCED_HOLSTER_PANTHER_CHALLENGE";
		case joaat("PROVISION_REINFORCED_GUNBELT_PANTHER"):
			return "PROVISION_REINFORCED_GUNBELT_PANTHER_CHALLENGE";
		case joaat("PROVISION_REINFORCED_OFFHAND_PANTHER"):
			return "PROVISION_REINFORCED_OFFHAND_PANTHER_CHALLENGE";
		case joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER"):
			return "PROVISION_REINFORCED_BANDOLIER_PANTHER_CHALLENGE";
	}
	return "";
}

char* func_169(int iParam0)
{
	switch (iParam0)
	{
		case 48:
			return "BUY_BULK_QUALITY";
		case 49:
			return "BUY_BULK_AVERAGE";
		case 50:
			return "BUY_BULK_POOR";
		case 51:
			return "BUY_QUALITY_PELT";
		case 56:
			return "BUY_COMMON_ITEM";
		case 52:
			return "BUY_NICE_KILL";
		case 53:
			return "BUY_MESSY_KILL";
		case 54:
			return "BUY_FRESH_MEAT";
		case 62:
			return "SALES_PITCH_PORK";
		case 63:
			return "SALES_PITCH_BEEF";
		case 64:
			return "SALES_PITCH_VENISON";
		case 65:
			return "SALES_PITCH_BISON";
		case 2:
			return "GREET_PLAYER_MASK";
		case 0:
			return "GREET_POINT_OUT_CARCASS";
		case 1:
			return "GREET_POINT_OUT_PELT";
		case 3:
			return "GREET_POINT_OUT_LEGENDARY_ANIMAL";
		case 4:
			return "GREET_POINT_OUT_LEGENDARY_BEAR";
		case 5:
			return "GREET_POINT_OUT_LEGENDARY_ALLIGTAOR";
		case 6:
			return "GREET_POINT_OUT_LEGENDARY_WHITE_BUFFALO";
		case 7:
			return "GREET_POINT_OUT_LEGENDARY_BOAR";
		case 8:
			return "GREET_POINT_OUT_LEGENDARY_BUCK";
		case 9:
			return "GREET_POINT_OUT_LEGENDARY_FOX";
		case 10:
			return "GREET_POINT_OUT_LEGENDARY_ELK";
		case 11:
			return "GREET_POINT_OUT_LEGENDARY_PRONGHORN";
		case 12:
			return "GREET_POINT_OUT_LEGENDARY_COUGAR";
		case 13:
			return "GREET_POINT_OUT_LEGENDARY_MOOSE";
		case 14:
			return "GREET_POINT_OUT_LEGENDARY_PANTHER";
		case 15:
			return "GREET_POINT_OUT_LEGENDARY_WOLF";
		case 16:
			return "GREET_POINT_OUT_LEGENDARY_BIG_HORN_RAM";
		case 17:
			return "GREET_POINT_OUT_LEGENDARY_TATANKA_BUFFALO";
		case 18:
			return "GREET_POINT_OUT_LEGENDARY_BEAVER";
		case 19:
			return "GREET_POINT_OUT_LEGENDARY_COYOTE";
		case 28:
			return "CHAT_LEGENDARY_ANIMALS";
		case 29:
			return "CHAT_REMIND_LEGENDARY_ANIMALS";
		case 30:
			return "CHAT_LEGENDARY_ANIMAL_HINTS";
		case 31:
			return "CHAT_LEGENDARY_BEAR_HINT";
		case 32:
			return "CHAT_LEGENDARY_GATOR_HINT";
		case 33:
			return "CHAT_LEGENDARY_WHITE_BUFFALO_HINT";
		case 34:
			return "CHAT_LEGENDARY_BOAR_HINT";
		case 35:
			return "CHAT_LEGENDARY_BUCK_HINT";
		case 36:
			return "CHAT_LEGENDARY_FOX_HINT";
		case 37:
			return "CHAT_LEGENDARY_ELK_HINT";
		case 38:
			return "CHAT_LEGENDARY_PRONGHORN_HINT";
		case 39:
			return "CHAT_LEGENDARY_COUGAR_HINT";
		case 40:
			return "CHAT_LEGENDARY_MOOSE_HINT";
		case 41:
			return "CHAT_LEGENDARY_PANTHER_HINT";
		case 42:
			return "CHAT_LEGENDARY_WOLF_HINT";
		case 43:
			return "CHAT_LEGENDARY_RAM_HINT";
		case 44:
			return "CHAT_LEGENDARY_TATANKA_HINT";
		case 45:
			return "CHAT_LEGENDARY_BEAVER_HINT";
		case 46:
			return "CHAT_LEGENDARY_COYOTE_HINT";
		case 47:
			return "CHAT_EXLUSIVITY_REMINDER";
		case 57:
			return "REQUEST_CRAFT_ITEM";
		case 58:
			return "SELECT_CRAFT";
		case 59:
			return "HAND_OVER_CRAFT_ITEM";
		case 60:
			return "MISSING_ITEMS_FOR_CRAFT";
		case 61:
			return "MISSING_ITEMS_GUNSMITH";
		case 20:
			return "HOW_IS_ITEM_MEAT";
		case 21:
			return "PLAYER_LOITERING_WITH_KILL";
		case 25:
			return "PLAYER_LOITERING_BUTCHER";
		case 22:
			return "DROP_KILL_INTO_BUSINESS";
		case 23:
			return "DROP_KILL_INTO_BUSINESS_WALK_OUT";
		case 24:
			return "FAREWELL_MOVE_AROUND";
		case 26:
			return "CHAT_SHOPKEEPER_HUNT";
		case 27:
			return "CHAT_SHOPKEEPER_HUNT_POOR";
		case 66:
			return "SELL_ITEM_CLOTHING";
		case 67:
			return "SELL_ITEM_CLOTHING_ACCESSORY";
		case 68:
			return "SELL_ITEM_TOMAHAWK";
		case 69:
			return "SELL_ITEM_HUNTING_KIT_ITEMS";
		case 70:
			return "SELL_ITEM_SADDLE_DELIVERY_OPTION";
		case 71:
			return "SELL_ITEM_SADDLE_DELIVERY";
		case 72:
			return "SELL_ITEM_EQUIP_SADDLE";
		case 73:
			return "SELL_ITEM_HUNTING_EQUIPMENT";
		case 74:
			return "UPGRADE_EQUIPMENT";
		case 75:
			return "EQUIPMENT_SET";
		case 76:
			return "BUY_LEGENDARY_ANIMAL";
		case 77:
			return "RETURN_ANIMAL_PARTS";
		case 78:
			return "SALES_PITCH_CRAFTING";
		case 79:
			return "SALES_PITCH_CRAFTING_MATERIALS_AVAILABLE";
		case 80:
			return "SALES_PITCH_CLOTHING_MENU";
		case 81:
			return "SALES_PITCH_CLOTHING_PLAYER";
		case 82:
			return "SALES_PITCH_EQUIPMENT";
		case 83:
			return "SALES_PITCH_BROWSING_LUXURY_GOODS";
		case 84:
			return "SALES_PITCH_LUXURY";
		case 85:
			return "SALES_PITCH_GARMENT";
		case 86:
			return "SALES_PITCH_QUALITY_GARMENT";
		case 87:
			return "SALES_PITCH_UNLOCKED_GARMENT_SET";
		case 88:
			return "SALES_PITCH_BOOTS";
		case 89:
			return "SALES_PITCH_HAT";
		case 90:
			return "SALES_PITCH_CHAPS";
		case 91:
			return "SALES_PITCH_WOOLIES";
		case 92:
			return "SALES_PITCH_VEST";
		case 93:
			return "SALES_PITCH_COAT";
		case 94:
			return "SALES_PITCH_COOL_WEATHER_CLOTHING";
		case 95:
			return "SALES_PITCH_SADDLES";
		case 96:
			return "SALES_PITCH_WEAPON";
		case 97:
			return "SALES_PITCH_SHIRT";
		case 98:
			return "SALES_PITCH_PANTS";
		case 99:
			return "SALES_PITCH_SKIRT";
		case 100:
			return "SALES_PITCH_GLOVES";
		case 101:
			return "SALES_PITCH_SPATS";
		case 102:
			return "SALES_PITCH_UPGRADE";
		case 103:
			return "SALES_PITCH_LATEST_ARRIVALS";
		case 104:
			return "PUSH_SALE";
		case 105:
			return "PUSH_SALE_CLOTHES";
		case 106:
			return "TRY_IT_ON";
		case 107:
			return "BUY_LEGENDARY_ANIMALLOOKING_GOOD";
		case 108:
			return "PLAYER_SELL_TO_BUTCHER";
		case 109:
			return "PLAYER_PURCHASE_FROM_BUTCHER";
		case 110:
			return "PLAYER_SELL_TO_TRAPPER";
		case 111:
			return "PLAYER_PURCHASE_FROM_TRAPPER";
		case 112:
			return "PLAYER_PURCHASE_SADDLE";
		case 113:
			return "REFUSE_OFFER";
		default:
			break;
	}
	return "";
}

void func_170(int iParam0)
{
	if (Local_26.f_29 != iParam0)
	{
		Local_26.f_29 = iParam0;
	}
}

void func_171()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_5))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_5);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_6))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_6);
	}
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	iLocal_4 = 0;
}

void func_172(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_21))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_21, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_21, false);
	}
}

bool func_173(var uParam0)
{
	if (uParam0->f_1 == 72 || uParam0->f_1 == 92)
	{
		return true;
	}
	return false;
}

void func_174(var uParam0, int iParam1, vector3 vParam2, float fParam5, vector3 vParam6, float fParam9, vector3 vParam10)
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = { vParam2 };
	uParam0->f_12 = fParam5;
	uParam0->f_13 = { vParam10 };
	uParam0->f_16 = { vParam6 };
	uParam0->f_19 = fParam9;
	uParam0->f_4 = 0;
}

bool func_175(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 18:
			return true;
		default:
			break;
	}
	return false;
}

char* func_176(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "lightrig@shops@butcher_generic";
		case 18:
			return "lightrig@shops@trapper_generic";
		default:
			break;
	}
	return "";
}

int func_177(vector3 vParam0, bool bParam3)
{
	int iVar0;
	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam0, 0f, 0f, 0f, bParam3, bParam3, bParam3);
	return iVar0;
}

int func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			__LIB_2__::func_998(iVar1, &uVar3, &uVar4, &iVar2, &uVar5);
			if (__LIB_2__::func_999(&iVar0, iVar1, iVar2, uVar3))
			{
			}
		}
	}
	return iVar0;
}

int func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = __LIB_15__::func_583(iVar1);
		}
	}
	return iVar0;
}

int func_180(int iParam0)
{
	struct<2> Var0;
	int iVar7;
	int iVar8;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		iVar8 = 0;
		return iVar8;
	}
	if (Var0.f_1 == -999503751)
	{
		iVar8 = __LIB_16__::func_150(1, 6);
		return iVar8;
	}
	iVar7 = __LIB_0__::func_997(Var0.f_1);
	switch (iVar7)
	{
		case -1944638739:
			iVar8 = 15;
			return iVar8;
		case 1900541263:
			iVar8 = 15;
			return iVar8;
		case 1145151482:
			iVar8 = __LIB_16__::func_150(7, 8);
			return iVar8;
		case 1108822547:
			iVar8 = 14;
			return iVar8;
		case -1197751823:
			iVar8 = __LIB_16__::func_150(11, 13);
			return iVar8;
		case 788010710:
			iVar8 = __LIB_16__::func_150(9, 10);
			return iVar8;
		case 1958421083:
			iVar8 = __LIB_16__::func_150(9, 10);
			return iVar8;
		default:
			break;
	}
	iVar8 = __LIB_16__::func_150(1, 6);
	return iVar8;
	iVar8 = 0;
	return iVar8;
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;
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
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	if (__LIB_12__::func_515(iParam1))
	{
		__LIB_16__::func_118(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_516(iParam1))
	{
		__LIB_16__::func_48(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_517(iParam1))
	{
		__LIB_16__::func_49(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_518(iParam1))
	{
		__LIB_16__::func_50(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_519(iParam1))
	{
		__LIB_16__::func_119(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_520(iParam1))
	{
		__LIB_16__::func_66(iParam0, iParam1);
		return;
	}
	if (__LIB_12__::func_521(iParam1))
	{
		iVar0 = __LIB_12__::func_522();
		__LIB_16__::func_120(iParam0, iParam1, iVar0);
		return;
	}
}

int func_182(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		return __LIB_16__::func_163(uParam0, uParam1->f_7);
	}
	return 1;
}

char* func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BayouNwa_population";
		case 1:
			return "BigValley_population";
		case 2:
			return "BluegillMarsh_population";
		case 3:
			return "CumberlandForest_population";
		case 4:
			return "GreatPlains_population";
		case 5:
			return "Grizzlies_population";
		case 6:
			return "GrizzliesEast_population";
		case 7:
			return "GrizzliesWest_population";
		case 8:
			return "Guama_population";
		case 9:
			return "Heartland_population";
		case 10:
			return "RoanokeRidge_population";
		case 11:
			return "ScarlettMeadows_population";
		case 12:
			return "TallTrees_population";
		case 15:
			return "ChollaSprings_population";
		case 13:
			return "GaptoothRidge_population";
		case 16:
			return "HennigansStead_population";
		case 14:
			return "RioBravo_population";
		default:
			break;
	}
	return "No District script?";
}

void func_184(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1898068)
		{
			Global_1898068 = bParam0;
		}
	}
	else if (Global_1898068)
	{
		Global_1898068 = bParam0;
	}
}

bool func_185()
{
	return UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY"));
}

void func_186(var uParam0)
{
	if (uParam0->f_3 != -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1933981, uParam0->f_3);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1933981.f_1, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1933981.f_2, true);
	}
	if (uParam0->f_4 != -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1933981.f_3, uParam0->f_4);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1933981.f_4, 3);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1933981.f_5, false);
	}
	if (uParam0->f_5 != -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1933981.f_6, uParam0->f_5);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1933981.f_7, 3);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1933981.f_8, false);
	}
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 18;
		case 2:
			return 11;
		case 3:
			return 24;
		case 4:
			return 29;
		case 5:
			return 31;
		case 10:
			return 43;
		default:
			break;
	}
	return 34;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 23;
		case 2:
			return 17;
		case 3:
			return 28;
		case 4:
			return 30;
		case 5:
			return 33;
		case 10:
			return 43;
		default:
			break;
	}
	return 42;
}

int func_189()
{
	return Global_1327590.f_3;
}

void func_190(int iParam0)
{
	Global_1327590.f_3 = iParam0;
}

void func_191()
{
	Global_1347477.f_201 = 1;
}

void func_192(int iParam0, int iParam1)
{
	Global_1897952[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] - (Global_1897952[iParam0 /*2*/] && iParam1));
}

void func_193(int iParam0)
{
	Global_1897952.f_41 = iParam0;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("BAYOUNWA");
		case 1:
			return joaat("BIGVALLEY");
		case 2:
			return joaat("BLUEWATERMARSH");
		case 3:
			return joaat("CUMBERLAND");
		case 4:
			return joaat("GREATPLAINS");
		case 6:
			return joaat("GRIZZLIESEAST");
		case 7:
			return joaat("GRIZZLIESWEST");
		case 8:
			return joaat("GUARMAD");
		case 9:
			return joaat("HEARTLANDS");
		case 10:
			return joaat("ROANOKE");
		case 11:
			return joaat("SCARLETTMEADOWS");
		case 12:
			return joaat("TALLTREES");
		case 13:
			return joaat("GAPTOOTHRIDGE");
		case 14:
			return joaat("RIOBRAVO");
		case 15:
			return joaat("CHOLLASPRINGS");
		case 16:
			return joaat("HENNIGANSSTEAD");
		default:
			break;
	}
	return -1;
}

bool func_195(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_2() != -1;
	if (bVar0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 9:
			*uParam1 = 868;
			*uParam2 = 874;
			break;
		case 16:
			*uParam1 = 893;
			*uParam2 = 900;
			break;
		case 1:
			*uParam1 = 883;
			*uParam2 = 885;
			break;
		case 3:
			*uParam1 = 858;
			*uParam2 = 860;
			break;
		case 15:
			*uParam1 = 889;
			*uParam2 = 892;
			break;
		case 13:
			*uParam1 = 886;
			*uParam2 = 887;
			break;
		case 10:
			*uParam1 = 904;
			*uParam2 = 906;
			break;
		case 11:
			*uParam1 = 908;
			*uParam2 = 923;
			break;
		case 0:
			*uParam1 = 928;
			*uParam2 = 931;
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_196(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_2() != -1;
	if (bVar0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 4:
			*uParam1 = 877;
			*uParam2 = 878;
			break;
		case 5:
		case 6:
		case 7:
			*uParam1 = 861;
			*uParam2 = 865;
			break;
		case 9:
			*uParam1 = 866;
			*uParam2 = 867;
			break;
		case 1:
			*uParam1 = 879;
			*uParam2 = 882;
			break;
		case 15:
			*uParam1 = 888;
			*uParam2 = 888;
			break;
		case 10:
			*uParam1 = 902;
			*uParam2 = 903;
			break;
		case 11:
			*uParam1 = 907;
			*uParam2 = 907;
			break;
		case 12:
			*uParam1 = 924;
			*uParam2 = 926;
			break;
		case 0:
			*uParam1 = 927;
			*uParam2 = 927;
			break;
		case 14:
			*uParam1 = 901;
			*uParam2 = 901;
			break;
		case 13:
			*uParam1 = 875;
			*uParam2 = 876;
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_197(int iParam0)
{
	return Global_1934182[iParam0 /*18*/];
}

bool func_198(int iParam0)
{
	if (iParam0 == 1)
	{
		return false;
	}
	return true;
}

bool func_199(int iParam0)
{
	if (Global_1879534)
	{
		return true;
	}
	if (Global_1879534.f_1)
	{
		return true;
	}
	return false;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2061320468;
		case 2:
			return -709866131;
		case 3:
			return -1348173149;
		default:
			break;
	}
	return -589165916;
}

void func_201(int iParam0)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return;
	}
	Global_1934266.f_4 = iParam0;
}

void func_202(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return;
	}
	Global_1934266.f_27[iParam0] = iParam1;
}

int func_203(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return -15;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/].f_2;
	}
	return Global_1058888.f_40615[iParam0 /*11*/].f_2;
}

void func_204()
{
	int iVar0;
	struct<17> Var1;
	if (Global_1935630.f_18)
	{
		LAW::_0x9C5BD8C562565CE6(&Var1);
		if (Var1.f_16 || Var1.f_15)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if ((LAW::_0x89E005B1662F6E48(PLAYER::PLAYER_ID(), 1, 0) || LAW::_0x3738B784DDD35CC6(PLAYER::PLAYER_ID(), 1, 0)) || Global_1934266.f_78.f_62 > -1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	if (Global_1934266.f_78.f_63 > 0)
	{
		iVar0 = Global_1934266.f_78.f_63;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1934266.f_78.f_1.f_3, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1934266.f_78.f_19.f_3, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1934266.f_78.f_37.f_3, iVar0);
}

bool func_205()
{
	return __LIB_0__::func_27(Global_40.f_12019.f_42, 1);
}

bool func_206(int iParam0)
{
	return (Global_1935496.f_29 && iParam0) != 0;
}

bool func_207(char* sParam0, int iParam1)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return false;
	}
	SCRIPTS::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return true;
}

void func_208()
{
	Global_1911774 = 0;
}

void func_209()
{
	Global_1347477.f_139 = 0;
	Global_1347477.f_140 = 0;
}

bool func_210(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("A_C_BEAR_01"):
			*iParam1 = 0;
			return true;
		case joaat("A_C_BEAVER_01"):
			*iParam1 = 1;
			return true;
		case joaat("A_C_BIGHORNRAM_01"):
			*iParam1 = 2;
			return true;
		case joaat("A_C_BUFFALO_01"):
			*iParam1 = 3;
			return true;
		case joaat("A_C_BOAR_01"):
			*iParam1 = 4;
			return true;
		case joaat("A_C_BUCK_01"):
			*iParam1 = 5;
			return true;
		case joaat("A_C_BUFFALO_TATANKA_01"):
			*iParam1 = 6;
			return true;
		case joaat("A_C_ALLIGATOR_02"):
			*iParam1 = 7;
			return true;
		case joaat("A_C_COUGAR_01"):
			*iParam1 = 8;
			return true;
		case joaat("A_C_COYOTE_01"):
			*iParam1 = 9;
			return true;
		case joaat("A_C_ELK_01"):
			*iParam1 = 10;
			return true;
		case joaat("A_C_FOX_01"):
			*iParam1 = 11;
			return true;
		case joaat("A_C_MOOSE_01"):
			*iParam1 = 12;
			return true;
		case joaat("A_C_PANTHER_01"):
			*iParam1 = 13;
			return true;
		case joaat("A_C_PRONGHORN_01"):
			*iParam1 = 14;
			return true;
		case joaat("A_C_WOLF"):
			*iParam1 = 15;
			return true;
	}
	return false;
}

bool func_211(var uParam0, int iParam1)
{
	return (uParam0->f_69 && iParam1) != 0;
}

void func_212(var uParam0, int iParam1)
{
	uParam0->f_69 = (uParam0->f_69 || iParam1);
}

bool func_213(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 10:
		case 12:
		case 13:
		case 14:
		case 17:
		case 18:
		case 19:
		case 22:
			return true;
		default:
			break;
	}
	return false;
}

int func_214(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return joaat("SHOP_GUARD_DOG");
	}
	switch (__LIB_9__::func_843(iParam0))
	{
		case 78:
			return joaat("SHOP_PEDS_ANNESBURG");
		case 38:
			return joaat("SHOP_PEDS_BLACKWATER");
		case 69:
			return joaat("SHOP_PEDS_EMERALDRANCH");
		case 3:
			return joaat("SHOP_PEDS_LAGRAS");
		case 5:
			return joaat("SHOP_PEDS_STDENIS");
		case 105:
			return joaat("SHOP_PEDS_RHODES");
		case 23:
			return joaat("SHOP_PEDS_RIGGSSTATION");
		case 26:
			return joaat("SHOP_PEDS_STRAWBERRY");
		case 76:
			return joaat("SHOP_PEDS_VALENTINE");
		case 92:
			return joaat("SHOP_PEDS_VANHORN");
		case 28:
			return joaat("SHOP_PEDS_WALLACESTATION");
		case 115:
			return joaat("SHOP_PEDS_TUMBLEWEED");
		case 13:
		case 14:
		case 90:
		case 113:
		case 128:
			return joaat("SHOP_PEDS_TRAPPERS");
		default:
			break;
	}
	return joaat("SHOP_GUARD_DOG");
	return joaat("SHOP_GUARD_DOG");
}

void func_215(int iParam0, int iParam1)
{
	if (__LIB_14__::func_605(iParam0, iParam1))
	{
		return;
	}
	Global_1393521.f_3[iParam0] = (Global_1393521.f_3[iParam0] || iParam1);
}

void func_216(int iParam0, int iParam1)
{
	if (!__LIB_14__::func_605(iParam0, iParam1))
	{
		return;
	}
	Global_1393521.f_3[iParam0] = (Global_1393521.f_3[iParam0] - (Global_1393521.f_3[iParam0] && iParam1));
}

bool func_217(int iParam0)
{
	switch (iParam0)
	{
		case 61:
		case 73:
			return true;
		default:
			break;
	}
	return false;
}

bool func_218(int iParam0)
{
	return __LIB_0__::func_27(Global_1310750.f_16109, iParam0);
}

bool func_219(var uParam0, int iParam1)
{
	return (uParam0->f_29 && iParam1) != 0;
}

bool func_220(int iParam0)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0 /*12*/].f_3 > Global_40.f_9096[iParam0 /*12*/].f_2;
}

void func_221(int iParam0)
{
	Global_1898092 = iParam0;
}

void func_222(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2 || __LIB_7__::func_897(iParam1))
	{
		uParam0->f_1 = 0;
		uParam0->f_3 = 0f;
		uParam0->f_2 = 0f;
		uParam0->f_5 = 0f;
		uParam0->f_4 = 0;
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, false);
			GRAPHICS::REMOVE_PARTICLE_FX(*uParam0, false);
			STREAMING::REMOVE_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
		}
		*uParam0 = 0;
		__LIB_7__::func_896(iParam1);
	}
}

void func_223(var uParam0)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		TASK::_DELETE_SCENARIO_POINT(*uParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_1));
	}
}

void func_224(int iParam0)
{
	Global_1327590.f_6 = 0;
	Global_1327590.f_7 = iParam0;
}

int func_225()
{
	return (Global_1327590.f_6 * Global_1327590.f_7);
}

void func_226()
{
	Global_1327590.f_6++;
}

void func_227()
{
	struct<2> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(&(Global_1327590.f_19615), &Var0, 6);
}

void func_228(int iParam0)
{
	Global_1327590.f_4 = iParam0;
}

void func_229(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	__LIB_0__::func_8(&(Global_1393237.f_11[iParam0 /*30*/].f_10), iParam1);
}

int func_230()
{
	return Global_1425247.f_58;
}

bool func_231()
{
	return PLAYER::_0x811A748B1BE231BA(PLAYER::PLAYER_ID()) < PLAYER::_0xBEFED69CE8317F91(PLAYER::PLAYER_ID());
}

var func_232(int iParam0)
{
	return Global_1425247.f_50[iParam0];
}

Vector3 func_233(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 1264.245f, -1301.033f, 75.027f;
		case 76:
			return -187.675f, 646.971f, 112.512f;
		case 69:
			return 1521.27f, 413.91f, 89.064f;
		case 78:
			return 2928.835f, 1295.411f, 43.346f;
		case 26:
			return -1850.81f, -436.986f, 158.493f;
		case 5:
			return 2743.008f, -1406.18f, 45.371f;
		case 38:
			return -859.7903f, -1342.636f, 42.52987f;
		case 120:
			return -3708.26f, -2636.08f, -14.894f;
		case 126:
			return -2478.03f, -2444.9f, 59.345f;
		case 115:
			return -5567.82f, -2944.74f, -1.713f;
		case 92:
			return 2946.014f, 599.033f, 43.488f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_234(int iParam0)
{
	int iVar0;
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 149)
	{
		if (Global_1888801[iVar0 /*35*/].f_30 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_235(var uParam0)
{
	UIAPPS::_CLOSE_APP_BY_HASH(joaat("FAST_TRAVEL_MENU"));
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2);
	MAP::DISPLAY_RADAR(true);
	__LIB_4__::func_517(0);
	uParam0->f_6 = 0;
}

void func_236(var uParam0)
{
	int iVar0;
	uParam0->f_299 = -1;
	uParam0->f_300 = -1;
	uParam0->f_301 = -1;
	uParam0->f_302 = -1;
	uParam0->f_303 = -1;
	uParam0->f_319 = 5;
	uParam0->f_320 = -1;
	uParam0->f_321 = 0;
	uParam0->f_322 = 0;
	uParam0->f_323 = 0;
	STREAMING::_0x09FBF15D73EFC900();
	iVar0 = 0;
	while (iVar0 < 2049)
	{
		if (iVar0 != 1)
		{
			__LIB_0__::func_8(&(uParam0->f_318), iVar0);
		}
		iVar0++;
	}
}

bool func_237(var uParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	if (*uParam0 == -1)
	{
		return false;
	}
	if (iParam1 >= uParam0->f_2)
	{
		return false;
	}
	STREAMING::_0xD840C130D7AACFA5(uParam0->f_1, iParam1, &Var0);
	*uParam2 = { Var0 };
	uParam2->f_3 = Var0.f_3;
	uParam2->f_4 = Var0.f_4;
	return true;
}

int func_238(var uParam0, vector3 vParam1, var uParam4)
{
	uParam0->f_314 = { vParam1 };
	uParam0->f_304 = uParam4;
	STREAMING::_0xBE8DAA9D8D01DA6A(uParam0->f_314);
	__LIB_0__::func_7(&(uParam0->f_318), 2048);
	__LIB_0__::func_8(&(uParam0->f_318), 1024);
	return 1;
}

void func_239()
{
	LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 0);
	ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	__LIB_0__::func_7(&Global_1935630, 16384);
}

void func_240()
{
	LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 1);
	ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_0__::func_8(&Global_1935630, 16384);
}

void func_241()
{
	Global_1935436.f_18 = 0;
	Global_1935436.f_18.f_1 = 0;
	Global_1935436.f_18.f_3 = 0;
	Global_1935436.f_18.f_4 = 0;
	Global_1935436.f_18.f_7 = 0;
	Global_1935436.f_18.f_11 = 0;
}

void func_242(int iParam0)
{
	Global_1935436.f_18.f_11 = iParam0;
}

char* func_243()
{
	return "MECH_LOCO_M@CHARACTER@ARTHUR@DRUNK@UNARMED@STUMBLE@TRANSITION@DRUNK_STUMBLE_TO_WALK_LF";
}

char* func_244()
{
	return "MOVE";
}

void func_245(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	if (!bParam2)
	{
		iVar0 = WEAPON::GET_WEAPONTYPE_GROUP(iParam0);
		if (iVar0 == iParam1)
		{
			*bParam4 = 1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (iVar0 == (*iParam3)[iVar1])
				{
					*iParam5 = iVar1;
				}
				iVar1++;
			}
		}
	}
}

bool func_246(int iParam0)
{
	switch (iParam0)
	{
		case 709:
		case 710:
		case 711:
		case 713:
			if (((SCRIPTS::_DOES_THREAD_EXIST(Global_1835011[64 /*74*/].f_7) || SCRIPTS::_DOES_THREAD_EXIST(Global_1835011[67 /*74*/].f_7)) || SCRIPTS::_DOES_THREAD_EXIST(Global_1835011[65 /*74*/].f_7)) || SCRIPTS::_DOES_THREAD_EXIST(Global_1835011[66 /*74*/].f_7))
			{
				return true;
			}
			return false;
		default:
			break;
	}
	return true;
}

Vector3 func_247(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_6;
}

int func_248(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_2;
}

bool func_249()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	if ((((Global_1395601.f_4 & 1 != 0 || Global_1395601.f_4 & 2 != 0) || __LIB_0__::func_1(Global_1935630, 131072)) || __LIB_0__::func_13(4096)) || __LIB_0__::func_1(Global_1935630, 16384))
	{
		return true;
	}
	return false;
}

bool func_250(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (iParam1 != -1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iParam1 /*35*/].f_4))
		{
			return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1888801[iParam1 /*35*/].f_4, true, 0);
		}
		else
		{
			return false;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_1894899.f_161)
	{
		iVar0 = Global_1894899.f_10[iVar1];
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1888801[iVar0 /*35*/].f_4))
		{
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1888801[iVar0 /*35*/].f_4, true, 0))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAR_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_BEAR_01");
		case joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_BEAVER_01");
		case joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE"):
			return joaat("A_C_BIGHORNRAM_01");
		case joaat("PROVISION_WHITE_BUFFALO_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_BUFFALO_01");
		case joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE"):
			return joaat("A_C_BOAR_01");
		case joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_BUCK_01");
		case joaat("PROVISION_TAKANTA_BUFFALO_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_BUFFALO_TATANKA_01");
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_SKIN_PRISTINE"):
			return joaat("A_C_ALLIGATOR_02");
		case joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_COUGAR_01");
		case joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_COYOTE_01");
		case joaat("PROVISION_ELK_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_ELK_01");
		case joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_FOX_01");
		case joaat("PROVISION_MOOSE_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_MOOSE_01");
		case joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_PANTHER_01");
		case joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_PRONGHORN_01");
		case joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_WOLF");
		default:
			break;
	}
	return 0;
}

void func_252(int iParam0)
{
	__LIB_0__::func_37(&(Global_1900383.f_317.f_38[iParam0 /*3*/]));
}

bool func_253(int iParam0)
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_425;
}

void func_254(int iParam0, int iParam1)
{
	Global_40.f_1095.f_1[iParam0 /*436*/].f_425 = iParam1;
}

void func_255(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	__LIB_7__::func_380(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

var func_256(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar17;
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = UIFEED::_SHOW_SIMPLE_RIGHT_TEXT(&Var0, &Var13, iParam5);
	return uVar17;
}

void func_257(int iParam0, var uParam1)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return;
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_6 = *uParam1;
		Global_40.f_358[iParam0 /*12*/].f_6.f_1 = uParam1->f_1;
		Global_40.f_358[iParam0 /*12*/].f_6.f_2 = uParam1->f_2;
		Global_40.f_358[iParam0 /*12*/].f_6.f_3 = uParam1->f_3;
		Global_40.f_358[iParam0 /*12*/].f_6.f_4 = uParam1->f_4;
		Global_40.f_358[iParam0 /*12*/].f_6.f_5 = uParam1->f_5;
		return;
	}
	Global_1058888.f_42266[iParam0 /*12*/].f_6 = *uParam1;
	Global_1058888.f_42266[iParam0 /*12*/].f_6.f_1 = uParam1->f_1;
	Global_1058888.f_42266[iParam0 /*12*/].f_6.f_2 = uParam1->f_2;
	Global_1058888.f_42266[iParam0 /*12*/].f_6.f_3 = uParam1->f_3;
	Global_1058888.f_42266[iParam0 /*12*/].f_6.f_4 = uParam1->f_4;
	Global_1058888.f_42266[iParam0 /*12*/].f_6.f_5 = uParam1->f_5;
}

void func_258(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		INVENTORY::_0x6A564540FAC12211(iParam0, iParam1);
	}
	else
	{
		INVENTORY::_0x766315A564594401(iParam0, iParam1, 0);
	}
}

void func_259(int iParam0, int iParam1)
{
	if (iParam1->f_1 == 1)
	{
		INVENTORY::_0x6A564540FAC12211(iParam0, *iParam1);
	}
	else
	{
		INVENTORY::_0x766315A564594401(iParam0, *iParam1, 0);
	}
}

bool func_260(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 19)
	{
		return false;
	}
	if (Global_1935496.f_72[iParam0 /*2*/] == 0)
	{
		return false;
	}
	Global_1935496.f_72[iParam0 /*2*/] = 0;
	Global_1935496.f_72[iParam0 /*2*/].f_1 = -1;
	return true;
}

int func_261(int iParam0)
{
	if (!__LIB_12__::func_130(iParam0))
	{
		return 0;
	}
	return Global_1132155.f_12[iParam0 /*3*/].f_2;
}

void func_262(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

void func_263(int iParam0, vector3 vParam1, var uParam4)
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
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { vParam1 };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = uParam4;
}

int func_264(int iParam0)
{
	if (!__LIB_1__::func_917(iParam0))
	{
		return 0;
	}
	if ((((((((((((((((iParam0 == 0 || iParam0 == 7) || iParam0 == 17) || iParam0 == 29) || iParam0 == 28) || iParam0 == 39) || iParam0 == 42) || iParam0 == 43) || iParam0 == 47) || iParam0 == 61) || iParam0 == 73) || iParam0 == 75) || iParam0 == 74) || iParam0 == 87) || iParam0 == 95) || iParam0 == 90) || iParam0 == 91)
	{
		return 1;
	}
	return 0;
}

int func_265(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return Global_36308[iParam0];
	}
	return 0;
}

void func_266(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::SET_BLIP_SPRITE(Global_36308[iParam0], iParam1, true);
		}
	}
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AMD_GENERAL_STORE"):
			return "Armadillo/Shops/AMD_GENERAL_STORE";
		case joaat("ASB_GUNSMITH"):
			return "Annesburg/Shops/Asb_Gunsmith";
		case joaat("ASB_NEWSPAPER_VENDOR"):
			return "Annesburg/Shops/Asb_Newspaper_Vendor";
		case joaat("BLW_BARBER"):
			return "Blackwater/Shops/Blw_Barber";
		case joaat("BLW_BUTCHER"):
			return "Blackwater/Shops/Blw_Butcher";
		case joaat("BLW_GENERAL_STORE"):
			return "Blackwater/Shops/Blw_General_Store";
		case joaat("BLW_NEWSPAPER"):
			return "Blackwater/Shops/Blw_Newspaper";
		case joaat("BLW_PHOTOGRAPHER"):
			return "Blackwater/Shops/Blw_Photographer";
		case joaat("BLW_TAILOR"):
			return "Blackwater/Shops/Blw_Tailor";
		case joaat("EMR_SON1"):
			return "EmeraldRanch/Shops/Emr_Son1";
		case joaat("LAG_MOTHER1"):
			return "Lagras/Shops/Lag_Mother1";
		case joaat("RHD_BUTCHER"):
			return "Rhodes/Shops/rhd_Butcher";
		case joaat("RHD_FENCE"):
			return "Rhodes/Shops/rhd_fence";
		case joaat("RHD_GENERAL_STORE"):
			return "Rhodes/Shops/rhd_general_store";
		case joaat("RHD_GUNSMITH"):
			return "Rhodes/Shops/rhd_gunsmith";
		case joaat("RHD_NEWSPAPER_VENDOR"):
			return "Rhodes/Shops/rhd_newspaper_vendor";
		case joaat("SDN_BARBER"):
			return "SaintDenis/Shops/SDN_Barber";
		case joaat("SDN_BUTCHER"):
			return "SaintDenis/Shops/SDN_Butcher";
		case joaat("SDN_DOCTOR"):
			return "SaintDenis/Shops/SDN_Doctor";
		case joaat("SDN_GEN_STORE_SHADY"):
			return "SaintDenis/Shops/SDN_Gen_Store_Shady";
		case joaat("SDN_GEN_STORE_OWNER"):
			return "SaintDenis/Shops/SDN_Gen_Store_Owner";
		case joaat("SDN_GUNSMITH"):
			return "SaintDenis/Shops/SDN_Gunsmith";
		case joaat("SDN_HORSE_SHOP_OWNER"):
			return "SaintDenis/Shops/SDN_Horse_Shop_Owner";
		case joaat("SDN_TAILOR"):
			return "SaintDenis/Shops/SDN_Tailor";
		case joaat("SDN_MARKET_VENDOR1"):
			return "SaintDenis/Shops/SDN_Market_Vendor1";
		case joaat("SDN_FRENCHMARKET_VENDOR_1"):
			return "SaintDenis/Shops/SDN_FrenchMarket_Vendor_1";
		case joaat("SDN_FRENCHMARKET_VENDOR_2"):
			return "SaintDenis/Shops/SDN_FrenchMarket_Vendor_2";
		case joaat("SDN_NEWSPAPER_VENDOR"):
			return "SaintDenis/Shops/SDN_Newspaper_Vendor";
		case joaat("SDN_PHOTOGRAPHER"):
			return "SaintDenis/Shops/SDN_Photographer";
		case joaat("STR_BUTCHER"):
			return "Strawberry/Shops/STR_Butcher";
		case joaat("STR_GENERAL_STORE"):
			return "Strawberry/Shops/Str_General_Store";
		case joaat("STR_NEWSPAPER_VENDOR"):
			return "Strawberry/Shops/Str_Newspaper_Vendor";
		case joaat("TBL_BUTCHER"):
			return "Tumbleweed/Shops/TBL_BUTCHER";
		case joaat("TBL_GENERAL_STORE_OWNER"):
			return "Tumbleweed/Shops/TBL_GENERAL_STORE_RESIDENT";
		case joaat("TBL_GUNSMITH_OWNER"):
			return "Tumbleweed/Shops/TBL_GUNSMITH_OWNER";
		case joaat("VAL_BARBER"):
			return "Valentine/Shops/Val_Barber";
		case joaat("VAL_BUTCHER"):
			return "Valentine/Shops/Val_Butcher";
		case joaat("VAL_DOCTOR"):
			return "Valentine/Shops/Val_Doctor";
		case joaat("VAL_GENERAL_STORE"):
			return "Valentine/Shops/Val_General_Store";
		case joaat("VAL_GUNSMITH"):
			return "Valentine/Shops/Val_Gunsmith";
		case joaat("VAL_NEWSPAPER_VENDOR"):
			return "Valentine/Shops/Val_Newspaper_Vendor";
		case joaat("VHT_EXOTIC_STORE"):
			return "VanHornTradingPost/Shops/vht_exotic_store";
		case joaat("WAL_GENSHOPKEEPER"):
			return "WallaceStation/Shops/WAL_GENSHOPKEEPER";
		default:
			break;
	}
	return "";
	return "";
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 385;
		case 2:
			return 384;
		case 3:
			return 384;
		case 1:
			return 386;
		case 4:
			return 952;
		case 5:
			return 952;
		case 99:
			return 507;
		case 100:
			return 507;
		case 7:
			return 513;
		case 9:
			return 529;
		case 10:
			return 532;
		case 14:
			return 522;
		case 15:
			return 522;
		case 17:
			return 521;
		case 16:
			return 524;
		case 12:
			return 514;
		case 20:
			return 590;
		case 18:
			return 598;
		case 22:
			return 644;
		case 37:
			return 201;
		case 38:
			return 139;
		case 39:
			return 140;
		case 41:
			return 219;
		case 42:
			return 200;
		case 43:
			return 202;
		case 45:
			return 141;
		case 46:
			return 141;
		case 47:
			return 142;
		case 51:
			return 251;
		case 55:
			return 952;
		case 54:
			return 143;
		case 29:
			return 73;
		case 28:
			return 74;
		case 30:
			return 72;
		case 32:
			return 88;
		case 26:
			return 77;
		case 23:
			return 801;
		case 24:
			return 801;
		case 60:
			return 478;
		case 61:
			return 474;
		case 62:
			return 492;
		case 64:
			return 477;
		case 69:
			return 8;
		case 72:
			return 6;
		case 73:
			return 11;
		case 74:
			return 10;
		case 75:
			return 9;
		case 77:
			return 5;
		case 80:
			return 32;
		case 79:
			return 16;
		case 82:
			return 444;
		case 86:
			return 470;
		case 85:
			return 470;
		case 87:
			return 803;
		case 89:
			return 802;
		case 88:
			return 802;
		case 34:
			return 952;
		case 67:
			return 952;
		case 92:
			return 352;
		default:
			break;
	}
	return -1;
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

Vector3 func_271(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2185.991f, 666.069f, 94.008f;
		case 2:
			return 2169.619f, 793.931f, 106.968f;
		case 3:
			return 1951.033f, 934.2983f, 116.3355f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_272(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0f, 0f, 11.073f;
		case 2:
			return 0f, 0f, 1.758f;
		case 3:
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_273(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 171.745f, 270f, 150f;
		case 2:
			return 202.301f, 263.785f, 150f;
		case 3:
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_274()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1359489.f_361.f_84[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1359489.f_361.f_295))
	{
		iVar1++;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1359489.f_361.f_297))
	{
		iVar1++;
	}
	return iVar1;
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 10:
		case 11:
		case 18:
			return 541204999 /* GXTEntry: "Return to ~1~ with their request." */;
		case 5:
			return 719640430 /* GXTEntry: "Give Dutch the pipe." */;
		case 6:
			return -1918666284 /* GXTEntry: "Give Hosea the crime novel." */;
		case 8:
			return 123897536 /* GXTEntry: "Give Jack the book." */;
		case 9:
			return -2020390142 /* GXTEntry: "Give Jack the thimble." */;
		case 12:
			return -2029175088 /* GXTEntry: "Give Lenny the pocket watch." */;
		case 13:
			return -59852486 /* GXTEntry: "Give Mary-Beth the fountain pen." */;
		case 14:
			return 1490755751 /* GXTEntry: "Give Molly the pocket mirror." */;
		case 16:
			return -976438882 /* GXTEntry: "Give Pearson the naval compass." */;
		case 15:
			return -1367257557 /* GXTEntry: "Give the rabbit to Pearson at the donation table." */;
		case 17:
			return 1958136286 /* GXTEntry: "Give Sadie the harmonica." */;
		case 19:
			return -525693816 /* GXTEntry: "Give Susan the herbs." */;
		case 20:
			return 1187279835 /* GXTEntry: "Give Tilly the necklace." */;
		case 21:
			return 1403739960 /* GXTEntry: "Give Uncle the ingredients." */;
		default:
			break;
	}
	return 0;
}

bool func_276(var uParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(uParam0) && AUDIO::_0x1ECC76792F661CF5(uParam0))
	{
		return true;
	}
	return false;
}

void func_277(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	struct<15> Var0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	Var0.f_14 = __LIB_0__::func_271(iParam0);
	Var0 = uParam1;
	Var0.f_12 = iParam2;
	Var0.f_8 = 0;
	if (iParam3 != 0)
	{
		Var0.f_13 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
}

int func_278(var uParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = Global_1357549.f_576;
	if (*iParam1 != 0)
	{
		Var0.f_1 = *iParam1;
	}
	else
	{
		Var0.f_1 = Global_1357549.f_577;
	}
	Var0.f_2 = 1032438694;
	Var0.f_3 = uParam0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

char* func_279(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return "Wilderness";
	}
	switch (iParam0)
	{
		case 0:
			return "CrawdadWillies";
		case 1:
			return "MacombsEnd";
		case 2:
			return "MerkinsWaller";
		case 3:
			return "Lagras";
		case 4:
			return "Lakay";
		case 5:
			return "SaintDenis";
		case 6:
			return "OrangePlantation";
		case 7:
			return "SerialKiller";
		case 8:
			return "Serendipity";
		case 9:
			return "ShadyBelle";
		case 10:
			return "SiltwaterStrand";
		case 11:
			return "AppleseedTimberCo";
		case 12:
			return "BerylsDream";
		case 13:
			return "BigValleyTrapper";
		case 14:
			return "DakotaRiverTrapper";
		case 15:
			return "FortRiggsHoldingCamp";
		case 16:
			return "HangingDogRanch";
		case 17:
			return "LoneMuleStead";
		case 18:
			return "MissingHusband";
		case 19:
			return "MontoRest";
		case 20:
			return "OwanjilaDam";
		case 21:
			return "PaintedSky";
		case 22:
			return "PronghornRanch";
		case 23:
			return "RiggsStation";
		case 24:
			return "BigvalleyShack";
		case 25:
			return "ShepherdsRise";
		case 26:
			return "Strawberry";
		case 27:
			return "ValleyView";
		case 28:
			return "WallaceStation";
		case 29:
			return "WatsonsCabin";
		case 30:
			return "Canebreak Manor";
		case 31:
			return "Copperhead";
		case 32:
			return "SisikaPenitentiary";
		case 33:
			return "BacchuBridge";
		case 34:
			return "DinoLady";
		case 35:
			return "OldFortWallace";
		case 36:
			return "SixPointCabin";
		case 37:
			return "BeechersHope";
		case 38:
			return "Blackwater";
		case 39:
			return "QuakersCove";
		case 40:
			return "AdlerRanch";
		case 41:
			return "DeadRival";
		case 50:
			return "CalumetRavine";
		case 51:
			return "CivilWarBride";
		case 42:
			return "ChezPorter";
		case 52:
			return "Cohutta";
		case 43:
			return "Colter";
		case 44:
			return "FrozenExplorer";
		case 53:
			return "GunFight";
		case 45:
			return "MillesaniClaim";
		case 46:
			return "MountainMan";
		case 47:
			return "StarvingChildren";
		case 48:
			return "TempestRim";
		case 54:
			return "TheLoft";
		case 55:
			return "Veteran";
		case 56:
			return "Wapiti";
		case 49:
			return "WinterMiningTown";
		case 57:
			return "AguasDulces";
		case 58:
			return "GuarmaCamp";
		case 59:
			return "CincoTorres";
		case 60:
			return "LaCapilla";
		case 61:
			return "Manicato";
		case 62:
			return "Abandoned Mill";
		case 64:
			return "CarmodyDell";
		case 65:
			return "CornwallKerosene";
		case 66:
			return "CropFarm";
		case 67:
			return "CumberlandFalls";
		case 68:
			return "DownsRanch";
		case 69:
			return "EmeraldRanch";
		case 70:
			return "GrangersHoggery";
		case 71:
			return "HorseshoeOverlook";
		case 72:
			return "LarnedSod";
		case 73:
			return "LoonyCult";
		case 74:
			return "LuckysCabin";
		case 75:
			return "SwansonsStation";
		case 76:
			return "Valentine";
		case 77:
			return "AberdeenPigFarm";
		case 78:
			return "Annesburg";
		case 63:
			return "BeechersC";
		case 79:
			return "BeaverHollow";
		case 80:
			return "BlackBalsamRise";
		case 81:
			return "BrandywineDrop";
		case 82:
			return "ButcherCreek";
		case 83:
			return "Doverhill";
		case 84:
			return "HappyFamily";
		case 85:
			return "Isolationist";
		case 86:
			return "MacLeansHouse";
		case 87:
			return "MossyFlats";
		case 88:
			return "RoanokeValley";
		case 89:
			return "RockySeven";
		case 90:
			return "RoanokeTrapper";
		case 91:
			return "VanHornMansion";
		case 92:
			return "VanHornTradingPost";
		case 93:
			return "BraithewaiteManor";
		case 94:
			return "BulgerGlade";
		case 95:
			return "CaligaHall";
		case 96:
			return "CatfishJacksons";
		case 97:
			return "ClemensCove";
		case 98:
			return "ClemensPoint";
		case 99:
			return "CompsonsStead";
		case 100:
			return "Dairy Farm";
		case 101:
			return "ScarletMeadowsHorseShop";
		case 102:
			return "LonniesShack";
		case 103:
			return "LoveTriangle";
		case 104:
			return "Radleys Pasture";
		case 105:
			return "Rhodes";
		case 106:
			return "SlavePen";
		case 107:
			return "AuroraBasinShack";
		case 108:
			return "DeadSettler";
		case 109:
			return "Cochinay";
		case 110:
			return "ManzanitaPost";
		case 111:
			return "PacificUnionRailroad";
		case 112:
			return "TannersReach";
		case 113:
			return "TallTreesTrapper";
		case 126:
			return "MacFarlanesRanch";
		case 127:
			return "ThievesLanding";
		case 120:
			return "Armadillo";
		case 121:
			return "CootsChapel";
		case 122:
			return "DonJulioHouse";
		case 124:
			return "RidgewoodFarm";
		case 123:
			return "RileysCharge";
		case 125:
			return "TwinRocks";
		case 114:
			return "Gaptooth Breach";
		case 115:
			return "Tumbleweed";
		case 116:
			return "Rathskeller Fork";
		case 129:
			return "SolomonsFolly";
		case 117:
			return "BenedictPoint";
		case 118:
			return "FortMercer";
		case 119:
			return "Plainview";
		case 128:
			return "CentralUnionRRCamp";
		default:
			break;
	}
	return "Wilderness";
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HASH_COMPANION_DUTCH"):
			return 0;
		case joaat("HASH_COMPANION_JOHN"):
			return 1;
		case joaat("HASH_COMPANION_JAVIER"):
			return 2;
		case joaat("HASH_COMPANION_BILL"):
			return 3;
		case joaat("HASH_COMPANION_UNCLE"):
			return 4;
		case joaat("HASH_COMPANION_HOSEA"):
			return 5;
		case joaat("HASH_COMPANION_MICAH"):
			return 6;
		case joaat("HASH_COMPANION_CHARLES"):
			return 7;
		case joaat("HASH_COMPANION_SEAN"):
			return 8;
		case joaat("HASH_COMPANION_LENNY"):
			return 9;
		case joaat("HASH_COMPANION_ODRISCOLL"):
			return 10;
		case joaat("HASH_COMPANION_SADIE_ADLER"):
			return 11;
		case joaat("HASH_COMPANION_ABIGAIL"):
			return 13;
		case joaat("HASH_COMPANION_JACK"):
			return 14;
		case -1438494167:
			return 14;
		case joaat("HASH_COMPANION_MARY_BETH"):
			return 15;
		case joaat("HASH_COMPANION_MOLLY_OSHEA"):
			return 16;
		case joaat("HASH_COMPANION_PEARSON"):
			return 17;
		case joaat("HASH_COMPANION_STRAUSS"):
			return 18;
		case joaat("HASH_COMPANION_SUSAN_GRIMSHAW"):
			return 19;
		case joaat("HASH_COMPANION_KAREN"):
			return 20;
		case joaat("HASH_COMPANION_SWANSON"):
			return 21;
		case joaat("HASH_COMPANION_TILLY"):
			return 22;
		case joaat("HASH_COMPANION_TRELAWNY"):
			return 23;
		case joaat("HASH_COMPANION_CLEET"):
			return 24;
		case joaat("HASH_COMPANION_JOE"):
			return 25;
		case 1271180667:
			return 26;
		case joaat("HASH_COMPANION_DOG"):
			return 12;
	}
	return -1;
}

bool func_281(int iParam0)
{
	return __LIB_3__::func_77(Global_1327590.f_19692[iParam0]);
}

void func_282(int iParam0)
{
	if (!__LIB_9__::func_122(iParam0))
	{
		return;
	}
	__LIB_0__::func_37(&(Global_1327590.f_19574[iParam0 /*8*/].f_4));
}

bool func_283(int iParam0)
{
	return __LIB_0__::func_694(&(Global_40.f_12000), iParam0, 2);
}

bool func_284(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_11__::func_819(iParam0);
	return (iVar0 != -1 && iVar0 != 0);
}

var func_285()
{
	return Global_1425247.f_76.f_1;
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return 0;
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
		case 23:
		case 24:
		case 25:
			return 0;
		case 26:
		case 27:
		case 28:
		case 29:
			return 2;
		case 30:
		case 31:
		case 32:
		case 33:
			return 1;
		case 34:
		case 35:
		case 36:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_287(int iParam0)
{
	Global_1425247.f_76.f_2 = iParam0;
}

char* func_288(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL";
		case 1:
			return "PMPLAYER_HEALTH";
		case 2:
			return "PMPLAYER_STAMINA";
		case 3:
			return "PMPLAYER_DEADEYE";
		case 4:
			return "PMPLAYER_HORSE";
		default:
			break;
	}
	return "";
}

char* func_289(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL_DESC";
		case 1:
			return "PMPLAYER_HEALTH_DESC";
		case 2:
			return "PMPLAYER_STAMINA_DESC";
		case 3:
			return "PMPLAYER_DEADEYE_DESC";
		case 4:
			return "PMPLAYER_HORSE_DESC";
		default:
			break;
	}
	return "";
}

bool func_290(int iParam0)
{
	return ((Global_40.f_7731[0 /*5*/] <= iParam0 && Global_40.f_7731[1 /*5*/] <= iParam0) && Global_40.f_7731[2 /*5*/] <= iParam0);
}

char* func_291()
{
	return "script@beat@town@darkAlleyAmbush@IG3_CRIMINAL_WAKE_UP";
}

int func_292(float fParam0)
{
	int iVar0;
	iVar0 = 1745919061;
	if (!Global_1347477.f_200)
	{
		if (fParam0 <= -100f)
		{
			iVar0 = -2045421226;
		}
		else if (fParam0 <= -90f)
		{
			iVar0 = -1745814259;
		}
		else if (fParam0 <= -80f)
		{
			iVar0 = -325933489;
		}
		else if (fParam0 <= -70f)
		{
			iVar0 = -1065791927;
		}
		else if (fParam0 <= -60f)
		{
			iVar0 = -844699484;
		}
		else if (fParam0 <= -50f)
		{
			iVar0 = -1273449080;
		}
		else if (fParam0 <= -40f)
		{
			iVar0 = 927185840;
		}
		else if (fParam0 <= -30f)
		{
			iVar0 = 149872391;
		}
		else if (fParam0 <= -20f)
		{
			iVar0 = 399015098;
		}
		else if (fParam0 <= -10f)
		{
			iVar0 = -644349862;
		}
		else if (fParam0 <= 0f)
		{
			iVar0 = 1745919061;
		}
		else if (fParam0 <= 10f)
		{
			iVar0 = 1004225511;
		}
		else if (fParam0 <= 20f)
		{
			iVar0 = 1278600348;
		}
		else if (fParam0 <= 30f)
		{
			iVar0 = 502499352;
		}
		else if (fParam0 <= 40f)
		{
			iVar0 = -2093198664;
		}
		else if (fParam0 <= 50f)
		{
			iVar0 = -1837436619;
		}
		else if (fParam0 <= 60f)
		{
			iVar0 = 1736416063;
		}
		else if (fParam0 <= 70f)
		{
			iVar0 = 2040610690;
		}
		else if (fParam0 <= 80f)
		{
			iVar0 = -1173634986;
		}
		else if (fParam0 <= 90f)
		{
			iVar0 = -867801909;
		}
		else if (fParam0 <= 100f)
		{
			iVar0 = 1960266524;
		}
	}
	return iVar0;
}

void func_293(int iParam0)
{
	Global_1347477.f_186 = iParam0;
}

void func_294(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_4, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_3, bParam2);
}

bool func_295(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = WEAPON::GET_WEAPONTYPE_GROUP(iParam0);
	iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iParam0);
	iVar2 = 0;
	switch (iVar0)
	{
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_RIFLE"):
			iVar2 = 12;
			break;
		case joaat("GROUP_SHOTGUN"):
			iVar2 = 10;
			break;
		case joaat("GROUP_BOW"):
		case joaat("GROUP_SNIPER"):
			iVar2 = 8;
			break;
	}
	if (iVar1 < iVar2)
	{
		return false;
	}
	return true;
}

float func_296(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 53.84f;
		case 1:
			return 67.74f;
		case 2:
			return -84.2f;
		case 3:
			return 61.32f;
		case 4:
			return 38.68f;
		case 5:
			return 48.55f;
		case 6:
			return 90.45f;
		case 7:
			return 44.22f;
		default:
			break;
	}
	return 0f;
}

struct<4> func_297()
{
	return Global_1222969.f_7.f_46;
}

bool func_298()
{
	return Global_1222969.f_7.f_54 > Global_1225639.f_20;
}

int func_299(int iParam0, int iParam1)
{
	if (iParam1 == 0)
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
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

struct<4> func_300(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var4;
	Var4.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!__LIB_0__::func_236(&Var4, iVar2, iVar0, iVar1))
			{
			}
			else if (INVENTORY::_0xB881CA836CC4B6D4(&Var4))
			{
			}
			else
			{
				iVar2++;
			}
		}
		__LIB_0__::func_238(iVar0);
	}
	return Var4;
}

bool func_301(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			return true;
	}
	return false;
}

bool func_302()
{
	return Global_1572887.f_164 > 0;
}

void func_303(int iParam0)
{
	Global_1572887.f_164.f_1 = iParam0;
}

void func_304(int iParam0)
{
	Global_1935689.f_1225.f_1207 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_1225.f_4, MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(Global_1935689.f_1225.f_1207), 0));
}

int func_305()
{
	return Global_1900372;
}

void func_306(int iParam0)
{
	Global_1900372.f_2 = iParam0;
}

void func_307(int iParam0)
{
	Global_1900372.f_1 = iParam0;
}

void func_308(int iParam0)
{
	Global_1900372.f_5 = iParam0;
}

int func_309(int iParam0)
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 0;
			break;
		case 2:
			iVar0 = 0;
			break;
		case 4:
			iVar0 = 3;
			break;
		case 5:
			iVar0 = 1;
			break;
		case 6:
			iVar0 = 2;
			break;
		case 13:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_310(int iParam0)
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		case 4:
			iVar0 = 1;
			break;
		case 5:
			iVar0 = 0;
			break;
		case 6:
			iVar0 = 2;
			break;
		case 13:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

bool func_311(int iParam0)
{
	return (Global_1359489.f_18 && iParam0) != 0;
}

void func_312(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		Global_40.f_9384[iParam0 /*2*/] |= 1;
	}
	else
	{
		Global_40.f_9384[iParam0 /*2*/] = (Global_40.f_9384[iParam0 /*2*/] - Global_40.f_9384[iParam0 /*2*/] & 1);
	}
}

void func_313()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_01", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_02", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_03", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_04", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_05", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_deserted", false, true);
}

void func_314()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_01", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_02", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_03", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_04", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", false, true);
}

void func_315()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_01", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_02", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_03", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_Abandoned", false, true);
}

bool func_316(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_1945938)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1945938[iVar0 /*18*/].f_11))
		{
			if (Global_1945938[iVar0 /*18*/].f_11 == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_317()
{
	int iVar0;
	iVar0 = (Global_1359489.f_361.f_1 - 1);
	if (iVar0 < 0)
	{
		return;
	}
	Global_1359489.f_361.f_1 = (Global_1359489.f_361.f_1 - 1);
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
		case 1:
			return 14;
		case 2:
			return 15;
		case 3:
			return 16;
		case 4:
			return 17;
		case 5:
			return 18;
		case 6:
			return 19;
		case 7:
			return 20;
		case 8:
			return 21;
		case 9:
			return 22;
		case 10:
			return 23;
		case 11:
			return 24;
		case 13:
			return 25;
		case 14:
			return 26;
		case 15:
			return 27;
		case 16:
			return 28;
		case 17:
			return 29;
		case 18:
			return 30;
		case 19:
			return 31;
		case 20:
			return 32;
		case 21:
			return 33;
		case 22:
			return 34;
		case 23:
			return 35;
		default:
			break;
	}
	return -1;
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
		case joaat("CSTAG_MOOD_BILL_DOWN"):
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
		case joaat("CSTAG_MOOD_MICAH_DOWN"):
		case joaat("CSTAG_MOOD_STRAUSS_DOWN"):
		case joaat("CSTAG_MOOD_DUTCH_DOWN"):
		case joaat("CSTAG_MOOD_SUSAN_DOWN"):
		case joaat("CSTAG_MOOD_LENNY_DOWN"):
		case joaat("CSTAG_MOOD_TRELAWNY_DOWN"):
		case joaat("CSTAG_MOOD_UNCLE_DOWN"):
		case joaat("CSTAG_MOOD_SWANSON_DOWN"):
		case joaat("CSTAG_MOOD_JACK_DOWN"):
		case joaat("CSTAG_MOOD_MARYBETH_DOWN"):
		case joaat("CSTAG_MOOD_KAREN_DOWN"):
		case joaat("CSTAG_MOOD_SEAN_DOWN"):
			return 1;
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
		case joaat("CSTAG_MOOD_TILLY_ANNOYED"):
		case joaat("CSTAG_MOOD_MARYBETH_ANNOYED"):
		case joaat("CSTAG_MOOD_DUTCH_ANNOYED"):
		case joaat("CSTAG_MOOD_ABIGAIL_ANNOYED"):
		case joaat("CSTAG_MOOD_SEAN_ANNOYED"):
		case joaat("CSTAG_MOOD_JACK_ANNOYED"):
		case joaat("CSTAG_MOOD_PEARSON_ANNOYED"):
		case joaat("CSTAG_MOOD_SWANSON_ANNOYED"):
		case joaat("CSTAG_MOOD_SUSAN_ANNOYED"):
			return 2;
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
		case joaat("CSTAG_MOOD_DUTCH_DRUNK"):
		case joaat("CSTAG_MOOD_JOHN_DRUNK"):
		case joaat("CSTAG_MOOD_TILLY_DRUNK"):
		case joaat("CSTAG_MOOD_TRELAWNY_DRUNK"):
		case joaat("CSTAG_MOOD_LENNY_DRUNK"):
		case joaat("CSTAG_MOOD_ABIGAIL_DRUNK"):
		case joaat("CSTAG_MOOD_BILL_DRUNK"):
		case joaat("CSTAG_MOOD_MARYBETH_DRUNK"):
		case joaat("CSTAG_MOOD_UNCLE_DRUNK"):
		case joaat("CSTAG_MOOD_SUSAN_DRUNK"):
		case joaat("CSTAG_MOOD_JAVIER_DRUNK"):
		case joaat("CSTAG_MOOD_SEAN_DRUNK"):
			return 3;
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
		case joaat("CSTAG_MOOD_MOLLY_UPBEAT"):
		case joaat("CSTAG_MOOD_CHARLES_UPBEAT"):
		case joaat("CSTAG_MOOD_JAVIER_UPBEAT"):
		case joaat("CSTAG_MOOD_KAREN_UPBEAT"):
		case joaat("CSTAG_MOOD_SUSAN_UPBEAT"):
		case joaat("CSTAG_MOOD_SADIE_UPBEAT"):
		case joaat("CSTAG_MOOD_BILL_UPBEAT"):
		case joaat("CSTAG_MOOD_ABIGAIL_UPBEAT"):
			return 4;
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
		case joaat("CSTAG_MOOD_LENNY_COLTER"):
		case joaat("CSTAG_MOOD_JAVIER_COLTER"):
		case joaat("CSTAG_MOOD_BILL_COLTER"):
		case joaat("CSTAG_MOOD_SADIE_COLTER"):
		case joaat("CSTAG_MOOD_JACK_COLTER"):
		case joaat("CSTAG_MOOD_PEARSON_COLTER"):
		case joaat("CSTAG_MOOD_MOLLY_COLTER"):
		case joaat("CSTAG_MOOD_CHARLES_COLTER"):
		case joaat("CSTAG_MOOD_MICAH_COLTER"):
		case joaat("CSTAG_MOOD_DUTCH_COLTER"):
		case joaat("CSTAG_MOOD_SUSAN_COLTER"):
		case joaat("CSTAG_MOOD_ARTHUR_COLTER"):
		case joaat("CSTAG_MOOD_STRAUSS_COLTER"):
		case joaat("CSTAG_MOOD_ABIGAIL_COLTER"):
		case joaat("CSTAG_MOOD_KIERAN_COLTER"):
		case joaat("CSTAG_MOOD_JOHN_COLTER"):
			return 5;
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
		case joaat("CSTAG_MOOD_BILL_BEAVER"):
		case joaat("CSTAG_MOOD_DUTCH_BEAVER"):
		case joaat("CSTAG_MOOD_UNCLE_BEAVER"):
		case joaat("CSTAG_MOOD_ABIGAIL_BEAVER"):
		case joaat("CSTAG_MOOD_SEAN_BEAVER"):
		case joaat("CSTAG_MOOD_SUSAN_BEAVER"):
		case joaat("CSTAG_MOOD_ARTHUR_BEAVER"):
		case joaat("CSTAG_MOOD_MARYBETH_BEAVER"):
		case joaat("CSTAG_MOOD_HOSEA_BEAVER"):
		case joaat("CSTAG_MOOD_JOHN_BEAVER"):
		case joaat("CSTAG_MOOD_KIERAN_BEAVER"):
		case joaat("CSTAG_MOOD_JAVIER_BEAVER"):
		case joaat("CSTAG_MOOD_CHARLES_BEAVER"):
		case joaat("CSTAG_MOOD_SWANSON_BEAVER"):
		case joaat("CSTAG_MOOD_KAREN_BEAVER"):
		case joaat("CSTAG_MOOD_SADIE_BEAVER"):
			return 6;
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 7;
		default:
			break;
	}
	return 0;
}

int func_320(int iParam0)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return -1;
	}
	return Global_40.f_4942[iParam0 /*60*/].f_42;
}

void func_321()
{
	Global_1425247.f_53 = 1;
}

char* func_322(int iParam0)
{
	if (iParam0 == 0)
	{
		return "PMPLAYER_CONDITION_WEIGHT_PERFECT";
	}
	if (iParam0 <= -7)
	{
		return "PMPLAYER_CONDITION_WEIGHT_UNDERWEIGHT";
	}
	if (iParam0 >= 7)
	{
		return "PMPLAYER_CONDITION_WEIGHT_OVERWWEIGHT";
	}
	return "PMPLAYER_CONDITION_WEIGHT_AVERAGE";
}

void func_323(int iParam0)
{
	Global_1946804.f_859 = iParam0;
}

int func_324(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -742846258;
		case 2:
			return 131724934;
		case 3:
			return 325433051;
		case 4:
			return -1943296527;
		case 5:
			return 1586684911;
		case 6:
			return -1171161482;
		case 7:
			return 1038672528;
		case 8:
			return -1073329868;
		case 9:
			return 1263489075;
		case 10:
			return 966390205;
		case 11:
			return -2046198715;
		case 12:
			return 13;
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

void func_325(var uParam0, var uParam1)
{
	Global_1572887.f_164.f_27 = { *uParam0 };
	Global_1572887.f_164.f_49 = { *uParam1 };
}

void func_326(int iParam0)
{
	__LIB_0__::func_7(&(Global_1572887.f_164.f_61), iParam0);
}

void func_327(int iParam0)
{
	Global_1572887.f_164.f_64 = iParam0;
}

void func_328(int iParam0)
{
	Global_1572887.f_164 = iParam0;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 58;
		case 1:
			return 18;
		case 2:
			return 53;
		case 3:
			return 9;
		default:
			break;
	}
	return 0;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 10;
		case 2:
			return 12;
		case 3:
			return 3;
		default:
			break;
	}
	return 0;
}

bool func_331(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 948:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
					return true;
				default:
					break;
			}
			break;
		case 949:
			switch (iParam1)
			{
				case 2:
				case 3:
					return true;
				default:
					break;
			}
			break;
		case 950:
			switch (iParam1)
			{
				case 2:
				case 3:
					return true;
				default:
					break;
			}
			break;
		case 951:
			switch (iParam1)
			{
				case 2:
				case 3:
					return true;
				default:
					break;
			}
			break;
		case 938:
			switch (iParam1)
			{
				case 4:
				case 5:
					return true;
				default:
					break;
			}
			break;
		case 939:
			switch (iParam1)
			{
				case 4:
				case 5:
					return true;
				default:
					break;
			}
			break;
		case 940:
			switch (iParam1)
			{
				case 4:
				case 5:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

void func_332(int iParam0)
{
	if (!__LIB_0__::func_29(iParam0))
	{
		return;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(iParam0)))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(iParam0));
	}
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 948:
			return -49917154;
		case 949:
			return 2125518457;
		case 950:
		case 951:
			return -1874921067;
		case 938:
			return 2116810927;
		case 939:
			return -2065758695;
		case 940:
			return -1356506459;
		default:
			break;
	}
	return 0;
}

void func_334(int iParam0)
{
	__LIB_0__::func_172(Global_1392194[iParam0 /*10*/].f_6);
	__LIB_0__::func_172(Global_1392194[iParam0 /*10*/].f_5);
}

void func_335(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_7__::func_371(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(8, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(8, iVar0);
	}
}

bool func_336(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_BOOL(bParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 395864095:
			return 907027518;
		case -848293915:
			return 234527101;
		case joaat("HASH_CA_HUNTING"):
			return 1784895540;
		case joaat("HASH_CA_FFF_CAMP"):
			return -1511391406;
		case joaat("HASH_CA_FISHING"):
			return 654481153;
		case -424258227:
			return -1215120894;
		case 497820992:
			return 931703394;
		case 384487969:
			return 1193949598;
		case joaat("HASH_CA_RUSTLING"):
			return 754620122;
		case 1238571818:
			return -2036347356;
		case -448585888:
			return -1341684320;
		case joaat("HASH_CA_COACH"):
			return -919476462;
		case joaat("HASH_CA_BANK"):
			return -1670940721;
		case -1481840534:
			return 380107708;
		case 1108319169:
			return -1700356309;
		case -414878571:
			return 1523333387;
		case -363271663:
			return 1744128959;
		case joaat("HASH_CA_DOMINOES_CAMP"):
			return -1567081107;
		case -667426721:
			return -1739349092;
		case 309704192:
			return -301635006;
		case joaat("HASH_CA_HOMEROBBERY"):
			return 565221344;
		default:
			break;
	}
	return 234527101;
}

void func_338(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 >= 24 || iParam1 < 0)
	{
	}
	if (bParam2)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(1, iParam1));
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && BUILTIN::SHIFT_LEFT(1, iParam1)));
	}
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1749008611;
		case 2:
			return 2111695903;
		case 3:
			return -1947695052;
		case 4:
			return -1559513478;
		case 5:
			return -1321905459;
		case 6:
			return 42081460;
		case 7:
			return 870580095;
		case 8:
			return 504746979;
		case 9:
			return 138913863;
		case 10:
			return -90108678;
		case 11:
			return -1466172032;
		case 12:
			return -981873755;
		case 13:
			return 2013143748;
		case 14:
			return joaat("DES_TREEFALL_ACCIDENT");
		case 15:
			return 57105576;
		case 16:
			return 991016631;
		case 17:
			return -125588314;
		case 18:
			return -1340001373;
		case 19:
			return -2116397290;
		case 20:
			return -922917541;
		case 21:
			return 1524580507;
		case 22:
			return 204481342;
		case 23:
			return 174727090;
		case 24:
			return 767505137;
		case 25:
			return 588062093;
		case 26:
			return 995675696;
		case 27:
			return 706423733;
		case 28:
			return 471934509;
		case 29:
			return 82084523;
		case 30:
			return 758066107;
		case 31:
			return -1995054197;
		case 32:
			return -1623126047;
		case 33:
			return 1943484686;
		case 34:
			return 2056603274;
		case 35:
			return 898257133;
		case 36:
			return 1202346365;
		case 37:
			return 1289178060;
		case 38:
			return 823583740;
		case 39:
			return -826466486;
		case 40:
			return -593183975;
		case 41:
			return -362883443;
		case 42:
			return -1560816708;
		case 43:
			return 1739101350;
		case 44:
			return 281153830;
		case 45:
			return -380287375;
		case 46:
			return -634291786;
		case 47:
			return -1047158045;
		case 48:
			return 1433203214;
		case 49:
			return -2139410267;
		case 50:
			return 1008375999;
		case 51:
			return 117485200;
		case 52:
			return -188216801;
		case 54:
			return -630275010;
		case 55:
			return -164693058;
		case 56:
			return 118201723;
		case 57:
			return -372970556;
		default:
			break;
	}
	return 0;
}

int func_340(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -590227673;
		case 1:
			return -1593160175;
		case 2:
			return 872406077;
		case 3:
			return 1471226731;
		case 4:
			return -1149736196;
		case 5:
			return -1926787493;
		case 6:
			return -2040493861;
		case 7:
			return -1382265257;
		case 8:
			return -1490939730;
		case 9:
			return 1552753100;
		case 10:
			return joaat("CAS_HOUSEWARES");
		case 11:
			return 1987335384;
		case 12:
			return 1251358153;
		case 13:
			return 1305415261;
		case 14:
			return 1722569012;
		case 15:
			return 1823159188;
		case 16:
			return -442857872;
		case 17:
			return -232598845;
		default:
			break;
	}
	return 0;
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2077623691;
		case 1:
			return -586415580;
		case 2:
			return 2096286828;
		case 3:
			return 1251859782;
		case 4:
			return 1520095560;
		case 5:
			return 994786977;
		case 6:
			return 409171062;
		case 7:
			return -1926989471;
		case 8:
			return 66382979;
		case 9:
			return -948615309;
		case 10:
			return 341106871;
		case 11:
			return -835267464;
		case 12:
			return -523896426;
		case 13:
			return 483041556;
		case 14:
			return -1324099905;
		case 15:
			return 1589293578;
		case 16:
			return 1435082664;
		case 17:
			return -2091615427;
		case 18:
			return 227706189;
		case 19:
			return 1587857798;
		case 20:
			return -1997605640;
		case 21:
			return 2066602358;
		case 22:
			return -1374896333;
		case 23:
			return -454287921;
		case 24:
			return 1735860959;
		case 25:
			return -109606367;
		case 26:
			return -455342387;
		case 27:
			return -1407773372;
		case 28:
			return -869788001;
		case 29:
			return -691393565;
		case 30:
			return -1448947307;
		case 31:
			return -1171033418;
		case 32:
			return -487373767;
		case 33:
			return 2020752077;
		case 34:
			return 593772301;
		case 35:
			return 207032563;
		case 36:
			return -1984361543;
		case 37:
			return -142900294;
		case 38:
			return 691955519;
		case 39:
			return -1022518533;
		case 40:
			return -196117122;
		case 41:
			return 499044444;
		case 42:
			return -805522215;
		case 43:
			return 2080640229;
		case 44:
			return -1386614896;
		case 45:
			return -693812694;
		case 46:
			return -555736180;
		case 47:
			return -2045964586;
		case 48:
			return 998966461;
		case 49:
			return -1381094502;
		case 50:
			return -665831452;
		case 51:
			return -910752885;
		case 52:
			return 2129660496;
		default:
			break;
	}
	return 0;
}

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1877706739;
		case 1:
			return -1035166057;
		case 2:
			return -821741560;
		case 3:
			return -574138996;
		case 4:
			return 437660121;
		case 5:
			return -1325803862;
		case 6:
			return 980904027;
		case 7:
			return 905216692;
		case 8:
			return -1299414622;
		default:
			break;
	}
	return 0;
}

char* func_343(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "logging_stage0";
		case 1:
			return "logging_stage1";
		case 2:
			return "logging_stage2";
		case 3:
			return "logging_stage3";
		case 4:
			return "logging_stage4";
		case 5:
			return "logging_stage5";
		default:
			break;
	}
	return "";
}

char* func_344(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "homestead_stage1";
		case 1:
			return "homestead_stage1_abandoned";
		case 2:
			return "homestead_stage2";
		case 3:
			return "homestead_stage2_abandoned";
		case 4:
			return "homestead_stage3";
		case 5:
			return "homestead_stage3_helped";
		case 7:
			return "homestead_stage3_abandoned";
		case 8:
			return "homestead_stage4";
		case 9:
			return "homestead_stage5";
		default:
			break;
	}
	return "";
}

char* func_345(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "railroad_stage0";
		case 1:
			return "railroad_stage1";
		case 2:
			return "railroad_stage1_abandoned";
		case 3:
			return "railroad_stage1_helped";
		case 4:
			return "railroad_stage1_helped_abandoned";
		case 5:
			return "railroad_stage2";
		case 6:
			return "railroad_stage2_abandoned";
		case 7:
			return "railroad_stage2_helped";
		case 8:
			return "railroad_stage2_helped_abandoned";
		case 9:
			return "railroad_stage3";
		case 10:
			return "railroad_stage3_abandoned";
		case 11:
			return "railroad_stage4";
		default:
			break;
	}
	return "";
}

int func_346(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 1749008611:
					return 1;
				case 42081460:
					return 1;
				case -1466172032:
					return 1;
				case joaat("DES_TREEFALL_ACCIDENT"):
					if (__LIB_7__::func_908(0, 512))
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case 991016631:
					if (__LIB_7__::func_908(0, 512))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case -2116397290:
					return 1;
				case -922917541:
					return 1;
				case 1524580507:
					return 1;
				case 767505137:
					return 1;
				case 758066107:
					return 1;
				case 1202346365:
					return 1;
				case 823583740:
					if (!bParam4)
					{
						return 1;
					}
					break;
				case 1739101350:
					return 1;
				case -1047158045:
					return 1;
				case 1433203214:
					return 1;
				case 1008375999:
					return 1;
				case -630275010:
					return 1;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1749008611:
					return 1;
				case 2111695903:
					return 1;
				case 870580095:
					return 1;
				case -1466172032:
					return 1;
				case -981873755:
					return 1;
				case -922917541:
					return 1;
				case 204481342:
					return 1;
				case 767505137:
					return 1;
				case 588062093:
					return 1;
				case 471934509:
					return 1;
				case joaat("DES_TREEFALL_ACCIDENT"):
					if (__LIB_7__::func_908(0, 512))
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case 991016631:
					if (__LIB_7__::func_908(0, 512))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case -1995054197:
					return 1;
				case 898257133:
					return 1;
				case 1202346365:
					return 1;
				case -826466486:
					if (!bParam4)
					{
						return 1;
					}
					break;
				case 281153830:
					return 1;
				case -1047158045:
					return 1;
				case 117485200:
					return 1;
				case -630275010:
					return 1;
				case -164693058:
					return 1;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1749008611:
					return 1;
				case 2111695903:
					return 1;
				case -1947695052:
					return 1;
				case 504746979:
					return 1;
				case -1466172032:
					return 1;
				case -981873755:
					return 1;
				case 2013143748:
					return 1;
				case 174727090:
					return 1;
				case 767505137:
					return 1;
				case 588062093:
					return 1;
				case 995675696:
					return 1;
				case 471934509:
					return 1;
				case -1623126047:
					return 1;
				case 898257133:
					return 1;
				case 1202346365:
					return 1;
				case -593183975:
					if (!bParam4)
					{
						return 1;
					}
					break;
				case -380287375:
					return 1;
				case -1047158045:
					return 1;
				case -2139410267:
					return 1;
				case -188216801:
					return 1;
				case -630275010:
					return 1;
				case -164693058:
					return 1;
				case 118201723:
					return 1;
				case -372970556:
					return 1;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case -1559513478:
					return 1;
				case 138913863:
					return 1;
				case -1466172032:
					return 1;
				case -981873755:
					return 1;
				case 2013143748:
					return 1;
				case 767505137:
					return 1;
				case 588062093:
					return 1;
				case 995675696:
					return 1;
				case 706423733:
					return 1;
				case 471934509:
					return 1;
				case 82084523:
					return 1;
				case 898257133:
					return 1;
				case 1943484686:
					return 1;
				case 1202346365:
					return 1;
				case -634291786:
					return 1;
				case -188216801:
					return 1;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case -1321905459:
					return 1;
				case -90108678:
					return 1;
				case -1466172032:
					return 1;
				case -981873755:
					return 1;
				case 2013143748:
					return 1;
				case 767505137:
					return 1;
				case 588062093:
					return 1;
				case 995675696:
					return 1;
				case 706423733:
					return 1;
				case 471934509:
					return 1;
				case 2056603274:
					return 1;
				case 1202346365:
					return 1;
				case 1289178060:
					return 1;
				case -634291786:
					return 1;
				case -188216801:
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_347(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case -590227673:
					if (bParam4 || bParam5)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case -1593160175:
					if (bParam5)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case 872406077:
					return 1;
				case -2040493861:
					if (bParam5)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case 1305415261:
					return 1;
				case -232598845:
					if (bParam4)
					{
						return 1;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case -590227673:
					if (bParam4 || bParam5)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case -1593160175:
					if (bParam5)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case 1471226731:
					return 1;
				case -1382265257:
					if (bParam5)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case 1305415261:
					return 1;
				case -232598845:
					if (bParam4)
					{
						return 1;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case -590227673:
					if (bParam4 || bParam5)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case -1593160175:
					if (bParam5)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case -1149736196:
					return 1;
				case -1490939730:
					if (bParam5)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case 1987335384:
					if (!bParam5 && bParam2)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case 1305415261:
					return 1;
				case -232598845:
					if (bParam4)
					{
						return 1;
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case -1926787493:
					return 1;
				case 1552753100:
					return 1;
				case joaat("CAS_HOUSEWARES"):
					return 1;
				case 1251358153:
					return 1;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case -1926787493:
					return 1;
				case 1552753100:
					return 1;
				case joaat("CAS_HOUSEWARES"):
					return 1;
				case 1251358153:
					return 1;
				case 1722569012:
					return 1;
				case 1823159188:
					return 1;
				case -442857872:
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_348(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case -586415580:
					return 1;
				case 2096286828:
					if (bParam3)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case 341106871:
					return 1;
				case -1324099905:
					if (bParam2)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case 1589293578:
					return 1;
				case 1435082664:
					return 1;
				case -2091615427:
					return 1;
				case 1587857798:
					return 1;
				case -1997605640:
					return 1;
				case 2066602358:
					return 1;
				case -1374896333:
					return 1;
				case -455342387:
					return 1;
				case -1407773372:
					return 1;
				case -869788001:
					return 1;
				case -691393565:
					return 1;
				case -1448947307:
					return 1;
				case -1171033418:
					return 1;
				case -487373767:
					return 1;
				case -142900294:
					return 1;
				case 691955519:
					if (bParam2)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case -2045964586:
					return 1;
				case 998966461:
					if (bParam3)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case 2:
			if (iParam1 == -910752885)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 1251859782:
					return 1;
				case 1520095560:
					if (bParam3)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case -1926989471:
					return 1;
				case 66382979:
					if (bParam2)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case -948615309:
					if (bParam2)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case 341106871:
					return 1;
				case -835267464:
					return 1;
				case 1587857798:
					return 1;
				case -454287921:
					return 1;
				case 1735860959:
					return 1;
				case -109606367:
					return 1;
				case -455342387:
					return 1;
				case -1407773372:
					return 1;
				case -869788001:
					return 1;
				case -691393565:
					return 1;
				case -1448947307:
					return 1;
				case -1171033418:
					return 1;
				case -487373767:
					return 1;
				case -142900294:
					return 1;
				case 691955519:
					return 1;
				case -1022518533:
					return 1;
				case -196117122:
					if (bParam2)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case -2045964586:
					return 1;
				case -1381094502:
					if (bParam3)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case 3:
			if (iParam1 == 2129660496)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 994786977:
					return 1;
				case 409171062:
					if (bParam3)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case 341106871:
					return 1;
				case -835267464:
					return 1;
				case -523896426:
					return 1;
				case 483041556:
					return 1;
				case 227706189:
					return 1;
				case -109606367:
					return 1;
				case -1171033418:
					return 1;
				case 2020752077:
					return 1;
				case 593772301:
					return 1;
				case -1984361543:
					return 1;
				case -142900294:
					return 1;
				case 691955519:
					return 1;
				case -1022518533:
					return 1;
				case -196117122:
					return 1;
				case 499044444:
					return 1;
				case -805522215:
					return 1;
				case 2080640229:
					return 1;
				case -1386614896:
					return 1;
				case -2045964586:
					return 1;
				case -665831452:
					if (bParam3)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 2077623691:
					return 1;
				case 341106871:
					return 1;
				case -835267464:
					return 1;
				case -523896426:
					return 1;
				case 483041556:
					return 1;
				case 227706189:
					return 1;
				case -109606367:
					return 1;
				case 593772301:
					return 1;
				case 207032563:
					return 1;
				case -1984361543:
					return 1;
				case -142900294:
					return 1;
				case 691955519:
					return 1;
				case -1022518533:
					return 1;
				case -196117122:
					return 1;
				case 499044444:
					return 1;
				case -805522215:
					return 1;
				case 2080640229:
					return 1;
				case -1386614896:
					return 1;
				case -693812694:
					return 1;
				case -555736180:
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_349(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case -1877706739:
					return 1;
				case -1035166057:
					return 1;
				case -821741560:
					return 1;
				case -574138996:
					return 1;
				case 437660121:
					return 1;
				case -1325803862:
					return 1;
				case 980904027:
					return 1;
				case 905216692:
					return 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case -1035166057:
					return 1;
				case -821741560:
					return 1;
				case -574138996:
					return 1;
				case 437660121:
					return 1;
				case -1325803862:
					return 1;
				case 980904027:
					return 1;
				case -1299414622:
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_350(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "logging_stage1";
		case 2:
			return "logging_stage2";
		case 3:
			return "logging_stage3";
		case 4:
			return "logging_stage4";
		case 5:
			return "logging_stage5";
		default:
			break;
	}
	return "";
}

char* func_351(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 1:
			if (bParam2)
			{
				return "homestead_stage1_abandoned";
			}
			else
			{
				return "homestead_stage1";
			}
			break;
		case 2:
			if (bParam2)
			{
				return "homestead_stage2_abandoned";
			}
			else
			{
				return "homestead_stage2";
			}
			break;
		case 3:
			if (bParam2)
			{
				return "homestead_stage3_abandoned";
			}
			else if (bParam1)
			{
				return "homestead_stage3_helped";
			}
			else
			{
				return "homestead_stage3";
			}
			break;
		case 4:
			return "homestead_stage4";
		case 5:
			return "homestead_stage5";
	}
	return "";
}

char* func_352(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				if (bParam2)
				{
					return "railroad_stage1_helped_abandoned";
				}
				else
				{
					return "railroad_stage1_helped";
				}
			}
			else if (bParam2)
			{
				return "railroad_stage1_abandoned";
			}
			else
			{
				return "railroad_stage1";
			}
			break;
		case 2:
			if (bParam1)
			{
				if (bParam2)
				{
					return "railroad_stage2_helped_abandoned";
				}
				else
				{
					return "railroad_stage2_helped";
				}
			}
			else if (bParam2)
			{
				return "railroad_stage2_abandoned";
			}
			else
			{
				return "railroad_stage2";
			}
			break;
		case 3:
			if (bParam2)
			{
				return "railroad_stage3_abandoned";
			}
			else
			{
				return "railroad_stage3";
			}
			break;
		case 4:
			return "railroad_stage4";
	}
	return "";
}

int func_353(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	__LIB_16__::func_7();
	Global_1913814.f_204.f_2 = -1379316512;
	Global_1913814.f_204.f_3 = __LIB_16__::func_8(iParam0);
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&(Global_1913814.f_204));
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 5;
		case 4:
			return 10;
		default:
			break;
	}
	return 0;
}

void func_355(int iParam0, var uParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_1154 = uParam1;
}

int func_356(int iParam0, var uParam1)
{
	var uVar0;
	if (iParam0 == -1)
	{
		return -1;
	}
	__LIB_16__::func_7();
	Global_1913814.f_204.f_2 = 42812586;
	Global_1913814.f_204.f_3 = __LIB_16__::func_8(iParam0);
	Global_1913814.f_204.f_4 = uParam1;
	if (!DATAFILE::_DATAFILE_GET_INT(&uVar0, &(Global_1913814.f_204)))
	{
		return -1;
	}
	return uVar0;
}

bool func_357()
{
	int iVar0;
	if (__LIB_0__::func_103())
	{
		iVar0 = TASK::_0x804425C4BBD00883(Global_35);
		if (__LIB_0__::func_357(iVar0) == 2041469314 || __LIB_0__::func_357(iVar0) == -77448735)
		{
			return false;
		}
		else
		{
			if (__LIB_0__::func_357(iVar0) == 0)
			{
				if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("COFFEE_DRINKING")) > 0 || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("STEW_EATING")) > 0)
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

int func_358(int iParam0)
{
	struct<4> Var0;
	Var0 = Global_1357549.f_576;
	Var0.f_2 = 29309381;
	Var0.f_3 = __LIB_3__::func_38(iParam0);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

var func_359(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;
	Var1 = { __LIB_0__::func_38(iParam0, iParam1) };
	STATS::STAT_ID_GET_FLOAT(&Var1, &uVar0);
	return uVar0;
}

void func_360()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_40.f_11095.f_11)
	{
		iVar1 = BUILTIN::ROUND(Global_40.f_11095.f_11[iVar0]);
		if (__LIB_11__::func_886(iVar0))
		{
			if (__LIB_11__::func_887(iVar0))
			{
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iVar0, iVar1);
			}
			else
			{
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iVar0, __LIB_0__::func_198(iVar1));
			}
		}
		iVar0++;
	}
}

void func_361()
{
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, __LIB_3__::func_130(0), __LIB_0__::func_198(BUILTIN::ROUND(__LIB_0__::func_247(0))));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, __LIB_3__::func_130(2), __LIB_0__::func_198(BUILTIN::ROUND(__LIB_0__::func_247(2))));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, __LIB_3__::func_130(1), __LIB_0__::func_198(BUILTIN::ROUND(__LIB_0__::func_247(1))));
}

float func_362()
{
	return (BUILTIN::TO_FLOAT(__LIB_5__::func_452()) / 1000f);
}

bool func_363()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (NETWORK::_0xBAFFDE5F953720D9())
	{
		return false;
	}
	if (!__LIB_11__::func_989())
	{
		return false;
	}
	if (!__LIB_1__::func_955())
	{
		return false;
	}
	if (!__LIB_11__::func_116())
	{
		return false;
	}
	if (__LIB_11__::func_990())
	{
		return false;
	}
	return true;
}

bool func_364(int iParam0, int iParam1, int iParam2)
{
	if (Global_265238.f_79565.f_278 & 8 != 0)
	{
		return true;
	}
	if (Global_1051043 != -1 && Global_1051043 != iParam0)
	{
		return true;
	}
	if (iParam1 != 0 && __LIB_6__::func_14(iParam1))
	{
		return true;
	}
	if (iParam2 != 0 && __LIB_14__::func_692(iParam2, 255))
	{
		return true;
	}
	if (Global_262777[Global_1225639 /*74*/] > 2)
	{
		return true;
	}
	if (Global_262150 >= 1)
	{
		return true;
	}
	if (__LIB_0__::func_4())
	{
		return true;
	}
	if (Global_1572887.f_6 & 1 != 0)
	{
		if (Global_1051043 == -1)
		{
			return true;
		}
	}
	if (Global_265238.f_79864 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265238.f_79864))
	{
		return true;
	}
	return false;
}

void func_365(int iParam0)
{
	__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_13), 256);
	if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 1024))
	{
		__LIB_0__::func_8(&(Global_1347702[iParam0 /*49*/].f_12), 1024);
	}
}

int func_366(int iParam0)
{
	if (!__LIB_0__::func_630(iParam0))
	{
		return 0;
	}
	return __LIB_1__::func_931(iParam0);
}

bool func_367(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (Global_1572887.f_12 == -1)
	{
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		if (Global_1347343 != -1)
		{
			return false;
		}
	}
	else if (!bParam3 && Global_1572887.f_80.f_63 != 0)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (TASK::_0x038B1F1674F0E242(Global_35))
		{
			return false;
		}
		if (PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "inInspectionMode"))
		{
			return false;
		}
	}
	if (!bParam1 && (Global_1914319.f_17370 || Global_1914319.f_18996.f_1))
	{
		return false;
	}
	if (__LIB_0__::func_91())
	{
		return false;
	}
	if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	if (!bParam2 && (((Global_1935496.f_10 || Global_1935496.f_11) || Global_1935496.f_12) || Global_1935496.f_13))
	{
		return false;
	}
	if (Global_18)
	{
		return false;
	}
	if (!bParam3 && Global_1572887.f_12 != -1)
	{
		iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1572887.f_80.f_63 > 7 && Global_1572887.f_80.f_63 < 10)
		{
			return false;
		}
		if (Global_262777[iVar0 /*74*/].f_72 & 74752 != 0)
		{
			return true;
		}
		if (Global_262777[iVar0 /*74*/].f_1.f_16 != 0 && Global_265238.f_79565.f_278 & 8192 == 0)
		{
			return false;
		}
		if (Global_262777[iVar0 /*74*/].f_1 != 255 && Global_265238.f_79565.f_278 & 8192 == 0)
		{
			return false;
		}
		if (Global_1181810.f_9810 != -1)
		{
			return false;
		}
		if (Global_1126349[iVar0 /*42*/].f_34 & 1 != 0)
		{
			return false;
		}
	}
	return true;
}

int func_368()
{
	return __LIB_7__::func_797();
}

void func_369(int iParam0)
{
	__LIB_1__::func_683(&(Global_1935496.f_27), iParam0);
}

bool func_370(int iParam0)
{
	if (!__LIB_9__::func_192())
	{
		return false;
	}
	__LIB_7__::func_794(iParam0);
	Global_1898068.f_4 = 1;
	return true;
}

void func_371()
{
	Global_1898092.f_26 = 0;
	Global_1898092.f_26.f_1 = -1;
	Global_1898092.f_26.f_2 = -1;
	Global_1898092.f_26.f_7 = -1;
	Global_1898092.f_26.f_3 = 0;
	Global_1898092.f_26.f_4 = 0;
	__LIB_0__::func_172(Global_1898092.f_26.f_5);
}

void func_372(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (bParam1 && !MISC::IS_BIT_SET(Global_40.f_6563.f_271, iVar0))
	{
		MISC::SET_BIT(&(Global_40.f_6563.f_271), iVar0);
		__LIB_0__::func_15(__LIB_0__::func_358(joaat("CAMP_REQUESTS_COMPLETED")), 1);
		if (Global_1425247.f_53)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 2;
		}
		MISSIONDATA::_0xE824CE7D13FCB300(__LIB_7__::func_371(iParam0), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_40.f_6563.f_271), iVar0);
	}
}

bool func_373(int iParam0)
{
	if (Global_1359453 != 8)
	{
		return false;
	}
	return __LIB_11__::func_125() == iParam0;
}

bool func_374(int iParam0)
{
	return (((__LIB_10__::func_650() || __LIB_10__::func_651()) || __LIB_0__::func_694(&(Global_1425247.f_3), iParam0, 2)) || __LIB_10__::func_652(iParam0));
}

float func_375(int iParam0)
{
	int iVar0;
	float fVar1;
	iVar0 = 1;
	fVar1 = ((IntToFloat(iVar0) * (0.33f * BUILTIN::POW((IntToFloat(iParam0) * 0.01f), 0.75f))) / 2f);
	if (__LIB_0__::func_2() != -1)
	{
		fVar1 = (fVar1 + IntToFloat(__LIB_12__::func_485()));
	}
	return __LIB_12__::func_128(fVar1, 2, 1);
}

int func_376(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_304.f_1))
	{
		if (!PED::_0x2D64376CF437363E(uParam0->f_304.f_1))
		{
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_304.f_2))
	{
		if (!ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_304.f_2))
		{
			return 0;
		}
		if (__LIB_4__::func_257(uParam0->f_304.f_2))
		{
			return 0;
		}
	}
	return 1;
}

bool func_377(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	__LIB_12__::func_497(uParam0);
	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = __LIB_9__::func_28(iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = 0;
	iVar1 = STREAMING::_0xD6E39DC5D46DF4AB(iVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	*uParam0 = iParam1;
	uParam0->f_1 = iVar0;
	uParam0->f_2 = iVar1;
	return true;
}

bool func_378()
{
	if (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) || __LIB_0__::func_71(Global_35)) || Global_1357549.f_1495 & 512 != 0) || Global_1935436.f_18.f_3)
	{
		return false;
	}
	return true;
}

void func_379()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (__LIB_1__::func_904(iVar0))
		{
			Global_1898147[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_380(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_904(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_30(iParam1))
	{
		return;
	}
	Global_1898147[iParam0] = iParam1;
}

bool func_381(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (!__LIB_1__::func_67(iParam0, &iVar0))
	{
		return false;
	}
	if (Global_1392915[iVar0 /*12*/].f_1 == 3 && Global_1900325.f_24 == 0)
	{
		Global_1392915.f_121[iVar0 /*20*/].f_15 = 1;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_15;
}

bool func_382(int iParam0)
{
	if (iParam0 == Global_35)
	{
		return true;
	}
	if (__LIB_0__::func_407(iParam0))
	{
		return true;
	}
	return false;
}

bool func_383(int iParam0)
{
	return __LIB_0__::func_75(&(Global_1900383.f_317.f_38[iParam0 /*3*/]));
}

void func_384(int iParam0, char* sParam1)
{
	char* sVar0;
	sVar0 = __LIB_0__::func_454(__LIB_0__::func_453(0));
	__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", __LIB_7__::func_659(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_385(int iParam0)
{
	var uVar0;
	return __LIB_3__::func_412(iParam0, &uVar0);
}

void func_386(var uParam0, int iParam1)
{
	uParam0->f_1 = (__LIB_0__::func_485() - iParam1);
	__LIB_0__::func_7(uParam0, 1);
	__LIB_0__::func_8(uParam0, 2);
	uParam0->f_2 = 0;
}

void func_387(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	__LIB_0__::func_142(iParam0);
	PED::CLEAR_PED_WETNESS(iParam0);
	PED::_0xA7A806677F8DE138(iParam0);
	PED::_0xA064BBABB064446F(iParam0);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::_0x9184788BFF1EDAD7(iParam0, 0f);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, iVar0, "ALL");
		iVar0++;
	}
}

int func_388(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_14__::func_132(iParam0, iParam1);
	return __LIB_10__::func_655(iVar0);
}

int func_389(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = __LIB_16__::func_28(iVar0);
		if (__LIB_1__::func_105(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_390(int iParam0)
{
	return __LIB_1__::func_935(iParam0, 32768);
}

void func_391(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	__LIB_8__::func_7(iParam0, &(Global_40.f_9096[iParam0 /*12*/].f_2), iParam1, iParam2, iParam3, iParam4, bParam5);
}

bool func_392(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return false;
	}
	if (iParam1 > 0 && iParam1 < __LIB_8__::func_80(iParam0))
	{
		return true;
	}
	return false;
}

int func_393(var uParam0)
{
	struct<5> Var0;
	int iVar5;
	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = uParam0;
	if (__LIB_0__::func_412(Var0, 2065727156, &iVar5, 0))
	{
		return __LIB_0__::func_621(iVar5);
	}
	return -1;
}

void func_394(int iParam0, int iParam1, int iParam2)
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
	__LIB_7__::func_380(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", __LIB_0__::func_658(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

bool func_395()
{
	int iVar0;
	iVar0 = __LIB_0__::func_12();
	if (ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("PLAYER_ZERO"))
	{
		if ((((__LIB_3__::func_222(120) && iVar0 != 120) || (__LIB_3__::func_222(126) && iVar0 != 126)) || (__LIB_3__::func_222(115) && iVar0 != 115)) || (__LIB_3__::func_222(38) && iVar0 != 38))
		{
			return true;
		}
	}
	if (((((((__LIB_3__::func_222(105) && iVar0 != 105) || (__LIB_3__::func_222(76) && iVar0 != 76)) || (__LIB_3__::func_222(69) && iVar0 != 69)) || (__LIB_3__::func_222(26) && iVar0 != 26)) || (__LIB_3__::func_222(5) && iVar0 != 5)) || (__LIB_3__::func_222(78) && iVar0 != 78)) || (__LIB_3__::func_222(92) && iVar0 != 92))
	{
		return true;
	}
	return false;
}

int func_396(int iParam0)
{
	vector3 vVar0;
	vVar0 = { __LIB_12__::func_498(iParam0) };
	return __LIB_12__::func_499(vVar0);
}

bool func_397(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	fVar5 = (0.25f * 2f);
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return false;
	}
	vParam1.f_2 = (vParam1.z + 0.9f);
	__LIB_1__::func_216(&iVar2, vParam1, 0f, 0f, 0f, fVar5, fVar5, 1.8f);
	iVar3 = ENTITY::_0x886171A12F400B89(iVar2, iVar1, 1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar0 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar1));
		if (__LIB_1__::func_286(iParam0, iVar0) || iParam6 == 1)
		{
			if (iParam5 == 0 || (iParam5 == 1 && !PED::IS_PED_A_PLAYER(iVar0)))
			{
				__LIB_0__::func_172(iVar2);
				ITEMSET::_CLEAR_ITEMSET(iVar1);
				ITEMSET::DESTROY_ITEMSET(iVar1);
				*iParam4 = iVar0;
				return true;
			}
		}
		iVar4++;
	}
	__LIB_0__::func_172(iVar2);
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return false;
}

int func_398(int iParam0)
{
	if (__LIB_0__::func_700(iParam0) == 2)
	{
		if (__LIB_0__::func_76(iParam0) == 3)
		{
			return __LIB_0__::func_872(iParam0);
		}
	}
	return -1;
}

void func_399(var uParam0)
{
	int iVar0;
	__LIB_0__::func_610(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { __LIB_0__::func_217() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_23[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_27 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		uParam0->f_28[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		uParam0->f_42[iVar0] = 0;
		iVar0++;
	}
}

void func_400(int iParam0)
{
	__LIB_0__::func_289(Global_40.f_6563[iParam0 /*27*/].f_3, 512, 0);
	__LIB_0__::func_289(Global_40.f_6563[iParam0 /*27*/].f_3, 1024, 0);
}

int func_401(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	if (!__LIB_1__::func_76(iParam0))
	{
		return 0;
	}
	if (!__LIB_1__::func_88(iParam0, iParam5, &vVar0))
	{
		return 0;
	}
	*iParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam8 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*iParam6 + Vector(0.1f, 0f, 0f), &uVar4, false))
		{
			iParam6->f_2 = uVar4;
		}
	}
	if (!__LIB_7__::func_697(iParam0, iParam5, &fVar3))
	{
		return 0;
	}
	*fParam7 = (fParam4 + fVar3);
	if (*fParam7 > 360f)
	{
		*fParam7 = (*fParam7 - 360f);
	}
	if (*fParam7 < -360f)
	{
		*fParam7 = (*fParam7 + 360f);
	}
	return 1;
}

bool func_402(int iParam0)
{
	var uVar0;
	if (iParam0 == -1)
	{
		return false;
	}
	__LIB_16__::func_7();
	Global_1913814.f_204.f_2 = 834733495;
	Global_1913814.f_204.f_3 = __LIB_16__::func_8(iParam0);
	if (!DATAFILE::_DATAFILE_GET_BOOL(&uVar0, &(Global_1913814.f_204)))
	{
		return false;
	}
	return uVar0;
}

int func_403(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<10> Var0;
	Var0.f_9 = -1591664384;
	if (__LIB_0__::func_814(Param0, iParam4, &Var0, bParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_404(int iParam0, int iParam1, bool bParam2)
{
	struct<10> Var0;
	var uVar22;
	Var0.f_9 = -1591664384;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_280(iParam0, &uVar22, &Var0, iParam1))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (__LIB_1__::func_429(iParam0, &Var0, iParam1))
		{
			return 0;
		}
	}
	return 1;
}

bool func_405(int iParam0)
{
	if (iParam0 == 6)
	{
		if (__LIB_10__::func_659() || (__LIB_10__::func_660() && __LIB_0__::func_181()))
		{
			return false;
		}
		else if ((!__LIB_0__::func_770(6, 16) && !__LIB_0__::func_770(6, 32)) && __LIB_0__::func_181())
		{
			return false;
		}
		else if (__LIB_4__::func_54(6, 16384))
		{
			return false;
		}
		else if (__LIB_0__::func_770(6, 8))
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

void func_406(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	__LIB_0__::func_155(32768);
	__LIB_0__::func_860(1108822547);
	Global_1946804.f_2776.f_1 = uParam0;
	Global_1946804.f_2776.f_3[0] = uParam1;
	Global_1946804.f_2776.f_3[1] = uParam2;
	Global_1946804.f_2776.f_3[2] = uParam3;
	Global_1946804.f_2776 = joaat("HATS");
	if (iParam4 != 0)
	{
		Global_1946804.f_2776.f_8 = iParam4;
		Global_1946804.f_2776.f_9 = uParam5;
		Global_1946804.f_2776.f_10 = uParam6;
		Global_1946804.f_2776.f_11 = uParam7;
	}
	Global_1946804.f_2776.f_12 = 1;
	Global_1946804.f_2776.f_13 = PED::_0x3FCBB5FCFD968698(Global_1946804.f_2776.f_1, Global_1946804.f_2776.f_3[0], Global_1946804.f_2776.f_3[1], Global_1946804.f_2776.f_3[2], 0);
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_NEWSPAPER_ED_01"):
			if (__LIB_0__::func_895(__LIB_5__::func_436(3)) == 0)
			{
				return joaat("NEWSPAPERS/NEWSPAPER_BL_01");
			}
			else
			{
				return -2100835330;
			}
			break;
		case joaat("DOCUMENT_NEWSPAPER_ED_02"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_02");
		case joaat("DOCUMENT_NEWSPAPER_ED_03"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_03");
		case joaat("DOCUMENT_NEWSPAPER_ED_04"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_04");
		case joaat("DOCUMENT_NEWSPAPER_ED_05"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_05");
		case joaat("DOCUMENT_NEWSPAPER_ED_06"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_06");
		case joaat("DOCUMENT_NEWSPAPER_ED_07"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_07");
		case joaat("DOCUMENT_NEWSPAPER_ED_08"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_08");
		case joaat("DOCUMENT_NEWSPAPER_ED_09"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_09");
		case joaat("DOCUMENT_NEWSPAPER_ED_10"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_10");
		case joaat("DOCUMENT_NEWSPAPER_ED_11"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_11");
		case joaat("DOCUMENT_NEWSPAPER_ED_12"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_12");
		case joaat("DOCUMENT_NEWSPAPER_ED_13"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_13");
		case joaat("DOCUMENT_NEWSPAPER_ED_14"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_14");
		case joaat("DOCUMENT_NEWSPAPER_ED_01_NH"):
			if (__LIB_0__::func_895(__LIB_5__::func_436(3)) == 0)
			{
				return joaat("NEWSPAPERS/NEWSPAPER_NH_01");
			}
			else
			{
				return 1264044047;
			}
			break;
		case joaat("DOCUMENT_NEWSPAPER_ED_02_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_02");
		case joaat("DOCUMENT_NEWSPAPER_ED_03_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_03");
		case joaat("DOCUMENT_NEWSPAPER_ED_04_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_04");
		case joaat("DOCUMENT_NEWSPAPER_ED_05_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_05");
		case joaat("DOCUMENT_NEWSPAPER_ED_06_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_06");
		case joaat("DOCUMENT_NEWSPAPER_ED_07_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_07");
		case joaat("DOCUMENT_NEWSPAPER_ED_08_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_08");
		case joaat("DOCUMENT_NEWSPAPER_ED_09_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_09");
		case joaat("DOCUMENT_NEWSPAPER_ED_10_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_10");
		case joaat("DOCUMENT_NEWSPAPER_ED_11_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_11");
		case joaat("DOCUMENT_NEWSPAPER_ED_12_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_12");
		case joaat("DOCUMENT_NEWSPAPER_ED_13_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_13");
		case joaat("DOCUMENT_NEWSPAPER_ED_14_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_14");
		case joaat("DOCUMENT_NEWSPAPER_ED_01_SD"):
			if (__LIB_0__::func_895(__LIB_5__::func_436(3)) == 0)
			{
				return joaat("NEWSPAPERS/NEWSPAPER_SD_01");
			}
			else
			{
				return -2099454688;
			}
			break;
		case joaat("DOCUMENT_NEWSPAPER_ED_02_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_02");
		case joaat("DOCUMENT_NEWSPAPER_ED_03_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_03");
		case joaat("DOCUMENT_NEWSPAPER_ED_04_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_04");
		case joaat("DOCUMENT_NEWSPAPER_ED_05_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_05");
		case joaat("DOCUMENT_NEWSPAPER_ED_06_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_06");
		case joaat("DOCUMENT_NEWSPAPER_ED_07_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_07");
		case joaat("DOCUMENT_NEWSPAPER_ED_08_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_08");
		case joaat("DOCUMENT_NEWSPAPER_ED_09_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_09");
		case joaat("DOCUMENT_NEWSPAPER_ED_10_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_10");
		case joaat("DOCUMENT_NEWSPAPER_ED_11_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_11");
		case joaat("DOCUMENT_NEWSPAPER_ED_12_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_12");
		case joaat("DOCUMENT_NEWSPAPER_ED_13_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_13");
		case joaat("DOCUMENT_NEWSPAPER_ED_14_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_14");
	}
	return -1;
}

int func_408()
{
	return __LIB_0__::func_909(Global_1347343.f_2);
}

void func_409(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	if (iParam1 == 2 || iParam1 == 1)
	{
		return;
	}
	iVar1 = __LIB_1__::func_915(iParam1);
	if (iVar1 >= 15)
	{
		return;
	}
	if (__LIB_14__::func_702(iParam0))
	{
		bParam2 = false;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = Global_1914319.f_3[iParam1 /*446*/].f_317[iVar0 /*6*/];
		if (__LIB_0__::func_30(iVar2))
		{
			__LIB_0__::func_68(iVar2, 0, 0);
			if (!__LIB_0__::func_724(iVar2))
			{
				return;
			}
			__LIB_1__::func_948(iVar2, 1, 0f, 0, bParam2, 0, 0, 0);
			if (!bParam2)
			{
				OBJECT::_0x7F458B543006C8FE(iVar2, 16);
			}
			else
			{
				OBJECT::_0x7F458B543006C8FE(iVar2, 0);
			}
		}
		iVar0++;
	}
}

void func_410(int iParam0, bool bParam1)
{
	var uVar0[2];
	int iVar3[4];
	int iVar8;
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
	{
		return;
	}
	iVar3[0] = joaat("P_LANTERN05X");
	iVar3[1] = joaat("P_LANTERNSTICK09X");
	iVar3[2] = joaat("P_CANDLELAMP01X");
	iVar3[3] = joaat("P_LANTERN08X");
	iVar8 = __LIB_3__::func_360(&uVar0, &iVar3, Global_1914319.f_3[iParam0 /*446*/].f_25, 1);
	if (iVar8 > 0)
	{
		if (bParam1)
		{
			if (!Global_1914319.f_18994)
			{
				if (fLocal_7 <= 0.025f)
				{
					Global_1914319.f_18994 = 1;
					OBJECT::_0xF49574E2332A8F06(uVar0[0], 0.025f);
					__LIB_16__::func_38(iParam0);
				}
				else
				{
					OBJECT::_0xF49574E2332A8F06(uVar0[0], fLocal_7);
					fLocal_7 = (fLocal_7 - 0.025f);
				}
			}
		}
		else
		{
			fLocal_7 = 1f;
			OBJECT::_0xF49574E2332A8F06(uVar0[0], fLocal_7);
			__LIB_11__::func_568(iParam0);
			Global_1914319.f_18994 = 0;
		}
	}
}

bool func_411(int iParam0, int iParam1)
{
	bool bVar0;
	bVar0 = Global_1935630.f_11;
	if (__LIB_1__::func_987(iParam0) == 1)
	{
		return true;
	}
	if (__LIB_3__::func_235(iParam0, 16384))
	{
		if (__LIB_11__::func_132())
		{
			return false;
		}
	}
	if (iParam1 & 128 != 0)
	{
		if (bVar0)
		{
			return false;
		}
		if (__LIB_3__::func_251(Global_36))
		{
			return false;
		}
	}
	if (iParam1 & -2147483648 != 0)
	{
		if (__LIB_11__::func_142(32) > 0)
		{
			return false;
		}
	}
	if (iParam1 & 32 != 0)
	{
		if (__LIB_11__::func_142(-2147483648) > 0)
		{
			return false;
		}
	}
	if (!__LIB_3__::func_235(iParam0, 1048576))
	{
		if (__LIB_1__::func_995(1))
		{
			return false;
		}
	}
	if ((((iParam1 & 4194304 != 0 && Global_17504.f_5 != -1) && __LIB_11__::func_143()) && !__LIB_11__::func_144()) && !__LIB_11__::func_145())
	{
		if (__LIB_1__::func_85(Global_17504.f_5, 4194304))
		{
			return false;
		}
	}
	if ((((iParam1 & 536870912 != 0 && Global_17504.f_6 != -1) && __LIB_11__::func_146()) && !__LIB_11__::func_144()) && !__LIB_11__::func_145())
	{
		if (__LIB_1__::func_85(Global_17504.f_6, 536870912))
		{
			return false;
		}
	}
	if (__LIB_0__::func_181())
	{
		if (iParam1 & 32768 != 0)
		{
			return false;
		}
	}
	else if (iParam1 & 65536 != 0)
	{
		return false;
	}
	return true;
}

void func_412(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	switch (__LIB_3__::func_253(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*uParam1 = 225f;
				*uParam2 = 6400f;
			}
			else
			{
				*uParam1 = 225f;
				*uParam2 = 4900f;
			}
			*uParam3 = 2500;
			break;
		case 1:
			if (!__LIB_1__::func_85(iParam0, 1))
			{
				if (__LIB_3__::func_235(iParam0, 2))
				{
				}
			}
			__LIB_11__::func_147(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = (*uParam1 * *uParam1);
			*uParam2 = (*uParam2 * *uParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 2:
			__LIB_11__::func_148(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = (*uParam1 * *uParam1);
			*uParam2 = (*uParam2 * *uParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 3:
			__LIB_11__::func_148(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = 7f;
			*uParam2 = (*uParam2 * *uParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		default:
			break;
	}
	if (__LIB_3__::func_236(iParam0))
	{
		*uParam2 = 40000f;
	}
}

bool func_413(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11)
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

void func_414(int iParam0, int iParam1, int iParam2)
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
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return;
	}
	if (!__LIB_7__::func_599(iParam1))
	{
		return;
	}
	iVar0 = __LIB_7__::func_650(iParam1);
	iVar1 = __LIB_6__::func_680(iVar0, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] = (Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] + iParam2);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] = __LIB_0__::func_309(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1], 0, 10);
}

void func_415(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			__LIB_7__::func_380(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			__LIB_7__::func_380(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, __LIB_0__::func_426(__LIB_0__::func_354(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			__LIB_7__::func_380(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			__LIB_7__::func_380(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
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
			__LIB_7__::func_380(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			__LIB_7__::func_380(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
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
			__LIB_7__::func_380(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			__LIB_7__::func_380(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			__LIB_7__::func_380(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			__LIB_7__::func_380(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_416(int iParam0, int iParam1)
{
	if ((((LAW::_0x40851BCC33ACD9AB(iParam0) && __LIB_1__::func_898() != 8) && !__LIB_0__::func_296(0, 0, 1)) && !__LIB_10__::func_975(iParam0, iParam1)) && !__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return true;
	}
	return false;
}

int func_417(vector3 vParam0, float fParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	fVar0 = 2.147484E+09f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 500)
	{
		if (!__LIB_9__::func_506(iVar2))
		{
		}
		else
		{
			vVar3 = { __LIB_9__::func_525(iVar2) };
			vVar6 = { vParam0 };
			fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar6, false);
			if (fVar9 > fParam3)
			{
			}
			else if (!__LIB_9__::func_547(iVar2))
			{
			}
			else if (fVar9 < fVar0)
			{
				fVar0 = fVar9;
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_418(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	return __LIB_12__::func_175(iParam0, &uVar0, bParam1, iParam2, iParam3);
}

bool func_419(int iParam0)
{
	struct<5> Var0;
	Var0 = { __LIB_1__::func_615(iParam0, 0, 1) };
	return __LIB_0__::func_788(iParam0, 0) != __LIB_0__::func_936(iParam0, &Var0, 0, 0);
}

int func_420(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !__LIB_1__::func_114(iParam0, iParam1, 1))
	{
		return 0;
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
		return 1;
	}
	return 0;
}

void func_421(int iParam0)
{
	char cVar0[64];
	if (Global_1347702[iParam0 /*49*/].f_20 <= 0f)
	{
		return;
	}
	MemCopy(&cVar0, {Global_1347702[iParam0 /*49*/].f_3}, 8);
	StringConCat(&cVar0, ".VolAmbScriptRestrict", 64);
	if (iParam0 == 91)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1347702[iParam0 /*49*/].f_41))
		{
			Global_1347702[iParam0 /*49*/].f_41 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1526.396f, -1091.008f, -6.724f, 0f, 0f, 25f, 138.807f, 280.237f, 260.181f, &cVar0);
			__LIB_5__::func_209(Global_1347702[iParam0 /*49*/].f_41, &cVar0, 1, 0, 0, 0, -1f);
			__LIB_4__::func_112(Global_1347702[iParam0 /*49*/].f_41);
			PATHFIND::_0xC1799FAFD2FDF52B(Global_1347702[iParam0 /*49*/].f_41, 0, 0, 0);
		}
	}
	else if (iParam0 == 129)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Global_1347702[iParam0 /*49*/].f_41))
		{
			Global_1347702[iParam0 /*49*/].f_41 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(__LIB_1__::func_440(iParam0), 0f, 0f, 0f, Global_1347702[iParam0 /*49*/].f_20, Global_1347702[iParam0 /*49*/].f_20, Global_1347702[iParam0 /*49*/].f_20, &cVar0);
			__LIB_5__::func_209(Global_1347702[iParam0 /*49*/].f_41, &cVar0, 1, 0, 0, 0, -1f);
			__LIB_4__::func_112(Global_1347702[iParam0 /*49*/].f_41);
			PATHFIND::_0xC1799FAFD2FDF52B(Global_1347702[iParam0 /*49*/].f_41, 0, 0, 0);
		}
	}
	else if (!VOLUME::_DOES_VOLUME_EXIST(Global_1347702[iParam0 /*49*/].f_41))
	{
		Global_1347702[iParam0 /*49*/].f_41 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(__LIB_1__::func_440(iParam0), 0f, 0f, 0f, Global_1347702[iParam0 /*49*/].f_20, Global_1347702[iParam0 /*49*/].f_20, Global_1347702[iParam0 /*49*/].f_20, &cVar0);
		__LIB_5__::func_209(Global_1347702[iParam0 /*49*/].f_41, &cVar0, 1, 0, 0, 0, -1f);
		__LIB_4__::func_112(Global_1347702[iParam0 /*49*/].f_41);
	}
}

bool func_422(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar2 = __LIB_1__::func_915(iParam0);
	if (iVar2 >= 15)
	{
		return false;
	}
	if (__LIB_1__::func_992(Global_35, Global_1914319.f_3[iParam0 /*446*/].f_11, 1) > 900f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar3 = Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/];
		if (__LIB_0__::func_30(iVar3) && __LIB_0__::func_724(iVar3))
		{
			bVar1 = ((bParam2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iVar3) == 2) || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iVar3) == 1);
			if (bVar1)
			{
				if (__LIB_0__::func_86(Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_1))
				{
					Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_1 = { __LIB_9__::func_659(iVar3) };
				}
				if (__LIB_1__::func_992(Global_35, Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_1, 1) < (fParam1 * fParam1))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_423(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LO_DUTCH");
		case 1:
			return joaat("LO_JOHN");
		case 2:
			return joaat("LO_JAVIER");
		case 3:
			return joaat("LO_BILL");
		case 4:
			return joaat("LO_UNCLE");
		case 5:
			return joaat("LO_HOSEA");
		case 6:
			return joaat("LO_MICAH");
		case 7:
			if (__LIB_0__::func_181())
			{
				return joaat("LO_CHARLES_ES");
			}
			else
			{
				return joaat("LO_CHARLES");
			}
			break;
		case 8:
			return joaat("LO_SEAN");
		case 9:
			return joaat("LO_LENNY");
		case 10:
			if (__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1))
			{
				return joaat("LO_KIERAN");
			}
			break;
		case 11:
			if (__LIB_1__::func_25(Global_1347702[134 /*49*/].f_15, 1))
			{
				return joaat("LO_SADIE");
			}
			break;
		case 24:
			return joaat("LO_CLEET");
		case 25:
			return joaat("LO_JOE");
		case 26:
			return joaat("LO_EAGLE_FLIES");
	}
	return joaat("LOADOUT_DEFAULT");
}

void func_424()
{
	struct<10> Var0;
	struct<16> Var10;
	if (__LIB_0__::func_313())
	{
		MISC::CLEAR_BIT(&Global_1357505, 8);
		ANIMSCENE::_0xCDCD7B2D49AEE73A(1);
		GRAPHICS::_0xEC3D8C228FE553D7(0);
		Global_1357503 = 1;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "camera_photomode", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 0;
		__LIB_4__::func_709(Var10, 0);
	}
}

void func_425(int iParam0, int iParam1, int iParam2)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (__LIB_16__::func_29(iParam1) != -1)
	{
		if (!VOLUME::_0xEE1D6FF54CAF7714(Global_1914319.f_3[iParam0 /*446*/].f_25, __LIB_0__::func_120(__LIB_16__::func_29(iParam1))))
		{
			__LIB_2__::func_812(__LIB_16__::func_29(Global_1914319.f_3[iParam0 /*446*/].f_10), Global_1914319.f_3[iParam0 /*446*/].f_25, 0);
		}
		VOLUME::_0x53D05D60E5F5B40C(Global_1914319.f_3[iParam0 /*446*/].f_25, 3, iParam2, __LIB_0__::func_120(__LIB_16__::func_29(iParam1)));
	}
}

int func_426(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_6__::func_364(iVar0, 1, iParam4))
		{
			if (__LIB_0__::func_94(__LIB_0__::func_271(iVar0), vParam0, 1) < fParam3)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_427(int iParam0)
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
	if (!__LIB_1__::func_703(iParam0, 856287005, &iVar13, &uVar9, &uVar4, 1, 0))
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

bool func_428(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_293(30))
	{
		if (__LIB_1__::func_185(15) || __LIB_2__::func_774(15))
		{
			iVar0 = 1;
		}
		else if ((iParam0 == 76 || iParam0 == 63) || iParam0 == 35)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_429(int iParam0)
{
	if (!__LIB_0__::func_28())
	{
		return true;
	}
	if (!__LIB_1__::func_185(3))
	{
		return 7 == iParam0;
	}
	return true;
}

void func_430(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (__LIB_0__::func_20(iVar0))
		{
			if (__LIB_10__::func_29(__LIB_5__::func_235(iVar0, 1, 1)) == iParam0)
			{
				__LIB_5__::func_496(iVar0, 0);
			}
		}
		iVar0++;
	}
}

void func_431(int iParam0, bool bParam1, int iParam2)
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
		__LIB_12__::func_189(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 6);
		}
	}
}

int func_432(int iParam0)
{
	if (__LIB_7__::func_907(2, 134217728))
	{
		return 1;
	}
	if (__LIB_10__::func_682(2))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			if (__LIB_7__::func_907(2, 128))
			{
				return 1;
			}
			break;
		case 2:
			if (__LIB_8__::func_547())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_433()
{
	int iVar0;
	iVar0 = 22;
	if (Global_1347702[iVar0 /*49*/].f_36 == joaat("BLIP_RC"))
	{
		if (__LIB_8__::func_791(622))
		{
			Global_1347702[iVar0 /*49*/].f_36 = joaat("BLIP_SCM_DORKINS");
			__LIB_0__::func_7(&(Global_1347702[iVar0 /*49*/].f_13), 1);
			__LIB_9__::func_830(iVar0, 0);
		}
	}
}

void func_434()
{
	int iVar0;
	iVar0 = 43;
	if (Global_1347702[iVar0 /*49*/].f_36 == joaat("BLIP_RC"))
	{
		if (__LIB_1__::func_707(joaat("DOCUMENT_BUSINESS_CARD_EXOTICS"), 1, 0))
		{
			Global_1347702[iVar0 /*49*/].f_36 = joaat("BLIP_RC_ALGERNON_WASP");
			__LIB_0__::func_7(&(Global_1347702[iVar0 /*49*/].f_13), 1);
			__LIB_9__::func_830(iVar0, 0);
		}
	}
}

void func_435()
{
	int iVar0;
	int iVar1;
	iVar0 = 96;
	if (Global_1347702[iVar0 /*49*/].f_14 & 2 != 0)
	{
		return;
	}
	else if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iVar0 /*49*/].f_42, false))
	{
		return;
	}
	iVar1 = 1026;
	if (__LIB_2__::func_117(iVar1))
	{
		if (Global_1347702[iVar0 /*49*/].f_13 & 65536 != 0)
		{
			__LIB_0__::func_8(&(Global_1347702[iVar0 /*49*/].f_13), 65536);
			__LIB_9__::func_830(iVar0, 0);
		}
	}
	else if (Global_1347702[iVar0 /*49*/].f_13 & 65536 == 0)
	{
		__LIB_0__::func_7(&(Global_1347702[iVar0 /*49*/].f_13), 65536);
		__LIB_9__::func_830(iVar0, 0);
	}
}

void func_436(int iParam0, bool bParam1, bool bParam2)
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
				__LIB_14__::func_136(0);
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

bool func_437(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	__LIB_12__::func_196(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630.f_12 || *uParam0)
	{
		return false;
	}
	if (__LIB_0__::func_2() == 0)
	{
		if (Global_1935496.f_7 & 131072 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1 == 0)
	{
		if (Global_1935496.f_7 & 1024 != 0)
		{
			return false;
		}
	}
	if (Global_1935630.f_22)
	{
		return false;
	}
	if (iParam3 & 2 == 0)
	{
		if (Global_1935496.f_7 & 32 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4 == 0)
	{
		if (Global_1935496.f_7 & 4096 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8 == 0)
	{
		if (Global_1935496.f_7 & 512 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = __LIB_9__::func_186(bParam2);
			uParam0->f_3 = 1;
		}
		if (!uParam0->f_2)
		{
			return false;
		}
	}
	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = __LIB_7__::func_807(bParam2);
			uParam0->f_5 = 1;
		}
		if (!uParam0->f_4)
		{
			return false;
		}
	}
	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = __LIB_7__::func_808(bParam2, iParam3, 1);
			uParam0->f_7 = 1;
		}
		if (!uParam0->f_6)
		{
			return false;
		}
	}
	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = __LIB_0__::func_163(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if ((uParam0->f_10 || uParam0->f_12) || uParam0->f_8)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = __LIB_0__::func_163(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = PED::IS_PED_SWIMMING(Global_1935630.f_40);
				uParam0->f_15 = 1;
			}
			if (uParam0->f_14)
			{
				return false;
			}
		}
	}
	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = __LIB_0__::func_396(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = __LIB_7__::func_809(Global_1935630.f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						__LIB_0__::func_45("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
					}
					return false;
				}
			}
		}
	}
	if (iParam3 & 256 == 0)
	{
		if (Global_1935496.f_7 & 8192 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496.f_7 & 65536 != 0)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 2048 == 0)
	{
		if (Global_1935496.f_7 & 32768 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4096 == 0)
	{
		if (Global_1935496.f_7 & 16384 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8192 == 0)
	{
		if (Global_1935496.f_7 & 16 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 16384 == 0)
	{
		if (Global_1935496.f_7 & 256 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = __LIB_3__::func_63();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				__LIB_0__::func_45("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 131072 == 0)
	{
		if (Global_1935496.f_7 & 524288 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 65536 == 0)
	{
		if (Global_1935496.f_7 & 262144 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 524288 == 0)
	{
		if (Global_1935496.f_7 & 2097152 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 1048576 == 0)
	{
		if (Global_1935496.f_7 & 8388608 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 2097152 == 0)
	{
		if (Global_1935496.f_7 & 33554432 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4194304 == 0)
	{
		if (Global_1935496.f_7 & 67108864 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 16777216 == 0)
	{
		if (Global_1935496.f_7 & 134217728 == 0)
		{
			return false;
		}
	}
	if (Global_1935496.f_7 & 17825988 != 0)
	{
		return false;
	}
	return true;
}

bool func_438(int iParam0)
{
	struct<2> Var0;
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1347702[iParam0 /*49*/].f_4)))
	{
		SCRIPTS::REQUEST_SCRIPT(&(Global_1347702[iParam0 /*49*/].f_4));
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1347702[iParam0 /*49*/].f_4)))
		{
			Var0 = iParam0;
			Var0.f_1 = __LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 256);
			Global_1347702[iParam0 /*49*/].f_42 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Global_1347702[iParam0 /*49*/].f_4), &Var0, 2, 7300);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1347702[iParam0 /*49*/].f_4));
			__LIB_1__::func_722(Global_1347702[iParam0 /*49*/].f_15);
			return true;
		}
	}
	return false;
}

void func_439()
{
	int iVar0;
	int iVar1;
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
						iVar1 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2;
						if (__LIB_0__::func_83(iVar1))
						{
							__LIB_9__::func_983(iVar1, 0);
							__LIB_9__::func_356(iVar1, -1, 0, 1, 0, 0, 0);
							if (MAP::DOES_BLIP_EXIST(Global_1835011[iVar1 /*74*/].f_27))
							{
								MAP::REMOVE_BLIP(&(Global_1835011[iVar1 /*74*/].f_27));
							}
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_440(int iParam0)
{
	return iParam0->f_10;
}

void func_441(int iParam0)
{
	iParam0->f_10 = 0;
}

Vector3 func_442(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -779.4891f, -1362.618f, 45.14579f;
		case 1:
		case 2:
			return 2696.776f, -1353.734f, 48.56572f;
		case 0:
			return 2546.481f, -1299.015f, 48.74436f;
		case 3:
			return -348.3176f, 698.5706f, 117.706f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_443(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1 /*10*/]))
		{
			if (!__LIB_1__::func_205((*uParam0)[iVar1 /*10*/], iParam1, 1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar1 /*10*/]);
			}
			else
			{
				PED::DELETE_PED(uParam0[iVar1 /*10*/]);
			}
		}
		iVar1++;
	}
}

void func_444(int iParam0)
{
	iParam0->f_10 = 1;
}

bool func_445()
{
	int iVar0;
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_TYPE(iVar0) == 1)
	{
		return true;
	}
	return false;
}

char* func_446(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE_CLOSED";
		case 1:
			return "PBL_OPEN_SLOW";
		case 2:
			return "PBL_CLOSE_SLOW";
		case 3:
			return "PBL_IDLE_OPEN";
		default:
			break;
	}
	return "FAIL";
}

char* func_447()
{
	return "script@shows@curtains@curtains";
}

char* func_448()
{
	return "CURTAIN";
}

void func_449(int iParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0, sParam1);
	}
}

int func_450(int iParam0)
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
			return 0;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
			return 2;
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			return 4;
	}
	return -1;
}

bool func_451(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
		case 8:
			return true;
		case 4:
			switch (iParam1)
			{
				case 11:
				case 13:
				case 19:
					return false;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 6:
				case 8:
				case 10:
				case 14:
				case 15:
				case 17:
					return false;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 11:
				case 12:
				case 13:
				case 14:
				case 16:
				case 18:
				case 19:
					return false;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 10:
				case 11:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
					return false;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 10:
				case 11:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
					return false;
			}
			break;
	}
	return true;
}

char* func_452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_shows@show_audience@ig1_reaction_loops@t03_enthralled_waiting";
		case 1:
			return "script_shows@show_audience@ig2_reaction_oneshot";
		case 2:
			return "script_shows@show_audience@ig1_reaction_loops@t02_regular_rowdy";
		case 3:
			return "script_shows@show_audience@ig1_reaction_loops@t04_musical";
		case 4:
			return "script_shows@show_audience@ig1_reaction_loops@t05_dancing";
		case 5:
			return "script_shows@show_audience@ig1_reaction_loops@t06_comedic_displeased";
		case 6:
			return "script_shows@show_audience@ig1_reaction_loops@t07_suspense_applause";
		case 7:
			return "script_shows@show_audience@ig1_reaction_loops@t08_applause_horrified";
		case 8:
			return "script_shows@show_audience@ig1_reaction_loops@t09_blocked";
		case 9:
			return "script_shows@escapeartist@escapeartist_react";
		case 10:
			return "script_shows@show_audience@ig5_hatfire_react@t01_hatfire_right";
		case 11:
			return "script_shows@show_audience@ig5_hatfire_react@t05_hatfire_front";
		default:
			break;
	}
	return "script_shows@show_audience@ig1_reaction_loops@t03_enthralled_waiting";
}

bool func_453(var uParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		uParam0->f_1 = 1;
		return true;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	return false;
}

int func_454(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 56;
		case 1:
		case 2:
			return 22;
		case 3:
			return 10;
		case 4:
			return 23;
	}
	return 0;
}

int func_455(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("NBX_CIVILIANS");
		case 1:
			return joaat("NBX_CIVILIANS");
		case 3:
			return joaat("VAL_CIVILIANS");
		case 4:
			return joaat("BLA_UPPERCLASS");
	}
	return joaat("NBX_CIVILIANS");
}

int func_456(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return 2;
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return 2;
				case 17:
					return 1;
				case 18:
					return 1;
				case 20:
					return 2;
				case 31:
					return 2;
				case 32:
					return 2;
				case 39:
					return 2;
				case 53:
				case 54:
				case 55:
					return 2;
				default:
					break;
			}
			break;
		case 3:
			break;
	}
	return 0;
}

Vector3 func_457(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2541.954f, -1303.652f, 47.51162f;
				case 1:
					return 2542.625f, -1303.628f, 47.50835f;
				case 2:
					return 2543.253f, -1303.504f, 47.51194f;
				case 3:
					return 2543.914f, -1303.447f, 47.50978f;
				case 4:
					return 2544.554f, -1303.35f, 47.51124f;
				case 5:
					return 2545.212f, -1303.286f, 47.48675f;
				case 6:
					return 2540.851f, -1302.391f, 47.83032f;
				case 7:
					return 2541.405f, -1302.162f, 47.83151f;
				case 8:
					return 2542.039f, -1301.995f, 47.83165f;
				case 9:
					return 2542.659f, -1301.895f, 47.83114f;
				case 10:
					return 2543.281f, -1301.785f, 47.83141f;
				case 11:
					return 2543.887f, -1301.719f, 47.8308f;
				case 12:
					return 2544.536f, -1301.635f, 47.831f;
				case 13:
					return 2545.165f, -1301.591f, 47.81311f;
				case 14:
					return 2540.816f, -1300.638f, 48.12306f;
				case 15:
					return 2541.43f, -1300.473f, 48.12244f;
				case 16:
					return 2542.034f, -1300.312f, 48.12096f;
				case 17:
					return 2542.644f, -1300.153f, 48.12228f;
				case 18:
					return 2543.269f, -1300.039f, 48.12248f;
				case 19:
					return 2543.896f, -1299.926f, 48.12423f;
				case 20:
					return 2545.169f, -1299.818f, 48.10023f;
				case 21:
					return 2540.844f, -1298.88f, 48.39516f;
				case 22:
					return 2541.442f, -1298.742f, 48.39409f;
				case 23:
					return 2542.07f, -1298.587f, 48.39284f;
				case 24:
					return 2543.302f, -1298.275f, 48.39411f;
				case 25:
					return 2543.898f, -1298.179f, 48.39465f;
				case 26:
					return 2544.536f, -1298.092f, 48.39633f;
				case 27:
					return 2550.958f, -1303.615f, 47.48922f;
				case 28:
					return 2550.302f, -1303.543f, 47.48922f;
				case 29:
					return 2549.651f, -1303.483f, 47.48394f;
				case 30:
					return 2549.005f, -1303.43f, 47.48394f;
				case 31:
					return 2548.356f, -1303.367f, 47.48394f;
				case 32:
					return 2547.713f, -1303.341f, 47.48394f;
				case 33:
					return 2552.097f, -1302.355f, 47.80622f;
				case 34:
					return 2551.509f, -1302.193f, 47.80622f;
				case 35:
					return 2550.899f, -1302.034f, 47.80622f;
				case 36:
					return 2550.298f, -1301.884f, 47.80622f;
				case 37:
					return 2549.661f, -1301.76f, 47.80622f;
				case 38:
					return 2549.037f, -1301.683f, 47.80622f;
				case 39:
					return 2548.413f, -1301.624f, 47.80622f;
				case 40:
					return 2552.122f, -1300.556f, 48.09521f;
				case 41:
					return 2551.499f, -1300.414f, 48.09521f;
				case 42:
					return 2550.871f, -1300.243f, 48.09521f;
				case 43:
					return 2550.255f, -1300.129f, 48.09521f;
				case 44:
					return 2549.635f, -1300.029f, 48.09521f;
				case 45:
					return 2549.016f, -1299.949f, 48.09521f;
				case 46:
					return 2552.115f, -1298.813f, 48.36841f;
				case 47:
					return 2551.499f, -1298.658f, 48.36841f;
				case 48:
					return 2550.254f, -1298.388f, 48.36841f;
				case 49:
					return 2549.629f, -1298.312f, 48.36841f;
				case 50:
					return 2549.001f, -1298.207f, 48.36841f;
				case 51:
					return 2548.368f, -1298.123f, 48.36841f;
				case 52:
					return 2547.733f, -1298.041f, 48.36841f;
				case 53:
					return 2553.102f, -1299.667f, 49.214f;
				case 54:
					return 2553.129f, -1302.399f, 49.214f;
				case 55:
					return 2539.789f, -1302.37f, 49.214f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -349.1009f, 693.7693f, 116.8875f;
				case 1:
					return -348.4168f, 693.9259f, 116.8925f;
				case 2:
					return -345.9169f, 694.5858f, 116.8741f;
				case 3:
					return -344.2555f, 695.0604f, 116.876f;
				case 4:
					return -349.5025f, 695.6313f, 117.0018f;
				case 5:
					return -345.2958f, 696.7811f, 117.0189f;
				case 6:
					return -350.5786f, 697.272f, 117.1134f;
				case 7:
					return -346.918f, 698.2223f, 117.1139f;
				case 8:
					return -345.2069f, 698.744f, 117.1184f;
				case 9:
					return -350.4303f, 699.0625f, 117.1308f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2701.17f, -1354.493f, 47.77215f;
				case 1:
					return 2700.708f, -1354.073f, 47.77014f;
				case 2:
					return 2700.242f, -1353.635f, 47.76572f;
				case 3:
					return 2699.766f, -1353.23f, 47.74422f;
				case 4:
					return 2697.559f, -1350.386f, 47.76871f;
				case 5:
					return 2697.222f, -1349.843f, 47.76798f;
				case 6:
					return 2696.885f, -1349.309f, 47.76988f;
				case 7:
					return 2699.731f, -1355.699f, 47.94025f;
				case 8:
					return 2699.25f, -1355.287f, 47.93497f;
				case 9:
					return 2698.764f, -1354.877f, 47.93819f;
				case 10:
					return 2695.774f, -1351.042f, 47.93525f;
				case 11:
					return 2695.439f, -1350.499f, 47.93626f;
				case 12:
					return 2698.316f, -1356.914f, 48.10247f;
				case 13:
					return 2697.834f, -1356.48f, 48.09552f;
				case 14:
					return 2694.688f, -1352.778f, 48.10484f;
				case 15:
					return 2694.39f, -1352.196f, 48.09603f;
				case 16:
					return 2694.055f, -1351.671f, 48.0974f;
				case 17:
					return 2696.514f, -1357.575f, 48.25399f;
				case 18:
					return 2696.022f, -1357.168f, 48.25772f;
				case 19:
					return 2695.554f, -1356.731f, 48.23498f;
				case 20:
					return 2693.692f, -1354.44f, 48.26648f;
				case 21:
					return 2693.319f, -1353.92f, 48.26515f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -776.0957f, -1365.928f, 43.26698f;
				case 1:
					return -776.1156f, -1365.257f, 43.26892f;
				case 2:
					return -776.1213f, -1364.023f, 43.26947f;
				case 3:
					return -776.0749f, -1361.318f, 43.29291f;
				case 4:
					return -776.0781f, -1360.655f, 43.26656f;
				case 5:
					return -776.107f, -1359.996f, 43.26938f;
				case 6:
					return -777.7452f, -1365.929f, 43.43242f;
				case 7:
					return -778.02f, -1365.272f, 43.45926f;
				case 8:
					return -777.9575f, -1361.315f, 43.4812f;
				case 9:
					return -777.9938f, -1360.662f, 43.45993f;
				case 10:
					return -777.9775f, -1360f, 43.45834f;
				case 11:
					return -779.8451f, -1365.909f, 43.6443f;
				case 12:
					return -779.8615f, -1365.263f, 43.64589f;
				case 13:
					return -779.8595f, -1364.639f, 43.64569f;
				case 14:
					return -779.835f, -1361.3f, 43.67118f;
				case 15:
					return -779.8181f, -1360.642f, 43.64128f;
				case 16:
					return -781.7369f, -1365.253f, 43.83224f;
				case 17:
					return -781.7541f, -1364.628f, 43.83392f;
				case 18:
					return -781.7646f, -1364f, 43.83494f;
				case 19:
					return -781.7217f, -1360.638f, 43.83135f;
				case 20:
					return -781.7209f, -1359.973f, 43.83129f;
				case 21:
					return -781.7397f, -1359.346f, 43.83311f;
				case 22:
					return -781.7122f, -1358.722f, 43.83042f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_458(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 2:
				case 3:
				case 4:
				case 5:
					return true;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 10:
				case 11:
				case 12:
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 3:
				case 4:
				case 8:
				case 9:
				case 10:
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
					return true;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

char* func_459(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 2:
							return "Male5";
						case 3:
							return "Male1";
						case 4:
							return "Male3";
						case 5:
							return "Male0";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 1:
							return "Male5";
						case 10:
							return "Male1";
						case 11:
							return "Male3";
						case 12:
							return "Male0";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 3:
							return "Male2";
						case 4:
							return "Male5";
						case 8:
							return "Male3";
						case 9:
							return "Male0";
						case 10:
							return "Male1";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						default:
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						case 17:
							return "Male3";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 9:
							return "Male2";
						case 10:
							return "Male3";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 9:
							return "Male0";
						case 10:
							return "Male2";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male3";
						default:
							break;
					}
					break;
			}
			break;
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 2:
							return "Male5";
						case 3:
							return "Male1";
						case 4:
							return "Male3";
						case 5:
							return "Male0";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 1:
							return "Male5";
						case 10:
							return "Male1";
						case 11:
							return "Male3";
						case 12:
							return "Male0";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 3:
							return "Male2";
						case 4:
							return "Male5";
						case 8:
							return "Male3";
						case 9:
							return "Male0";
						case 10:
							return "Male1";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						default:
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						case 17:
							return "Male3";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 9:
							return "Male2";
						case 10:
							return "Male3";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 9:
							return "Male0";
						case 10:
							return "Male2";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male3";
						default:
							break;
					}
					break;
			}
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_HANDLE";
}

bool func_460(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 3:
			return true;
		case 1:
		case 2:
			return true;
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

char* func_461(int iParam0)
{
	switch (iParam0)
	{
		case 21:
			return "ML_Bear_Story_Soundset";
		case 22:
			return "ML_Blackwater_Soundset";
		case 23:
			return "ML_Man_Flight_Soundset";
		case 24:
			return "ML_See_The_World_Soundset";
		case 25:
			return "ML_Ghost_Story_Soundset";
		case 31:
			return "ML_Bear_Story_Soundset_Tent";
		case 32:
			return "ML_Blackwater_Soundset_Tent";
		case 33:
			return "ML_Man_Flight_Soundset_Tent";
		case 34:
			return "ML_See_The_World_Soundset_Tent";
		case 35:
			return "ML_Ghost_Story_Soundset_Tent";
		case 26:
		case 36:
			return "Cartoon_Direct_Current_Soundset";
		case 27:
		case 37:
			return "Cartoon_Farmers_Daughter_Soundset";
		case 28:
		case 38:
			return "Cartoon_Modern_Medicine_Soundset";
		case 29:
		case 39:
			return "Cartoon_Strongest_Man_Soundset";
		case 30:
		case 40:
			return "Cartoon_Sketching_For_Sweetheart_Soundset";
	}
	return "ERROR!";
}

char* func_462(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "shows_sd_vaudeville";
		case 1:
		case 2:
			return "shows_sd_magic";
		case 3:
			return "shows_val_magic";
		case 4:
			return "shows_bla_movie";
		default:
			break;
	}
	return "shows_sd_vaudeville";
}

void func_463(var uParam0)
{
	struct<23> Var0;
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
	Var0.f_3 = *uParam0;
	Var0.f_4 = 21030;
	Var0.f_8 = 4;
	Var0.f_19 = 3;
	Var0.f_20 = 2;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_13 = 3;
	Var0.f_7 = 500;
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Var0);
}

void func_464(var uParam0)
{
	struct<23> Var0;
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
	Var0.f_4 = 21030;
	Var0.f_8 = 4;
	Var0.f_19 = 3;
	Var0.f_20 = 2;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_13 = 3;
	Var0.f_7 = 500;
	_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
}

Vector3 func_465(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return -347.6828f, 695.3319f, 118.3399f;
				case 1:
					return -348.5953f, 698.8133f, 119.6875f;
				case 2:
					return -348.8144f, 699.8091f, 118.9698f;
				default:
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2546.278f, -1301.387f, 49.2503f;
				case 1:
					return 2546.278f, -1301.387f, 49.2503f;
				case 2:
					return 2546.278f, -1301.387f, 49.2503f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2698.999f, -1351.896f, 48.8643f;
				case 1:
					return 2696.904f, -1353.697f, 50.4856f;
				case 2:
					return 2699.875f, -1351.404f, 49.7629f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -776.4824f, -1362.639f, 44.7983f;
				case 1:
					return -781.2149f, -1362.732f, 45.4177f;
				case 2:
					return -780.0249f, -1362.867f, 47.5554f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_466(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1.3561f, 0f, -165.0047f;
				case 1:
					return -15.1795f, 0f, -165.8691f;
				case 2:
					return -3.653f, 0f, -165.8691f;
				default:
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1.2492f, 0f, -179.3095f;
				case 1:
					return 1.2492f, 0f, -179.3095f;
				case 2:
					return 1.2492f, 0f, -179.3095f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5.5654f, 0f, -49.4849f;
				case 1:
					return -12.2595f, 0f, -50.4561f;
				case 2:
					return -3.2839f, 0f, -49.6209f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 5.1961f, 0f, -90.3272f;
				case 1:
					return -3.1228f, 1.0856f, -90.1785f;
				case 2:
					return -25.3626f, 1.0856f, -88.2647f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_467(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 3:
			return true;
		case 1:
		case 2:
			return true;
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

char* func_468(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@show_audience@ig7_enters@custom_enter_01";
		case 1:
			return "script@shows@show_audience@ig7_enters@custom_enter_02";
		case 2:
			return "script@shows@show_audience@ig7_enters@custom_enter_03";
		case 3:
			return "script@shows@show_audience@ig7_enters@custom_enter_04";
		case 4:
			return "script@shows@show_audience@ig7_enters@custom_enter_05";
		case 5:
			return "script@shows@show_audience@ig7_enters@custom_enter_06";
		case 6:
			return "script@shows@show_audience@ig7_enters@custom_enter_07";
		case 7:
			return "script@shows@show_audience@ig7_enters@custom_enter_08";
		case 8:
			return "script@shows@show_audience@ig7_enters@custom_enter_09";
		case 9:
			return "script@shows@show_audience@ig7_enters@custom_enter_10";
		default:
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_ENTER";
}

char* func_469(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_01";
		case 1:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_02";
		case 2:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_03";
		case 3:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_04";
		case 4:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_05";
		case 5:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_06";
		case 6:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_07";
		case 7:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_08";
		case 8:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_09";
		case 9:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_10";
		default:
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_IDLE";
}

int func_470(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1;
		case 1:
			return -1;
		case 2:
			return -1;
		case 0:
			return 7;
		case 3:
			return -1;
		default:
			break;
	}
	return -1;
}

float func_471()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.25f);
}

bool func_472(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 5:
					return true;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 31:
					return true;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 39:
					return true;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 32:
					return true;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 4:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

float func_473(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1f;
				case 1:
					return -1f;
				case 2:
					return 140f;
				case 3:
					return 137f;
				case 4:
					return 13f;
				case 5:
					return 4f;
				case 6:
					return -1f;
				case 7:
					return -1f;
				case 8:
					return -1f;
				case 9:
					return 134f;
				case 10:
					return 90f;
				case 11:
					return 52.5f;
				case 12:
					return 34.5f;
				case 13:
					return 7f;
				case 14:
					return -1f;
				case 15:
					return -1f;
				case 16:
					return -1f;
				case 17:
					return 149f;
				case 18:
					return 105f;
				case 19:
					return 75f;
				case 20:
					return 57f;
				case 21:
					return -1f;
				case 22:
					return -1f;
				case 23:
					return -1f;
				case 24:
					return 125f;
				case 25:
					return 109f;
				case 26:
					return 84f;
				case 27:
					return -1f;
				case 28:
					return -1f;
				case 29:
					return -1f;
				case 30:
					return 70.5f;
				case 31:
					return 47.5f;
				case 32:
					return 8.5f;
				case 33:
					return -1f;
				case 34:
					return -1f;
				case 35:
					return -1f;
				case 36:
					return 130f;
				case 37:
					return 114f;
				case 38:
					return 94f;
				case 39:
					return 0f;
				case 40:
					return -1f;
				case 41:
					return -1f;
				case 42:
					return -1f;
				case 43:
					return 145f;
				case 44:
					return 40f;
				case 45:
					return 27f;
				case 46:
					return -1f;
				case 47:
					return -1f;
				case 48:
					return -1f;
				case 49:
					return 120f;
				case 50:
					return 100f;
				case 51:
					return 81f;
				case 52:
					return 62f;
				case 53:
					return 0.5f;
				case 54:
					return 1.5f;
				case 55:
					return 1f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 44f;
				case 1:
					return 17f;
				case 2:
					return 23f;
				case 3:
					return 56f;
				case 4:
					return 60f;
				case 5:
					return 0f;
				case 6:
					return 10f;
				case 7:
					return 30f;
				case 8:
					return 37f;
				case 9:
					return 52f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 60f;
				case 1:
					return 46f;
				case 2:
					return 24f;
				case 3:
					return 8f;
				case 4:
					return 12f;
				case 5:
					return 31f;
				case 6:
					return 44f;
				case 7:
					return 40f;
				case 8:
					return 21f;
				case 9:
					return 0f;
				case 10:
					return 4f;
				case 11:
					return 54f;
				case 12:
					return 58f;
				case 13:
					return 36f;
				case 14:
					return 17f;
				case 15:
					return 28f;
				case 16:
					return 70f;
				case 17:
					return 65f;
				case 18:
					return 50f;
				case 19:
					return 33f;
				case 20:
					return 1.5f;
				case 21:
					return 62f;
				default:
					break;
			}
			return 75f;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 60f;
				case 1:
					return 46f;
				case 2:
					return 24f;
				case 3:
					return 8f;
				case 4:
					return 12f;
				case 5:
					return 31f;
				case 6:
					return 44f;
				case 7:
					return 40f;
				case 8:
					return 21f;
				case 9:
					return 0f;
				case 10:
					return 4f;
				case 11:
					return 54f;
				case 12:
					return 58f;
				case 13:
					return 36f;
				case 14:
					return 17f;
				case 15:
					return 28f;
				case 16:
					return 70f;
				case 17:
					return 65f;
				case 18:
					return 50f;
				case 19:
					return 33f;
				case 20:
					return 1.5f;
				case 21:
					return 62f;
				case 22:
					return 72f;
				default:
					break;
			}
			return 75f;
	}
	return 20f;
}

bool func_474(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	vVar3 = { Global_36 - vVar0 };
	vVar6 = { Vector(49.51665f, -1308.839f, 2546.548f) - vVar0 };
	vVar3 = { __LIB_0__::func_173(vVar3) };
	vVar6 = { __LIB_0__::func_173(vVar6) };
	if (__LIB_1__::func_95(vVar6, vVar3) > 0.95f)
	{
		return true;
	}
	return false;
}

int func_475(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 15;
	}
	else if (iParam0 >= 27 && iParam0 <= 52)
	{
		return 14;
	}
	else if (iParam0 >= 53 && iParam0 <= 55)
	{
		return 2;
	}
	return 2;
}

bool func_476(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return false;
				case 1:
					return false;
				case 2:
					return false;
				case 3:
					return false;
				case 4:
					return false;
				case 5:
					return false;
				case 6:
					return false;
				case 7:
					return false;
				case 8:
					return false;
				case 9:
					return false;
				case 10:
					return false;
				case 11:
					return false;
				case 12:
					return false;
				case 13:
					return false;
				case 14:
					return false;
				case 15:
					return false;
				case 16:
					return false;
				case 17:
					return false;
				case 18:
					return false;
				case 19:
					return false;
				case 20:
					return false;
				case 21:
					return false;
				case 22:
					return false;
				case 23:
					return false;
				case 24:
					return false;
				case 25:
					return false;
				case 26:
					return false;
				case 27:
					return false;
				case 28:
					return false;
				case 29:
					return false;
				case 30:
					return false;
				case 31:
					return false;
				case 32:
					return false;
				case 33:
					return false;
				case 34:
					return false;
				case 35:
					return false;
				case 36:
					return false;
				case 37:
					return false;
				case 38:
					return false;
				case 39:
					return false;
				case 40:
					return false;
				case 41:
					return false;
				case 42:
					return false;
				case 43:
					return false;
				case 44:
					return false;
				case 45:
					return false;
				case 46:
					return false;
				case 47:
					return false;
				case 48:
					return false;
				case 49:
					return false;
				case 50:
					return false;
				case 51:
					return false;
				case 52:
					return false;
				case 53:
					return false;
				case 54:
					return false;
				case 55:
					return false;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
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
					return true;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
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
					return true;
				case 9:
					return false;
				case 10:
				case 11:
					return true;
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
					return false;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
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
				case 10:
					return true;
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
					return false;
				default:
					break;
			}
			break;
	}
	return false;
}

Vector3 func_477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 3:
			return -346.8185f, 692.4758f, 118.2631f;
		case 1:
		case 2:
			return 2700.367f, -1349.699f, 49.78757f;
		case 4:
			return -772.6649f, -1362.613f, 45.39102f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_478(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -307.226f, 789.081f, 116.7509f;
		case 4:
			return -836.5425f, -1317.775f, 42.55259f;
		case 1:
		case 2:
			return 2631.464f, -1288.41f, 51.26936f;
		case 0:
			return 2546.444f, -1287.778f, 48.21795f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_479(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_NO_RELATIONSHIP"));
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

int func_480(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 8;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 8;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 26:
			return 0;
		case 27:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 1;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 12;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_481(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 30;
	}
	else if (iParam0 >= 27 && iParam0 <= 32)
	{
		return 27;
	}
	else if (iParam0 >= 33 && iParam0 <= 38)
	{
		return 29;
	}
	else if (iParam0 >= 39 && iParam0 <= 56)
	{
		return 28;
	}
	return 23;
}

int func_482(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 34;
	}
	else if (iParam0 >= 27 && iParam0 <= 32)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) >= 50)
		{
			return 32;
		}
		else
		{
			return 33;
		}
	}
	else if (iParam0 >= 33 && iParam0 <= 54)
	{
		return 34;
	}
	return 19;
}

char* func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_enthralled_b";
		case 1:
			return "seated_loop_female1_enthralled_b";
		case 2:
			return "seated_loop_female0_waiting_a";
		case 3:
			return "seated_loop_female1_waiting_a";
		case 4:
			return "seated_loop_male1_enthralled_b";
		case 5:
			return "seated_loop_male2_enthralled_b";
		case 6:
			return "seated_loop_male3_enthralled_b";
		case 7:
			return "seated_loop_male4_enthralled_b";
		case 8:
			return "seated_loop_male1_waiting_a";
		case 9:
			return "seated_loop_male2_waiting_a";
		case 10:
			return "seated_loop_male3_waiting_a";
		case 11:
			return "seated_loop_male4_waiting_a";
		case 12:
			return "railing_loop_male0_enthralled_b";
		case 13:
			return "railing_loop_male0_waiting_a";
		case 14:
			return "railingl_male0_enthralled_b";
		case 15:
			return "railingl_male0_waiting_a";
		case 16:
			return "railingr_male5_enthralled_b";
		case 17:
			return "railingr_male5_waiting_a";
		default:
			break;
	}
	return "seated_loop_male1_waiting_a";
}

char* func_484(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_regular_a";
		case 1:
			return "seated_loop_female0_regular_b";
		case 2:
			return "seated_loop_female0_rowdy_b";
		case 3:
			return "seated_loop_female0_rowdy_c";
		case 4:
			return "seated_loop_female1_regular_a";
		case 5:
			return "seated_loop_female1_regular_b";
		case 6:
			return "seated_loop_female1_rowdy_b";
		case 7:
			return "seated_loop_female1_rowdy_c";
		case 8:
			return "seated_loop_male1_regular_a";
		case 9:
			return "seated_loop_male1_regular_b";
		case 10:
			return "seated_loop_male1_rowdy_b";
		case 11:
			return "seated_loop_male1_rowdy_c";
		case 12:
			return "seated_loop_male2_regular_a";
		case 13:
			return "seated_loop_male2_regular_b";
		case 14:
			return "seated_loop_male3_regular_a";
		case 15:
			return "seated_loop_male3_regular_b";
		case 16:
			return "seated_loop_male3_rowdy_b";
		case 17:
			return "seated_loop_male3_rowdy_c";
		case 18:
			return "seated_loop_male4_regular_a";
		case 19:
			return "seated_loop_male4_regular_b";
		case 20:
			return "seated_loop_male4_rowdy_b";
		case 21:
			return "seated_loop_male4_rowdy_c";
		case 22:
			return "railing_loop_male0_regular_a";
		case 23:
			return "railing_loop_male0_regular_b";
		case 24:
			return "railing_loop_male0_rowdy_b";
		case 25:
			return "railing_loop_male0_rowdy_c";
		case 26:
			return "railingl_male0_regular_a";
		case 27:
			return "railingl_male0_regular_b";
		case 28:
			return "railingl_male0_rowdy_b";
		case 29:
			return "railingl_male0_rowdy_c";
		case 30:
			return "railingr_male5_regular_a";
		case 31:
			return "railingr_male5_regular_b";
		case 32:
			return "railingr_male5_rowdy_b";
		case 33:
			return "railingr_male5_rowdy_c";
		default:
			break;
	}
	return "seated_loop_male1_regular_a";
}

char* func_485(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_musical_b";
		case 1:
			return "seated_loop_female1_musical_b";
		case 2:
			return "seated_loop_mail0_musical_b";
		case 3:
			return "seated_loop_male2_musical_b";
		case 4:
			return "seated_loop_male3_musical_b";
		case 5:
			return "seated_loop_male4_musical_b";
		case 6:
			return "railing_loop_male1_musical_b";
		case 7:
			return "railingl_male1_musical_b";
		case 8:
			return "railingr_male5_musical_b";
		default:
			break;
	}
	return "seated_loop_mail0_musical_b";
}

char* func_486(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_dancing_b";
		case 1:
			return "seated_loop_female0_dancing_c";
		case 2:
			return "seated_loop_female1_dancing_b";
		case 3:
			return "seated_loop_female1_dancing_c";
		case 4:
			return "seated_loop_male0_dancing_b";
		case 5:
			return "seated_loop_male0_dancing_c";
		case 6:
			return "seated_loop_male2_dancing_b";
		case 7:
			return "seated_loop_male2_dancing_c";
		case 8:
			return "seated_loop_male3_dancing_b";
		case 9:
			return "seated_loop_male3_dancing_c";
		case 10:
			return "seated_loop_male4_dancing_b";
		case 11:
			return "seated_loop_male4_dancing_c";
		case 12:
			return "railing_loop_male1_dancing_b";
		case 13:
			return "railing_loop_male1_dancing_c";
		case 14:
			return "railingl_male1_dancing_b";
		case 15:
			return "railingl_male1_dancing_c";
		case 16:
			return "railingr_male5_dancing_b";
		case 17:
			return "railingr_male5_dancing_c";
		default:
			break;
	}
	return "seated_loop_male0_dancing_b";
}

char* func_487(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_comedic_b";
		case 1:
			return "seated_loop_female0_comedic_c";
		case 2:
			return "seated_loop_female0_displeased_b";
		case 3:
			return "seated_loop_female0_displeased_c";
		case 4:
			return "seated_loop_female1_comedic_b";
		case 5:
			return "seated_loop_female1_comedic_c";
		case 6:
			return "seated_loop_female1_displeased_b";
		case 7:
			return "seated_loop_female1_displeased_c";
		case 8:
			return "seated_loop_male0_comedic_b";
		case 9:
			return "seated_loop_male0_comedic_c";
		case 10:
			return "seated_loop_male0_displeased_b";
		case 11:
			return "seated_loop_male0_displeased_c";
		case 12:
			return "seated_loop_male2_comedic_b";
		case 13:
			return "seated_loop_male2_comedic_c";
		case 14:
			return "seated_loop_male2_displeased_b";
		case 15:
			return "seated_loop_male2_displeased_c";
		case 16:
			return "seated_loop_male3_comedic_b";
		case 17:
			return "seated_loop_male3_comedic_c";
		case 18:
			return "seated_loop_male3_displeased_b";
		case 19:
			return "seated_loop_male3_displeased_c";
		case 20:
			return "railing_loop_male1_comedic_b";
		case 21:
			return "railing_loop_male1_comedic_c";
		case 22:
			return "railing_loop_male1_displeased_b";
		case 23:
			return "railing_loop_male1_displeased_c";
		case 24:
			return "railingl_male1_comedic_b";
		case 25:
			return "railingl_male1_comedic_c";
		case 26:
			return "railingl_male1_displeased_b";
		case 27:
			return "railingl_male1_displeased_c";
		case 28:
			return "railingr_male4_comedic_b";
		case 29:
			return "railingr_male4_comedic_c";
		case 30:
			return "railingr_male4_displeased_b";
		case 31:
			return "railingr_male4_displeased_c";
		default:
			break;
	}
	return "seated_loop_male0_comedic_b";
}

char* func_488(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_applause_med_b";
		case 1:
			return "seated_loop_female0_applause_small_a";
		case 2:
			return "seated_loop_female0_suspense_neg_b";
		case 3:
			return "seated_loop_female0_suspense_pos_b";
		case 4:
			return "seated_loop_female1_applause_med_b";
		case 5:
			return "seated_loop_female1_applause_small_a";
		case 6:
			return "seated_loop_female1_suspense_neg_b";
		case 7:
			return "seated_loop_female1_suspense_pos_b";
		case 8:
			return "seated_loop_male0_applause_med_b";
		case 9:
			return "seated_loop_male0_applause_small_a";
		case 10:
			return "seated_loop_male0_suspense_neg_b";
		case 11:
			return "seated_loop_male0_suspense_pos_b";
		case 12:
			return "seated_loop_male2_applause_med_b";
		case 13:
			return "seated_loop_male2_applause_small_a";
		case 14:
			return "seated_loop_male2_suspense_neg_b";
		case 15:
			return "seated_loop_male2_suspense_pos_b";
		case 16:
			return "seated_loop_male3_applause_med_b";
		case 17:
			return "seated_loop_male3_applause_small_a";
		case 18:
			return "seated_loop_male3_suspense_neg_b";
		case 19:
			return "seated_loop_male3_suspense_pos_b";
		case 20:
			return "railing_loop_male1_applause_med_b";
		case 21:
			return "railing_loop_male1_applause_small_a";
		case 22:
			return "railing_loop_male1_suspense_neg_b";
		case 23:
			return "railing_loop_male1_suspense_pos_b";
		case 24:
			return "railingl_male1_applause_med_b";
		case 25:
			return "railingl_male1_applause_small_a";
		case 26:
			return "railingl_male1_suspense_neg_b";
		case 27:
			return "railingl_male1_suspense_pos_b";
		case 28:
			return "railingr_male4_applause_med_b";
		case 29:
			return "railingr_male4_applause_small_a";
		case 30:
			return "railingr_male4_suspense_neg_b";
		case 31:
			return "railingr_male4_suspense_pos_b";
		default:
			break;
	}
	return "seated_loop_male0_applause_med_b";
}

char* func_489(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_applause_big_c";
		case 1:
			return "seated_loop_female0_horrified_c";
		case 2:
			return "seated_loop_female2_applause_big_c";
		case 3:
			return "seated_loop_female2_horrified_c";
		case 4:
			return "seated_loop_male0_applause_big_c";
		case 5:
			return "seated_loop_male0_horrified_c";
		case 6:
			return "seated_loop_male2_applause_big_c";
		case 7:
			return "seated_loop_male2_horrified_c";
		case 8:
			return "seated_loop_male3_applause_big_c";
		case 9:
			return "seated_loop_male3_horrified_c";
		case 10:
			return "railing_loop_male1_applause_big_c";
		case 11:
			return "railing_loop_male1_horrified_c";
		case 12:
			return "railingl_male1_applause_big_c";
		case 13:
			return "railingl_male1_horrified_c";
		case 14:
			return "railingr_male4_applause_big_c";
		case 15:
			return "railingr_male4_horrified_c";
		default:
			break;
	}
	return "seated_loop_male0_applause_big_c";
}

char* func_490(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "railingl_male0_applause_quick";
		case 1:
			return "railingl_male0_applause_standing_01";
		case 2:
			return "railingl_male0_applause_standing_02";
		case 3:
			return "railingl_male0_boo_high";
		case 4:
			return "railingl_male0_boo_low";
		case 5:
			return "railingl_male0_horrified_amused";
		case 6:
			return "railingl_male0_horrified_high";
		case 7:
			return "railingl_male0_horrified_low";
		case 8:
			return "railingl_male0_impressed_high";
		case 9:
			return "railingl_male0_impressed_low";
		case 10:
			return "railingl_male0_laugh";
		case 11:
			return "railingl_male0_laugh_02";
		case 12:
			return "railingl_male0_raunchy";
		case 13:
			return "railingl_male0_raunchy_02";
		case 14:
			return "railingr_male4_applause_quick";
		case 15:
			return "railingr_male4_applause_standing_01";
		case 16:
			return "railingr_male4_applause_standing_02";
		case 17:
			return "railingr_male4_boo_high";
		case 18:
			return "railingr_male4_boo_low";
		case 19:
			return "railingr_male4_horrified_amused";
		case 20:
			return "railingr_male4_horrified_high";
		case 21:
			return "railingr_male4_horrified_low";
		case 22:
			return "railingr_male4_impressed_high";
		case 23:
			return "railingr_male4_impressed_low";
		case 24:
			return "railingr_male4_laugh";
		case 25:
			return "railingr_male4_laugh_02";
		case 26:
			return "railingr_male4_raunchy";
		case 27:
			return "railingr_male4_raunchy_02";
		case 28:
			return "seated_loop_female0_applause_quick";
		case 29:
			return "seated_loop_female0_applause_standing_01";
		case 30:
			return "seated_loop_female0_applause_standing_02";
		case 31:
			return "seated_loop_female0_boo_high";
		case 32:
			return "seated_loop_female0_boo_low";
		case 33:
			return "seated_loop_female0_horrified_amused";
		case 34:
			return "seated_loop_female0_horrified_high";
		case 35:
			return "seated_loop_female0_horrified_low";
		case 36:
			return "seated_loop_female0_impressed_high";
		case 37:
			return "seated_loop_female0_impressed_low";
		case 38:
			return "seated_loop_female0_laugh";
		case 39:
			return "seated_loop_female0_laugh_02";
		case 40:
			return "seated_loop_female0_raunchy";
		case 41:
			return "seated_loop_female0_raunchy_02";
		case 42:
			return "seated_loop_female1_applause_quick";
		case 43:
			return "seated_loop_female1_applause_standing_01";
		case 44:
			return "seated_loop_female1_applause_standing_02";
		case 45:
			return "seated_loop_female1_boo_high";
		case 46:
			return "seated_loop_female1_boo_low";
		case 47:
			return "seated_loop_female1_horrified_amused";
		case 48:
			return "seated_loop_female1_horrified_high";
		case 49:
			return "seated_loop_female1_horrified_low";
		case 50:
			return "seated_loop_female1_impressed_high";
		case 51:
			return "seated_loop_female1_impressed_low";
		case 52:
			return "seated_loop_female1_laugh";
		case 53:
			return "seated_loop_female1_laugh_02";
		case 54:
			return "seated_loop_female1_raunchy";
		case 55:
			return "seated_loop_female1_raunchy_02";
		case 56:
			return "seated_loop_male1_applause_quick";
		case 57:
			return "seated_loop_male1_applause_standing_01";
		case 58:
			return "seated_loop_male1_applause_standing_02";
		case 59:
			return "seated_loop_male1_boo_high";
		case 60:
			return "seated_loop_male1_boo_low";
		case 61:
			return "seated_loop_male1_horrified_amused";
		case 62:
			return "seated_loop_male1_horrified_high";
		case 63:
			return "seated_loop_male1_horrified_low";
		case 64:
			return "seated_loop_male1_impressed_high";
		case 65:
			return "seated_loop_male1_impressed_low";
		case 66:
			return "seated_loop_male1_laugh";
		case 67:
			return "seated_loop_male1_laugh_02";
		case 68:
			return "seated_loop_male1_raunchy";
		case 69:
			return "seated_loop_male1_raunchy_02";
		case 70:
			return "seated_loop_male2_applause_quick";
		case 71:
			return "seated_loop_male2_applause_standing_01";
		case 72:
			return "seated_loop_male2_applause_standing_02";
		case 73:
			return "seated_loop_male2_boo_high";
		case 74:
			return "seated_loop_male2_boo_low";
		case 75:
			return "seated_loop_male2_horrified_amused";
		case 76:
			return "seated_loop_male2_horrified_high";
		case 77:
			return "seated_loop_male2_horrified_low";
		case 78:
			return "seated_loop_male2_impressed_high";
		case 79:
			return "seated_loop_male2_impressed_low";
		case 80:
			return "seated_loop_male2_laugh";
		case 81:
			return "seated_loop_male2_laugh_02";
		case 82:
			return "seated_loop_male2_raunchy";
		case 83:
			return "seated_loop_male2_raunchy_02";
		case 84:
			return "seated_loop_male3_applause_quick";
		case 85:
			return "seated_loop_male3_applause_standing_01";
		case 86:
			return "seated_loop_male3_applause_standing_02";
		case 87:
			return "seated_loop_male3_boo_high";
		case 88:
			return "seated_loop_male3_boo_low";
		case 89:
			return "seated_loop_male3_horrified_amused";
		case 90:
			return "seated_loop_male3_horrified_high";
		case 91:
			return "seated_loop_male3_horrified_low";
		case 92:
			return "seated_loop_male3_impressed_high";
		case 93:
			return "seated_loop_male3_impressed_low";
		case 94:
			return "seated_loop_male3_laugh";
		case 95:
			return "seated_loop_male3_laugh_02";
		case 96:
			return "seated_loop_male3_raunchy";
		case 97:
			return "seated_loop_male3_raunchy_02";
		case 98:
			return "railsl_oneshot_male_escapeartistreact_a_male4";
		case 99:
			return "railsr_oneshot_male_escapeartistreact_a_male4";
		case 100:
			return "seated_oneshot_female_escapeartistreact_backward_a_female0";
		case 101:
			return "seated_oneshot_female_escapeartistreact_backward_b_female0";
		case 102:
			return "seated_oneshot_female_escapeartistreact_forward_a_female0";
		case 103:
			return "seated_oneshot_female_escapeartistreact_forward_b_female0";
		case 104:
			return "seated_oneshot_female_escapeartistreact_left_a_female0";
		case 105:
			return "seated_oneshot_female_escapeartistreact_left_b_female0";
		case 106:
			return "seated_oneshot_female_escapeartistreact_right_a_female0";
		case 107:
			return "seated_oneshot_female_escapeartistreact_right_b_female0";
		case 108:
			return "seated_oneshot_male_escapeartistreact_backward_a_male4";
		case 109:
			return "seated_oneshot_male_escapeartistreact_forward_a_male4";
		case 110:
			return "seated_oneshot_male_escapeartistreact_forward_b_male4";
		case 111:
			return "seated_oneshot_male_escapeartistreact_forward_c_male4";
		case 112:
			return "seated_oneshot_male_escapeartistreact_left_a_male4";
		case 113:
			return "seated_oneshot_male_escapeartistreact_left_b_male4";
		case 114:
			return "seated_oneshot_male_escapeartistreact_left_c_male4";
		case 115:
			return "seated_oneshot_male_escapeartistreact_right_a_male4";
		case 116:
			return "seated_oneshot_male_escapeartistreact_right_b_male4";
		case 117:
			return "seated_oneshot_male_escapeartistreact_right_c_male4";
		case 118:
			return "seated_oneshot_female0_hatfire_close_rt_a";
		case 119:
			return "seated_oneshot_female0_hatfire_concerned_rt_a";
		case 120:
			return "seated_oneshot_female1_hatfire_close_rt_a";
		case 121:
			return "seated_oneshot_female1_hatfire_concerned_rt_a";
		case 122:
			return "seated_oneshot_male0_hatfire_close_rt_a";
		case 123:
			return "seated_oneshot_male0_hatfire_concerned_rt_a";
		case 124:
			return "seated_oneshot_male1_hatfire_close_rt_a";
		case 125:
			return "seated_oneshot_male1_hatfire_concerned_rt_a";
		case 126:
			return "seated_oneshot_male2_hatfire_close_rt_a";
		case 127:
			return "seated_oneshot_male2_hatfire_concerned_rt_a";
		case 128:
			return "seated_oneshot_male3_hatfire_close_rt_a";
		case 129:
			return "seated_oneshot_male3_hatfire_concerned_rt_a";
		case 130:
			return "seated_oneshot_male4_hatfire_close_rt_a";
		case 131:
			return "seated_oneshot_male4_hatfire_concerned_rt_a";
		case 132:
			return "seated_oneshot_male5_hatfire_close_rt_a";
		case 133:
			return "seated_oneshot_male5_hatfire_concerned_rt_a";
		case 134:
			return "seated_oneshot_female0_hatfire_laugh_ft_a";
		case 135:
			return "seated_oneshot_female0_hatfire_laugh_ft_b";
		case 136:
			return "seated_oneshot_female1_hatfire_laugh_ft_a";
		case 137:
			return "seated_oneshot_female1_hatfire_laugh_ft_b";
		case 138:
			return "seated_oneshot_male0_hatfire_laugh_ft_a";
		case 139:
			return "seated_oneshot_male0_hatfire_laugh_ft_b";
		case 140:
			return "seated_oneshot_male1_hatfire_laugh_ft_a";
		case 141:
			return "seated_oneshot_male1_hatfire_laugh_ft_b";
		case 142:
			return "seated_oneshot_male2_hatfire_laugh_ft_a";
		case 143:
			return "seated_oneshot_male2_hatfire_laugh_ft_b";
		case 144:
			return "seated_oneshot_male3_hatfire_laugh_ft_a";
		case 145:
			return "seated_oneshot_male3_hatfire_laugh_ft_b";
		case 146:
			return "seated_oneshot_male4_hatfire_laugh_ft_a";
		case 147:
			return "seated_oneshot_male4_hatfire_laugh_ft_b";
		case 148:
			return "seated_oneshot_male5_hatfire_laugh_ft_a";
		case 149:
			return "seated_oneshot_male5_hatfire_laugh_ft_b";
		default:
			break;
	}
	return "seated_loop_male1_applause_quick";
}

char* func_491(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_blocked_a";
		case 1:
			return "seated_loop_female0_blocked_left_a";
		case 2:
			return "seated_loop_female0_blocked_right_a";
		case 3:
			return "seated_loop_female1_blocked_a";
		case 4:
			return "seated_loop_female1_blocked_left_a";
		case 5:
			return "seated_loop_female1_blocked_right_a";
		case 6:
			return "seated_loop_male0_blocked_a";
		case 7:
			return "seated_loop_male0_blocked_left_a";
		case 8:
			return "seated_loop_male0_blocked_right_a";
		case 9:
			return "seated_loop_male2_blocked_a";
		case 10:
			return "seated_loop_male2_blocked_left_a";
		case 11:
			return "seated_loop_male2_blocked_right_a";
		case 12:
			return "seated_loop_male3_blocked_a";
		case 13:
			return "seated_loop_male3_blocked_left_a";
		case 14:
			return "seated_loop_male3_blocked_right_a";
		case 15:
			return "railingl_male1_blocked_a";
		case 16:
			return "railingl_male1_blocked_left_a";
		case 17:
			return "railingl_male1_blocked_right_a";
		case 18:
			return "railingr_male4_blocked_a";
		case 19:
			return "railingr_male4_blocked_left_a";
		case 20:
			return "railingr_male4_blocked_right_a";
		default:
			break;
	}
	return "seated_loop_male0_blocked_a";
}

void func_492(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		(uParam0[iVar0 /*5*/])->f_2 = 1f;
		(uParam0[iVar0 /*5*/])->f_3 = 0f;
		(uParam0[iVar0 /*5*/])->f_4 = 1f;
		(uParam0[iVar0 /*5*/])->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		uParam0->f_31[iVar0 /*5*/].f_2 = 1f;
		uParam0->f_31[iVar0 /*5*/].f_3 = 0f;
		uParam0->f_31[iVar0 /*5*/].f_4 = 1f;
		uParam0->f_31[iVar0 /*5*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_107[iVar0 /*5*/].f_2 = 1f;
		uParam0->f_107[iVar0 /*5*/].f_3 = 0f;
		uParam0->f_107[iVar0 /*5*/].f_4 = 1f;
		uParam0->f_107[iVar0 /*5*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		uParam0->f_118[iVar0 /*5*/].f_2 = 1f;
		uParam0->f_118[iVar0 /*5*/].f_3 = 0f;
		uParam0->f_118[iVar0 /*5*/].f_4 = 1f;
		uParam0->f_118[iVar0 /*5*/].f_1 = 0;
		iVar0++;
	}
	__LIB_1__::func_581(&(Global_1394141.f_1325), -2147483648);
}

void func_493(var uParam0)
{
	__LIB_12__::func_832(uParam0);
	__LIB_12__::func_832(&(uParam0->f_31));
	__LIB_12__::func_832(&(uParam0->f_107));
	__LIB_12__::func_832(&(uParam0->f_118));
	Global_1394141.f_1325 = 0;
}

bool func_494(var uParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		__LIB_1__::func_993(uParam1, 1);
		return true;
	}
	if (!__LIB_0__::func_1(*uParam1, 1) && !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam4)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, 0, sParam3, false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		__LIB_1__::func_581(uParam1, 1);
	}
	return false;
}

void func_495()
{
	PED::SET_PED_CONFIG_FLAG(Global_35, 489, false);
	INVENTORY::_0xD5D72F1624F3BA7C(__LIB_0__::func_162(0));
	__LIB_1__::func_993(&(Global_1394141.f_1326), 1);
	__LIB_1__::func_993(&(Global_1394141.f_1326), 2);
	__LIB_1__::func_993(&(Global_1394141.f_1326), 4);
	__LIB_1__::func_993(&(Global_1394141.f_1326), 64);
	__LIB_1__::func_993(&(Global_1394141.f_1326), 512);
}

bool func_496(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	if (!__LIB_0__::func_75(uParam2))
	{
		__LIB_1__::func_148(uParam2);
	}
	fVar1 = __LIB_0__::func_265(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		__LIB_12__::func_863(uParam0[iVar0 /*5*/], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		__LIB_0__::func_37(uParam2);
		return true;
	}
	return false;
}

bool func_497(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	if (!__LIB_0__::func_75(uParam2))
	{
		__LIB_1__::func_148(uParam2);
	}
	fVar1 = __LIB_0__::func_265(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		__LIB_12__::func_864(uParam0[iVar0 /*5*/], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		__LIB_0__::func_37(uParam2);
		return true;
	}
	return false;
}

bool func_498(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	float fVar0;
	if (!__LIB_0__::func_75(uParam2))
	{
		__LIB_1__::func_148(uParam2);
	}
	fVar0 = __LIB_0__::func_265(uParam2);
	__LIB_12__::func_863(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		__LIB_0__::func_37(uParam2);
		return true;
	}
	return false;
}

bool func_499(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	float fVar0;
	if (!__LIB_0__::func_75(uParam2))
	{
		__LIB_1__::func_148(uParam2);
	}
	fVar0 = __LIB_0__::func_265(uParam2);
	__LIB_12__::func_864(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		__LIB_0__::func_37(uParam2);
		return true;
	}
	return false;
}

bool func_500(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return true;
	}
	if (!__LIB_0__::func_75(uParam4))
	{
		__LIB_1__::func_148(uParam4);
	}
	fVar2 = __LIB_0__::func_265(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		__LIB_12__::func_863(uParam2[iVar3 /*5*/], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		__LIB_0__::func_37(uParam4);
		return true;
	}
	return false;
}

bool func_501(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return true;
	}
	if (!__LIB_0__::func_75(uParam4))
	{
		__LIB_1__::func_148(uParam4);
	}
	fVar2 = __LIB_0__::func_265(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		__LIB_12__::func_864(uParam2[iVar3 /*5*/], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		__LIB_0__::func_37(uParam4);
		return true;
	}
	return false;
}

bool func_502(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1394141.f_7[iParam0 /*31*/].f_7[0] == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1394141.f_7[iParam0 /*31*/].f_7[iVar0];
		if (iVar1 != 0)
		{
			if (__LIB_4__::func_925(iVar1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_503(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

int func_504(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1;
		case 4:
			return 1;
		case 0:
			if (__LIB_1__::func_44(Global_1835011[36 /*74*/].f_1))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
		case 2:
			return 1;
	}
	return 0;
}

int func_505(int iParam0)
{
	return iParam0->f_9;
}

void func_506(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_88)
	{
		iParam0->f_88[iVar0] = 0;
		iVar0++;
	}
}

int func_507(int iParam0)
{
	StringCopy(&(iParam0->f_1101), "camera_treatments", 64);
	StringCopy(&(iParam0->f_1101.f_8), "THEATRE_CUSTOM_TREATMENT_REQUEST", 64);
	StringCopy(&(iParam0->f_1117), "camera_treatments", 64);
	StringCopy(&(iParam0->f_1117.f_8), "THEATRE_RIGHT_SIDE_CUSTOM_TREATMENT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(&(iParam0->f_1117));
	return 1;
}

void func_508(int iParam0)
{
	if (iParam0->f_15)
	{
	}
}

char* func_509(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEER_SMALL";
		case 1:
			return "CHEER_MEDIUM";
		case 2:
			return "CHEER_LARGE";
		case 3:
			return "JEER_SMALL";
		case 4:
			return "JEER_MEDIUM";
		case 5:
			return "JEER_LARGE";
		case 6:
			return "CROWD_LISTENS_TO_SHOW";
		default:
			break;
	}
	return "CHEER_SMALL";
}

char* func_510()
{
	return "SHOWS_sounds";
}

void func_511(char* sParam0, char* sParam1)
{
	AUDIO::PLAY_SOUND_FRONTEND(sParam0, sParam1, true, 0);
}

char* func_512(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return "Curtain_Open_Music";
		case 10:
			return "Curtain_Opens_Music";
		case 11:
			return "Escape_Noose_Curtain_Music";
		default:
			break;
	}
	return "";
}

char* func_513(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return "3160317806_action";
		case 10:
			return "2245181467_action";
		case 11:
			return "4224921010_action";
		default:
			break;
	}
	return "";
}

float func_514()
{
	return 0.95f;
}

void func_515(int iParam0, bool bParam1)
{
	if (GRAPHICS::GET_TV_CHANNEL() == -1)
	{
		return;
	}
	if (iParam0->f_1071)
	{
		if (!bParam1)
		{
			GRAPHICS::_0x32DE2BFFDA43E62A();
		}
		HUD::SET_TEXT_RENDER_ID(iParam0->f_1074);
		GRAPHICS::DRAW_TV_CHANNEL(iParam0->f_1093, iParam0->f_1094, iParam0->f_1091, iParam0->f_1092, 0f, 255, 255, 255, 128);
	}
}

bool func_516()
{
	if (GRAPHICS::GET_TV_CHANNEL() == -1)
	{
		return true;
	}
	if (GRAPHICS::_IS_TV_PLAYLIST_ITEM_PLAYING(joaat("END_OF_MOVIE_MARKER")))
	{
		return true;
	}
	return false;
}

void func_517(int iParam0)
{
	if (GRAPHICS::GET_TV_CHANNEL() == -1)
	{
		return;
	}
	GRAPHICS::SET_TV_CHANNEL(-1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1088))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_1088, false);
	}
	if (iParam0->f_1072)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1089))
		{
			OBJECT::_0xF49574E2332A8F06(iParam0->f_1089, 0f);
			OBJECT::_0x04D1D4E411CE52D0(iParam0->f_1089, 0);
		}
	}
	if (AUDIO::IS_STREAM_PLAYING(iParam0->f_1100))
	{
		AUDIO::STOP_STREAM(iParam0->f_1100);
	}
}

void func_518(char* sParam0, char* sParam1)
{
	AUDIO::_STOP_SOUND_WITH_NAME(sParam0, sParam1);
}

void func_519(var uParam0)
{
	int iVar0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_9))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_9);
	}
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_3[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		PED::DELETE_PED(&(uParam0->f_2));
	}
}

void func_520(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		iVar1 = iVar0;
		if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_35[iVar1]))
		{
			VOLUME::_DELETE_VOLUME(iParam0->f_35[iVar1]);
		}
		iVar0++;
	}
}

void func_521(int iParam0)
{
	GRAPHICS::SET_TV_CHANNEL(-1);
	if (iParam0->f_1071)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1089))
		{
			OBJECT::_0x04D1D4E411CE52D0(iParam0->f_1089, 0);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_1089));
		}
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(iParam0->f_1075))
		{
			HUD::RELEASE_NAMED_RENDERTARGET(iParam0->f_1075);
		}
		iParam0->f_1071 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1088))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_1088));
	}
}

void func_522(int iParam0)
{
	if (!bLocal_1)
	{
		WEAPON::_0xD63B4BA3A02A99E0(Global_35, iParam0);
		bLocal_1 = true;
	}
}

void func_523(int iParam0, bool bParam1)
{
	if (bLocal_1)
	{
		WEAPON::_0x404514D231DB27A0(Global_35, *iParam0);
		bLocal_1 = false;
		if (bParam1)
		{
			*iParam0 = 0;
		}
	}
}

bool func_524(int iParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		return false;
	}
	return true;
}

char* func_525()
{
	return "script_shows@show_audience@ig_arthur_applause";
}

bool func_526(var uParam0, int iParam1, vector3 vParam2)
{
	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	return true;
}

struct<11> func_527(int iParam0, int iParam1)
{
	struct<11> Var0;
	switch (iParam1)
	{
		case 1:
		case 2:
			switch (iParam0)
			{
				case 0:
					Var0 = { 2695.674f, -1354.701f, 48.474f };
					Var0.f_3 = { 0f, 0f, 42.536f };
					Var0.f_6 = { 12.531f, 9.1f, 9f };
					Var0.f_9 = "SHOW_FOCUS_CAM";
					Var0.f_10 = joaat("VOLBOX");
					break;
				case 1:
					Var0 = { 2694.922f, -1351.853f, 47.97008f };
					Var0.f_3 = { 0f, 0f, 41.00079f };
					Var0.f_6 = { 7.095272f, 3.680561f, 4.124079f };
					Var0.f_9 = "SHOW_SEATS_LEFT";
					Var0.f_10 = joaat("VOLBOX");
					break;
				case 2:
					Var0 = { 2698.459f, -1355.921f, 47.97008f };
					Var0.f_3 = { 0f, 0f, 41.00079f };
					Var0.f_6 = { 7.095272f, 3.680561f, 4.124079f };
					Var0.f_9 = "SHOW_SEATS_RIGHT";
					Var0.f_10 = joaat("VOLBOX");
					break;
				case 3:
					Var0 = { 2686.465f, -1362.323f, 47.97008f };
					Var0.f_3 = { 0f, 0f, 41.00078f };
					Var0.f_6 = { 4.481431f, 8.317011f, 4.124079f };
					Var0.f_9 = "SHOW_FRONT_BUFFER";
					Var0.f_10 = joaat("VOLBOX");
					break;
				case 4:
					Var0 = { 2695.047f, -1355.205f, 49.07318f };
					Var0.f_3 = { 0f, 0f, 39.99998f };
					Var0.f_6 = { 19.67865f, 9.058702f, 4.067907f };
					Var0.f_9 = "SHOW_CROWD_DELETE";
					Var0.f_10 = joaat("VOLBOX");
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					Var0 = { -780.252f, -1362.48f, 45.687f };
					Var0.f_3 = { 0f, 0f, 0.496f };
					Var0.f_6 = { 11.467f, 8.9f, 8f };
					Var0.f_9 = "SHOW_FOCUS_CAM";
					Var0.f_10 = joaat("VOLBOX");
					break;
				case 1:
					Var0 = { -779.944f, -1359.784f, 44.57523f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 11.65175f, 4.094016f, 3.77397f };
					Var0.f_9 = "SHOW_SEATS_LEFT";
					Var0.f_10 = joaat("VOLBOX");
					break;
				case 2:
					Var0 = { -779.944f, -1365.717f, 44.57523f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 11.65175f, 4.094016f, 3.77397f };
					Var0.f_9 = "SHOW_SEATS_RIGHT";
					Var0.f_10 = joaat("VOLBOX");
					break;
				case 3:
					Var0 = { -788.271f, -1362.526f, 44.57523f };
					Var0.f_3 = { 0f, 0f, 0f };
					Var0.f_6 = { 6.064409f, 8.635888f, 3.77397f };
					Var0.f_9 = "SHOW_FRONT_BUFFER";
					Var0.f_10 = joaat("VOLBOX");
					break;
				case 4:
					Var0 = { -778.6844f, -1362.457f, 45.677f };
					Var0.f_3 = { 0f, 0f, 0.496382f };
					Var0.f_6 = { 16f, 8.9f, 8f };
					Var0.f_9 = "SHOW_CROWD_DELETE";
					Var0.f_10 = joaat("VOLBOX");
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					Var0 = { -347.867f, 697.444f, 117.8f };
					Var0.f_3 = { 0f, 0f, 39.038f };
					Var0.f_6 = { 12.531f, 9.1f, 9f };
					Var0.f_9 = "SHOW_FOCUS_CAM";
					Var0.f_10 = joaat("VOLBOX");
					break;
				case 1:
					Var0 = { -345.8821f, 697.2924f, 117.5554f };
					Var0.f_3 = { 0f, 0f, 14.26797f };
					Var0.f_6 = { 3.162789f, 6.641141f, 2.407862f };
					Var0.f_9 = "SHOW_SEATS_LEFT";
					Var0.f_10 = joaat("VOLBOX");
					break;
				case 2:
					Var0 = { -349.6249f, 696.3406f, 117.5554f };
					Var0.f_3 = { 0f, 0f, 14.26797f };
					Var0.f_6 = { 2.509765f, 6.641141f, 2.407862f };
					Var0.f_9 = "SHOW_SEATS_RIGHT";
					Var0.f_10 = joaat("VOLBOX");
					break;
				case 3:
					Var0 = { -350.7378f, 705.5359f, 117.5554f };
					Var0.f_3 = { 0f, 0f, 14.26797f };
					Var0.f_6 = { 8.752253f, 6.118175f, 4.255467f };
					Var0.f_9 = "SHOW_FRONT_BUFFER";
					Var0.f_10 = joaat("VOLBOX");
					break;
				case 4:
					Var0 = { -347.6639f, 696.6296f, 118.3223f };
					Var0.f_3 = { 0f, 0f, 15.66641f };
					Var0.f_6 = { 7.262365f, 9.866415f, 4.317828f };
					Var0.f_9 = "SHOW_CROWD_DELETE";
					Var0.f_10 = joaat("VOLBOX");
					break;
			}
			break;
	}
	return Var0;
}

float func_528(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 189.76f;
				case 1:
					return 194.54f;
				case 2:
					return 185.02f;
				case 3:
					return 185.67f;
				case 4:
					return 186.48f;
				case 5:
					return 189.64f;
				case 6:
					return 194.87f;
				case 7:
					return 197.45f;
				case 8:
					return 192.94f;
				case 9:
					return 190.4f;
				case 10:
					return 187.74f;
				case 11:
					return 188.21f;
				case 12:
					return 191.46f;
				case 13:
					return 187.8f;
				case 14:
					return 197.77f;
				case 15:
					return 197.28f;
				case 16:
					return 195.7f;
				case 17:
					return 194.38f;
				case 18:
					return 189.91f;
				case 19:
					return 187.19f;
				case 20:
					return 183.35f;
				case 21:
					return 195.68f;
				case 22:
					return 195.08f;
				case 23:
					return 197.6f;
				case 24:
					return 192.22f;
				case 25:
					return 187.31f;
				case 26:
					return 186.63f;
				case 27:
					return 174.21f;
				case 28:
					return 175.4f;
				case 29:
					return 177.33f;
				case 30:
					return 177.62f;
				case 31:
					return 175.4f;
				case 32:
					return 176.59f;
				case 33:
					return 165.32f;
				case 34:
					return 170.16f;
				case 35:
					return 170.37f;
				case 36:
					return 174.13f;
				case 37:
					return 175.59f;
				case 38:
					return 173.64f;
				case 39:
					return 178.62f;
				case 40:
					return 169.96f;
				case 41:
					return 171.41f;
				case 42:
					return 170.19f;
				case 43:
					return 171.15f;
				case 44:
					return 174.93f;
				case 45:
					return 177.61f;
				case 46:
					return 169.6f;
				case 47:
					return 171.53f;
				case 48:
					return 172.77f;
				case 49:
					return 174.2f;
				case 50:
					return 175.33f;
				case 51:
					return 175.1f;
				case 52:
					return 176.09f;
				case 53:
					return 152.8307f;
				case 54:
					return 152.8307f;
				case 55:
					return 190.6648f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -164f;
				case 1:
					return -164f;
				case 2:
					return -164f;
				case 3:
					return -164f;
				case 4:
					return -164f;
				case 5:
					return -164f;
				case 6:
					return -164f;
				case 7:
					return -164f;
				case 8:
					return -164f;
				case 9:
					return -164f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return -37.72f;
				case 1:
					return -39.69f;
				case 2:
					return -39.97f;
				case 3:
					return -39.02f;
				case 4:
					return -52.61f;
				case 5:
					return -55.28f;
				case 6:
					return -56.79f;
				case 7:
					return -39.3f;
				case 8:
					return -38.34f;
				case 9:
					return -39.92f;
				case 10:
					return -57.96f;
				case 11:
					return -56.65f;
				case 12:
					return -38.24f;
				case 13:
					return -39.76f;
				case 14:
					return -56.13f;
				case 15:
					return -58.55f;
				case 16:
					return -54.07f;
				case 17:
					return -40.84f;
				case 18:
					return -40.21f;
				case 19:
					return -44.17f;
				case 20:
					return -52.32f;
				case 21:
					return -54.76f;
				default:
					break;
			}
			break;
		case 4:
			return -88.69f;
	}
	return -175.57f;
}

bool func_529(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
			return true;
	}
	return false;
}

int func_530()
{
	return joaat("S_M_M_MAGICLANTERN_01");
}

int func_531(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return joaat("P_MAGICLANTERNSLIDE01X");
		default:
			break;
	}
	return joaat("P_MAGICLANTERNSLIDE01X");
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

Vector3 func_533(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2693.964f, -1356.467f, 50.81907f;
		case 2:
			return 2688.162f, -1362.869f, 54.23667f;
		case 0:
			return 0f, 0f, 0f;
		case 4:
			return -782.7046f, -1364.543f, 46.42249f;
		case 3:
			return -350.1178f, 702.2504f, 117.7055f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_534(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -52.52f;
		case 2:
			return 16.48f;
		case 0:
			return 0f;
		case 4:
			return -20f;
		case 3:
			return -164.26f;
		default:
			break;
	}
	return 0f;
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("MAGICLANTERN_PROJECTOR_VAL_01");
		default:
			break;
	}
	return 0;
}

Vector3 func_536(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -349.8668f, 701.5555f, 118.5235f;
		case 1:
			return -349.7668f, 701.5555f, 118.5235f;
		case 2:
			return -349.5668f, 701.5555f, 118.5235f;
		case 3:
			return -349.9668f, 701.3555f, 118.5235f;
		case 4:
			return -349.7668f, 701.3555f, 118.5235f;
		default:
			break;
	}
	return -349.8668f, 701.5555f, 118.5235f;
}

char* func_537(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "script@shows@magic_lantern@ig2_projectionist@thebear";
		case 22:
		case 32:
			return "script@shows@magic_lantern@ig2_projectionist@legendofblackwater";
		case 23:
		case 33:
			return "script@shows@magic_lantern@ig2_projectionist@manflight";
		case 24:
		case 34:
			return "script@shows@magic_lantern@ig2_projectionist@saviorsandsavages";
		case 25:
		case 35:
			return "script@shows@magic_lantern@ig2_projectionist@ghastlyserenade";
	}
	return "script@shows@magic_lantern@ig2_projectionist@thebear";
}

char* func_538(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "pl_action";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 22:
		case 32:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 23:
		case 33:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 24:
		case 34:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
		case 25:
		case 35:
			switch (iParam1)
			{
				case 0:
					return "PL_A_SitLoop";
				case 1:
					return "PL_ACTION";
				case 2:
					return "PL_G_SitDown";
				default:
					break;
			}
			break;
	}
	return "[SHOW_PROJECTIONIST_GET_PLAYLIST] fail - no playlist";
}

Vector3 func_539(int iParam0)
{
	switch (iParam0)
	{
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return -350.055f, 701.392f, 117.679f;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 2694.933f, -1356.293f, 50.879f;
	}
	return -350.055f, 701.392f, 117.679f;
}

Vector3 func_540(int iParam0)
{
	switch (iParam0)
	{
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0f, 0f, 30f;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 7.1f, 0f, 145.6f;
	}
	return 0f, 0f, 30f;
}

char* func_541(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "PROJECTIONIST";
		case 22:
		case 32:
			return "PROJECTIONIST";
		case 23:
		case 33:
			return "PROJECTIONIST";
		case 24:
		case 34:
			return "PROJECTIONIST";
		case 25:
		case 35:
			return "PROJECTIONIST";
	}
	return "PROJECTIONIST";
}

char* func_542(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 22:
		case 32:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 23:
		case 33:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 24:
		case 34:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
		case 25:
		case 35:
			switch (iParam1)
			{
				case 0:
					return "SLIDE0";
				case 1:
					return "SLIDE1";
				case 2:
					return "SLIDE2";
				case 3:
					return "SLIDE3";
				case 4:
					return "SLIDE4";
				default:
					break;
			}
			break;
	}
	return "SLIDE0";
}

void func_543()
{
	Global_40.f_9028.f_15++;
	Global_40.f_9028.f_13++;
}

void func_544()
{
	Global_40.f_9028.f_16++;
	Global_40.f_9028.f_13++;
}

struct<21> func_545(int iParam0, int iParam1, int iParam2)
{
	struct<21> Var0;
	Var0 = 4;
	Var0.f_5 = 4;
	Var0.f_10 = 4;
	Var0.f_15 = 4;
	Var0[0] = -1;
	Var0[1] = -1;
	Var0[2] = -1;
	Var0[3] = -1;
	Var0.f_5[0] = 0;
	Var0.f_5[1] = 0;
	Var0.f_5[2] = 0;
	Var0.f_5[3] = 0;
	Var0.f_10[0] = -1;
	Var0.f_10[1] = -1;
	Var0.f_10[2] = -1;
	Var0.f_10[3] = -1;
	Var0.f_15[0] = 0;
	Var0.f_15[1] = 0;
	Var0.f_15[2] = 0;
	Var0.f_15[3] = 0;
	Var0.f_20 = "";
	if (iParam2 == 49)
	{
		Var0.f_10[0] = 35;
	}
	if (iParam2 == 48)
	{
		Var0.f_10[0] = 2;
		Var0.f_15[0] = 100;
	}
	switch (iParam0)
	{
		case 9:
			switch (iParam2)
			{
				case 1:
					Var0[0] = 16;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					Var0.f_20 = "mc_set1_int_mc_appears";
					break;
				case 2:
					Var0[0] = 16;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 90;
					Var0.f_15[1] = 10;
					Var0.f_20 = "mc_set1_int_name_applause";
					break;
				case 3:
					Var0.f_20 = "mc_set1_int_ticket_price_applause";
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 5:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					Var0.f_20 = "mc_bulc_int_act_discovery";
					break;
				case 6:
					Var0[0] = 24;
					Var0.f_5[0] = 75;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					break;
				case 7:
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					Var0.f_20 = "mc_bulc_int_name_applause";
					break;
				case 8:
					Var0[0] = 21;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					Var0.f_20 = "mc_outro_pos_finishes";
					break;
				case 9:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 100;
					break;
				case 10:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					Var0.f_20 = "mc_outro_neg_applause";
					break;
				case 11:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "mc_outro_neg_finishes";
					break;
				case 12:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 100;
					Var0.f_20 = "mc_outro_neg_finishes";
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_20 = "bullet_catch_initial_banter";
					break;
				case 14:
					Var0.f_20 = "bullet_catch_horrible_disease";
					break;
				case 15:
					Var0[0] = 22;
					Var0.f_5[0] = 75;
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					Var0.f_20 = "bullet_catch_gun_reveal";
					break;
				case 16:
					Var0[0] = 20;
					Var0.f_5[0] = 40;
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					Var0.f_20 = "bullet_catch_bedding_my_wife";
					break;
				case 17:
					Var0[0] = 24;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 40;
					Var0.f_20 = "bullet_catch_i_joke";
					break;
				case 18:
					Var0[0] = 23;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					Var0.f_20 = "bullet_catch_in_my_teeth";
					break;
				case 19:
					break;
				case 20:
					Var0.f_10[0] = 9;
					Var0.f_15[0] = 100;
					break;
				case 21:
					Var0[0] = 19;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 22:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					Var0.f_20 = "bullet_catch_as_if_it_were_nothing";
					break;
				case 23:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					break;
				case 24:
					Var0.f_10[0] = 0;
					Var0.f_15[0] = 100;
					break;
				case 25:
					Var0[0] = 20;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_lets_do_that_again";
					break;
				case 26:
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					break;
				case 27:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 28:
					Var0[0] = 19;
					Var0[1] = 24;
					Var0.f_5[0] = 60;
					Var0.f_5[1] = 40;
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 29:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 30:
					Var0[0] = 16;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_player_volunteers";
					break;
				case 31:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_take_aim";
					break;
				case 32:
					Var0.f_20 = "bullet_catch_waiting_for_shot";
					break;
				case 33:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_g_alt_player_shot";
					break;
				case 34:
					Var0[0] = 17;
					Var0[1] = 23;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 50;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_g_alt_player_shot_reveal";
					break;
				case 35:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_g_alt_player_shot_stomach";
					break;
				case 36:
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 6;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					Var0.f_20 = "bullet_catch_supposed_to_shoot_head";
					break;
				case 37:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_20 = "bullet_catch_absolute_pillock";
					break;
				case 38:
					Var0[0] = 16;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 8;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					Var0.f_20 = "bullet_catch_npc_volunteers";
					break;
				case 39:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_npc_aims";
					break;
				case 40:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shoots";
					break;
				case 41:
					Var0[0] = 17;
					Var0[1] = 23;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 50;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shot_reveal";
					break;
				case 42:
					Var0[0] = 16;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_npc_volunteers";
					break;
				case 43:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_npc_aims";
					break;
				case 44:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shoots";
					break;
				case 45:
					Var0[0] = 17;
					Var0[1] = 23;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 50;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shot_reveal";
					break;
			}
			break;
		case 12:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 2:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 6;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 3:
					Var0[0] = 25;
					Var0[1] = 24;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 6:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 6;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 60;
					break;
				case 15:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 40;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 40;
					break;
				case 17:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				case 18:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 19:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 40;
					break;
				case 20:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 70;
					break;
				case 21:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 40;
					break;
				case 22:
					Var0[0] = 23;
					Var0[1] = 20;
					Var0[2] = 16;
					Var0[3] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_5[3] = 30;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 23:
					Var0[0] = 25;
					Var0[1] = 23;
					Var0[2] = 16;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 50;
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 40;
					break;
				case 24:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0[2] = 16;
					Var0[3] = 25;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[1] = 10;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					break;
				case 25:
					Var0[0] = 17;
					Var0.f_5[0] = 10;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					break;
				case 26:
					Var0[0] = 31;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 7:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 3:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 4:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 20;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 14:
					Var0[0] = 24;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 15:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 16:
					Var0[0] = 24;
					Var0[1] = 16;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 17:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 18:
					Var0[0] = 17;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 5:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 40;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				case 5:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 6:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 7:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 30;
					break;
				case 13:
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 14:
					Var0[0] = 25;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 15:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 90;
					break;
				case 16:
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_10[3] = 11;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 50;
					Var0.f_15[3] = 10;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 50;
					break;
				case 18:
					Var0[0] = 17;
					Var0.f_5[0] = 5;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 19:
					Var0[0] = 17;
					Var0.f_5[0] = 60;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 16:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 13:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 50;
					break;
				case 15:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 50;
					break;
				case 17:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 18:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 40;
					break;
				case 19:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 20:
					Var0.f_10[0] = 9;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 21:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 40;
					break;
				case 22:
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 60;
					break;
				case 23:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 25;
					Var0.f_5[1] = 25;
					Var0.f_5[2] = 25;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 18:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 6:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 3:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 14:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 15:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 16:
					Var0[0] = 16;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					break;
				case 18:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 19:
					Var0[0] = 16;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
				case 20:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 21:
					Var0.f_10[0] = 9;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				case 22:
					Var0.f_10[0] = 9;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				case 23:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 24:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 60;
					break;
				case 25:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 40;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 17:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				case 5:
					break;
				case 6:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 7:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 10;
					break;
				case 13:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 15:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 80;
					break;
				case 17:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 10;
					break;
				case 18:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 19:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 10;
					break;
				case 20:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 21:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 15;
					Var0.f_15[1] = 85;
					break;
				case 22:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 23:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 40;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 10:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 2:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 3:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 20;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 0;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 14:
					Var0[0] = 23;
					Var0.f_5[0] = 15;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 15:
					Var0[0] = 23;
					Var0.f_5[0] = 15;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 16:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 0;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 60;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				case 17:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 18:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 15;
					Var0.f_5[1] = 15;
					Var0.f_5[2] = 15;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 19:
					Var0[0] = 26;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 20:
					Var0[0] = 17;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 15:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 2:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 3:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 4:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 40;
					break;
				case 5:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 13:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 5;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 60;
					break;
				case 14:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 5;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 60;
					Var0.f_15[2] = 10;
					break;
				case 15:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 16:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 5;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 5;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 18:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 5;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 19:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 20:
					Var0[0] = 25;
					Var0[1] = 24;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 21:
					Var0[0] = 24;
					Var0[1] = 25;
					Var0.f_5[0] = 40;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 22:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 23:
					Var0[0] = 23;
					Var0.f_5[0] = 40;
					Var0.f_10[0] = 6;
					Var0.f_15[0] = 100;
					break;
				case 24:
					Var0[0] = 24;
					Var0[1] = 25;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 25:
					Var0[0] = 23;
					Var0[1] = 24;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 6;
					Var0.f_15[0] = 100;
					break;
				case 26:
					Var0[0] = 23;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 6;
					Var0.f_15[0] = 100;
					break;
				case 27:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 28:
					Var0[0] = 17;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 29:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 5;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 15;
					Var0.f_15[2] = 15;
					Var0.f_15[3] = 20;
					break;
			}
			break;
		case 11:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				case 2:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					break;
				case 3:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 60;
					break;
				case 4:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 70;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					break;
				case 6:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 13:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 14:
					break;
				case 15:
					Var0[0] = 19;
					Var0.f_5[0] = 10;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 16:
					Var0[0] = 24;
					Var0.f_5[0] = 15;
					Var0.f_10[0] = 0;
					Var0.f_15[0] = 100;
					break;
				case 17:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 18:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 19:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				case 20:
					Var0[0] = 20;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 0;
					Var0.f_15[0] = 100;
					break;
				case 21:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 9;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 30;
					break;
				case 22:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 10;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					break;
				case 23:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 23;
					Var0[3] = 22;
					Var0.f_5[0] = 25;
					Var0.f_5[1] = 25;
					Var0.f_5[2] = 25;
					Var0.f_5[3] = 25;
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_10[3] = 6;
					Var0.f_15[0] = 25;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					Var0.f_15[3] = 25;
					break;
				case 24:
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_10[3] = 6;
					Var0.f_15[0] = 25;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					Var0.f_15[3] = 25;
					break;
			}
			break;
		case 13:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 2:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 3:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 4:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 5:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 6:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 10;
					break;
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				case 15:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 17:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 18:
					Var0[0] = 16;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					break;
				case 19:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 20:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 21:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 22:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0[2] = 19;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 23:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
			}
			break;
		case 14:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 20;
					break;
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 15:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 16:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_10[3] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 17:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 18:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 19:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_10[3] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 20:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 21:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 60;
					break;
				case 22:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 23:
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 30;
					break;
				case 24:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 10;
					break;
				case 2:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 14:
					Var0[0] = 16;
					Var0[1] = 25;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 4;
					Var0.f_15[0] = 100;
					break;
				case 15:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 18:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 19:
					Var0[0] = 25;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
				case 20:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 50;
					break;
				case 21:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 8:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 10;
					break;
				case 3:
					Var0[0] = 16;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 10;
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 10;
					break;
				case 14:
					Var0.f_10[0] = 4;
					Var0.f_15[0] = 50;
					break;
				case 15:
					Var0[0] = 16;
					Var0[1] = 17;
					Var0.f_5[0] = 80;
					Var0.f_5[1] = 20;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 6:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 3:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 13:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				case 14:
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 15:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 90;
					break;
				case 16:
					Var0[0] = 25;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
				case 17:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				case 18:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 30;
					break;
				case 19:
					Var0[0] = 25;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 20:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 40;
					Var0.f_15[3] = 10;
					break;
				case 21:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 22:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 10;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				case 23:
					Var0[0] = 17;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 20:
			switch (iParam2)
			{
				case 1:
					switch (iParam1)
					{
						case 9:
							Var0[0] = 16;
							Var0.f_5[0] = 100;
							Var0.f_10[0] = 2;
							Var0.f_10[1] = 3;
							Var0.f_15[0] = 75;
							Var0.f_15[1] = 25;
							Var0.f_20 = "mc_set1_int_mc_appears";
							break;
						case 5:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 50;
							Var0.f_15[1] = 50;
							break;
						case 8:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 50;
							Var0.f_15[1] = 50;
							break;
						case 17:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 50;
							Var0.f_15[1] = 50;
							break;
						case 13:
							Var0.f_10[0] = 10;
							Var0.f_10[1] = 11;
							Var0.f_15[0] = 80;
							Var0.f_15[1] = 20;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 9:
							Var0[0] = 16;
							Var0.f_5[0] = 50;
							Var0.f_10[0] = 2;
							Var0.f_10[1] = 3;
							Var0.f_15[0] = 90;
							Var0.f_15[1] = 10;
							Var0.f_20 = "mc_set1_int_name_applause";
							break;
						case 5:
							Var0.f_10[0] = 1;
							Var0.f_10[1] = 2;
							Var0.f_10[2] = 3;
							Var0.f_10[3] = 0;
							Var0.f_15[0] = 10;
							Var0.f_15[1] = 50;
							Var0.f_15[2] = 20;
							Var0.f_15[3] = 20;
							break;
						case 8:
							Var0.f_10[0] = 2;
							Var0.f_10[1] = 0;
							Var0.f_10[2] = 8;
							Var0.f_15[0] = 60;
							Var0.f_15[1] = 30;
							Var0.f_15[2] = 10;
							break;
						case 17:
							Var0.f_10[0] = 4;
							Var0.f_10[1] = 2;
							Var0.f_10[2] = 8;
							Var0.f_10[3] = 0;
							Var0.f_15[0] = 10;
							Var0.f_15[1] = 50;
							Var0.f_15[2] = 20;
							Var0.f_15[3] = 20;
							break;
						case 13:
							Var0.f_10[0] = 1;
							Var0.f_10[1] = 2;
							Var0.f_10[2] = 3;
							Var0.f_10[3] = 0;
							Var0.f_15[0] = 20;
							Var0.f_15[1] = 50;
							Var0.f_15[2] = 10;
							Var0.f_15[3] = 20;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 9:
							Var0.f_20 = "mc_set1_int_ticket_price_applause";
							break;
						case 5:
							Var0[0] = 24;
							Var0.f_5[0] = 40;
							Var0.f_10[0] = 2;
							Var0.f_15[0] = 100;
							break;
						case 8:
							Var0[0] = 16;
							Var0.f_5[0] = 20;
							Var0.f_10[0] = 2;
							Var0.f_15[0] = 100;
							break;
						case 17:
							Var0[0] = 24;
							Var0.f_5[0] = 30;
							Var0.f_10[0] = 2;
							Var0.f_15[0] = 100;
							break;
						case 13:
							Var0.f_10[0] = 10;
							Var0.f_10[1] = 11;
							Var0.f_15[0] = 80;
							Var0.f_15[1] = 20;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 9:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 2;
							Var0.f_15[0] = 80;
							Var0.f_15[1] = 20;
							break;
						case 5:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_10[2] = 3;
							Var0.f_15[0] = 40;
							Var0.f_15[1] = 40;
							Var0.f_15[2] = 20;
							break;
						case 8:
							break;
						case 17:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 40;
							Var0.f_15[1] = 60;
							break;
						case 13:
							break;
					}
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 6:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 7:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 8:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 13:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 6;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 30;
					break;
				case 14:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 15:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 16:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 18:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_10[3] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				case 19:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 24;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 20:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 24;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 21:
					Var0[0] = 20;
					Var0[1] = 19;
					Var0[2] = 23;
					Var0[3] = 22;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_5[3] = 20;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				case 22:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 23:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 24:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 25:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 26:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 27:
					Var0[0] = 24;
					Var0[1] = 23;
					Var0[2] = 22;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 40;
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 40;
					break;
				case 28:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 29:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 60;
					Var0.f_15[2] = 10;
					break;
			}
			break;
	}
	return Var0;
}

void func_546(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (iParam2 >= 56)
	{
		iParam2 = 55;
	}
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*10*/]))
		{
			PED::SET_PED_CAN_BE_TARGETTED((*uParam0)[iVar0 /*10*/], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*10*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam0)[iVar0 /*10*/], joaat("REL_NO_RELATIONSHIP"));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0[iVar0 /*10*/]);
		}
		iVar0++;
	}
}

bool func_547()
{
	int iVar0;
	bool bVar1;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-348.416f, 699.4218f, 117.6852f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		bVar1 = true;
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_closed"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_closed", 0);
			bVar1 = false;
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_open"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_open", true);
			bVar1 = false;
		}
		if (bVar1)
		{
			return true;
		}
	}
	return false;
}

bool func_548()
{
	int iVar0;
	bool bVar1;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-348.416f, 699.4218f, 117.6852f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		bVar1 = true;
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_closed"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_closed", true);
			bVar1 = false;
		}
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_open"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_open", 0);
			bVar1 = false;
		}
		if (bVar1)
		{
			return true;
		}
	}
	return false;
}

struct<11> func_549(int iParam0, int iParam1)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2543.514f, -1303.811f, 47.16364f };
					Var0.f_3 = { 0f, 0f, 9.568836f };
					Var0.f_6 = { 4.336886f, 2f, 2.155625f };
					Var0.f_10 = "SHOW_BLOCKING_ROW1_LEFT";
					Var0.f_9 = joaat("VOLBOX");
					break;
				case 1:
					Var0 = { 2549.294f, -1303.83f, 47.04182f };
					Var0.f_3 = { 0f, 0f, -9.89514f };
					Var0.f_6 = { 4.260345f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW1_RIGHT";
					Var0.f_9 = joaat("VOLBOX");
					break;
				case 2:
					Var0 = { 2543.097f, -1302.039f, 47.34119f };
					Var0.f_3 = { 0f, 0f, 8.842982f };
					Var0.f_6 = { 5.463117f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW2_LEFT";
					Var0.f_9 = joaat("VOLBOX");
					break;
				case 3:
					Var0 = { 2550.183f, -1302.069f, 47.34119f };
					Var0.f_3 = { 0f, 0f, -10.03278f };
					Var0.f_6 = { 4.277905f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW2_RIGHT";
					Var0.f_9 = joaat("VOLBOX");
					break;
				case 4:
					Var0 = { 2542.933f, -1300.3f, 47.63106f };
					Var0.f_3 = { 0f, 0f, 9.537826f };
					Var0.f_6 = { 5.29451f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW3_LEFT";
					Var0.f_9 = joaat("VOLBOX");
					break;
				case 5:
					Var0 = { 2550.596f, -1300.471f, 47.63106f };
					Var0.f_3 = { 0f, 0f, -9.448911f };
					Var0.f_6 = { 3.957135f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW3_RIGHT";
					Var0.f_9 = joaat("VOLBOX");
					break;
				case 6:
					Var0 = { 2542.582f, -1298.776f, 47.90404f };
					Var0.f_3 = { 0f, 0f, 9.277945f };
					Var0.f_6 = { 4.706136f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW4_LEFT";
					Var0.f_9 = joaat("VOLBOX");
					break;
				case 7:
					Var0 = { 2549.868f, -1298.625f, 47.904f };
					Var0.f_3 = { 0f, 0f, -9.896723f };
					Var0.f_6 = { 5.116724f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW4_RIGHT";
					Var0.f_9 = joaat("VOLBOX");
					break;
			}
			break;
	}
	return Var0;
}

int func_550(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 53:
				case 54:
					return 2;
				case 55:
				case 56:
					return 1;
				default:
					break;
			}
			return 0;
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
	}
	return 0;
}

char* func_551(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_452(0);
		case 1:
			return __LIB_16__::func_452(0);
		case 2:
			return __LIB_16__::func_452(2);
		case 3:
			return __LIB_16__::func_452(2);
		case 4:
			return __LIB_16__::func_452(3);
		case 5:
			return __LIB_16__::func_452(4);
		case 6:
			return __LIB_16__::func_452(5);
		case 7:
			return __LIB_16__::func_452(5);
		case 8:
			return __LIB_16__::func_452(6);
		case 9:
			return __LIB_16__::func_452(6);
		case 10:
			return __LIB_16__::func_452(6);
		case 11:
			return __LIB_16__::func_452(6);
		case 12:
			return __LIB_16__::func_452(7);
		case 13:
			return __LIB_16__::func_452(7);
		case 14:
			return __LIB_16__::func_452(8);
		case 15:
			return __LIB_16__::func_452(8);
		case 16:
			return __LIB_16__::func_452(1);
		case 17:
			return __LIB_16__::func_452(1);
		case 18:
			return __LIB_16__::func_452(1);
		case 19:
			return __LIB_16__::func_452(1);
		case 20:
			return __LIB_16__::func_452(1);
		case 21:
			return __LIB_16__::func_452(1);
		case 22:
			return __LIB_16__::func_452(1);
		case 23:
			return __LIB_16__::func_452(1);
		case 24:
			return __LIB_16__::func_452(1);
		case 25:
			return __LIB_16__::func_452(1);
		case 26:
			return __LIB_16__::func_452(9);
		case 27:
			return __LIB_16__::func_452(9);
		case 28:
			return __LIB_16__::func_452(9);
		case 29:
			return __LIB_16__::func_452(9);
		case 30:
			return __LIB_16__::func_452(9);
		case 31:
			return __LIB_16__::func_452(10);
		case 32:
			return __LIB_16__::func_452(10);
		case 33:
			return __LIB_16__::func_452(10);
		case 34:
			return __LIB_16__::func_452(11);
		default:
			break;
	}
	return "FAIL";
}

int func_552(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 3;
		case 7:
			return 4;
		case 8:
			return 3;
		case 5:
			return 4;
		case 6:
			return 4;
		case 10:
			return 3;
		case 11:
			return 3;
		case 15:
			return 3;
		case 18:
			return 3;
		case 12:
			return 5;
		case 16:
			return 5;
		case 17:
			return 5;
		case 20:
			return 2;
		case 13:
			return 5;
		case 14:
			return 5;
		case 19:
			return 3;
		default:
			break;
	}
	return 0;
}

bool func_553(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 15:
		case 18:
		case 20:
			return false;
		case 7:
		case 8:
		case 12:
		case 13:
		case 14:
		case 16:
		case 17:
		case 19:
			return true;
		default:
			break;
	}
	return false;
}

bool func_554(int iParam0)
{
	float fVar0;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_48, false))
	{
		return false;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_48);
	switch (*iParam0)
	{
		case 9:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, "PL_A_Performance"))
			{
				if (fVar0 > 0.73f && fVar0 < 0.76f)
				{
					return true;
				}
			}
			break;
		case 7:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, "PL_P1"))
			{
				if (fVar0 > 0.26f && fVar0 < 0.28f)
				{
					return true;
				}
				if (fVar0 > 0.72f && fVar0 < 0.8f)
				{
					return true;
				}
			}
			break;
		case 8:
			break;
		case 10:
			break;
		case 11:
			break;
		case 15:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, "pbl_CrowdChallenge_P1"))
			{
				return true;
			}
			break;
		case 20:
			break;
		case 18:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, "Pbl_Intro"))
			{
				if (fVar0 > 0.95f && fVar0 < 1f)
				{
					return true;
				}
			}
			break;
		case 5:
		case 6:
			break;
		case 12:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, "Pl_BreathLoop"))
			{
				return true;
			}
			break;
		case 13:
		case 14:
			break;
		case 16:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, "PL_KissLoop"))
			{
				return true;
			}
			break;
		case 17:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_48, "PL_KissLoop"))
			{
				return true;
			}
			break;
		case 19:
			return false;
	}
	return false;
}

char* func_555(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "idle_08_maryjohnapplause";
		case 1:
			return "idle_08_maryjohnapplause_standing";
		default:
			break;
	}
	return "idle_08_maryjohnapplause_standing";
}

Vector3 func_556(int iParam0)
{
	vector3 vVar0[24];
	switch (iParam0)
	{
		case -1:
			StringCopy(&cVar0, "", 24);
			break;
		case 0:
			StringCopy(&cVar0, "SHRCT_PRCHEER_A", 24);
			break;
		case 1:
			StringCopy(&cVar0, "SHRCT_PRCHEER_J", 24);
			break;
		case 2:
			StringCopy(&cVar0, "SHRCT_PRBOO_A", 24);
			break;
		case 3:
			StringCopy(&cVar0, "SHRCT_PRBOO_J", 24);
			break;
		case 4:
			StringCopy(&cVar0, "SHRCT_GENCHEERA", 24);
			break;
		case 5:
			StringCopy(&cVar0, "SHRCT_GENCHEERJ", 24);
			break;
		case 6:
			StringCopy(&cVar0, "SHRCT_GENBOOA", 24);
			break;
		case 7:
			StringCopy(&cVar0, "SHRCT_GENBOOJ", 24);
			break;
		case 8:
			StringCopy(&cVar0, "SHRCT_FEMCHEERA", 24);
			break;
		case 9:
			StringCopy(&cVar0, "SHRCT_FEMCHEERJ", 24);
			break;
		case 10:
			StringCopy(&cVar0, "SHRCT_FEMBOOA", 24);
			break;
		case 11:
			StringCopy(&cVar0, "SHRCT_FEMBOOJ", 24);
			break;
		case 12:
			StringCopy(&cVar0, "SHBC_CHEER_A", 24);
			break;
		case 13:
			StringCopy(&cVar0, "SHBC_CHEER_J", 24);
			break;
		case 14:
			StringCopy(&cVar0, "SHBC_BOO_A", 24);
			break;
		case 15:
			StringCopy(&cVar0, "SHBC_BOO_J", 24);
			break;
		case 16:
			StringCopy(&cVar0, "BND1_CHEER_A", 24);
			break;
		case 17:
			StringCopy(&cVar0, "BND1_CHEER_J", 24);
			break;
		case 18:
			StringCopy(&cVar0, "BND1_BOO_A", 24);
			break;
		case 19:
			StringCopy(&cVar0, "BND1_BOO_J", 24);
			break;
		case 20:
			StringCopy(&cVar0, "BND2_CHEER_A", 24);
			break;
		case 21:
			StringCopy(&cVar0, "BND2_CHEER_J", 24);
			break;
		case 22:
			StringCopy(&cVar0, "BND2_BOO_A", 24);
			break;
		case 23:
			StringCopy(&cVar0, "BND2_BOO_J", 24);
			break;
		case 24:
			StringCopy(&cVar0, "SFIRE_CHEER_A", 24);
			break;
		case 25:
			StringCopy(&cVar0, "SFIRE_CHEER_J", 24);
			break;
		case 26:
			StringCopy(&cVar0, "SFIRE_BOO_A", 24);
			break;
		case 27:
			StringCopy(&cVar0, "SFIRE_BOO_J", 24);
			break;
		case 28:
			StringCopy(&cVar0, "SHCAN_CHEER_A", 24);
			break;
		case 29:
			StringCopy(&cVar0, "SHCAN_CHEER_J", 24);
			break;
		case 30:
			StringCopy(&cVar0, "SHCAN_BOO_A", 24);
			break;
		case 31:
			StringCopy(&cVar0, "SHCAN_BOO_J", 24);
			break;
		case 32:
			StringCopy(&cVar0, "SSNKE_CHEER_A", 24);
			break;
		case 33:
			StringCopy(&cVar0, "SSNKE_CHEER_J", 24);
			break;
		case 34:
			StringCopy(&cVar0, "SSNKE_BOO_A", 24);
			break;
		case 35:
			StringCopy(&cVar0, "SSNKE_BOO_J", 24);
			break;
		case 36:
			StringCopy(&cVar0, "SSNKE_BRN_POS_A", 24);
			break;
		case 37:
			StringCopy(&cVar0, "SSNKE_BRN_POS_J", 24);
			break;
		case 38:
			StringCopy(&cVar0, "SSNKE_BRN_NEG_A", 24);
			break;
		case 39:
			StringCopy(&cVar0, "SSNKE_BRN_NEG_J", 24);
			break;
		case 40:
			StringCopy(&cVar0, "SHFOS_CHEER_A", 24);
			break;
		case 41:
			StringCopy(&cVar0, "SHFOS_CHEER_J", 24);
			break;
		case 42:
			StringCopy(&cVar0, "SHFOS_BOO_A", 24);
			break;
		case 43:
			StringCopy(&cVar0, "SHFOS_BOO_J", 24);
			break;
		case 44:
			StringCopy(&cVar0, "SHEA_CHEER_A", 24);
			break;
		case 45:
			StringCopy(&cVar0, "SHEA_CHEER_J", 24);
			break;
		case 46:
			StringCopy(&cVar0, "SHEA_BOO_A", 24);
			break;
		case 47:
			StringCopy(&cVar0, "SHEA_BOO_J", 24);
			break;
		case 48:
			StringCopy(&cVar0, "SHFF_CHEER_A", 24);
			break;
		case 49:
			StringCopy(&cVar0, "SHFF_CHEER_J", 24);
			break;
		case 50:
			StringCopy(&cVar0, "SHFF_BOO_A", 24);
			break;
		case 51:
			StringCopy(&cVar0, "SHFF_BOO_J", 24);
			break;
		case 52:
			StringCopy(&cVar0, "SHFF_FAUDC_A", 24);
			break;
		case 53:
			StringCopy(&cVar0, "SHFF_FAUDC_J", 24);
			break;
		case 54:
			StringCopy(&cVar0, "SHFF_FAUDB_A", 24);
			break;
		case 55:
			StringCopy(&cVar0, "SHFF_FAUDB_J", 24);
			break;
		case 56:
			StringCopy(&cVar0, "SHEA_APPEARC_A", 24);
			break;
		case 57:
			StringCopy(&cVar0, "SHEA_APPEARC_J", 24);
			break;
		case 58:
			StringCopy(&cVar0, "SHEA_APPEARB_A", 24);
			break;
		case 59:
			StringCopy(&cVar0, "SHEA_APPEARB_J", 24);
			break;
		case 60:
			StringCopy(&cVar0, "SHSD_CHEER_A", 24);
			break;
		case 61:
			StringCopy(&cVar0, "SHSD_CHEER_J", 24);
			break;
		case 62:
			StringCopy(&cVar0, "SHSD_BOO_A", 24);
			break;
		case 63:
			StringCopy(&cVar0, "SHSD_BOO_J", 24);
			break;
		case 64:
			StringCopy(&cVar0, "SHEN_CHEER_A", 24);
			break;
		case 65:
			StringCopy(&cVar0, "SHEN_CHEER_J", 24);
			break;
		case 66:
			StringCopy(&cVar0, "SHEN_BOO_A", 24);
			break;
		case 67:
			StringCopy(&cVar0, "SHEN_BOO_J", 24);
			break;
		case 68:
			StringCopy(&cVar0, "SHEN_HANGED_A", 24);
			break;
		case 69:
			StringCopy(&cVar0, "SHEN_HANGED_J", 24);
			break;
		case 70:
			StringCopy(&cVar0, "SHEN_SHOTDWN_A", 24);
			break;
		case 71:
			StringCopy(&cVar0, "SHEN_SHOTDWN_J", 24);
			break;
		case 72:
			StringCopy(&cVar0, "RODDF_CHEER_A", 24);
			break;
		case 73:
			StringCopy(&cVar0, "RODDF_CHEER_J", 24);
			break;
		case 74:
			StringCopy(&cVar0, "RODDF_BOO_A", 24);
			break;
		case 75:
			StringCopy(&cVar0, "RODDF_BOO_J", 24);
			break;
	}
	return cVar0;
}

void func_557(int iParam0, int iParam1)
{
	if (iParam0->f_9 != iParam1)
	{
		iParam0->f_9 = iParam1;
		__LIB_16__::func_444(iParam0);
	}
}

int func_558(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (iParam1 == -1 || !__LIB_0__::func_1(Global_1394141.f_1325, -2147483648))
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (!__LIB_0__::func_1(Global_1394141.f_1325, 1))
	{
		iVar1 = __LIB_12__::func_807(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar3 = iVar0;
			if (__LIB_12__::func_810(uParam0[iVar0 /*5*/], __LIB_12__::func_808(iParam1), __LIB_12__::func_809(iParam1, iVar3), 1065353216 /* Float: 1f */))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			__LIB_1__::func_581(&(Global_1394141.f_1325), 1);
		}
	}
	iVar2 = 0;
	if (!__LIB_0__::func_1(Global_1394141.f_1325, 8))
	{
		iVar1 = __LIB_12__::func_811(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar4 = iVar0;
			if (__LIB_12__::func_810(&(uParam0->f_31[iVar0 /*5*/]), __LIB_12__::func_812(iParam1), __LIB_12__::func_813(iParam1, iVar4), 1065353216 /* Float: 1f */))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			__LIB_1__::func_581(&(Global_1394141.f_1325), 8);
		}
	}
	iVar2 = 0;
	if (!__LIB_0__::func_1(Global_1394141.f_1325, 2048))
	{
		iVar1 = __LIB_12__::func_814(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar5 = iVar0;
			if (__LIB_12__::func_810(&(uParam0->f_107[iVar0 /*5*/]), __LIB_12__::func_815(iParam1), __LIB_12__::func_816(iParam1, iVar5), 1065353216 /* Float: 1f */))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			__LIB_1__::func_581(&(Global_1394141.f_1325), 2048);
		}
	}
	switch (iParam1)
	{
		case 0:
			if (!__LIB_0__::func_1(Global_1394141.f_1325, 64) && __LIB_12__::func_810(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_817(iParam1, 0), __LIB_12__::func_818(iParam1, 0), 1065353216 /* Float: 1f */))
			{
				__LIB_1__::func_581(&(Global_1394141.f_1325), 64);
			}
			if ((!__LIB_0__::func_1(Global_1394141.f_1325, 16384) && __LIB_12__::func_810(&(uParam0->f_118[1 /*5*/]), __LIB_12__::func_817(iParam1, 1), __LIB_12__::func_818(iParam1, 1), 1065353216 /* Float: 1f */)) && __LIB_12__::func_810(&(uParam0->f_118[2 /*5*/]), __LIB_12__::func_817(iParam1, 2), __LIB_12__::func_818(iParam1, 2), 1065353216 /* Float: 1f */))
			{
				__LIB_1__::func_581(&(Global_1394141.f_1325), 16384);
			}
			break;
		case 1:
		case 2:
			iVar2 = 0;
			if (!__LIB_0__::func_1(Global_1394141.f_1325, 2097152))
			{
				iVar1 = __LIB_12__::func_819(iParam1);
				iVar0 = 0;
				while (iVar0 <= (iVar1 - 1))
				{
					iVar6 = iVar0;
					if (__LIB_12__::func_810(&(uParam0->f_118[iVar0 /*5*/]), __LIB_12__::func_817(iParam1, 0), __LIB_12__::func_818(iParam1, iVar6), 1065353216 /* Float: 1f */))
					{
						iVar2++;
					}
					iVar0++;
				}
				if (iVar2 >= iVar1)
				{
					__LIB_1__::func_581(&(Global_1394141.f_1325), 2097152);
				}
			}
			break;
	}
	return 1;
}

void func_559(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (!iParam0->f_1070)
	{
		return;
	}
	bVar0 = PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SEAT_CHAIR_DYNAMIC"));
	bVar1 = __LIB_1__::func_205(Global_35, iParam0->f_35[1], 1, 0);
	bVar2 = __LIB_1__::func_205(Global_35, iParam0->f_35[2], 1, 0);
	if (bVar0)
	{
		if (bVar1)
		{
			if (!__LIB_0__::func_1(iParam0->f_16, 2048) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_1088))
			{
				if (CAM::_0xDD0B7C5AE58F721D(&(iParam0->f_1101)) && !CAM::_0x927B810E43E99932(&(iParam0->f_1101)))
				{
					CAM::_0xB8B207C34285E978(&(iParam0->f_1101));
					__LIB_1__::func_581(&(iParam0->f_16), 2048);
				}
			}
		}
		if (bVar2)
		{
			if (!__LIB_0__::func_1(iParam0->f_16, 2048) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_1088))
			{
				if (CAM::_0xDD0B7C5AE58F721D(&(iParam0->f_1117)) && !CAM::_0x927B810E43E99932(&(iParam0->f_1117)))
				{
					CAM::_0xB8B207C34285E978(&(iParam0->f_1117));
				}
			}
		}
	}
	else
	{
		if (CAM::_0x927B810E43E99932(&(iParam0->f_1101)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(iParam0->f_1101));
			__LIB_1__::func_993(&(iParam0->f_16), 2048);
		}
		if (CAM::_0x927B810E43E99932(&(iParam0->f_1117)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(iParam0->f_1117));
			__LIB_1__::func_993(&(iParam0->f_16), 2048);
		}
	}
}

void func_560(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (iParam1)
	{
		case 0:
			PED::_0xF008E0BA1FE1D644(56);
			iVar0 = 0;
			while (iVar0 <= (12 - 1))
			{
				iVar1 = iVar0;
				if (__LIB_16__::func_451(iVar1, *uParam0))
				{
					STREAMING::REQUEST_ANIM_DICT(__LIB_16__::func_452(iVar1));
				}
				iVar0++;
			}
			uParam0->f_17 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			break;
		case 1:
			PED::_0xF008E0BA1FE1D644(22);
			STREAMING::REQUEST_ANIM_DICT(__LIB_16__::func_452(0));
			break;
		case 2:
			PED::_0xF008E0BA1FE1D644(22);
			STREAMING::REQUEST_ANIM_DICT(__LIB_16__::func_452(0));
			break;
		case 3:
			PED::_0xF008E0BA1FE1D644(10);
			STREAMING::REQUEST_ANIM_DICT(__LIB_16__::func_452(0));
			break;
		case 4:
			PED::_0xF008E0BA1FE1D644(23);
			STREAMING::REQUEST_ANIM_DICT(__LIB_16__::func_452(0));
			break;
	}
}

void func_561(int iParam0)
{
	if (iParam0->f_1071 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1088))
	{
		return;
	}
	if (!iParam0->f_1072)
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_1088, true);
	}
	GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
	GRAPHICS::SET_TV_VOLUME(iParam0->f_1095);
	if (iParam0->f_1072)
	{
		if (iParam0->f_1 != 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1088))
			{
				GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam0->f_1088);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1089))
		{
			GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam0->f_1089);
		}
		else
		{
			GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(iParam0->f_1088);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1089))
		{
			OBJECT::_0xF49574E2332A8F06(iParam0->f_1089, 5f);
		}
	}
	GRAPHICS::SET_TV_CHANNEL(-1);
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, iParam0->f_1076, true);
	GRAPHICS::SET_TV_CHANNEL(0);
	if (AUDIO::LOAD_STREAM("Audience", __LIB_16__::func_461(*iParam0)))
	{
		iParam0->f_1100 = AUDIO::_0x0556C784FA056628("Audience", __LIB_16__::func_461(*iParam0));
		AUDIO::PLAY_STREAM_FROM_POSITION(iParam0->f_1097, iParam0->f_1100);
	}
}

void func_562(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) - Global_36 };
	vVar3 = { __LIB_0__::func_173(vVar3) };
	fVar6 = __LIB_1__::func_95(vVar3, vVar0);
	if (fVar6 >= 0.2f)
	{
		__LIB_16__::func_463(uParam0);
	}
}

void func_563(int iParam0)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	float fVar5;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[iVar0]) && !Global_1935630.f_12)
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(iParam0->f_81[iVar0], true, false), true);
				if (fVar1 < 5f)
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_81[iVar0], true, false) - ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					fVar5 = __LIB_1__::func_95(__LIB_0__::func_173(vVar2), __LIB_0__::func_173(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0->f_81[iVar0])));
					if (fVar5 < 0f)
					{
						__LIB_16__::func_464(&(iParam0->f_81[iVar0]));
					}
				}
			}
		}
		iVar0++;
	}
}

void func_564(int iParam0)
{
	if (__LIB_16__::func_467(iParam0))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(__LIB_16__::func_462(iParam0));
	}
}

void func_565()
{
	if (!bLocal_0)
	{
		INVENTORY::_0xE3A46370F70F3607(__LIB_0__::func_162(0), 0);
		bLocal_0 = true;
	}
}

void func_566()
{
	if (bLocal_0)
	{
		INVENTORY::_0xD5D72F1624F3BA7C(__LIB_0__::func_162(0));
		bLocal_0 = false;
	}
}

char[] func_567(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return __LIB_16__::func_468(iParam1);
		case 0:
			return __LIB_16__::func_469(iParam1);
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_VERSION";
}

void func_568(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		__LIB_16__::func_479((*uParam0)[iVar1 /*10*/]);
		iVar1++;
	}
}

char* func_569(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_483(4);
		case 1:
			return __LIB_16__::func_483(5);
		case 2:
			return __LIB_16__::func_483(6);
		case 3:
			return __LIB_16__::func_483(7);
		default:
			break;
	}
	return __LIB_16__::func_483(4);
}

char* func_570(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_483(14);
		default:
			break;
	}
	return __LIB_16__::func_483(14);
}

char* func_571(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_483(16);
		default:
			break;
	}
	return __LIB_16__::func_483(16);
}

char* func_572(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_483(0);
		case 1:
			return __LIB_16__::func_483(1);
		default:
			break;
	}
	return __LIB_16__::func_483(0);
}

char* func_573(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_483(8);
		case 1:
			return __LIB_16__::func_483(9);
		case 2:
			return __LIB_16__::func_483(10);
		case 3:
			return __LIB_16__::func_483(11);
		default:
			break;
	}
	return __LIB_16__::func_483(8);
}

char* func_574(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_483(15);
		default:
			break;
	}
	return __LIB_16__::func_483(15);
}

char* func_575(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_483(17);
		default:
			break;
	}
	return __LIB_16__::func_483(17);
}

char* func_576(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_483(2);
		case 1:
			return __LIB_16__::func_483(3);
		default:
			break;
	}
	return __LIB_16__::func_483(2);
}

char* func_577(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_484(8);
		case 1:
			return __LIB_16__::func_484(9);
		case 2:
			return __LIB_16__::func_484(12);
		case 3:
			return __LIB_16__::func_484(13);
		case 4:
			return __LIB_16__::func_484(14);
		case 5:
			return __LIB_16__::func_484(15);
		case 6:
			return __LIB_16__::func_484(18);
		case 7:
			return __LIB_16__::func_484(19);
		default:
			break;
	}
	return __LIB_16__::func_484(8);
}

char* func_578(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_484(26);
		case 1:
			return __LIB_16__::func_484(27);
		default:
			break;
	}
	return __LIB_16__::func_484(26);
}

char* func_579(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_484(30);
		case 1:
			return __LIB_16__::func_484(31);
		default:
			break;
	}
	return __LIB_16__::func_484(30);
}

char* func_580(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_484(0);
		case 1:
			return __LIB_16__::func_484(1);
		case 2:
			return __LIB_16__::func_484(4);
		case 3:
			return __LIB_16__::func_484(5);
		default:
			break;
	}
	return __LIB_16__::func_484(0);
}

char* func_581(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_484(10);
		case 1:
			return __LIB_16__::func_484(11);
		case 2:
			return __LIB_16__::func_484(16);
		case 3:
			return __LIB_16__::func_484(17);
		case 4:
			return __LIB_16__::func_484(20);
		case 5:
			return __LIB_16__::func_484(21);
		default:
			break;
	}
	return __LIB_16__::func_484(10);
}

char* func_582(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_484(28);
		case 1:
			return __LIB_16__::func_484(29);
		default:
			break;
	}
	return __LIB_16__::func_484(28);
}

char* func_583(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_484(32);
		case 1:
			return __LIB_16__::func_484(33);
		default:
			break;
	}
	return __LIB_16__::func_484(32);
}

char* func_584(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_484(2);
		case 1:
			return __LIB_16__::func_484(3);
		case 2:
			return __LIB_16__::func_484(6);
		case 3:
			return __LIB_16__::func_484(7);
		default:
			break;
	}
	return __LIB_16__::func_484(2);
}

char* func_585(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_485(2);
		case 1:
			return __LIB_16__::func_485(3);
		case 2:
			return __LIB_16__::func_485(4);
		case 3:
			return __LIB_16__::func_485(5);
		default:
			break;
	}
	return __LIB_16__::func_485(2);
}

char* func_586(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_485(7);
		default:
			break;
	}
	return __LIB_16__::func_485(7);
}

char* func_587(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_485(8);
		default:
			break;
	}
	return __LIB_16__::func_485(8);
}

char* func_588(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_485(0);
		case 1:
			return __LIB_16__::func_485(1);
		default:
			break;
	}
	return __LIB_16__::func_485(0);
}

char* func_589(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_486(4);
		case 1:
			return __LIB_16__::func_486(5);
		case 2:
			return __LIB_16__::func_486(6);
		case 3:
			return __LIB_16__::func_486(7);
		case 4:
			return __LIB_16__::func_486(8);
		case 5:
			return __LIB_16__::func_486(9);
		case 6:
			return __LIB_16__::func_486(10);
		case 7:
			return __LIB_16__::func_486(11);
		default:
			break;
	}
	return __LIB_16__::func_486(4);
}

char* func_590(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_486(14);
		case 1:
			return __LIB_16__::func_486(15);
		default:
			break;
	}
	return __LIB_16__::func_486(14);
}

char* func_591(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_486(16);
		case 1:
			return __LIB_16__::func_486(17);
		default:
			break;
	}
	return __LIB_16__::func_486(16);
}

char* func_592(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_486(0);
		case 1:
			return __LIB_16__::func_486(1);
		case 2:
			return __LIB_16__::func_486(2);
		case 3:
			return __LIB_16__::func_486(3);
		default:
			break;
	}
	return __LIB_16__::func_486(0);
}

char* func_593(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_487(8);
		case 1:
			return __LIB_16__::func_487(9);
		case 2:
			return __LIB_16__::func_487(12);
		case 3:
			return __LIB_16__::func_487(13);
		case 4:
			return __LIB_16__::func_487(16);
		case 5:
			return __LIB_16__::func_487(17);
		default:
			break;
	}
	return __LIB_16__::func_487(8);
}

char* func_594(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_487(24);
		case 1:
			return __LIB_16__::func_487(25);
		default:
			break;
	}
	return __LIB_16__::func_487(24);
}

char* func_595(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_487(28);
		case 1:
			return __LIB_16__::func_487(29);
		default:
			break;
	}
	return __LIB_16__::func_487(28);
}

char* func_596(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_487(0);
		case 1:
			return __LIB_16__::func_487(1);
		case 2:
			return __LIB_16__::func_487(4);
		case 3:
			return __LIB_16__::func_487(5);
		default:
			break;
	}
	return __LIB_16__::func_487(0);
}

char* func_597(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_487(10);
		case 1:
			return __LIB_16__::func_487(11);
		case 2:
			return __LIB_16__::func_487(14);
		case 3:
			return __LIB_16__::func_487(15);
		case 4:
			return __LIB_16__::func_487(18);
		case 5:
			return __LIB_16__::func_487(19);
		default:
			break;
	}
	return __LIB_16__::func_487(10);
}

char* func_598(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_487(26);
		case 1:
			return __LIB_16__::func_487(27);
		default:
			break;
	}
	return __LIB_16__::func_487(26);
}

char* func_599(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_487(30);
		case 1:
			return __LIB_16__::func_487(31);
		default:
			break;
	}
	return __LIB_16__::func_487(30);
}

char* func_600(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_487(2);
		case 1:
			return __LIB_16__::func_487(3);
		case 2:
			return __LIB_16__::func_487(6);
		case 3:
			return __LIB_16__::func_487(7);
		default:
			break;
	}
	return __LIB_16__::func_487(2);
}

char* func_601(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(11);
		case 1:
			return __LIB_16__::func_488(15);
		case 2:
			return __LIB_16__::func_488(19);
		default:
			break;
	}
	return __LIB_16__::func_488(11);
}

char* func_602(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(27);
		default:
			break;
	}
	return __LIB_16__::func_488(27);
}

char* func_603(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(31);
		default:
			break;
	}
	return __LIB_16__::func_488(31);
}

char* func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(3);
		case 1:
			return __LIB_16__::func_488(7);
		default:
			break;
	}
	return __LIB_16__::func_488(3);
}

char* func_605(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(10);
		case 1:
			return __LIB_16__::func_488(14);
		case 2:
			return __LIB_16__::func_488(18);
		default:
			break;
	}
	return __LIB_16__::func_488(10);
}

char* func_606(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(26);
		default:
			break;
	}
	return __LIB_16__::func_488(26);
}

char* func_607(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(30);
		default:
			break;
	}
	return __LIB_16__::func_488(30);
}

char* func_608(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(2);
		case 1:
			return __LIB_16__::func_488(6);
		default:
			break;
	}
	return __LIB_16__::func_488(2);
}

char* func_609(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(9);
		case 1:
			return __LIB_16__::func_488(13);
		case 2:
			return __LIB_16__::func_488(17);
		default:
			break;
	}
	return __LIB_16__::func_488(9);
}

char* func_610(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(25);
		default:
			break;
	}
	return __LIB_16__::func_488(25);
}

char* func_611(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(29);
		default:
			break;
	}
	return __LIB_16__::func_488(29);
}

char* func_612(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(1);
		case 1:
			return __LIB_16__::func_488(5);
		default:
			break;
	}
	return __LIB_16__::func_488(0);
}

char* func_613(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(8);
		case 1:
			return __LIB_16__::func_488(12);
		case 2:
			return __LIB_16__::func_488(16);
		default:
			break;
	}
	return __LIB_16__::func_488(8);
}

char* func_614(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(24);
		default:
			break;
	}
	return __LIB_16__::func_488(24);
}

char* func_615(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(28);
		default:
			break;
	}
	return __LIB_16__::func_488(28);
}

char* func_616(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_488(0);
		case 1:
			return __LIB_16__::func_488(4);
		default:
			break;
	}
	return __LIB_16__::func_488(0);
}

char* func_617(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_489(4);
		case 1:
			return __LIB_16__::func_489(6);
		case 2:
			return __LIB_16__::func_489(8);
		default:
			break;
	}
	return __LIB_16__::func_489(4);
}

char* func_618(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_489(12);
		default:
			break;
	}
	return __LIB_16__::func_489(12);
}

char* func_619(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_489(14);
		default:
			break;
	}
	return __LIB_16__::func_489(14);
}

char* func_620(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_489(0);
		case 1:
			return __LIB_16__::func_489(2);
		default:
			break;
	}
	return __LIB_16__::func_489(0);
}

char* func_621(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_489(5);
		case 1:
			return __LIB_16__::func_489(7);
		case 2:
			return __LIB_16__::func_489(9);
		default:
			break;
	}
	return __LIB_16__::func_489(5);
}

char* func_622(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_489(13);
		default:
			break;
	}
	return __LIB_16__::func_489(13);
}

char* func_623(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_489(15);
		default:
			break;
	}
	return __LIB_16__::func_489(15);
}

char* func_624(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_489(1);
		case 1:
			return __LIB_16__::func_489(3);
		default:
			break;
	}
	return __LIB_16__::func_489(1);
}

char* func_625(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(56);
		case 1:
			return __LIB_16__::func_490(70);
		case 2:
			return __LIB_16__::func_490(84);
		default:
			break;
	}
	return __LIB_16__::func_490(56);
}

char* func_626(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(0);
		default:
			break;
	}
	return __LIB_16__::func_490(0);
}

char* func_627(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(14);
		default:
			break;
	}
	return __LIB_16__::func_490(14);
}

char* func_628(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(28);
		case 1:
			return __LIB_16__::func_490(42);
		default:
			break;
	}
	return __LIB_16__::func_490(42);
}

char* func_629(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(57);
		case 1:
			return __LIB_16__::func_490(58);
		case 2:
			return __LIB_16__::func_490(71);
		case 3:
			return __LIB_16__::func_490(72);
		case 4:
			return __LIB_16__::func_490(85);
		case 5:
			return __LIB_16__::func_490(86);
		default:
			break;
	}
	return __LIB_16__::func_490(57);
}

char* func_630(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(1);
		case 1:
			return __LIB_16__::func_490(2);
		default:
			break;
	}
	return __LIB_16__::func_490(1);
}

char* func_631(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(15);
		case 1:
			return __LIB_16__::func_490(16);
		default:
			break;
	}
	return __LIB_16__::func_490(15);
}

char* func_632(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(29);
		case 1:
			return __LIB_16__::func_490(30);
		case 2:
			return __LIB_16__::func_490(43);
		case 3:
			return __LIB_16__::func_490(44);
		default:
			break;
	}
	return __LIB_16__::func_490(43);
}

char* func_633(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(59);
		case 1:
			return __LIB_16__::func_490(60);
		case 2:
			return __LIB_16__::func_490(73);
		case 3:
			return __LIB_16__::func_490(74);
		case 4:
			return __LIB_16__::func_490(87);
		case 5:
			return __LIB_16__::func_490(88);
		default:
			break;
	}
	return __LIB_16__::func_490(59);
}

char* func_634(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(3);
		case 1:
			return __LIB_16__::func_490(4);
		default:
			break;
	}
	return __LIB_16__::func_490(3);
}

char* func_635(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(17);
		case 1:
			return __LIB_16__::func_490(18);
		default:
			break;
	}
	return __LIB_16__::func_490(17);
}

char* func_636(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(31);
		case 1:
			return __LIB_16__::func_490(32);
		case 2:
			return __LIB_16__::func_490(45);
		case 3:
			return __LIB_16__::func_490(46);
		default:
			break;
	}
	return __LIB_16__::func_490(42);
}

char* func_637(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(63);
		case 1:
			return __LIB_16__::func_490(77);
		case 2:
			return __LIB_16__::func_490(91);
		default:
			break;
	}
	return __LIB_16__::func_490(63);
}

char* func_638(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(7);
		default:
			break;
	}
	return __LIB_16__::func_490(7);
}

char* func_639(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(21);
		default:
			break;
	}
	return __LIB_16__::func_490(21);
}

char* func_640(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(35);
		case 1:
			return __LIB_16__::func_490(49);
		default:
			break;
	}
	return __LIB_16__::func_490(35);
}

char* func_641(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(62);
		case 1:
			return __LIB_16__::func_490(76);
		case 2:
			return __LIB_16__::func_490(90);
		default:
			break;
	}
	return __LIB_16__::func_490(62);
}

char* func_642(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(6);
		default:
			break;
	}
	return __LIB_16__::func_490(6);
}

char* func_643(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(20);
		default:
			break;
	}
	return __LIB_16__::func_490(20);
}

char* func_644(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(34);
		case 1:
			return __LIB_16__::func_490(48);
		default:
			break;
	}
	return __LIB_16__::func_490(34);
}

char* func_645(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(61);
		case 1:
			return __LIB_16__::func_490(75);
		case 2:
			return __LIB_16__::func_490(89);
		default:
			break;
	}
	return __LIB_16__::func_490(61);
}

char* func_646(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(5);
		default:
			break;
	}
	return __LIB_16__::func_490(5);
}

char* func_647(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(19);
		default:
			break;
	}
	return __LIB_16__::func_490(19);
}

char* func_648(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(33);
		case 1:
			return __LIB_16__::func_490(47);
		default:
			break;
	}
	return __LIB_16__::func_490(33);
}

char* func_649(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(65);
		case 1:
			return __LIB_16__::func_490(79);
		case 2:
			return __LIB_16__::func_490(93);
		default:
			break;
	}
	return __LIB_16__::func_490(65);
}

char* func_650(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(37);
		case 1:
			return __LIB_16__::func_490(51);
		default:
			break;
	}
	return __LIB_16__::func_490(37);
}

char* func_651(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(64);
		case 1:
			return __LIB_16__::func_490(78);
		case 2:
			return __LIB_16__::func_490(92);
		default:
			break;
	}
	return __LIB_16__::func_490(64);
}

char* func_652(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(8);
		default:
			break;
	}
	return __LIB_16__::func_490(8);
}

char* func_653(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(22);
		default:
			break;
	}
	return __LIB_16__::func_490(22);
}

char* func_654(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(36);
		case 1:
			return __LIB_16__::func_490(50);
		default:
			break;
	}
	return __LIB_16__::func_490(36);
}

char* func_655(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(66);
		case 1:
			return __LIB_16__::func_490(67);
		case 2:
			return __LIB_16__::func_490(80);
		case 3:
			return __LIB_16__::func_490(81);
		case 4:
			return __LIB_16__::func_490(94);
		case 5:
			return __LIB_16__::func_490(95);
		default:
			break;
	}
	return __LIB_16__::func_490(66);
}

char* func_656(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(10);
		case 1:
			return __LIB_16__::func_490(11);
		default:
			break;
	}
	return __LIB_16__::func_490(10);
}

char* func_657(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(24);
		case 1:
			return __LIB_16__::func_490(25);
		default:
			break;
	}
	return __LIB_16__::func_490(24);
}

char* func_658(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(38);
		case 1:
			return __LIB_16__::func_490(39);
		case 2:
			return __LIB_16__::func_490(52);
		case 3:
			return __LIB_16__::func_490(53);
		default:
			break;
	}
	return __LIB_16__::func_490(38);
}

char* func_659(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(68);
		case 1:
			return __LIB_16__::func_490(69);
		case 2:
			return __LIB_16__::func_490(82);
		case 3:
			return __LIB_16__::func_490(83);
		case 4:
			return __LIB_16__::func_490(96);
		case 5:
			return __LIB_16__::func_490(97);
		default:
			break;
	}
	return __LIB_16__::func_490(68);
}

char* func_660(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(12);
		case 1:
			return __LIB_16__::func_490(13);
		default:
			break;
	}
	return __LIB_16__::func_490(12);
}

char* func_661(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(26);
		case 1:
			return __LIB_16__::func_490(27);
		default:
			break;
	}
	return __LIB_16__::func_490(26);
}

char* func_662(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(40);
		case 1:
			return __LIB_16__::func_490(41);
		case 2:
			return __LIB_16__::func_490(54);
		case 3:
			return __LIB_16__::func_490(55);
		default:
			break;
	}
	return __LIB_16__::func_490(40);
}

char* func_663(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(109);
		case 1:
			return __LIB_16__::func_490(110);
		case 2:
			return __LIB_16__::func_490(111);
		default:
			break;
	}
	return __LIB_16__::func_490(109);
}

char* func_664(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(98);
		default:
			break;
	}
	return __LIB_16__::func_490(98);
}

char* func_665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(99);
		default:
			break;
	}
	return __LIB_16__::func_490(99);
}

char* func_666(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(102);
		case 1:
			return __LIB_16__::func_490(103);
		default:
			break;
	}
	return __LIB_16__::func_490(102);
}

char* func_667(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(108);
		default:
			break;
	}
	return __LIB_16__::func_490(108);
}

char* func_668(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(100);
		case 1:
			return __LIB_16__::func_490(101);
		default:
			break;
	}
	return __LIB_16__::func_490(100);
}

char* func_669(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(112);
		case 1:
			return __LIB_16__::func_490(113);
		case 2:
			return __LIB_16__::func_490(114);
		default:
			break;
	}
	return __LIB_16__::func_490(112);
}

char* func_670(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(104);
		case 1:
			return __LIB_16__::func_490(105);
		default:
			break;
	}
	return __LIB_16__::func_490(104);
}

char* func_671(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(115);
		case 1:
			return __LIB_16__::func_490(116);
		case 2:
			return __LIB_16__::func_490(117);
		default:
			break;
	}
	return __LIB_16__::func_490(115);
}

char* func_672(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(106);
		case 1:
			return __LIB_16__::func_490(107);
		default:
			break;
	}
	return __LIB_16__::func_490(106);
}

char* func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(122);
		case 1:
			return __LIB_16__::func_490(124);
		case 2:
			return __LIB_16__::func_490(126);
		case 3:
			return __LIB_16__::func_490(128);
		case 4:
			return __LIB_16__::func_490(130);
		case 5:
			return __LIB_16__::func_490(132);
		default:
			break;
	}
	return __LIB_16__::func_490(122);
}

char* func_674(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(118);
		case 1:
			return __LIB_16__::func_490(120);
		default:
			break;
	}
	return __LIB_16__::func_490(118);
}

char* func_675(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(123);
		case 1:
			return __LIB_16__::func_490(125);
		case 2:
			return __LIB_16__::func_490(127);
		case 3:
			return __LIB_16__::func_490(129);
		case 4:
			return __LIB_16__::func_490(131);
		case 5:
			return __LIB_16__::func_490(133);
		default:
			break;
	}
	return __LIB_16__::func_490(123);
}

char* func_676(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(119);
		case 1:
			return __LIB_16__::func_490(121);
		default:
			break;
	}
	return __LIB_16__::func_490(119);
}

char* func_677(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(138);
		case 1:
			return __LIB_16__::func_490(139);
		case 2:
			return __LIB_16__::func_490(140);
		case 3:
			return __LIB_16__::func_490(141);
		case 4:
			return __LIB_16__::func_490(142);
		case 5:
			return __LIB_16__::func_490(143);
		case 6:
			return __LIB_16__::func_490(144);
		case 7:
			return __LIB_16__::func_490(145);
		case 8:
			return __LIB_16__::func_490(146);
		case 9:
			return __LIB_16__::func_490(147);
		case 10:
			return __LIB_16__::func_490(148);
		case 11:
			return __LIB_16__::func_490(149);
		default:
			break;
	}
	return __LIB_16__::func_490(138);
}

char* func_678(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_490(134);
		case 1:
			return __LIB_16__::func_490(135);
		case 2:
			return __LIB_16__::func_490(136);
		case 3:
			return __LIB_16__::func_490(137);
		default:
			break;
	}
	return __LIB_16__::func_490(134);
}

char* func_679(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_491(6);
		case 1:
			return __LIB_16__::func_491(7);
		case 2:
			return __LIB_16__::func_491(9);
		case 3:
			return __LIB_16__::func_491(10);
		case 4:
			return __LIB_16__::func_491(12);
		case 5:
			return __LIB_16__::func_491(13);
		default:
			break;
	}
	return __LIB_16__::func_491(6);
}

char* func_680(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_491(16);
		case 1:
			return __LIB_16__::func_491(19);
		default:
			break;
	}
	return __LIB_16__::func_491(16);
}

char* func_681(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_491(17);
		case 1:
			return __LIB_16__::func_491(20);
		default:
			break;
	}
	return __LIB_16__::func_491(17);
}

char* func_682(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_491(0);
		case 1:
			return __LIB_16__::func_491(1);
		case 2:
			return __LIB_16__::func_491(3);
		case 3:
			return __LIB_16__::func_491(4);
		default:
			break;
	}
	return __LIB_16__::func_491(0);
}

char* func_683(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_491(6);
		case 1:
			return __LIB_16__::func_491(8);
		case 2:
			return __LIB_16__::func_491(9);
		case 3:
			return __LIB_16__::func_491(11);
		case 4:
			return __LIB_16__::func_491(12);
		case 5:
			return __LIB_16__::func_491(14);
		default:
			break;
	}
	return __LIB_16__::func_491(6);
}

char* func_684(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_491(0);
		case 1:
			return __LIB_16__::func_491(2);
		case 2:
			return __LIB_16__::func_491(3);
		case 3:
			return __LIB_16__::func_491(5);
		default:
			break;
	}
	return __LIB_16__::func_491(0);
}

bool func_685(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_16__::func_454(iParam1);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1 /*10*/]))
		{
			PED::SET_PED_CONFIG_FLAG((*uParam0)[iVar1 /*10*/], 301, true);
			PED::SET_PED_CONFIG_FLAG((*uParam0)[iVar1 /*10*/], 448, true);
			AUDIO::STOP_PED_SPEAKING((*uParam0)[iVar1 /*10*/], true);
			PED::SET_PED_CAN_BE_TARGETTED((*uParam0)[iVar1 /*10*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam0)[iVar1 /*10*/], joaat("REL_PLAYER_ALLY"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar1 /*10*/], true);
			__LIB_1__::func_991((*uParam0)[iVar1 /*10*/], 0);
		}
		iVar1++;
	}
	return true;
}

int func_686(int iParam0)
{
	if (!__LIB_0__::func_1(iParam0->f_16, 2097152))
	{
		if (GRAPHICS::GET_TV_CHANNEL() == 0)
		{
			if (!__LIB_0__::func_75(&(iParam0->f_29)))
			{
				__LIB_1__::func_148(&(iParam0->f_29));
			}
			else if (__LIB_0__::func_265(&(iParam0->f_29)) > 5f)
			{
				__LIB_0__::func_37(&(iParam0->f_29));
				__LIB_1__::func_581(&(iParam0->f_16), 2097152);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_687(var uParam0)
{
	if (__LIB_0__::func_139(*uParam0))
	{
		if (__LIB_1__::func_732(*uParam0, 1))
		{
			return true;
		}
	}
	return false;
}

void func_688(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	if (__LIB_0__::func_1(Global_1394141.f_1325, 1))
	{
		if (__LIB_0__::func_1(Global_1394141.f_1325, 2) && __LIB_16__::func_496(uParam0, __LIB_12__::func_820(uParam0), &(uParam0->f_229), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_993(&(Global_1394141.f_1325), 2);
		}
		if (__LIB_0__::func_1(Global_1394141.f_1325, 4) && __LIB_16__::func_497(uParam0, __LIB_12__::func_823(uParam0), &(uParam0->f_229), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_993(&(Global_1394141.f_1325), 4);
		}
	}
	if (__LIB_0__::func_1(Global_1394141.f_1325, 8))
	{
		if (__LIB_0__::func_1(Global_1394141.f_1325, 16) && __LIB_16__::func_496(&(uParam0->f_31), __LIB_12__::func_820(uParam0), &(uParam0->f_232), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_993(&(Global_1394141.f_1325), 16);
		}
		if (__LIB_0__::func_1(Global_1394141.f_1325, 32) && __LIB_16__::func_497(&(uParam0->f_31), __LIB_12__::func_823(uParam0), &(uParam0->f_232), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_993(&(Global_1394141.f_1325), 32);
		}
	}
	if (__LIB_0__::func_1(Global_1394141.f_1325, 2048))
	{
		if (__LIB_0__::func_1(Global_1394141.f_1325, 4096) && __LIB_16__::func_496(&(uParam0->f_107), __LIB_12__::func_820(uParam0), &(uParam0->f_235), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_993(&(Global_1394141.f_1325), 4096);
		}
		if (__LIB_0__::func_1(Global_1394141.f_1325, 8192) && __LIB_16__::func_497(&(uParam0->f_107), __LIB_12__::func_823(uParam0), &(uParam0->f_235), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_993(&(Global_1394141.f_1325), 8192);
		}
	}
	if (iParam1 == 0)
	{
		if (__LIB_0__::func_1(Global_1394141.f_1325, 64))
		{
			if (__LIB_0__::func_1(Global_1394141.f_1325, 128) && __LIB_16__::func_498(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_820(uParam0), &(uParam0->f_238), __LIB_12__::func_824(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 128);
			}
			if (__LIB_0__::func_1(Global_1394141.f_1325, 256) && __LIB_16__::func_499(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_823(uParam0), &(uParam0->f_238), __LIB_12__::func_824(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 256);
			}
			if (__LIB_0__::func_1(Global_1394141.f_1325, 512) && __LIB_16__::func_498(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_820(uParam0), &(uParam0->f_238), 0.5f, __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 512);
			}
			if (__LIB_0__::func_1(Global_1394141.f_1325, 1024) && __LIB_16__::func_499(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_823(uParam0), &(uParam0->f_238), 0.5f, __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 1024);
			}
		}
		if (__LIB_0__::func_1(Global_1394141.f_1325, 16384))
		{
			if (__LIB_0__::func_1(Global_1394141.f_1325, 32768) && __LIB_16__::func_500(1, 2, &(uParam0->f_118), __LIB_12__::func_820(uParam0), &(uParam0->f_241), __LIB_12__::func_824(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 32768);
			}
			if (__LIB_0__::func_1(Global_1394141.f_1325, 65536) && __LIB_16__::func_501(1, 2, &(uParam0->f_118), __LIB_12__::func_823(uParam0), &(uParam0->f_241), __LIB_12__::func_824(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 65536);
			}
			if (__LIB_0__::func_1(Global_1394141.f_1325, 131072) && __LIB_16__::func_500(1, 2, &(uParam0->f_118), __LIB_12__::func_820(uParam0), &(uParam0->f_241), 0.5f, __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 131072);
			}
			if (__LIB_0__::func_1(Global_1394141.f_1325, 262144) && __LIB_16__::func_501(1, 2, &(uParam0->f_118), __LIB_12__::func_823(uParam0), &(uParam0->f_241), 0.5f, __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 262144);
			}
		}
		if (__LIB_0__::func_1(Global_1394141.f_1325, 524288))
		{
			bVar0 = true;
			if (!__LIB_16__::func_496(&(uParam0->f_31), __LIB_12__::func_820(uParam0), &(uParam0->f_232), 0.1f, __LIB_12__::func_822(uParam0)))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 524288);
			}
		}
		if (__LIB_0__::func_1(Global_1394141.f_1325, 1048576))
		{
			bVar1 = true;
			if (!__LIB_16__::func_497(&(uParam0->f_31), __LIB_12__::func_823(uParam0), &(uParam0->f_232), 0.1f, __LIB_12__::func_822(uParam0)))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 1048576);
			}
		}
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (__LIB_0__::func_1(Global_1394141.f_1325, 2097152))
		{
			if (__LIB_0__::func_1(Global_1394141.f_1325, 4194304) && __LIB_16__::func_496(&(uParam0->f_118), __LIB_12__::func_825(uParam0), &(uParam0->f_238), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 4194304);
			}
			if (__LIB_0__::func_1(Global_1394141.f_1325, 8388608) && __LIB_16__::func_497(&(uParam0->f_118), __LIB_12__::func_823(uParam0), &(uParam0->f_238), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_993(&(Global_1394141.f_1325), 8388608);
			}
		}
	}
}

void func_689(int iParam0)
{
	if (CAM::DOES_CAM_EXIST(iParam0->f_4))
	{
		if (CAM::IS_CAM_RENDERING(iParam0->f_4))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE(iParam0->f_4, false);
		}
		CAM::DESTROY_CAM(iParam0->f_4, false);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	__LIB_1__::func_993(&(Global_1394141.f_1326), 512);
	if (__LIB_0__::func_139(iParam0->f_1053[3]))
	{
		__LIB_1__::func_748(&(iParam0->f_1053[3]), 1, 1);
	}
}

void func_690(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_1053)
	{
		if (__LIB_0__::func_139(iParam0->f_1053[iVar0]))
		{
			__LIB_1__::func_748(&(iParam0->f_1053[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

bool func_691(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1394141.f_7[iParam0 /*31*/].f_7[0] == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1394141.f_7[iParam0 /*31*/].f_7[iVar0];
		if (iVar1 != 0)
		{
			if (__LIB_2__::func_986(iVar1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_692(int iParam0)
{
	if (__LIB_0__::func_139(iParam0->f_1053[1]))
	{
		__LIB_1__::func_748(&(iParam0->f_1053[1]), 1, 1);
	}
	if (__LIB_0__::func_139(iParam0->f_1053[0]))
	{
		__LIB_1__::func_748(&(iParam0->f_1053[0]), 1, 1);
	}
	if (__LIB_0__::func_139(iParam0->f_1053[2]))
	{
		__LIB_1__::func_748(&(iParam0->f_1053[2]), 1, 1);
	}
}

bool func_693(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	if (!__LIB_0__::func_139(*uParam0))
	{
		*uParam0 = __LIB_2__::func_403(sParam2, iParam3, *uParam1, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	}
	if (!__LIB_0__::func_139(*uParam0))
	{
		return false;
	}
	return true;
}

void func_694(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	__LIB_16__::func_503(__LIB_0__::func_23(), iParam0, uParam1, uParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_695(int iParam0)
{
	PED::_0x7D4E70A67A651C71(4);
}

bool func_696(int iParam0)
{
	return PED::_0x5E420FF293EE5472();
}

void func_697(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "CS_BANDSINGER", iParam0->f_81[3], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "CS_BANDBASSIST", iParam0->f_81[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "CS_BANDPIANIST", iParam0->f_81[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "CS_BANDDRUMMER", iParam0->f_81[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "p_benchpiano02x", iParam0->f_66[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "p_benchPiano02x^1", iParam0->f_66[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "p_cs_contrabass01x", iParam0->f_66[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "p_cs_drumkit01x", iParam0->f_66[3], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "p_drumstick01x", iParam0->f_66[4], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "p_drumstick01x^1", iParam0->f_66[5], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "p_piano01x", iParam0->f_66[6], 0);
}

Vector3 func_698(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2544.9f, -1310.883f, 49.21665f;
		case 1:
			return 2548.005f, -1309.34f, 49.21665f;
		case 2:
			return 2543.858f, -1308.74f, 49.21665f;
		case 3:
			return 2545.44f, -1310.189f, 49.21665f;
		case 4:
			return 2544.309f, -1310.678f, 49.21665f;
		case 5:
			return 2544.309f, -1310.778f, 49.21665f;
		case 6:
			return 2548.954f, -1308.76f, 49.21665f;
		default:
			break;
	}
	return 2548.566f, -1312.952f, 49.21665f;
}

void func_699(int iParam0)
{
	switch (iParam0->f_1052)
	{
		case 0:
		case 1:
		case 2:
			iParam0->f_944 = 0;
			__LIB_16__::func_511(__LIB_16__::func_509(0), __LIB_16__::func_510());
			break;
		case 3:
		case 4:
			iParam0->f_944 = 1;
			__LIB_16__::func_511(__LIB_16__::func_509(1), __LIB_16__::func_510());
			break;
		default:
			iParam0->f_944 = 2;
			__LIB_16__::func_511(__LIB_16__::func_509(2), __LIB_16__::func_510());
			break;
	}
}

void func_700(int iParam0)
{
	switch (iParam0->f_1052)
	{
		case 0:
			iParam0->f_944 = 0;
			__LIB_16__::func_511(__LIB_16__::func_509(0), __LIB_16__::func_510());
			break;
		case -2:
		case -1:
			iParam0->f_944 = 3;
			__LIB_16__::func_511(__LIB_16__::func_509(3), __LIB_16__::func_510());
			break;
		case -4:
		case -3:
			iParam0->f_944 = 4;
			__LIB_16__::func_511(__LIB_16__::func_509(4), __LIB_16__::func_510());
			break;
		default:
			iParam0->f_944 = 5;
			__LIB_16__::func_511(__LIB_16__::func_509(5), __LIB_16__::func_510());
			break;
	}
}

void func_701(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_49))
	{
		return;
	}
	switch (iParam0->f_13)
	{
		case 0:
			if (!__LIB_16__::func_524(iParam0->f_49, __LIB_16__::func_446(1), __LIB_16__::func_447()))
			{
				return;
			}
			__LIB_0__::func_19(&(iParam0->f_13), 1);
			break;
		case 1:
			if (__LIB_0__::func_1(iParam0->f_16, -2147483648))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_49, __LIB_16__::func_448(), iParam0->f_57, 0);
				__LIB_10__::func_942(iParam0->f_49, __LIB_16__::func_446(1), __LIB_16__::func_447());
				__LIB_0__::func_19(&(iParam0->f_13), 2);
			}
			break;
		case 2:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_49, __LIB_16__::func_446(1)))
			{
				__LIB_16__::func_449(iParam0->f_49, __LIB_16__::func_446(2), __LIB_16__::func_447());
				__LIB_1__::func_993(&(iParam0->f_16), -2147483648);
				__LIB_0__::func_19(&(iParam0->f_13), 3);
			}
			break;
		case 3:
			if (!__LIB_16__::func_524(iParam0->f_49, __LIB_16__::func_446(2), __LIB_16__::func_447()))
			{
				return;
			}
			__LIB_0__::func_19(&(iParam0->f_13), 4);
			break;
		case 4:
			if (Global_1394141.f_1321)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_49, __LIB_16__::func_448(), iParam0->f_57, 0);
				__LIB_10__::func_942(iParam0->f_49, __LIB_16__::func_446(2), __LIB_16__::func_447());
				__LIB_0__::func_19(&(iParam0->f_13), 5);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_49, __LIB_16__::func_446(2)))
			{
				__LIB_16__::func_449(iParam0->f_49, __LIB_16__::func_446(1), __LIB_16__::func_447());
				__LIB_0__::func_19(&(iParam0->f_13), 0);
			}
			break;
	}
}

void func_702(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < iParam0->f_58)
	{
		iVar1 = iParam0->f_58[iVar0];
		if (__LIB_0__::func_30(iVar1))
		{
			STREAMING::REQUEST_MODEL(iVar1, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_74)
	{
		iVar2 = iParam0->f_74[iVar0];
		if (__LIB_0__::func_30(iVar2))
		{
			STREAMING::REQUEST_MODEL(iVar2, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_88)
	{
		iVar3 = iParam0->f_88[iVar0];
		if (iVar3 != 0)
		{
			if (WEAPON::IS_WEAPON_VALID(iVar3))
			{
				WEAPON::_0x72D4CB5DB927009C(iVar3, -1, 0);
			}
		}
		iVar0++;
	}
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		STREAMING::REQUEST_MODEL(iParam0->f_56, false);
	}
	STREAMING::REQUEST_ANIM_DICT(__LIB_16__::func_525());
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_48, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_48);
	}
}

void func_703(int iParam0)
{
	struct<10> Var0;
	if (iParam0->f_1 == 0)
	{
		return;
	}
	Var0 = { __LIB_16__::func_527(1, iParam0->f_1) };
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_35[1]))
	{
		iParam0->f_35[1] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
	Var0 = { __LIB_16__::func_527(2, iParam0->f_1) };
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_35[2]))
	{
		iParam0->f_35[2] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
	Var0 = { __LIB_16__::func_527(3, iParam0->f_1) };
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_35[3]))
	{
		iParam0->f_35[3] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
	Var0 = { __LIB_16__::func_527(4, iParam0->f_1) };
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_35[4]))
	{
		iParam0->f_35[4] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
}

int func_704(int iParam0, int iParam1)
{
	struct<7> Var0;
	Var0 = { __LIB_16__::func_527(0, iParam1) };
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_35[0]))
	{
		iParam0->f_35[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
	else
	{
		VOLUME::_SET_VOLUME_COORDS(iParam0->f_35[0], Var0);
		VOLUME::_SET_VOLUME_ROTATION(iParam0->f_35[0], Var0.f_3);
		VOLUME::_SET_VOLUME_SCALE(iParam0->f_35[0], Var0.f_6);
	}
	return 1;
}

void func_705(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			__LIB_16__::func_543();
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			__LIB_16__::func_544();
			break;
	}
}

bool func_706(var uParam0, int iParam1)
{
	int iVar0;
	struct<11> Var1;
	if (__LIB_16__::func_470(iParam1) != -1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= __LIB_16__::func_470(iParam1))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_22[iVar0]))
			{
				Var1 = { __LIB_16__::func_549(iParam1, iVar0) };
				uParam0->f_22[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var1.f_9, Var1, Var1.f_3, Var1.f_6, Var1.f_10);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= __LIB_16__::func_470(iParam1))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_22[iVar0]))
			{
				PED::_0x4C39C95AE5DB1329(uParam0->f_22[iVar0], 0, 2);
			}
			iVar0++;
		}
		return true;
	}
	else
	{
		return true;
	}
	return false;
}

Vector3 func_707(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(1) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(3) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(0) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(2) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(13) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(15) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(12) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(14) };
					}
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(25) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(27) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(24) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(26) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(25) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(27) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(24) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(26) };
					}
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(1) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(3) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(0) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(2) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(17) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(19) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(16) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(18) };
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(29) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(31) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(28) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(30) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(33) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(35) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(32) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(34) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(37) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(39) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(36) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(38) };
					}
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(41) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(43) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(40) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(42) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(21) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(23) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(20) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(22) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(25) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(27) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(24) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(26) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(29) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(31) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(28) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(30) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(33) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(35) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(32) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(34) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(37) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(39) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(36) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(38) };
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(45) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(47) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(44) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(46) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(49) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(51) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(48) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(50) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(53) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(55) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(52) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(54) };
					}
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(25) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(27) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(24) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(26) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(61) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(63) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(60) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(62) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(65) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(67) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(64) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(66) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(73) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(75) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(72) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(74) };
					}
					break;
				case 1:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(5) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(7) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(4) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(6) };
					}
					break;
				case 2:
					if (__LIB_0__::func_181())
					{
						if (bParam2)
						{
							vVar0 = { __LIB_16__::func_556(9) };
						}
						else
						{
							vVar0 = { __LIB_16__::func_556(11) };
						}
					}
					else if (bParam2)
					{
						vVar0 = { __LIB_16__::func_556(8) };
					}
					else
					{
						vVar0 = { __LIB_16__::func_556(10) };
					}
					break;
				case 3:
					break;
			}
			break;
	}
	return vVar0;
}

void func_708(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = true;
	bVar5 = false;
	if (__LIB_0__::func_1(Global_1394141.f_1326, 1))
	{
		bVar3 = false;
		bVar1 = false;
		bVar4 = false;
	}
	if (__LIB_0__::func_1(Global_1394141.f_1326, 2))
	{
		bVar0 = false;
	}
	if (__LIB_0__::func_1(Global_1394141.f_1326, 4))
	{
		bVar2 = false;
		bVar0 = false;
		bVar1 = false;
	}
	if (__LIB_0__::func_1(Global_1394141.f_1326, 64))
	{
		bVar2 = false;
	}
	if (__LIB_0__::func_1(Global_1394141.f_1326, 512))
	{
		bVar5 = true;
	}
	__LIB_1__::func_538(0);
	if (bParam0)
	{
		if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), joaat("WEAPON_UNARMED"), 0))
		{
			INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("WEAPON_UNARMED"));
		}
		if (!bVar0)
		{
			if (!__LIB_0__::func_1(Global_1394141.f_1326, 8))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
				{
					VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_2, true, 2, false))
					{
						if ((iLocal_2 != joaat("WEAPON_UNARMED") && iLocal_2 != joaat("OBJECT_1")) && iLocal_2 != joaat("OBJECT_2"))
						{
							if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), iLocal_2, 0))
							{
								INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), iLocal_2);
								__LIB_16__::func_522(iLocal_2);
							}
						}
						if (VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
						{
							VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
						}
						__LIB_1__::func_581(&(Global_1394141.f_1326), 8);
					}
				}
			}
		}
		else if (__LIB_0__::func_1(Global_1394141.f_1326, 8))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && bVar3)
			{
				VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_GANG_DUTCHS"));
				__LIB_1__::func_993(&(Global_1394141.f_1326), 8);
			}
		}
		else
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_2, true, 0, false))
			{
				iVar6 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, 716706914, true);
				iVar7 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, true);
				if ((((((iLocal_2 != joaat("WEAPON_UNARMED") && iLocal_2 != joaat("OBJECT_1")) && iLocal_2 != joaat("OBJECT_2")) && iVar6 != 1) && iVar6 != 0) && iVar7 != 1) && iVar7 != 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
					if (PED::IS_PED_USING_ACTION_MODE(Global_35))
					{
						PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
					}
				}
			}
			__LIB_16__::func_523(&iLocal_2, 1);
		}
		if (bVar3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		}
		if (bVar1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		}
		if (bVar0)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), false);
		}
		if (bVar2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		CAM::_0x632BE8D84846FA56();
		CAM::_0x3C8F74E8FE751614();
		CAM::_0x8910C24B7E0046EC();
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 489, false))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 489, true);
		}
		if (bVar4)
		{
			if (bVar5)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
			}
			else
			{
				HUD::_0xC9CAEAEEC1256E54(1664736751);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		}
		else
		{
			if (bVar5)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
			}
			if (!__LIB_0__::func_1(Global_1394141.f_1326, 8))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(Global_1394141.f_7[Global_1394141 /*31*/].f_4) && VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_2, true, 2, false))
					{
						if ((iLocal_2 != joaat("WEAPON_UNARMED") && iLocal_2 != joaat("OBJECT_1")) && iLocal_2 != joaat("OBJECT_2"))
						{
							if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), iLocal_2, 0))
							{
								INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), iLocal_2);
								__LIB_16__::func_522(iLocal_2);
							}
						}
						if (VOLUME::_0x666C2F53ABEFC952(Global_1394141.f_7[Global_1394141 /*31*/].f_4) != joaat("REL_NO_RELATIONSHIP"))
						{
							VOLUME::_0xFD010A2154B40676(Global_1394141.f_7[Global_1394141 /*31*/].f_4, joaat("REL_NO_RELATIONSHIP"));
						}
						__LIB_1__::func_581(&(Global_1394141.f_1326), 8);
					}
				}
			}
		}
		__LIB_16__::func_565();
	}
	else
	{
		__LIB_16__::func_566();
		__LIB_16__::func_523(&iLocal_2, 1);
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 489, false))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 489, false);
		}
	}
}

bool func_709(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			bVar2 = true;
			iVar0 = 0;
			while (iVar0 <= (12 - 1))
			{
				iVar1 = iVar0;
				if (__LIB_16__::func_451(iVar1, *uParam0) && !STREAMING::HAS_ANIM_DICT_LOADED(__LIB_16__::func_452(iVar1)))
				{
					bVar2 = false;
				}
				iVar0++;
			}
			if (!bVar2)
			{
				return false;
			}
			if (!__LIB_16__::func_453(&(uParam0->f_12[1 /*2*/]), __LIB_16__::func_567(1, uParam0->f_17), 0))
			{
				return false;
			}
			if (!__LIB_16__::func_453(&(uParam0->f_12[0 /*2*/]), __LIB_16__::func_567(0, uParam0->f_17), 0))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_710(int iParam0)
{
	switch (Local_8.f_1)
	{
		case 0:
			if (!__LIB_0__::func_75(&(iParam0->f_941)))
			{
				__LIB_1__::func_148(&(iParam0->f_941));
			}
			if (__LIB_0__::func_1(iParam0->f_16, 33554432))
			{
				__LIB_16__::func_443(&(iParam0->f_349), Global_1394141.f_7[*iParam0 /*31*/].f_4);
				return;
			}
			if (__LIB_0__::func_1(iParam0->f_16, 65536))
			{
				__LIB_16__::func_568(&(iParam0->f_349));
				__LIB_1__::func_993(&(iParam0->f_16), 65536);
				__LIB_1__::func_581(&(iParam0->f_16), 8192);
				__LIB_1__::func_581(&(iParam0->f_16), 16384);
				__LIB_1__::func_581(&(iParam0->f_16), 32768);
			}
			else if (!__LIB_0__::func_1(iParam0->f_16, 8192))
			{
				__LIB_16__::func_546(&(iParam0->f_349), 54, 64);
				__LIB_1__::func_581(&(iParam0->f_16), 8192);
			}
			else if (!__LIB_0__::func_1(iParam0->f_16, 16384))
			{
				if (__LIB_0__::func_265(&(iParam0->f_941)) > 12f)
				{
					__LIB_16__::func_546(&(iParam0->f_349), 15, 26);
					__LIB_16__::func_546(&(iParam0->f_349), 40, 52);
					__LIB_1__::func_148(&(iParam0->f_941));
					__LIB_1__::func_581(&(iParam0->f_16), 16384);
				}
			}
			else if (!__LIB_0__::func_1(iParam0->f_16, 32768))
			{
				if (__LIB_0__::func_265(&(iParam0->f_941)) > 12f)
				{
					__LIB_16__::func_546(&(iParam0->f_349), 0, 13);
					__LIB_16__::func_546(&(iParam0->f_349), 27, 39);
					__LIB_1__::func_148(&(iParam0->f_941));
					__LIB_1__::func_581(&(iParam0->f_16), 32768);
				}
			}
			break;
	}
}

bool func_711(int iParam0)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	bVar0 = false;
	if (!__LIB_0__::func_75(&(iParam0->f_23)))
	{
		__LIB_1__::func_148(&(iParam0->f_23));
	}
	else if (__LIB_0__::func_265(&(iParam0->f_23)) > 10f)
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_1(iParam0->f_17, 1))
	{
		sVar1 = __LIB_16__::func_512(*iParam0);
		sVar2 = __LIB_16__::func_513(*iParam0);
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1) || MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			bVar0 = true;
		}
		else if (AUDIO::LOAD_STREAM(sVar1, sVar2))
		{
			bVar0 = true;
			AUDIO::_0x839C9F124BE74D94(AUDIO::_0x0556C784FA056628(sVar1, sVar2), 0, 2548.749f, -1305.267f, 50.01453f);
			AUDIO::_0x839C9F124BE74D94(AUDIO::_0x0556C784FA056628(sVar1, sVar2), 1, 2543.801f, -1305.251f, 50.01453f);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_0__::func_37(&(iParam0->f_23));
		return true;
	}
	return false;
}

char* func_712(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_569(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_570(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_571(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_572(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_573(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_574(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_575(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_576(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_577(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_578(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_579(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_580(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_581(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_582(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_583(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_584(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_585(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_586(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_587(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_588(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_589(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_590(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_591(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_592(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_593(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_594(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_595(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_596(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_597(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_598(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_599(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_600(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_601(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_602(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_603(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_604(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_605(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_606(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_607(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_608(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_609(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_610(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_611(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_612(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_613(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_614(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_615(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_616(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_617(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_618(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_619(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_620(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_621(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_622(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_623(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_624(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_625(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_626(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_627(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_628(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_629(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_630(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_631(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_632(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_633(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_634(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_635(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_636(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_637(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_638(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_639(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_640(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_641(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_642(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_643(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_644(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_645(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_646(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_647(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_648(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_649(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_626(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(16, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_627(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(16, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_650(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_651(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_652(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_653(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_654(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_655(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_656(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_657(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_658(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_659(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_660(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_661(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_662(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 26:
			break;
		case 27:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_663(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_664(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_665(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return __LIB_16__::func_666(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_667(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_664(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_665(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return __LIB_16__::func_668(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_669(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_664(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_665(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return __LIB_16__::func_670(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_671(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_664(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_665(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return __LIB_16__::func_672(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
			}
			break;
		case 31:
			break;
		case 32:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_673(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return __LIB_16__::func_674(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_675(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return __LIB_16__::func_676(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_677(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return __LIB_16__::func_678(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_679(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_680(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_681(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return __LIB_16__::func_682(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return __LIB_16__::func_683(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 1:
							return __LIB_16__::func_680(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
						case 2:
							return __LIB_16__::func_681(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return __LIB_16__::func_684(MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_16__::func_480(iParam0, iParam1, iParam2)));
			}
			break;
	}
	return "FAIL";
}

void func_713(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (*uParam0)
	{
		case 0:
			if (!__LIB_16__::func_529(uParam0->f_1))
			{
				__LIB_0__::func_19(uParam0, 5);
				return;
			}
			PED::_0xF008E0BA1FE1D644(1);
			STREAMING::REQUEST_MODEL(__LIB_16__::func_530(), false);
			STREAMING::REQUEST_MODEL(__LIB_16__::func_531(0), false);
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			if (!PED::_0x5E420FF293EE5472())
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_530()) || !STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_531(0)))
			{
				return;
			}
			bVar0 = __LIB_16__::func_532(uParam0->f_1);
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
			{
				if (bVar0)
				{
					uParam0->f_2 = __LIB_8__::func_931(__LIB_16__::func_530(), __LIB_16__::func_533(uParam0->f_1), __LIB_16__::func_534(uParam0->f_1), 1, 1, 1, 1, 1, 0, 0, 1, 0, 0);
				}
				else
				{
					uParam0->f_2 = __LIB_8__::func_931(__LIB_16__::func_530(), __LIB_16__::func_533(uParam0->f_1), __LIB_16__::func_534(uParam0->f_1), 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
			{
				return;
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, true);
				if (bVar0)
				{
					__LIB_0__::func_862(uParam0->f_2, __LIB_16__::func_535(uParam0->f_1));
				}
			}
			iVar1 = 0;
			while (iVar1 <= (5 - 1))
			{
				iVar2 = iVar1;
				uParam0->f_3[iVar1] = OBJECT::CREATE_OBJECT(__LIB_16__::func_531(iVar2), __LIB_16__::func_536(iVar2), true, true, false, false, true);
				iVar1++;
			}
			__LIB_0__::func_19(uParam0, 2);
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_9))
			{
				uParam0->f_9 = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_16__::func_537(iParam1), 0, __LIB_16__::func_538(iParam1, 0), false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_9);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, __LIB_16__::func_539(iParam1), __LIB_16__::func_540(iParam1), 2);
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_9, true, false))
			{
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_9))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, __LIB_16__::func_541(iParam1), uParam0->f_2, 0);
				iVar3 = 0;
				while (iVar3 <= (5 - 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, __LIB_16__::func_542(iParam1, iVar3), uParam0->f_3[iVar3], 0);
					iVar3++;
				}
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_9);
				__LIB_0__::func_19(uParam0, 4);
			}
			break;
		case 4:
			if (uParam0->f_10)
			{
				if (!ANIMSCENE::_0x1F0E401031E20146(uParam0->f_9, __LIB_16__::func_538(iParam1, 1)))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_9, __LIB_16__::func_538(iParam1, 1)))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_9, __LIB_16__::func_538(iParam1, 1));
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_9, __LIB_16__::func_538(iParam1, 1), true);
					}
				}
			}
			break;
		case 5:
			break;
	}
}

void func_714(int iParam0)
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_1__::func_205(Global_35, iParam0->f_35[0], 1, 0))
	{
		bVar0 = true;
	}
	if (iParam0->f_1 == 2)
	{
		if (Global_36.f_2 > 51.8f)
		{
			bVar0 = true;
		}
	}
	switch (iParam0->f_3)
	{
		case 0:
			if (bVar0)
			{
				if (!CAM::DOES_CAM_EXIST(iParam0->f_4))
				{
					iParam0->f_4 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), __LIB_16__::func_465(iParam0->f_1, 0), __LIB_16__::func_466(iParam0->f_1, 0), CAM::GET_FINAL_RENDERED_CAM_FOV(), false, 2);
				}
				__LIB_0__::func_19(&(iParam0->f_3), 1);
			}
			break;
		case 1:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
			{
				if (!__LIB_0__::func_75(&(iParam0->f_5)))
				{
					__LIB_1__::func_148(&(iParam0->f_5));
					return;
				}
				else if (__LIB_1__::func_871(&(iParam0->f_5)) < 800)
				{
					return;
				}
			}
			else
			{
				if (__LIB_0__::func_75(&(iParam0->f_5)))
				{
					__LIB_0__::func_37(&(iParam0->f_5));
				}
				if (__LIB_0__::func_139(iParam0->f_1053[3]))
				{
					__LIB_1__::func_748(&(iParam0->f_1053[3]), 1, 1);
				}
				return;
			}
			if (!__LIB_0__::func_139(iParam0->f_1053[3]))
			{
				iParam0->f_1053[3] = __LIB_1__::func_877("INTERACT_LOOK", joaat("INPUT_FOCUS_CAM"), 6, 570, 570, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 1, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_1__::func_522(iParam0->f_1053[3], 13, 1, 1);
			}
			else if (__LIB_0__::func_567(iParam0->f_1053[3], 1))
			{
				if (CAM::DOES_CAM_EXIST(iParam0->f_4))
				{
					if (!CAM::IS_CAM_RENDERING(iParam0->f_4))
					{
						CAM::SET_CAM_ACTIVE(iParam0->f_4, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						__LIB_1__::func_748(&(iParam0->f_1053[3]), 1, 1);
						__LIB_1__::func_581(&(Global_1394141.f_1326), 512);
						__LIB_0__::func_19(&(iParam0->f_3), 2);
					}
				}
			}
			break;
		case 2:
			if (!PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
			{
				__LIB_0__::func_19(&(iParam0->f_3), 3);
			}
			break;
		case 3:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				__LIB_1__::func_993(&(Global_1394141.f_1326), 512);
				__LIB_0__::func_37(&(iParam0->f_5));
				__LIB_0__::func_19(&(iParam0->f_3), 4);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CINEMATIC_CAM_CHANGE_SHOT")))
			{
				iParam0->f_8++;
				if (iParam0->f_8 > 2)
				{
					iParam0->f_8 = 0;
				}
				CAM::SET_CAM_COORD(iParam0->f_4, __LIB_16__::func_465(iParam0->f_1, iParam0->f_8));
				CAM::SET_CAM_ROT(iParam0->f_4, __LIB_16__::func_466(iParam0->f_1, iParam0->f_8), 2);
			}
			if (__LIB_16__::func_505(iParam0) == 10 || !bVar0)
			{
				__LIB_0__::func_19(&(iParam0->f_3), 5);
			}
			break;
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (!PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
			{
				__LIB_0__::func_19(&(iParam0->f_3), 1);
			}
			break;
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			if (!bVar0)
			{
				if (CAM::DOES_CAM_EXIST(iParam0->f_4) && CAM::IS_CAM_RENDERING(iParam0->f_4))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iParam0->f_4, false);
				}
				if (__LIB_0__::func_139(iParam0->f_1053[3]))
				{
					__LIB_1__::func_748(&(iParam0->f_1053[3]), 1, 1);
				}
				__LIB_0__::func_19(&(iParam0->f_3), 0);
			}
			else if (CAM::DOES_CAM_EXIST(iParam0->f_4))
			{
				if (CAM::IS_CAM_RENDERING(iParam0->f_4))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iParam0->f_4, false);
				}
				else
				{
					CAM::DESTROY_CAM(iParam0->f_4, false);
					if (__LIB_0__::func_139(iParam0->f_1053[3]))
					{
						__LIB_1__::func_748(&(iParam0->f_1053[3]), 1, 1);
					}
					__LIB_0__::func_19(&(iParam0->f_3), 6);
				}
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			__LIB_1__::func_993(&(Global_1394141.f_1326), 512);
			break;
		case 6:
			break;
	}
}

bool func_715(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1394141.f_7[iParam0 /*31*/].f_7[0] == 0)
	{
		if (__LIB_0__::func_12() == 76)
		{
			if (__LIB_16__::func_547())
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
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1394141.f_7[iParam0 /*31*/].f_7[iVar0];
		if (iVar1 != 0)
		{
			if (!__LIB_2__::func_769(iVar1) && !__LIB_10__::func_699(iVar1))
			{
				__LIB_1__::func_948(iVar1, 1, 0, 0, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
	return true;
}

bool func_716(int iParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1394141.f_7[iParam0 /*31*/].f_7[0] == 0)
	{
		if (__LIB_0__::func_12() == 76)
		{
			if (__LIB_16__::func_548())
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
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1394141.f_7[iParam0 /*31*/].f_7[iVar0];
		if (iVar1 != 0)
		{
			if (!__LIB_4__::func_925(iVar1))
			{
				__LIB_4__::func_389(iVar1, 0, 0);
			}
		}
		iVar0++;
	}
	return true;
}

bool func_717(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		return false;
	}
	bVar0 = true;
	bVar1 = false;
	iVar2 = __LIB_2__::func_16(iParam1);
	if (iVar2 != joaat("META_OUTFIT_DEFAULT"))
	{
		bVar0 = false;
		bVar1 = true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = __LIB_8__::func_931(iParam1, vParam2, fParam5, 1, 1, 0, 1, 1, bVar0, 0, bVar1, 0, 0);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && PED::_0xA0BC8FAED8CFEB3C(*uParam0))
	{
		if (!bVar0)
		{
			__LIB_0__::func_862(*uParam0, iVar2);
		}
		__LIB_1__::func_991(*uParam0, 0);
		return true;
	}
	return false;
}

int func_718(int iParam0, var uParam1)
{
	if (!__LIB_1__::func_205(Global_35, Global_1394141.f_7[*iParam0 /*31*/].f_4, 1, 0))
	{
		return 0;
	}
	if (!__LIB_16__::func_693(&(iParam0->f_1053[1]), uParam1, "SHOW_POS_RESPONSE", joaat("INPUT_INTERACT_LOCKON_POS")))
	{
		return 0;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iParam0->f_1053[1]) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam0->f_12), 0);
	if (!__LIB_16__::func_693(&(iParam0->f_1053[0]), uParam1, "SHOW_NEG_RESPONSE", joaat("INPUT_INTERACT_LOCKON_NEG")))
	{
		return 0;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iParam0->f_1053[0]) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam0->f_12), 0);
	return 1;
}

bool func_719(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if ((MISC::GET_FRAME_COUNT() % 15) == 0)
	{
		__LIB_16__::func_694(Global_40.f_9028.f_6[Global_1394141.f_7[iParam0 /*31*/].f_30], &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
		if (((iVar2 >= 6 || iVar3 >= 1) || iVar4 >= 1) || iVar5 >= 1)
		{
			return true;
		}
	}
	return false;
}

void func_720()
{
	bool bVar0;
	if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -2017877118, true) == 1)
	{
		return;
	}
	bVar0 = false;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || (__LIB_2__::func_774(36) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1)))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		TASK::TASK_PLAY_ANIM(Global_35, __LIB_16__::func_525(), __LIB_16__::func_555(1), 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
	}
	else
	{
		TASK::TASK_PLAY_ANIM(Global_35, __LIB_16__::func_525(), __LIB_16__::func_555(0), 8f, -8f, -1, 67108880, 0f, false, 1114114, false, 0, false);
	}
}

bool func_721(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return true;
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return true;
				case 17:
					return 2;
				case 18:
					return 2;
				case 20:
				case 31:
					return true;
				case 32:
					return true;
				case 39:
					return true;
				case 53:
				case 54:
				case 55:
					return true;
				default:
					break;
			}
			break;
		case 3:
			break;
	}
	return false;
}

void func_722(var uParam0, int iParam1)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		TASK::TASK_START_SCENARIO_AT_POSITION(*uParam0, joaat("PROP_HUMAN_SEAT_CHAIR"), __LIB_16__::func_457(iParam1, uParam0->f_2), __LIB_16__::func_528(iParam1, uParam0->f_2), -1, false, true, 0, 0.25f, false);
	}
}

void func_723(var uParam0, var uParam1, int iParam2, struct<16> Param3, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = __LIB_16__::func_454(iParam2);
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = Param3.f_10;
	iVar7 = Param3;
	iVar2 = 0;
	while (iVar2 <= (iVar6 - 1))
	{
		iVar4 = (iVar4 + Param3.f_15[iVar2]);
		iVar2++;
	}
	__LIB_1__::func_148(&(uParam0->f_2));
	__LIB_1__::func_148(&(uParam0->f_5));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Param3.f_20))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(Param3.f_20);
	}
	if (Param3[0] == -1 && Param3.f_10[0] == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((uParam1[iVar1 /*10*/])->f_1 == 6)
		{
		}
		else if (Param3.f_10[0] == 35)
		{
			(uParam1[iVar1 /*10*/])->f_1 = 13;
		}
		else
		{
			if (Param3[0] != -1)
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				iVar5 = 0;
				iVar2 = 0;
				while (iVar2 <= (iVar7 - 1))
				{
					iVar5 = (iVar5 + Param3.f_5[iVar2]);
					if (iVar3 <= iVar5)
					{
						(uParam1[iVar1 /*10*/])->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(100, 700);
						(uParam1[iVar1 /*10*/])->f_6 = Param3[iVar2];
						Jump @290; //curOff = 266
					}
					else
					{
						(uParam1[iVar1 /*10*/])->f_6 = -1;
					}
					iVar2++;
				}
			}
			else
			{
				(uParam1[iVar1 /*10*/])->f_6 = -1;
			}
			if (Param3.f_10[0] != -1)
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
				iVar5 = 0;
				iVar2 = 0;
				while (iVar2 <= (iVar6 - 1))
				{
					iVar5 = (iVar5 + Param3.f_15[iVar2]);
					if (iVar3 <= iVar5)
					{
						(uParam1[iVar1 /*10*/])->f_5 = Param3.f_10[iVar2];
						Jump @397; //curOff = 373
					}
					else
					{
						(uParam1[iVar1 /*10*/])->f_5 = -1;
					}
					iVar2++;
				}
			}
			else
			{
				(uParam1[iVar1 /*10*/])->f_5 = -1;
			}
			(uParam1[iVar1 /*10*/])->f_1 = 3;
		}
		iVar1++;
	}
}

bool func_724(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(__LIB_16__::func_442(iParam0->f_1));
	if (!__LIB_0__::func_1(iParam0->f_16, 4194304))
	{
		if (INTERIOR::IS_VALID_INTERIOR(iVar1))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar1);
			__LIB_1__::func_581(&(iParam0->f_16), 4194304);
			return false;
		}
	}
	else if (!INTERIOR::IS_INTERIOR_READY(iVar1))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_945))
	{
		if (HUD::_DOES_TEXT_DATABASE_EXIST(iParam0->f_945))
		{
			HUD::_TEXT_DATABASE_REQUEST(iParam0->f_945);
		}
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(iParam0->f_945))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_946) && !iParam0->f_14)
	{
		if (HUD::_DOES_TEXT_DATABASE_EXIST(iParam0->f_946))
		{
			HUD::_TEXT_DATABASE_REQUEST(iParam0->f_946);
		}
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(iParam0->f_946))
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_58)
	{
		iVar2 = iParam0->f_58[iVar0];
		if (__LIB_0__::func_30(iVar2))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar2))
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_74)
	{
		iVar3 = iParam0->f_74[iVar0];
		if (__LIB_0__::func_30(iVar3))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar3))
			{
				return false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_88)
	{
		iVar4 = iParam0->f_88[iVar0];
		if (iVar4 != 0)
		{
			if (WEAPON::IS_WEAPON_VALID(iVar4) && !WEAPON::_0xFF07CF465F48B830(iVar4))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (!iParam0->f_14 && !iParam0->f_1070)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0->f_56))
		{
			return false;
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_48, true, false))
		{
			return false;
		}
	}
	if (!AUDIO::_0xD9130842D7226045(__LIB_16__::func_510(), 1))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_16__::func_525()))
	{
		return false;
	}
	if (!__LIB_16__::func_696(iParam0))
	{
		return false;
	}
	if (!__LIB_16__::func_711(iParam0))
	{
		return false;
	}
	return true;
}

void func_725(int iParam0, float fParam1)
{
	switch (iParam0->f_2)
	{
		case 0:
			if (__LIB_16__::func_505(iParam0) == 6 && !__LIB_16__::func_445())
			{
				__LIB_0__::func_19(&(iParam0->f_2), 1);
			}
			if (((__LIB_1__::func_205(Global_35, Global_1394141.f_7[*iParam0 /*31*/].f_4, 1, 0) && !__LIB_16__::func_445()) && __LIB_16__::func_505(iParam0) >= 6) && !__LIB_1__::func_205(Global_35, iParam0->f_35[3], 1, 0))
			{
				__LIB_0__::func_19(&(iParam0->f_2), 1);
			}
			break;
		case 1:
			if (__LIB_16__::func_716(*iParam0))
			{
				__LIB_0__::func_19(&(iParam0->f_2), 2);
			}
			break;
		case 2:
			if (__LIB_16__::func_445() && !__LIB_1__::func_205(Global_35, Global_1394141.f_7[*iParam0 /*31*/].f_4, 1, 0))
			{
				__LIB_0__::func_19(&(iParam0->f_2), 3);
			}
			if (__LIB_16__::func_505(iParam0) == 10 || __LIB_16__::func_505(iParam0) == 11)
			{
				if (fParam1 > 17f)
				{
					__LIB_0__::func_19(&(iParam0->f_2), 3);
				}
			}
			break;
		case 3:
			if (__LIB_16__::func_715(*iParam0))
			{
				__LIB_0__::func_19(&(iParam0->f_2), 0);
			}
			break;
	}
}

bool func_726(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	bVar0 = false;
	if ((__LIB_0__::func_75(&(iParam0->f_950)) && iParam0->f_18 < __LIB_16__::func_552(*iParam0)) && __LIB_1__::func_871(&(iParam0->f_950)) > 35000)
	{
		iParam0->f_18++;
		vVar1 = { __LIB_16__::func_707(*iParam0, 0, 1) };
		bVar0 = true;
	}
	else if (__LIB_16__::func_553(*iParam0) && !__LIB_2__::func_774(36))
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		if (iVar4 < 5)
		{
			vVar1 = { __LIB_16__::func_707(*iParam0, 2, 1) };
		}
		else
		{
			vVar1 = { __LIB_16__::func_707(*iParam0, 1, 1) };
		}
	}
	else
	{
		vVar1 = { __LIB_16__::func_707(*iParam0, 1, 1) };
	}
	if (__LIB_16__::func_554(iParam0))
	{
		vVar1 = { __LIB_16__::func_707(*iParam0, 3, 1) };
	}
	if (__LIB_2__::func_813(&(iParam0->f_954), vVar1, 1, -1, 0, 0))
	{
		iParam0->f_1052++;
		__LIB_16__::func_699(iParam0);
		if (bVar0)
		{
			__LIB_1__::func_148(&(iParam0->f_950));
		}
		__LIB_1__::func_581(&(iParam0->f_16), 16);
		return true;
	}
	return false;
}

bool func_727(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	bVar0 = false;
	if ((__LIB_0__::func_75(&(iParam0->f_950)) && iParam0->f_19 < __LIB_16__::func_552(*iParam0)) && __LIB_1__::func_871(&(iParam0->f_950)) > 35000)
	{
		iParam0->f_19++;
		vVar1 = { __LIB_16__::func_707(*iParam0, 0, 0) };
		bVar0 = true;
	}
	else if (__LIB_16__::func_553(*iParam0) && !__LIB_2__::func_774(36))
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		if (iVar4 < 5)
		{
			vVar1 = { __LIB_16__::func_707(*iParam0, 2, 0) };
		}
		else
		{
			vVar1 = { __LIB_16__::func_707(*iParam0, 1, 0) };
		}
	}
	else
	{
		vVar1 = { __LIB_16__::func_707(*iParam0, 1, 0) };
	}
	if (__LIB_16__::func_554(iParam0))
	{
		vVar1 = { __LIB_16__::func_707(*iParam0, 3, 0) };
	}
	if (__LIB_2__::func_813(&(iParam0->f_954), vVar1, 1, -1, 0, 0))
	{
		iParam0->f_1052 = (iParam0->f_1052 - 1);
		__LIB_16__::func_700(iParam0);
		if (bVar0)
		{
			__LIB_1__::func_148(&(iParam0->f_950));
		}
		__LIB_1__::func_581(&(iParam0->f_16), 32);
		return true;
	}
	return false;
}

void func_728(int* iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	if ((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !iParam0->f_9) && iParam0->f_5 != -1)
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*iParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { __LIB_16__::func_457(iParam1, iParam0->f_2) };
		fVar4 = __LIB_16__::func_528(iParam1, iParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = __LIB_16__::func_550(iParam1, iParam0->f_2);
		iParam0->f_6 = -1;
		iParam0->f_7 = __LIB_16__::func_551(iParam0->f_5);
		iParam0->f_8 = __LIB_16__::func_712(iParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, __LIB_16__::func_471(), 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, __LIB_16__::func_471(), 2, 0, 0);
		}
	}
	if (!iParam0->f_9)
	{
		iParam0->f_5 = -1;
		iParam0->f_6 = -1;
	}
}

void func_729(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	if ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && uParam0->f_6 != -1) && !uParam0->f_9)
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { __LIB_16__::func_457(iParam1, uParam0->f_2) };
		fVar4 = __LIB_16__::func_528(iParam1, uParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = __LIB_16__::func_550(iParam1, uParam0->f_2);
		if (uParam0->f_6 == 26)
		{
			iVar9 = __LIB_16__::func_481(uParam0->f_2);
			uParam0->f_6 = iVar9;
			uParam0->f_7 = __LIB_16__::func_551(uParam0->f_6);
			uParam0->f_8 = __LIB_16__::func_712(uParam0->f_6, iVar0, iVar8);
		}
		else if (uParam0->f_6 == 31)
		{
			iVar10 = __LIB_16__::func_482(uParam0->f_2);
			uParam0->f_6 = iVar10;
			uParam0->f_7 = __LIB_16__::func_551(uParam0->f_6);
			uParam0->f_8 = __LIB_16__::func_712(uParam0->f_6, iVar0, iVar8);
		}
		else
		{
			uParam0->f_7 = __LIB_16__::func_551(uParam0->f_6);
			uParam0->f_8 = __LIB_16__::func_712(uParam0->f_6, iVar0, iVar8);
		}
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0f, 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0f, 2, 0, 0);
		}
	}
}

bool func_730(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_16__::func_454(iParam1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (iVar0 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar2 /*10*/]))
		{
			iVar3 = POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(__LIB_16__::func_455(iParam1), __LIB_16__::func_456(iParam1, iVar2), -156825994, false, true, __LIB_16__::func_457(iParam1, iVar2));
			bVar1 = false;
			if (__LIB_0__::func_1(Global_1394141.f_1326, 16))
			{
				if (iVar2 == 4)
				{
					iVar3 = joaat("U_M_M_ODDFELLOWPARTICIPANT_01");
					bVar1 = true;
				}
			}
			else if (iParam2 == 0)
			{
				if (iVar2 == 5)
				{
					iVar3 = joaat("U_M_M_BULLETCATCHVOLUNTEER_01");
					bVar1 = true;
				}
				else if (iVar2 == 31)
				{
					iVar3 = joaat("U_M_M_CABARETFIREHAT_01");
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				STREAMING::REQUEST_MODEL(iVar3, false);
			}
			if (bVar1 && !STREAMING::HAS_MODEL_LOADED(iVar3))
			{
				return false;
			}
			if (STREAMING::IS_MODEL_VALID(iVar3))
			{
				(*uParam0)[iVar2 /*10*/] = __LIB_8__::func_931(iVar3, __LIB_16__::func_457(iParam1, iVar2), __LIB_16__::func_528(iParam1, iVar2), 1, 1, __LIB_16__::func_721(iParam1, iVar2), 1, 1, 1, 0, 0, 0, 0);
			}
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar2 /*10*/]))
		{
			return false;
		}
		iVar2++;
	}
	return true;
}

void func_731(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { __LIB_16__::func_457(iParam1, uParam0->f_2) };
		fVar4 = __LIB_16__::func_528(iParam1, uParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = __LIB_16__::func_550(iParam1, uParam0->f_2);
		uParam0->f_5 = 1;
		uParam0->f_6 = -1;
		uParam0->f_7 = __LIB_16__::func_551(uParam0->f_5);
		uParam0->f_8 = __LIB_16__::func_712(uParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000f, -1000f, -1, 49153, __LIB_16__::func_471(), 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000f, -1000f, -1, 49153, __LIB_16__::func_471(), 2, 0, 0);
		}
	}
}

void func_732(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		return;
	}
	if ((__LIB_0__::func_1(iParam0->f_16, 262144) && iParam0->f_41 != 2) && iParam0->f_41 != 3)
	{
		MISC::_0xE98D55C5983F2509(iParam0->f_12);
		__LIB_16__::func_692(iParam0);
		__LIB_0__::func_19(&(iParam0->f_41), 2);
	}
	if (__LIB_0__::func_1(Global_1394141.f_1326, 512))
	{
		if (!__LIB_0__::func_1(iParam0->f_16, 1048576))
		{
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(iParam0->f_81[iVar0], 301, true);
				}
				iVar0++;
			}
			__LIB_1__::func_581(&(iParam0->f_16), 1048576);
		}
	}
	else if (__LIB_0__::func_1(iParam0->f_16, 1048576))
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_81[iVar1]))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0->f_81[iVar1], 301, false);
			}
			iVar1++;
		}
		__LIB_1__::func_993(&(iParam0->f_16), 1048576);
	}
	switch (iParam0->f_41)
	{
		case 0:
			iParam0->f_1052 = 0;
			iParam0->f_953 = 8500;
			__LIB_1__::func_148(&(iParam0->f_950));
			MISC::_0x870708A6E147A9AD(iParam0->f_12, "", 20f, 0, 4, 0, 0, 0, 0, -1);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_12, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_12, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_12, 130, true);
			__LIB_0__::func_19(&(iParam0->f_41), 1);
			break;
		case 1:
			iVar3 = __LIB_0__::func_57(iParam0->f_12);
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar2, 0, 0) && iVar2 == iVar3)
			{
				if ((__LIB_0__::func_1(iParam0->f_16, 131072) && !__LIB_0__::func_1(Global_1394141.f_1326, 512)) && !__LIB_0__::func_1(Global_1394141.f_1326, 16384))
				{
					if (!__LIB_0__::func_75(&(iParam0->f_947)))
					{
						__LIB_1__::func_148(&(iParam0->f_947));
					}
					else if (!__LIB_0__::func_139(iParam0->f_1053[1]) || !__LIB_0__::func_139(iParam0->f_1053[0]))
					{
						__LIB_16__::func_718(iParam0, &Global_35);
						if (__LIB_1__::func_871(&(iParam0->f_947)) > iParam0->f_953)
						{
							__LIB_1__::func_221(iParam0->f_1053[1], 1, 1);
							__LIB_1__::func_221(iParam0->f_1053[0], 1, 1);
						}
					}
					else if (__LIB_1__::func_871(&(iParam0->f_947)) > iParam0->f_953 || __LIB_0__::func_1(iParam0->f_16, 524288))
					{
						if (!__LIB_0__::func_572(iParam0->f_1053[1], 0))
						{
							__LIB_1__::func_993(&(iParam0->f_16), 16);
							__LIB_1__::func_221(iParam0->f_1053[1], 1, 1);
						}
						if (!__LIB_0__::func_572(iParam0->f_1053[0], 0))
						{
							__LIB_1__::func_993(&(iParam0->f_16), 32);
							__LIB_1__::func_221(iParam0->f_1053[0], 1, 1);
						}
						if (__LIB_16__::func_687(&(iParam0->f_1053[1])))
						{
							__LIB_1__::func_221(iParam0->f_1053[1], 0, 1);
							__LIB_1__::func_221(iParam0->f_1053[0], 0, 1);
							if (__LIB_0__::func_1(iParam0->f_16, 524288))
							{
								__LIB_1__::func_993(&(iParam0->f_16), 524288);
							}
							if (__LIB_0__::func_1(Global_1394141.f_1326, 32768))
							{
								if (__LIB_16__::func_726(iParam0))
								{
									iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
									if (iVar4 < 4)
									{
										__LIB_16__::func_720();
									}
									iParam0->f_953 = 8500;
									__LIB_1__::func_148(&(iParam0->f_947));
								}
							}
							else
							{
								__LIB_16__::func_720();
								iParam0->f_953 = 8500;
								__LIB_1__::func_148(&(iParam0->f_947));
							}
						}
						else if (__LIB_16__::func_687(&(iParam0->f_1053[0])))
						{
							__LIB_1__::func_221(iParam0->f_1053[1], 0, 1);
							__LIB_1__::func_221(iParam0->f_1053[0], 0, 1);
							if (__LIB_0__::func_1(iParam0->f_16, 524288))
							{
								__LIB_1__::func_993(&(iParam0->f_16), 524288);
							}
							if (__LIB_16__::func_727(iParam0))
							{
								iParam0->f_953 = 8500;
								__LIB_1__::func_148(&(iParam0->f_947));
							}
						}
					}
					else
					{
						if (__LIB_0__::func_572(iParam0->f_1053[1], 0))
						{
							__LIB_1__::func_221(iParam0->f_1053[1], 0, 1);
						}
						if (__LIB_0__::func_572(iParam0->f_1053[0], 0))
						{
							__LIB_1__::func_221(iParam0->f_1053[0], 0, 1);
						}
					}
				}
				else
				{
					if (__LIB_0__::func_572(iParam0->f_1053[1], 1))
					{
						__LIB_1__::func_221(iParam0->f_1053[1], 0, 1);
					}
					if (__LIB_0__::func_572(iParam0->f_1053[0], 1))
					{
						__LIB_1__::func_221(iParam0->f_1053[0], 0, 1);
					}
				}
				if (__LIB_0__::func_1(iParam0->f_16, 256))
				{
					if (!__LIB_16__::func_693(&(iParam0->f_1053[2]), &Global_35, "INTERACT_DRAW", joaat("INPUT_CONTEXT_RT")))
					{
						return;
					}
					else if (!__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 0, 0)) && !__LIB_0__::func_154(__LIB_0__::func_399(Global_35, 0, 1, 0)))
					{
						if (!__LIB_0__::func_572(iParam0->f_1053[2], 0))
						{
							__LIB_1__::func_221(iParam0->f_1053[2], 1, 1);
						}
						else if (__LIB_1__::func_732(iParam0->f_1053[2], 1))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar5, true, 2, false))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar5, false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
								__LIB_1__::func_221(iParam0->f_1053[2], 0, 1);
							}
						}
					}
					else if (__LIB_0__::func_572(iParam0->f_1053[2], 0))
					{
						__LIB_1__::func_221(iParam0->f_1053[2], 0, 1);
					}
				}
				else if (__LIB_0__::func_572(iParam0->f_1053[2], 1))
				{
					__LIB_1__::func_221(iParam0->f_1053[2], 0, 1);
				}
			}
			else
			{
				__LIB_16__::func_692(iParam0);
			}
			break;
		case 2:
			__LIB_16__::func_692(iParam0);
			if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0->f_48) / ANIMSCENE::_GET_ANIM_SCENE_DURATION(iParam0->f_48)) < 0.85f)
			{
				return;
			}
			__LIB_0__::func_19(&(iParam0->f_41), 3);
			break;
		case 3:
			if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0->f_48) / ANIMSCENE::_GET_ANIM_SCENE_DURATION(iParam0->f_48)) < 0.99f && AUDIO::_0x714A0EA7DE1167BE(__LIB_16__::func_509(iParam0->f_944), __LIB_16__::func_510()))
			{
				__LIB_16__::func_511(__LIB_16__::func_509(iParam0->f_944), __LIB_16__::func_510());
			}
			break;
	}
}

void func_733(int iParam0)
{
	PED::_0x7D4E70A67A651C71(5);
}

void func_734(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[0], true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[1]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[1], true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[2]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[2], true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[3]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[3], true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[4]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[4], true);
	}
	iParam0->f_12 = iParam0->f_81[4];
}

void func_735(var uParam0, int* iParam1)
{
	float fVar0;
	bool bVar1;
	fVar0 = 0f;
	bVar1 = false;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335))
	{
		fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1394141.f_1335);
		bVar1 = true;
	}
	switch (*uParam0)
	{
		case 9:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_A_Performance") && fVar0 > 0.82f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "Crowd_Member", *iParam1, 0);
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_A_Performance") && fVar0 > 0.9f)
						{
							__LIB_16__::func_728(iParam1, 0);
							__LIB_0__::func_19(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "PL_D_LOOP_2_Challenge_Crowd") && fVar0 > 0.95f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "Crowd_Member", *iParam1, 0);
							__LIB_0__::func_19(&(uParam0->f_11), 3);
						}
						break;
					case 3:
						break;
				}
			}
			break;
		case 12:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "Pl_BreathLoop"))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "male", *iParam1, 0);
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "Pl_BreathFail") && ANIMSCENE::_0x005E6F28DD7ED58D(Global_1394141.f_1335, "male"))
						{
							PED::FORCE_PED_MOTION_STATE(*iParam1, joaat("MOTIONSTATE_WALK"), false, 0, false);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, 2504.978f, -1245.074f, 48.2112f, 1f, -1, 0.25f, 0, 40000f);
							__LIB_0__::func_19(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						if (__LIB_0__::func_163(*iParam1, 713668775))
						{
							PED::SET_PED_KEEP_TASK(*iParam1, true);
							__LIB_16__::func_479(*iParam1);
							*iParam1 = 0;
							Global_1394141.f_1334 = 0;
							__LIB_0__::func_19(&(uParam0->f_11), 3);
						}
						break;
					case 3:
						break;
				}
			}
			break;
		case 10:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Global_1394141.f_1335, "BoolLoop"))
						{
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							Global_1394141.f_1334 = 0;
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						break;
				}
			}
			break;
		case 15:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "pbl_CrowdChallenge_P2") && ANIMSCENE::_0x005E6F28DD7ED58D(Global_1394141.f_1335, "CrowdMember"))
						{
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						Global_1394141.f_1334 = 0;
						break;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				PED::DELETE_PED(iParam1);
				*iParam1 = 0;
				Global_1394141.f_1334 = 0;
			}
			break;
		case 20:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1394141.f_1335) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1394141.f_1335, false)) && ANIMSCENE::_0x1F0E401031E20146(Global_1394141.f_1335, "pl_Performance")) && ANIMSCENE::_0x8D81E7824B7753F7(Global_1394141.f_1335, "s_Performance_P2", 1))
						{
							__LIB_0__::func_19(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (__LIB_0__::func_1(Global_1394141.f_1326, 2048) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Global_1394141.f_1335) > 0.96f)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Global_1394141.f_1335, "CS_GENSTORYMALE", *iParam1);
							ENTITY::SET_ENTITY_COORDS(*iParam1, 2538.857f, -1312.293f, 48.21665f, true, false, true, true);
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							Global_1394141.f_1334 = 0;
							__LIB_0__::func_19(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						break;
				}
			}
			else
			{
				iParam1->f_5 = 2;
				__LIB_16__::func_728(iParam1, 0);
				Global_1394141.f_1334 = 0;
			}
			break;
	}
}

bool func_736(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_16__::func_706(uParam1, iParam2))
	{
		return false;
	}
	iVar0 = __LIB_16__::func_454(iParam2);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((__LIB_16__::func_458(iVar1, uParam1->f_17) && iParam2 == 0) && !uParam1->f_20)
		{
			(uParam0[iVar1 /*10*/])->f_1 = 6;
			(uParam0[iVar1 /*10*/])->f_2 = iVar1;
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_12[1 /*2*/], __LIB_16__::func_459(1, iVar1, uParam1->f_17), (*uParam0)[iVar1 /*10*/], 0);
		}
		else if (__LIB_16__::func_460(iParam2))
		{
			(uParam0[iVar1 /*10*/])->f_1 = 1;
			(uParam0[iVar1 /*10*/])->f_2 = iVar1;
			__LIB_16__::func_722(uParam0[iVar1 /*10*/], iParam2);
		}
		else
		{
			(uParam0[iVar1 /*10*/])->f_1 = 1;
			(uParam0[iVar1 /*10*/])->f_2 = iVar1;
			__LIB_16__::func_731(uParam0[iVar1 /*10*/], iParam2);
		}
		iVar1++;
	}
	return true;
}

void func_737(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_PLAYER_ALLY"));
	}
}

void func_738(bool bParam0)
{
	if (bParam0)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("shows_player_callout_scene"))
		{
			AUDIO::START_AUDIO_SCENE("shows_player_callout_scene");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("shows_player_callout_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("shows_player_callout_scene");
	}
}

int func_739(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
		case 1:
			return 14;
		case 2:
			return 15;
		case 3:
			return 16;
		case 4:
			return 17;
		case 5:
			return 18;
		case 6:
			return 19;
		case 7:
			return 20;
		case 8:
			return 21;
		case 9:
			return 22;
		case 10:
			return 23;
		default:
			break;
	}
	return 0;
}

void func_740(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	bool bVar7;
	bVar0 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	iVar1 = __LIB_16__::func_454(iParam2);
	fVar2 = 0f;
	if (__LIB_0__::func_75(&(uParam0->f_8)))
	{
		fVar2 = __LIB_0__::func_265(&(uParam0->f_8));
	}
	iVar5 = 0;
	while (iVar5 <= (iVar1 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar5 /*10*/]) || ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5 /*10*/]))
		{
		}
		else
		{
			PED::SET_PED_RESET_FLAG((*uParam1)[iVar5 /*10*/], 153, true);
			if (Global_1394141.f_1334)
			{
				if (__LIB_16__::func_472(*uParam0, iVar5) && (uParam1[iVar5 /*10*/])->f_1 != 5)
				{
					(uParam1[iVar5 /*10*/])->f_1 = 5;
				}
			}
			else if (__LIB_16__::func_472(*uParam0, iVar5) && (uParam1[iVar5 /*10*/])->f_1 == 5)
			{
				__LIB_0__::func_19(&(uParam0->f_11), 0);
				(uParam1[iVar5 /*10*/])->f_1 = 3;
			}
			if (uParam0->f_19 && __LIB_16__::func_504(iParam2))
			{
				if (!__LIB_0__::func_75(&(uParam0->f_8)))
				{
					__LIB_1__::func_581(&(uParam0->f_18), 1);
					__LIB_1__::func_581(&(uParam0->f_18), 8);
					__LIB_1__::func_148(&(uParam0->f_8));
				}
				else if ((uParam1[iVar5 /*10*/])->f_1 < 7)
				{
					if (__LIB_16__::func_473(iParam2, iVar5) >= 0f && fVar2 > __LIB_16__::func_473(iParam2, iVar5))
					{
						(uParam1[iVar5 /*10*/])->f_1 = 7;
					}
				}
			}
			if ((!uParam0->f_19 && !__LIB_16__::func_472(*uParam0, iVar5)) && (uParam1[iVar5 /*10*/])->f_1 != 5)
			{
				if ((uParam1[iVar5 /*10*/])->f_9)
				{
					fVar6 = __LIB_0__::func_665(Global_35, (*uParam1)[iVar5 /*10*/], 1, 1);
					if (fVar6 > 2f || !__LIB_16__::func_474(uParam1[iVar5 /*10*/]))
					{
						(uParam1[iVar5 /*10*/])->f_9 = 0;
						uParam0->f_21 = 0;
						(uParam1[iVar5 /*10*/])->f_5 = 2;
						__LIB_16__::func_728(uParam1[iVar5 /*10*/], iParam2);
					}
				}
				else if (!uParam0->f_21 && (uParam1[iVar5 /*10*/])->f_1 != 6)
				{
					fVar6 = __LIB_0__::func_665(Global_35, (*uParam1)[iVar5 /*10*/], 1, 1);
					if (fVar6 < 1.5f && __LIB_16__::func_474(uParam1[iVar5 /*10*/]))
					{
						(uParam1[iVar5 /*10*/])->f_5 = __LIB_16__::func_475(iVar5);
						__LIB_16__::func_728(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_9 = 1;
						uParam0->f_21 = 1;
					}
				}
			}
			switch ((uParam1[iVar5 /*10*/])->f_1)
			{
				case 0:
					break;
				case 1:
					if (__LIB_16__::func_476(iParam2, iVar5))
					{
						__LIB_9__::func_314(uParam1[iVar5 /*10*/], __LIB_16__::func_477(iParam2), 500);
					}
					break;
				case 3:
					__LIB_16__::func_729(uParam1[iVar5 /*10*/], iParam2);
					(uParam1[iVar5 /*10*/])->f_1 = 4;
					break;
				case 4:
					bVar7 = false;
					if ((uParam1[iVar5 /*10*/])->f_6 == -1)
					{
						__LIB_16__::func_728(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_1 = 1;
						return;
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam1)[iVar5 /*10*/], (uParam1[iVar5 /*10*/])->f_7, (uParam1[iVar5 /*10*/])->f_8, 1))
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME((*uParam1)[iVar5 /*10*/], (uParam1[iVar5 /*10*/])->f_7, (uParam1[iVar5 /*10*/])->f_8) > 0.97f)
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						__LIB_16__::func_728(uParam1[iVar5 /*10*/], iParam2);
						(uParam1[iVar5 /*10*/])->f_1 = 1;
					}
					break;
				case 5:
					if (!uParam0->f_19)
					{
						__LIB_16__::func_735(uParam0, uParam1[iVar5 /*10*/]);
					}
					break;
				case 6:
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_12[1 /*2*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5 /*10*/]))
						{
							PED::SET_PED_RESET_FLAG((*uParam1)[iVar5 /*10*/], 261, true);
						}
						if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_12[1 /*2*/], __LIB_16__::func_459(1, iVar5, uParam0->f_17)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_12[1 /*2*/], false))
						{
							__LIB_16__::func_731(uParam1[iVar5 /*10*/], iParam2);
							(uParam1[iVar5 /*10*/])->f_1 = 1;
						}
						if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1((*uParam1)[iVar5 /*10*/], uParam0->f_12[1 /*2*/]))
						{
							__LIB_16__::func_731(uParam1[iVar5 /*10*/], iParam2);
							(uParam1[iVar5 /*10*/])->f_1 = 1;
						}
					}
					break;
				case 2:
					TASK::TASK_START_SCENARIO_AT_POSITION((*uParam1)[iVar5 /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), __LIB_16__::func_457(iParam2, iVar5), __LIB_16__::func_528(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
					(uParam1[iVar5 /*10*/])->f_1 = 1;
					break;
				case 7:
					if (!__LIB_0__::func_1(uParam0->f_18, 4))
					{
						return;
					}
					if (__LIB_16__::func_550(iParam2, iVar5) == 0 && !__LIB_16__::func_460(iParam2))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION((*uParam1)[iVar5 /*10*/], joaat("PROP_HUMAN_SEAT_CHAIR"), __LIB_16__::func_457(iParam2, iVar5), __LIB_16__::func_528(iParam2, iVar5), -1, false, true, 0, 0.25f, false);
						PED::_0x2208438012482A1A((*uParam1)[iVar5 /*10*/], false, false);
						(uParam1[iVar5 /*10*/])->f_1 = 8;
					}
					else
					{
						(uParam1[iVar5 /*10*/])->f_1 = 9;
					}
					break;
				case 8:
					if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar5 /*10*/]) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5 /*10*/]))
					{
						if (TASK::IS_PED_ACTIVE_IN_SCENARIO((*uParam1)[iVar5 /*10*/], 0))
						{
							PED::_0x463803429297117C((*uParam1)[iVar5 /*10*/], 2546.344f, -1307.994f, 48.42698f, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], true);
							(uParam1[iVar5 /*10*/])->f_1 = 9;
						}
						else if (fVar2 > (__LIB_16__::func_473(iParam2, iVar5) + 2f))
						{
							(uParam1[iVar5 /*10*/])->f_1 = 9;
						}
					}
					break;
				case 9:
					if (__LIB_16__::func_467(iParam2))
					{
						if (__LIB_0__::func_1(uParam0->f_18, 16))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING((*uParam1)[iVar5 /*10*/], __LIB_16__::func_462(iParam2), 0, 10, -1, 0, 0, -1);
							(uParam1[iVar5 /*10*/])->f_1 = 10;
						}
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[iVar5 /*10*/], __LIB_16__::func_478(iParam2), 1f, -1, 0.25f, 5373953, 40000f);
						PED::_0x2208438012482A1A((*uParam1)[iVar5 /*10*/], false, false);
						(uParam1[iVar5 /*10*/])->f_1 = 10;
					}
					break;
				case 10:
					if ((bVar0 || PED::IS_PED_SHOOTING(Global_35)) || __LIB_0__::func_1(uParam0->f_18, 32))
					{
						__LIB_1__::func_581(&(uParam0->f_18), 32);
						(uParam1[iVar5 /*10*/])->f_1 = 12;
						return;
					}
					if (__LIB_16__::func_467(iParam2))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], 658540077, true) == 1)
						{
							(uParam1[iVar5 /*10*/])->f_1 = 11;
						}
						else if (fVar2 > (__LIB_16__::func_473(iParam2, iVar5) + 3f))
						{
							(uParam1[iVar5 /*10*/])->f_1 = 9;
						}
					}
					else if (!__LIB_9__::func_313(ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar5 /*10*/], true, false)))
					{
						PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar5 /*10*/], 301, false);
						PED::SET_PED_CAN_BE_TARGETTED((*uParam1)[iVar5 /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam1)[iVar5 /*10*/], joaat("REL_NO_RELATIONSHIP"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar5 /*10*/]);
						(uParam1[iVar5 /*10*/])->f_1 = 14;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], 713668775, true) != 1 && fVar2 > (__LIB_16__::func_473(iParam2, iVar5) + 3f))
					{
						(uParam1[iVar5 /*10*/])->f_1 = 9;
					}
					break;
				case 11:
					if ((bVar0 || PED::IS_PED_SHOOTING(Global_35)) || __LIB_0__::func_1(uParam0->f_18, 32))
					{
						__LIB_1__::func_581(&(uParam0->f_18), 32);
						(uParam1[iVar5 /*10*/])->f_1 = 12;
						return;
					}
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(__LIB_16__::func_462(iParam2), &iVar3);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(__LIB_16__::func_462(iParam2), ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar5 /*10*/], true, false), &iVar4);
					if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], 658540077, true) != 1 || iVar4 >= (iVar3 - 2))
					{
						PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar5 /*10*/], 301, false);
						PED::SET_PED_CAN_BE_TARGETTED((*uParam1)[iVar5 /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam1)[iVar5 /*10*/], joaat("REL_NO_RELATIONSHIP"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar5 /*10*/]);
						(uParam1[iVar5 /*10*/])->f_1 = 14;
					}
					break;
				case 12:
					PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar5 /*10*/], 301, false);
					PED::SET_PED_CAN_BE_TARGETTED((*uParam1)[iVar5 /*10*/], true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam1)[iVar5 /*10*/], joaat("REL_NO_RELATIONSHIP"));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar5 /*10*/], false);
					TASK::_TASK_SMART_FLEE_STYLE_PED((*uParam1)[iVar5 /*10*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iVar5 /*10*/]);
					(uParam1[iVar5 /*10*/])->f_1 = 14;
					break;
				case 13:
					if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iVar5 /*10*/], 713668775, true) != 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO((*uParam1)[iVar5 /*10*/], 0))
					{
						PED::DELETE_PED(uParam1[iVar5 /*10*/]);
						(uParam1[iVar5 /*10*/])->f_1 = 14;
					}
					else
					{
						(uParam1[iVar5 /*10*/])->f_1 = 8;
					}
					break;
				case 14:
					break;
			}
		}
		iVar5++;
	}
}

void func_741(int iParam0)
{
	PED::_0x7D4E70A67A651C71(1);
}

int func_742(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
		case 1:
			return 14;
		case 2:
			return 15;
		case 3:
			return 16;
		case 4:
			return 17;
		case 5:
			return 18;
		case 6:
			return 19;
		case 7:
			return 20;
		case 8:
			return 21;
		case 9:
			return 22;
		case 10:
			return 23;
		case 11:
			return 24;
		default:
			break;
	}
	return 0;
}

void func_743(var uParam0, var uParam1, int iParam2)
{
	if (__LIB_0__::func_1(uParam0->f_18, 1) && !__LIB_0__::func_1(uParam0->f_18, 2))
	{
		STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR"), 15, 0, 0);
		__LIB_1__::func_581(&(uParam0->f_18), 2);
	}
	if (__LIB_0__::func_1(uParam0->f_18, 2) && !__LIB_0__::func_1(uParam0->f_18, 4))
	{
		if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_CHAIR"), false))
		{
			__LIB_1__::func_581(&(uParam0->f_18), 4);
		}
	}
	if (__LIB_0__::func_1(uParam0->f_18, 8) && !__LIB_0__::func_1(uParam0->f_18, 16))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(__LIB_16__::func_462(iParam2));
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(__LIB_16__::func_462(iParam2)))
		{
			__LIB_1__::func_581(&(uParam0->f_18), 16);
		}
	}
	__LIB_16__::func_740(uParam0, uParam1, iParam2);
	switch (Global_1394141.f_1332)
	{
		case 0:
			break;
		default:
			if (Global_1394141.f_1332 != Global_1394141.f_1333)
			{
				__LIB_16__::func_723(uParam0, uParam1, iParam2, __LIB_16__::func_545(*uParam0, uParam0->f_1, Global_1394141.f_1332));
				Global_1394141.f_1333 = Global_1394141.f_1332;
			}
			break;
	}
}

int func_744(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
		case 1:
			return 14;
		case 2:
			return 15;
		case 3:
			return 16;
		case 4:
			return 17;
		case 5:
			return 18;
		case 6:
			return 19;
		case 7:
			return 20;
		case 8:
			return 21;
		case 9:
			return 22;
		case 10:
			return 23;
		case 11:
			return 24;
		case 12:
			return 25;
		case 13:
			return 26;
		case 14:
			return 27;
		case 15:
			return 28;
		case 16:
			return 29;
		default:
			break;
	}
	return 0;
}

char* func_745(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_DANCE";
		case 1:
			return "PL_KISSLOOP";
		case 2:
			return "PL_KISSWIN";
		case 3:
			return "PL_KISSFAIL";
		default:
			break;
	}
	return "";
}

void func_746(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[0], true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[1]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[1], true);
		PED::SET_PED_CAN_ARM_IK(iParam0->f_81[1], false);
		PED::_0xEE9DF765990E8D1D(iParam0->f_81[1], false);
		PED::SET_PED_CAN_HEAD_IK(iParam0->f_81[1], false);
		PED::SET_PED_CAN_LEG_IK(iParam0->f_81[1], false);
		PED::SET_PED_CAN_TORSO_IK(iParam0->f_81[1], false);
		PED::SET_PED_CAN_TORSO_REACT_IK(iParam0->f_81[1], false);
		PED::_0x6647C5F6F5792496(iParam0->f_81[1], false);
	}
	iParam0->f_12 = iParam0->f_81[0];
}

void func_747(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "DANCER", iParam0->f_81[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_48, "SNAKE", iParam0->f_81[1], 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[1], true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_81[1], false, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_81[1], joaat("REL_DOMESTICATED_PET_ANIMAL"));
}

void func_748(int iParam0)
{
	PED::_0x7D4E70A67A651C71(2);
	__LIB_16__::func_738(0);
}

void func_749(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (Local_8.f_1070)
	{
		__LIB_16__::func_521(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_66)
	{
		iVar1 = iParam0->f_66[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			OBJECT::DELETE_OBJECT(&iVar1);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_81)
	{
		iVar2 = iParam0->f_81[iVar0];
		if (STREAMING::IS_MODEL_VALID(iParam0->f_74[iVar0]) && ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar2, -1f);
			PED::DELETE_PED(&iVar2);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_96)
	{
		iVar3 = iParam0->f_96[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			OBJECT::DELETE_OBJECT(&iVar3);
		}
		iVar0++;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_48);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_57))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_57));
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(iParam0->f_945))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED(iParam0->f_945))
		{
			HUD::_TEXT_DATABASE_DELETE(iParam0->f_945);
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(iParam0->f_946) && !iParam0->f_14)
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED(iParam0->f_946))
		{
			HUD::_TEXT_DATABASE_DELETE(iParam0->f_946);
		}
	}
	__LIB_16__::func_748(iParam0);
	if (!iParam0->f_14)
	{
		__LIB_16__::func_493(&(iParam0->f_104));
		if (__LIB_0__::func_73(1))
		{
			__LIB_1__::func_979(1);
		}
	}
	if (__LIB_0__::func_1(iParam0->f_16, 33554432))
	{
		__LIB_16__::func_443(&(iParam0->f_349), Global_1394141.f_7[*iParam0 /*31*/].f_4);
	}
	__LIB_1__::func_979(1);
}

void func_750(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (Local_8.f_1070)
	{
		__LIB_16__::func_521(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_66)
	{
		iVar1 = iParam0->f_66[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			OBJECT::DELETE_OBJECT(&iVar1);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_81)
	{
		iVar2 = iParam0->f_81[iVar0];
		if (STREAMING::IS_MODEL_VALID(iParam0->f_74[iVar0]) && ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar2, -1f);
			PED::DELETE_PED(&iVar2);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_96)
	{
		iVar3 = iParam0->f_96[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			OBJECT::DELETE_OBJECT(&iVar3);
		}
		iVar0++;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_48))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_48);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_57))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_57));
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(iParam0->f_945))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED(iParam0->f_945))
		{
			HUD::_TEXT_DATABASE_DELETE(iParam0->f_945);
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(iParam0->f_946) && !iParam0->f_14)
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED(iParam0->f_946))
		{
			HUD::_TEXT_DATABASE_DELETE(iParam0->f_946);
		}
	}
	__LIB_16__::func_741(iParam0);
	if (!iParam0->f_14)
	{
		__LIB_16__::func_493(&(iParam0->f_104));
		if (__LIB_0__::func_73(1))
		{
			__LIB_1__::func_979(1);
		}
	}
	if (__LIB_0__::func_1(iParam0->f_16, 33554432))
	{
		__LIB_16__::func_443(&(iParam0->f_349), Global_1394141.f_7[*iParam0 /*31*/].f_4);
	}
	__LIB_1__::func_979(1);
}

bool func_751(var uParam0, var uParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, true))
			{
				return false;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return false;
			}
		}
	}
	else
	{
		__LIB_12__::func_132(uParam0);
		return false;
	}
	return true;
}

void func_752(var uParam0)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_39, "filterIndex");
	uParam0->f_52 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "filter", __LIB_12__::func_144(uParam0->f_52));
}

void func_753(var uParam0, int iParam1)
{
	if (uParam0->f_8 != iParam1)
	{
		uParam0->f_8 = iParam1;
		__LIB_12__::func_117(uParam0);
	}
}

void func_754(var uParam0)
{
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_17)))
	{
		HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_17));
	}
	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_RIFLE"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_REPEATER"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_45MM"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_9MM"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_SHOTGUN"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_ARROW"), false);
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_TOMAHAWK01"), false);
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_KNIFE05"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_RAG01X"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_MOLOTOV01"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_MOLOTOV02"), false);
	STREAMING::REQUEST_MODEL(joaat("P_MOLOTOVEMPTY01X"), false);
	STREAMING::REQUEST_MODEL(joaat("W_STICK_DYNAMITE01"), false);
	__LIB_12__::func_132(uParam0);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);
	if (uParam0->f_31)
	{
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFLESHYMEAT01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDBIRDBREAST01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDEFLESHYMEAT01XB"), false);
	}
}

bool func_755(var uParam0)
{
	int iVar0;
	char cVar1[16];
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_39, "filter", __LIB_12__::func_144(uParam0->f_52));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "filterCount", 5 + 1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "filterIndex", uParam0->f_52);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_39, "tipText", "");
	uParam0->f_51 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_39, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_39, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_39, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		__LIB_12__::func_145(&(uParam0->f_41[iVar0]), &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_46[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_39, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_46[iVar0], &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_46[iVar0], &cVar1, 0);
		iVar0++;
	}
	return true;
}

bool func_756(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_12__::func_133(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_757()
{
	if ((__LIB_0__::func_1(Global_1935689.f_10186, 1) || __LIB_0__::func_1(Global_1935689.f_10186, 2)) || __LIB_0__::func_1(Global_1935689.f_10186, 4))
	{
		return true;
	}
	return false;
}

void func_758(var uParam0, int iParam1, int iParam2)
{
	Global_1911914[uParam0->f_55 /*9*/].f_5 = iParam2;
	Global_1911914[uParam0->f_55 /*9*/].f_6 = iParam1;
	Global_1911914[uParam0->f_55 /*9*/].f_7 = 1;
	Global_1911914[uParam0->f_55 /*9*/].f_8 = 0;
	Global_1911914.f_1576++;
	uParam0->f_55++;
	if (iParam2 == 600942249 || iParam2 == -257768755)
	{
		__LIB_12__::func_178(uParam0, iParam1, iParam2);
	}
	else if (iParam2 == -214678071)
	{
		__LIB_12__::func_179(uParam0, iParam1);
	}
}

void func_759(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
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
				__LIB_2__::func_998(iVar1, &uVar17, &uVar18, &iVar16, &uVar19);
				if (__LIB_2__::func_999(&iVar15, iVar1, iVar16, uVar17) && iVar15 == iParam0)
				{
					ENTITY::_DELETE_CARRIABLE(&iVar0);
				}
			}
		}
	}
}

void func_760(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_372(uParam0->f_77, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		{
			iVar1 = __LIB_12__::func_150(uParam0->f_77);
			if (iVar1 != 0)
			{
				uParam0->f_85 = OBJECT::CREATE_OBJECT(iVar1, Global_36, true, true, false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_85, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_85, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_63, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_63);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_63, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "arrow", uParam0->f_86, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_66);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_66, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_67, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_67);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_67, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "player", Global_35, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		{
			iVar2 = __LIB_12__::func_150(uParam0->f_77);
			if (iVar2 != 0)
			{
				uParam0->f_85 = OBJECT::CREATE_OBJECT(iVar2, Global_36, true, true, false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_85, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_85, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_85, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), __LIB_12__::func_151(uParam0->f_77), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "bullet", uParam0->f_85, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_65);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_36, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_68);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_68, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_TOMAHAWK"), 1, Global_36, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_69, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_69);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_69, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_36, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
		{
			uParam0->f_87 = OBJECT::CREATE_OBJECT(joaat("P_CS_RAG01X"), Global_36, true, true, false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_87, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_87, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_70, "RAG", uParam0->f_87, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_70, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_70);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_70, "pl_craft", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_69, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_71, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_71);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_71, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_72, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_72);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_72, "pl_craft", true);
	}
	else
	{
		uParam0->f_53 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(__LIB_12__::func_146(uParam0->f_77), __LIB_12__::func_147(uParam0->f_77)) * 1000f));
		__LIB_1__::func_148(&(uParam0->f_89));
		TASK::TASK_PLAY_ANIM(Global_35, __LIB_12__::func_146(uParam0->f_77), __LIB_12__::func_147(uParam0->f_77), 8f, -8f, -1, 67108880, 0f, false, 4096, false, "Satchel_Only_filter", false);
	}
}

void func_761()
{
	if (__LIB_3__::func_107())
	{
		__LIB_12__::func_183(1);
	}
}

int func_762(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_1__::func_614(iParam0, bParam1, 0);
	if (__LIB_0__::func_1(Global_1935689.f_10186, 1))
	{
		iVar0 = __LIB_0__::func_398(__LIB_0__::func_97(0));
		iVar1 = (iVar1 + __LIB_7__::func_601(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0), iParam0));
	}
	if (__LIB_0__::func_1(Global_1935689.f_10186, 2))
	{
		iVar0 = __LIB_0__::func_398(__LIB_0__::func_97(1));
		iVar1 = (iVar1 + __LIB_7__::func_601(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0), iParam0));
	}
	if (__LIB_0__::func_1(Global_1935689.f_10186, 4))
	{
		iVar0 = __LIB_0__::func_398(__LIB_0__::func_97(6));
		iVar1 = (iVar1 + __LIB_7__::func_601(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0), iParam0));
	}
	return iVar1;
}

int func_763(int iParam0, bool bParam1, int iParam2)
{
	if (__LIB_4__::func_841(255))
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_XP")))
	{
		return 0;
	}
	if (!__LIB_12__::func_130(iParam0))
	{
		return 0;
	}
	if (!__LIB_16__::func_418(__LIB_16__::func_261(iParam0), !bParam1, iParam2, 0))
	{
		return 0;
	}
	return 1;
}

int func_764(int iParam0)
{
	if (__LIB_4__::func_601())
	{
		return 1;
	}
	if (!__LIB_16__::func_418(__LIB_9__::func_981(iParam0), 0, 255, 0))
	{
		return 0;
	}
	return 1;
}

bool func_765(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	__LIB_14__::func_14(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
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

int func_766(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	var uVar6;
	if (!__LIB_9__::func_877(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (__LIB_12__::func_127(iParam0) && __LIB_6__::func_679(iParam0))
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
		return 0;
	}
	return 1;
}

void func_767()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_6__::func_544();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_1__::func_825(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

int func_768()
{
	return 106;
}

void func_769()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1327590.f_19622[iVar0 /*14*/].f_5 = 0;
		iVar0++;
	}
}

void func_770()
{
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("FAST_TRAVEL_MENU")) && __LIB_12__::func_98() != 0)
	{
		__LIB_0__::func_7(&Global_43907, 16);
	}
}

int func_771(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		return __LIB_9__::func_361(Global_1359489.f_4);
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

void func_772()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_1__::func_269(iVar0, 1, 0))
		{
			if (__LIB_0__::func_903(iVar0))
			{
				iVar2 = __LIB_0__::func_167(iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::_0x97B06669AC569003(iVar2, iVar1);
				}
			}
		}
		iVar0++;
	}
}

bool func_773(vector3 vParam0, float fParam3)
{
	if (__LIB_14__::func_456(vParam0, fParam3))
	{
		return true;
	}
	if (__LIB_7__::func_839(vParam0, fParam3))
	{
		return true;
	}
	return false;
}

void func_774(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, struct<2> Param17, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, bool bParam28, int iParam29)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_TS_RHD_FEUD_LETTER"):
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2"):
			if (__LIB_0__::func_113())
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR4_AR"), 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_MAYOR4_AR")))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR4B_JN"), 0);
			}
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2_JN"):
			__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR4A_JN"), 0);
			break;
		case joaat("DOCUMENT_TS_STR_MAYOR_LETTER"):
			break;
		case joaat("DOCUMENT_RCM_FMA_LETTER"):
			__LIB_1__::func_532(Global_1347702[80 /*49*/].f_15, 1);
			if (__LIB_0__::func_113() == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA5_1_AR"), 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_FMA5_1_AR")))
			{
				if (__LIB_0__::func_343(77))
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_FMA5_2_JN"), 0);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_FMA5_1_JN"), 0);
				}
			}
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(51)) && !__LIB_7__::func_782(1048576))
			{
				__LIB_7__::func_783(2);
				__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
				__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 2, 0);
				__LIB_0__::func_433(1048576);
			}
			break;
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(51)) && !__LIB_7__::func_782(16384))
			{
				__LIB_7__::func_783(1);
				__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
				__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 5, 0);
				__LIB_0__::func_433(16384);
			}
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(40)) && !__LIB_7__::func_784(32))
			{
				__LIB_7__::func_785(4);
				__LIB_1__::func_450(39, 0, 0, 0, 0, -1, 0);
				__LIB_1__::func_832(39, 0, 0, 0, 0, 0, 2, 0);
				__LIB_0__::func_434(32);
			}
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(42)) && !__LIB_7__::func_786(16))
			{
				__LIB_7__::func_787(8);
				__LIB_1__::func_450(41, 0, 0, 0, 0, -1, 0);
				__LIB_1__::func_832(41, 0, 0, 0, 0, 0, 2, 0);
				__LIB_0__::func_435(16);
			}
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			if ((__LIB_0__::func_28() && !__LIB_1__::func_154(50)) && !__LIB_7__::func_788(32))
			{
				__LIB_7__::func_789(4);
				__LIB_1__::func_450(49, 0, 0, 0, 0, -1, 0);
				__LIB_1__::func_832(49, 0, 0, 0, 0, 0, 2, 0);
				__LIB_0__::func_436(32);
				if (!__LIB_1__::func_25(Global_1347702[50 /*49*/].f_15, 1))
				{
					if (__LIB_0__::func_113() == 1)
					{
						__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV15_AR"), 0);
					}
					else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_ROCKCARV15_AR")))
					{
						__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV15_JN"), 0);
					}
				}
			}
			break;
		case joaat("DOCUMENT_CATALOGUE_WMN_LETTER_01"):
			iParam27 = joaat("TP_CATALOGUE_LETTER_01");
			Param17.f_1 = iParam27;
			StringCopy(&(Param1.f_10), "respond_parcel", 32);
			iParam29 = 0;
			bParam28 = true;
			break;
	}
}

void func_775(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	__LIB_14__::func_277(iParam0);
}

bool func_776(int iParam0, int iParam1)
{
	return (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1);
}

float func_777(float fParam0, float fParam1, float fParam2)
{
	return ((fParam0 - fParam1) / (fParam2 - fParam1));
}

void func_778(var uParam0)
{
	__LIB_4__::func_945(uParam0, 2);
	__LIB_4__::func_945(uParam0, 1);
	__LIB_0__::func_7(&Global_1935630, 262144);
}

bool func_779(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_5__::func_475(uParam0);
	if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) <= 3)
	{
		iVar0 = __LIB_4__::func_939(uParam0);
	}
	Var1 = { __LIB_5__::func_299(uParam0, iVar0) };
	if (__LIB_11__::func_813(&(uParam0->f_10792), Var1, __LIB_0__::func_81(&(uParam0->f_10792)), 0))
	{
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 262144);
		if (__LIB_4__::func_562(&(uParam0->f_10792), 524288))
		{
			__LIB_5__::func_33(uParam0, 67108864);
			__LIB_4__::func_563(&(uParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

bool func_780(int iParam0)
{
	return __LIB_9__::func_489(iParam0, 256);
}

bool func_781(int iParam0)
{
	if (__LIB_9__::func_489(iParam0, 256))
	{
		__LIB_0__::func_8(&Global_1935630, 1048576);
		return true;
	}
	return false;
}

int func_782(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
	if (__LIB_9__::func_78(PLAYER::PLAYER_ID(), 1, 0))
	{
		if ((!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27) && !__LIB_5__::func_542(iParam0)) && !Global_43891)
		{
			__LIB_10__::func_841(iParam0, BUILTIN::VDIST2(__LIB_5__::func_449(iParam0), Global_36), -1, 1, 1);
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

void func_783(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

bool func_784(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_2__::func_954();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case joaat("HIGHPRESSURE"):
				case joaat("SUNNY"):
					return true;
				default:
					return false;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case joaat("OVERCAST"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("SUNNY"):
					return true;
				default:
					return false;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case joaat("DRIZZLE"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("SNOWLIGHT"):
				case joaat("CLOUDS"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
				case joaat("SNOWCLEARING"):
					return true;
				default:
					return false;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case joaat("DRIZZLE"):
				case joaat("THUNDER"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("SHOWER"):
				case joaat("SNOW"):
				case joaat("HIGHPRESSURE"):
				case joaat("SLEET"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("RAIN"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
				case joaat("SNOWCLEARING"):
					return true;
				default:
					return false;
			}
			break;
		case 4:
			return true;
		case 5:
			switch (iVar0)
			{
				case joaat("FOG"):
				case joaat("MISTY"):
					return true;
			}
			break;
	}
	return false;
}

bool func_785()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

struct<12> func_786(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<12> Var0;
	switch (iParam0)
	{
		case 0:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { 2041.771f, -301.8179f, 40.64257f };
			Var0.f_5 = { 0f, 0f, -35f };
			Var0.f_8 = { 125f, 200f, 20f };
			Var0.f_11 = "AgnesDowdInit";
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 2434.052f, -1224.941f, 45.8519f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "AndersHelgersonInit";
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					switch (iParam3)
					{
						case 0:
							Var0.f_1 = joaat("VOLCYLINDER");
							Var0.f_2 = { -3671.981f, -2610.041f, -15.387f };
							Var0.f_5 = { 0f, 0f, 0f };
							Var0.f_8 = { 160f, 160f, 24f };
							Var0.f_11 = "ArmadilloTownCrierInit";
							break;
						case 1:
							Var0.f_1 = joaat("VOLCYLINDER");
							Var0.f_2 = { -3671.981f, -2610.041f, -15.387f };
							Var0.f_5 = { 0f, 0f, 0f };
							Var0.f_8 = { 160f, 160f, 24f };
							Var0.f_11 = "ArmadilloTownCrierInit";
							break;
						case 2:
							Var0.f_1 = joaat("VOLCYLINDER");
							Var0.f_2 = { -3671.981f, -2610.041f, -15.387f };
							Var0.f_5 = { 0f, 0f, 0f };
							Var0.f_8 = { 160f, 160f, 24f };
							Var0.f_11 = "ArmadilloTownCrierInit";
							break;
						case 3:
							Var0.f_1 = joaat("VOLCYLINDER");
							Var0.f_2 = { -3671.981f, -2610.041f, -15.387f };
							Var0.f_5 = { 0f, 0f, 0f };
							Var0.f_8 = { 160f, 160f, 24f };
							Var0.f_11 = "ArmadilloTownCrierInit";
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -1791.806f, -422.4149f, 154.8645f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "BlandPreacherInit";
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 3:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 502.0502f, 1284.979f, 181.4051f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 190f, 190f, 60f };
					Var0.f_11 = "BlindManCassidy4Init";
					break;
				case 9:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 414.5646f, 412.7333f, 107.6299f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 190f, 190f, 60f };
					Var0.f_11 = "BlindManCassidy5Init";
					break;
				case 10:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 2794.157f, 1406.62f, 82.3539f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 190f, 190f, 60f };
					Var0.f_11 = "BlindManCassidy6Init";
					break;
				case 13:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -5342.735f, -2948.708f, 0.8175f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 190f, 190f, 60f };
					Var0.f_11 = "BlindManCassidy7Init";
					break;
				case 4:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 190f, 190f, 60f };
					Var0.f_11 = "BlindManCassidy8Init";
					break;
				default:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 190f, 190f, 60f };
					Var0.f_11 = "BlindManCassidy8Init";
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 888.6843f, 1276.612f, 234.0975f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 120f };
					Var0.f_11 = "ChelonianMasterInit";
					break;
				case 1:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 865.601f, 1248.82f, 179.7602f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 180f, 180f, 120f };
					Var0.f_11 = "ChelonianMaster2Init";
					break;
			}
			break;
		case 7:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { 2013.938f, 621.8572f, 160.1942f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 140f, 140f, 120f };
			Var0.f_11 = "CivilWarCommandoInit";
			break;
		case 5:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { -1504.076f, 2458.008f, 417.758f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 201.2847f, 200f, 120f };
			Var0.f_11 = "CrackpotRobotInit";
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 2537.911f, -1205.53f, 56.90488f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "DorotheaWicklowInit";
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -323.7828f, 767.8452f, 121.6327f };
					Var0.f_5 = { 0f, 0f, 9.428618f };
					Var0.f_8 = { 29f, 32.5f, 10f };
					Var0.f_11 = "EndlessStrainerInit";
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0.f_1 = joaat("VOLBOX");
					Var0.f_2 = { 2691.439f, -1379.215f, 45.53815f };
					Var0.f_5 = { 0f, 0f, 40.27665f };
					Var0.f_8 = { 160f, 220f, 70f };
					Var0.f_11 = "EugenicsProponentInit";
					break;
			}
			break;
		case 11:
			switch (__LIB_0__::func_12())
			{
				case 105:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 1407.764f, -1377.079f, 79.702f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinRhodesInit";
					return Var0;
				case 38:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -773.2449f, -1329.082f, 42.6291f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinBlackwaterInit";
					return Var0;
				case 126:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -2378.475f, -2378.621f, 61.1724f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinMacfarlaneInit";
					return Var0;
				case 5:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinSaintDenisInit";
					return Var0;
			}
			switch (iParam2)
			{
				case 12:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -2338.21f, -1271.362f, 147.062f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinTallTreesInit";
					break;
				case 10:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 2428.864f, 1015.729f, 85.6131f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinRoanokeInit";
					break;
				case 15:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -3157.477f, -2981.991f, 4.6224f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinChollaInit";
					break;
				case 0:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinBayouInit";
					return Var0;
				default:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -2338.21f, -1271.362f, 147.062f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "GavinTallTreesInit";
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 1710f, 2148f, 319f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 70f };
					Var0.f_11 = "GiantInit";
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -312.9856f, 808.8508f, 117.9822f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 60f, 60f, 20f };
					Var0.f_11 = "GrizzledJonInit";
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 1320.745f, -1291.739f, 75.14026f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "JoeButlerInit";
					break;
			}
			break;
		case 15:
			switch (iParam2)
			{
				case 7:
				case 9:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -727.395f, 686.1953f, 58.2244f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 57.863f };
					Var0.f_11 = "JohnMadmanHeartlandsInit";
					break;
				case 13:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -6122.201f, -3803.751f, -35.2455f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 66.553f };
					Var0.f_11 = "JohnMadmanGaptoothInit";
					break;
				case 10:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 2183.348f, 1502.819f, 83.6009f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 108.806f };
					Var0.f_11 = "JohnMadmanRoanokeInit";
					break;
				case 1:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 100f, 140f, 52.073f };
					Var0.f_11 = "JohnMadmanStrawberryInit";
					break;
				default:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 52.073f };
					Var0.f_11 = "JohnMadmanGeneralInit";
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 2627.977f, -1225.307f, 69.61133f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "LillianPowellInit";
					break;
			}
			break;
		case 17:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { 2943.588f, 1336.999f, 43.22713f };
			Var0.f_5 = { 0f, 0f, 36.13133f };
			Var0.f_8 = { 160f, 160f, 40f };
			Var0.f_11 = "MadScientistInit";
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -1812.186f, -367.3066f, 161.8834f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "MayorStrawberryInit";
					break;
				case 1:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -1807.89f, -371.5062f, 161.8662f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "MayorStrawberryInit";
					break;
				case 2:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -1800.857f, -357.3966f, 162.9631f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 100f, 100f, 20f };
					Var0.f_11 = "MayorStrawberryInit";
					break;
			}
			break;
		case 19:
			switch (iParam3)
			{
				case 0:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -257.3543f, 753.7379f, 116.1329f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 150f, 150f, 40f };
					Var0.f_11 = "BumMickyInit";
					break;
				case 1:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -192.9274f, 625.6254f, 113.5786f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 150f, 150f, 40f };
					Var0.f_11 = "BumMickyInit";
					break;
				default:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -257.3543f, 753.7379f, 116.1329f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 150f, 150f, 40f };
					Var0.f_11 = "BumMickyInit";
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -2725.277f, 709.9713f, 173.0266f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "PhilosopherInit";
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 2706.158f, 2370.946f, 165.3596f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "PoorJoeInit";
					break;
			}
			break;
		case 22:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { -5511.87f, -2945.988f, -1.198f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 140f, 140f, 30f };
			Var0.f_11 = "SheriffInit";
			break;
		case 23:
			switch (iParam2)
			{
				case 0:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 1784.089f, -946.648f, 40.7225f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SoothsayerInit";
					break;
				case 2:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 2440.456f, -462.537f, 40.9104f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SoothsayerInit";
					break;
				default:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 2922.895f, 636.0865f, 52.2682f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SoothsayerInit";
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -2233.602f, -2850.517f, 62.7628f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper1Init";
					break;
				case 1:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -3198.999f, -2538.554f, 66.5911f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper2Init";
					break;
				case 2:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -2913.073f, -2849.159f, 38.86703f };
					Var0.f_5 = { 0f, 0f, 135f };
					Var0.f_8 = { 200f, 120f, 40f };
					Var0.f_11 = "SunWorshipper3Init";
					break;
				case 3:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -3267.86f, -3416.677f, 39.5041f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper4Init";
					break;
				case 4:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -3572.794f, -3565.222f, 33.505f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper5Init";
					break;
				case 5:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -4399.393f, -3587.901f, 19.91016f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper6Init";
					break;
				case 6:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -4988.676f, -4060.992f, 1.0884f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper7Init";
					break;
				case 7:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -5333.317f, -3534.569f, -22.77217f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper8Init";
					break;
				case 8:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -5374.994f, -4053.294f, -6.2292f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper9Init";
					break;
				case 9:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -5413.131f, -2606.156f, 2.5597f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper10Init";
					break;
				case 10:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -4956.249f, -3198.202f, -4.254218f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper11Init";
					break;
				case 11:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -4594.695f, -3125.494f, -1.754162f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 20f };
					Var0.f_11 = "SunWorshipper12Init";
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 2371.776f, -861.4393f, 49.7588f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 160f, 160f, 20f };
					Var0.f_11 = "SwampWeirdoInit";
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { -345.2797f, 794.6578f, 115.1777f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 40f };
					Var0.f_11 = "ThomasDowneInit";
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 2647.447f, -1208.416f, 55.34686f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 100f, 100f, 30f };
					Var0.f_11 = "TimothyDonahueInit";
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					Var0.f_1 = joaat("VOLCYLINDER");
					Var0.f_2 = { 3025.557f, 1779.699f, 83.2056f };
					Var0.f_5 = { 0f, 0f, 0f };
					Var0.f_8 = { 140f, 140f, 30f };
					Var0.f_11 = "TinyHermitInit";
					break;
			}
			break;
		case 29:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { 2778.292f, -1313.274f, 45.89664f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 100f, 100f, 20f };
			Var0.f_11 = "VampireInit";
			break;
	}
	return Var0;
}

int func_787(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (__LIB_1__::func_898())
			{
				case 2:
					return 2;
				case 0:
					return 0;
				case 11:
					return 11;
				case 10:
					return 10;
				default:
					break;
			}
			return -1;
		case 1:
			return 0;
		case 2:
			return 15;
		case 3:
			return 1;
		case 4:
			switch (__LIB_1__::func_898())
			{
				case 3:
					return 3;
				case 9:
					return 9;
				case 10:
					return 10;
				case 4:
					return 4;
				case 13:
					return 13;
				default:
					break;
			}
			return -1;
		case 6:
			switch (__LIB_1__::func_898())
			{
				case 3:
					return 3;
				case 6:
					return 6;
				default:
					break;
			}
			return -1;
		case 7:
			return 10;
		case 5:
			return 7;
		case 8:
			return 0;
		case 9:
			return 9;
		case 10:
			return 0;
		case 11:
			switch (__LIB_1__::func_898())
			{
				case 12:
					return 12;
				case 10:
					return 10;
				case 15:
					return 15;
				case 11:
					return 11;
				case 16:
					return 16;
				case 1:
					return 1;
				case 0:
					return 0;
				default:
					break;
			}
			return -1;
		case 12:
			return 6;
		case 13:
			return 9;
		case 14:
			return 11;
		case 15:
			switch (__LIB_1__::func_898())
			{
				case 9:
					return 9;
				case 7:
					return 7;
				case 13:
					return 13;
				case 10:
					return 10;
				case 1:
					return 1;
				default:
					break;
			}
			return -1;
		case 16:
			return 0;
		case 17:
			return 10;
		case 18:
			return 1;
		case 19:
			return 9;
		case 20:
			return 1;
		case 21:
			return 10;
		case 22:
			return 13;
		case 23:
			switch (__LIB_1__::func_898())
			{
				case 0:
					return 0;
				case 2:
					return 2;
				default:
					break;
			}
			return -1;
		case 24:
			switch (__LIB_1__::func_898())
			{
				case 15:
					return 15;
				case 13:
					return 13;
				case 14:
					return 14;
				case 16:
					return 16;
				default:
					break;
			}
			return -1;
		case 25:
			return 0;
		case 26:
			return 9;
		case 27:
			return 0;
		case 28:
			return 10;
		case 29:
			return 0;
	}
	return -1;
}

int func_788(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 5;
		case 2:
			return 120;
		case 3:
			return 26;
		case 4:
			return -1;
		case 6:
			return -1;
		case 7:
			return -1;
		case 5:
			return -1;
		case 8:
			return 5;
		case 9:
			return 76;
		case 10:
			return 5;
		case 11:
			switch (__LIB_0__::func_12())
			{
				case 105:
					return 105;
				case 38:
					return 38;
				case 126:
					return 126;
				case 5:
					return 5;
				default:
					break;
			}
			return -1;
		case 12:
			return -1;
		case 13:
			return 76;
		case 14:
			return 105;
		case 15:
			return -1;
		case 16:
			return 5;
		case 17:
			return 78;
		case 18:
			return 26;
		case 19:
			return 76;
		case 20:
			return -1;
		case 21:
			return -1;
		case 22:
			return 115;
		case 23:
			return -1;
		case 24:
			return -1;
		case 25:
			return -1;
		case 26:
			return 76;
		case 27:
			return 5;
		case 28:
			return -1;
		case 29:
			return 5;
	}
	return -1;
}

void func_789(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = __LIB_0__::func_23();
}

int func_790(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
		case 3:
			return 813446076;
		case 4:
			return joaat("SPID_BLIND_MAN_CASSIDY");
		case 6:
			return -161610929;
		case 7:
			return 419383665;
		case 5:
			return 1809158435;
		case 8:
			return 698747486;
		case 9:
			return 399829678;
		case 10:
			return -1767525506;
		case 11:
			return 1533318556;
		case 12:
			return 846763582;
		case 13:
			return 974338564;
		case 14:
			return 860809165;
		case 15:
			return -1682386507;
		case 16:
			return 420952075;
		case 17:
			return 1340251064;
		case 18:
			return -1417023286;
		case 19:
			return 237608522;
		case 20:
			return 1487910336;
		case 21:
			return 129290505;
		case 22:
			return 1231488843;
		case 23:
			return -499580940;
		case 24:
			return 1953535365;
		case 25:
			return -315419568;
		case 26:
			return -1708806962;
		case 27:
			return 1405526353;
		case 28:
			return -1903564707;
		case 29:
			return -1132839335;
		default:
			break;
	}
	return 0;
}

void func_791()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

void func_792(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "bIsSpecialPed", true);
	DECORATOR::DECOR_SET_INT(iParam0, "iSpecialPedID", iParam1);
	Global_1396257[iParam1 /*638*/].f_636 = iParam0;
}

void func_793(var uParam0, int iParam1)
{
	uParam0->f_24 = iParam1;
}

void func_794(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

char* func_795(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

void func_796(int iParam0, vector3 vParam1, int iParam4)
{
	if (!__LIB_0__::func_163(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

void func_797(int iParam0, int iParam1)
{
	iParam0->f_144 = iParam1;
}

void func_798(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 40) == 0)
	{
		uParam0->f_142 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true);
	}
}

void func_799(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 1;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_800(int iParam0, int iParam1)
{
	iParam0->f_143 = iParam1;
}

void func_801(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 1)
	{
		return;
	}
	iParam0->f_41[iParam1 /*59*/].f_58 = iParam2;
}

bool func_802(var uParam0, int iParam1)
{
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam1, *uParam0);
		return true;
	}
	return false;
}

void func_803(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			return;
		}
		if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
		{
			return;
		}
	}
	EVENT::REMOVE_SHOCKING_EVENT(*uParam1);
}

void func_804(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 7, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 3, 2, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 4, 2, 1);
}

void func_805()
{
	if (HUD::IS_RADAR_HIDDEN())
	{
		MAP::DISPLAY_RADAR(true);
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
	}
}

void func_806(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam2, *uParam0, fParam4, fParam3, fParam3, -1f, -1f, 180f, false, false, -1, -1);
}

int func_807(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 100)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

float func_808(int iParam0)
{
	return iParam0->f_142;
}

bool func_809(var uParam0)
{
	if (((((__LIB_0__::func_27(*uParam0, 2) || __LIB_0__::func_27(*uParam0, 4)) || __LIB_0__::func_27(*uParam0, 16)) || __LIB_0__::func_27(*uParam0, 128)) || __LIB_0__::func_27(*uParam0, 1024)) || __LIB_0__::func_27(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

void func_810(var uParam0, char* sParam1, vector3 vParam2, vector3 vParam5, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		uParam0->f_35 = 1;
		return;
	}
	uParam0->f_1 = sParam1;
	if (!MISC::IS_STRING_NULL(sParam8))
	{
		uParam0->f_2 = sParam8;
	}
	uParam0->f_19 = iParam10;
	uParam0->f_20 = iParam11;
	uParam0->f_21 = iParam12;
	uParam0->f_22 = iParam13;
	uParam0->f_25 = { vParam2 };
	uParam0->f_28 = { vParam5 };
	uParam0->f_31 = iParam9;
	uParam0->f_35 = 0;
}

void func_811(var uParam0, int iParam1)
{
	uParam0->f_25 = iParam1;
}

bool func_812(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 100)
	{
		return false;
	}
	return true;
}

void func_813(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_10 = iParam1;
	uParam0->f_10.f_1 = iParam2;
}

void func_814(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_8.f_1 = iParam2;
}

bool func_815(int iParam0, vector3 vParam1, int iParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*iParam0))
	{
		*iParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_0x59B57C4B06531E1E(vParam1, iParam4, *iParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*iParam0);
		return true;
	}
	ITEMSET::_CLEAR_ITEMSET(*iParam0);
	return false;
}

bool func_816(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 1)
	{
		return false;
	}
	return true;
}

bool func_817(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	return true;
}

int func_818(int iParam0)
{
	return iParam0->f_101;
}

int func_819(int iParam0, int iParam1)
{
	return iParam0->f_41[iParam1 /*59*/].f_56;
}

void func_820(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	uParam0->f_2.f_1 = iParam2;
}

int func_821(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 1;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, sParam1, false, true);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, uParam0->f_2, false, true);
	}
	else
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, 0, false, true);
	}
	return 1;
}

int func_822(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false);
	bVar1 = ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return 1;
	}
	bVar3 = ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0);
	bVar2 = ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		return 0;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return 0;
}

int func_823(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 1;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_6))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_6, uParam0->f_5, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_4))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_4, uParam0->f_3, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_8))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_8, uParam0->f_7, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_10))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_10, uParam0->f_9, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_12))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_12, uParam0->f_11, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_14, uParam0->f_13, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_15) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_16))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_16, uParam0->f_15, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_18))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_18, uParam0->f_17, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_20))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_20, uParam0->f_19, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_22))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_22, uParam0->f_21, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_24))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_24, uParam0->f_23, false);
	}
	if (!__LIB_0__::func_86(uParam0->f_25) || !__LIB_0__::func_86(uParam0->f_28))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, uParam0->f_25, uParam0->f_28, 2);
	}
	return 1;
}

void func_824(var uParam0, var uParam1)
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
	uParam1->f_2 = uParam0->f_2;
	uParam1->f_2.f_1 = uParam0->f_2.f_1;
	uParam1->f_4 = uParam0->f_4;
	uParam1->f_4.f_1 = uParam0->f_4.f_1;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_6.f_1 = uParam0->f_6.f_1;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_8.f_1 = uParam0->f_8.f_1;
	uParam1->f_10 = uParam0->f_10;
	uParam1->f_10.f_1 = uParam0->f_10.f_1;
	uParam1->f_12 = uParam0->f_12;
	uParam1->f_13 = uParam0->f_13;
	uParam1->f_14 = uParam0->f_14;
	uParam1->f_15 = uParam0->f_15;
	uParam1->f_16 = uParam0->f_16;
	uParam1->f_17 = uParam0->f_17;
	uParam1->f_18 = uParam0->f_18;
	uParam1->f_19 = uParam0->f_19;
	uParam1->f_23 = uParam0->f_23;
	uParam1->f_24 = uParam0->f_24;
	uParam1->f_25 = uParam0->f_25;
	uParam1->f_20 = uParam0->f_20;
	uParam1->f_21 = uParam0->f_21;
	uParam1->f_22 = uParam0->f_22;
	uParam1->f_26 = uParam0->f_26;
	uParam1->f_27 = uParam0->f_27;
}

int func_825(var uParam0)
{
	if ((((__LIB_0__::func_27(*uParam0, 32) || __LIB_0__::func_27(*uParam0, 64)) || __LIB_0__::func_27(*uParam0, 512)) || __LIB_0__::func_27(*uParam0, 256)) || __LIB_0__::func_27(*uParam0, 8))
	{
		return 1;
	}
	return 0;
}

void func_826(var uParam0, int iParam1, var uParam2)
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
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(*iParam1))
	{
		*iParam1 = ITEMSET::CREATE_ITEMSET(true);
		*uParam2 = 0;
	}
	if (!*uParam2)
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = ENTITY::_0x886171A12F400B89(*uParam0, iVar0, 1);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
				iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
				if (ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					ITEMSET::ADD_TO_ITEMSET(iVar1, *iParam1);
				}
				iVar4++;
			}
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
		*uParam2 = 1;
	}
	if (*uParam2)
	{
		iVar7 = ITEMSET::GET_ITEMSET_SIZE(*iParam1);
		if (iVar7 > 0)
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar8, *iParam1);
				iVar6 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar5);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar6, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar6, Global_35, true);
				iVar8++;
			}
		}
	}
}

void func_827(int iParam0)
{
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

int func_828(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_147();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

bool func_829(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return true;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(*uParam0, sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return true;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1) || ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, sParam1);
	}
	return false;
}

bool func_830(int iParam0)
{
	if ((__LIB_0__::func_58(iParam0) || (__LIB_0__::func_27(iParam0->f_40, 1) && !__LIB_0__::func_393(Global_35, Global_1396257[*iParam0 /*638*/][iParam0->f_1 /*48*/].f_47, 0, 1))) || (__LIB_0__::func_20(iParam0->f_10) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(iParam0->f_10), true, 0)))
	{
		return true;
	}
	return false;
}

bool func_831(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(iParam0->f_138, iParam1);
}

void func_832(bool bParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_147();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (bParam0)
		{
			PATHFIND::_0x6DAD6630AE4A74CB(iVar0, 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar0, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar0, Global_35, true);
		}
		else
		{
			PATHFIND::_0x6DAD6630AE4A74CB(iVar0, 0);
		}
	}
}

bool func_833(int iParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ITEMSET::IS_ITEMSET_VALID(*iParam0))
	{
		*iParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam2, fParam6, *iParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *iParam0);
		*iParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
				{
					if (__LIB_0__::func_394(Global_35, *iParam1, 0))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*iParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(*iParam0);
	return false;
}

void func_834(var uParam0, var uParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, char* sParam13, int iParam14, char* sParam15, int iParam16, int iParam17)
{
	if (uParam0->f_35)
	{
		return;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_4 = sParam2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		uParam0->f_5 = iParam3;
		if (__LIB_0__::func_181())
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				uParam0->f_6 = "JOHN";
			}
			else
			{
				uParam0->f_6 = sParam4;
			}
			uParam0->f_23 = 0;
			uParam0->f_24 = 0;
		}
		else
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				uParam0->f_6 = "ARTHUR";
			}
			else
			{
				uParam0->f_6 = sParam5;
			}
			uParam0->f_23 = 1;
			uParam0->f_24 = "b_PlayerArthur";
		}
	}
	uParam0->f_7 = iParam6;
	uParam0->f_8 = iParam7;
	uParam0->f_9 = iParam8;
	uParam0->f_10 = iParam9;
	uParam0->f_11 = iParam10;
	uParam0->f_12 = iParam11;
	uParam0->f_13 = iParam12;
	uParam0->f_14 = sParam13;
	uParam0->f_15 = iParam14;
	uParam0->f_16 = sParam15;
	uParam0->f_17 = iParam16;
	uParam0->f_18 = iParam17;
}

void func_835(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 > -1)
	{
		iParam0->f_3 = iParam1;
		iParam0->f_7 = 0f;
		iParam0->f_8 = 0f;
		__LIB_1__::func_471(iParam0, 5);
		if (bParam2)
		{
			__LIB_1__::func_471(iParam0, 6);
		}
		else
		{
			__LIB_1__::func_491(iParam0, 6);
		}
	}
}

void func_836()
{
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	CAM::_0x8370D34BD2E60B73();
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (Global_1935689.f_1)
	{
		__LIB_3__::func_739(0);
	}
}

int func_837(int iParam0)
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
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
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
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

bool func_838(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630.f_12)
	{
		return false;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5++;
			Global_40.f_11623[iParam0 /*8*/].f_2 = __LIB_0__::func_23();
			*uParam4 = 1;
			return true;
		}
	}
	if (fParam5 == 0f)
	{
		if (!__LIB_0__::func_48(Global_35, *uParam2, fParam6, 1))
		{
			return false;
		}
	}
	else if (fParam5 > fParam6)
	{
		return false;
	}
	if (!__LIB_0__::func_75(uParam3))
	{
		__LIB_0__::func_268(uParam3, 0f);
	}
	else if (__LIB_0__::func_265(uParam3) >= 2f)
	{
		if (!__LIB_5__::func_771(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			__LIB_16__::func_789(iParam0);
			*uParam4 = 1;
			__LIB_0__::func_37(uParam3);
			return true;
		}
		else
		{
			__LIB_16__::func_789(iParam0);
			*uParam4 = 1;
			__LIB_0__::func_37(uParam3);
			return true;
		}
	}
	return false;
}

void func_839(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_20))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_20);
	}
	if (__LIB_0__::func_75(&(uParam0->f_13)))
	{
		__LIB_0__::func_37(&(uParam0->f_13));
	}
}

void func_840(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		__LIB_0__::func_703(0, -1);
	}
	__LIB_16__::func_791();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = (Global_1415398.f_2 - 1);
	Global_1935183.f_28 = 0;
}

void func_841(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = __LIB_0__::func_57(uParam0->f_21[iVar0 /*17*/].f_5);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (bParam1 && !__LIB_2__::func_466(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				__LIB_2__::func_411(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
			else if (!bParam1 && __LIB_2__::func_466(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				__LIB_2__::func_411(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
		}
		iVar0++;
	}
}

int func_842(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (__LIB_7__::func_719())
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)) < 18f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam1))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (__LIB_0__::func_64(0) == 7 || __LIB_2__::func_84())
		{
			return 1;
		}
	}
	if (__LIB_8__::func_747(&(Global_1396257[iParam0 /*638*/].f_626), 1024))
	{
		return 1;
	}
	return 0;
}

void func_843()
{
	__LIB_2__::func_603(&(Local_14.f_3), &(Local_14.f_41[0 /*59*/]), &(Local_14.f_41[0 /*59*/].f_21), 1, 1);
}

int func_844(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam2, true))
	{
		*uParam1 = 1;
		return 1;
	}
	if (Global_1935630.f_39 > 0 || PED::_0x285D36C5C72B0569(Global_35) <= 1f)
	{
		if (__LIB_10__::func_373(*uParam2, 0, uParam0, uParam1, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (*uParam3 < 0 || *uParam3 > 4)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			*uParam3++;
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*uParam2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*uParam2)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*uParam2))
			{
				*uParam1 = 2;
				return 1;
			}
			break;
		case 1:
			*uParam3++;
			if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), *uParam2, 1000))
			{
				*uParam1 = 4;
				return 1;
			}
			break;
		case 2:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 3:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 4:
			*uParam3 = 0;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
	}
	return 0;
}

int func_845(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x886171A12F400B89(iParam4, *uParam0, 1);
	if (iVar5 > 0)
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, *uParam0);
			iVar1 = iVar0;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar3 < *uParam1) && iVar3 < iParam3)
			{
				if (__LIB_11__::func_731(iVar1, bParam5, bParam6, 1, 0, 0) && !DECORATOR::DECOR_EXIST_ON(iVar1, "bIgnoreThisPed"))
				{
					if (!__LIB_0__::func_208(iVar1, uParam2))
					{
						bVar2 = false;
						if (iParam7 != -1)
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar1, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar6)))
								{
									bVar2 = true;
								}
								else
								{
									iVar6++;
								}
							}
						}
						else
						{
							bVar2 = true;
						}
						if (bVar2)
						{
							(*uParam1)[iVar3] = iVar1;
							iVar3++;
						}
					}
				}
			}
			iVar4++;
		}
	}
	if (iVar3 >= (iParam3 - 1) && iVar5 >= iParam3)
	{
	}
	ITEMSET::DESTROY_ITEMSET(*uParam0);
	return iVar3;
}

void func_846(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	if (!__LIB_0__::func_1(*uParam1, iParam2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		return;
	}
	if (__LIB_0__::func_1(*uParam1, iParam3))
	{
		if (!__LIB_0__::func_1(*uParam1, iParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam6, 0f, 0f, 0f, 0, sParam8);
			}
			__LIB_0__::func_7(uParam1, iParam4);
		}
	}
	else if (__LIB_0__::func_1(*uParam1, iParam4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam5, 0f, 0f, 0f, 0, sParam7);
		}
		__LIB_0__::func_8(uParam1, iParam4);
	}
}

void func_847(int iParam0, int iParam1)
{
	if (!__LIB_16__::func_816(iParam1))
	{
		return;
	}
	__LIB_2__::func_451(&(iParam0->f_41[iParam1 /*59*/]), 0);
}

bool func_848(int iParam0)
{
	if (__LIB_16__::func_808(iParam0) <= 15f)
	{
		return true;
	}
	return false;
}

void func_849(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (__LIB_0__::func_1(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && __LIB_8__::func_964(__LIB_0__::func_14(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = __LIB_0__::func_23();
	__LIB_0__::func_7(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

bool func_850(var uParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (__LIB_16__::func_815(iParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

void func_851(int iParam0, int iParam1)
{
	if (!__LIB_16__::func_816(iParam1))
	{
		return;
	}
	iParam0->f_101 = iParam1;
}

void func_852(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_16__::func_816(iParam1))
	{
		return;
	}
	iParam0->f_41[iParam1 /*59*/].f_57 = iParam2;
}

bool func_853(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!__LIB_16__::func_816(iParam1))
	{
		return false;
	}
	if (iParam0->f_41[iParam1 /*59*/].f_58 == -1)
	{
		return false;
	}
	iVar0 = iParam0->f_41[iParam1 /*59*/].f_58;
	if (!__LIB_16__::func_817(iVar0))
	{
		return false;
	}
	*iParam2 = iVar0;
	return true;
}

void func_854(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = __LIB_16__::func_795(iParam3);
	if (fParam4 == 0f)
	{
		if (__LIB_0__::func_48(iParam0, Global_35, 15f, 1))
		{
			if (!__LIB_0__::func_1(*uParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					__LIB_0__::func_7(uParam1, iParam2);
				}
			}
		}
		else if (__LIB_0__::func_1(*uParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			__LIB_0__::func_8(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!__LIB_0__::func_1(*uParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				__LIB_0__::func_7(uParam1, iParam2);
			}
		}
	}
	else if (__LIB_0__::func_1(*uParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		__LIB_0__::func_8(uParam1, iParam2);
	}
}

bool func_855(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*iParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!__LIB_0__::func_75(uParam2))
		{
			__LIB_0__::func_268(uParam2, 0f);
			return false;
		}
		else if (__LIB_1__::func_871(uParam2) > iParam6)
		{
			__LIB_0__::func_37(uParam2);
			*iParam3++;
			*uParam1 = 0;
			return false;
		}
		else
		{
			return false;
		}
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		if (fParam7 == 0f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
				return false;
			}
			fParam7 = __LIB_0__::func_665(*uParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0f && fParam7 < 10f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10f && fParam7 < 20f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20f && fParam7 < 30f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30f && fParam7 < 50f)
			{
				iParam5 = joaat("SONAR_OVERHEARD_BEAT_BIG");
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam5, *uParam0);
		*uParam1 = 1;
		return true;
	}
	return false;
}

bool func_856(var uParam0, int iParam1, float fParam2, int iParam3)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar1 * Vector(fParam2, fParam2, fParam2) };
	if (__LIB_16__::func_833(iParam1, &uVar0, vVar4, fParam2, iParam3))
	{
		return true;
	}
	return false;
}

void func_857(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_146)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_146[iVar0 /*36*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_146[iVar0 /*36*/], true, false))
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_146[iVar0 /*36*/].f_14) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_146[iVar0 /*36*/].f_13)) && ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0->f_146[iVar0 /*36*/], iParam0->f_146[iVar0 /*36*/].f_14, false) == iParam0->f_146[iVar0 /*36*/].f_13)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_146[iVar0 /*36*/], iParam0->f_146[iVar0 /*36*/].f_14, iParam0->f_146[iVar0 /*36*/].f_13);
				__LIB_2__::func_919(iParam0->f_146[iVar0 /*36*/].f_13, 1, 1);
			}
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_146[iVar0 /*36*/].f_16) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_146[iVar0 /*36*/].f_15)) && ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0->f_146[iVar0 /*36*/], iParam0->f_146[iVar0 /*36*/].f_16, false) == iParam0->f_146[iVar0 /*36*/].f_15)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_146[iVar0 /*36*/], iParam0->f_146[iVar0 /*36*/].f_16, iParam0->f_146[iVar0 /*36*/].f_15);
				__LIB_2__::func_919(iParam0->f_146[iVar0 /*36*/].f_15, 1, 1);
			}
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_146[iVar0 /*36*/].f_18) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_146[iVar0 /*36*/].f_17)) && ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0->f_146[iVar0 /*36*/], iParam0->f_146[iVar0 /*36*/].f_18, false) == iParam0->f_146[iVar0 /*36*/].f_17)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_146[iVar0 /*36*/], iParam0->f_146[iVar0 /*36*/].f_18, iParam0->f_146[iVar0 /*36*/].f_17);
				__LIB_2__::func_919(iParam0->f_146[iVar0 /*36*/].f_17, 1, 1);
			}
		}
		iVar0++;
	}
}

bool func_858(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return false;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!__LIB_16__::func_833(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return false;
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (!__LIB_0__::func_255(iVar1, 0))
		{
			__LIB_16__::func_796(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return true;
	}
	return false;
}

void func_859(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (__LIB_0__::func_1(uParam0, iParam1))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		if (bParam3)
		{
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), true);
		}
		__LIB_1__::func_725();
		HUD::_0xC9CAEAEEC1256E54(724769646);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
		}
		if (bParam2)
		{
			__LIB_16__::func_836();
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
	}
}

bool func_860()
{
	if (__LIB_16__::func_837(Global_35) || __LIB_16__::func_828(Global_35))
	{
		return true;
	}
	return false;
}

void func_861(int iParam0, int iParam1, int iParam2, char[4] cParam3, char* sParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!__LIB_16__::func_816(iParam1))
	{
		return;
	}
	if (!__LIB_16__::func_817(iParam2))
	{
		return;
	}
	__LIB_2__::func_602(&(iParam0->f_41[iParam1 /*59*/].f_21[iParam2 /*17*/]), cParam3, sParam4, iParam5, iParam6, iParam7, 0, 1, 0);
	if (bParam8)
	{
		__LIB_16__::func_835(&(iParam0->f_41[iParam1 /*59*/]), iParam2, 1);
	}
}

void func_862(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	var uVar0[1];
	var uVar2[2];
	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	uVar2[0] = Global_35;
	uVar2[1] = *uParam2;
	if (!__LIB_0__::func_75(uParam4))
	{
		__LIB_0__::func_268(uParam4, 0f);
	}
	else if (__LIB_1__::func_871(uParam4) > 1000)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam1, true, 0))
		{
			if (__LIB_16__::func_845(uParam0, &uVar0, &uVar2, 5, iParam1, 0, 0, -1) > 0)
			{
				uParam3->f_3 = uVar0[0];
				__LIB_0__::func_268(uParam4, 0f);
			}
			else
			{
				return;
			}
		}
		else
		{
			uParam3->f_3 = Global_35;
			__LIB_0__::func_268(uParam4, 0f);
		}
	}
	*uParam3 = { 0f, 0f, 0f };
	uParam3->f_4 = 21030;
	uParam3->f_8 = 4;
	uParam3->f_17 = 2;
	uParam3->f_18 = 1;
	uParam3->f_19 = 3;
	uParam3->f_20 = 1;
	uParam3->f_21 = 3;
	uParam3->f_22 = 1;
	uParam3->f_13 = 3;
	uParam3->f_7 = iParam5;
	_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam2, uParam3);
}

bool func_863(var uParam0, char* sParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	bVar0 = ANIMSCENE::_0x1F0E401031E20146(*uParam0, sParam1);
	if (bVar0)
	{
		return true;
	}
	bVar1 = ANIMSCENE::_0xA9016536015DE29D(*uParam0, sParam1);
	if (!bVar1)
	{
		return true;
	}
	bVar2 = ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1);
	if (!bVar2)
	{
		return true;
	}
	bVar3 = ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1);
	if (bVar2 || bVar3)
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, sParam1);
	}
	return false;
}

bool func_864(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(Global_40.f_11623[iParam0 /*8*/].f_1, iParam1);
}

void func_865(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		__LIB_0__::func_7(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);
	}
	else
	{
		__LIB_0__::func_8(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);
	}
}

bool func_866(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return __LIB_1__::func_208(iParam0, &Var0);
}

bool func_867(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!__LIB_0__::func_75(uParam2))
		{
			__LIB_0__::func_268(uParam2, 0f);
			return false;
		}
		else if (__LIB_1__::func_871(uParam2) > iParam6)
		{
			__LIB_0__::func_37(uParam2);
			*uParam3++;
			*uParam1 = 0;
			return false;
		}
		else
		{
			return false;
		}
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		if (fParam7 == 0f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
				return false;
			}
			fParam7 = __LIB_0__::func_665(*uParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0f && fParam7 < 10f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10f && fParam7 < 20f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20f && fParam7 < 30f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30f && fParam7 < 50f)
			{
				iParam5 = joaat("SONAR_OVERHEARD_BEAT_BIG");
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam5, *uParam0);
		*uParam1 = 1;
		return true;
	}
	return false;
}

bool func_868(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	var uVar0;
	int iVar1;
	int iVar2;
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		uVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *uParam0);
		*iParam1 = uVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
				{
					if (__LIB_0__::func_394(Global_35, *iParam1, 0))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

void func_869(var uParam0)
{
	__LIB_16__::func_386(uParam0, 0);
}

struct<4> func_870(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1992.478f, -370.7957f, 40.79723f };
							Var0.f_3 = 0f;
							break;
						case 1:
							Var0 = { 2015.352f, -327.9001f, 40.61312f };
							Var0.f_3 = 0f;
							break;
						case 2:
							Var0 = { 2048.973f, -308.3546f, 40.71767f };
							Var0.f_3 = 0f;
							break;
						case 3:
							Var0 = { 1988.401f, -327.9046f, 40.52593f };
							Var0.f_3 = 0f;
							break;
						case 4:
							Var0 = { 2043.473f, -299.7293f, 40.62843f };
							Var0.f_3 = 0f;
							break;
					}
					break;
				case 5:
					Var0 = { 2008.711f, -330.3677f, 40.6611f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			Var0 = { 2434.052f, -1224.941f, 45.8519f };
			Var0.f_3 = -118f;
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3704.056f, -2618.024f, -14.9192f };
					Var0.f_3 = 23.3026f;
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 1:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 2:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
						case 3:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
					}
					break;
			}
			break;
		case 3:
			Var0 = { -1791.806f, -422.4149f, 154.8645f };
			Var0.f_3 = 205.9765f;
			break;
		case 4:
			switch (__LIB_16__::func_787(4))
			{
				case 3:
					Var0 = { 502.0502f, 1284.979f, 181.4051f };
					Var0.f_3 = 114.5882f;
					break;
				case 9:
					Var0 = { 414.5646f, 412.7333f, 107.6299f };
					Var0.f_3 = 352.4153f;
					break;
				case 10:
					Var0 = { 2794.157f, 1406.62f, 82.3539f };
					Var0.f_3 = 65.0766f;
					break;
				case 13:
					Var0 = { -5342.929f, -2947.815f, 0.80696f };
					Var0.f_3 = 20.08f;
					break;
				case 4:
					Var0 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_3 = 19.5942f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 888.6843f, 1276.612f, 234.0975f };
					Var0.f_3 = 321.3007f;
					break;
				case 1:
					Var0 = { 865.601f, 1248.82f, 179.7602f };
					Var0.f_3 = 321.3007f;
					break;
			}
			break;
		case 7:
			Var0 = { 2016.26f, 623.0106f, 158.6706f };
			Var0.f_3 = -167.98f;
			break;
		case 5:
			Var0 = { -1502.098f, 2458.125f, 417.4865f };
			Var0.f_3 = 160.0872f;
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
				case 1:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0 = { -326.079f, 765.2856f, 121.6327f };
					Var0.f_3 = 352.3531f;
					break;
			}
			break;
		case 10:
			Var0 = { 2673.46f, -1391.259f, 47.50816f };
			Var0.f_3 = 316.45f;
			break;
		case 11:
			switch (__LIB_16__::func_788(11))
			{
				case 105:
					Var0 = { 1423.438f, -1381.801f, 80.8106f };
					Var0.f_3 = 352.6983f;
					return Var0;
				case 38:
					Var0 = { -773.2449f, -1329.082f, 42.6291f };
					Var0.f_3 = 191.3503f;
					return Var0;
				case 126:
					Var0 = { -2378.475f, -2378.621f, 61.1724f };
					Var0.f_3 = 185.2923f;
					return Var0;
				case 5:
					Var0 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_3 = 346.5068f;
					return Var0;
			}
			switch (__LIB_16__::func_787(11))
			{
				case 12:
					Var0 = { -2338.21f, -1271.362f, 147.062f };
					Var0.f_3 = 356.6931f;
					break;
				case 11:
					Var0 = { 1295.802f, -200.3015f, 99.0642f };
					Var0.f_3 = 1.8815f;
					break;
				case 10:
					Var0 = { 2428.864f, 1015.729f, 85.6131f };
					Var0.f_3 = 304.652f;
					break;
				case 15:
					Var0 = { -3157.477f, -2981.991f, 4.6224f };
					Var0.f_3 = 86.239f;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0 = { 1702.736f, 2168.096f, 318.9191f };
					Var0.f_3 = 180.6669f;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					Var0 = { -312.9856f, 808.8508f, 117.9822f };
					Var0.f_3 = 197.2573f;
					break;
			}
			break;
		case 14:
			Var0 = { 1320.745f, -1291.739f, 75.14026f };
			Var0.f_3 = 68.748f;
			break;
		case 15:
			switch (__LIB_16__::func_787(15))
			{
				case 7:
				case 9:
					Var0 = { -727.395f, 686.1953f, 58.2244f };
					Var0.f_3 = 177.0399f;
					break;
				case 13:
					Var0 = { -6122.201f, -3803.751f, -35.2455f };
					Var0.f_3 = 181.815f;
					break;
				case 10:
					Var0 = { 2183.348f, 1502.819f, 83.6009f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_3 = 266.9828f;
					break;
				default:
					Var0 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_3 = 266.9828f;
					break;
			}
			break;
		case 16:
			Var0 = { 2636.429f, -1229.537f, 52.3795f };
			Var0.f_3 = 358.7895f;
			break;
		case 17:
			Var0 = { 2943.588f, 1336.999f, 43.22713f };
			Var0.f_3 = 76.2778f;
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1812.186f, -367.3066f, 161.8834f };
					Var0.f_3 = 167.5016f;
					break;
				case 1:
					Var0 = { -1807.89f, -371.5062f, 161.8662f };
					Var0.f_3 = 167.5016f;
					break;
				case 2:
					Var0 = { -1800.857f, -357.3966f, 162.9631f };
					Var0.f_3 = 167.5016f;
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 0:
					Var0 = { -256.365f, 753.5781f, 116.0851f };
					Var0.f_3 = 284.0192f;
					break;
				case 1:
					Var0 = { -192.9274f, 625.6254f, 113.5786f };
					Var0.f_3 = 145.05f;
					break;
				default:
					Var0 = { -256.365f, 753.5781f, 116.0851f };
					Var0.f_3 = 284.0192f;
					break;
			}
			break;
		case 20:
			Var0 = { -2725.277f, 709.9713f, 173.0266f };
			Var0.f_3 = 359.6814f;
			break;
		case 21:
			Var0 = { 2706.282f, 2369.827f, 170.2336f };
			Var0.f_3 = 359.6814f;
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					Var0 = { -5511.039f, -2929.552f, -3.278f };
					Var0.f_3 = -131.907f;
					break;
				case 1:
					Var0 = { -5497.666f, -2957.426f, -1.708f };
					Var0.f_3 = 12.912f;
					break;
				case 2:
					Var0 = { -5493.435f, -2940.703f, -1.471f };
					Var0.f_3 = 124.069f;
					break;
			}
			break;
		case 23:
			switch (__LIB_16__::func_787(23))
			{
				case 0:
					Var0 = { 1784.089f, -946.648f, 40.7225f };
					Var0.f_3 = 254.7072f;
					break;
				case 2:
					Var0 = { 2445.841f, -463.2956f, 41.1018f };
					Var0.f_3 = 126.5562f;
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					Var0 = { -2233.602f, -2850.517f, 62.7628f };
					Var0.f_3 = 208.7791f;
					break;
				case 1:
					Var0 = { -3198.999f, -2538.554f, 66.5911f };
					Var0.f_3 = 292.1099f;
					break;
				case 2:
					Var0 = { -2927.12f, -2860.494f, 85.7312f };
					Var0.f_3 = 123.2795f;
					break;
				case 3:
					Var0 = { -3267.86f, -3416.677f, 39.5041f };
					Var0.f_3 = 332.5893f;
					break;
				case 4:
					Var0 = { -3572.794f, -3565.222f, 33.505f };
					Var0.f_3 = 260.2986f;
					break;
				case 5:
					Var0 = { -4399.393f, -3606.746f, 48.6452f };
					Var0.f_3 = 348.5519f;
					break;
				case 6:
					Var0 = { -4988.676f, -4060.992f, 1.0884f };
					Var0.f_3 = 163.9257f;
					break;
				case 7:
					Var0 = { -5333.317f, -3534.569f, 2.0586f };
					Var0.f_3 = 306.198f;
					break;
				case 8:
					Var0 = { -5374.994f, -4053.294f, -6.2292f };
					Var0.f_3 = 170.3096f;
					break;
				case 9:
					Var0 = { -5413.131f, -2606.156f, 2.5597f };
					Var0.f_3 = 255.0981f;
					break;
				case 10:
					Var0 = { -4956.249f, -3198.202f, 26.3575f };
					Var0.f_3 = 292.8281f;
					break;
				case 11:
					Var0 = { -4594.695f, -3045.041f, 6.5776f };
					Var0.f_3 = 4.7478f;
					break;
			}
			break;
		case 25:
			Var0 = { 2368.588f, -859.9452f, 42.0223f };
			Var0.f_3 = 198.7042f;
			break;
		case 26:
			Var0 = { -345.2797f, 794.6578f, 115.1777f };
			Var0.f_3 = 28.0552f;
			break;
		case 27:
			Var0 = { 2644.443f, -1207.946f, 52.3368f };
			Var0.f_3 = 199.0776f;
			break;
		case 28:
			Var0 = { 3025.557f, 1779.699f, 83.2056f };
			Var0.f_3 = 142.8609f;
			break;
		case 29:
			Var0 = { 2778.292f, -1313.274f, 45.89664f };
			Var0.f_3 = 216.3798f;
			break;
	}
	return Var0;
}

bool func_871()
{
	if (PED::_IS_PED_CARRYING(Global_35) || __LIB_16__::func_860())
	{
		return true;
	}
	return false;
}

void func_872(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = uParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
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

bool func_873(var uParam0, vector3 vParam1, float fParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		return true;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

char[] func_874()
{
	return "pbl_base_reset";
}

void func_875(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

bool func_876(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false);
	bVar1 = ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return true;
	}
	bVar3 = ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0);
	bVar2 = ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		return false;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return false;
}

bool func_877(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 49, true);
		return true;
	}
	return false;
}

bool func_878(var uParam0, float fParam1, float fParam2)
{
	if (Global_1935630.f_12)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (fParam1 == 0f)
	{
		if (fParam2 == 0f)
		{
			if (__LIB_0__::func_48(Global_35, *uParam0, 25f, 1))
			{
				return true;
			}
		}
		else if (fParam2 <= 25f)
		{
			return true;
		}
	}
	else if (fParam2 == 0f)
	{
		if (__LIB_0__::func_48(Global_35, *uParam0, fParam1, 1))
		{
			return true;
		}
	}
	else if (fParam2 <= fParam1)
	{
		return true;
	}
	return false;
}

int func_879(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630.f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5++;
			Global_40.f_11623[iParam0 /*8*/].f_2 = __LIB_0__::func_23();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!__LIB_0__::func_48(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!__LIB_0__::func_75(uParam3))
	{
		__LIB_0__::func_268(uParam3, 0f);
	}
	else if (__LIB_0__::func_265(uParam3) >= 2f)
	{
		if (!__LIB_5__::func_771(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			__LIB_16__::func_789(iParam0);
			*uParam4 = 1;
			__LIB_0__::func_37(uParam3);
			return 1;
		}
		else
		{
			__LIB_16__::func_789(iParam0);
			*uParam4 = 1;
			__LIB_0__::func_37(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_880()
{
	__LIB_1__::func_924();
	__LIB_1__::func_309(-1, 0, 0, 0, 0);
	__LIB_0__::func_747(60, 0, 1);
}

bool func_881(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (__LIB_7__::func_719())
		{
			return true;
		}
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)) < 18f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam1))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (__LIB_0__::func_64(0) == 7 || __LIB_2__::func_84())
		{
			return true;
		}
	}
	if (__LIB_8__::func_747(&(Global_1396257[iParam0 /*638*/].f_626), 1024))
	{
		return true;
	}
	return false;
}

int func_882(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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
				if (__LIB_11__::func_731(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
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

int func_883(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam2, true))
	{
		*uParam1 = 1;
		return 1;
	}
	if (Global_1935630.f_39 > 0 || PED::_0x285D36C5C72B0569(Global_35) <= 1f)
	{
		if (__LIB_12__::func_465(*uParam2, 0, uParam0, uParam1, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (*uParam3 < 0 || *uParam3 > 4)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			*uParam3++;
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*uParam2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*uParam2)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*uParam2))
			{
				*uParam1 = 2;
				return 1;
			}
			break;
		case 1:
			*uParam3++;
			if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), *uParam2, 1000))
			{
				*uParam1 = 4;
				return 1;
			}
			break;
		case 2:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 3:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 4:
			*uParam3 = 0;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
	}
	return 0;
}

void func_884()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
}

void func_885(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (*iParam0 >= 6 && *iParam0 <= 30)
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1, false))
	{
		if (((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_STILL(Global_35)) || PED::IS_PED_STOPPED(Global_35)) || bParam3)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam1, sParam2, true, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam1, sParam2, false, false);
		}
	}
}

char* func_886()
{
	return "script@specialped@pdcwv_bum_civil_war_veteran@ig@ig_1@ig_1_begging";
}

void func_887(int iParam0)
{
	if (__LIB_0__::func_27(iParam0->f_253, 1))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_224))
		{
			iParam0->f_224 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-192.4921f, 625.2659f, 115.287f, 0f, 0f, 0f, 45f, 45f, 45f, "RandomEventBlock");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_225))
		{
			iParam0->f_225 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.4921f, 625.2659f, 115.287f, 0f, 0f, 0f, 45f, 45f, 30f, "Abandon");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_226))
		{
			iParam0->f_226 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 0f, -1E-06f, 145.05f, 7.5f, 7.5f, 10f, "Trigger");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_227))
		{
			iParam0->f_227 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 1E-06f, 0f, 145.05f, 3f, 3f, 4f, "StayAway");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_228))
		{
			iParam0->f_228 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 0f, 0f, 0f, 6f, 10f, 10f, "Spotted");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_229))
		{
			iParam0->f_229 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 0f, -1E-06f, 145.05f, 15f, 15f, 10f, "Near");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_230))
		{
			iParam0->f_230 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 1E-06f, 0f, 145.05f, 3f, 3f, 6f, "Focus");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_231))
		{
			iParam0->f_231 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -192.9274f, 625.6259f, 113.5786f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
			VOLUME::_0x5B23DFF8E0948BB2(iParam0->f_231, 0);
			VOLUME::_0xBE551C2CC421185D(iParam0->f_231, 1);
		}
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_224))
		{
			iParam0->f_224 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 45f, 45f, 45f, "RandomEventBlock");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_225))
		{
			iParam0->f_225 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 45f, 45f, 30f, "Abandon");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_226))
		{
			iParam0->f_226 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 7.5f, 7.5f, 10f, "Trigger");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_227))
		{
			iParam0->f_227 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 3f, 3f, 4f, "StayAway");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_228))
		{
			iParam0->f_228 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 7f, 13f, 10f, "Spotted");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_229))
		{
			iParam0->f_229 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 13.5f, 13.5f, 10f, "Near");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_230))
		{
			iParam0->f_230 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 1E-06f, 0f, 145.05f, 3f, 3f, 6f, "Focus");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_231))
		{
			iParam0->f_231 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
			VOLUME::_0x5B23DFF8E0948BB2(iParam0->f_231, 0);
			VOLUME::_0xBE551C2CC421185D(iParam0->f_231, 1);
		}
	}
}

struct<4> func_888(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -256.365f, 753.5781f, 116.0851f };
			Var0.f_3 = 317.5058f;
			break;
		case 1:
			Var0 = { -193.3643f, 625.0235f, 113.5786f };
			Var0.f_3 = -32.08f;
			break;
		case 2:
			Var0 = { -331.8132f, 793.5106f, 115.6329f };
			Var0.f_3 = 231.2512f;
			break;
		case 3:
			Var0 = { -192.2564f, 628.0485f, 112.3348f };
			Var0.f_3 = 231.2512f;
			break;
		case 4:
			Var0 = { -256.365f, 753.5781f, 116.0851f };
			Var0.f_3 = 10.42f;
			break;
		case 5:
			Var0 = { -193.3643f, 625.0235f, 113.5786f };
			Var0.f_3 = -32.08f;
			break;
		case 6:
			Var0 = { -348.8683f, 781.1053f, 114.8526f };
			Var0.f_3 = 317.7707f;
			break;
		case 7:
			Var0 = { -219.8844f, 627.0385f, 112.3019f };
			Var0.f_3 = 268.6542f;
			break;
	}
	return Var0;
}

Vector3 func_889()
{
	return -199.16f, 632.02f, 114.52f;
}

Vector3 func_890()
{
	return 0f, 0f, -42.5f;
}

Vector3 func_891()
{
	return -258.85f, 745f, 118.08f;
}

Vector3 func_892()
{
	return 0f, 0f, 90f;
}

int func_893()
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (iVar0 == 0)
	{
		return 28;
	}
	else
	{
		return 30;
	}
	return 30;
}

bool func_894(var uParam0)
{
	if ((((__LIB_0__::func_27(*uParam0, 32) || __LIB_0__::func_27(*uParam0, 64)) || __LIB_0__::func_27(*uParam0, 512)) || __LIB_0__::func_27(*uParam0, 256)) || __LIB_0__::func_27(*uParam0, 8))
	{
		return true;
	}
	return false;
}

char[] func_895()
{
	return "pbl_sitting_p3_to_stand_buck";
}

char[] func_896()
{
	return "pbl_sitting_p3_to_stand_hey";
}

char[] func_897()
{
	return "pbl_sitting_p3_to_stand";
}

char[] func_898()
{
	return "pbl_sitting_p1_beg_ft";
}

char[] func_899()
{
	return "pbl_sitting_p1_beg_lt";
}

char[] func_900()
{
	return "pbl_sitting_p1_beg_rt";
}

char[] func_901()
{
	return "pbl_sitting_p1_beg_qk";
}

char[] func_902()
{
	return "pbl_sitting_p1_cmon";
}

char[] func_903()
{
	return "pbl_sitting_p1_drink";
}

char[] func_904()
{
	return "pbl_sitting_p1_fella";
}

char[] func_905()
{
	return "pbl_sitting_p1_loop01_cough";
}

char[] func_906()
{
	return "pbl_sitting_p1_gotta";
}

char[] func_907()
{
	return "pbl_sitting_p1_hungry";
}

char[] func_908()
{
	return "pbl_sitting_p1_few";
}

char[] func_909()
{
	return "pbl_sitting_p2_in_army";
}

char[] func_910()
{
	return "pbl_sitting_p1_loop03_stump";
}

char[] func_911()
{
	return "pbl_sitting_p1_someone";
}

char[] func_912()
{
	return "pbl_sitting_p2_bad";
}

char[] func_913()
{
	return "pbl_sitting_p2_drink";
}

char[] func_914()
{
	return "pbl_sitting_p1_loop02_scratch";
}

char[] func_915()
{
	return "pbl_base_reset_stand";
}

char[] func_916()
{
	return "pbl_standing_p3_dont";
}

char[] func_917()
{
	return "pbl_standing_p3_im";
}

char[] func_918()
{
	return "pbl_standing_p4_hey";
}

char[] func_919()
{
	return "pbl_standing_p4_just";
}

char* func_920()
{
	return "pbl_sitting_p1_exit02";
}

void func_921(var uParam0)
{
	if (!PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		return;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, false);
}

struct<2> func_922(int iParam0)
{
	struct<2> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = "INTERACT_GREET";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 1:
			Var0 = "INTERACT_INSULT";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 2:
			Var0 = "GREET_POS";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 3:
			Var0 = "GREET_NEG";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 4:
			Var0 = "GREET_POS";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 5:
			Var0 = "GREET_NEG";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 6:
			Var0 = "BM1_UC_NAME";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 7:
			Var0 = "BM1_UC_NONAME";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 8:
			Var0 = "BM1_UC_GIVE";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 9:
			Var0 = "GREET_NEG";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 11:
			Var0 = "BM1_UC_CZY";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 10:
			Var0 = "BM1_UC_NOCZY";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 12:
			Var0 = "BM1_UC_SURE";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 13:
			Var0 = "BM1_UC_NO";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 14:
			Var0 = "BM1_UC_NO";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 15:
			Var0 = "GREET_POS";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 16:
			Var0 = "GREET_NEG";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
	}
	return Var0;
}

int func_923(int iParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || Global_1347702[iVar0 /*49*/].f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_924(int iParam0)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			vVar0 = { -240.5095f, 769.4438f, 117.085f };
			break;
		case 1:
			vVar0 = { -303.7218f, 762.0843f, 118.1718f };
			break;
	}
	return vVar0;
}

int func_925(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_926()
{
	return "GREET_MALE";
}

bool func_927(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, int iParam7)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return __LIB_1__::func_208(iParam0, &Var0);
}

void func_928(int iParam0, int iParam1)
{
	if (__LIB_16__::func_877(iParam0))
	{
		if (__LIB_0__::func_393(Global_35, iParam1, 0, 1))
		{
			LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_LOITERING"), 0, 0, -1);
		}
	}
}

void func_929(int iParam0)
{
	if (*iParam0 >= 7 && *iParam0 <= 24)
	{
		if (AUDIO::_0x54B187F111D9C6F8(iParam0->f_218[0], 1))
		{
			__LIB_16__::func_806(&(iParam0->f_218[0]), &(iParam0->f_256), joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 10f, 5f);
		}
	}
}

int func_930(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		return 1;
	}
	*uParam0 = __LIB_9__::func_173(vParam1, vParam4);
	return 0;
}

void func_931(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, float fParam12, float fParam13, float fParam14, float fParam15, int iParam16, float fParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		Var0.f_1 = fParam14;
		Var0.f_2 = fParam15;
		Var0.f_4 = fParam17;
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
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, fParam6, fParam7, iParam9, fParam10, fParam11, fParam12, fParam13);
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

void func_932(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_352 = iParam1;
	if (bParam2)
	{
		__LIB_2__::func_451(&(iParam0->f_296), 0);
	}
}

bool func_933(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5)
{
	struct<7> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_3 = iParam2;
	Var0.f_6 = iParam5;
	Var0.f_1 = uParam4;
	Var0.f_4 = iParam3;
	return __LIB_1__::func_208(iParam0, &Var0);
}

int func_934(var uParam0, var uParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (__LIB_16__::func_873(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

char* func_935(int iParam0, int iParam1)
{
	if (__LIB_0__::func_113())
	{
		switch (iParam0->f_255)
		{
			case 0:
				*iParam1 = 1;
				return "INSULT_MICKEY_CONV_PART1";
			case 1:
				*iParam1 = 2;
				return "INSULT_MICKEY_CONV_PART1";
			case 2:
				*iParam1 = 2;
				return "INSULT_MICKEY_CONV_PART3";
			case 4:
				*iParam1 = 4;
				return "INSULT_TIMID_MALE_CONV_PART1";
			case 5:
				*iParam1 = 2;
				return "INSULT_TIMID_MALE_CONV_PART2";
			case 6:
				*iParam1 = 16;
				return "INSULT_MALE_CONV_PART1";
			case 7:
				*iParam1 = 4;
				return "INSULT_TIMID_MALE_CONV_PART2";
			default:
				*iParam1 = 1;
				return "INSULT_MICKEY_CONV_PART1";
		}
	}
	else
	{
		*iParam1 = 2;
		return "INSULT_MALE_CONV_PART1";
	}
	*iParam1 = 2;
	return "INSULT_MALE_CONV_PART1";
}

bool func_936(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *uParam0);
		*iParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
				{
					if (__LIB_0__::func_394(Global_35, *iParam1, 0))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

void func_937(int iParam0)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		bVar0 = true;
	}
	if (*iParam0 == 57)
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_272(iParam0->f_218[0], 0))
	{
		if (__LIB_0__::func_393(Global_35, iParam0->f_226, 0, 1))
		{
			if (!__LIB_0__::func_27(iParam0->f_253, 33554432))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, iParam0->f_218[0], -1, 2108, 51, 0);
				__LIB_1__::func_581(&(iParam0->f_253), 33554432);
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (__LIB_0__::func_27(iParam0->f_253, 33554432))
		{
			__LIB_3__::func_10(Global_35);
			__LIB_1__::func_993(&(iParam0->f_253), 33554432);
		}
	}
}

void func_938(int iParam0)
{
	if (*iParam0 >= 6 && *iParam0 <= 30)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_218[0]))
	{
		if (__LIB_0__::func_272(iParam0->f_218[0], 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0->f_218[0], 1.5f);
		}
	}
}

bool func_939(int iParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	if (*uParam1 != iParam0->f_259 || !MISC::ARE_STRINGS_EQUAL(sParam2, iParam0->f_260))
	{
		__LIB_1__::func_993(&(iParam0->f_253), 2097152);
		__LIB_1__::func_993(&(iParam0->f_253), 4194304);
		__LIB_1__::func_993(&(iParam0->f_253), 8388608);
	}
	iParam0->f_259 = *uParam1;
	iParam0->f_260 = sParam2;
	if (bParam5)
	{
		sVar0 = "s_base";
		sVar1 = "s_base_end";
	}
	else
	{
		sVar0 = "s_base_stand";
		sVar1 = "s_base_end_stand";
	}
	iParam0->f_258++;
	if (iParam0->f_258 >= 3)
	{
		iParam0->f_258 = 0;
	}
	if (!__LIB_0__::func_27(iParam0->f_253, 2097152))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false))
		{
			__LIB_1__::func_581(&(iParam0->f_253), 2097152);
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
	}
	else
	{
		bVar2 = false;
		bVar3 = false;
		if (!__LIB_0__::func_27(iParam0->f_253, 4194304))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				__LIB_1__::func_581(&(iParam0->f_253), 4194304);
				bVar2 = true;
			}
		}
		else
		{
			bVar2 = true;
		}
		if (!__LIB_0__::func_27(iParam0->f_253, 8388608))
		{
			if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				__LIB_1__::func_581(&(iParam0->f_253), 8388608);
				bVar3 = true;
			}
		}
		else
		{
			bVar3 = true;
		}
		if (!bVar2 && !bVar3)
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam2);
		}
		if (bParam7)
		{
			if (!__LIB_16__::func_878(&(iParam0->f_218[0]), 50f, iParam0->f_239))
			{
				return false;
			}
		}
		if (!bVar3 && bVar2)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam2, true);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam3, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam4, false);
			return false;
		}
		else if (bVar3)
		{
			if ((iParam0->f_258 == 0 && !bParam4) && ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, sVar1, 1))
			{
				if (__LIB_16__::func_863(uParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
			else if ((iParam0->f_258 == 1 && bParam4) && ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, sVar0, 1))
			{
				if (__LIB_16__::func_863(uParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
			else if ((bParam3 && iParam0->f_258 == 2) && ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "S_WaitLoop", 1))
			{
				if (__LIB_16__::func_863(uParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
			else if (bParam4 && ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_218[0], -1527527524))
			{
				if (__LIB_16__::func_863(uParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
			else if (!bParam6)
			{
				if (__LIB_16__::func_863(uParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
		}
	}
	return false;
}

void func_940(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_224))
	{
		__LIB_1__::func_544(iParam0->f_224);
		VOLUME::_DELETE_VOLUME(iParam0->f_224);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_227))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_227);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_227);
		VOLUME::_DELETE_VOLUME(iParam0->f_227);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_226))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_226);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_226);
		VOLUME::_DELETE_VOLUME(iParam0->f_226);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_228))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_228);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_229))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_229);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_225))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_225);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_230))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_230);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_231))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_231);
	}
}

bool func_941(var uParam0)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		return false;
	}
	if (__LIB_0__::func_265(uParam0) >= 20f)
	{
		__LIB_0__::func_37(uParam0);
		return true;
	}
	return false;
}

void func_942(var uParam0)
{
	if (!__LIB_0__::func_75(&(uParam0->f_148)))
	{
		__LIB_0__::func_268(&(uParam0->f_148), 0f);
	}
	else if (__LIB_1__::func_871(&(uParam0->f_148)) >= 1000)
	{
		uParam0->f_239 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_218[0], true, false), __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()), false);
		__LIB_0__::func_37(&(uParam0->f_148));
	}
}

void func_943(int iParam0)
{
	if (__LIB_0__::func_27(iParam0->f_253, 64) && iParam0->f_257 >= 3)
	{
		return;
	}
	if (*iParam0 >= 7 && *iParam0 <= 51)
	{
		if (__LIB_16__::func_867(&(iParam0->f_218[0]), &(iParam0->f_261), &(iParam0->f_151), &(iParam0->f_257), 3, 0, 7000, iParam0->f_239))
		{
			__LIB_1__::func_581(&(iParam0->f_253), 64);
		}
	}
}

void func_944(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 30:
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			break;
		case 57:
			__LIB_2__::func_411(&(iParam0->f_317[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(iParam0->f_317[1 /*17*/]), 0, 0);
			if (!__LIB_0__::func_27(iParam0->f_253, 32))
			{
				__LIB_1__::func_581(&(iParam0->f_253), 32);
			}
			__LIB_3__::func_10(iParam0->f_218[0]);
			__LIB_3__::func_10(Global_35);
			break;
		case 67:
			__LIB_3__::func_10(iParam0->f_218[0]);
			__LIB_3__::func_10(Global_35);
			__LIB_16__::func_789(19);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_218[0], 448, false);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_218[0], 153, false);
			break;
	}
	*iParam0 = iParam1;
}

void func_945(int iParam0)
{
	if (*iParam0 >= 6 && *iParam0 <= 30)
	{
		return;
	}
	if (__LIB_0__::func_163(iParam0->f_218[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
	{
		__LIB_2__::func_966(iParam0->f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		__LIB_2__::func_961(&(iParam0->f_353), iParam0->f_218[0]);
		__LIB_2__::func_966(Global_35, iParam0->f_218[0], 1, 1, 1, 0, 1, 1, 0, 1, 1);
	}
}

bool func_946(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = __LIB_8__::func_931(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = __LIB_8__::func_931(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(*uParam0))
	{
		return true;
	}
	return false;
}

int func_947(int iParam0, int iParam1, vector3 vParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	return 1;
}

void func_948(var uParam0, var uParam1, var uParam2)
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
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam1))
	{
		*uParam1 = ITEMSET::CREATE_ITEMSET(true);
		*uParam2 = 0;
	}
	if (!*uParam2)
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = ENTITY::_0x886171A12F400B89(*uParam0, iVar0, 1);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
				iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
				if (ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					ITEMSET::ADD_TO_ITEMSET(iVar1, *uParam1);
				}
				iVar4++;
			}
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
		*uParam2 = 1;
	}
	if (*uParam2)
	{
		iVar7 = ITEMSET::GET_ITEMSET_SIZE(*uParam1);
		if (iVar7 > 0)
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar8, *uParam1);
				iVar6 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar5);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar6, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar6, Global_35, true);
				iVar8++;
			}
		}
	}
}

int func_949(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!__LIB_16__::func_936(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (!__LIB_0__::func_255(iVar1, 0))
		{
			__LIB_16__::func_796(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

int func_950(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;
	uParam5 = uParam5;
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
			__LIB_1__::func_148(&uLocal_0);
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
				Var3.f_2 = uParam5;
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
				iVar2 = __LIB_0__::func_55(__LIB_16__::func_927(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_951(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_218[0]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (__LIB_16__::func_941(&(iParam0->f_145)))
	{
		if (!__LIB_0__::func_27(iParam0->f_253, 134217728))
		{
			__LIB_1__::func_581(&(iParam0->f_253), 134217728);
		}
		return true;
	}
	if (iParam0->f_239 >= 16f)
	{
		return true;
	}
	return false;
}

bool func_952(var uParam0, var uParam1, int* iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		return false;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam1, 174, true);
	if (!__LIB_2__::func_123(*uParam1, *uParam0, 0.9f))
	{
		if (!__LIB_0__::func_163(*uParam1, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam1, *uParam0, 0, -1f, -1f, -1f);
		}
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
	if (fParam3 == 0f)
	{
		fParam3 = __LIB_0__::func_665(*uParam0, *uParam1, 1, 1);
	}
	else if (fParam3 > 1.5f)
	{
		if (!__LIB_0__::func_163(*uParam0, 242628503))
		{
			TASK::OPEN_SEQUENCE_TASK(iParam2);
			if (__LIB_0__::func_396(*uParam0) || PED::IS_PED_ON_MOUNT(*uParam0))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, true))
			{
				if (__LIB_3__::func_112(*uParam0, *uParam1, 1f) == 3)
				{
					iVar0 = 131072;
				}
				else
				{
					iVar0 = 262144;
				}
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iVar0);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, 0f, 1f, 0f), 1f, 20000, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, *uParam1, 0, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(*iParam2);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, *iParam2);
			TASK::CLEAR_SEQUENCE_TASK(iParam2);
			PED::SET_PED_KEEP_TASK(*uParam0, true);
		}
	}
	else if (__LIB_0__::func_396(*uParam0) || PED::IS_PED_ON_MOUNT(*uParam0))
	{
		if (!__LIB_0__::func_163(*uParam0, 501393341))
		{
			TASK::TASK_DISMOUNT_ANIMAL(*uParam0, 0, 0, 0, 0, 0);
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, true))
	{
		if (!__LIB_0__::func_163(*uParam0, -828834893))
		{
			if (__LIB_3__::func_112(*uParam0, *uParam1, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			TASK::TASK_LEAVE_ANY_VEHICLE(*uParam0, 0, iVar1);
		}
	}
	else if (!__LIB_2__::func_123(*uParam0, *uParam1, 0.9f))
	{
		if (!__LIB_0__::func_163(*uParam0, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, *uParam1, 0, -1f, -1f, -1f);
		}
	}
	if (((__LIB_2__::func_123(*uParam1, *uParam0, 0.9f) && __LIB_2__::func_123(*uParam0, *uParam1, 0.9f)) && !PED::IS_PED_ON_MOUNT(*uParam0)) && fParam3 < 1.5f)
	{
		return true;
	}
	return false;
}

void func_953(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char cVar0[16];
	float fVar2;
	cVar0 = { __LIB_16__::func_922(iParam2) };
	iParam0->f_317[iParam1 /*17*/].f_13 = "";
	__LIB_2__::func_360(&(iParam0->f_317[iParam1 /*17*/]), cVar0);
	__LIB_2__::func_411(&(iParam0->f_317[iParam1 /*17*/]), bParam3, 0);
	__LIB_3__::func_158(&(iParam0->f_317[iParam1 /*17*/]), bParam6);
	if (bParam4)
	{
		__LIB_0__::func_268(&(iParam0->f_145), 0f);
	}
	else if (bParam5)
	{
		fVar2 = __LIB_0__::func_264(&(iParam0->f_145));
		fVar2 = (fVar2 - 5f);
		if (fVar2 <= 0f)
		{
			fVar2 = 0f;
		}
		__LIB_0__::func_268(&(iParam0->f_145), fVar2);
	}
}

int func_954(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = __LIB_8__::func_931(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = __LIB_8__::func_931(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_955(int iParam0)
{
	struct<2> Var0;
	char* sVar2;
	int iVar3;
	Var0 = { __LIB_16__::func_922(0) };
	__LIB_16__::func_872(&(iParam0->f_317[0 /*17*/]), Var0, __LIB_16__::func_926(), Var0.f_1, 0, 0, 0, 1, 0);
	Var0 = { __LIB_16__::func_922(1) };
	sVar2 = __LIB_16__::func_935(iParam0, &iVar3);
	__LIB_16__::func_872(&(iParam0->f_317[1 /*17*/]), Var0, sVar2, Var0.f_1, 0, 0, 0, 1, iVar3);
	__LIB_3__::func_350(iParam0->f_218[0], &(iParam0->f_317), 15f, 2, 0, 0, 0, 0, 0);
	__LIB_16__::func_932(iParam0, __LIB_2__::func_340(3, 0, 0), 1);
	__LIB_2__::func_411(&(iParam0->f_317[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(iParam0->f_317[1 /*17*/]), 0, 0);
}

void func_956(int iParam0, int iParam1, char* sParam2, float fParam3)
{
	if (!__LIB_0__::func_27(iParam0->f_253, 67108864))
	{
		if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1, false)) && ANIMSCENE::_0x1F0E401031E20146(iParam1, sParam2)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1) > fParam3)
		{
			__LIB_4__::func_268(12, 0, 0, "", iParam0->f_218[0], 0, 1065353216 /* Float: 1f */, 0);
			__LIB_1__::func_581(&(iParam0->f_253), 67108864);
		}
	}
}

void func_957(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
}

bool func_958(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return __LIB_16__::func_950(iParam0, iParam1, sParam2, sParam3, fParam4, uParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_959(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
	{
		return true;
	}
	if (AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		AUDIO::_0x36559148B78853B3(1, 1, 0);
	}
	if (!__LIB_0__::func_163(*uParam1, 242628503))
	{
		__LIB_16__::func_953(iParam0, 0, 0, 0, 0, 0, 0);
		__LIB_16__::func_953(iParam0, 1, 1, 0, 0, 0, 0);
		if (iParam2 == 0)
		{
			if (((__LIB_16__::func_923(26, 0) || __LIB_16__::func_923(27, 0)) || SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[26 /*49*/].f_42, false)) || SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[27 /*49*/].f_42, false))
			{
				iParam2 = 1;
			}
		}
		vVar1 = { __LIB_16__::func_924(iParam2) };
		TASK::_0x42CFD8FD8CC8DC69(*uParam1, __LIB_16__::func_925(iParam2));
		if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_231))
		{
			VOLUME::_DELETE_VOLUME(iParam0->f_231);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, -1, 6f, 6291460, 40000f);
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 5f, -1, false, false, true, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		PED::SET_PED_KEEP_TASK(*uParam1, true);
	}
	return false;
}

void func_960(int iParam0)
{
	__LIB_16__::func_839(&(iParam0->f_195));
	__LIB_16__::func_840(19);
	if (__LIB_0__::func_27(iParam0->f_253, 536870912) && !__LIB_0__::func_27(iParam0->f_253, 1073741824 /* Float: 2f */))
	{
		__LIB_2__::func_962(&(iParam0->f_353));
		__LIB_1__::func_726(Global_35, 1);
		if (__LIB_0__::func_272(iParam0->f_218[0], 0))
		{
			__LIB_1__::func_727(iParam0->f_218[0], 1);
		}
		__LIB_1__::func_581(&(iParam0->f_253), 1073741824 /* Float: 2f */);
	}
	__LIB_3__::func_969(&(iParam0->f_233), 1);
	__LIB_16__::func_953(iParam0, 0, 0, 0, 0, 0, 0);
	__LIB_16__::func_953(iParam0, 1, 1, 0, 0, 0, 0);
	__LIB_16__::func_921(&(iParam0->f_232));
	if (__LIB_0__::func_6(__LIB_1__::func_293(19, 0, 9, __LIB_16__::func_790(19))))
	{
		__LIB_1__::func_532(__LIB_1__::func_293(19, 0, 9, __LIB_16__::func_790(19)), iParam0->f_244);
		__LIB_7__::func_448(__LIB_1__::func_293(19, 0, 9, __LIB_16__::func_790(19)), iParam0->f_255);
	}
	if (__LIB_0__::func_272(iParam0->f_218[0], 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_218[0], false);
		__LIB_2__::func_56(iParam0->f_218[0], 1, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_218[0], 130, false);
		__LIB_16__::func_804(iParam0->f_218[0]);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_218[0], 0f);
		PED::_0x39A2FC5AF55A52B1(iParam0->f_218[0], -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_218[0]));
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_245))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_245);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_246))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_246);
	}
	if (__LIB_1__::func_565(&(iParam0->f_235)))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(iParam0->f_235), 0);
	}
	__LIB_16__::func_940(iParam0);
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][0 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][0 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][1 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][1 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][2 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][2 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][3 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][3 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][4 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][4 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][5 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][5 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][6 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][6 /*48*/].f_47);
	}
	if (HUD::_TEXT_DATABASE_HAS_LOADED("SPBM"))
	{
		HUD::_TEXT_DATABASE_DELETE("SPBM");
	}
	if (HUD::_TEXT_DATABASE_HAS_LOADED("SPCWVAU"))
	{
		HUD::_TEXT_DATABASE_DELETE("SPCWVAU");
	}
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_217))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_217);
	}
	__LIB_16__::func_832(0);
	if (!__LIB_3__::func_587(iParam0->f_233, 1, 1))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_961(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 2) || __LIB_0__::func_64(0) == 8) || __LIB_0__::func_1(Global_1935630, 2048))
			{
				__LIB_1__::func_581(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (__LIB_0__::func_64(0) == 11)
			{
				__LIB_1__::func_581(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (__LIB_0__::func_64(0) == 6)
			{
				__LIB_1__::func_581(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				__LIB_1__::func_581(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(__LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && __LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = __LIB_0__::func_23();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (__LIB_0__::func_41(iVar2) > __LIB_0__::func_41(iVar1))
				{
					if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 || __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
					{
						__LIB_1__::func_581(uParam2, 32);
					}
				}
				else if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 && __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
				{
					__LIB_1__::func_581(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((__LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || __LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || __LIB_9__::func_990(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || __LIB_9__::func_990(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!__LIB_16__::func_784(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						__LIB_1__::func_581(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (__LIB_16__::func_934(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || __LIB_16__::func_949(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_268(&(uParam2->f_13), 0f);
					}
					else if (__LIB_1__::func_871(&(uParam2->f_13)) >= uParam2->f_16)
					{
						__LIB_0__::func_37(&(uParam2->f_13));
						__LIB_1__::func_581(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_37(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (__LIB_2__::func_7())
			{
				__LIB_1__::func_581(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (__LIB_16__::func_785())
			{
				__LIB_1__::func_581(uParam2, 2048);
			}
		}
		if (__LIB_0__::func_1(Global_1935630, 16384) || Global_1430231.f_4)
		{
			__LIB_1__::func_581(uParam2, 128);
		}
		if (__LIB_8__::func_747(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			__LIB_1__::func_581(uParam2, 256);
		}
	}
	if ((((((((((__LIB_0__::func_27(*uParam2, 2) || __LIB_0__::func_27(*uParam2, 4)) || __LIB_0__::func_27(*uParam2, 8)) || __LIB_0__::func_27(*uParam2, 16)) || __LIB_0__::func_27(*uParam2, 32)) || __LIB_0__::func_27(*uParam2, 64)) || __LIB_0__::func_27(*uParam2, 128)) || __LIB_0__::func_27(*uParam2, 256)) || __LIB_0__::func_27(*uParam2, 512)) || __LIB_0__::func_27(*uParam2, 1024)) || __LIB_0__::func_27(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

void func_962(int iParam0)
{
	if ((__LIB_16__::func_881(19, iParam0->f_218[0], 1, 1) && (*iParam0 > 2 && *iParam0 < 67)) || (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0 && (*iParam0 > 2 && *iParam0 < 67)))
	{
		if (*iParam0 > 30)
		{
			if (!__LIB_0__::func_27(iParam0->f_253, 256))
			{
				if (*iParam0 != 57)
				{
					__LIB_16__::func_953(iParam0, 0, 0, 0, 0, 0, 0);
					__LIB_16__::func_953(iParam0, 1, 1, 0, 0, 0, 0);
					__LIB_16__::func_944(iParam0, 57);
					if (!__LIB_0__::func_27(iParam0->f_253, 65536))
					{
						__LIB_1__::func_581(&(iParam0->f_253), 128);
					}
				}
			}
		}
		else if (*iParam0 < 30)
		{
			if (!__LIB_0__::func_27(iParam0->f_253, 16777216))
			{
				__LIB_1__::func_581(&(iParam0->f_253), 16777216);
				__LIB_16__::func_944(iParam0, 21);
			}
		}
	}
	else if (__LIB_0__::func_27(iParam0->f_253, 16777216))
	{
		__LIB_1__::func_993(&(iParam0->f_253), 16777216);
	}
}

int func_963(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, iParam6, iParam6, fParam13);
	}
	iVar1 = __LIB_3__::func_994(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

void func_964(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;
	iVar0 = __LIB_2__::func_511(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		uVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			__LIB_16__::func_958(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_965(int iParam0)
{
	if ((!__LIB_0__::func_27(iParam0->f_253, 4) || !__LIB_0__::func_27(iParam0->f_253, 8)) || !__LIB_0__::func_27(iParam0->f_253, 16))
	{
		if (__LIB_16__::func_963(&(iParam0->f_220), &(iParam0->f_218), 3, ENTITY::GET_ENTITY_COORDS(iParam0->f_218[0], true, false), 5f, 0, 1, 1, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 1) >= 1)
		{
			return true;
		}
	}
	return false;
}

bool func_966(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_246, false))
	{
		return true;
	}
	return false;
}

void func_967(int iParam0, int iParam1)
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (__LIB_16__::func_961(19, iParam1, &(iParam0->f_195), iParam0->f_218[0]))
		{
			iParam0->f_372 = 1;
			if (__LIB_16__::func_809(&(iParam0->f_195)))
			{
				__LIB_16__::func_960(iParam0);
			}
		}
		if (*iParam0 == 21)
		{
			if (iParam0->f_372)
			{
				if (__LIB_16__::func_894(&(iParam0->f_195)))
				{
					if (!__LIB_16__::func_809(&(iParam0->f_195)))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_245) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_245, false))
						{
							__LIB_16__::func_939(iParam0, &(iParam0->f_245), __LIB_16__::func_920(), 0, 0, 0, 1, 0);
						}
						else
						{
							__LIB_1__::func_581(&(iParam0->f_253), 128);
							__LIB_16__::func_944(iParam0, 57);
						}
					}
				}
			}
		}
		if (!__LIB_0__::func_272(Global_35, 0))
		{
			__LIB_16__::func_960(iParam0);
		}
		else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(76), true, 0))
		{
			if (!__LIB_0__::func_75(&(iParam0->f_130)))
			{
				__LIB_1__::func_283(&(iParam0->f_130), 0);
			}
			else if (__LIB_0__::func_265(&(iParam0->f_130)) > 10f)
			{
				__LIB_0__::func_37(&(iParam0->f_130));
				__LIB_16__::func_960(iParam0);
			}
		}
	}
}

void func_968(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (bParam2)
	{
		iVar0 = __LIB_9__::func_844(0, (14 - 1), iParam0->f_244);
		iParam0->f_244 = iVar0;
	}
	else
	{
		iVar0 = *uParam1;
	}
	if (__LIB_16__::func_965(iParam0))
	{
		iVar1 = __LIB_3__::func_112(iParam0->f_218[0], iParam0->f_220[0], 1060437492 /* Float: 0.707f */);
		if (!__LIB_0__::func_27(iParam0->f_253, 4))
		{
			if (iVar1 == 3)
			{
				__LIB_16__::func_944(iParam0, 23);
				__LIB_1__::func_581(&(iParam0->f_253), 4);
				return;
			}
		}
		if (!__LIB_0__::func_27(iParam0->f_253, 8))
		{
			if (iVar1 == 2)
			{
				__LIB_16__::func_944(iParam0, 24);
				__LIB_1__::func_581(&(iParam0->f_253), 8);
				return;
			}
		}
		if (!__LIB_0__::func_27(iParam0->f_253, 16))
		{
			if (iVar1 == 0)
			{
				__LIB_16__::func_944(iParam0, 22);
				__LIB_1__::func_581(&(iParam0->f_253), 16);
				return;
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 7);
			break;
		case 1:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 8);
			break;
		case 2:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 9);
			break;
		case 3:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 10);
			break;
		case 4:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 11);
			break;
		case 5:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 12);
			break;
		case 6:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 13);
			break;
		case 7:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 14);
			break;
		case 8:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 15);
			break;
		case 9:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 16);
			break;
		case 10:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 17);
			break;
		case 11:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 18);
			break;
		case 12:
			*uParam1++;
			__LIB_16__::func_944(iParam0, 19);
			break;
		case 13:
			*uParam1 = 0;
			__LIB_16__::func_944(iParam0, 20);
			break;
		case 14:
			__LIB_16__::func_944(iParam0, 21);
			break;
		default:
			break;
	}
}

bool func_969(int iParam0, char* sParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	bVar0 = ANIMSCENE::_0x1F0E401031E20146(*iParam0, sParam1);
	if (bVar0)
	{
		return true;
	}
	bVar1 = ANIMSCENE::_0xA9016536015DE29D(*iParam0, sParam1);
	if (!bVar1)
	{
		return true;
	}
	bVar2 = ANIMSCENE::_0x23E33CB9F4A3F547(*iParam0, sParam1);
	if (!bVar2)
	{
		return true;
	}
	bVar3 = ANIMSCENE::_0x0DF57F86FE71DBE5(*iParam0, sParam1);
	if (bVar2 || bVar3)
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(*iParam0, sParam1);
	}
	return false;
}

void func_970(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_971(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = __LIB_16__::func_795(iParam3);
	if (fParam4 == 0f)
	{
		if (__LIB_0__::func_48(iParam0, Global_35, 15f, 1))
		{
			if (!__LIB_0__::func_1(*iParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					__LIB_1__::func_336(iParam1, iParam2);
				}
			}
		}
		else if (__LIB_0__::func_1(*iParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			__LIB_0__::func_516(iParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!__LIB_0__::func_1(*iParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				__LIB_1__::func_336(iParam1, iParam2);
			}
		}
	}
	else if (__LIB_0__::func_1(*iParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		__LIB_0__::func_516(iParam1, iParam2);
	}
}

void func_972(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return;
	}
	if (__LIB_0__::func_1(*iParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && __LIB_8__::func_964(__LIB_0__::func_14(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = __LIB_0__::func_23();
	__LIB_1__::func_336(iParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

int func_973(int iParam0, var uParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (__LIB_16__::func_873(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

void func_974(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_18))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_18);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_19))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_19);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_20))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_20);
	}
	if (__LIB_0__::func_75(&(iParam0->f_13)))
	{
		__LIB_0__::func_37(&(iParam0->f_13));
	}
}

int func_975(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!__LIB_16__::func_868(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
		if (!__LIB_0__::func_255(iVar1, 0))
		{
			__LIB_16__::func_796(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

bool func_976(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
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
				if (__LIB_2__::func_440(iParam0, uParam2))
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

int func_977(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 3)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

void func_978(int iParam0)
{
	if (!__LIB_0__::func_58(iParam0) || __LIB_0__::func_1(iParam0->f_134, iParam0->f_136))
	{
		return;
	}
	if (iParam0->f_137 < 2)
	{
		if (__LIB_16__::func_802(&(iParam0->f_3), 249295937))
		{
			__LIB_0__::func_11(iParam0);
			__LIB_1__::func_336(&(iParam0->f_134), iParam0->f_136);
		}
	}
}

void func_979(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (__LIB_0__::func_1(*uParam2, uParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && __LIB_8__::func_964(__LIB_0__::func_14(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = __LIB_0__::func_23();
	__LIB_1__::func_336(uParam2, uParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

void func_980(var uParam0, int iParam1)
{
	__LIB_0__::func_516(uParam0, iParam1);
}

void func_981(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_SPECIAL_PEDS_AGNES_DOWD_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_SPECIAL_PEDS_AGNES_DOWD_JN"), 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_SPECIAL_PEDS_CASSIDY_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_SPECIAL_PEDS_CASSIDY_JN"), 0);
			}
			break;
		case 5:
			if (bParam1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT4_1_AR"), 0);
			}
			else if (__LIB_0__::func_343(55))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT4_1B_JN"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT4_1A_JN"), 0);
			}
			break;
		case 12:
			if (bParam1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_SPECIAL_PEDS_GIANT_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_SPECIAL_PEDS_GIANT_JN"), 0);
			}
			break;
		case 20:
			if (bParam1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_SPECIAL_PEDS_PHILOSOPHER_CAVE_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_SPECIAL_PEDS_PHILOSOPHER_CAVE_JN"), 0);
			}
			break;
		case 21:
			if (bParam1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_SPECIAL_PEDS_TREE_MONKEY_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_SPECIAL_PEDS_TREE_MONKEY_JN"), 0);
			}
			break;
		case 28:
			if (bParam1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_SPECIAL_PEDS_CABIN_HERMIT_AR"), 0);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_SPECIAL_PEDS_CABIN_HERMIT_JN"), 0);
			}
			break;
		default:
			break;
	}
}

void func_982(int iParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam2, *iParam0, fParam4, fParam3, fParam3, -1f, -1f, 180f, false, false, -1, -1);
}

void func_983(int iParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			return;
		}
		if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), fParam3))
		{
			return;
		}
	}
	EVENT::REMOVE_SHOCKING_EVENT(*uParam1);
}

int func_984(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam2) || Global_1935630.f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5++;
			Global_40.f_11623[iParam0 /*8*/].f_2 = __LIB_0__::func_23();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!__LIB_0__::func_48(Global_35, *iParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!__LIB_0__::func_75(uParam3))
	{
		__LIB_0__::func_268(uParam3, 0f);
	}
	else if (__LIB_0__::func_265(uParam3) >= 2f)
	{
		if (!__LIB_5__::func_771(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			__LIB_16__::func_789(iParam0);
			*uParam4 = 1;
			__LIB_0__::func_37(uParam3);
			return 1;
		}
		else
		{
			__LIB_16__::func_789(iParam0);
			*uParam4 = 1;
			__LIB_0__::func_37(uParam3);
			return 1;
		}
	}
	return 0;
}

bool func_985(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	int iVar3;
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (bParam8)
	{
		if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			return false;
		}
	}
	if (!bParam7)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) * Vector(fParam1, fParam1, fParam1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + __LIB_3__::func_803(ENTITY::GET_ENTITY_COORDS(Global_35, true, false) - ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1) };
	}
	if ((!__LIB_0__::func_266(Global_35, vVar0, fParam2, 1, 1) && !__LIB_2__::func_123(Global_35, iParam0, 1f)) && !__LIB_2__::func_123(iParam0, Global_35, 1f))
	{
		if (!__LIB_0__::func_163(Global_35, 242628503))
		{
			if (bParam4)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam6, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, iParam3, fParam2, 0, (ENTITY::GET_ENTITY_HEADING(iParam0) - 180f));
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, 0, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar3);
			PED::SET_PED_KEEP_TASK(Global_35, true);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
		}
	}
	else if (!__LIB_0__::func_163(Global_35, 242628503))
	{
		if (bParam4 && bParam5)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, iParam6, false);
		}
		return true;
	}
	return false;
}

char* func_986()
{
	return "pbl_idle_a";
}

void func_987(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0, true, 0))
	{
		return;
	}
	else
	{
		uParam2->f_3 = Global_35;
	}
	*uParam2 = { 0f, 0f, 0f };
	uParam2->f_4 = 21030;
	uParam2->f_8 = 4;
	uParam2->f_19 = 3;
	uParam2->f_20 = 2;
	uParam2->f_21 = 3;
	uParam2->f_22 = 3;
	uParam2->f_13 = 3;
	uParam2->f_7 = iParam3;
	_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam1, uParam2);
}

void func_988()
{
	if (fLocal_156 <= 23f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_164[0]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_164[0], true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_164[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_164[1]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_164[1], true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_164[1]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_164[2]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_164[2], true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_164[2]));
		}
	}
}

char* func_989(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "WORLD_HUMAN_STAND_WAITING";
			break;
		case 1:
			sVar0 = "WORLD_HUMAN_STAND_WAITING";
			break;
		case 2:
			sVar0 = "WORLD_HUMAN_STAND_WAITING";
			break;
	}
	return sVar0;
}

void func_990(int iParam0, int iParam1, var uParam2)
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
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(*iParam1))
	{
		*iParam1 = ITEMSET::CREATE_ITEMSET(true);
		*uParam2 = 0;
	}
	if (!*uParam2)
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = ENTITY::_0x886171A12F400B89(*iParam0, iVar0, 1);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
				iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
				if (ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					ITEMSET::ADD_TO_ITEMSET(iVar1, *iParam1);
				}
				iVar4++;
			}
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
		*uParam2 = 1;
	}
	if (*uParam2)
	{
		iVar7 = ITEMSET::GET_ITEMSET_SIZE(*iParam1);
		if (iVar7 > 0)
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar8, *iParam1);
				iVar6 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar5);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar6, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar6, Global_35, true);
				iVar8++;
			}
		}
	}
}

char[] func_991()
{
	return "pbl_p1_p1_action_a";
}

char[] func_992()
{
	return "pbl_p1_p1_action_b";
}

char[] func_993()
{
	return "pbl_p1_p1_action_c";
}

char[] func_994()
{
	return "pbl_p2_action_a";
}

char[] func_995()
{
	return "pbl_p2_action_b";
}

char[] func_996()
{
	return "pbl_p3_action_a";
}

char[] func_997()
{
	return "pbl_p3_action_b";
}

char[] func_998()
{
	return "pbl_p4_action_a";
}

char[] func_999()
{
	return "pbl_p4_action_b";
}
