#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 4;
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
#endregion
void __EntryFunction__()
{
	func_1();
	if (func_2(&iLocal_0) != 1)
	{
	}
	else
	{
		func_3(&iLocal_0);
	}
	if (func_4(&iLocal_0) != 1)
	{
	}
	else
	{
		func_3(&iLocal_0);
	}
	func_5(&iLocal_0);
	func_3(&iLocal_0);
}

void func_1()
{
	TELEMETRY::_0xF0D54E0651DD7E07();
}

int func_2(int* iParam0)
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		return 1;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	__LIB_0__::func_115(iParam0, -2017342099);
	if (!func_7(iParam0))
	{
		return 1;
	}
	if (!func_8(iParam0))
	{
		return 1;
	}
	func_9(iParam0, -488492526);
	func_10(iParam0);
	return 0;
}

void func_3(int iParam0)
{
	__LIB_0__::func_703(0, -1);
	func_12();
	func_13(iParam0);
	if (!func_14(iParam0))
	{
	}
	if (!func_15(iParam0))
	{
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_4(int iParam0)
{
	if (!func_16(joaat("WEAPON_LOCKER")))
	{
		return 1;
	}
	return 0;
}

void func_5(int* iParam0)
{
	bool bVar0;
	bVar0 = false;
	while (!bVar0)
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			bVar0 = true;
		}
		if (!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("WEAPON_LOCKER")))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			func_17(iParam0);
			func_9(iParam0, UIAPPS::_0x96FD694FE5BE55DC(joaat("WEAPON_LOCKER")));
			func_18(iParam0);
		}
		BUILTIN::WAIT(0);
	}
}

bool func_7(var uParam0)
{
	uParam0->f_94 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "weapon_locker");
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_94))
	{
		return false;
	}
	uParam0->f_94.f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_94, "header_text", MISC::_CREATE_VAR_STRING(2, "WL_HEADER"));
	uParam0->f_94.f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_94, "footer_text", "Footer text");
	uParam0->f_94.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_94, "footer_color", joaat("COLOR_WHITE"));
	return true;
}

bool func_8(var uParam0)
{
	var uVar0;
	char* sVar6;
	int iVar7;
	if (!func_19(uParam0, &(uParam0->f_94)))
	{
		return false;
	}
	if (!func_20(&(uParam0->f_2.f_2), &(uParam0->f_2), &uVar0))
	{
		return false;
	}
	if (func_21(&(uParam0->f_2.f_13), &(uParam0->f_2), 1673159803))
	{
		__LIB_17__::func_700(&(uParam0->f_2.f_13));
		iVar7 = 0;
		while (iVar7 < 4)
		{
			sVar6 = func_23(iVar7);
			sVar6 = MISC::_CREATE_VAR_STRING(2, sVar6);
			if (!func_24(&(uParam0->f_2.f_13), &(uParam0->f_2.f_21), iVar7, sVar6))
			{
			}
			iVar7++;
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_9(int* iParam0, int iParam1)
{
	if (__LIB_4__::func_721(iParam0) != iParam1)
	{
		__LIB_0__::func_115(iParam0, iParam1);
		func_26(iParam0, __LIB_4__::func_721(iParam0));
		func_27(iParam0, __LIB_4__::func_721(iParam0));
	}
	func_28(iParam0, __LIB_4__::func_721(iParam0));
	func_29(iParam0, __LIB_4__::func_721(iParam0));
}

void func_10(int* iParam0)
{
	var uVar0;
	struct<22> Var4;
	int iVar26;
	int iVar27;
	Var4.f_9 = -1591664384;
	iVar26 = 0;
	while (iVar26 < 29)
	{
		iVar27 = __LIB_0__::func_153(Global_35, iVar26, 1, 0);
		if (func_31(iVar27))
		{
			if (WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_35, iVar26, &uVar0) && INVENTORY::_0x025A1B1FB03FBF61(1, &uVar0, &Var4, 22, 1))
			{
				if (!Var4.f_21)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, iVar26, false, false);
				}
			}
		}
		iVar26++;
	}
	WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
}

void func_12()
{
	TELEMETRY::_TELEMETRY_GUN_LOCKER();
}

void func_13(int iParam0)
{
	if (!UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("WEAPON_LOCKER")))
	{
		return;
	}
	UIAPPS::_CLOSE_APP_BY_HASH(joaat("WEAPON_LOCKER"));
	GRAPHICS::_0x26DD2FB0A88CC412("WheelHUDIn", "WheelHUDOut", 0, 0);
	MISC::SET_TIME_SCALE(1f);
}

bool func_14(int iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_94))
	{
		return false;
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_94);
	return true;
}

bool func_15(int iParam0)
{
	if (!__LIB_0__::func_0(iParam0))
	{
	}
	return true;
}

bool func_16(int iParam0)
{
	if (!UIAPPS::_CAN_LAUNCH_APP_BY_HASH(iParam0))
	{
		return false;
	}
	switch (UIAPPS::_LAUNCH_APP_BY_HASH(joaat("WEAPON_LOCKER")))
	{
		case 0:
			return true;
		case 1:
			return false;
		case 2:
			return false;
		default:
			break;
	}
	return false;
}

void func_17(int* iParam0)
{
	struct<4> Var0;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(1600976403))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(1600976403, &Var0))
		{
			func_36(iParam0, &Var0);
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(1600976403);
		}
	}
	if (func_37(iParam0))
	{
		Var0 = { func_38(iParam0) };
		func_36(iParam0, &Var0);
		func_39(iParam0);
	}
}

void func_18(int* iParam0)
{
	struct<4> Var0;
	if (func_37(iParam0))
	{
		Var0 = { func_38(iParam0) };
		func_36(iParam0, &Var0);
		func_39(iParam0);
	}
}

