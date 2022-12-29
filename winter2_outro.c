#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	struct<4> Local_12 = { 0, 0, 0, 0 } ;
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
		func_1(&Local_12);
	}
	func_2(&Local_12, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_12))
	{
		__LIB_5__::func_233(&Local_12);
		switch (__LIB_0__::func_57(Local_12))
		{
			case 0:
				if (func_6(&Local_12))
				{
					__LIB_0__::func_19(&Local_12, 1);
				}
				break;
			case 1:
				if (func_8(&Local_12))
				{
					__LIB_0__::func_19(&Local_12, 2);
				}
				break;
			case 2:
				if (func_9(&Local_12))
				{
					__LIB_0__::func_19(&Local_12, 3);
				}
				break;
			case 3:
				func_1(&Local_12);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_12);
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
	if (!__LIB_0__::func_75(&uLocal_8))
	{
		__LIB_1__::func_283(&uLocal_8, 0);
	}
	if (((STREAMING::_0xCF45DF50C7775F2A() && STREAMING::_0x0909F71B5C070797()) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_4, true, false)) || __LIB_0__::func_265(&uLocal_8) > 15f)
	{
		__LIB_1__::func_283(&uLocal_5, 0);
		return true;
	}
	return false;
}

bool func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_24(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_26(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_11(var uParam0)
{
	var uVar0;
	bool bVar1;
	__LIB_8__::func_730(74);
	__LIB_1__::func_725();
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_4))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_4);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	__LIB_5__::func_430(&uVar0, 0);
	GRAPHICS::_0xEB48CE48EEC41FD4(__LIB_0__::func_27(iLocal_3, 16));
	STREAMING::_0x5A8B01199C3E79C3();
	bVar1 = (DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT")) || DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT")));
	if (DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION")))
	{
		if (!bVar1)
		{
			if (DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION")))
			{
				__LIB_10__::func_905(626, 0);
			}
		}
		else
		{
			__LIB_10__::func_905(628, 0);
		}
	}
	else if (DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION")))
	{
		if (!bVar1)
		{
			__LIB_10__::func_905(625, 0);
		}
		else
		{
			__LIB_10__::func_905(628, 0);
		}
	}
	else if (bVar1)
	{
		__LIB_10__::func_905(627, 0);
	}
	return 1;
}

void func_19(var uParam0)
{
	__LIB_0__::func_37(&uLocal_5);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_4))
	{
		iLocal_4 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@wnt2@seated_journal", 0, "pbl_1", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_4);
	}
	__LIB_4__::func_253(joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"), joaat("CSTP_NEXT_VISIT"), joaat("CSTAG_PRIORITY_CRITICAL"), 8, 1, 1, 0);
	TASK::_0x4161648394262FDF(-1357.515f, 2443.633f, 307.4195f, 2f);
	STREAMING::_0x387AD749E3B69B70(-1351.26f, 2441.85f, 307.71f, -0.91f, 0.4f, 0.12f, 15f, 0);
	if (!PED::IS_PED_INJURED(Global_35))
	{
		PED::CLEAR_PED_ENV_DIRT(Global_35);
		PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, 10, "ALL");
		PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
		__LIB_17__::func_734(Global_35);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -1357.369f, 2443.642f, 307.4198f, 281.8427f, true, false, true);
	}
}

int func_24(var uParam0)
{
	int iVar0;
	HUD::_HIDE_HUD_COMPONENT(-1679307491);
	if (__LIB_0__::func_75(&uLocal_5) && __LIB_0__::func_265(&uLocal_5) >= 1f)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_4) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_4, true, false))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_4, "player_zero", Global_35, 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_4);
			iVar0 = 4;
			func_56(&iVar0, 0, 2, 0, 0, 0, 0);
			if (GRAPHICS::_0xC28F62AC9774FC1B())
			{
				__LIB_1__::func_683(&iLocal_3, 16);
			}
			else
			{
				__LIB_1__::func_681(&iLocal_3, 16);
			}
			GRAPHICS::_0xEB48CE48EEC41FD4(false);
			return 1;
		}
	}
	return 0;
}

