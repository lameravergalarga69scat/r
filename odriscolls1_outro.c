#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	bool bLocal_3 = false;
	int iLocal_4 = 0;
	bool bLocal_5 = false;
	bool bLocal_6 = false;
	vector3 vLocal_7 = { 0f, 0f, 0f };
	int iLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	struct<4> Local_15 = { 0, 0, 0, 0 } ;
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
	vLocal_7 = { -1318.148f, 2436.259f, 309.3206f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_15);
	}
	func_2(&Local_15, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_15))
	{
		__LIB_5__::func_233(&Local_15);
		switch (__LIB_0__::func_57(Local_15))
		{
			case 0:
				if (func_6(&Local_15))
				{
					__LIB_0__::func_19(&Local_15, 1);
				}
				break;
			case 1:
				if (func_8(&Local_15))
				{
					__LIB_0__::func_19(&Local_15, 2);
				}
				break;
			case 2:
				if (func_9(&Local_15))
				{
					__LIB_0__::func_19(&Local_15, 3);
				}
				break;
			case 3:
				func_1(&Local_15);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_15);
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
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_10, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_2, true, false))
	{
		return false;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_2, "Intro");
	return ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_2, "Intro");
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
	__LIB_0__::func_8(&Global_1935630, 1048576);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_4) && bLocal_5)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_4);
	}
	func_27(0);
	return 1;
}

void func_19(var uParam0)
{
	__LIB_0__::func_7(&Global_1935630, 1048576);
	iLocal_10 = ANIMSCENE::_CREATE_ANIM_SCENE("script@titles@title_gen_fewdayslater_onblack", 2, 0, false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_10);
	uParam0->f_2 = ANIMSCENE::_CREATE_ANIM_SCENE("script@timelapse@wnt4camp_intro", 2, "Intro", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2);
}

int func_21(var uParam0)
{
	if (!__LIB_0__::func_75(&uLocal_11))
	{
		__LIB_1__::func_283(&uLocal_11, 0);
		AUDIO::_0x6339C1EA3979B5F7("FADE_TO_BLACK", "DEATH_FAIL_RESPAWN_SCENES");
		func_27(1);
	}
	else if (__LIB_0__::func_265(&uLocal_11) >= 1f)
	{
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false, true);
		CAM::DO_SCREEN_FADE_IN(0);
		ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_7, false, false, true, true);
		ANIMSCENE::START_ANIM_SCENE(iLocal_10);
		MISC::SET_BIT(&(Global_1956580.f_1), 5);
		AUDIO::_0x9428447DED71FC7E("DEATH_FAIL_RESPAWN_SCENES");
		AUDIO::_0x6339C1EA3979B5F7("Pass_Time", "Chapter_Screen_Scenes");
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
		STREAMING::PREFETCH_SRL("script@story@WNT4@PRE_INT");
		STREAMING::_0xEF1A8A484118735E();
		return 1;
	}
	return 0;
}

bool func_23(var uParam0)
{
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	iLocal_4 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_7);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_4))
	{
		if (!bLocal_5)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_4);
			bLocal_5 = true;
		}
	}
	if (!bLocal_3)
	{
		__LIB_18__::func_408(3, 0, 0);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
		if (!bLocal_6 && __LIB_12__::func_581(1, 0, 0))
		{
			bLocal_6 = true;
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-470125497, true);
		}
		if (STREAMING::IS_SRL_LOADED())
		{
		}
		if (((((__LIB_0__::func_702(Global_1835011[3 /*74*/].f_1) && __LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[3 /*74*/].f_1), 4)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2, false)) && ((ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_10) >= ANIMSCENE::_GET_ANIM_SCENE_DURATION(iLocal_10) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_10)) || ANIMSCENE::_0xF94692EB9DC15D74(iLocal_10, 0))) && bLocal_6) && STREAMING::IS_SRL_LOADED())
		{
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_10);
			AUDIO::_0x9428447DED71FC7E("Chapter_Screen_Scenes");
			MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2, "ARTHUR", Global_35, 0);
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_2);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_2, "Intro", true);
			bLocal_3 = true;
			STREAMING::BEGIN_SRL();
			STREAMING::SET_SRL_TIME(0f);
		}
	}
	else
	{
		switch (iLocal_14)
		{
			case 0:
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2, false) && ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_2, "Shot1", 1))
				{
					MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
					CLOCK::SET_CLOCK_TIME(9, 0, 0);
					GRAPHICS::SET_TIMECYCLE_MODIFIER("winter4_introCMEmod");
					iLocal_14++;
				}
				break;
			case 1:
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2, false) && ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_2, "SHOT2", 1))
				{
					MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
					CLOCK::SET_CLOCK_TIME(9, 0, 0);
					GRAPHICS::SET_TIMECYCLE_MODIFIER("winter4_introCMEmod");
					iLocal_14++;
				}
				break;
			case 2:
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2, false) && ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_2, "SHOT3", 1))
				{
					MISC::_0x3373779BAF7CAF48("snowclearing", "snowclearing_mud1");
					MISC::_SET_WEATHER_TYPE(joaat("SNOWCLEARING"), true, true, false, 0f, false);
					CLOCK::SET_CLOCK_TIME(7, 0, 0);
					GRAPHICS::SET_TIMECYCLE_MODIFIER("winter4_introCMEmod");
					iLocal_14++;
				}
				break;
		}
		STREAMING::SET_SRL_TIME((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_2) * 1000f));
		if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_2) >= ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_2) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_2)) || ANIMSCENE::_0x73616E64696C132E(uParam0->f_2, 1))
		{
			if (__LIB_0__::func_1(Global_1935630, 1048576))
			{
				__LIB_0__::func_8(&Global_1935630, 1048576);
				STREAMING::END_SRL();
			}
			if (__LIB_0__::func_91())
			{
				return true;
			}
		}
	}
	return false;
}

void func_27(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_31(iVar0))
		{
			iVar1 = __LIB_0__::func_271(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				AUDIO::STOP_PED_SPEAKING(iVar1, bParam0);
			}
		}
		iVar0++;
	}
}