bool func_19(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam1, "weapons_page");
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		return false;
	}
	uParam0->f_2.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2, "weapon_list");
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2.f_1))
	{
		DATABINDING::_0x3BF0767CF33FCC88(uParam0->f_2.f_1);
	}
	uParam0->f_2.f_90 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2, "weapon_list_hint_visible", 0);
	uParam0->f_2.f_91 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2, "weapon_list_hint_label", 0);
	return true;
}

bool func_20(var uParam0, var uParam1, var uParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam1, "weapon_stat_visible", *uParam2);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponPowerNew", uParam2->f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponRangeNew", uParam2->f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponAccuracyNew", uParam2->f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponFireRateNew", uParam2->f_4);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponReloadNew", uParam2->f_5);
	return true;
}

bool func_21(var uParam0, var uParam1, int iParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabCount", 0);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam1, "tabName", "");
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabIndex", 0);
	uParam0->f_7 = iParam2;
	uParam0->f_5 = 1;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	return true;
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WL_FILTER_ALL";
		case 1:
			return "WL_FILTER_LOCKER";
		case 2:
			return "WL_FILTER_HORSE";
		case 3:
			return "WL_FILTER_EQUIPPED";
		default:
			break;
	}
	return "INVALID_LABEL";
}

bool func_24(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	int iVar0;
	iVar0 = *uParam1;
	if (uParam0->f_4 >= iVar0)
	{
		return false;
	}
	if (!uParam0->f_5)
	{
		return false;
	}
	(*uParam1)[uParam0->f_4 /*17*/] = iParam2;
	(uParam1[uParam0->f_4 /*17*/])->f_1 = { func_40(sParam3) };
	uParam0->f_4++;
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_1, uParam0->f_4);
	return true;
}

void func_26(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -488492526:
			__LIB_0__::func_11(uParam0);
			break;
	}
}

void func_27(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -488492526:
			func_42(&(uParam0->f_2.f_13));
			break;
	}
}

void func_28(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -488492526:
			func_43(iParam0);
			break;
	}
}

void func_29(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -488492526:
			func_44(&(iParam0->f_2.f_13), &(iParam0->f_2.f_21));
			break;
	}
}

bool func_31(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (!WEAPON::_0x705BE297EEBDB95D(iParam0) && !WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return false;
	}
	return true;
}

void func_36(int* iParam0, var uParam1)
{
	int iVar0;
	iVar0 = uParam1->f_2;
	switch (*uParam1)
	{
		case -632467210:
			func_46(iParam0);
			break;
		case -1740156697:
			if (func_47(&(iParam0->f_2.f_13)))
			{
			}
			else
			{
				func_48(iParam0, uParam1);
				switch (iVar0)
				{
					case -2060496899:
					case -1694113483:
					case -1174213347:
					case -337881065:
						if (!func_49(iParam0, &(uParam1->f_3)))
						{
						}
						if (!func_50(&(iParam0->f_2.f_2), &(uParam1->f_3)))
						{
						}
						break;
				}
				func_51(iParam0, iVar0);
			}
			break;
		case -1203660660:
			switch (iVar0)
			{
				case -1313710397:
					if (func_52(&(uParam1->f_3), 2))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case -1756222973:
					if (func_52(&(uParam1->f_3), 3))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case -1073027202:
					if (func_54(&(uParam1->f_3)))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case -1103499950:
					if (func_55(&(uParam1->f_3)))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case -946029012:
					if (func_52(&(uParam1->f_3), 10))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case 1554581363:
					if (func_52(&(uParam1->f_3), 9))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case 941907253:
					if (func_52(&(uParam1->f_3), 4))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case -466398939:
					if (func_52(&(uParam1->f_3), 7))
					{
						func_53(iParam0, 0, 1);
					}
					break;
				case -260514364:
					if (func_52(&(uParam1->f_3), 8))
					{
						func_53(iParam0, 0, 1);
					}
					break;
			}
			break;
		case -722926211:
		case 703281244:
			switch (iVar0)
			{
				case 752670436:
					func_42(&(iParam0->f_2.f_13));
					func_56(iParam0);
					break;
			}
			break;
	}
}

bool func_37(int* iParam0)
{
	return iParam0->f_98 != 0;
}

struct<4> func_38(int* iParam0)
{
	return iParam0->f_98;
}

void func_39(int* iParam0)
{
	var uVar0;
	iParam0->f_98 = 0;
	iParam0->f_98.f_2 = 0;
	iParam0->f_98.f_1 = 0;
	iParam0->f_98.f_3 = uVar0;
}

struct<16> func_40(char* sParam0)
{
	char cVar0[128];
	StringCopy(&cVar0, sParam0, 128);
	return cVar0;
}

void func_42(var uParam0)
{
	if (!uParam0->f_5)
	{
		return;
	}
	uParam0->f_6 = 1;
}

void func_43(int* iParam0)
{
	int iVar0;
	if (func_47(&(iParam0->f_2.f_13)))
	{
		func_53(iParam0, 0, 1);
	}
	if (func_57(iParam0, 0))
	{
		func_53(iParam0, 0, 0);
		iVar0 = func_58(iParam0);
		if (!func_59(iParam0, iVar0))
		{
		}
		func_60(iParam0);
		func_61(iParam0, iVar0);
		func_62(iParam0, iVar0);
	}
}

void func_44(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!uParam0->f_6)
	{
		return;
	}
	if (!uParam0->f_5)
	{
		uParam0->f_6 = 0;
		return;
	}
	iVar0 = func_63(uParam0);
	if (iVar0 == -1)
	{
		uParam0->f_6 = 0;
		return;
	}
	iVar1 = *uParam1;
	iVar2 = __LIB_4__::func_819(uParam0);
	iVar3 = (iVar2 - 1);
	if (iVar0 < 0 || iVar0 > iVar3)
	{
		uParam0->f_6 = 0;
		return;
	}
	if (iVar1 < iVar2)
	{
		uParam0->f_6 = 0;
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, &((uParam1[iVar0 /*17*/])->f_1));
	uParam0->f_6 = 0;
}