bool func_26(var uParam0)
{
	CLOCK::SET_CLOCK_TIME(6, 0, 0);
	__LIB_1__::func_725();
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	if (!__LIB_0__::func_27(iLocal_3, 2))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	if (!__LIB_0__::func_27(iLocal_3, 1))
	{
		if (__LIB_12__::func_581(1, 0, 0))
		{
			__LIB_1__::func_683(&iLocal_3, 32);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_4))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_4, false))
		{
			if (!PED::IS_PED_INJURED(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			}
			if (!__LIB_0__::func_27(iLocal_3, 1))
			{
				STREAMING::_0x5A8B01199C3E79C3();
				CAM::DO_SCREEN_FADE_IN(0);
				__LIB_1__::func_683(&iLocal_3, 1);
			}
			if (!__LIB_0__::func_27(iLocal_3, 2))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_4, "player_zero"))
				{
					__LIB_1__::func_683(&iLocal_3, 2);
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_3, 8))
		{
			if ((__LIB_0__::func_30(iLocal_11) && __LIB_0__::func_269(iLocal_11)) || ((__LIB_0__::func_27(iLocal_3, 2) && __LIB_0__::func_27(iLocal_3, 4)) && __LIB_0__::func_27(iLocal_3, 1)))
			{
				__LIB_1__::func_683(&iLocal_3, 8);
			}
		}
		if (!__LIB_0__::func_27(iLocal_3, 4))
		{
			if (ANIMSCENE::_0xF94692EB9DC15D74(iLocal_4, 0) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_4, false))
			{
				__LIB_0__::func_105(1);
				iLocal_11 = __LIB_0__::func_45("TF_JOURNAL_ACCESS0", 10000, 0, 0, 1, 1);
				__LIB_1__::func_683(&iLocal_3, 4);
			}
		}
	}
	return (((__LIB_0__::func_27(iLocal_3, 2) && __LIB_0__::func_27(iLocal_3, 4)) && __LIB_0__::func_27(iLocal_3, 8)) && __LIB_0__::func_27(iLocal_3, 1));
}

void func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	if (Global_1935630.f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_0__::func_145(0, 0);
		__LIB_0__::func_146(-1);
	}
	__LIB_0__::func_87(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!__LIB_0__::func_1(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!__LIB_0__::func_1(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!__LIB_0__::func_1(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (__LIB_0__::func_1(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!__LIB_0__::func_1(*iParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!__LIB_0__::func_1(*iParam0, 4) && !__LIB_0__::func_1(*iParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*iParam0, 2048))
	{
		__LIB_0__::func_713(0, 0);
	}
	if (__LIB_0__::func_1(*iParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_0__::func_1(*iParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (__LIB_0__::func_1(*iParam0, 8192))
	{
		func_102();
	}
	if (!__LIB_0__::func_1(*iParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_1(*iParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!__LIB_0__::func_1(*iParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (__LIB_0__::func_147() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (__LIB_0__::func_86(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						__LIB_0__::func_634(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						__LIB_0__::func_148(2);
						__LIB_0__::func_149(-1);
						__LIB_0__::func_150(vVar3);
						__LIB_0__::func_151(__LIB_0__::func_23());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!__LIB_0__::func_1(*iParam0, 4096))
	{
		__LIB_0__::func_142(Global_35);
	}
	if (!__LIB_0__::func_1(*iParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 2097152))
	{
		if (__LIB_0__::func_704() || PED::_0x50F124E6EF188B22(Global_35))
		{
			__LIB_5__::func_431(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_102()
{
	int iVar0;
	iVar0 = __LIB_0__::func_153(Global_35, 9, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 7, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 1, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 18, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_664();
	if (__LIB_0__::func_154(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_2__::func_231(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_177(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_2__::func_231(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_177(int iParam0, int iParam1)
{
	var uVar0;
	return func_233(&uVar0, iParam0, iParam1);
}

int func_233(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || __LIB_0__::func_237(Var4.f_4)) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || __LIB_0__::func_27(iParam1, 4))) && (!__LIB_0__::func_237(Var4.f_4) || __LIB_0__::func_27(iParam1, 8))) && (!WEAPON::_IS_WEAPON_REPEATER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 8388608))) && (!WEAPON::_IS_WEAPON_RIFLE(Var4.f_4) || !__LIB_0__::func_27(iParam1, 1048576)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512) && !__LIB_0__::func_27(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_233(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

