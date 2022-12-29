#region Local Var
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	struct<27> Var0;
	Var0.f_5 = 1;
	Var0.f_9 = 1;
	Var0.f_22 = 37709;
	Var0.f_1 = ScriptParam_0.f_1;
	Var0.f_2 = ScriptParam_0.f_3;
	Var0.f_3 = ScriptParam_0.f_4;
	Global_1935689.f_8 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_18__::func_222(&Var0, 5);
	}
	if (!__LIB_2__::func_591(Var0.f_1, 1, 0))
	{
		__LIB_10__::func_10(&Var0);
	}
	PLAYER::_0x76F7E1BCD623A429(PLAYER::GET_PLAYER_INDEX());
	func_4(&Var0);
	while (true)
	{
		if (__LIB_10__::func_3(&Var0))
		{
			__LIB_18__::func_222(&Var0, 5);
		}
		if (!Var0.f_5)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::_0x1D46B417F926D34D(Global_35))
			{
				__LIB_18__::func_222(&Var0, 5);
			}
		}
		switch (__LIB_0__::func_81(&Var0))
		{
			case 0:
				if (__LIB_9__::func_493(&Var0))
				{
					__LIB_0__::func_108(&Var0);
				}
				Var0.f_25 = __LIB_1__::func_372(Global_35, 0);
				Var0.f_26 = __LIB_9__::func_998(Var0.f_25);
				if (Global_1935496.f_31 == Var0.f_1 || Global_1935496.f_32 == Var0.f_1)
				{
					if (!Global_1935630.f_12)
					{
						if ((Var0.f_25 != joaat("WEAPON_UNARMED") && Var0.f_26 != joaat("GROUP_PISTOL")) && Var0.f_26 != joaat("GROUP_REVOLVER"))
						{
							WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
						}
						else
						{
							__LIB_18__::func_222(&Var0, 1);
						}
					}
				}
				break;
			case 1:
				if (__LIB_9__::func_493(&Var0))
				{
					__LIB_0__::func_108(&Var0);
				}
				__LIB_10__::func_4(&Var0);
				__LIB_10__::func_5(Var0.f_1);
				__LIB_18__::func_222(&Var0, 2);
				break;
			case 2:
				if (__LIB_9__::func_493(&Var0))
				{
					__LIB_0__::func_108(&Var0);
				}
				if (__LIB_10__::func_6(&Var0))
				{
					__LIB_4__::func_896(0);
					Var0.f_24 = MISC::GET_GAME_TIMER();
					__LIB_18__::func_222(&Var0, 3);
				}
				break;
			case 3:
				if (__LIB_9__::func_493(&Var0))
				{
					if (!Var0.f_3)
					{
						__LIB_10__::func_7(&Var0);
						__LIB_10__::func_8(&Var0);
						__LIB_0__::func_108(&Var0);
					}
					else
					{
						__LIB_0__::func_108(&Var0);
						__LIB_18__::func_222(&Var0, 4);
					}
				}
				if (((Var0.f_13 && TASK::PED_HAS_USE_SCENARIO_TASK(Global_35)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, Var0.f_16, Var0.f_18, 1)) || MISC::GET_GAME_TIMER() >= Var0.f_24 + 10000)
				{
					func_17(Var0.f_1, 1, 0, -142743235, 0);
					__LIB_10__::func_9(&Var0);
					__LIB_18__::func_222(&Var0, 4);
				}
				break;
			case 4:
				if (__LIB_9__::func_493(&Var0))
				{
					__LIB_0__::func_108(&Var0);
				}
				if (!func_19(&Var0))
				{
					__LIB_18__::func_222(&Var0, 5);
					HUD::_0xBFFF81E12A745A5F();
				}
				break;
			case 5:
				if (__LIB_9__::func_493(&Var0))
				{
					__LIB_0__::func_108(&Var0);
				}
				__LIB_10__::func_10(&Var0);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_4(var uParam0)
{
	uParam0->f_12 = 1;
	uParam0->f_13 = 1;
	if (uParam0->f_1 == joaat("CONSUMABLE_HERBIVORE_BAIT"))
	{
		uParam0->f_14 = joaat("WORLD_PLAYER_PLACE_BAIT_NORMAL");
	}
	else
	{
		uParam0->f_14 = joaat("WORLD_PLAYER_PLACE_BAIT_POTENT");
	}
	uParam0->f_5 = 0;
}

int func_17(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = __LIB_2__::func_465(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_2__::func_591(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) < 0)
		{
			func_17(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!__LIB_2__::func_481(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_4__::func_105(iParam0, iParam1);
	return 1;
}

bool func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = 1;
	if (uParam0->f_3)
	{
		iVar0 = 2;
	}
	if ((!uParam0->f_13 && __LIB_10__::func_1(Global_35, uParam0->f_16, uParam0->f_18, 0, iVar0)) || (uParam0->f_13 && !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35)))
	{
		if (!uParam0->f_10)
		{
			if (__LIB_9__::func_999(uParam0->f_19))
			{
				TASK::TASK_PLAY_ANIM(Global_35, uParam0->f_16, uParam0->f_19, 1000f, -4f, -1, 67108880, 0f, false, 4096, false, uParam0->f_20, false);
				uParam0->f_10 = 1;
			}
			else
			{
				return false;
			}
		}
		else if (__LIB_10__::func_1(Global_35, uParam0->f_16, uParam0->f_19, 0, iVar0))
		{
			return false;
		}
	}
	__LIB_10__::func_2(uParam0);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")) && !uParam0->f_6)
	{
		uParam0->f_6 = 1;
		__LIB_18__::func_223(uParam0->f_1, 1);
		func_40(uParam0);
		HUD::_0x2F7BB105144ACF30();
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("ATTACH")) && !uParam0->f_7)
	{
		uParam0->f_7 = 1;
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_4, true);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("DETACH")) && uParam0->f_7)
	{
		uParam0->f_7 = 0;
		ENTITY::DETACH_ENTITY(uParam0->f_4, true, true);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 303244851))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE"), true, 0, false, false);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1971578095))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2007785590))
	{
		ENTITY::DETACH_ENTITY(uParam0->f_4, true, true);
		if (uParam0->f_22 == 37709)
		{
			iVar1 = 7966;
		}
		else
		{
			iVar1 = 37709;
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_4, Global_35, PED::GET_PED_BONE_INDEX(Global_35, iVar1), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, false, false);
	}
	return true;
}

void func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = PED::_0x4D0D2E3D8BC000EB(Global_35, "bait01", 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (uParam0->f_1 == joaat("CONSUMABLE_HERBIVORE_BAIT"))
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 1;
		}
		EVENT::_0x36D0F2BA2C0D9BDE(iVar0, iVar1);
		OBJECT::_0xCAAF2BCCFEF37F77(iVar0, 4);
		if (__LIB_0__::func_2() == -1)
		{
			Global_1392040.f_9 = iVar0;
		}
	}
	__LIB_1__::func_240(336, 0);
}