int func_46(int* iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_94.f_2))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_94.f_2, "");
	return 1;
}

bool func_47(var uParam0)
{
	return uParam0->f_6;
}

int func_48(int* iParam0, var uParam1)
{
	if (*uParam1 == 0)
	{
		return 0;
	}
	MISC::_COPY_MEMORY(&(iParam0->f_102), uParam1, 4);
	return 1;
}

bool func_49(int* iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item_slot");
	Var2 = { __LIB_0__::func_429(iVar0, __LIB_1__::func_117(0), iVar1, 0) };
	if (!__LIB_0__::func_607(&Var2))
	{
		return false;
	}
	func_68(iParam0, Var2);
	return true;
}

bool func_50(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_damage"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_range"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_accuracy"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_firerate"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_reload"));
	return true;
}

void func_51(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -2060496899:
		case -1694113483:
		case -1174213347:
		case -337881065:
			if (!func_69(iParam0, iParam1))
			{
				func_46(iParam0);
			}
			break;
		default:
			func_46(iParam0);
			break;
	}
}

bool func_52(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return false;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	if (!func_70(iVar0, iVar1, iParam1))
	{
		return false;
	}
	return true;
}

void func_53(int* iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		__LIB_1__::func_471(iParam0, iParam1);
	}
	else
	{
		__LIB_1__::func_491(iParam0, iParam1);
	}
}

bool func_54(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return false;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	Var2 = { __LIB_0__::func_429(iVar0, __LIB_1__::func_117(0), iVar1, 0) };
	if (!__LIB_0__::func_607(&Var2))
	{
		return false;
	}
	if (!func_73(&Var2))
	{
		return false;
	}
	return true;
}

bool func_55(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return false;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	Var2 = { __LIB_0__::func_429(iVar0, __LIB_1__::func_117(0), iVar1, 0) };
	if (!__LIB_0__::func_607(&Var2))
	{
		return false;
	}
	if (!func_74(&Var2))
	{
		return false;
	}
	return true;
}

void func_56(int* iParam0)
{
	__LIB_0__::func_610(&(iParam0->f_2.f_9));
}

bool func_57(int* iParam0, int iParam1)
{
	return __LIB_11__::func_863(*iParam0, iParam1);
}

int func_58(int* iParam0)
{
	return func_77(&(iParam0->f_2.f_13), &(iParam0->f_2.f_21));
}

