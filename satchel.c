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
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	PED::SET_PED_RESET_FLAG(Global_35, 304, true);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!PED::IS_PED_IN_ANY_BOAT(Global_35))
		{
			iVar0 = __LIB_1__::func_372(Global_35, 0);
			if ((iVar0 != joaat("WEAPON_UNARMED") && iVar0 != joaat("WEAPON_MELEE_TORCH")) && iVar0 != joaat("WEAPON_FISHINGROD"))
			{
				if (Global_36605 != 0)
				{
				}
				else
				{
					WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_35, 0, &Global_36606);
				}
			}
			iVar1 = __LIB_1__::func_372(Global_35, 1);
			if (WEAPON::_IS_WEAPON_REVOLVER(iVar1) || WEAPON::_IS_WEAPON_PISTOL(iVar1))
			{
				if (Global_36605 != 0)
				{
				}
				else
				{
					WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_35, 1, &Global_36610);
				}
			}
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
		}
		else
		{
			Global_36606 = { __LIB_0__::func_217() };
			Global_36610 = { __LIB_0__::func_217() };
		}
	}
	Global_1935689.f_10226 = 0;
	Global_1935689.f_10227 = 0;
	iVar2 = joaat("INGAME");
	if (__LIB_4__::func_807(0))
	{
		iVar2 = joaat("SHOP");
	}
	while (true)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 304, true);
		switch (func_5())
		{
			case 0:
				if (func_6())
				{
					func_7();
				}
				if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("SATCHEL"), iVar2) != 0)
				{
				}
				else
				{
					func_8(1);
				}
				break;
			case 1:
				if (func_6())
				{
					func_7();
				}
				if (((!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SATCHEL")) || Global_1935689 == 2) || Global_16) || PED::IS_PED_DEAD_OR_DYING(Global_35, true))
				{
					func_8(2);
				}
				else if (__LIB_0__::func_2() != -1)
				{
				}
				else
				{
					__LIB_14__::func_449();
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
				break;
			case 2:
				if (func_6())
				{
					func_7();
					func_1();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	UIAPPS::_CLOSE_APP_BY_HASH(joaat("SATCHEL"));
	__LIB_3__::func_739(0);
	Global_1935689.f_1 = 0;
	Global_36633 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_5()
{
	return Global_1935689.f_10226;
}

bool func_6()
{
	return Global_1935689.f_10227;
}

void func_7()
{
	Global_1935689.f_10227 = 0;
}

void func_8(int iParam0)
{
	if (Global_1935689.f_10226 != iParam0)
	{
		Global_1935689.f_10226 = iParam0;
		func_12();
	}
}

void func_12()
{
	Global_1935689.f_10227 = 1;
}

