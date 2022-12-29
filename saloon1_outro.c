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
	int iLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	float fLocal_13 = 0f;
	bool bLocal_14 = false;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
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
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_18);
	}
	func_2(&Local_18, &uScriptParam_0);
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
	if (bLocal_14)
	{
		CAM::_0x8370D34BD2E60B73();
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	return true;
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
	if (!bLocal_14)
	{
		AUDIO::SET_PED_IS_DRUNK(Global_35, false);
		PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Drunkness", 0f, -1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsDrunk", false, -1);
	}
	else
	{
		__LIB_3__::func_319(iLocal_15);
		__LIB_0__::func_484(&uLocal_17, iLocal_16, 0);
		__LIB_0__::func_172(iLocal_16);
	}
	__LIB_0__::func_431();
	return 1;
}

void func_19(var uParam0)
{
	if (__LIB_0__::func_895(Global_1835011[9 /*74*/].f_1) == 1)
	{
		bLocal_14 = true;
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
		{
			iLocal_15 = uParam0->f_2;
			ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(iLocal_15);
		}
	}
	if (bLocal_14)
	{
		iLocal_16 = VOLUME::_CREATE_VOLUME_BOX(-277.092f, 800.382f, 119.1905f, 0f, 0f, 9.954012f, 4.771447f, 2.07305f, 1.824199f);
		uLocal_17 = __LIB_1__::func_391(iLocal_16, 0, 0, 0);
		CAM::_0x8370D34BD2E60B73();
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
}

int func_21(var uParam0)
{
	if (!bLocal_14)
	{
		AUDIO::SET_PED_IS_DRUNK(Global_35, true);
		PED::_0x406CCF555B04FAD3(Global_35, 1, 0.75f);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsDrunk", true, -1);
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Drunkness", 0.75f, -1);
		fLocal_13 = 0.75f;
		__LIB_1__::func_148(&uLocal_10);
	}
	if (bLocal_14)
	{
		CAM::_0x8370D34BD2E60B73();
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	return 1;
}

bool func_23(var uParam0)
{
	float fVar0;
	float fVar1;
	if (!bLocal_14)
	{
		if ((!PED::_0x50F124E6EF188B22(Global_35) || PED::_0x6FB76442469ABD68(Global_35) != fLocal_13) || PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "Drunkness") != fLocal_13)
		{
			AUDIO::SET_PED_IS_DRUNK(Global_35, true);
			PED::_0x406CCF555B04FAD3(Global_35, 1, fLocal_13);
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Drunkness", fLocal_13, -1);
		}
		switch (iLocal_9)
		{
			case 0:
				if (__LIB_0__::func_265(&uLocal_10) >= 3f)
				{
					__LIB_1__::func_148(&uLocal_10);
					iLocal_9++;
				}
				break;
			case 1:
				fVar0 = __LIB_0__::func_265(&uLocal_10);
				fVar1 = (1f - ((4f - fVar0) / 4f));
				fLocal_13 = (0.75f - (0.75f * fVar1));
				fLocal_13 = __LIB_0__::func_251(fLocal_13, 0f, 0.75f);
				PED::_0x406CCF555B04FAD3(Global_35, 1, fLocal_13);
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Drunkness", fLocal_13, -1);
				if (fLocal_13 <= 0f)
				{
					return true;
				}
				break;
		}
	}
	else
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15))
		{
			return true;
		}
		switch (iLocal_9)
		{
			case 0:
				CAM::_0x8370D34BD2E60B73();
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15, false) && __LIB_6__::func_895(iLocal_15, "pl_getup"))
				{
					iLocal_9++;
				}
				break;
			case 1:
				CAM::_0x8370D34BD2E60B73();
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				if (__LIB_14__::func_429() || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_15, "s_getup", 1))
				{
					if (!ANIMSCENE::_0x8D81E7824B7753F7(iLocal_15, "s_getup", 1))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_15, "pl_getup", true);
					}
					iLocal_9++;
				}
				break;
			case 2:
				CAM::_0x8370D34BD2E60B73();
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(iLocal_15, "ARTHUR"))
				{
					__LIB_1__::func_148(&uLocal_10);
					iLocal_9++;
				}
				break;
			case 3:
				if (__LIB_0__::func_265(&uLocal_10) >= 3f)
				{
					return true;
				}
				break;
		}
	}
	return false;
}