bool func_59(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	if (!__LIB_0__::func_446("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 1))
	{
		return false;
	}
	Var2.f_9 = -1591664384;
	iVar17 = 0;
	iVar19 = 0;
	while (iVar19 < 7)
	{
		iVar18 = 0;
		while (iVar18 < iVar1)
		{
			if (!__LIB_0__::func_236(&Var2, iVar18, iVar0, iVar1))
			{
			}
			else if (!func_31(Var2.f_4))
			{
			}
			else if (func_80(Var2.f_4, Var2.f_9))
			{
			}
			else if (func_81(Var2.f_4) != iVar19)
			{
			}
			else
			{
				iVar16 = func_82(&Var2);
				if (iParam1 != 0)
				{
					switch (iVar16)
					{
						case -1:
							Jump @255; //curOff = 180
							Jump @222; //curOff = 183
							if (iParam1 != 3)
							{
							}
							else
							{
								Jump @222; //curOff = 195
								if (iParam1 != 2)
								{
								}
								else
								{
									Jump @222; //curOff = 207
									if (iParam1 != 1)
									{
									}
									else if (!func_83(iParam0, iVar17, Var2.f_4, Var2.f_9, iVar16, iParam1))
									{
									}
									else
									{
										iVar17++;
									}
								}
							}
							iVar18++;
							iVar19++;
							if (!func_84(iParam0, iVar17))
							{
							}
							if (!__LIB_17__::func_701(iVar0))
							{
							}
							return true;
						}
					}
				}
			}
		}
void func_60(int* iParam0)
{
	int iVar0;
	iVar0 = func_86(iParam0);
	func_87(&(iParam0->f_2.f_2), func_86(iParam0) > 0);
	if (iVar0 == 0)
	{
		func_88(&(iParam0->f_2.f_2));
	}
}

void func_61(int* iParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_86(iParam0);
	switch (iParam1)
	{
		case 1:
			func_89(iParam0, iVar0 == 0);
			func_90(iParam0, -2012945523 /* GXTEntry: "You have no weapons in your locker." */);
			break;
		case 2:
			func_89(iParam0, iVar0 == 0);
			func_90(iParam0, -1705332461 /* GXTEntry: "You have no weapons on your horse." */);
			break;
		default:
			func_89(iParam0, 0);
			break;
	}
}

void func_62(int* iParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = func_86(iParam0);
	if (iVar0 > 0)
	{
		Var1 = -1740156697;
		if (func_47(&(iParam0->f_2.f_13)))
		{
			Var1.f_1 = 0;
		}
		else
		{
			Var1.f_1 = func_91(iParam0);
			if (Var1.f_1 >= iVar0)
			{
				Var1.f_1 = (iVar0 - 1);
			}
		}
		Var1.f_2 = func_92(iParam1);
		if (!func_93(iParam0, Var1.f_1, &(Var1.f_3)))
		{
		}
		if (!func_94(iParam0, &Var1))
		{
		}
	}
}

int func_63(var uParam0)
{
	if (!uParam0->f_5)
	{
		return -1;
	}
	return DATABINDING::_DATABINDING_READ_DATA_INT(uParam0->f_3);
}

int func_68(int* iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (!__LIB_0__::func_607(&uParam1))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(&(iParam0->f_2.f_9), &uParam1, 4);
	return 1;
}

bool func_69(int* iParam0, int iParam1)
{
	char* sVar0;
	struct<4> Var1;
	struct<10> Var5;
	switch (iParam1)
	{
		case -1174213347:
			break;
		case -1694113483:
			sVar0 = "WL_NUMBER_STORED_IN_WL";
			break;
		case -337881065:
			sVar0 = "WL_NUMBER_STOWED_ON_HORSE";
			break;
		case -2060496899:
			sVar0 = "WL_NUMBER_EQUIPPED";
			break;
		default:
			return false;
	}
	Var1 = { func_97(iParam0) };
	if (__LIB_0__::func_607(&Var1))
	{
		Var5.f_9 = -1591664384;
		if (INVENTORY::_0x025A1B1FB03FBF61(1, &Var1, &Var5, 22, 1))
		{
		}
		switch (func_98(&Var1))
		{
			case 3:
				func_99(iParam0, MISC::_CREATE_VAR_STRING(2, "WL_FOOTER_ALWAYS_MELEE"));
				return true;
			case 4:
				if (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 2, 1, 0)))
				{
					func_99(iParam0, MISC::_CREATE_VAR_STRING(2, "WL_FOOTER_ALWAYS_SIDEARMS"));
				}
				return true;
			case 5:
				func_99(iParam0, MISC::_CREATE_VAR_STRING(2, "WL_FOOTER_ALWAYS_SIDEARMS"));
				return true;
		}
	}
	if (func_86(iParam0) > 0)
	{
		func_99(iParam0, MISC::_CREATE_VAR_STRING(2, sVar0, func_86(iParam0)));
	}
	else
	{
		func_46(iParam0);
	}
	return true;
}

bool func_70(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	struct<15> Var5;
	int iVar27;
	struct<15> Var28;
	var uVar50;
	int iVar54;
	Var1 = { __LIB_0__::func_429(iParam0, __LIB_1__::func_117(0), iParam1, 0) };
	Var5.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(1, &Var1, &Var5, 22, 1))
	{
		return false;
	}
	iVar0 = Var5.f_14;
	Var28.f_9 = -1591664384;
	if (WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_35, iParam2, &uVar50) && func_31(__LIB_0__::func_153(Global_35, iParam2, 1, 0)))
	{
		if (!INVENTORY::_0x025A1B1FB03FBF61(1, &uVar50, &Var28, 22, 1))
		{
			return false;
		}
		iVar54 = __LIB_0__::func_153(Global_35, iParam2, 1, 0);
		iVar27 = Var28.f_14;
	}
	else if (WEAPON::_IS_WEAPON_BOW(iParam0) || WEAPON::_IS_WEAPON_TWO_HANDED(iParam0))
	{
		if (WEAPON::_IS_WEAPON_BOW(iParam0))
		{
			switch (iVar0)
			{
				case 8:
					iVar27 = 9;
					break;
				case 7:
					iVar27 = 10;
					break;
			}
		}
		else if (WEAPON::_IS_WEAPON_TWO_HANDED(iParam0))
		{
			switch (iVar0)
			{
				case 10:
					iVar27 = 7;
					break;
				case 9:
					iVar27 = 8;
					break;
			}
		}
		iVar54 = __LIB_0__::func_153(Global_35, iVar27, 1, 0);
		if (WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_35, iVar27, &uVar50) && func_31(iVar54))
		{
			if (!INVENTORY::_0x025A1B1FB03FBF61(1, &uVar50, &Var28, 22, 1))
			{
				return false;
			}
			if (WEAPON::_IS_WEAPON_BOW(iVar54))
			{
				switch (iVar27)
				{
					case 8:
						iVar0 = 7;
						break;
					case 7:
						iVar0 = 8;
						break;
				}
			}
			else if (WEAPON::_IS_WEAPON_TWO_HANDED(iParam0))
			{
				switch (iVar27)
				{
					case 10:
						iVar0 = 9;
						break;
					case 9:
						iVar0 = 10;
						break;
				}
			}
		}
	}
	if (func_82(&Var5) == 2)
	{
		func_101(Var5.f_4);
	}
	if (func_102(&Var1, &iParam2, 1))
	{
	}
	if (__LIB_0__::func_607(&uVar50))
	{
		if (func_103(iVar54, iVar27, iVar0))
		{
			if (func_102(&Var28, &iVar0, 1))
			{
			}
		}
	}
	return true;
}

bool func_73(var uParam0)
{
	struct<22> Var0;
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(1, uParam0, &Var0, 22, 1))
	{
		return false;
	}
	Var0.f_21 = 0;
	if (!INVENTORY::_0xD80A8854DB5CFBA5(1, uParam0, &Var0, 22))
	{
		return false;
	}
	func_104(Var0.f_4);
	if ((ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(0)) && __LIB_0__::func_154(WEAPON::_0xAFFD0CCF31F469B8(__LIB_0__::func_398(0)))) && WEAPON::_0xAFFD0CCF31F469B8(__LIB_0__::func_398(0)) == Var0.f_4)
	{
		WEAPON::_0xD4C6E24D955FF061(__LIB_0__::func_398(0));
	}
	if ((ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(1)) && __LIB_0__::func_154(WEAPON::_0xAFFD0CCF31F469B8(__LIB_0__::func_398(1)))) && WEAPON::_0xAFFD0CCF31F469B8(__LIB_0__::func_398(1)) == Var0.f_4)
	{
		WEAPON::_0xD4C6E24D955FF061(__LIB_0__::func_398(1));
	}
	if (Var0.f_14 >= 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, Var0.f_14, false, false);
	}
	return true;
}

