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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	struct<4> Local_17 = { 0, 0, 0, 0 } ;
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
		func_1(&Local_17);
	}
	func_2(&Local_17, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_17))
	{
		__LIB_5__::func_233(&Local_17);
		switch (__LIB_0__::func_57(Local_17))
		{
			case 0:
				if (__LIB_11__::func_71(&Local_17))
				{
					__LIB_0__::func_19(&Local_17, 1);
				}
				break;
			case 1:
				if (func_8(&Local_17))
				{
					__LIB_0__::func_19(&Local_17, 2);
				}
				break;
			case 2:
				if (func_9(&Local_17))
				{
					__LIB_0__::func_19(&Local_17, 3);
				}
				break;
			case 3:
				func_1(&Local_17);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_17);
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
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2);
	Global_1956614.f_5 = 1;
	return 1;
}

void func_19(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = ANIMSCENE::_CREATE_ANIM_SCENE("script@timelapse@gry2_timelapse", 0, "PBL_1", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2);
	}
}

int func_21(var uParam0)
{
	var uVar0;
	bool bVar1;
	CAM::DO_SCREEN_FADE_OUT(0);
	if (__LIB_1__::func_750(&uVar0))
	{
		__LIB_5__::func_429(joaat("KIT_BANDANA"), 0);
	}
	STREAMING::_0x513F8AA5BF2F17CF(646.8f, -1284.6f, 40.4f, 100f, 0);
	ENTITY::SET_ENTITY_COORDS(Global_35, 646.8f, -1284.6f, 40.4f, true, false, true, true);
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	__LIB_1__::func_725();
	__LIB_9__::func_391();
	bVar1 = true;
	if (!__LIB_9__::func_6(134, 0, 0, 0, 0))
	{
		bVar1 = false;
	}
	if (!__LIB_9__::func_6(138, 0, 0, 0, 0))
	{
		bVar1 = false;
	}
	if (!__LIB_0__::func_75(&uLocal_14))
	{
		__LIB_1__::func_283(&uLocal_14, 1);
	}
	if (!bVar1 && __LIB_0__::func_264(&uLocal_14) < 3f)
	{
		return 0;
	}
	func_50();
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2, "ARTHUR", Global_35, 0);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_2);
	return 1;
}

bool func_23(var uParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	__LIB_1__::func_725();
	__LIB_9__::func_391();
	if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_2, "ARTHUR"))
	{
		return true;
	}
	return false;
}

void func_50()
{
	var uVar0;
	struct<11> Var1;
	Var1.f_10 = 7;
	Var1 = 0;
	Var1.f_1 = 0;
	Var1.f_2 = 1;
	Var1.f_6 = { 670.11f, -1211.15f, 45.15f };
	Var1.f_9 = 185.857f;
	__LIB_2__::func_338(&uVar0, &Var1);
}

