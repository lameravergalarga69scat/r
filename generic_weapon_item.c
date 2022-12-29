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
	struct<17> Local_9 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0));
	func_1(&iVar0);
	bVar1 = func_2();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3();
	}
	AUDIO::_0x6339C1EA3979B5F7("weapon", "Inspect_Item_Scenes");
	while (func_4())
	{
		WEAPON::_0x000FA7A4A8443AF7(ScriptParam_0.f_1);
		if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Local_9.f_5))
		{
			iVar2 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35);
			if (iVar2 == joaat("LONGARM_HOLD") || iVar2 == joaat("SHORTARM_HOLD"))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Local_9.f_5, 1);
			}
		}
		if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Local_9.f_5))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
		}
		switch (func_5())
		{
			case 0:
				if (!bVar1)
				{
					bVar1 = func_2();
				}
				else
				{
					func_6(1);
				}
				break;
			case 1:
				func_7();
				if (TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35) == joaat("LONGARM_CLEAN_ENTER") || TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35) == joaat("SHORTARM_CLEAN_ENTER"))
				{
					func_8(joaat("KIT_GUN_OIL"), 1, 0, -142743235, 0);
					func_6(2);
				}
				break;
			case 2:
				func_6(3);
				break;
			case 3:
				if (TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35) == joaat("LONGARM_CLEAN_EXIT") || TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35) == joaat("SHORTARM_CLEAN_EXIT"))
				{
					func_6(4);
				}
				else
				{
					fVar3 = TASK::_0xBC864A70AD55E0C1(Global_35, joaat("INPUT_CONTEXT_X"));
					if (fVar3 > 0f)
					{
						fVar4 = WEAPON::_0xD56E5F336C675EFA(iVar0);
						fVar5 = ((Local_9.f_11 + fVar4) - (fVar3 * Local_9.f_11));
						fVar7 = ((Local_9.f_13 + fVar4) - (fVar3 * Local_9.f_13));
						fVar6 = (Local_9.f_12 - (fVar3 * Local_9.f_12));
						fVar8 = (Local_9.f_14 - (fVar3 * Local_9.f_14));
						WEAPON::_SET_WEAPON_DEGRADATION(iVar0, fVar5);
						WEAPON::_SET_WEAPON_DAMAGE(iVar0, fVar7, false);
						WEAPON::_SET_WEAPON_DIRT(iVar0, fVar6, false);
						WEAPON::_SET_WEAPON_SOOT(iVar0, fVar8, false);
						func_9(iVar0);
					}
				}
				break;
			case 4:
				func_10(iVar0);
				func_6(1);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_3();
}

void func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<4> Var6;
	struct<4> Var11;
	Local_9 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(joaat("PM_FLOW_WEAPON_INSPECT"));
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_9.f_1))
	{
		iVar1 = __LIB_7__::func_644();
		WEAPON::GET_CURRENT_PED_WEAPON(iVar1, &iVar0, true, 0, false);
		Var2 = { __LIB_0__::func_217() };
		if (!__LIB_9__::func_325(&(Global_1935496.f_55), &Var2))
		{
			Local_9.f_7 = { Global_1935496.f_55 };
		}
		else
		{
			Var6 = { __LIB_2__::func_3(iVar0, 0, 0) };
			Local_9.f_7 = { __LIB_0__::func_429(iVar0, Var6, -1591664384, 0) };
		}
		Global_1935496.f_55 = { Var2 };
		Var11 = { Local_9.f_7 };
		Local_9.f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "ItemInspection");
		Local_9.f_5 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Local_9.f_1, "Visible", 0);
		Local_9.f_2 = INVENTORY::_0x46DB71883EE9D5AF(Local_9.f_1, "stats", &Var11, iVar1);
		Local_9.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(Local_9.f_1, "itemLabel", func_16(iVar0, *iParam0));
		Local_9.f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Local_9.f_1, "tipText", func_17(iParam0));
		Local_9.f_11 = __LIB_0__::func_251((WEAPON::_GET_WEAPON_DEGRADATION(*iParam0) - WEAPON::_0xD56E5F336C675EFA(*iParam0)), 0f, 1f);
		Local_9.f_13 = __LIB_0__::func_251((WEAPON::_GET_WEAPON_DAMAGE(*iParam0) - WEAPON::_0xD56E5F336C675EFA(*iParam0)), 0f, 1f);
		Local_9.f_12 = WEAPON::_GET_WEAPON_DIRT(*iParam0);
		Local_9.f_14 = WEAPON::_GET_WEAPON_SOOT(*iParam0);
	}
	HUD::_HIDE_HUD_COMPONENT(-1847602092);
}