bool func_74(var uParam0)
{
	struct<22> Var0;
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(1, uParam0, &Var0, 22, 1))
	{
		return false;
	}
	Var0.f_21 = 1;
	if (func_82(&Var0) == 2)
	{
		func_101(Var0.f_4);
	}
	if (!INVENTORY::_0xD80A8854DB5CFBA5(1, uParam0, &Var0, 22))
	{
		return false;
	}
	if (Var0.f_14 >= 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, Var0.f_14, false, false);
	}
	return true;
}

int func_77(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_5)
	{
		return -1;
	}
	iVar0 = *uParam1;
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT(uParam0->f_3);
	if (iVar1 < 0 || iVar1 >= iVar0)
	{
		return -1;
	}
	return (*uParam1)[iVar1 /*17*/];
}

bool func_80(int iParam0, int iParam1)
{
	struct<10> Var0;
	var uVar22;
	if (!__LIB_0__::func_154(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!__LIB_1__::func_280(iParam0, &uVar22, &Var0, iParam1))
	{
		return false;
	}
	return __LIB_1__::func_429(iParam0, &Var0, iParam1);
}

int func_81(int iParam0)
{
	if (!func_31(iParam0))
	{
		return -1;
	}
	if (WEAPON::_IS_WEAPON_PISTOL(iParam0))
	{
		return 0;
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iParam0))
	{
		return 1;
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(iParam0))
	{
		return 3;
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iParam0))
	{
		return 4;
	}
	else if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return 5;
	}
	return 6;
}

int func_82(var uParam0)
{
	struct<22> Var0;
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(1, uParam0, &Var0, 22, 1))
	{
		return -1;
	}
	if (!Var0.f_21)
	{
		return 2;
	}
	else if (Var0.f_21 && Var0.f_14 != -1)
	{
		return 0;
	}
	else if (Var0.f_21 && Var0.f_14 == -1)
	{
		return 1;
	}
	return -1;
}

bool func_83(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<7> Var0;
	bool bVar47;
	var uVar48;
	if (!func_31(iParam2))
	{
		return false;
	}
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1134602452;
	Var0.f_6 = 1276832712;
	if (!func_108(iParam2, iParam3, &Var0, iParam4, iParam5))
	{
		return false;
	}
	bVar47 = true;
	if (iParam1 < func_86(iParam0))
	{
		if (func_93(iParam0, iParam1, &uVar48))
		{
			if (func_109(&uVar48, &Var0))
			{
				bVar47 = false;
			}
		}
	}
	if (bVar47)
	{
		if (!func_110(iParam0, &Var0))
		{
			return false;
		}
	}
	return true;
}

bool func_84(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1);
	if (iVar0 == 0)
	{
		return true;
	}
	if (iParam1 < 0 || iParam1 > iVar0)
	{
		return false;
	}
	iVar1 = iVar0;
	while (iVar1 >= iParam1)
	{
		DATABINDING::_0x6318FB3BE37E11B3(iParam0->f_2.f_1, iVar1);
		iVar1 = (iVar1 + -1);
	}
	return true;
}

int func_86(int* iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		return 0;
	}
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1);
}

int func_87(var uParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, bParam1);
	return 1;
}

int func_88(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6, 0);
	return 1;
}

int func_89(int* iParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_90))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0->f_2.f_90, bParam1);
	return 1;
}

int func_90(int* iParam0, int iParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_91))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(iParam0->f_2.f_91, iParam1);
	return 1;
}

var func_91(int* iParam0)
{
	return iParam0->f_102.f_1;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1174213347;
		case 1:
			return -1694113483;
		case 2:
			return -337881065;
		case 3:
			return -2060496899;
		default:
			break;
	}
	return 0;
}

bool func_93(int* iParam0, int iParam1, var uParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1))
	{
		return false;
	}
	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(iParam0->f_2.f_1, iParam1);
	return true;
}

bool func_94(int* iParam0, var uParam1)
{
	if (*uParam1 == 0)
	{
		return false;
	}
	if (iParam0->f_98 != 0)
	{
		return false;
	}
	MISC::_COPY_MEMORY(&(iParam0->f_98), uParam1, 4);
	return true;
}

struct<4> func_97(int* iParam0)
{
	return iParam0->f_2.f_9;
}

int func_98(var uParam0)
{
	struct<15> Var0;
	int iVar22;
	if (!__LIB_0__::func_607(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(__LIB_0__::func_162(0), uParam0, &Var0, 22, 1))
	{
		return 2;
	}
	iVar22 = Var0.f_14;
	switch (iVar22)
	{
		case 3:
			return 4;
		case 2:
			return 5;
		case 4:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_99(int* iParam0, char* sParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_94.f_2))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_94.f_2, sParam1);
	return 1;
}

int func_101(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	TELEMETRY::_0x317D9C9560529CC2(iParam0);
	return 1;
}

bool func_102(var uParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;
	struct<13> Var22;
	var uVar38;
	int iVar44;
	char cVar45[64];
	char cVar53[64];
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(1, uParam0, &Var0, 22, 1))
	{
		return false;
	}
	Var0.f_21 = 1;
	if (!INVENTORY::_0xD80A8854DB5CFBA5(1, uParam0, &Var0, 22))
	{
		return false;
	}
	Var22.f_7 = 752097756;
	Var22.f_8 = 1056964608;
	Var22.f_9 = 1065353216;
	Var22.f_4 = Var0.f_4;
	Var22 = { Var0 };
	Var22.f_6 = *iParam1;
	Var22.f_12 = 1;
	if (WEAPON::_GIVE_WEAPON_TO_PED(Global_35, &Var22, &uVar38))
	{
	}
	else
	{
		return false;
	}
	if (bParam2)
	{
		if (func_112(Var22.f_6, &iVar44))
		{
			StringCopy(&cVar45, __LIB_1__::func_72(Var22.f_4), 64);
			StringCopy(&cVar53, HUD::_GET_LABEL_TEXT_BY_HASH(iVar44), 64);
			__LIB_16__::func_256(MISC::_CREATE_VAR_STRING(42, "WL_TICKER_EQUIPPED_TO", &cVar45, &cVar53), -2, 0, 0, 0, 1);
		}
	}
	return true;
}

