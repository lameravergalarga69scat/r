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
	struct<4> Local_14 = { 0, 0, 0, 0 } ;
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
		func_1(&Local_14);
	}
	func_2(&Local_14, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_14))
	{
		__LIB_5__::func_233(&Local_14);
		switch (__LIB_0__::func_57(Local_14))
		{
			case 0:
				if (__LIB_11__::func_71(&Local_14))
				{
					__LIB_0__::func_19(&Local_14, 1);
				}
				break;
			case 1:
				if (func_8(&Local_14))
				{
					__LIB_0__::func_19(&Local_14, 2);
				}
				break;
			case 2:
				if (func_9(&Local_14))
				{
					__LIB_0__::func_19(&Local_14, 3);
				}
				break;
			case 3:
				func_1(&Local_14);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_14);
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
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	return 1;
}

void func_19(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = ANIMSCENE::_CREATE_ANIM_SCENE("script@timelapse@mar8_timelapse", 2, 0, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2);
	}
}

int func_21(var uParam0)
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2, false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_2, false))
	{
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_2);
	}
	__LIB_0__::func_7(&Global_1935630, 1048576);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	return 1;
}

bool func_23(var uParam0)
{
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	if (__LIB_0__::func_1(Global_1935630, 1048576))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_2) >= ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_2))
		{
			__LIB_0__::func_8(&Global_1935630, 1048576);
		}
	}
	else
	{
		return Global_16;
	}
	return false;
}

