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
	int iLocal_14 = 0;
	bool bLocal_15 = false;
	struct<4> Local_16 = { 0, 0, 0, 0 } ;
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
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_16);
	}
	func_2(&Local_16, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_16))
	{
		__LIB_5__::func_233(&Local_16);
		switch (__LIB_0__::func_57(Local_16))
		{
			case 0:
				if (func_6(&Local_16))
				{
					__LIB_0__::func_19(&Local_16, 1);
				}
				break;
			case 1:
				if (func_8(&Local_16))
				{
					__LIB_0__::func_19(&Local_16, 2);
				}
				break;
			case 2:
				if (func_9(&Local_16))
				{
					__LIB_0__::func_19(&Local_16, 3);
				}
				break;
			case 3:
				func_1(&Local_16);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_16);
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
	return HUD::_TEXT_DATABASE_HAS_LOADED("NTV1");
}

int func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return 0;
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
	HUD::_TEXT_DATABASE_DELETE("NTV1");
	return 1;
}

void func_19(var uParam0)
{
	HUD::_TEXT_DATABASE_REQUEST("NTV1");
}

int func_21(var uParam0)
{
	iLocal_14 = __LIB_1__::func_545(joaat("CS_RAINSFALL"), 1584.673f, 1460.016f, 145.623f, 240.1411f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_14, joaat("REL_GANG_DUTCHS"));
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_14, false);
	__LIB_0__::func_105(1);
	return 1;
}

bool func_23(var uParam0)
{
	if (!bLocal_15)
	{
		if (!__LIB_0__::func_104())
		{
			__LIB_0__::func_490(&iLocal_14, 0);
			bLocal_15 = true;
		}
	}
	if (bLocal_15 == 1 && !__LIB_0__::func_104())
	{
		return true;
	}
	return false;
}