bool func_103(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		if (iParam1 == 8 && iParam2 == 7)
		{
			return true;
		}
		if (iParam2 == 8 && iParam1 == 7)
		{
			return true;
		}
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(iParam0))
	{
		if (iParam1 == 10 && iParam2 == 9)
		{
			return true;
		}
		if (iParam2 == 10 && iParam1 == 9)
		{
			return true;
		}
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (iParam1 == 3 && iParam2 == 2)
		{
			return true;
		}
		if (iParam2 == 3 && iParam1 == 2)
		{
			return true;
		}
	}
	return false;
}

int func_104(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	TELEMETRY::_0xC3ADF4880784FA9C(iParam0);
	return 1;
}

bool func_108(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	struct<5> Var0;
	if (!func_31(iParam0))
	{
		return false;
	}
	if (INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(1), iParam0, 0) > 1)
	{
		if (func_116(iParam1, &(uParam2->f_22), &(uParam2->f_21)))
		{
			uParam2->f_23 = 1;
		}
	}
	uParam2->f_4 = 1600976403;
	switch (iParam4)
	{
		case 0:
			uParam2->f_5 = -1174213347;
			break;
		case 3:
			uParam2->f_5 = -2060496899;
			break;
		case 2:
			uParam2->f_5 = -337881065;
			break;
		case 1:
			uParam2->f_5 = -1694113483;
			break;
	}
	StringCopy(&(uParam2->f_10), __LIB_1__::func_72(iParam0), 64);
	if (!func_117(iParam0, &Var0, iParam1))
	{
	}
	uParam2->f_24 = Var0;
	uParam2->f_25 = Var0.f_1;
	uParam2->f_26 = Var0.f_4;
	uParam2->f_27 = Var0.f_2;
	uParam2->f_28 = Var0.f_3;
	uParam2->f_8 = 0;
	uParam2->f_9 = 0;
	if (!func_118(iParam0, iParam1, uParam2))
	{
		return false;
	}
	if (!func_119(iParam3, uParam2))
	{
		return false;
	}
	uParam2->f_45 = iParam0;
	uParam2->f_46 = iParam1;
	return true;
}

bool func_109(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, __LIB_10__::func_770(0), *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, __LIB_10__::func_770(1), uParam1->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, __LIB_10__::func_770(2), uParam1->f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, __LIB_10__::func_770(53), uParam1->f_3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, __LIB_10__::func_770(54), uParam1->f_4);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, __LIB_10__::func_770(56), uParam1->f_5);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, __LIB_10__::func_770(55), uParam1->f_6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, __LIB_10__::func_770(57), uParam1->f_7);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, __LIB_10__::func_770(58), uParam1->f_8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, __LIB_10__::func_770(59), uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, __LIB_10__::func_770(9), uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, __LIB_10__::func_770(10), uParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, __LIB_10__::func_770(11), uParam1->f_23);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, __LIB_10__::func_770(15), &(uParam1->f_10));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, __LIB_10__::func_770(21), uParam1->f_18);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, __LIB_10__::func_770(22), uParam1->f_19);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, __LIB_10__::func_770(23), uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_damage", uParam1->f_24);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_range", uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_accuracy", uParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_firerate", uParam1->f_27);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_reload", uParam1->f_28);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_label", uParam1->f_31);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_enabled", uParam1->f_29);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_visible", uParam1->f_30);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_hash", uParam1->f_32);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_label", uParam1->f_35);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_enabled", uParam1->f_33);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_visible", uParam1->f_34);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_hash", uParam1->f_36);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_label", uParam1->f_39);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_enabled", uParam1->f_37);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_visible", uParam1->f_38);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_hash", uParam1->f_40);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_label", uParam1->f_43);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_enabled", uParam1->f_41);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_visible", uParam1->f_42);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_hash", uParam1->f_44);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item", uParam1->f_45);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot", uParam1->f_46);
	return true;
}

bool func_110(int* iParam0, var uParam1)
{
	char cVar0[64];
	var uVar8;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2))
	{
		return false;
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		return false;
	}
	StringCopy(&cVar0, "Entry_", 64);
	StringIntConCat(&cVar0, DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1), 64);
	func_121(&uVar8, iParam0->f_2.f_1, cVar0, uParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iParam0->f_2.f_1, -1, "pm_dynamic_text_and_end_image", uVar8);
	return true;
}

bool func_112(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			*iParam1 = 825261881; /* GXTEntry: "Melee" */
			return true;
		case 3:
			*iParam1 = -2078679563; /* GXTEntry: "Off-Hand Sidearm" */
			return true;
		case 2:
			*iParam1 = 258571561; /* GXTEntry: "Sidearm" */
			return true;
		case 7:
		case 9:
			*iParam1 = 1282885388; /* GXTEntry: "Back" */
			return true;
		case 8:
		case 10:
			*iParam1 = -1522249011; /* GXTEntry: "Shoulder" */
			return true;
		default:
			break;
	}
	return false;
}

bool func_116(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1728382685: /* GXTEntry: "Right" */
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("CLUB");
			return true;
		case -649335959: /* GXTEntry: "Left" */
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("DIAMOND");
			return true;
		default:
			break;
	}
	return false;
}

