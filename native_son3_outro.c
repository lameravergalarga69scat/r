#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5[2] = { 0, 0 };
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	bool bLocal_10 = false;
	bool bLocal_11 = false;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<4> Local_18 = { 0, 0, 0, 0 } ;
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
		func_1(&Local_18);
	}
	__LIB_11__::func_243(&Local_18, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_18))
	{
		__LIB_5__::func_233(&Local_18);
		switch (__LIB_0__::func_57(Local_18))
		{
			case 0:
				if (func_6(&Local_18))
				{
					__LIB_0__::func_19(&Local_18, 1);
				}
				break;
			case 1:
				if (func_8(&Local_18))
				{
					__LIB_0__::func_19(&Local_18, 2);
				}
				break;
			case 2:
				if (func_9(&Local_18))
				{
					__LIB_0__::func_19(&Local_18, 3);
				}
				break;
			case 3:
				func_1(&Local_18);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_18);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	__LIB_1__::func_752();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_699(uLocal_5[iVar0]))
		{
			__LIB_1__::func_774(uLocal_5[iVar0], 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		iVar2 = iVar1;
		if (__LIB_0__::func_31(iVar2) && __LIB_0__::func_699(iVar2))
		{
			iVar3 = Global_1360165[iVar1 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (__LIB_1__::func_22(iVar2))
				{
					__LIB_1__::func_774(iVar2, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar1++;
	}
	if (__LIB_4__::func_802(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		__LIB_4__::func_803(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	switch (iLocal_4)
	{
		case 0:
			if (__LIB_4__::func_802(uParam0, 1))
			{
				iLocal_8 = uParam0->f_2;
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_8))
			{
				iLocal_8 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@NTS3@leadout@ext@leadout", 0, 0, false, true);
				bVar0 = false;
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_8, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_8, true))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_8);
				}
				bVar0 = false;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_8, "pbl_Cough_A"))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_8, "pbl_Cough_A"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_8, "pbl_Cough_A");
				}
				bVar0 = false;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_8, "pbl_Cough_B"))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_8, "pbl_Cough_B"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_8, "pbl_Cough_B");
				}
				bVar0 = false;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_8, "pbl_Labored_Breath"))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_8, "pbl_Labored_Breath"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_8, "pbl_Labored_Breath");
				}
				bVar0 = false;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_8, "pbl_Wipe_Face"))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_8, "pbl_Wipe_Face"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_8, "pbl_Wipe_Face");
				}
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_4 = 1;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
			}
			if (bVar0)
			{
				iLocal_4 = 2;
			}
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_8, "arthur", Global_35, 0);
			if (bVar0)
			{
				iLocal_4 = 3;
			}
			break;
		case 3:
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
	return func_21(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!__LIB_0__::func_0(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_24(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_11(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_8))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_8);
	}
}

int func_21(var uParam0)
{
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	__LIB_1__::func_148(&uLocal_12);
	return 1;
}

bool func_24(var uParam0)
{
	if (iLocal_3 == 0 || iLocal_3 == 1)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	}
	func_45(1);
	switch (iLocal_3)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_8, false))
			{
				__LIB_1__::func_148(&uLocal_15);
				iLocal_3 = 1;
			}
			break;
		case 1:
			if (func_46())
			{
				iLocal_3 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_8, false))
			{
				iLocal_3 = 3;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_45(bool bParam0)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	if (bParam0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	}
	else
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	}
	__LIB_3__::func_807();
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FEED_INTERACT"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), true);
}

bool func_46()
{
	int iVar0;
	float fVar1;
	if (!bLocal_11)
	{
		if (__LIB_1__::func_871(&uLocal_15) > 3000)
		{
			bLocal_11 = true;
		}
	}
	if (func_65())
	{
		if (!__LIB_0__::func_75(&uLocal_12))
		{
			__LIB_1__::func_148(&uLocal_12);
		}
	}
	if (__LIB_1__::func_871(&uLocal_12) > 3000 && !bLocal_10)
	{
		iVar0 = iLocal_9 + 1;
		if (iVar0 > 3)
		{
			iVar0 = 0;
		}
		if (func_67(func_66(iVar0), 0))
		{
			iLocal_9++;
			if (iLocal_9 > 3)
			{
				iLocal_9 = 0;
			}
			__LIB_0__::func_37(&uLocal_12);
		}
	}
	if (bLocal_11 == 1)
	{
		fVar1 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
		if (((fVar1 >= 0.5f || fVar1 <= -0.5f) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_SPRINT"))) || bLocal_10)
		{
			if (!bLocal_10)
			{
				bLocal_10 = true;
			}
			if (func_67("pbl_Exit", 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_65()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_8))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_8, false))
	{
		return false;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_8, "Idle", 1))
	{
		return true;
	}
	return false;
}

char* func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_Cough_A";
		case 1:
			return "pbl_Cough_B";
		case 2:
			return "pbl_Labored_Breath";
		case 3:
			return "pbl_Wipe_Face";
	}
	return "pbl_Cough_A";
}

bool func_67(char* sParam0, int iParam1)
{
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_8, sParam0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_8, sParam0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_8, sParam0);
		}
	}
	else if (func_84() || iParam1)
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_8, sParam0, true);
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_8, false))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_8);
		}
		return true;
	}
	return false;
}

int func_84()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_8))
	{
		return 1;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_8, false))
	{
		return 1;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_8) >= 0.98f)
	{
		return 1;
	}
	return 0;
}

