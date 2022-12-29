#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<47> Local_3 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
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
	int iLocal_85 = 0;
	int iLocal_86 = 0;
#endregion
void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) && !__LIB_0__::func_1(Global_1935630, 16384))
	{
		func_2(&Local_3);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_3(&Local_3))
	{
		BUILTIN::WAIT(0);
	}
	func_2(&Local_3);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_3.f_46))
	{
		MAP::REMOVE_BLIP(&(Local_3.f_46));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_85))
	{
		VOLUME::_DELETE_VOLUME(iLocal_85);
	}
	ITEMSET::DESTROY_ITEMSET(iLocal_70);
	ITEMSET::DESTROY_ITEMSET(iLocal_69);
	ITEMSET::DESTROY_ITEMSET(iLocal_71);
	ITEMSET::DESTROY_ITEMSET(iLocal_72);
	PED::_0x7D4E70A67A651C71(uParam0->f_49);
}

bool func_3(var uParam0)
{
	if (Global_1391438.f_414 != 1784895540 || !__LIB_0__::func_272(Global_35, 0))
	{
		return true;
	}
	switch (uParam0->f_56)
	{
		case 0:
			if (Global_1391438.f_414 == 1784895540)
			{
				uParam0->f_56 = 1;
			}
			break;
		case 1:
			if (func_5(&Local_3))
			{
				__LIB_1__::func_283(&uLocal_76, 1);
				uParam0->f_56 = 2;
			}
			break;
		case 2:
			if (!func_7(uParam0, 32768))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, __LIB_0__::func_559(__LIB_9__::func_842()), true, 0))
				{
					if (!__LIB_3__::func_703(0))
					{
						__LIB_2__::func_478(Global_35, uParam0->f_45, "ACT_HUNTING_PLAYER_TARGET_ASK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_12(uParam0, 32768, 1);
					}
				}
			}
			if (!func_7(uParam0, 16384) && func_7(uParam0, 32768))
			{
				if (!__LIB_3__::func_703(0))
				{
					__LIB_2__::func_478(uParam0->f_45, Global_35, func_13(*uParam0), __LIB_5__::func_690(Global_1391438.f_414.f_2, 0), -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_12(uParam0, 16384, 1);
				}
			}
			func_15(uParam0);
			if (uParam0->f_48 >= 100)
			{
				uParam0->f_56 = 9;
			}
			if (VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_51, Global_36))
			{
				uParam0->f_46 = MAP::_0xA6EF0C54A3443E70(1247852480, uParam0->f_51);
				__LIB_2__::func_478(uParam0->f_45, Global_35, "ACT_HUNTING_ARRIVAL", __LIB_5__::func_690(Global_1391438.f_414.f_2, 0), -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				uParam0->f_56 = 3;
			}
			break;
		case 3:
			__LIB_1__::func_283(&(uParam0->f_60), 1);
			uParam0->f_56 = 5;
			break;
		case 5:
			func_15(uParam0);
			if (uParam0->f_48 >= 100)
			{
				__LIB_1__::func_283(&uLocal_79, 1);
				uParam0->f_56 = 9;
			}
			if (__LIB_0__::func_264(&(uParam0->f_60)) > 500f)
			{
				uParam0->f_56 = 10;
			}
			break;
		case 6:
			break;
		case 9:
			if (!__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_LOOT_ENTITY")) && __LIB_1__::func_285(&uLocal_79, 3f))
			{
				if (!func_7(uParam0, 1024))
				{
					__LIB_2__::func_478(uParam0->f_45, Global_35, "ACT_HUNTING_SUCCESS", __LIB_5__::func_690(Global_1391438.f_414.f_2, 0), -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_12(uParam0, 1024, 1);
				}
				return true;
			}
			break;
		case 10:
			if (!func_7(uParam0, 1024))
			{
				__LIB_2__::func_478(uParam0->f_45, Global_35, "ACT_HUNTING_FAILURE", __LIB_5__::func_690(Global_1391438.f_414.f_2, 0), -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_12(uParam0, 1024, 1);
			}
			return true;
	}
	return false;
}

bool func_5(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	var uVar4;
	var uVar5;
	switch (uParam0->f_57)
	{
		case 0:
			uParam0->f_57 = 1;
			break;
		case 1:
			*uParam0 = func_20();
			uParam0->f_53 = { Global_1391438.f_414.f_37 };
			fVar0 = 50f;
			uParam0->f_51 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_53, 0f, 0f, 0f, fVar0, fVar0, 20f, "Hunting Grounds");
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_51))
			{
				uParam0->f_57 = 2;
			}
			break;
		case 2:
			Global_1391438.f_414.f_42 = uParam0->f_51;
			func_21(&vVar1, &uVar4);
			__LIB_0__::func_568(vVar1, 300f, 0);
			__LIB_1__::func_867(&uVar5, 5);
			__LIB_1__::func_867(&uVar5, 0);
			__LIB_1__::func_867(&uVar5, 20);
			__LIB_1__::func_867(&uVar5, 23);
			iLocal_85 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_36, 0f, 0f, 0f, 50f, 50f, 20f, "hunting behaviour vol");
			PED::_0x7C00CFC48A782DC0(iLocal_85, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			COMPANION::_0x3CAAD93FA5B9579A(iLocal_85, 2, uVar5);
			uParam0->f_45 = __LIB_0__::func_271(Global_1391438.f_414.f_2);
			iLocal_69 = ITEMSET::CREATE_ITEMSET(true);
			iLocal_70 = ITEMSET::CREATE_ITEMSET(true);
			iLocal_71 = ITEMSET::CREATE_ITEMSET(true);
			iLocal_72 = ITEMSET::CREATE_ITEMSET(true);
			__LIB_1__::func_283(&uLocal_73, 1);
			__LIB_1__::func_283(&uLocal_82, 1);
			uParam0->f_57 = 3;
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_7(var uParam0, int iParam1)
{
	return (uParam0->f_59 && iParam1) != 0;
}

void func_12(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_59 = (uParam0->f_59 || iParam1);
	}
	else
	{
		uParam0->f_59 = (uParam0->f_59 && iParam1);
	}
}

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AT_GATOR"):
			return "ACT_HUNTING_TARGET_ALLIGATOR";
		case 1506237323: /* GXTEntry: "Bear" */
			return "ACT_HUNTING_TARGET_BEAR";
		case joaat("AT_BOAR"):
			return "ACT_HUNTING_TARGET_BOAR";
		case joaat("AT_BUCK"):
			return "ACT_HUNTING_TARGET_BUCK";
		case joaat("AT_COUGAR"):
			return "ACT_HUNTING_TARGET_COUGAR";
		case joaat("AT_DEER"):
			return "ACT_HUNTING_TARGET_DEER";
		case joaat("AT_DUCK"):
			return "ACT_HUNTING_TARGET_DUCK";
		case joaat("AT_ELK"):
			return "ACT_HUNTING_TARGET_ELK";
		case joaat("AT_WOLF"):
			return "ACT_HUNTING_TARGET_WOLF";
		default:
			break;
	}
	return "ACT_HUNTING_TARGET_GENERIC";
}