bool func_117(int iParam0, var uParam1, int iParam2)
{
	struct<2> Var0;
	vector3 vVar22;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	struct<2> Var35;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<4> Var41;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_787(iParam0))
	{
		return false;
	}
	Var0.f_1 = 20;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0))
	{
		return false;
	}
	if (Var0 <= 0)
	{
		return false;
	}
	fVar34 = 100f;
	Var35 = { func_124(joaat("SKILL"), WEAPON::_0x8EC44AE8DECFF841(iParam0)) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::STAT_ID_GET_FLOAT(&Var35, &fVar34);
	}
	iVar37 = 0;
	while (iVar37 < Var0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar37], &vVar22))
		{
			if (vVar22.y == -266488916)
			{
				iVar29 = (iVar29 + vVar22.z);
			}
			else if (vVar22.y == 1648497600)
			{
				iVar30 = (iVar30 + vVar22.z);
			}
			else if (vVar22.y == -1856731002)
			{
				iVar31 = (iVar31 + vVar22.z);
			}
			else if (vVar22.y == 2038990430)
			{
				iVar32 = (iVar32 + vVar22.z);
			}
			else if (vVar22.y == 983649838)
			{
				iVar33 = (iVar33 + vVar22.z);
			}
			if (vVar22.y == 1465168878)
			{
				iVar30 = (iVar30 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
			}
			else if (vVar22.y == -1103443887)
			{
				iVar32 = (iVar32 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
			}
			else if (vVar22.y == -800430237)
			{
				iVar33 = (iVar33 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
			}
		}
		iVar37++;
	}
	iVar38 = 0;
	iVar39 = 0;
	iVar40 = 0;
	Var41 = { __LIB_0__::func_429(iParam0, __LIB_1__::func_117(0), iParam2, 0) };
	iVar45 = __LIB_0__::func_857(iParam0);
	iVar46 = 0;
	while (iVar46 < iVar45)
	{
		iVar47 = __LIB_12__::func_495(iParam0, iVar46);
		if (iVar47 != 0)
		{
			iVar48 = __LIB_1__::func_81(Var41, iVar47, 0);
			if (__LIB_0__::func_144(iVar48, 0))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar48, &Var0))
				{
					iVar37 = 0;
					iVar37 = 0;
					while (iVar37 < Var0)
					{
						if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar37], &vVar22))
						{
						}
						else if (vVar22.y == 1999781523)
						{
							iVar38 = (iVar38 + vVar22.z);
						}
						else if (vVar22.y == 1173003838)
						{
							iVar40 = (iVar40 + vVar22.z);
						}
						else if (vVar22.y == -1657343230)
						{
							iVar39 = (iVar39 + vVar22.z);
						}
						iVar37++;
					}
				}
			}
		}
		iVar46++;
	}
	iVar49 = (iVar29 + iVar38);
	iVar50 = (iVar30 + iVar39);
	iVar51 = (iVar33 + iVar40);
	*uParam1 = iVar49;
	uParam1->f_1 = iVar50;
	uParam1->f_4 = iVar51;
	uParam1->f_2 = iVar31;
	uParam1->f_3 = iVar32;
	return true;
}

bool func_118(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!func_31(iParam0))
	{
		return false;
	}
	Var0 = { __LIB_0__::func_429(iParam0, __LIB_1__::func_117(0), iParam1, 0) };
	if (!__LIB_0__::func_607(&Var0))
	{
		return false;
	}
	if (func_80(iParam0, iParam1))
	{
		return false;
	}
	iVar5 = func_128(iParam0);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		if (!func_129(iParam0, iVar6, &iVar4))
		{
		}
		else if (iVar6 == 0)
		{
			uParam2->f_30 = func_130(iVar4);
			uParam2->f_29 = (uParam2->f_30 && func_131(&Var0, iVar4) == 0);
			if (!func_132(iVar4, &(uParam2->f_31)))
			{
			}
			if (!func_133(iVar4, &(uParam2->f_32)))
			{
			}
		}
		else if (iVar6 == 1)
		{
			uParam2->f_34 = func_130(iVar4);
			uParam2->f_33 = (uParam2->f_34 && func_131(&Var0, iVar4) == 0);
			if (!func_132(iVar4, &(uParam2->f_35)))
			{
			}
			if (!func_133(iVar4, &(uParam2->f_36)))
			{
			}
		}
		iVar6++;
	}
	uParam2->f_38 = 1;
	uParam2->f_37 = func_134(&Var0) == 0;
	uParam2->f_39 = 1039601264; /* GXTEntry: "Store in Locker" */
	uParam2->f_40 = -1073027202;
	uParam2->f_42 = 1;
	uParam2->f_41 = func_135(&Var0) == 0;
	uParam2->f_43 = 1901059961; /* GXTEntry: "Stow on your horse" */
	uParam2->f_44 = -1103499950;
	return true;
}

bool func_119(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	if (!func_136(iParam0, &uVar0, &uVar1))
	{
		uParam1->f_20 = 0;
		return false;
	}
	uParam1->f_20 = 1;
	uParam1->f_19 = uVar0;
	uParam1->f_18 = uVar1;
	return true;
}

int func_121(var uParam0, var uParam1, char[32] cParam2, var uParam10)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam1))
	{
		return 0;
	}
	__LIB_17__::func_702(uParam0, uParam1, cParam2, *uParam10);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, __LIB_10__::func_770(9), uParam10->f_21);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, __LIB_10__::func_770(10), uParam10->f_22);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, __LIB_10__::func_770(11), uParam10->f_23);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_damage", uParam10->f_24);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_range", uParam10->f_25);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_accuracy", uParam10->f_26);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_firerate", uParam10->f_27);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_reload", uParam10->f_28);
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_toggle_label", uParam10->f_31);
	uParam0->f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_toggle_enabled", uParam10->f_29);
	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_toggle_visible", uParam10->f_30);
	uParam0->f_30 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_toggle_hash", uParam10->f_32);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_option_label", uParam10->f_35);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_option_enabled", uParam10->f_33);
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_option_visible", uParam10->f_34);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_option_hash", uParam10->f_36);
	uParam0->f_31 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dleft_label", uParam10->f_39);
	uParam0->f_32 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dleft_enabled", uParam10->f_37);
	uParam0->f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dleft_visible", uParam10->f_38);
	uParam0->f_34 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dleft_hash", uParam10->f_40);
	uParam0->f_35 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dright_label", uParam10->f_43);
	uParam0->f_36 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dright_enabled", uParam10->f_41);
	uParam0->f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dright_visible", uParam10->f_42);
	uParam0->f_38 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dright_hash", uParam10->f_44);
	uParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "inventory_item", uParam10->f_45);
	uParam0->f_40 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "inventory_item_slot", uParam10->f_46);
	return 1;
}

