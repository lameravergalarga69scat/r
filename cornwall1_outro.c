#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	struct<6> Local_5[4];
	struct<4> Local_30 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_30);
	}
	func_2(&Local_30, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_30))
	{
		__LIB_5__::func_233(&Local_30);
		switch (__LIB_0__::func_57(Local_30))
		{
			case 0:
				if (func_6(&Local_30))
				{
					__LIB_0__::func_19(&Local_30, 1);
				}
				break;
			case 1:
				if (func_8(&Local_30))
				{
					__LIB_0__::func_19(&Local_30, 2);
				}
				break;
			case 2:
				if (func_9(&Local_30))
				{
					__LIB_0__::func_19(&Local_30, 3);
				}
				break;
			case 3:
				func_1(&Local_30);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_30);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_752();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_31(iVar1) && __LIB_0__::func_699(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (__LIB_1__::func_22(iVar1))
				{
					__LIB_1__::func_774(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_802(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		__LIB_4__::func_803(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		__LIB_4__::func_804(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		__LIB_4__::func_804(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

bool func_6(var uParam0)
{
	STREAMING::REQUEST_MODEL(joaat("S_M_M_CORNWALLGUARD_01"), false);
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_CORNWALLGUARD_01")))
	{
		return false;
	}
	return true;
}

bool func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_21(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_23(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_11(var uParam0)
{
	__LIB_0__::func_490(&(Local_5[0 /*6*/]), ENTITY::IS_ENTITY_DEAD(Local_5[0 /*6*/]));
	__LIB_0__::func_490(&(Local_5[1 /*6*/]), ENTITY::IS_ENTITY_DEAD(Local_5[1 /*6*/]));
	__LIB_0__::func_490(&(Local_5[2 /*6*/]), ENTITY::IS_ENTITY_DEAD(Local_5[2 /*6*/]));
	__LIB_0__::func_490(&(Local_5[3 /*6*/]), ENTITY::IS_ENTITY_DEAD(Local_5[3 /*6*/]));
	return 1;
}

void func_19(var uParam0)
{
	PED::_0xED9582B3DA8F02B4(4);
}

int func_21(var uParam0)
{
	if (func_44())
	{
		if (!PED::DOES_GROUP_EXIST(iLocal_3))
		{
			iLocal_3 = PED::CREATE_GROUP(0);
			PED::SET_GROUP_FORMATION(iLocal_3, 9);
		}
		PED::SET_PED_AS_GROUP_LEADER(Local_5[0 /*6*/], iLocal_3, false);
		PED::SET_PED_AS_GROUP_MEMBER(Local_5[1 /*6*/], iLocal_3);
		PED::SET_PED_CONFIG_FLAG(Local_5[1 /*6*/], 279, true);
		TASK::OPEN_PATROL_ROUTE("miss_cornwall1_01");
		TASK::ADD_PATROL_ROUTE_NODE(0, "", 1321.784f, -638.8179f, 60.7909f, 1322.784f, -638.8179f, 60.7909f, 9000, 0);
		TASK::ADD_PATROL_ROUTE_NODE(1, "", 1287.772f, -625.0335f, 59.4377f, 1286.772f, -624.0335f, 59.4377f, 6000, 0);
		TASK::ADD_PATROL_ROUTE_NODE(2, "", 1291.384f, -583.4655f, 68.9213f, 1291.384f, -582.4655f, 68.9213f, 12000, 0);
		TASK::ADD_PATROL_ROUTE_NODE(3, "", 1334.909f, -600.3217f, 74.7698f, 1335.909f, -599.3217f, 74.7698f, 9000, 0);
		TASK::ADD_PATROL_ROUTE_LINK(0, 1);
		TASK::ADD_PATROL_ROUTE_LINK(1, 2);
		TASK::ADD_PATROL_ROUTE_LINK(2, 3);
		TASK::ADD_PATROL_ROUTE_LINK(3, 0);
		TASK::CLOSE_PATROL_ROUTE();
		TASK::CREATE_PATROL_ROUTE();
		TASK::TASK_PATROL(Local_5[0 /*6*/], "miss_cornwall1_01", 1, true, true);
		if (!PED::DOES_GROUP_EXIST(iLocal_4))
		{
			iLocal_4 = PED::CREATE_GROUP(0);
			PED::SET_GROUP_FORMATION(iLocal_4, 9);
		}
		PED::SET_PED_AS_GROUP_LEADER(Local_5[2 /*6*/], iLocal_4, false);
		PED::SET_PED_AS_GROUP_MEMBER(Local_5[3 /*6*/], iLocal_4);
		PED::SET_PED_CONFIG_FLAG(Local_5[3 /*6*/], 279, true);
		TASK::OPEN_PATROL_ROUTE("miss_cornwall1_02");
		TASK::ADD_PATROL_ROUTE_NODE(0, "", 1259.567f, -599.2295f, 61.8549f, 1261.88f, -602.2684f, 61.2076f, 9000, 0);
		TASK::ADD_PATROL_ROUTE_NODE(1, "", 1214.321f, -608.605f, 69.2934f, 1214.321f, -608.605f, 69.2934f, 0, 0);
		TASK::ADD_PATROL_ROUTE_NODE(2, "", 1206.03f, -601.7572f, 69.9861f, 1205.03f, -601.7572f, 69.9861f, 12000, 0);
		TASK::ADD_PATROL_ROUTE_NODE(3, "", 1222.396f, -565.0325f, 66.9171f, 1221.577f, -562.2708f, 66.3934f, 9000, 0);
		TASK::ADD_PATROL_ROUTE_LINK(0, 1);
		TASK::ADD_PATROL_ROUTE_LINK(1, 2);
		TASK::ADD_PATROL_ROUTE_LINK(2, 3);
		TASK::ADD_PATROL_ROUTE_LINK(3, 0);
		TASK::CLOSE_PATROL_ROUTE();
		TASK::CREATE_PATROL_ROUTE();
		TASK::TASK_PATROL(Local_5[2 /*6*/], "miss_cornwall1_02", 1, true, true);
		return 1;
	}
	return 0;
}

bool func_23(var uParam0)
{
	return func_45();
}

bool func_44()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_5[iVar0 /*6*/]) && !__LIB_0__::func_1(Local_5[iVar0 /*6*/].f_5, 1))
		{
			if (iVar0 == 0)
			{
				Local_5[iVar0 /*6*/] = __LIB_1__::func_545(joaat("S_M_M_CORNWALLGUARD_01"), 1321.848f, -639.7525f, 60.6564f, 50.7916f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				PED::SET_PED_NAME_DEBUG(Local_5[iVar0 /*6*/], "Group01_01");
			}
			else if (iVar0 == 1)
			{
				Local_5[iVar0 /*6*/] = __LIB_1__::func_545(joaat("S_M_M_CORNWALLGUARD_01"), 1323.208f, -638.7339f, 61.351f, 52.7915f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				PED::SET_PED_NAME_DEBUG(Local_5[iVar0 /*6*/], "Group01_02");
			}
			else if (iVar0 == 2)
			{
				Local_5[iVar0 /*6*/] = __LIB_1__::func_545(joaat("S_M_M_CORNWALLGUARD_01"), 1231.225f, -479.1585f, 82.4746f, 181.6388f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				PED::SET_PED_NAME_DEBUG(Local_5[iVar0 /*6*/], "Group02_01");
			}
			else if (iVar0 == 3)
			{
				Local_5[iVar0 /*6*/] = __LIB_1__::func_545(joaat("S_M_M_CORNWALLGUARD_01"), 1229.978f, -478.3989f, 82.5741f, 186.8161f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				PED::SET_PED_NAME_DEBUG(Local_5[iVar0 /*6*/], "Group02_02");
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_5[iVar0 /*6*/], joaat("REL_PLAYER_ENEMY"));
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_5[iVar0 /*6*/], 46, true);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_5[iVar0 /*6*/], 512, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_5[iVar0 /*6*/], 35, true);
			ENTITY::_0x18FF3110CF47115D(Local_5[iVar0 /*6*/], 0, 0);
			PED::_0xAE6004120C18DF97(Local_5[iVar0 /*6*/], 0, 0);
			ENTITY::_0x18FF3110CF47115D(Local_5[iVar0 /*6*/], 1, 0);
			ENTITY::_0x18FF3110CF47115D(Local_5[iVar0 /*6*/], 2, 0);
			PED::_SET_PED_BLACKBOARD_FLOAT(Local_5[iVar0 /*6*/], "searching_high_energy_indirect", 1f, -1);
			PED::_0x9238A3D970BBB0A9(Local_5[iVar0 /*6*/], -820192119);
			PED::_0x00B380FF2DF6AB7A(Local_5[iVar0 /*6*/], 2);
			PED::SET_PED_SEEING_RANGE(Local_5[iVar0 /*6*/], 50f);
			PED::SET_PED_ID_RANGE(Local_5[iVar0 /*6*/], 20f);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_5[iVar0 /*6*/], true, true);
			__LIB_2__::func_231(Local_5[iVar0 /*6*/], joaat("WEAPON_MELEE_LANTERN"), 1, 0, 1, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			__LIB_2__::func_231(Local_5[iVar0 /*6*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 0, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			__LIB_0__::func_7(&(Local_5[iVar0 /*6*/].f_5), 1);
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_45()
{
	int iVar0;
	struct<28> Var1;
	var uVar29;
	int iVar30;
	bool bVar31;
	Var1.f_8 = -1;
	Var1.f_17 = 1097859072;
	Var1.f_18 = 1000;
	Var1.f_19 = 1067450368;
	Var1.f_20 = 5000;
	Var1.f_21 = 42;
	Var1.f_22 = 1103626240;
	Var1.f_23 = 1077936128;
	Var1.f_24 = 1106247680;
	Var1.f_25 = 1103101952;
	Var1.f_26 = 1097859072;
	Var1.f_27 = 1103626240;
	bVar31 = true;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_5[iVar0 /*6*/]))
		{
			if (bVar31 && __LIB_0__::func_48(Local_5[iVar0 /*6*/], Global_35, 200f, 1))
			{
				bVar31 = false;
			}
			if (!MAP::DOES_BLIP_EXIST(Local_5[iVar0 /*6*/].f_1))
			{
				Local_5[iVar0 /*6*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_5[iVar0 /*6*/]);
				MAP::_BLIP_SET_MODIFIER(Local_5[iVar0 /*6*/].f_1, -1034486097);
			}
			if (!__LIB_0__::func_1(Local_5[iVar0 /*6*/].f_5, 2))
			{
				__LIB_1__::func_403(&Var1, 0);
				__LIB_8__::func_731(&Var1, 0);
				if (func_69(Local_5[iVar0 /*6*/], 0, &Var1, &uVar29, 0, 0) || __LIB_8__::func_819(Local_5[iVar0 /*6*/], &Var1, &uVar29, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar30);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar30);
					TASK::_TASK_PERFORM_SEQUENCE_2(Local_5[iVar0 /*6*/], iVar30, 0.6f, 1.2f);
					TASK::CLEAR_SEQUENCE_TASK(&iVar30);
					__LIB_0__::func_7(&(Local_5[iVar0 /*6*/].f_5), 2);
				}
			}
		}
		iVar0++;
	}
	if (bVar31)
	{
	}
	return bVar31;
}

int func_69(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
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
			if (__LIB_2__::func_895(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_882(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (__LIB_2__::func_874(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_2__::func_896(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_897(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
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
					return 1;
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
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