void func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!func_7(uParam0, 16384))
	{
		return;
	}
	if (__LIB_1__::func_871(&uLocal_73) >= 250)
	{
		func_36();
		__LIB_1__::func_283(&uLocal_73, 1);
	}
	if (!func_7(uParam0, 1048576))
	{
		if (uParam0->f_48 <= 0)
		{
			if (__LIB_0__::func_265(&uLocal_76) > 300f)
			{
				__LIB_2__::func_478(uParam0->f_45, Global_35, "ACT_HUNT_TRY_BAIT", __LIB_5__::func_690(Global_1391438.f_414.f_2, 0), -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_12(uParam0, 1048576, 1);
			}
		}
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(iLocal_70);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_70));
		if (__LIB_9__::func_229(iVar2, Global_35) || __LIB_9__::func_229(iVar2, uParam0->f_45))
		{
			if (!ITEMSET::IS_IN_ITEMSET(iVar2, iLocal_71))
			{
				__LIB_0__::func_45("ACT_HUNTING_KILLED_TARGET", 10000, 0, 0, 0, 1);
				ITEMSET::ADD_TO_ITEMSET(iVar2, iLocal_71);
				if (!__LIB_3__::func_703(0))
				{
					if (iLocal_86 == 0 && uParam0->f_48 < 100)
					{
						__LIB_2__::func_478(uParam0->f_45, Global_35, "ACT_HUNT_FIRST_TARGET_KILLED", __LIB_5__::func_690(Global_1391438.f_414.f_2, 0), -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_86 > 0 && uParam0->f_48 < 100)
					{
						__LIB_2__::func_478(uParam0->f_45, Global_35, "ACT_HUNT_TARGET_KILLED", __LIB_5__::func_690(Global_1391438.f_414.f_2, 0), -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uParam0->f_45, Global_35, "ACT_HUNT_LAST_TARGET_KILLED", __LIB_5__::func_690(Global_1391438.f_414.f_2, 0), -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iLocal_86++;
			}
			else if (!ITEMSET::IS_IN_ITEMSET(iVar2, iLocal_72))
			{
				if (ENTITY::_0x8DE41E9902E85756(iVar2))
				{
					ITEMSET::ADD_TO_ITEMSET(iVar2, iLocal_72);
					uParam0->f_48 = (uParam0->f_48 + func_40(uParam0, iVar2));
				}
			}
		}
		iVar1++;
	}
}

int func_20()
{
	int iVar0;
	iVar0 = __LIB_0__::func_317();
	switch (iVar0)
	{
		case 0:
			return joaat("AT_BUCK");
		case 1:
			return joaat("AT_FOX");
		case 2:
			return joaat("AT_DEER");
		case 3:
			return joaat("AT_DUCK");
		case 5:
			return joaat("AT_GATOR");
		case 6:
			return joaat("AT_COUGAR");
		case 7:
			return joaat("AT_BUCK");
		case 8:
			return 1506237323 /* GXTEntry: "Bear" */;
	}
	return joaat("AT_DEER");
}

int func_21(var uParam0, var uParam1)
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
			*uParam0 = { __LIB_2__::func_485(4) };
			*uParam1 = 0f;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_36()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = ENTITY::_0x59B57C4B06531E1E(Global_36, 150f, iLocal_69, 1);
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iLocal_69));
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (ENTITY::_0x9A100F1CF4546629(iVar3))
			{
				iVar4 = __LIB_3__::func_698(iVar3);
				if (iVar4 != joaat("AT_HORSE"))
				{
					if (!ITEMSET::IS_IN_ITEMSET(iVar3, iLocal_70))
					{
						ITEMSET::ADD_TO_ITEMSET(iVar3, iLocal_70);
						iVar1++;
					}
				}
			}
		}
		iVar2++;
	}
	ITEMSET::_CLEAR_ITEMSET(iLocal_69);
	return iVar1 > 0;
}

int func_40(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::_0x9A100F1CF4546629(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_3__::func_698(iParam1);
	if (func_62(iVar0))
	{
		return 100;
	}
	if (iVar0 == *uParam0)
	{
		if (__LIB_9__::func_841(iParam1, 0))
		{
			return 25;
		}
		else
		{
			return 50;
		}
	}
	else if (__LIB_9__::func_841(iParam1, 0))
	{
		return 15;
	}
	else
	{
		return 25;
	}
	return 50;
}

bool func_62(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AT_GATOR"):
		case joaat("AT_COUGAR"):
		case joaat("AT_BUCK"):
		case joaat("AT_ELK"):
		case 1506237323: /* GXTEntry: "Bear" */
			return true;
		default:
			break;
	}
	return false;
	return false;
}