struct<2> func_124(int iParam0, var uParam1)
{
	struct<2> Var0;
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	return Var0;
}

int func_128(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(iParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_MELEE(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_129(int iParam0, int iParam1, var uParam2)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = 8;
				return true;
			case 1:
				*uParam2 = 7;
				return true;
			default:
				break;
		}
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = 10;
				return true;
			case 1:
				*uParam2 = 9;
				return true;
			default:
				break;
		}
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = 2;
				return true;
			case 1:
				*uParam2 = 3;
				return true;
			default:
				break;
		}
	}
	else if (WEAPON::_IS_WEAPON_MELEE(iParam0))
	{
		*uParam2 = 4;
		return true;
	}
	return false;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_141();
	}
	return 1;
}

int func_131(var uParam0, int iParam1)
{
	struct<10> Var0;
	var uVar22;
	if (!__LIB_0__::func_607(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(__LIB_0__::func_162(0), uParam0, &Var0, 22, 1))
	{
		return 2;
	}
	if (!WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_35, iParam1, &uVar22))
	{
	}
	if (func_82(uParam0) == 0)
	{
		if (__LIB_0__::func_607(&uVar22))
		{
			if (__LIB_9__::func_325(uParam0, &uVar22))
			{
				return 3;
			}
		}
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(Var0.f_4) && iParam1 == 3)
	{
		if (!func_141())
		{
			return 4;
		}
		if (func_82(uParam0) == 0)
		{
			if (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, iParam1, 1, 0)))
			{
				return 4;
			}
		}
		else if (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 2, 1, 0)))
		{
			return 4;
		}
	}
	return 0;
}

bool func_132(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = 1000849983; /* GXTEntry: "Equip to Melee" */
			return true;
		case 3:
			*uParam1 = -327947319; /* GXTEntry: "Equip Off-Hand Sidearm" */
			return true;
		case 2:
			*uParam1 = 1588146127; /* GXTEntry: "Equip Sidearm" */
			return true;
		case 7:
		case 9:
			*uParam1 = 297513196; /* GXTEntry: "Equip to Back" */
			return true;
		case 8:
		case 10:
			*uParam1 = 108789798; /* GXTEntry: "Equip to Shoulder" */
			return true;
		default:
			break;
	}
	return false;
}

bool func_133(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = 941907253;
			return true;
		case 3:
			*uParam1 = -1756222973;
			return true;
		case 2:
			*uParam1 = -1313710397;
			return true;
		case 9:
			*uParam1 = 1554581363;
			return true;
		case 10:
			*uParam1 = -946029012;
			return true;
		case 7:
			*uParam1 = -466398939;
			return true;
		case 8:
			*uParam1 = -260514364;
			return true;
		default:
			break;
	}
	return false;
}

int func_134(var uParam0)
{
	struct<10> Var0;
	if (!__LIB_0__::func_607(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(__LIB_0__::func_162(0), uParam0, &Var0, 22, 1))
	{
		return 2;
	}
	if (func_82(uParam0) == 2)
	{
		return 3;
	}
	if (func_82(uParam0) == 0)
	{
		switch (func_143(uParam0))
		{
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 4;
		}
	}
	return 0;
}

int func_135(var uParam0)
{
	struct<10> Var0;
	if (!__LIB_0__::func_607(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(__LIB_0__::func_162(0), uParam0, &Var0, 22, 1))
	{
		return 1;
	}
	if (func_82(uParam0) == 1)
	{
		return 3;
	}
	if (WEAPON::_IS_WEAPON_MELEE(Var0.f_4))
	{
		return 5;
	}
	if (func_82(uParam0) == 0)
	{
		switch (func_143(uParam0))
		{
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 4;
		}
	}
	return 0;
}

bool func_136(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("MENU_ICON_HOLSTER");
			return true;
		case 1:
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("MENU_ICON_ON_HORSE");
			return true;
		case 2:
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = -229529296;
			return true;
		default:
			break;
	}
	return false;
}

bool func_141()
{
	if (!__LIB_0__::func_293(24))
	{
		return false;
	}
	if (func_147() < 2)
	{
		return false;
	}
	return true;
}

int func_143(var uParam0)
{
	struct<15> Var0;
	int iVar22;
	var uVar23;
	struct<10> Var27;
	if (!__LIB_0__::func_607(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(__LIB_0__::func_162(0), uParam0, &Var0, 22, 1))
	{
		return 2;
	}
	iVar22 = Var0.f_14;
	if (WEAPON::_IS_WEAPON_ONE_HANDED(Var0.f_4))
	{
		WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_35, 2, &uVar23);
		Var27.f_9 = -1591664384;
		INVENTORY::_0x025A1B1FB03FBF61(__LIB_0__::func_162(0), &uVar23, &Var27, 22, 1);
		if (iVar22 == 3)
		{
			if (!__LIB_0__::func_154(Var27.f_4) || func_80(Var27.f_4, Var27.f_9))
			{
				return 3;
			}
		}
		if (iVar22 == 2)
		{
			return 3;
		}
	}
	else if (WEAPON::_IS_WEAPON_MELEE(Var0.f_4))
	{
		if (iVar22 == 4)
		{
			return 3;
		}
	}
	return 0;
}

int func_147()
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
		__LIB_17__::func_701(iVar0);
	}
	return iVar3;
}