int func_2()
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(Local_9))
	{
		return 0;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(Local_9, 0);
	if (!UISTATEMACHINE::_UISTATEMACHINE_EXISTS(-813354801))
	{
		if (!UISTATEMACHINE::_UISTATEMACHINE_CREATE(-813354801, Local_9))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_3()
{
	AUDIO::_0x9428447DED71FC7E("Inspect_Item_Scenes");
	UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&Local_9);
	Local_9 = 0;
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_9.f_1);
	HUD::_DISPLAY_HUD_COMPONENT(-1847602092);
	if (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_4()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		return false;
	}
	if (!TASK::_0x038B1F1674F0E242(Global_35))
	{
		return false;
	}
	if ((!PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "isInspecting") && !PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "inInspectionMode")) && !Global_1935496.f_8)
	{
		return false;
	}
	if (__LIB_2__::func_800())
	{
		return false;
	}
	return true;
}

int func_5()
{
	return Local_9.f_6;
}

void func_6(int iParam0)
{
	Local_9.f_6 = iParam0;
}

void func_7()
{
	int iVar0;
	iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0));
	if (__LIB_2__::func_591(joaat("KIT_GUN_OIL"), 1, 0) && (WEAPON::_GET_WEAPON_DEGRADATION(iVar0) != 0f && WEAPON::_GET_WEAPON_DEGRADATION(iVar0) > WEAPON::_0xD56E5F336C675EFA(iVar0)))
	{
		if (!PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE"))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE", true, -1);
		}
	}
	else
	{
		if (PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE"))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_WEAPON_CLEAN_PROMPT_AVAILABLE", false, -1);
		}
		if ((!__LIB_0__::func_296(0, 0, 1) && !__LIB_2__::func_454()) && __LIB_0__::func_463())
		{
			if ((!Local_9.f_15 && WEAPON::_0xD56E5F336C675EFA(iVar0) > 0f) && WEAPON::_GET_WEAPON_DEGRADATION(iVar0) <= WEAPON::_0xD56E5F336C675EFA(iVar0))
			{
				__LIB_0__::func_45("WEAPON_PERM_DEGREDATION", 10000, 0, 0, 0, 1);
				Local_9.f_15 = 1;
			}
			if (!Local_9.f_16 && !__LIB_2__::func_591(joaat("KIT_GUN_OIL"), 1, 0))
			{
				__LIB_0__::func_45("NO_GUN_OIL", 10000, 0, 0, 0, 1);
				Local_9.f_16 = 1;
			}
		}
	}
}

int func_8(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_8(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_7__::func_644();
	WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, true, 0, false);
	INVENTORY::_0x951847CEF3D829FF(Local_9.f_2, &(Local_9.f_7), iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Local_9.f_3, func_16(iVar1, iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Local_9.f_4, func_17(&iParam0));
}

void func_10(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	WEAPON::_SET_WEAPON_DEGRADATION(iParam0, WEAPON::_0xD56E5F336C675EFA(iParam0));
	WEAPON::_SET_WEAPON_DAMAGE(iParam0, WEAPON::_0xD56E5F336C675EFA(iParam0), false);
	WEAPON::_SET_WEAPON_DIRT(iParam0, 0f, false);
	WEAPON::_SET_WEAPON_SOOT(iParam0, 0f, false);
	func_9(iParam0);
}

int func_16(int iParam0, int iParam1)
{
	char cVar0[64];
	StringCopy(&cVar0, WEAPON::_GET_WEAPON_NAME(iParam0), 64);
	if (WEAPON::_0xD56E5F336C675EFA(iParam1) > 0f)
	{
		StringCopy(&cVar0, WEAPON::_0x7A56D66C78D8EF8E(iParam0, WEAPON::_0xD56E5F336C675EFA(iParam1)), 64);
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

char* func_17(int iParam0)
{
	float fVar0;
	float fVar1;
	fVar0 = WEAPON::_GET_WEAPON_DEGRADATION(*iParam0);
	fVar1 = WEAPON::_0xD56E5F336C675EFA(*iParam0);
	if (fVar0 == 0f)
	{
		return HUD::_GET_LABEL_TEXT_BY_HASH(1803343570 /* GXTEntry: "Weapon is clean" */);
	}
	if (fVar1 > 0f && fVar0 == fVar1)
	{
		return HUD::_GET_LABEL_TEXT_BY_HASH(-1933427003 /* GXTEntry: "Weapon cannot be cleaned further" */);
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(-54957657 /* GXTEntry: "Weapon needs cleaning" */);
}

